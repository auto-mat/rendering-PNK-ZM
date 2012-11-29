#!/bin/bash
echo "
cd ~/rendering-PNK-ZM/

git pull

export PYTHONIOENCODING=utf-8

cd ~/rendering-PNK-ZM/Data/
#osm_url = 'http://www.overpass-api.de/api/xapi?map?bbox=14.018,49.762,14.897,50.318'
osm_url = 'http://www.overpass-api.de/api/xapi?map?bbox=14.5,50.1,14.6,50.2'
osm_filename = 'czech_republic.osm'
wget "$osm_url" -O osm_filename

cd ~/rendering-PNK-ZM/Devel/systemdeploy/
./updatemap.py

cd ~/rendering-PNK-ZM/Devel/generate_tiles/

./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/ZM/osm.xml" tiles_ZM/ 50.17 14.20 49.96 14.65 8 18 1
#./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/ZM/osm.xml" tiles_ZM/ 50.318 14.018 49.762 14.897 8 18 1
#rsync -avW -e ssh tiles_ZM tiles@auto-mat.cz:/

#./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/MTB-main.xml" tiles_PNK/ 50.17 14.20 49.96 14.65 8 18 1
#./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/MTB-main.xml" tiles_PNK/ 50.318 14.018 49.762 14.897 8 18 1
#rsync -avW -e ssh tiles_PNK tiles@auto-mat.cz:/
" | su mtbmap 2>&1 | tee /home/mtbmap/render.log

chmod a+rw /home/mtbmap/render.log

#echo "rsync -avW -e ssh /home/mtbmap/render.log tiles@auto-mat.cz:/log/render-`date +%y%m%d-%H:%M:%S`.log" | su mtbmap
