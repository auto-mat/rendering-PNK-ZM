#!/bin/bash
apt-get -y install imagemagick

echo '
cd ~/rendering-PNK-ZM/
git pull
' | su mtbmap 2>&1 | tee /home/mtbmap/render.log

su mtbmap -c "nohup /home/mtbmap/rendering-PNK-ZM/virtualmaster/rendering.sh" 2>&1 | tee /home/mtbmap/render.log

chmod a+rw /home/mtbmap/render.log

echo "rsync -avW -e ssh /home/mtbmap/render.log tiles@auto-mat.cz:/log/render-`date +%y%m%d-%H:%M:%S`.log" | su mtbmap
