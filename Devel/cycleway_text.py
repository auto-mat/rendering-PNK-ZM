#!/usr/bin/env python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------
#
# this file is from OpenTrackMap project, thanks for Radek Barton
# change connection settings for your local environment
#

from psycopg2 import *

# Create connection to DB server.
connection = connect("dbname='gisczech' user='mtbmap' password=''");
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

# Select all route relations.
relation_cursor.execute("SELECT osm_id, ref FROM planet_osm_line WHERE ref is not null and (lcn is not null or ncn is not null or rcn is not null)")
while True:
    # Fetch some of the result.
    rows = relation_cursor.fetchmany(100)

    # Empty result means end of query.
    if not len(rows):
        break;

    # Process relations.
    for row in rows:
       ref = row[1].strip()
       ref = ref + '  '
       print ref
       auxilary_cursor.execute("UPDATE planet_osm_line SET ref = '%s' WHERE"
         " osm_id = %s" % (ref, row[0]))

auxilary_cursor.close()
relation_cursor.close()
connection.commit()
