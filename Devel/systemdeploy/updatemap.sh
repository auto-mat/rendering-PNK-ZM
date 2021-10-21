#!/bin/bash -e
./updatemap.py
docker rm mtbmap -f
psql -U gis -c "ALTER DATABASE gis_loading RENAME TO gis_loading1;"
psql gis_loading1 -U gis -c "ALTER DATABASE gis RENAME TO gis_loading;"
psql gis_loading -U gis -c "ALTER DATABASE gis_loading1 RENAME TO gis;"
$RENDERING_DIR/docker/render_map.sh
