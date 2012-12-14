#!/bin/sh
for png in `find tiles/ -name "*.png"`;
do
  pngBW=`echo $png | sed s/tiles/tilesBW/`
  echo "converting $png to $pngBW"
  convert "$png" -modulate 100,50 "$pngBW"
done;
