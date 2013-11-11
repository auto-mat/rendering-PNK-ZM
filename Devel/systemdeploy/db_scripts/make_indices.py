from psycopg2 import *

# Create connection to DB server.
connection = connect("dbname='gisczech' user='mtbmap' password=''");
relation_cursor = connection.cursor()
auxilary_cursor = connection.cursor()

#auxilary_cursor.execute("drop index if exists contours_height_idx" )
##auxilary_cursor.execute("create index contours_height_idx on contours (height)")
##
#auxilary_cursor.execute("drop index if exists stations_points_osm_id_idx" )
##auxilary_cursor.execute("create index stations_points_osm_id_idx on planet_osm_station_points_rels (osm_id)")
#auxilary_cursor.execute("drop index if exists stations_points_rel_id_idx")
##auxilary_cursor.execute("create index stations_points_rel_id_idx on planet_osm_station_points_rels (rel_id)")
#for table in ['point', 'line', 'roads', 'polygon']:
#    for amenity in ['highway', 'amenity', 'waterway', 'z_order', 'way_area']:
#        auxilary_cursor.execute("drop index if exists planet_osm_%(table)s_%(amenity)s_idx3" % {'amenity':amenity, 'table': table})
##        auxilary_cursor.execute("create index %(table)s_%(amenity)s_idx on planet_osm_%(table)s (%(amenity)s)" % {'amenity':amenity, 'table': table})

base = ['highway', 'amenity', 'waterway', 'landuse', 'leisure', 'aeroway', 'military', 'natural', 'power', 'tourism', 'railway', 'layer', 'bridge', 'barrier', 'historic', 'access', 'foot', 'bicycle', 'building', 'man_made']

indices = { 
    'contours': ['height'],
    'planet_osm_station_points_rels': ['osm_id', 'rel_id', 'highway', 'amenity'],
    'planet_osm_station_lines_rels': ['osm_id', 'rel_id', 'highway', 'amenity'],
    'planet_osm_point': base + ['z_order'],
    'planet_osm_line': base + ['z_order', 'oneway', 'tunnel'],
    'planet_osm_roads': base + ['oneway', 'tunnel'],
    'planet_osm_polygon': base + ['z_order', 'way_area'],
}

for index in indices:
    for amenity in indices[index]:
        table = index
        print("drop index if exists %(table)s_%(amenity)s_idx" % {'amenity':amenity, 'table': table})
        auxilary_cursor.execute("drop index if exists %(table)s_%(amenity)s_idx" % {'amenity':amenity, 'table': table})
        print("create index %(table)s_%(amenity)s_idx on %(table)s (\"%(amenity)s\")" % {'amenity':amenity, 'table': table})
        auxilary_cursor.execute("create index %(table)s_%(amenity)s_idx on %(table)s (\"%(amenity)s\")" % {'amenity':amenity, 'table': table})

auxilary_cursor.close()
relation_cursor.close()
connection.commit()
