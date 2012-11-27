#!/bin/bash
su mtbmap

cd rendering-PNK-ZM/

git pull

cd Devel/systemdeploy/
./updatemap.py

cd ../generate_tiles/
./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/ZM/osm.xml" tiles_ZM/ 50.17 14.20 49.96 14.65 8 18 1
./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/MTB-main.xml" tiles/ 50.17 14.20 49.96 14.65 8 18 1

rsync -avW -e ssh tiles pdlouhy@auto-mat.cz:/home/pdlouhy
rsync -avW -e ssh tiles_ZM pdlouhy@auto-mat.cz:/home/pdlouhy
