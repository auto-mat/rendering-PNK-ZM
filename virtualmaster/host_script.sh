#!/bin/bash
echo '
cd ~/rendering-PNK-ZM/
#Mensi Praha:
export download_bbox="14.018,49.762,14.897,50.318"
export render_bbox="50.17 14.20 49.96 14.65"

#Vetsi Praha:
#export download_bbox="14.018,49.762,14.897,50.318"
#export render_bbox="50.318 14.018 49.762 14.897"

#Thessaloniki:
#export download_bbox="22.8,40.6,23,40.7"
#export render_bbox="40.7 22.8 40.6 23"

#Brno:
#export download_bbox="16.45,49.1,16.8,49.3"
#export render_bbox="49.3 16.45 49.1 16.8"

git pull

export PYTHONIOENCODING=utf-8

cd ~/rendering-PNK-ZM/Data/
export osm_url="http://www.overpass-api.de/api/xapi?map?bbox=$download_bbox"
export osm_filename='czech_republic.osm'
wget "$osm_url" -O $osm_filename

cd ~/rendering-PNK-ZM/Devel/systemdeploy/
./updatemap.py

cd ~/rendering-PNK-ZM/Devel/generate_tiles/

./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/ZM/osm.xml" tiles_ZM/ $render_bbox 8 18 1
rsync -avW -e ssh tiles_ZM tiles@auto-mat.cz:/

./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/MTB-main.xml" tiles_PNK/ $render_bbox 8 18 1
rsync -avW -e ssh tiles_PNK tiles@auto-mat.cz:/
' | su mtbmap 2>&1 | tee /home/mtbmap/render.log

chmod a+rw /home/mtbmap/render.log

echo "rsync -avW -e ssh /home/mtbmap/render.log tiles@auto-mat.cz:/log/render-`date +%y%m%d-%H:%M:%S`.log" | su mtbmap
