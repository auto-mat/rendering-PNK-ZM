#!/usr/bin/env bash

echo -e "<Parameter name=\"type\">postgis</Parameter>\n\
<Parameter name=\"password\">$POSTGISDB_PASSWORD</Parameter>\n\
<Parameter name=\"host\">'$POSTGISDB_HOST'</Parameter>\n\
<Parameter name=\"port\">$POSTGISDB_PORT</Parameter>\n\
<Parameter name=\"user\">$POSTGISDB_USER</Parameter>\n\
<Parameter name=\"dbname\">$POSTGISDB_NAME</Parameter>\n\
<Parameter name=\"estimate_extent\">false</Parameter>\n\
<Parameter name=\"extent\">-20037508,-19929239,20037508,19929239</Parameter>\n\
" | tee inc/datasource-settings.xml.inc inc/latlon-datasource-settings.xml.inc > /dev/null
