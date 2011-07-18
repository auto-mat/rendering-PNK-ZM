<!-- Styles for cycling paths-->
<Style name="bicycle_directions">
    <Rule>
            <Filter>([oneway]='yes' and ([cycleway]='opposite' or [oneway:bicycle]='no'))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 10, 32</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 3, 9, 32</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 4, 2, 38</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 5, 1, 38</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([oneway]='-1' and ([cycleway]='opposite' or [oneway:bicycle]='no'))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 10, 32</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 9, 33</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 8, 2, 34</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 8, 1, 35</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>

<Style name="surface">
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="3" height="13" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="3" height="10" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="3" height="7" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
</Style>

<Style name="cyclelane">
  <!--   SHARE BUSLANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclebuslane_share:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclebuslane_share:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclebuslane_share:right_offset2.png"/>
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclebuslane_share:left_offset2.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclebuslane_share:right_offset2.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclebuslane_share:left_offset2.png"/>
  </Rule>

  <!--   SHARED LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclelane_shared:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclelane_shared:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclelane_shared:right_offset2.png"/>
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclelane_shared:left_offset2.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclelane_shared:right_offset2.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclelane_shared:left_offset2.png"/>
  </Rule>


  <!--   LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclelane:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclelane:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="6" height="21" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclelane:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclelane:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="6" height="16" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclelane:right_offset.png"/>
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclelane:right_offset.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer width="6" height="14" type="png" file="../symbols/cyclelane:left_offset.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom13;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclelane:right_offset2.png"/>
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclelane:left_offset2.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclelane:right_offset2.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom13;
    <LinePatternSymbolizer width="6" height="8" type="png" file="../symbols/cyclelane:left_offset2.png"/>
  </Rule>
</Style>

<Style name="cycleway">
  <Rule>
    &maxscale_zoom8;
    &minscale_zoom9;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_ncn;</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>

  <Rule>
    &maxscale_zoom10;
    &minscale_zoom11;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_ncn;</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom12;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_ncn;</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>

  <Rule>
    <Filter>([ncn]!='' and not [state]!='')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_ncn;</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">12</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_rcn;</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">10</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
      <CssParameter name="stroke">&color_lcn;</CssParameter>
      <CssParameter name="stroke-opacity">0.3</CssParameter>
      <CssParameter name="stroke-width">8</CssParameter>
      <CssParameter name="stroke-linejoin">round</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>

  <!-- proposed -->
  <Rule>
    <Filter>([ncn]!='' and [state]!='')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
        <CssParameter name="stroke">&color_ncn;</CssParameter>
        <CssParameter name="stroke-opacity">0.3</CssParameter>
        <CssParameter name="stroke-width">12</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">1, 20</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and [state]!='')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
        <CssParameter name="stroke">&color_rcn;</CssParameter>
        <CssParameter name="stroke-opacity">0.3</CssParameter>
        <CssParameter name="stroke-width">10</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">1, 20</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and [state]!='')</Filter>
    &maxscale_zoom13;
    <LineSymbolizer>
        <CssParameter name="stroke">&color_lcn;</CssParameter>
        <CssParameter name="stroke-opacity">0.3</CssParameter>
        <CssParameter name="stroke-width">8</CssParameter>
        <CssParameter name="stroke-linejoin">round</CssParameter>
        <CssParameter name="stroke-linecap">round</CssParameter>
        <CssParameter name="stroke-dasharray">1, 20</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>
<Style name="cycleway-text">
  <Rule>
    <Filter>([ncn]!='' and [state]!='')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="1" spacing="100" min_distance="28" allow_owerlap="true"></TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([ncn]!='' and not [state]!='')</Filter>
    &maxscale_zoom8;
    &minscale_zoom12;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="8" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="1" spacing="100" min_distance="28" allow_owerlap="true"></TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([ncn]!='' and not [state]!='')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="1" spacing="100" min_distance="28"></TextSymbolizer>
  </Rule>

  <Rule>
    <Filter>([rcn]!='' and [state]!='')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="&color_rcn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="1" spacing="100" min_distance="28"></TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom8;
    &minscale_zoom12;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="8" fill="&color_rcn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="1" spacing="100" min_distance="28"></TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="&color_rcn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="1" spacing="100" min_distance="28"></TextSymbolizer>
  </Rule>

  <Rule>
    <Filter>([lcn]!='' and [state]!='')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="&color_lcn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="1" spacing="100" min_distance="28"></TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom8;
    &minscale_zoom12;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="8" fill="&color_lcn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="1" spacing="100" min_distance="28"></TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer name="ref" fontset_name="bold-fonts" size="10" fill="&color_lcn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="1" spacing="100" min_distance="28"></TextSymbolizer>
  </Rule>
</Style>

<!-- Styles for MTB tracks -->
<Style name="mtb_basic">
  <Rule>
    &maxscale_zoom6;
    &minscale_zoom8;
    <LineSymbolizer>
      <CssParameter name="stroke">#004f00</CssParameter>
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
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/noBicycle.6.png" type="png" width="6" height="6" min_distance="15" spacing="10"/>
  </Rule>
</Style>
