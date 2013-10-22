./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/MTB-main.xml" tiles-`date +%y%m%d`/ 50.318 14.018 49.762 14.897 8 18 4
rm tiles
ln -s tiles-`date +%y%m%d` tiles
