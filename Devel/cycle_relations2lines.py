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

# Read allowed tags of line table.
copy_tags = {'route': True}

# Clean previous cycleways.
auxilary_cursor.execute("DROP TABLE IF EXISTS planet_osm_cycleway_rels")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_cycleway_rels'")
auxilary_cursor.execute("CREATE TABLE planet_osm_cycleway_rels AS SELECT * FROM planet_osm_line WHERE osm_id = 0")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_cycleway_rels'")
auxilary_cursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_cycleway_rels', 'way', 2, 900913, 'LINESTRING')")
auxilary_cursor.execute("ALTER TABLE planet_osm_cycleway_rels ADD role text;")

# Select all route relations.
relation_cursor.execute("SELECT id, parts, tags, members FROM planet_osm_rels WHERE"
  " 'route' = ANY(tags) AND (%s)" % (" OR ".join(["'%s' = ANY(tags)" % (key,)
  for key in copy_tags.keys()])))
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
        for I in range(0, len(row[2]), 2):
           key = row[2][I]
           value = row[2][I + 1]
           if key == 'route' and value == 'bicycle':
              tags[key] = value

        if not tags.has_key('route'):
              continue

        roles = {}
        l = len(row[3])
        for I in range(0, l/2):
           role = str(row[3][I*2+1])
           id = str(row[3][I*2])
           if not role == '' and id[0] == 'w':
              if not roles.has_key(role):
                 roles[role] = []
              roles[role].append(id[1:])

        # Copy relation ways.
        where_statement = ""
        if len(row[1]):
            where_statement = ", ".join([str(way_id) for way_id in row[1]])
            auxilary_cursor.execute("INSERT INTO planet_osm_cycleway_rels SELECT *"
              " FROM planet_osm_line WHERE osm_id IN (%s) AND NOT EXISTS (SELECT"
              " * FROM planet_osm_cycleway_rels WHERE planet_osm_cycleway_rels.osm_id ="
              " planet_osm_line.osm_id)" % (where_statement))

        # Add roles
        if len(roles) and len(row[1]):
           for r in roles.keys():
               role_statement = ", ".join([str(way_id) for way_id in roles[r]])
               auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET role = '%s' WHERE"
                 " osm_id IN (%s)" % (r, role_statement))

        # For each line in relation.
        if len(tags) and len(row[1]):
            # Update lines of the relation with its tags.
            set_statement = ", ".join(["%s = '%s'" % (key, tags[key]
              .replace('\'', '\\\'')) for key in tags.keys()])
            print "Updating lines:", where_statement
            auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET %s WHERE"
              " osm_id IN (%s)" % (set_statement, where_statement))

auxilary_cursor.close()
relation_cursor.close()
connection.commit()
