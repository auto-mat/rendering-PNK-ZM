#!/usr/bin/env python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------
#
# this file is from OpenTrackMap project, thanks for Radek Barton
# change connection settings for your local environment
#
import os

from psycopg2 import *

# Create connection to DB server.
connection = connect(
   "dbname='{db_name}' user='{user}' host='{host}' port='{port}'".format(
      db_name=os.getenv("POSTGISDB_NAME", "gis_loading"),
      user=os.getenv("POSTGISDB_USER", "gis"),
      host=os.getenv("POSTGISDB_HOST", "localhost"),
      port=os.getenv("POSTGISDB_PORT", "5432"),
   ),
)
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

# Read allowed tags of line table.
copy_tags = {'kct_red' : True, 'kct_green' : True, 'kct_blue' : True,
  'kct_yellow' : True, 'marked_trail' : True, 'marked_trail_red' : True,
  'marked_trail_green' : True, 'marked_trail_blue' : True,
  'marked_trail_yellow' : True, 'network' : True, 'route' : True}

reject_tags = { 'operator' : 'CZ:binko' }

# Clean previous tracks.
auxilary_cursor.execute("DROP TABLE IF EXISTS planet_osm_track_rels")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_track_rels'")
auxilary_cursor.execute("CREATE TABLE planet_osm_track_rels AS SELECT * FROM planet_osm_line WHERE osm_id = 0")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_track_rels'")
auxilary_cursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_track_rels', 'way', 2, 900913, 'LINESTRING')")

# Select all route relations.
relation_cursor.execute("SELECT id, parts, tags FROM planet_osm_rels WHERE"
  " 'route' = ANY(tags) AND (%s)" % (" OR ".join(["'%s' = ANY(tags)" % (key,)
  for key in list(copy_tags.keys())])))
while True:
    # Fetch some of the result.
    rows = relation_cursor.fetchmany(100)

    # Empty result means end of query.
    if not len(rows):
        break;

    # Process relations.
    for row in rows:
        # Read relation tags.
        tags = {}
        continue_all = False

        for I in range(0, len(row[2]), 2):
           key = row[2][I]
           value = row[2][I + 1]
           if key in copy_tags:
              tags[key] = value
           if key in reject_tags and reject_tags[key] == value:
              continue_all = True
              break

        if continue_all:
           continue

        # Copy relation ways.
        where_statement = ""
        if len(row[1]):
            where_statement = ", ".join([str(way_id) for way_id in row[1]])
            auxilary_cursor.execute("INSERT INTO planet_osm_track_rels SELECT *"
              " FROM planet_osm_line WHERE osm_id IN (%s) AND NOT EXISTS (SELECT"
              " * FROM planet_osm_track_rels WHERE planet_osm_track_rels.osm_id ="
              " planet_osm_line.osm_id)" % (where_statement))

        # For each line in relation.
        if len(tags) and len(row[1]):
            # Update lines of the relation with its tags.
            set_statement = ", ".join(["%s = '%s'" % (key, tags[key]
              .replace('\'', '\\\'')) for key in list(tags.keys())])
            print(("Updating lines:", where_statement))
            auxilary_cursor.execute("UPDATE planet_osm_track_rels SET %s WHERE"
              " osm_id IN (%s)" % (set_statement, where_statement))

auxilary_cursor.close()
relation_cursor.close()
connection.commit()
connection.close()
