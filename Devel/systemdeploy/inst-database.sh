#!/bin/bash

# Ubuntu 9.10 Karmic Koala spatial database install script.
# This script installs PostgreSQL 8.4 database with PostGIS extension
# creates new database user and first spatial database prepared for OSM
# vector data import. It's necessary to run with superuser privilegies.

# change this for the root directory of your future OSM system
DBUSER="mtbmap"
if [ -z "$inner_variable" ]
then
  export MTBMAP_DIRECTORY=../..
fi

DATABASE="gisczech"

cd $MTBMAP_DIRECTORY
mkdir sw Data

# install this packages with all dependencies
sudo apt-get install postgresql postgresql-9.1 postgresql-9.1-postgis osm2pgsql
# GUI for PostgreSQL, not needed
#sudo apt-get install pgadmin3
sudo apt-get install proj libgeos-dev libxml2-dev python-psycopg2 subversion

cd sw
sudo apt-get install postgis
# wget http://postgis.org/download/postgis-1.5.1.tar.gz -O postgis-1.5.1.tar.gz
# tar xvfz postgis-1.5.1.tar.gz
# cd postgis-1.5.1
# ./configure
# make
# sudo make install
sudo passwd postgres
sudo -u postgres createuser $DBUSER
createdb -E UTF8 -O $DBUSER $DATABASE
createlang plpgsql $DATABASE
psql -d $DATABASE -f /usr/share/postgresql/9.1/contrib/postgis-1.5/postgis.sql
echo "ALTER TABLE geometry_columns OWNER TO $DBUSER; \
      ALTER TABLE spatial_ref_sys OWNER TO $DBUSER;" \
      | psql -d $DATABASE
#psql -d $DATABASE -f /usr/share/postgresql/8.4/contrib/_int.sql

# spatial database is now created, but must be prepared OSM data input

# include "Google Mercator" projection
psql -d $DATABASE -f /usr/share/osm2pgsql/900913.sql

# now you can upload OSM data using Osm2pgsql or updatemap.py script,

