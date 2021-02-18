#!/bin/bash -e
./updatemap.py
docker rm mtbmap -f
psql -U gis -c "ALTER DATABASE gis_loading RENAME TO gis_loading1;"
psql gis_loading1 -U gis -c "ALTER DATABASE gis RENAME TO gis_loading;"
psql gis_loading -U gis -c "ALTER DATABASE gis_loading1 RENAME TO gis;"
docker run --name mtbmap \
    --add-host=database:127.0.0.1 \
    -v /data/mod_tile:/var/lib/mod_tile \
    -v /data/cache_data:/usr/local/mapproxy/cache_data \
    -v /home/mtbmap/rendering-PNK-ZM/:/home/rendering \
    -p 82:80 \
    -d mtbmap
sleep 30
docker exec -t mtbmap "/home/rendering/docker/render_map.sh"
