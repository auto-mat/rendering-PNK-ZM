<!-- Styles for cycling paths-->
<Style name="mtb_incline">
  <Rule title="stoupání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='up' and not [incline_steep]='yes')</Filter>
    <MarkersSymbolizer spacing="50" file="../symbols/SVG/incline.svg"/>
  </Rule>
  <Rule title="klesání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='down' and not [incline_steep]='yes')</Filter>
    <MarkersSymbolizer spacing="50" file="../symbols/SVG/incline.svg" transform="scale(-1)"/>
  </Rule>
  <Rule title="prudké stoupání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='up' and [incline_steep]='yes')</Filter>
    <MarkersSymbolizer spacing="50" file="../symbols/SVG/incline_steep.svg"/>
  </Rule>
  <Rule title="prudké klesání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='down' and [incline_steep]='yes')</Filter>
    <MarkersSymbolizer spacing="50" file="../symbols/SVG/incline_steep.svg" transform="scale(-1)"/>
  </Rule>
</Style>
<Style name="bicycle_directions">
    <Rule>
            <Filter>([oneway]='yes' and [cycleway]='opposite')</Filter>
            &maxscale_zoom15;
            &minscale_zoom16;
            <MarkersSymbolizer spacing="&spacing_directions;" allow-overlap="true" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_bicycle_directions;" transform="translate(-7 &offset_directions;) scale(-&scale_directions;)"/>
    </Rule>
    <Rule>
            <Filter>([oneway]='-1' and [cycleway]='opposite')</Filter>
            &maxscale_zoom15;
            &minscale_zoom16;
            <MarkersSymbolizer spacing="&spacing_directions;" allow-overlap="true" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_bicycle_directions;" transform="translate(7 -&offset_directions;) scale(&scale_directions;)"/>
    </Rule>

    <Rule>
            <Filter>([oneway]='yes' and [cycleway]='opposite')</Filter>
            &maxscale_zoom17;
            <MarkersSymbolizer spacing="&spacing_directions;" allow-overlap="true" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_bicycle_directions;" transform="translate(-7 &offset_directions_high;) scale(-&scale_directions;)"/>
    </Rule>
    <Rule>
            <Filter>([oneway]='-1' and [cycleway]='opposite')</Filter>
            &maxscale_zoom17;
            <MarkersSymbolizer spacing="&spacing_directions;" allow-overlap="true" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_bicycle_directions;" transform="translate(7 -&offset_directions_high;) scale(&scale_directions;)"/>
    </Rule>
</Style>

<Style name="cycleway-directions">
    <Rule>
            <Filter>([role_backward]=true)</Filter>
            &maxscale_zoom14;
            <MarkersSymbolizer file="../symbols/SVG/cycleway_direction.svg" allow-overlap="true" spacing="&spacing_role_directions;" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_role_directions;" transform="translate(-3 -&offset_role_directions;) scale(-&scale_role_directions;)"/>
    </Rule>
    <Rule>
            <Filter>([role_forward]=true)</Filter>
            &maxscale_zoom14;
            <MarkersSymbolizer file="../symbols/SVG/cycleway_direction.svg" allow-overlap="true" spacing="&spacing_role_directions;" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_role_directions;" transform="translate(3 &offset_role_directions;) scale(&scale_role_directions;)"/>
    </Rule>
</Style>

<Style name="highway-area-fill-cobblestone">
  <Rule>
    <Filter>([surface]='cobblestone')</Filter>
    &maxscale_zoom14;
    <PolygonPatternSymbolizer file="../symbols/cobblestone2.png"/>
  </Rule>
</Style>

<Style name="surface-cobblestone">
  <Rule>
    &maxscale_zoom14;
    <Filter>([highway]='track' or [highway]='footway' or [highway]='path')</Filter>
    <LinePatternSymbolizer type="png" file="../symbols/cobblestone7.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom15;
    <Filter>([highway]='pedestrian' or [highway]='service')</Filter>
    <LinePatternSymbolizer type="png" file="../symbols/cobblestone7.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([highway]='pedestrian' or [highway]='service')</Filter>
    <LinePatternSymbolizer type="png" file="../symbols/cobblestone3.png"/>
  </Rule>

  <Rule>
    <ElseFilter/>
    &maxscale_zoom17;
    <LinePatternSymbolizer type="png" file="../symbols/cobblestone13.png"/>
  </Rule>
  <Rule>
    <ElseFilter/>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer type="png" file="../symbols/cobblestone10.png"/>
  </Rule>
  <Rule>
    <ElseFilter/>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer type="png" file="../symbols/cobblestone7.png"/>
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
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclebuslane_share_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclebuslane_share_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite_narrow.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom14;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclebuslane_share_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclebuslane_share_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclebuslane_share_opposite_narrow.png"/>
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
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclelane_shared_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclelane_shared_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclelane_shared_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" type="png" file="../symbols/cyclelane_shared_opposite_narrow.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom14;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclelane_shared_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclelane_shared_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclelane_shared_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" type="png" file="../symbols/cyclelane_shared_opposite_narrow.png"/>
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
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;"  type="png" file="../symbols/cyclelane_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;"  type="png" file="../symbols/cyclelane_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;"  type="png" file="../symbols/cyclelane_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;"  type="png" file="../symbols/cyclelane_narrow.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom14;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;"  type="png" file="../symbols/cyclelane_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;"  type="png" file="../symbols/cyclelane_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;"  type="png" file="../symbols/cyclelane_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;"  type="png" file="../symbols/cyclelane_narrow.png"/>
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
    <Filter>([ncn]!='' and [state]='recommended')</Filter>
    &maxscale_zoom15;
    <TextSymbolizer name="' (' + [ref]+ ') '" fontset_name="bold-fonts" size="10" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and [state]='recommended')</Filter>
    &maxscale_zoom15;
    <TextSymbolizer name="' (' + [ref]+ ') '" fontset_name="bold-fonts" size="9" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and [state]='recommended')</Filter>
    &maxscale_zoom15;
    <TextSymbolizer name="' (' + [ref]+ ') '" fontset_name="bold-fonts" size="8" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
  </Rule>

  <Rule>
    <Filter>([ncn]!='' and not [state]!='')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer name="'  ' + [ref]+ '  '" fontset_name="bold-fonts" size="10" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="&halo_radius_cycleway;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom14;
    <TextSymbolizer name="'  ' + [ref]+ '  '" fontset_name="bold-fonts" size="9" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="&halo_radius_cycleway;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom15;
    <TextSymbolizer name="'  ' + [ref]+ '  '" fontset_name="bold-fonts" size="8" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text;" placement="line" halo_radius="&halo_radius_cycleway;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
  </Rule>

  <Rule>
    <Filter>([ncn]!='' and [state]!='' and [state]!='recommended')</Filter>
    &maxscale_zoom12;
    <TextSymbolizer name="'  ' + [ref]+ '  '" fontset_name="bold-fonts" size="10" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
  </Rule>
  <Rule>
    &maxscale_zoom13;
    <Filter>([rcn]!='' and [state]!='' and [state]!='recommended')</Filter>
    <TextSymbolizer name="'  ' + [ref]+ '  '" fontset_name="bold-fonts" size="9" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
  </Rule>
  <Rule>
    &maxscale_zoom14;
    <Filter>([lcn]!='' and [state]!='' and [state]!='recommended')</Filter>
    <TextSymbolizer name="'  ' + [ref]+ '  '" fontset_name="bold-fonts" size="8" fill="&color_ncn_text;" halo_fill="&color_cycleway_background_text_proposed;" placement="line" halo_radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" min_distance="&min_distance_cycleway_text;" allow_overlap="false" max_char_angle_delta="&text_max_angle;" />
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

  <Rule title="cyklotrasa s dobrým povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='good')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_nobicycle;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa se nezpevněným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='unpaved')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_nobicycle;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">10, 4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa se špatným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='bad')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_nobicycle;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">2</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">5, 2</CssParameter>
    </LineSymbolizer>
  </Rule>

  <Rule title="segregovaná cyklotrasa s dobrým povrchem">
    <Filter>([traffic]='low' and [surface_type]='good')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
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
      <CssParameter name="stroke-linecap">round</CssParameter>
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

  <Rule title="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='good')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_heavy_traffic;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">round</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='unpaved')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_heavy_traffic;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">10, 4</CssParameter>
    </LineSymbolizer>
  </Rule>
  <Rule title="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='bad')</Filter>
    <LineSymbolizer>
      <CssParameter name="stroke">&color_cycleway_heavy_traffic;</CssParameter>
      <CssParameter name="stroke-opacity">&opacity_cycleway;</CssParameter>
      <CssParameter name="stroke-width">4</CssParameter>
      <CssParameter name="stroke-linejoin">bevel</CssParameter>
      <CssParameter name="stroke-linecap">butt</CssParameter>
      <CssParameter name="stroke-dasharray">5, 2</CssParameter>
    </LineSymbolizer>
  </Rule>
</Style>

<Style name="nobicycle">
  <Rule title="zákaz vjezdu cyklistů">
    <Filter>([access_mode]='destination')</Filter>
    &maxscale_zoom13;
    &minscale_zoom18;
    <LinePatternSymbolizer type="png" file="../symbols/nobicycle-destination.png"/>
  </Rule>
  <Rule title="zákaz vjezdu cyklistů">
    <Filter>([access_mode]='no_access')</Filter>
    &maxscale_zoom13;
    &minscale_zoom18;
    <LinePatternSymbolizer type="png" file="../symbols/nobicycle.png"/>
  </Rule>
</Style>
