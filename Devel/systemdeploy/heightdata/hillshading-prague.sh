#!/bin/bash
#tento skript transformuje výšková data od IPRu do vrstevnic a stínování

export krovak="+proj=krovak +lat_0=49.5 +lon_0=24.83333333333333 +alpha=30.28813972222222 \
                +k=0.9999 +x_0=0 +y_0=0 +ellps=bessel +pm=greenwich +units=m +no_defs \
                +towgs84=570.8,85.7,462.8,4.998,1.587,5.261,3.56"

shp2pgsql -d -I -g way MAP_vrstevnice_1m_l contours-ipr | psql -q gisczech -U mtbmap

rm DTM1M-hillshade-krovak.tif
gdaldem hillshade DTM1M.tif DTM1M-hillshade-krovak.tif -s 0.2

rm hillshade30-masked.tif
gdalwarp -crop_to_cutline -cutline "PG:dbname=gisczech user=mtbmap" -csql "SELECT ST_Transform(ST_GeomFromText('POLYGON((12.0 51.0, 12.0 48.0, 19.0 48.0, 19.0 51.0, 12.0 51.0), (14.7168 50.2131, 14.7685 49.9636, 14.2508 49.918, 14.1965 50.1673, 14.7168 50.2131))', 4326), 900913);" hillshade30.tif hillshade30-masked.tif
