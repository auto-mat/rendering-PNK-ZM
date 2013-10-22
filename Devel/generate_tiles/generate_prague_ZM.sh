# ÃzkÃ¡ Praha:
./generate_tiles_agregated.py "../../Devel/mapnik/my_styles/ZM/osm.xml" tilesZM-`date +%y%m%d`/ 50.17 14.20 49.96 14.65 8 18 4

rm tilesZM
ln -s tilesZM-`date +%y%m%d` tilesZM
