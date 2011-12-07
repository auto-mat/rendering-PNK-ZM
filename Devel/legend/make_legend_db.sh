#!/bin/sh
osm2pgsql -s -d legend legend.osm -S ../../Data/mtbmap.style -C 2000 -U mtbmap

echo "alter table planet_osm_line add short_name text;
alter table planet_osm_point add short_name text;
alter table planet_osm_polygon add short_name text;
" | psql -d legend -U mtbmap

./cycle_relations2lines.py
./relations2lines.py
