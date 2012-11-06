<Style name="stations">
    <Rule>
      &maxscale_zoom16;
      <Filter>[railway]='subway_entrance' and not [wheelchair]='yes'</Filter>
      <PointSymbolizer file="&symbols;/SVG/subway_entrance.svg" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom16;
      <Filter>[railway]='subway_entrance' and [wheelchair]='yes'</Filter>
      <PointSymbolizer file="&symbols;/SVG/subway_entrance_wheelchair.svg" placement="interior"/>
    </Rule>

    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[railway]='station' and [transport]='subway' and not [disused]='yes' and [wheelchair]='yes'</Filter>
      <PointSymbolizer file="&symbols;/SVG/subway_station_wheelchair.svg" placement="interior" allow-overlap="true" transform="scale(0.4)"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='station' and [transport]='subway' and not [disused]='yes' and [wheelchair]='yes'</Filter>
      <PointSymbolizer file="&symbols;/SVG/subway_station_wheelchair.svg" placement="interior" allow-overlap="true" transform="scale(1)"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and [transport]='subway' and not [disused]='yes' and [wheelchair]='yes'</Filter>
      <PointSymbolizer file="&symbols;/SVG/subway_station_wheelchair.svg" placement="interior" allow-overlap="true" transform="scale(1.5)"/>
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[railway]='station' and [transport]='subway' and not [disused]='yes' and not [wheelchair]='yes'</Filter>
      <PointSymbolizer file="&symbols;/SVG/subway_station.svg" placement="interior" allow-overlap="true" transform="scale(0.4)"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='station' and [transport]='subway' and not [disused]='yes' and not [wheelchair]='yes'</Filter>
      <PointSymbolizer file="&symbols;/SVG/subway_station.svg" placement="interior" allow-overlap="true" transform="scale(1)"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and [transport]='subway' and not [disused]='yes' and not [wheelchair]='yes'</Filter>
      <PointSymbolizer file="&symbols;/SVG/subway_station.svg" placement="interior" allow-overlap="true" transform="scale(1.5)"/>
    </Rule>

    <Rule>
      &maxscale_zoom13;
      <Filter>[railway]='station' and [transport]='subway' and [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/subway_station_disused.png" placement="interior"/>
    </Rule>

    <Rule>
      &maxscale_zoom12;
      &minscale_zoom13;
      <Filter>[railway]='station' and not [transport]='subway' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/halt.png" placement="interior" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='station' and not [transport]='subway' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/station_small.png" placement="interior" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
      <Filter>[railway]='station' and not [transport]='subway' and [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/station_disused.png" placement="interior" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and not [transport]='subway' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/train_station.png" placement="interior" allow-overlap="true"/>
    </Rule>

    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='halt' or [aerialway]='station'</Filter>
      <PointSymbolizer file="&symbols;/halt.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='halt' or [aerialway]='station'</Filter>
      <PointSymbolizer file="&symbols;/station_small.png" placement="interior"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='halt' or [aerialway]='station'</Filter>
      <TextSymbolizer size="8" fill="&color_halt_text;" dy="-8" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway] ='halt' or [aerialway]='station'</Filter>
      <TextSymbolizer size="10" fill="&color_halt_text;" dy="-10" fontset-name="book-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='tram_stop'</Filter>
      <PointSymbolizer file="&symbols;/tram_stop.png" placement="interior" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='tram_stop'</Filter>
      <PointSymbolizer file="&symbols;/tram_stop_small.png" placement="interior" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='tram_stop' and [in_relation]=false</Filter>
      <TextSymbolizer size="8" fill="&color_tram_stop_text;" dy="-8" fontset-name="book-fonts" halo-radius="1" wrap-width="0" allow-overlap="true" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='tram_stop' and [in_relation]=false</Filter>
      <TextSymbolizer size="10" fill="&color_tram_stop_text;" dy="-10" fontset-name="book-fonts" halo-radius="1" wrap-width="0" allow-overlap="true" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='station' and not [transport]='subway' and not [disused]='yes'</Filter>
      <TextSymbolizer size="9" fill="&color_station_text;" dy="-8" allow-overlap="true" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and not [transport]='subway' and not [disused]='yes'</Filter>
      <TextSymbolizer size="11" fill="&color_station_text;" dy="-10" allow-overlap="true" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and not [transport]='subway' and [disused]='yes'</Filter>
      <TextSymbolizer size="9" fill="&color_station_disused_text;" dy="-9" allow-overlap="true" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">([name])</TextSymbolizer>
    </Rule>

    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='station' and [transport]='subway' and not [disused]='yes'</Filter>
      <TextSymbolizer size="9" fill="&color_subway_station_text;" dy="-8" allow-overlap="true" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and [transport]='subway' and not [disused]='yes'</Filter>
      <TextSymbolizer size="11" fill="&color_subway_station_text;" dy="-12" allow-overlap="true" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and [transport]='subway' and [disused]='yes'</Filter>
      <TextSymbolizer size="9" fill="&color_subway_station_disused_text;" dy="-9" allow-overlap="true" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior">([name])</TextSymbolizer>
    </Rule>
</Style>

<Style name="bus_sites">
    <Rule>
      <Filter>[bus_stop]=true and [tram_stop]=true</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <TextSymbolizer size="10" fill="&color_tram_stop_text;" dy="-5" fontset-name="book-fonts" halo-radius="1" wrap-width="0" allow-overlap="true" placement="interior">[name]</TextSymbolizer>
      <TextSymbolizer size="8" fill="&color_bus_stop_text;" dy="5" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[bus_stop] is null and [tram_stop]=true</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <TextSymbolizer size="10" fill="&color_tram_stop_text;" fontset-name="book-fonts" halo-radius="1" wrap-width="0" allow-overlap="true" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      <Filter>[bus_stop]=true and [tram_stop] is null</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <TextSymbolizer size="8" fill="&color_bus_stop_text;" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="tram_sites">
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <TextSymbolizer size="8" fill="&color_tram_stop_text;" dy="-8" fontset-name="book-fonts" halo-radius="1" wrap-width="0" allow-overlap="true" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      &minscale_zoom15;
      <TextSymbolizer size="10" fill="&color_tram_stop_text;" dy="-10" fontset-name="book-fonts" halo-radius="1" wrap-width="0" allow-overlap="true" placement="interior">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="bus_sites_lines">
    <Rule>
      <Filter>[railway]='tram_stop'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="&color_tram_site;" stroke-width="3" stroke-opacity="&opacity_site;"/>
    </Rule>
    <Rule>
      <Filter>[highway]='bus_stop' or [amenity]='bus_stop'</Filter>
      &maxscale_zoom16;
      &minscale_zoom18;
      <LineSymbolizer stroke="&color_bus_site;" stroke-width="3" stroke-opacity="&opacity_site;"/>
    </Rule>
</Style>
<Style name="bus_stops">
    <Rule>
      &maxscale_zoom16;
      &minscale_zoom16;
      <TextSymbolizer size="8" fill="&color_bus_stop_text;" dy="6" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom17;
      &minscale_zoom17;
      <TextSymbolizer size="8" fill="&color_bus_stop_text;" dy="12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom18;
      &minscale_zoom18;
      <TextSymbolizer size="8" fill="&color_bus_stop_text;" dy="12" fontset-name="bold-fonts" halo-radius="1" wrap-width="0" placement="interior" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
</Style>

<Layer name="amenity-stations" status="on" srs="&osm2pgsql_projection;">
    <StyleName>stations</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,railway,aerialway,disused,transport, wheelchair,
      case when short_name is not null then short_name else name end as name,
      exists(select * from &prefix;_station_points_rels where osm_id = p1.osm_id) as in_relation
      from &prefix;_point as p1
      where railway in ('station','halt','tram_stop','subway_entrance')
         or aerialway='station'
      ) as stations
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
<Layer name="amenity-stations-poly" status="on" srs="&osm2pgsql_projection;">
    <StyleName>stations</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,name,railway,aerialway,disused,transport, wheelchair,
      exists(select * from &prefix;_station_points_rels where osm_id = p1.osm_id) as in_relation
      from &prefix;_polygon as p1
      where railway in ('station','halt','tram_stop','subway_entrance')
         or aerialway='station'
      ) as stations
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="bus_stops" status="on" srs="&osm2pgsql_projection;">
    <StyleName>bus_stops</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way, name
         from &prefix;_point as p1
         where (p1.highway='bus_stop' or p1.amenity = 'bus_stop')
         and not exists(select * from &prefix;_station_points_rels where osm_id = p1.osm_id)
      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="bus_sites_lines" status="on" srs="&osm2pgsql_projection;">
    <StyleName>bus_sites_lines</StyleName>
    <Datasource>
      <Parameter name="table">
      (select ST_MakeLine(p1.way, 

       (select ST_Centroid(ST_ConvexHull(ST_Collect(p3.way))) as way
       from &prefix;_point as p3
       join &prefix;_station_points_rels as p4
       on p3.osm_id = p4.osm_id
       where (p1.highway='bus_stop' or p1.amenity = 'bus_stop' or p1.railway='tram_stop')
       and p4.rel_id = p2.rel_id
       group by p4.rel_id, p4.name)
    
    ) as way,
         p1.highway, p1.railway, p1.amenity
         from &prefix;_station_points_rels as p1
         join &prefix;_station_points_rels as p2
         on p1.osm_id = p2.osm_id
         where (p1.highway='bus_stop' or p1.amenity = 'bus_stop' or p1.railway='tram_stop')
      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="bus_sites" status="on" srs="&osm2pgsql_projection;">
    <StyleName>bus_sites</StyleName>
    <Datasource>
      <Parameter name="table">
      (select ST_ConvexHull(ST_Collect(p1.way)) as way,
         bool_or(p1.highway='bus_stop' or p1.amenity = 'bus_stop') as bus_stop,
         bool_or(p1.railway='tram_stop') as tram_stop,
         p2.name
         from &prefix;_point as p1
         join &prefix;_station_points_rels as p2
         on p1.osm_id = p2.osm_id
         where (p1.highway='bus_stop' or p1.amenity = 'bus_stop' or p1.railway='tram_stop')
         group by p2.rel_id, p2.name        

      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

<Layer name="tram_sites" status="on" srs="&osm2pgsql_projection;">
    <StyleName>tram_sites</StyleName>
    <Datasource>
      <Parameter name="table">
      (select ST_ConvexHull(ST_Collect(p1.way)) as way,
         p2.name
         from &prefix;_point as p1
         join &prefix;_station_points_rels as p2
         on p1.osm_id = p2.osm_id
         where (p1.railway='tram_stop')
         group by p2.rel_id, p2.name        

      ) as points</Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
