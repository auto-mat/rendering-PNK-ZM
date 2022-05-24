#!/run/current-system/sw/bin/bash -e

TILES_WATCHDOG_PY_FILE="../../k8/watchdog.py"
WATCHDOG_PY_FILE_PID=$(pgrep -f  "python $TILES_WATCHDOG_PY_FILE" || exit 0)

create_pgpass_file () {
    echo $POSTGISDB_HOST:$POSTGISDB_PORT:*:$POSTGISDB_USER:$POSTGISDB_PASSWORD > $HOME/.pgpass
}

create_aws_credentials () {
    mkdir -p $HOME/.aws
    echo -e "[default]\naws_access_key_id = $AWS_ACCESS_KEY_ID\naws_secret_access_key = $AWS_SECRET_ACCESS_KEY" > $HOME/.aws/credentials
    echo -e "[default]\nregion = eu-west-1\noutput = json" > $HOME/.aws/config
}

remove_docker_container () {
    if [ "$( docker ps -a | grep -c $RENDER_USER)" -gt 0 ]; then
        docker rm $RENDER_USER -f
    fi
}

start_watchdog () {
    if [ -z "$WATCHDOG_PY_FILE_PID" ]; then
        python $TILES_WATCHDOG_PY_FILE &
    fi
}

mkdir -p ../../logs
source .env
remove_docker_container
create_pgpass_file
python updatemap.py
psql -h $POSTGISDB_HOST -U $POSTGISDB_USER -p $POSTGISDB_PORT -c "SELECT pg_terminate_backend(pg_stat_activity.pid) FROM pg_stat_activity WHERE pg_stat_activity.datname = '$POSTGISDB_NAME'"
psql -h $POSTGISDB_HOST -U $POSTGISDB_USER -p $POSTGISDB_PORT -c "ALTER DATABASE $POSTGISDB_NAME RENAME TO gis_loading1;"
psql gis_loading1 -h $POSTGISDB_HOST -U $POSTGISDB_USER -p $POSTGISDB_PORT -c "ALTER DATABASE gis RENAME TO gis_loading;"
psql gis_loading -h $POSTGISDB_HOST -U $POSTGISDB_USER -p $POSTGISDB_PORT -c "ALTER DATABASE gis_loading1 RENAME TO gis;"
start_watchdog
docker run --name $RENDER_USER \
       -e RENDERING_DIR=$RENDERING_DIR \
       -e UPDATE_DB_AND_RENDERING_LOG=$UPDATE_DB_AND_RENDERING_LOG \
       -e RENDERING_QUADRANTS_LOG=$RENDERING_QUADRANTS_LOG \
       -e POSTGISDB_NAME=$POSTGISDB_NAME \
       -e POSTGISDB_USER=$POSTGISDB_USER \
       -e POSTGISDB_HOST=$POSTGISDB_HOST \
       -e POSTGISDB_PORT=$POSTGISDB_PORT \
       -e POSTGISDB_PASSWORD=$POSTGISDB_PASSWORD \
       -e MAPNIK_RENDER_LIST_NTHREADS=$MAPNIK_RENDER_LIST_NTHREADS \
       -v /home/$RENDER_USER/data/mod_tile:/var/lib/mod_tile \
       -v /home/$RENDER_USER/data/cache_data:/usr/local/mapproxy/cache_data \
       -v /home/$RENDER_USER/rendering-PNK-ZM/:/home/rendering \
       -p 82:80 \
       -d $RENDER_USER /usr/bin/supervisord
sleep 30
docker exec -t $RENDER_USER bash -c "chmod +x $UPDATE_POSTGIS_CONN_PARAMS \
&& cd $(dirname ${UPDATE_POSTGIS_CONN_PARAMS}) && ./$(basename ${UPDATE_POSTGIS_CONN_PARAMS}) \
&& cd /usr/local/etc/ && sed -i -e \"0,/num_threads=.*/s//num_threads=$MAPNIK_RENDER_LIST_NTHREADS/\" renderd.conf \
&& sed --file ${RENDERING_DIR}/docker/renderd.conf.sed --in-place renderd.conf \
&& echo -e \"${LOG_DIR}${UPDATE_DB_AND_RENDERING_LOG} {\n    missingok\n    notifempty\n    rotate 3\n    size 24M\n}\" > $LOGROTATE_MNK_RENDERING_CONFIG \
&& echo -e \"${LOG_DIR}${RENDERING_QUADRANTS_LOG} {\n    missingok\n    notifempty\n    rotate 3\n    size 12k\n}\" >> $LOGROTATE_MNK_RENDERING_CONFIG \
&& chown -R www-data:www-data /var/lib/mod_tile \
&& supervisorctl restart renderd"
docker exec -t $RENDER_USER "/home/rendering/docker/render_map.sh"
