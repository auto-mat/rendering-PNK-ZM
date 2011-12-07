#!/usr/bin/env python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------
#
# this file is from OpenTrackMap project, thanks for Radek Barton
# change connection settings for your local environment
#

from psycopg2 import *

# Create connection to DB server.
connection = connect("dbname='legend' user='mtbmap' password=''");
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

# Read allowed tags of line table.
copy_tags = {'route': True}
# copy_tags1 = {'ref': True, 'network': True, 'state': True}

# proposed_refs = {}
# refs = {}

# Clean previous cycleways.
auxilary_cursor.execute("DROP TABLE IF EXISTS planet_osm_cycleway_rels")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_cycleway_rels'")
auxilary_cursor.execute("CREATE TABLE planet_osm_cycleway_rels AS SELECT * FROM planet_osm_line WHERE osm_id = 0")
auxilary_cursor.execute("DELETE FROM geometry_columns WHERE f_table_name = 'planet_osm_cycleway_rels'")
auxilary_cursor.execute("INSERT INTO geometry_columns VALUES ('', 'public', 'planet_osm_cycleway_rels', 'way', 2, 900913, 'LINESTRING')")
auxilary_cursor.execute("ALTER TABLE planet_osm_cycleway_rels ADD role text, ADD role_forward integer default 0, ADD role_backward integer default 0, ADD role_bidirectional integer default 0;")
# auxilary_cursor.execute("ALTER TABLE planet_osm_cycleway_rels ADD refs text, ADD proposed_refs text;")

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

           if key == 'network' and value == 'ncn':
              tags['ncn'] = 'yes'
           if key == 'network' and value == 'rcn':
              tags['rcn'] = 'yes'
           if key == 'network' and value == 'lcn':
              tags['lcn'] = 'yes'
           # if copy_tags1.has_key(key):
           #    tags[key] = value

        if not tags.has_key('route'):
              continue

        # if tags.has_key('ref'):
        #    for way_id in row[1]:
        #       if tags.has_key('state'):
        #          last_refs = ""
        #          if proposed_refs.has_key(way_id):
        #             last_refs = ", " + proposed_refs[way_id]
        #          else:
        #             proposed_refs[way_id] = {}

        #          proposed_refs[way_id] = tags['ref'] + last_refs
        #          #print proposed_refs[way_id]
        #       else:
        #          last_refs = ""
        #          if refs.has_key(way_id):
        #             last_refs = ", " + refs[way_id]
        #          else:
        #             refs[way_id] = {}

        #          refs[way_id] = tags['ref'] + last_refs
        #          #print refs[way_id]

        roles = {}
        bidirectionals = []
        l = len(row[3])
        for I in range(0, l/2):
           role = str(row[3][I*2+1])
           id = str(row[3][I*2])
           if role <> 'forward' and role <> 'backward':
              bidirectionals.append(id[1:])
           if id[0] == 'w':
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
        # if len(roles) and len(row[1]):
        #    for r in roles.keys():
        #        role_statement = ", ".join([str(way_id) for way_id in roles[r]])
        #        auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET role = '%s' WHERE"
        #          " osm_id IN (%s)" % (r, role_statement))
        # Add forward roles
        if roles.has_key("forward"):
            role_statement = ", ".join([str(way_id) for way_id in roles['forward']])
            auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET role_forward = role_forward + 1 WHERE"
              " osm_id IN (%s)" % (role_statement))
        # Add backward roles
        if roles.has_key("backward"):
            role_statement = ", ".join([str(way_id) for way_id in roles['backward']])
            auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET role_backward = role_backward + 1 WHERE"
              " osm_id IN (%s)" % (role_statement))
        # Add no roles
        if roles.has_key("bidirectional"):
            role_statement = ", ".join([str(way_id) for way_id in bidirectionals])
            auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET role_bidirectional = role_bidirectional + 1 WHERE"
              " osm_id IN (%s)" % (role_statement))

        # For each line in relation.
        if len(tags) and len(row[1]):
            # Update lines of the relation with its tags.
            set_statement = ", ".join(["%s = '%s'" % (key, tags[key]
              .replace('\'', '\\\'')) for key in tags.keys()])
            print "Updating lines:", where_statement
            auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET %s WHERE"
              " osm_id IN (%s)" % (set_statement, where_statement))

# update all refs
# for way_id in refs.keys():
#    auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET refs = '%s' WHERE"
#      " osm_id = %s" % (refs[way_id].replace('\'', '\\\''), way_id))
# for way_id in proposed_refs.keys():
#    auxilary_cursor.execute("UPDATE planet_osm_cycleway_rels SET proposed_refs = '%s' WHERE"
#      " osm_id = %s" % (proposed_refs[way_id].replace('\'', '\\\''), way_id))

auxilary_cursor.close()
relation_cursor.close()
connection.commit()
