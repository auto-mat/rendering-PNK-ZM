<Style name="stations">
    <Rule>
      &maxscale_zoom18;
      <Filter>[railway]='subway_entrance'</Filter>
      <PointSymbolizer file="&symbols-path;/walking.n.12.png" />
    </Rule>
    <Rule>
      &maxscale_zoom12;
      &minscale_zoom12;
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols-path;/halt.png" />
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols-path;/station_small.png" />
    </Rule>
    <Rule>
      &maxscale_zoom13;
      <Filter>[railway]='station' and [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols-path;/station_disused.png" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols-path;/station.png" />
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <Filter>[railway]='halt' or [railway]='tram_stop' or [aerialway]='station'</Filter>
      <PointSymbolizer file="&symbols-path;/halt.png" />
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='halt' or [railway]='tram_stop' or [aerialway]='station'</Filter>
      <PointSymbolizer file="&symbols-path;/station_small.png" />
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='halt' or [railway]='tram_stop' or [aerialway]='station'</Filter>
      <TextSymbolizer fontset-name="book-fonts" size="8" fill="&color_halt;" dy="-8" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway] ='halt' or [railway]='tram_stop' or [aerialway]='station'</Filter>
      <TextSymbolizer fontset-name="book-fonts" size="10" fill="&color_halt;" dy="-10" halo-radius="1" wrap-width="0">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom14;
      &minscale_zoom14;
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <TextSymbolizer fontset-name="bold-fonts" size="9" fill="&color_stations;" dy="-8" halo-radius="1" wrap-width="0" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and not [disused]='yes'</Filter>
      <TextSymbolizer fontset-name="bold-fonts" size="11" fill="&color_stations;" dy="-10" halo-radius="1" wrap-width="0" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='station' and [disused]='yes'</Filter>
      <TextSymbolizer fontset-name="bold-fonts" size="9" fill="&color_stations;" dy="-9" halo-radius="1" wrap-width="0" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
</Style>

<Layer name="amenity-stations" status="on" srs="&osm2pgsql_projection;">
    <StyleName>stations</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,railway,aerialway,disused,
       case when short_name is not null then short_name else name end as name
      from &prefix;_point
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
      (select way,railway,aerialway,disused,
       case when short_name is not null then short_name else name end as name
      from &prefix;_polygon
      where railway in ('station','halt','tram_stop')
         or aerialway='station'
      ) as stations
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

