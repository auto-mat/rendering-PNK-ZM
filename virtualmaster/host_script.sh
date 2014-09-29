#!/bin/bash
date

cd ~/rendering-PNK-ZM/
git pull

export PYTHONIOENCODING=utf-8

export render_BW=false

function import_data {
   osm_url=$1
   check_md5=$2
   osm2pgsql_param=$3
   osm_filename='czech_republic.osm'

   cd 
   wget -nv "$osm_url" -O $osm_filename

   if $2; then
      #test downloaded file
      test "`md5sum $osm_filename | cut -d ' ' -f 1`" = "`wget ${osm_url}.md5 -O - | cut -d ' ' -f 1`" 
      if [ $? == 1 ]; then
         echo "Downloaded file is not complete"
         exit;
      fi;
   fi

   osm2pgsql -s $3 -d gisczech "/home/mtbmap/$osm_filename" -S "/home/mtbmap/rendering-PNK-ZM/Data/mtbmap.style" -C 1500 -U mtbmap

   rm "/home/mtbmap/$osm_filename"

   cd ~/rendering-PNK-ZM/Devel/systemdeploy/db_scripts/
   ./db_scripts.sh

   #psql gisczech -c "vacuum full;"

   echo "data import finished"
   date
}


function render {
   folder=$1
   render_bbox=$2
   minzoom=$3
   maxzoom=$4
   style=$5
   cd ~/rendering-PNK-ZM/Devel/generate_tiles/
   ./generate_tiles_agregated.py $style $folder/ $render_bbox $minzoom $maxzoom 1
   rsync -avW -e ssh $folder tiles@auto-mat.cz:/
   echo "rendering $6 finished at `date`"
   echo "parameters were $1 $2 $3 $4 $5 $6"
}

import_data "http://www.overpass-api.de/api/xapi?map?bbox=14.018,49.762,14.897,50.318" false
#render tiles_ZM "51.1 12 48.5 19" 8 14 "../../Devel/mapnik/my_styles/ZM/osm.xml" "CR"
#render tiles_ZM "50.318 14.018 49.762 14.897" 8 18 "../../Devel/mapnik/my_styles/ZM/osm.xml" "Vetsi Praha"
render tiles_ZM "50.17 14.20 49.96 14.65" 13 18 "../../Devel/mapnik/my_styles/ZM/osm.xml" "Mensi Praha"
render tiles_PNK "50.17 14.20 49.96 14.65" 13 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Mensi Praha"

rsync -avW -e ssh tiles_PNK tiles@auto-mat.cz:/tiles_PNK_Praha

if $render_BW; then
   ./BW.sh
   rsync -avW -e ssh tiles_PNK_BW tiles@auto-mat.cz:/
   echo "Black&white script finished at `date`"
   rm tiles_PNK_BW -R
fi

#render Plzen
import_data "http://www.overpass-api.de/api/xapi?map?bbox=12.936401,49.45295,13.914185,49.967123" false
render tiles_PNK "49.7902 13.2784 49.6792 13.4684" 13 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Plzen"
render tiles_ZM "49.7902 13.2784 49.6792 13.4684" 13 18 "../../Devel/mapnik/my_styles/ZM/osm.xml" "Plzen"
render tiles_ZMP "49.7902 13.2784 49.6792 13.4684" 13 18 "../../Devel/mapnik/my_styles/ZMP/osm.xml" "Plzen"


#import_data "http://download.geofabrik.de/europe/czech-republic-latest.osm.pbf" true "-r pbf"
#render tiles_PNK "51.1 12 48.5 19" 8 14 "../../Devel/mapnik/my_styles/MTB-main.xml" "CR"
#render tiles_PNK "50.6228 13.384 49.498 15.55" 8 15 "../../Devel/mapnik/my_styles/MTB-main.xml" "Stredocesky kraj"
#render tiles_PNK "50.318 14.018 49.762 14.897" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Vetsi Praha"


import_data "http://www.overpass-api.de/api/xapi?map?bbox=14.318619,48.902192,14.628983,49.063519" false
render tiles_PNK "48.99349 14.43839 48.94335 14.53418" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Ceske Budejovice"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=17.836252,49.744629,18.615067,49.946802" false
render tiles_PNK "49.8776 18.1364 49.7615 18.3427" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Ostrava"
render tiles_PNK "49.982839 17.827669 49.892611 17.974083" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Opava"
render tiles_PNK "49.899683 18.471399 49.809455 18.617813" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Karviná"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=17.023087,49.400612,17.557279,49.676623" false
render tiles_PNK "49.6204 17.2013 49.5658 17.3098" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Olomouc"
render tiles_PNK "49.478495 17.405206 49.429425 17.491361" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Prerov"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=16.383362,49.062169,16.848907,49.31438" false
render tiles_PNK "49.3 16.45 49.1 16.8" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Brno"
render tiles_ZM "49.3 16.45 49.1 16.8" 14 18 "../../Devel/mapnik/my_styles/ZM/osm.xml" "Brno"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=15.345154,49.865432,16.254272,50.385757" false
render tiles_PNK "50.2349 15.7841 50.1709 15.8818 " 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Hradec Kralove"
render tiles_PNK "50.068 15.726 50.004 15.824" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Pardubice"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=14.906387,50.649896,15.344467,50.843671" false
render tiles_PNK "50.7964 15.0097 50.7323 15.1074" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Liberec"
render tiles_PNK "50.7506 15.1435 50.713 15.1991" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Jablonec nad Nisou"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=13.857828,50.545204,14.417946,50.87902" false
render tiles_PNK "50.6904 13.9839 50.6463 14.0891" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Usti nad Labem"
render tiles_PNK "50.7962 14.1549 50.7254 14.2647" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Decin"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=15.457764,49.335862,15.696716,49.461876" false
render tiles_PNK "49.4239 15.5491 49.3792 15.6227" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Jihlava"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=17.346039,49.004547,17.585335,49.131633" false
render tiles_PNK "49.0933 17.4101 49.0536 17.4976" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Uherske Hradiste"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=17.433191,49.138142,17.780106,49.287525" false
render tiles_PNK "49.25665 17.565713 49.191534 17.737534" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Zlin"
render tiles_PNK "49.23197 17.468896 49.154748 17.600891" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Otrokovice"

import_data "http://www.overpass-api.de/api/xapi?map?bbox=14.812952,49.034361,15.196945,49.248445" false
render tiles_PNK "49.160514 14.974313 49.124763 15.035583" 14 18 "../../Devel/mapnik/my_styles/MTB-main.xml" "Jindrichuv hradec"

df -h
date

chmod a+rw /home/mtbmap/screenlog.0

#wait for screen to flush logfile
sleep 20

rsync -avW -e ssh /home/mtbmap/screenlog.0 tiles@auto-mat.cz:/log/render-`date +%y%m%d-%H:%M:%S`.log

virtualmaster destroy rendernow
