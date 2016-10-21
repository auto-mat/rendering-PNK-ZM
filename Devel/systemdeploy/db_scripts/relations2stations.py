#!/usr/bin/env python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------
#
# this file is from OpenTrackMap project, thanks for Radek Barton
# change connection settings for your local environment
#

from psycopg2 import *

# Create connection to DB server.
connection = connect("dbname='gis' user='gis' password=''");
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

# Read allowed tags of line table.
copy_tags = {'public_transport': True, 'name': True, 'ref': True, 'train': True, 'bus': True, 'tram': True, 'subway': True}

reject_tags = { }

# Clean previous tracks.
auxilary_cursor.execute("DROP TABLE IF EXISTS planet_osm_station_lines_rels")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_station_lines_rels'")
auxilary_cursor.execute("CREATE TABLE planet_osm_station_lines_rels AS SELECT * FROM planet_osm_line WHERE osm_id = 0")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_station_lines_rels'")
auxilary_cursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_station_lines_rels', 'way', 2, 900913, 'LINESTRING')")
auxilary_cursor.execute("ALTER TABLE planet_osm_station_lines_rels add public_transport text, ADD train text, ADD bus text, ADD subway text, ADD rel_id text")

auxilary_cursor.execute("DROP TABLE IF EXISTS planet_osm_station_points_rels")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_station_points_rels'")
auxilary_cursor.execute("CREATE TABLE planet_osm_station_points_rels AS SELECT * FROM planet_osm_point WHERE osm_id = 0")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_station_points_rels'")
auxilary_cursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_station_points_rels', 'way', 2, 900913, 'LINESTRING')")
auxilary_cursor.execute("ALTER TABLE planet_osm_station_points_rels add public_transport text, ADD train text, ADD tram text, ADD bus text, ADD subway text, ADD rel_id text")

# Select all route relations.
relation_cursor.execute("SELECT id, parts, tags FROM planet_osm_rels WHERE"
  " 'public_transport' = ANY(tags) AND (%s)" % (" OR ".join(["'%s' = ANY(tags)" % (key,)
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
        continue_all = False

        for I in range(0, len(row[2]), 2):
           key = row[2][I]
           value = row[2][I + 1]
           if copy_tags.has_key(key):
              tags[key] = value
           if reject_tags.has_key(key) and reject_tags[key] == value:
              continue_all = True
              break

        if continue_all:
           continue

        # Copy relation ways.
        where_statement = ""
        if len(row[1]):
            where_statement = ", ".join([str(way_id) for way_id in row[1]])
            auxilary_cursor.execute("INSERT INTO planet_osm_station_lines_rels SELECT *"
              " FROM planet_osm_line WHERE osm_id IN (%s) AND NOT EXISTS (SELECT"
              " * FROM planet_osm_station_lines_rels WHERE planet_osm_station_lines_rels.osm_id ="
              " planet_osm_line.osm_id)" % (where_statement))

        # For each line in relation.
        if len(tags) and len(row[1]):
            # Update lines of the relation with its tags.
            set_statement = ", ".join(["%s = '%s'" % (key, tags[key]
              .replace('\'', '\\\'')) for key in tags.keys()])
            print "Updating lines:", where_statement
            auxilary_cursor.execute("UPDATE planet_osm_station_lines_rels SET %s WHERE"
              " osm_id IN (%s)" % (set_statement, where_statement))

        # Copy relation points.
        where_statement = ""
        if len(row[1]):
            where_statement = ", ".join([str(point_id) for point_id in row[1]])
            auxilary_cursor.execute("INSERT INTO planet_osm_station_points_rels SELECT *"
              " FROM planet_osm_point WHERE osm_id IN (%s) AND NOT EXISTS (SELECT"
              " * FROM planet_osm_station_points_rels WHERE planet_osm_station_points_rels.osm_id ="
              " planet_osm_point.osm_id)" % (where_statement))

        # For each line in relation.
        if len(tags) and len(row[1]):
            # Update lines of the relation with relation ids.
            auxilary_cursor.execute("UPDATE planet_osm_station_lines_rels SET rel_id = %s WHERE"
              " osm_id IN (%s)" % (row[0], where_statement))

        # For each point in relation.
        if len(tags) and len(row[1]):
            # Update points of the relation with its tags.
            set_statement = ", ".join(["%s = '%s'" % (key, tags[key]
              .replace('\'', '\\\'')) for key in tags.keys()])
            print "Updating points:", where_statement
            print "Set: ", set_statement
            auxilary_cursor.execute("UPDATE planet_osm_station_points_rels SET %s WHERE"
              " osm_id IN (%s)" % (set_statement, where_statement))

        # For each point in relation.
        if len(tags) and len(row[1]):
            # Update points of the relation with relation ids.
            auxilary_cursor.execute("UPDATE planet_osm_station_points_rels SET rel_id = %s WHERE"
              " osm_id IN (%s)" % (row[0], where_statement))

auxilary_cursor.close()
relation_cursor.close()
connection.commit()
