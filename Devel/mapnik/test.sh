#!/bin/bash

if [ -z "$inner_variable" ]
then
  export MTBMAP_DIRECTORY=../..
fi

STYLE="NoHeights"
STYLE2="MTB-main"
for j in `seq 1 6`
do
  time for i in `seq 7 16`;
    do
      rm -r $MTBMAP_DIRECTORY/BP/My_Tiles/$STYLE/$i;
      time python test.py $i "$STYLE".xml;
      rm -r $MTBMAP_DIRECTORY/BP/My_Tiles/$STYLE2/$i;
      time python test.py $i "$STYLE2".xml;
    done > $MTBMAP_DIRECTORY/BP/My_Tiles/out$j.txt 2> $MTBMAP_DIRECTORY/BP/My_Tiles/out$j.txt
done
