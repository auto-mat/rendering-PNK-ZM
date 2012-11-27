#!/bin/bash
cd rendering-PNK-ZM/

git pull

cd Devel/systemdeploy/
#./updatemap.py

cd ../generate_tiles/
./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/ZM/osm.xml" tiles_ZM/ 50.17 14.20 49.96 14.65 8 18 4
tar -cf tiles_ZM.tar tiles_ZM
scp tiles_ZM.tar tiles@auto-mat.cz:/home/tiles/tiles_ZM-`date +%y%m%d`.tar
rm tiles_ZM.tar

./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/MTB-main.xml" tiles/ 50.17 14.20 49.96 14.65 8 18 4
tar -cf tiles.tar tiles
scp tiles.tar tiles@auto-mat.cz:/home/tiles/tiles-`date +%y%m%d`.tar
rm tiles.tar

scp ~/render.log tiles@auto-mat.cz:/home/tiles/render-`date +%y%m%d`.log
