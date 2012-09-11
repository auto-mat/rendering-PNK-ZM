<Style name="ferry-routes">
    <Rule>
      &maxscale_zoom7;
      &minscale_zoom10;
      <LineSymbolizer stroke="&color_ferry_route;" stroke-width="1"/>
    </Rule>
    <Rule>
      &maxscale_zoom11;
      <LineSymbolizer stroke="&color_ferry_route;" stroke-width="1"/>
    </Rule>
</Style>

<Layer name="ferry-routes" status="on" srs="&osm2pgsql_projection;">
    <StyleName>ferry-routes</StyleName>
    <Datasource>
      <Parameter name="table">
      (select way from &prefix;_line where route='ferry' ) as routes
      </Parameter>
      &datasource-settings;
    </Datasource>
</Layer>
