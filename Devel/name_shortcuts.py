#!/usr/bin/env python
# -*- coding: utf-8 -*-

#----------------------------------------------------------------------------
#
# this file is from OpenTrackMap project, thanks for Radek Barton
# change connection settings for your local environment
#

from psycopg2 import *
import re
import locale
locale.setlocale(locale.LC_ALL,'cs_CZ.utf8')

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

shortcuts = (
      {"sqlpattern": ur"(Č|č)eskoslovensk", "pattern": ur"\b(Č|č)eskoslovensk(o|ého|é|á|ý|ých)\b", "query": ur"highway is not null", "substitution": ur"\1s."},

      {"sqlpattern": ur"(L|l)ékárna", "pattern": ur"\b(L|l)ékárna\b", "query": ur"amenity='pharmacy'", "substitution": ur"\1ék."},
      {"sqlpattern": ur"(M|m)ost", "pattern": ur"\b(M|m)ost\b", "query": ur"bridge is not null", "substitution": ur"\1."},
      {"sqlpattern": ur"(P|p)oto", "pattern": ur"\b(P|p)oto(k|ce|ku|ka|kem)\b", "query": ur"waterway is not null", "substitution": ur"\1."},
      {"sqlpattern": ur"(O|o)strov", "pattern": ur"\b(O|o)strov(u|ě|a|)\b", "query": ur"place='island'", "substitution": ur"\1."},

      {"sqlpattern": ur"(N|n)árodní", "pattern": ur"\b(N|n)árodní(m|mu|ch|ho|)\b", "query": ur"not name='Národní'", "substitution": ur"\1ár."},
      {"sqlpattern": ur"(N|n)áměstí", "pattern": ur"\b(N|n)áměstí\b", "substitution": ur"\1ám."},
      {"sqlpattern": ur"(N|n)ábřeží", "pattern": ur"\b(N|n)ábřeží\b", "substitution": ur"\1ábř."},
      {"pattern": ur"\b(N|n)ádraží\b", "query": ur"railway is not null", "substitution": ur"\1ádr."},
      {"sqlpattern": ur"(N|n)ádvoří", "pattern": ur"\b(N|n)ádvoří\b", "substitution": ur"\1ádv."},
      {"sqlpattern": ur"(M|m)inisterstvo", "pattern": ur"\b(M|m)inisterstvo\b", "substitution": ur"\1in."},
      {"sqlpattern": ur"(V|v)ozovna", "pattern": ur"\b(V|v)ozovna\b", "substitution": ur"\1oz."},
      {"sqlpattern": ur"(K|k)oupaliště", "pattern": ur"\b(K|k)oupaliště\b", "substitution": ur"\1oup."},
      {"pattern": ur"\b(M|m)u(z|s)e(um|a)\b", "query": ur"tourism='museum'", "substitution": ur"\1uz."},
      {"sqlpattern": ur"(Z|z)ahrad", "pattern": ur"\b(Z|z)ahrad(ní|a|ě|u|y|ou)\b", "query": "highway is null", "substitution": ur"\1ahr."},
      {"sqlpattern": ur"(C|c)hat", "pattern": ur"\b(C|c)hat(ová|ové)\b", "query": "highway is null", "substitution": ur"\1hat."},
      {"pattern": ur"\b(T|t)řída\b", "query": "highway is not null", "substitution": ur"\1ř."},

      {"sqlpattern": ur"(D|d)ivadl", "pattern": ur"\b(D|d)ivadl(a|o|u)\b", "substitution": ur"\1iv."},
      {"sqlpattern": ur"(S|s)vat", "pattern": ur"\b(S|s)vat(ý|á|é|ého|ých)\b", "substitution": ur"\1v."},
      {"sqlpattern": ur"(P|p)ann", "pattern": ur"\b(P|p)ann(a|y|u|ě) (M|m)ari(a|e|i)\b", "substitution": ur"\1. \3ari\4"},
      {"sqlpattern": ur"(S|s)ynagog", "pattern": ur"\b(S|s)ynagog(a|y|u)\b", "substitution": ur"\1yn."},

      {"pattern": ur"\b(č|Č)eské(ho|mu|) vysoké(ho|mu|) učení technické(ho|mu|) v Praze\b", "substitution": ur"ČVUT", "ignorecase": "true"},
      {"pattern": ur"\bUniverzit(y|ě|a) Karlov(y|ě|a)\b", "substitution": ur"UK", "ignorecase": "true"},
      {"pattern": ur"\bAkademie věd (č|Č)eské republiky\b", "substitution": ur"AVČR", "ignorecase": "true"},
      {"pattern": ur"\bmatematicko-fyzikální fakulta\b", "substitution": ur"MFF", "ignorecase": "true"},
      {"pattern": ur"\bdopravní podnik\b", "substitution": ur"DP", "ignorecase": "true"},
      {"pattern": ur"\b(č|Č)istírna odpadních vod\b", "substitution": ur"ČOV", "ignorecase": "true"},
      {"pattern": ur"\b(č|Č)esk(é|á) republi(ce|ka)\b", "substitution": ur"ČR", "ignorecase": "true"},
      {"pattern": ur"\bmateřská (š|Š)kola\b", "substitution": ur"MŠ", "ignorecase": "true"},
      {"pattern": ur"\bzákladní (š|Š)kola\b", "substitution": ur"ZŠ", "ignorecase": "true"},
      {"pattern": ur"\bzákladní umělecká (š|Š)kola\b", "substitution": ur"ZUŠ", "ignorecase": "true"},
      {"pattern": ur"\bstřední (š|Š)kola\b", "substitution": ur"SŠ", "ignorecase": "true"},
      {"pattern": ur"\bvysoká (š|Š)kola\b", "substitution": ur"VŠ", "ignorecase": "true"},

      {"pattern": ur"\b(k|K)nihovna\b", "substitution": ur"\1nih."},
      {"pattern": ur"\b(v|V)elvyslanectví\b", "substitution": ur"\1elv."},
      {"pattern": ur"\b(g|G)ymn(a|á)(z|s)ium\b", "substitution": ur"\1ymn."},
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
      relation_cursor.execute(q)
      #print q
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

             short_name = p.sub(substitution, name.decode('utf8')).encode('utf8')
             print name, " -> ", short_name
             auxilary_cursor.execute("UPDATE planet_osm_%s SET short_%s = '%s' WHERE"
               " osm_id = %s" % (table, name_key, short_name, row[0]))

relation_cursor.close()
connection.commit()
