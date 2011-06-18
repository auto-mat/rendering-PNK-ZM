<!-- Styles for cycling paths-->
<Style name="bicycle_directions">
    <Rule>
            <Filter>([oneway]='yes' and [cycleway]='opposite')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255, 0, 0)</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 10, 162</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255, 0, 0)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 3, 9, 162</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255, 0, 0)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 4, 2, 168</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(255, 0, 0)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 5, 1, 168</CssParameter>
            </LineSymbolizer>
            <!--
            -->
    </Rule>
    <Rule>
            <Filter>([oneway]='-1' and [cycleway]='opposite')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(0,255,0)</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 10, 162</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(0,255,0)</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 9, 163</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(0,255,0)</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 8, 2, 164</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">rgb(0,255,0)</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 8, 1, 165</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>

<Style name="surface">
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="12" height="13" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="9" height="10" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="6" height="7" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="3" height="4" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
</Style>

<Style name="cyclelane">
  <!--   SHARE BUSLANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#666666</CssParameter>
       <CssParameter name="stroke-width">20</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="20" height="20" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="20" height="20" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#666666</CssParameter>
       <CssParameter name="stroke-width">16</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="20" height="16" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="20" height="16" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#666666</CssParameter>
       <CssParameter name="stroke-width">13</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="20" height="13" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="20" height="13" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#666666</CssParameter>
       <CssParameter name="stroke-width">8</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="20" height="8" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="20" height="8" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>

  <!--   SHARED LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#8888ff</CssParameter>
       <CssParameter name="stroke-width">20</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="20" height="20" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="20" height="20" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#8888ff</CssParameter>
       <CssParameter name="stroke-width">16</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="20" height="16" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="20" height="16" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#8888ff</CssParameter>
       <CssParameter name="stroke-width">13</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="20" height="13" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="20" height="13" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#8888ff</CssParameter>
       <CssParameter name="stroke-width">8</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="20" height="8" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="20" height="8" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>


  <!--   LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#ff3f3f</CssParameter>
       <CssParameter name="stroke-width">20</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="20" height="20" type="png" file="../symbols/cyclelane:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="20" height="20" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#ff3f3f</CssParameter>
       <CssParameter name="stroke-width">16</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="20" height="16" type="png" file="../symbols/cyclelane:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="20" height="16" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#ff3f3f</CssParameter>
       <CssParameter name="stroke-width">13</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="20" height="13" type="png" file="../symbols/cyclelane:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="20" height="13" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LineSymbolizer>
       <CssParameter name="stroke">#ff3f3f</CssParameter>
       <CssParameter name="stroke-width">8</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="20" height="8" type="png" file="../symbols/cyclelane:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="20" height="8" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>
</Style>

<Style name="cycleway">
  <Rule>
    &maxscale_zoom8;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">#ff11ff</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">1.5</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom10;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">#ff11ff</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom12;
    <LineSymbolizer>
      <CssParameter name="stroke">#ff11ff</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([ncn]!='' and not [state]='proposed')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">#ff11ff</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and not [state]='proposed')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">#00ffff</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">10</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and not [state]='proposed')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">#0044ff</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>

  <Rule>
    <Filter>([ncn]!='' and [state]='proposed')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
        <CssParameter name="stroke">#ff11ff</CssParameter>
        <CssParameter name="stroke-opacity">0.3</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">1, 20</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and [state]='proposed')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
        <CssParameter name="stroke">#00ffff</CssParameter>
        <CssParameter name="stroke-opacity">0.3</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">1, 20</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and [state]='proposed')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
        <CssParameter name="stroke">#0044ff</CssParameter>
        <CssParameter name="stroke-opacity">0.3</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">1, 20</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<Style name="cycleway-text">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="rgb(0,0,0)" placement="line" halo_radius="1" spacing="275" min_distance="28"></TextSymbolizer>
  </Rule>
</Style>

<!-- Styles for MTB tracks -->
<Style name="mtb_basic">
  <Rule>
    &maxscale_zoom6;
    &minscale_zoom8;
    <LineSymbolizer>
      <CssParameter name="stroke">#710068</CssParameter>
      <CssParameter name="stroke-opacity">1</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
<!--  <Rule>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">#710068</CssParameter>
      <CssParameter name="stroke-width">1</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom10;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">#710068</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom12;
    <LineSymbolizer>
      <CssParameter name="stroke">#710068</CssParameter>
      <CssParameter name="stroke-width">3</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">#710068</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<Style name="mtb_offset"> -->
  <Rule>
    &maxscale_zoom9;
    &minscale_zoom9;
    <LinePatternSymbolizer width="5" height="3" type="png" file="../symbols/mtb_offset_1.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom10;
    &minscale_zoom11;
    <LinePatternSymbolizer width="10" height="6" type="png" file="../symbols/mtb_offset_2.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom12;
    &minscale_zoom12;
    <LinePatternSymbolizer width="15" height="9" type="png" file="../symbols/mtb_offset_3.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom13;
    <LinePatternSymbolizer width="20" height="12" type="png" file="../symbols/mtb_offset_4.png"/>
  </Rule>
</Style>
<Style name="mtb_shield0">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale0.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield1">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale1.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield2">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale2.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield3">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale3.png" type="png" width="13" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield4">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale4.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield5">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale5.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_incline">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>(([mtb:scale:uphill]='3' or [mtb:scale:uphill]='4' or [mtb:scale:uphill]='5' or [mtb:scale]!='')and([incline]='up'))</Filter>
    <LinePatternSymbolizer width="20" height="12" type="png" file="../symbols/mtb_up.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>(([mtb:scale:uphill]='3' or [mtb:scale:uphill]='4' or [mtb:scale:uphill]='5' or [mtb:scale]!='')and([incline]='down'))</Filter>
    <LinePatternSymbolizer width="20" height="12" type="png" file="../symbols/mtb_down.png"/>
  </Rule>
</Style>
<Style name="nobicycle">
  <Rule>
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/noBicycle.png" type="png" width="12" height="12" min_distance="10" spacing="100"/>
  </Rule>
</Style>
