#!/bin/bash -e
./updatemap.py
psql -h $POSTGISDB_HOST -U gis -c "ALTER DATABASE gis_loading RENAME TO gis_loading1;"
psql -h $POSTGISDB_HOST -d gis_loading1 -U gis -c "ALTER DATABASE gis RENAME TO gis_loading;"
psql -h $POSTGISDB_HOST -d gis_loading -U gis -c "ALTER DATABASE gis_loading1 RENAME TO gis;"
$RENDERING_DIR/docker/render_map.sh
