#!/bin/bash
set -e
./updatemap.py
set +e
psql -h $POSTGISDB_HOST -U gis -c "SELECT pg_terminate_backend(pg_stat_activity.pid) FROM pg_stat_activity WHERE pg_stat_activity.datname = 'gis' OR pg_stat_activity.datname = 'gis_loading' AND pid <> pg_backend_pid();"
set -e
psql -h $POSTGISDB_HOST -U gis -c "ALTER DATABASE gis_loading RENAME TO gis_loading1;"
psql -h $POSTGISDB_HOST -d gis_loading1 -U gis -c "ALTER DATABASE gis RENAME TO gis_loading;"
psql -h $POSTGISDB_HOST -d gis_loading -U gis -c "ALTER DATABASE gis_loading1 RENAME TO gis;"
$RENDERING_DIR/docker/render_map.sh
