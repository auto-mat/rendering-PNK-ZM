#!/usr/bin/env python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------
#
# this file is from OpenTrackMap project, thanks for Radek Barton
# change connection settings for your local environment
#

from psycopg2 import *
import re

# Create connection to DB server.

name_key="name"

for table in ("polygon", "line", "point"): 
   try:
      connection = connect("dbname='gisczech' user='mtbmap' password=''");
      auxilary_cursor = connection.cursor()
      auxilary_cursor.execute("ALTER TABLE planet_osm_%s DROP short_%s;" % (table, name_key))
      auxilary_cursor.close()
      connection.commit()
   except ProgrammingError:
      print "table column does not exist"

connection = connect("dbname='gisczech' user='mtbmap' password=''");
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

for table in ("polygon", "line", "point"): 
   auxilary_cursor.execute("ALTER TABLE planet_osm_%s ADD short_%s text;" % (table, name_key))

b="(^| )"
e="([^a-zA-ZáéíóúůýčďěňřšťÁÉÍÓÚŮÝČĎĚŇŘŠŤ]|$)"
shortcuts = (
      {"sqlpattern": "%(Č|č)eskoslovenské%", "pattern": b + "(č|Č)eskoslovenské(ho|)" + e, "query": "highway is not null", "substitution":"\\1\\2sl.\\4"},

      {"sqlpattern": "%(M|m)ost%", "pattern": b + "(M|m)ost(u|em|ě|)" + e, "query": "bridge is not null", "substitution":"\\1\\2.\\4"},
      {"sqlpattern": "%(P|p)oto%", "pattern": b + "(P|p)oto(k|ce|ku|ka|kem)" + e, "query": "waterway is not null", "substitution":"\\1\\2.\\4"},
      {"sqlpattern": "%(O|o)strov%", "pattern": b + "(O|o)strov(u|ě|a|)" + e, "query": "place='island'", "substitution":"\\1\\2.\\4"},

      {"sqlpattern": "%(N|n)árodní%", "pattern": b + "(N|n)árodní(m|mu|ch|ho|)" + e, "query": "not name='Národní'", "substitution":"\\1\\2ár.\\4"},
      {"sqlpattern": "%(N|n)áměstí%", "pattern": b + "(N|n)áměstí" + e, "substitution":"\\1\\2ám.\\3"},
      {"sqlpattern": "%(N|n)ábřeží%", "pattern": b + "(N|n)ábřeží" + e, "substitution":"\\1\\2ábř.\\3"},
      {"sqlpattern": "%(N|n)ádraží%", "pattern": b + "(N|n)ádraží" + e, "substitution":"\\1\\2ádr.\\3"},

      {"sqlpattern": "%(D|d)ivadl%", "pattern": b + "(D|d)ivadl(a|o|u)" + e, "substitution":"\\1\\2iv.\\4"},
      {"sqlpattern": "%(S|s)vat%", "pattern": b + "(S|s)vat(ý|á|é|ého|ých)" + e, "substitution":"\\1\\2v.\\4"},

      {"sqlpattern": "České(ho|mu|) vysoké(ho|mu|) učení technické(ho|mu|) v Praze","pattern": b + "České(ho|mu|) vysoké(ho|mu|) učení technické(ho|mu|) v Praze" + e, "substitution":"\\1ČVUT\\2"},
      {"sqlpattern": "(u|U)niverzit(y|ě|a) (k|K)arlov(y|ě|a)","pattern": b + "(u|U)niverzit(y|ě|a) (k|K)arlov(y|ě|a)" + e, "substitution":"\\1UK\\6"},

      {"pattern": b + "(v|V)elvyslanectví" + e, "substitution":"\\1\\2elv.\\3"},
      {"pattern": b + "Česk(é|á) (r|R)epubli(ce|ka)" + e, "substitution":"\\1ČR\\5"},
      {"pattern": b + "(k|K)nihovna" + e, "substitution":"\\1\\2nih.\\3"},
      {"pattern": b + "(m|M)ateřská (š|Š)kola" + e, "substitution":"\\1MŠ\\4"},
      {"pattern": b + "(z|Z)ákladní (š|Š)kola" + e, "substitution":"\\1ZŠ\\4"},
      {"pattern": b + "(s|S)třední (š|Š)kola" + e, "substitution":"\\1SŠ\\4"},
      {"pattern": b + "(v|V)ysoká (š|Š)kola" + e, "substitution":"\\1VŠ\\4"},
      )

#print shortcuts

# Select all route relations.
for shortcut in shortcuts:
   if shortcut.has_key("sqlpattern"):
      sqlpattern=shortcut["sqlpattern"]
   else:
      sqlpattern="%" + shortcut["pattern"] + "%"

   pattern=shortcut["pattern"]
   substitution=shortcut["substitution"]
   if shortcut.has_key("query"):
      query=shortcut["query"]
   else:
      query="true"

   if shortcut.has_key("tables"):
      tables=shortcut["tables"]
   else:
      tables={"point", "polygon", "line"}

   for table in tables:
      relation_cursor.execute("SELECT osm_id, %s, short_%s FROM planet_osm_%s WHERE (%s) AND %s SIMILAR TO '%s'" % (name_key, name_key, table, query, name_key, sqlpattern))
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
             p = re.compile(pattern, re.UNICODE)
             short_name = p.sub(substitution, name)
             print name, " -> ", short_name
             auxilary_cursor.execute("UPDATE planet_osm_%s SET short_%s = '%s' WHERE"
               " osm_id = %s" % (table, name_key, short_name, row[0]))

relation_cursor.close()
connection.commit()
