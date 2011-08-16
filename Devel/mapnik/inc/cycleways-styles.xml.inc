<!-- Styles for cycling paths-->
<Style name="bicycle_directions">
    <Rule>
            <Filter>([oneway]='yes' and [cycleway]='opposite')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 10, 52</CssParameter>
                <CssParameter name="stroke-offset">-4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 3, 9, 52</CssParameter>
                <CssParameter name="stroke-offset">-4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 4, 2, 58</CssParameter>
                <CssParameter name="stroke-offset">-4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 5, 1, 58</CssParameter>
                <CssParameter name="stroke-offset">-4</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule>
            <Filter>([oneway]='-1' and [cycleway]='opposite')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 10, 52</CssParameter>
                <CssParameter name="stroke-offset">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 2, 9, 53</CssParameter>
                <CssParameter name="stroke-offset">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 8, 2, 54</CssParameter>
                <CssParameter name="stroke-offset">4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_directions;</CssParameter>
                <CssParameter name="stroke-width">4</CssParameter>
                <CssParameter name="stroke-linejoin">bevel</CssParameter>
                <CssParameter name="stroke-dasharray">0, 8, 1, 55</CssParameter>
                <CssParameter name="stroke-offset">4</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>

<Style name="cycleway-directions">
    <Rule>
            <Filter>([role]='backward' and [cyclelane]='yes')</Filter>
            &maxscale_zoom14;
            <LinePatternSymbolizer offset="15" width="100" type="png" file="../symbols/role_backward.png"/>
    </Rule>
    <Rule>
            <Filter>([role]='forward' and [cyclelane]='yes')</Filter>
            &maxscale_zoom14;
            <LinePatternSymbolizer offset="-15" width="100" type="png" file="../symbols/role_forward.png"/>
    </Rule>

    <Rule>
            <Filter>([role]='backward' and [cyclelane]='no')</Filter>
            &maxscale_zoom14;
            <LinePatternSymbolizer offset="10" width="100" type="png" file="../symbols/role_backward.png"/>
    </Rule>
    <Rule>
            <Filter>([role]='forward' and [cyclelane]='no')</Filter>
            &maxscale_zoom14;
            <LinePatternSymbolizer offset="-10" width="100" type="png" file="../symbols/role_forward.png"/>
    </Rule>
</Style>

<Style name="highway-area-fill-cobblestone">
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom17;
    <PolygonPatternSymbolizer width="3" height="3" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <PolygonPatternSymbolizer width="3" height="3" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <PolygonPatternSymbolizer width="3" height="3" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
</Style>

<Style name="surface-cobblestone">
  <Rule>
    &maxscale_zoom14;
    <Filter>([highway]='track' or [highway]='footway' or [highway]='path')</Filter>
    <LinePatternSymbolizer width="3" height="7" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom15;
    <Filter>([highway]='pedestrian' or [highway]='service')</Filter>
    <LinePatternSymbolizer width="3" height="7" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([highway]='pedestrian' or [highway]='service')</Filter>
    <LinePatternSymbolizer width="3" height="3" type="png" file="../symbols/cobblestone.png"/>
  </Rule>

  <Rule>
    <ElseFilter/>
    &maxscale_zoom17;
    <LinePatternSymbolizer width="3" height="13" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <ElseFilter/>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer width="3" height="10" type="png" file="../symbols/cobblestone.png"/>
  </Rule>
  <Rule>
    <ElseFilter/>
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
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" type="png" file="../symbols/cyclebuslane_share.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" type="png" file="../symbols/cyclebuslane_share.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclebuslane_share.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclebuslane_share.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclebuslane_share.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclebuslane_share.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite.png"/>
  </Rule>

  <!--   SHARED LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" type="png" file="../symbols/cyclelane_shared_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" type="png" file="../symbols/cyclelane_shared.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" type="png" file="../symbols/cyclelane_shared.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" type="png" file="../symbols/cyclelane_shared_opposite.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclelane_shared_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclelane_shared.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclelane_shared.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclelane_shared_opposite.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclelane_shared_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclelane_shared.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclelane_shared.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclelane_shared_opposite.png"/>
  </Rule>

  <!--   LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;"  type="png" file="../symbols/cyclelane.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;"  type="png" file="../symbols/cyclelane.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;"  type="png" file="../symbols/cyclelane.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;"  type="png" file="../symbols/cyclelane.png"/>
  </Rule>
</Style>

<!--
<Style name="cycleway-name">
  <Rule>
    <TextSymbolizer name="route_name" dy="13" fontset_name="bold-fonts" size="15" fill="&color_cycleway;" placement="line" halo_radius="0" spacing="300" halo_fill="&color_residential;"></TextSymbolizer>
  </Rule>
</Style>
-->

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

<Style name="cycleway-tunnel">
  <Rule title="tunel">
    <Filter>([tunnel]='yes')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">white</CssParameter>
      <CssParameter name="stroke-opacity">0.6</CssParameter>
      <CssParameter name="stroke-width">2.5</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>

<Style name="cycleway">
  <Rule title="cyklotrasa po schodech">
    <Filter>([surface_type]='steps')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">0, 2, 1, 0</CssParameter>
    </LineSymbolizer>
  </Rule>

  <Rule title="segregovaná cyklotrasa s dobrým povrchem">
    <Filter>([traffic]='low' and [surface_type]='good')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="segregovaná cyklotrasa se nezpevněným povrchem">
    <Filter>([traffic]='low' and [surface_type]='unpaved')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">10, 4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="segregovaná cyklotrasa se špatným povrchem">
    <Filter>([traffic]='low' and [surface_type]='bad')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">5, 2</CssParameter>
    </LineSymbolizer>
  </Rule>

  <Rule title="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='medium' and [surface_type]='good')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_traffic;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='unpaved')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_traffic;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">10, 4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='bad')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_traffic;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">5, 2</CssParameter>
    </LineSymbolizer>
  </Rule>

  <Rule title="cyklotrasa s hustým provozem">
    <Filter>([traffic]='heavy')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_heavy_traffic;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
      <CssParameter name="stroke-dasharray">1, 7</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>

<Style name="nobicycle">
  <Rule title="zákaz vjezdu cyklistů">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face_name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/noBicycle.png" type="png" width="8" height="8" min_distance="10" spacing="20"/>
  </Rule>
</Style>
