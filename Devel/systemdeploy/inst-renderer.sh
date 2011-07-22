#!/bin/bash

# script installs Mapnik renderer
# you may need some other packages, which are not in this script, check
# http://trac.mapnik.org/wiki/UbuntuInstallation in case of some problems
if [ -z "$inner_variable" ]
then
  export MTBMAP_DIRECTORY=../..
fi

sudo apt-get install -y g++ cpp \
libboost-dev libboost-filesystem-dev \
libboost-iostreams-dev libboost-program-options-dev \
libboost-python-dev libboost-regex-dev \
libboost-thread-dev \
libfreetype6 libfreetype6-dev \
libjpeg62 libjpeg62-dev \
libltdl7 libltdl-dev \
libpng12-0 libpng12-dev \
libgeotiff-dev libtiff4 libtiff4-dev libtiffxx0c2 \
libcairo2 libcairo2-dev python-cairo python-cairo-dev \
libcairomm-1.0-1 libcairomm-1.0-dev \
ttf-dejavu ttf-dejavu-core ttf-dejavu-extra \
build-essential python-nose libgdal1-dev

sudo apt-get install curl libcurl4-gnutls-dev libboost-python-dev libtiff4-dev cairomm-1.0-dev

cd $MTBMAP_DIRECTORY/sw
svn co http://svn.mapnik.org/tags/release-0.7.1/ mapnik
cd mapnik

# patch for offset lines rendering
wget http://trac.mapnik.org/raw-attachment/ticket/180/mapnik0.7.1-offsets_v3.patch
patch -p0 < mapnik0.7.1-offsets_v4.patch


python scons/scons.py configure INPUT_PLUGINS=all OPTIMIZATION=3 SYSTEM_FONTS=/usr/share/fonts/truetype/ttf-dejavu/
python scons/scons.py
sudo python scons/scons.py install

sudo ldconfig

# try in python: import mapnik
# no output means successful instalation
