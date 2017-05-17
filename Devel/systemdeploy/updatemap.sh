#!/bin/bash -e
./updatemap.py
docker rm mtbmap -f
sudo su postgres -c "dropdb gis"
sudo su postgres -c "createdb gis -T gis_loading"
docker run --name mtbmap \
    --add-host=database:127.0.0.1 \
    -v /data/mod_tile:/var/lib/mod_tile \
    -v /data/cache_data:/usr/local/mapproxy/cache_data \
    -v /home/mtbmap/rendering-PNK-ZM/:/home/rendering \
    -p 80:80 \
    -d mtbmap
docker exec -it mtbmap "/home/rendering/docker/render_map.sh"
