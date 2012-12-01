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
      <RasterSymbolizer opacity="0.4" scaling="bilinear8" comp-op="multiply"/>
    </Rule>
    <Rule name="!stínování reliéfu">
      &maxscale_zoom15;
      &minscale_zoom18;
      <RasterSymbolizer opacity="0.35" scaling="bilinear8" comp-op="multiply"/>
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
<Style name="contours5">
    <Rule name="vrstevnice po 5 metrech">
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.3"
      />
    </Rule>
</Style>
<Style name="contours10">
    <Rule name="vrstevnice po 10 metrech">
      &maxscale_zoom13;
      &minscale_zoom18;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.3"
      />
    </Rule>
</Style>
<Style name="contours20">
    <Rule name="vrstevnice po 20 metrech">
      &maxscale_zoom12;
      &minscale_zoom12;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.3"
      />
    </Rule>
</Style>
<Style name="contours25">
    <Rule name="vrstevnice po 25 metrech">
      &maxscale_zoom15;
      &minscale_zoom18;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.6"
      />
    </Rule>
</Style>
<Style name="contours50">
    <Rule name="vrstevnice po 50 metrech">
      &maxscale_zoom11;
      &minscale_zoom11;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.3"
      />
    </Rule>
    <Rule>
      &maxscale_zoom13;
      &minscale_zoom14;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.6"
      />
    </Rule>
</Style>
<Style name="contours100">
    <Rule name="vrstevnice po 100 metrech">
      &maxscale_zoom11;
      &minscale_zoom14;
      <LineSymbolizer
        stroke="rgb(170,71,30)"
        stroke-width="0.6"
      />
    </Rule>
</Style>

<!-- Style for contour lines heights. -->
<Style name="contours-text25">
    <Rule name="!popis vrstevnic po 25 metrech">
      &maxscale_zoom15;
      &minscale_zoom18;
      <TextSymbolizer name="[height]" face-name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo-radius="1" placement="line" />
    </Rule>
</Style>

<Style name="contours-text50">
    <Rule name="!popis vrstevnic po 50 metrech">
      &maxscale_zoom13;
      &minscale_zoom14;
      <TextSymbolizer name="[height]" face-name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo-radius="1" placement="line" />
    </Rule>
</Style>
<Style name="contours-text100">
    <Rule name="!popis vrstevnic po 100 metrech">
      &maxscale_zoom11;
      &minscale_zoom14;
      <TextSymbolizer name="[height]" face-name="DejaVu Sans Book" size="8" fill="rgb(170,71,30)" halo-radius="1" placement="line" />
    </Rule>
</Style>

