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
      &minscale_zoom12;
      <Filter>[railway]='station' and not [transport]='subway' and not [disused]='yes'</Filter>
      <PointSymbolizer file="&symbols;/halt.png" placement="interior" allow-overlap="true"/>
    </Rule>
    <Rule>
      &maxscale_zoom13;
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
      &maxscale_zoom13;
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
      <Filter>[railway]='tram_stop'</Filter>
      <TextSymbolizer size="8" fill="&color_tram_stop_text;" dy="-8" fontset-name="book-fonts" halo-radius="1" wrap-width="0" allow-overlap="true" placement="interior">[name]</TextSymbolizer>
    </Rule>
    <Rule>
      &maxscale_zoom15;
      <Filter>[railway]='tram_stop'</Filter>
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
      &maxscale_zoom12;
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

<Layer name="amenity-stations" status="on" srs="&osm2pgsql_projection;">
    <StyleName>stations</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way,railway,aerialway,disused,transport, wheelchair,
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
      (select way,name,railway,aerialway,disused,transport, wheelchair
      from &prefix;_polygon
      where railway in ('station','halt','tram_stop')
         or aerialway='station'
      ) as stations
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>

