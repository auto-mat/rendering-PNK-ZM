<!-- Style for shading. -->
<Style name="shading">
    <Rule name="!stínování reliéfu">
      &maxscale_zoom7;
      &minscale_zoom12;
<!--
      Toto způsobuje chybu Mapniku #1529
      <RasterSymbolizer opacity="0.5" scaling="bilinear8" comp-op="multiply"/>
-->
      <RasterSymbolizer opacity="0.5" scaling="bilinear" comp-op="multiply"/>
    </Rule>
    <Rule name="!stínování reliéfu">
      &maxscale_zoom13;
      &minscale_zoom14;
      <RasterSymbolizer opacity="0.4" scaling="bilinear" comp-op="multiply"/>
    </Rule>
    <Rule name="!stínování reliéfu">
      &maxscale_zoom15;
      &minscale_zoom18;
      <RasterSymbolizer opacity="0.35" scaling="bilinear" comp-op="multiply"/>
    </Rule>
</Style>
<!-- Style for hypsometry. -->
<Style name="hypsometry">
    <Rule name="výškopis">
      &maxscale_zoom0;
      &minscale_zoom10;
      <RasterSymbolizer opacity="0.6" scaling="bilinear" comp-op="multiply"/>
    </Rule>
</Style>
<!-- Contour lines styles. -->
<Style name="contours">
    <Rule name="vrstevnice po 1 metrech">
      <Filter>[interval]='1'</Filter>
      &maxscale_zoom18;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.15"
        smooth="0.5"
      />
    </Rule>
    <Rule name="vrstevnice po 5 metrech">
      <Filter>[interval]='5'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.3"
        smooth="0.5"
      />
    </Rule>
    <Rule name="vrstevnice po 10 metrech">
      <Filter>[interval]='10'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.3"
        smooth="0.5"
      />
    </Rule>
    <Rule name="vrstevnice po 20 metrech">
      <Filter>[interval]='20'</Filter>
      &maxscale_zoom12;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.3"
        smooth="0.5"
      />
    </Rule>
    <Rule name="vrstevnice po 25 metrech">
      <Filter>[interval]='25'</Filter>
      &maxscale_zoom15;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.6"
        smooth="0.5"
      />
    </Rule>
    <Rule name="vrstevnice po 50 metrech">
      <Filter>[interval]='50'</Filter>
      &maxscale_zoom11;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.3"
        smooth="0.5"
      />
    </Rule>
    <Rule>
      <Filter>[interval]='50'</Filter>
      &maxscale_zoom13;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.6"
        smooth="0.5"
      />
    </Rule>
    <Rule name="vrstevnice po 100 metrech">
      <Filter>[interval]='100'</Filter>
      &maxscale_zoom11;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.6"
        smooth="0.5"
      />
    </Rule>
    <Rule name="!popis vrstevnic po 25 metrech">
      <Filter>[interval]='25'</Filter>
      &maxscale_zoom15;
      <TextSymbolizer face-name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo-radius="1" placement="line" spacing="1000" smooth="0.5">[height]</TextSymbolizer>
    </Rule>
    <Rule name="!popis vrstevnic po 50 metrech">
      <Filter>[interval]='50'</Filter>
      &maxscale_zoom13;
      <TextSymbolizer face-name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo-radius="1" placement="line" spacing="1000" smooth="0.5">[height]</TextSymbolizer>
    </Rule>
    <Rule name="!popis vrstevnic po 100 metrech">
      <Filter>[interval]='100'</Filter>
      &maxscale_zoom11;
      <TextSymbolizer face-name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo-radius="1" placement="line" spacing="1000" smooth="0.5" >[height]</TextSymbolizer>
    </Rule>
</Style>
