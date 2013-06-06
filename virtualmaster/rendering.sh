cd ~/rendering-PNK-ZM/
git pull

export PYTHONIOENCODING=utf-8

cd 
#export download_bbox="14.018,49.762,14.897,50.318"
#export osm_url="http://www.overpass-api.de/api/xapi?map?bbox=$download_bbox"
#export osm_filename='czech_republic.osm'
#osm2pgsql -r pbf -s -d gisczech "/home/mtbmap/$osm_filename" -S "/home/mtbmap/rendering-PNK-ZM/Data/mtbmap.style" -C 2000 -U mtbmap

#Brno:
#export download_bbox="16.45,49.1,16.8,49.3"
#Thessaloniki:
#export download_bbox="22.8,40.6,23,40.7"
#export render_bbox="40.7 22.8 40.6 23"


export osm_url="http://download.geofabrik.de/europe/czech-republic-latest.osm.pbf"
export osm_filename='czech_republic.osm.pbf'

wget -nv "$osm_url" -O $osm_filename

[ `stat -c %s czech_republic.osm.pbf` -lt 300000000 ] && echo "Downloaded file too small" && exit

osm2pgsql -r pbf -s -d gisczech "/home/mtbmap/$osm_filename" -S "/home/mtbmap/rendering-PNK-ZM/Data/mtbmap.style" -C 1500 -U mtbmap

#grep \<remark\> $osm_filename && echo "Downloaded file is not complete" && exit

cd ~/rendering-PNK-ZM/Devel/systemdeploy/db_scripts/
./db_scripts.sh

echo "starting rendering job"

function render {
   folder=$1
   render_bbox=$2
   minzoom=$3
   maxzoom=$4
   style=$5
   cd ~/rendering-PNK-ZM/Devel/generate_tiles/
   ./generate_tiles_agregated.py $style $folder/ $render_bbox $minzoom $maxzoom 1
   rsync -avW -e ssh $folder tiles@auto-mat.cz:/upload/
}

#CR
render tiles_PNK "51.1 12 48.5 19" 8 14 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Stredocesky kraj
#render tiles_PNK "50.6228 13.384 49.498 15.55" 8 15 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Vetsi Praha:
#render tiles_PNK "50.318 14.018 49.762 14.897" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 
#render tiles_ZM "50.318 14.018 49.762 14.897" 8 18 "../../Devel/mapnik/my_styles/ZM/osm.xml"

#Mensi Praha:
render tiles_PNK "50.17 14.20 49.96 14.65" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 
render tiles_ZM "50.17 14.20 49.96 14.65" 8 18 "../../Devel/mapnik/my_styles/ZM/osm.xml"

#Ostrava
render tiles_PNK "49.8776 18.1364 49.7615 18.3427" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Olomouc
render tiles_PNK "49.6204 17.2013 49.5658 17.3098" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Brno:
render tiles_PNK "49.3 16.45 49.1 16.8" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 
#render tiles_ZM "49.3 16.45 49.1 16.8" 8 18 "../../Devel/mapnik/my_styles/ZM/osm.xml"

#Decin
render tiles_PNK "50.7962 14.1549 50.7254 14.2647" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Hradec Kralove
render tiles_PNK "50.2349 15.7841 50.1709 15.8818 " 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Pardubice
render tiles_PNK "50.068 15.726 50.004 15.824" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Liberec
render tiles_PNK "50.7964 15.0097 50.7323 15.1074" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Plzen
render tiles_PNK "49.7857 13.3106 49.7167 13.4198" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Usti nad Labem
render tiles_PNK "50.6904 13.9839 50.6463 14.0891" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Jihlava
render tiles_PNK "49.4239 15.5491 49.3792 15.6227" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Jablonec nad Nisou
render tiles_PNK "50.7506 15.1435 50.713 15.1991" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

#Uherske Hradiste
render tiles_PNK "49.0933 17.4101 49.0536 17.4976" 8 18 "../../Devel/mapnik/my_styles/MTB-main.xml" 

export render_BW=false
if $render_BW; then
   ./BW.sh
   rsync -avW -e ssh tiles_PNK_BW tiles@auto-mat.cz:/upload/
fi
