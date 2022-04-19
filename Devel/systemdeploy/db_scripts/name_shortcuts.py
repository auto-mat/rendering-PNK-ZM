#!/usr/bin/env python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------
#
# this file is from OpenTrackMap project, thanks for Radek Barton
# change connection settings for your local environment
#

import os

from psycopg2 import *
import re

# Create connection to DB server.

name_key="name"

for table in ("polygon", "line", "point"):
   try:
      connection = connect(
         "dbname='{db_name}' user='{user}' host='{host}' port='{port}'"
         " password='{password}'".format(
            db_name=os.getenv("POSTGISDB_NAME", "gis_loading"),
            user=os.getenv("POSTGISDB_USER", "gis"),
            password=os.getenv("POSTGISDB_PASSWORD"),
            host=os.getenv("POSTGISDB_HOST", "localhost"),
            port=os.getenv("POSTGISDB_PORT", "5432"),
         ),
      )
      auxilary_cursor = connection.cursor()
      query = "ALTER TABLE planet_osm_%s DROP short_%s;" % (table, name_key)
      print(query)
      auxilary_cursor.execute(query)
      auxilary_cursor.close()
      connection.commit()
   except ProgrammingError:
      print(("table column \"short_" + name_key + "\" does not exist".encode('utf8')))

connection = connect(
   "dbname='{db_name}' user='{user}' host='{host}' port='{port}'"
   " password='{password}'".format(
      db_name=os.getenv("POSTGISDB_NAME", "gis_loading"),
      user=os.getenv("POSTGISDB_USER", "gis"),
      password=os.getenv("POSTGISDB_PASSWORD"),
      host=os.getenv("POSTGISDB_HOST", "localhost"),
      port=os.getenv("POSTGISDB_PORT", "5432"),
   ),
)
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

for table in ("polygon", "line", "point"):
   query = "ALTER TABLE planet_osm_%s ADD short_%s text;" % (table, name_key)
   print(query)
   auxilary_cursor.execute(query)
   #query = "UPDATE planet_osm_%(table)s SET short_%(name_key)s = %(name_key)s" % {"table": table, "name_key": name_key}
   #print(query)
   #auxilary_cursor.execute(query)

shortcuts = (
      )

#print shortcuts

# Select all route relations.
for shortcut in shortcuts:
   if "sqlpattern" in shortcut:
      sqlpattern=shortcut["sqlpattern"]
   else:
      sqlpattern=shortcut["pattern"]
      sqlpattern = sqlpattern.replace('\\b','\\\\y')

   pattern=shortcut["pattern"]
   substitution=shortcut["substitution"]

   if "ignorecase" in shortcut and shortcut["ignorecase"] == "true":
      ignorecase="*"
   else:
      ignorecase=""

   if "query" in shortcut:
      query=shortcut["query"]
   else:
      query="true"

   if "tables" in shortcut:
      tables=shortcut["tables"]
   else:
      tables={"point", "polygon", "line"}

   for table in tables:
      q = "SELECT osm_id, %s, short_%s FROM planet_osm_%s WHERE (%s) AND %s ~%s '%s'" % (name_key, name_key, table, query, name_key, ignorecase, sqlpattern)
      print((q.encode('utf8')))
      relation_cursor.execute(q)
      while True:
          # Fetch some of the result.
          rows = relation_cursor.fetchmany(100)

          # Empty result means end of query.
          if not len(rows):
              break;

          # Process relations.
          for row in rows:
             name = str(row[1])
             if row[2] != None:
                name = row[2]
             name = name.strip().replace('\'', '\\\'')
             if ignorecase == "*":
                p = re.compile(pattern, re.UNICODE | re.IGNORECASE)
             else:
                p = re.compile(pattern, re.UNICODE)

             short_name = p.sub(substitution, name.decode('utf8'))
             update_query = "UPDATE planet_osm_%s SET short_%s = '%s' WHERE osm_id = %s" % (table, name_key, short_name, row[0])
             print(update_query)
             auxilary_cursor.execute(update_query)

relation_cursor.close()
connection.commit()
connection.close()
