#!/bin/bash -e
source .env
./updatemap.py
docker rm $RENDER_USER -f
psql -U $POSTGISDB_USER -W $POSTGISDB_PASSWORD -c "ALTER DATABASE gis_loading RENAME TO gis_loading1;"
psql gis_loading1 -U $POSTGISDB_USER -W $POSTGISDB_PASSWORD -c "ALTER DATABASE $POSTGISDB_NAME RENAME TO gis_loading;"
psql gis_loading -U $POSTGISDB_USER -W $POSTGISDB_PASSWORD -c "ALTER DATABASE gis_loading1 RENAME TO $POSTGISDB_NAME;"
docker run --name $RENDER_USER \
    --add-host="database:$POSTGISDB_HOST" \
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
    -d $RENDER_USER
sleep 30
docker exec -d $RENDER_USER "/home/rendering/Devel/mapnik/update_postgis_conn_param.sh"
docker exec -t $RENDER_USER "/home/rendering/docker/render_map.sh"
