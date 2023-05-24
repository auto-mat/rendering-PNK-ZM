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
      connection = connect("dbname='gis_loading' user='gis' password=''");
      auxilary_cursor = connection.cursor()
      query = "ALTER TABLE planet_osm_%s DROP short_%s;" % (table, name_key)
      auxilary_cursor.execute(query)
      auxilary_cursor.close()
      connection.commit()
   except ProgrammingError:
      print(u"table column \"short_" + name_key + "\"does not exist".encode('utf8'))

connection = connect("dbname='gis_loading' user='gis' password=''");
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

for table in ("polygon", "line", "point"): 
   query = "ALTER TABLE planet_osm_%s ADD short_%s text;" % (table, name_key)
   auxilary_cursor.execute(query)
   query = "UPDATE planet_osm_%(table)s SET short_%(name_key)s = %(name_key)s" % {"table": table, "name_key": name_key}
   auxilary_cursor.execute(query)

shortcuts = (
      {"sqlpattern": r"(Č|č)eskoslovensk", "pattern": r"\b(Č|č)eskoslovensk(o|ého|é|á|ý|ých)\b", "query": r"highway is not null", "substitution": r"\1s."},

      {"sqlpattern": r"(L|l)ékárna", "pattern": r"\b(L|l)ékárna\b", "query": r"amenity='pharmacy'", "substitution": r"\1ék."},
      {"sqlpattern": r"(M|m)ost", "pattern": r"\b(M|m)ost\b", "query": r"bridge is not null", "substitution": r"\1."},
      {"sqlpattern": r"(P|p)oto", "pattern": r"\b(P|p)oto(k|ce|ku|ka|kem)\b", "query": r"waterway is not null", "substitution": r"\1."},
      {"sqlpattern": r"(R|r)ybník", "pattern": r"\b(R|r)ybní(k|ce|ku|ka|kem)\b", "query": r"waterway is not null or (landuse is not null) or ('natral' is not null)", "substitution": r"\1yb."},
      {"sqlpattern": r"(O|o)strov", "pattern": r"\b(O|o)strov(u|ě|a|)\b", "query": r"place='island'", "substitution": r"\1."},

      {"sqlpattern": r"(N|n)árodní", "pattern": r"\b(N|n)árodní(m|mu|ch|ho|)\b", "query": r"not name='Národní'", "substitution": r"\1ár."},
      {"sqlpattern": r"(N|n)áměstí", "pattern": r"\b(N|n)áměstí\b", "substitution": r"\1ám."},
      {"sqlpattern": r"(N|n)ábřeží", "pattern": r"\b(N|n)ábřeží\b", "substitution": r"\1ábř."},
      {"pattern": r"(N|n)ádraží", "query": r"railway is not null and highway is null", "substitution": r"\1ádr."},
      {"sqlpattern": r"(N|n)ádvoří", "pattern": r"\b(N|n)ádvoří\b", "substitution": r"\1ádv."},
      {"sqlpattern": r"(M|m)inisterstvo", "pattern": r"\b(M|m)inisterstvo\b", "substitution": r"\1in."},
      {"sqlpattern": r"(V|v)ozovna", "pattern": r"\b(V|v)ozovna\b", "substitution": r"\1oz."},
      {"sqlpattern": r"(K|k)oupaliště", "pattern": r"\b(K|k)oupaliště\b", "substitution": r"\1oup."},
      {"pattern": r"(M|m)u(z|s)e(um|a)", "query": r"tourism='museum'", "substitution": r"\1uz."},
      {"sqlpattern": r"(Z|z)ahrad", "pattern": r"\b(Z|z)ahrad(ní|a|ě|u|y|ou)\b", "query": "highway is null", "substitution": r"\1ahr."},
      {"sqlpattern": r"(C|c)hat", "pattern": r"\b(C|c)hat(ová|ové)\b", "query": "highway is null", "substitution": r"\1hat."},
      {"pattern": r"(T|t)řída", "query": "highway is not null", "substitution": r"\1ř."},

      {"sqlpattern": r"(D|d)ivadl", "pattern": r"\b(D|d)ivadl(a|o|u)\b", "substitution": r"\1iv."},
      {"sqlpattern": r"(S|s)vat", "pattern": r"\b(S|s)vat(ý|á|é|ého|ých)\b", "substitution": r"\1v."},
      {"sqlpattern": r"(P|p)ann", "pattern": r"\b(P|p)ann(a|y|u|ě) (M|m)ari(a|e|i)\b", "substitution": r"\1. \3ari\4"},
      {"sqlpattern": r"(S|s)ynagog", "pattern": r"\b(S|s)ynagog(a|y|u)\b", "substitution": r"\1yn."},

      {"pattern": r"(č|Č)eské(ho|mu|) vysoké(ho|mu|) učení technické(ho|mu|)( v Praze|)", "substitution": r"ČVUT", "ignorecase": "true"},
      {"pattern": r"Univerzit(y|ě|a) Karlov(y|ě|a)", "substitution": r"UK", "ignorecase": "true"},
      {"pattern": r"Akademie věd (č|Č)eské republiky", "substitution": r"AVČR", "ignorecase": "true"},
      {"pattern": r"matematicko-fyzikální fakulta", "substitution": r"MFF", "ignorecase": "true"},
      {"pattern": r"dopravní podnik", "substitution": r"DP", "ignorecase": "true"},
      {"pattern": r"(č|Č)istírna odpadních vod", "substitution": r"ČOV", "ignorecase": "true"},
      {"pattern": r"(č|Č)esk(é|á) republi(ce|ka)", "substitution": r"ČR", "ignorecase": "true"},
      {"pattern": r"mateřská (š|Š)kola", "substitution": r"MŠ", "ignorecase": "true"},
      {"pattern": r"základní (š|Š)kola", "substitution": r"ZŠ", "ignorecase": "true"},
      {"pattern": r"základní umělecká (š|Š)kola", "substitution": r"ZUŠ", "ignorecase": "true"},
      {"pattern": r"střední (š|Š)kola", "substitution": r"SŠ", "ignorecase": "true"},
      {"pattern": r"vysoká (š|Š)kola", "substitution": r"VŠ", "ignorecase": "true"},

      {"pattern": r"(k|K)nihovna", "substitution": r"\1nih."},
      {"pattern": r"(v|V)elvyslanectví", "substitution": r"\1elv."},
      {"pattern": r"(g|G)ymn(a|á)(z|s)ium", "substitution": r"\1ymn."},

      {"pattern": r", Metro .", "substitution": r""},
      )

#print shortcuts

# Select all route relations.
for shortcut in shortcuts:
   if shortcut.has_key("sqlpattern"):
      sqlpattern=shortcut["sqlpattern"]
   else:
      sqlpattern=shortcut["pattern"]
      sqlpattern = sqlpattern.replace('\\b','\\\\y')

   pattern=shortcut["pattern"]
   substitution=shortcut["substitution"]

   if shortcut.has_key("ignorecase") and shortcut["ignorecase"] == "true":
      ignorecase="*"
   else:
      ignorecase=""

   if shortcut.has_key("query"):
      query=shortcut["query"]
   else:
      query="true"

   if shortcut.has_key("tables"):
      tables=shortcut["tables"]
   else:
      tables={"point", "polygon", "line"}

   for table in tables:
      q = "SELECT osm_id, %s, short_%s FROM planet_osm_%s WHERE (%s) AND %s ~%s '%s'" % (name_key, name_key, table, query, name_key, ignorecase, sqlpattern)
      print(q.encode('utf8'))
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
             update_query = u"UPDATE planet_osm_%s SET short_%s = '%s' WHERE osm_id = %s" % (table, name_key, short_name, row[0])
             print(update_query)
             auxilary_cursor.execute(update_query)

relation_cursor.close()
connection.commit()
