<!-- Styles for cycling paths-->
<Style name="mtb_incline">
  <Rule name="stoupání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='up' and not [incline_steep]='yes')</Filter>
    <MarkersSymbolizer placement="line" spacing="70" file="../symbols/SVG/incline.svg"/>
  </Rule>
  <Rule name="klesání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='down' and not [incline_steep]='yes')</Filter>
    <MarkersSymbolizer placement="line" spacing="70" file="../symbols/SVG/incline.svg" transform="scale(-1)"/>
  </Rule>
  <Rule name="prudké stoupání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='up' and [incline_steep]='yes')</Filter>
    <MarkersSymbolizer placement="line" spacing="70" file="../symbols/SVG/incline_steep.svg"/>
  </Rule>
  <Rule name="prudké klesání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='down' and [incline_steep]='yes')</Filter>
    <MarkersSymbolizer placement="line" spacing="70" file="../symbols/SVG/incline_steep.svg" transform="scale(-1)"/>
  </Rule>
</Style>
<Style name="bicycle_directions">
    <Rule>
            <Filter>([oneway]='yes' and [cycleway]='opposite')</Filter>
            &maxscale_zoom15;
            &minscale_zoom16;
            <MarkersSymbolizer placement="line" marker-type="arrow" spacing="&spacing_directions;" allow-overlap="true" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_bicycle_directions;" transform="translate(-7 &offset_directions;) scale(-&scale_directions;)"/>
    </Rule>
    <Rule>
            <Filter>([oneway]='-1' and [cycleway]='opposite')</Filter>
            &maxscale_zoom15;
            &minscale_zoom16;
            <MarkersSymbolizer placement="line" marker-type="arrow" spacing="&spacing_directions;" allow-overlap="true" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_bicycle_directions;" transform="translate(7 -&offset_directions;) scale(&scale_directions;)"/>
    </Rule>

    <Rule>
            <Filter>([oneway]='yes' and [cycleway]='opposite')</Filter>
            &maxscale_zoom17;
            <MarkersSymbolizer placement="line" marker-type="arrow" spacing="&spacing_directions;" allow-overlap="true" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_bicycle_directions;" transform="translate(-7 &offset_directions_high;) scale(-&scale_directions;)"/>
    </Rule>
    <Rule>
            <Filter>([oneway]='-1' and [cycleway]='opposite')</Filter>
            &maxscale_zoom17;
            <MarkersSymbolizer placement="line" marker-type="arrow" spacing="&spacing_directions;" allow-overlap="true" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_bicycle_directions;" transform="translate(7 -&offset_directions_high;) scale(&scale_directions;)"/>
    </Rule>
</Style>

<Style name="cycleway-directions">
    <Rule>
            <Filter>([role_backward]>0 and [role_bidirectional]=0 and [nobicycle]='no')</Filter>
            &maxscale_zoom14;
            <MarkersSymbolizer placement="line" file="../symbols/SVG/cycleway_direction.svg" allow-overlap="true" spacing="&spacing_role_directions;" transform="translate(-3 -&offset_role_directions;) scale(-&scale_role_directions;)"/>
    </Rule>
    <Rule>
            <Filter>([role_forward]>0 and [role_bidirectional]=0 and [nobicycle]='no')</Filter>
            &maxscale_zoom14;
            <MarkersSymbolizer placement="line" file="../symbols/SVG/cycleway_direction.svg" allow-overlap="true" spacing="&spacing_role_directions;" transform="translate(3 &offset_role_directions;) scale(&scale_role_directions;)"/>
    </Rule>

    <Rule>
            <Filter>([role_backward]>0 and [role_bidirectional]=0 and [nobicycle]='yes')</Filter>
            &maxscale_zoom14;
            <MarkersSymbolizer placement="line" file="../symbols/SVG/cycleway_direction_low.svg" allow-overlap="true" spacing="&spacing_role_directions;" transform="translate(-3 -&offset_role_directions;) scale(-&scale_role_directions;)"/>
    </Rule>
    <Rule>
            <Filter>([role_forward]>0 and [role_bidirectional]=0 and [nobicycle]='yes')</Filter>
            &maxscale_zoom14;
            <MarkersSymbolizer placement="line" file="../symbols/SVG/cycleway_direction_low.svg" allow-overlap="true" spacing="&spacing_role_directions;" transform="translate(3 &offset_role_directions;) scale(&scale_role_directions;)"/>
    </Rule>
</Style>

<Style name="highway-area-fill-cobblestone">
  <Rule>
    <Filter>([surface]='cobblestone' or [surface] = 'setts')</Filter>
    &maxscale_zoom14;
    <PolygonPatternSymbolizer file="../symbols/cobblestone2.png"/>
  </Rule>
</Style>

<Style name="surface-cobblestone">
  <Rule>
    &maxscale_zoom14;
    <Filter>([highway]='track' or [highway]='footway' or [highway]='path')</Filter>
    <LinePatternSymbolizer file="../symbols/cobblestone7.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom15;
    <Filter>([highway]='pedestrian' or [highway]='service')</Filter>
    <LinePatternSymbolizer file="../symbols/cobblestone7.png"/>
  </Rule>
  <Rule>
    &maxscale_zoom14;
    &minscale_zoom14;
    <Filter>([highway]='pedestrian' or [highway]='service')</Filter>
    <LinePatternSymbolizer file="../symbols/cobblestone3.png"/>
  </Rule>

  <Rule>
    <ElseFilter/>
    &maxscale_zoom17;
    <LinePatternSymbolizer file="../symbols/cobblestone13.png"/>
  </Rule>
  <Rule>
    <ElseFilter/>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer file="../symbols/cobblestone10.png"/>
  </Rule>
  <Rule>
    <ElseFilter/>
    &maxscale_zoom14;
    &minscale_zoom14;
    <LinePatternSymbolizer file="../symbols/cobblestone7.png"/>
  </Rule>
</Style>

<Style name="cyclelane">
  <!--   SHARE BUSLANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" file="../symbols/cyclebuslane_share_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" file="../symbols/cyclebuslane_share.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" file="../symbols/cyclebuslane_share.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" file="../symbols/cyclebuslane_share_opposite.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" file="../symbols/cyclebuslane_share_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" file="../symbols/cyclebuslane_share_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" file="../symbols/cyclebuslane_share_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" file="../symbols/cyclebuslane_share_opposite_narrow.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom14;
    <Filter>([cycleway]='share_busway' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" file="../symbols/cyclebuslane_share_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" file="../symbols/cyclebuslane_share_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='share_busway' or ([cycleway]='share_busway' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" file="../symbols/cyclebuslane_share_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='share_busway' or ([cycleway]='share_busway' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" file="../symbols/cyclebuslane_share_opposite_narrow.png"/>
  </Rule>

  <!--   SOFT LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='soft_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" file="../symbols/cyclelane_soft_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" file="../symbols/cyclelane_soft.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='soft_lane' or ([cycleway]='soft_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" file="../symbols/cyclelane_soft.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='soft_lane' or ([cycleway]='soft_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" file="../symbols/cyclelane_soft_opposite.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='soft_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" file="../symbols/cyclelane_soft_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" file="../symbols/cyclelane_soft_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='soft_lane' or ([cycleway]='soft_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" file="../symbols/cyclelane_soft_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='soft_lane' or ([cycleway]='soft_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" file="../symbols/cyclelane_soft_opposite_narrow.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom14;
    <Filter>([cycleway]='soft_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" file="../symbols/cyclelane_soft_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" file="../symbols/cyclelane_soft_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='soft_lane' or ([cycleway]='soft_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" file="../symbols/cyclelane_soft_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='soft_lane' or ([cycleway]='soft_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" file="../symbols/cyclelane_soft_opposite_narrow.png"/>
  </Rule>

  <!--   SHARED LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" file="../symbols/cyclelane_shared_opposite.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" file="../symbols/cyclelane_shared.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;" file="../symbols/cyclelane_shared.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;" file="../symbols/cyclelane_shared_opposite.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" file="../symbols/cyclelane_shared_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" file="../symbols/cyclelane_shared_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;" file="../symbols/cyclelane_shared_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;" file="../symbols/cyclelane_shared_opposite_narrow.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom14;
    <Filter>([cycleway]='shared_lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" file="../symbols/cyclelane_shared_opposite_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" file="../symbols/cyclelane_shared_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;" file="../symbols/cyclelane_shared_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='shared_lane' or ([cycleway]='shared_lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;" file="../symbols/cyclelane_shared_opposite_narrow.png"/>
  </Rule>

  <!--   LANE -->
  <Rule>
    &maxscale_zoom17;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;"  file="../symbols/cyclelane.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;"  file="../symbols/cyclelane.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="-&cyclelane_offset_highest_zoom;"  file="../symbols/cyclelane.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom17;
    <LinePatternSymbolizer offset="&cyclelane_offset_highest_zoom;"  file="../symbols/cyclelane.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom15;
    &minscale_zoom16;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;"  file="../symbols/cyclelane_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;"  file="../symbols/cyclelane_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="-&cyclelane_offset_high_zoom;"  file="../symbols/cyclelane_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom15;
    &minscale_zoom16;
    <LinePatternSymbolizer offset="&cyclelane_offset_high_zoom;"  file="../symbols/cyclelane_narrow.png"/>
  </Rule>

  <Rule>
    &maxscale_zoom12;
    &minscale_zoom14;
    <Filter>([cycleway]='lane' and not ([oneway]='yes' or [oneway]='-1'))</Filter>
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;"  file="../symbols/cyclelane_narrow.png"/>
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;"  file="../symbols/cyclelane_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:right]='lane' or ([cycleway]='lane' and [oneway]='yes'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="-&cyclelane_offset_medium_zoom;"  file="../symbols/cyclelane_narrow.png"/>
  </Rule>
  <Rule>
    <Filter>([cycleway:left]='lane' or ([cycleway]='lane' and [oneway]='-1') or ([cycleway]='opposite_lane'))</Filter>
    &maxscale_zoom12;
    &minscale_zoom14;
    <LinePatternSymbolizer offset="&cyclelane_offset_medium_zoom;"  file="../symbols/cyclelane_narrow.png"/>
  </Rule>
</Style>

<!--
<Style name="cycleway-name">
  <Rule>
    <TextSymbolizer dy="13" fontset-name="bold-fonts" size="15" fill="&color_cycleway;" placement="line" halo-radius="0" spacing="300" halo-fill="&color_residential;">[route_name]</TextSymbolizer>
  </Rule>
</Style>
-->

<Style name="cycleway-text">
  <Rule>
    <Filter>([ncn]!='' and [state]='recommended')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer fontset-name="bold-fonts" size="10" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text_proposed;" placement="line" halo-radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and [state]='recommended')</Filter>
    &maxscale_zoom13;
    <TextSymbolizer fontset-name="bold-fonts" size="9" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text_proposed;" placement="line" halo-radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and [state]='recommended')</Filter>
    &maxscale_zoom15;
    <TextSymbolizer fontset-name="bold-fonts" size="8" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text_proposed;" placement="line" halo-radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>

  <Rule>
    <Filter>([ncn]!='' and not [state]!='')</Filter>
    <TextSymbolizer fontset-name="bold-fonts" size="10" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text;" placement="line" halo-radius="&halo_radius_cycleway;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([rcn]!='' and not [state]!='')</Filter>
    <TextSymbolizer fontset-name="bold-fonts" size="9" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text;" placement="line" halo-radius="&halo_radius_cycleway;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>
  <Rule>
    <Filter>([lcn]!='' and not [state]!='')</Filter>
    &maxscale_zoom14;
    <TextSymbolizer fontset-name="bold-fonts" size="8" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text;" placement="line" halo-radius="&halo_radius_cycleway;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>

  <Rule>
    <Filter>([ncn]!='' and [state]!='' and [state]!='recommended')</Filter>
    &maxscale_zoom12;
    <TextSymbolizer fontset-name="bold-fonts" size="10" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text_proposed;" placement="line" halo-radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom13;
    <Filter>([rcn]!='' and [state]!='' and [state]!='recommended')</Filter>
    <TextSymbolizer fontset-name="bold-fonts" size="9" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text_proposed;" placement="line" halo-radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>
  <Rule>
    &maxscale_zoom15;
    <Filter>([lcn]!='' and [state]!='' and [state]!='recommended')</Filter>
    <TextSymbolizer fontset-name="bold-fonts" size="8" fill="&color_ncn_text;" halo-fill="&color_cycleway_background_text_proposed;" placement="line" halo-radius="&halo_radius_cycleway_proposed;"  spacing="&spacing_cycleway_text;" minimum-distance="&min_distance_cycleway_text;" allow-overlap="false" max-char-angle-delta="&text_max_angle;" >' ' + [ref]+ ' '</TextSymbolizer>
  </Rule>

</Style>

<Style name="cycleway-tunnel">
  <Rule name="tunel">
    <Filter>([tunnel]='yes')</Filter>
    <LineSymbolizer
      stroke="white"
      stroke-opacity="0.6"
      stroke-width="2.5"
    />
  </Rule>
</Style>

<Style name="cycleway-with-cyclelane">
  <Rule name="cyklotrasa po schodech">
    <Filter>([surface_type]='steps' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0, 2, 1, 0"
    />
  </Rule>

  <Rule name="cyklotrasa s dobrým povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa se nezpevněným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa se špatným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa s dobrým povrchem">
    <Filter>([traffic]='low' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa se nezpevněným povrchem">
    <Filter>([traffic]='low' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="segregovaná cyklotrasa se špatným povrchem">
    <Filter>([traffic]='low' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='medium' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <!-- LCN -->

  <Rule name="cyklotrasa po schodech">
    <Filter>([surface_type]='steps' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0, 2, 1, 0"
    />
  </Rule>

  <Rule name="cyklotrasa s dobrým povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa se nezpevněným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa se špatným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa s dobrým povrchem">
    <Filter>([traffic]='low' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa se nezpevněným povrchem">
    <Filter>([traffic]='low' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="segregovaná cyklotrasa se špatným povrchem">
    <Filter>([traffic]='low' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='medium' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

</Style>

<Style name="cycleway-with-cyclelane_opposite">
  <Rule name="cyklotrasa po schodech">
    <Filter>([surface_type]='steps' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0, 2, 1, 0"
    />
  </Rule>

  <Rule name="cyklotrasa s dobrým povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa se nezpevněným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa se špatným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa s dobrým povrchem">
    <Filter>([traffic]='low' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa se nezpevněným povrchem">
    <Filter>([traffic]='low' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="segregovaná cyklotrasa se špatným povrchem">
    <Filter>([traffic]='low' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='medium' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <!-- LCN -->

  <Rule name="cyklotrasa po schodech">
    <Filter>([surface_type]='steps' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0, 2, 1, 0"
    />
  </Rule>

  <Rule name="cyklotrasa s dobrým povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa se nezpevněným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa se špatným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa s dobrým povrchem">
    <Filter>([traffic]='low' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa se nezpevněným povrchem">
    <Filter>([traffic]='low' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="segregovaná cyklotrasa se špatným povrchem">
    <Filter>([traffic]='low' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='medium' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="1, 9"
    />
  </Rule>

</Style>

<Style name="cycleway">
  <Rule name="cyklotrasa po schodech">
    <Filter>([surface_type]='steps' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0, 2, 1, 0"
    />
  </Rule>

  <Rule name="cyklotrasa s dobrým povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="cyklotrasa se nezpevněným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa se špatným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="round"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa s dobrým povrchem">
    <Filter>([traffic]='low' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa se nezpevněným povrchem">
    <Filter>([traffic]='low' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="segregovaná cyklotrasa se špatným povrchem">
    <Filter>([traffic]='low' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='medium' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='good' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='unpaved' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='bad' and not ([rcn]='yes' or [ncn]='yes'))</Filter>
    &maxscale_zoom14;
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <!-- LCN -->

  <Rule name="cyklotrasa po schodech">
    <Filter>([surface_type]='steps' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0, 2, 1, 0"
    />
  </Rule>

  <Rule name="cyklotrasa s dobrým povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="cyklotrasa se nezpevněným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa se špatným povrchem a nutností vést kolo">
    <Filter>([traffic]='nobicycle' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_nobicycle;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="2"
      stroke-linejoin="bevel"
      stroke-linecap="round"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa s dobrým povrchem">
    <Filter>([traffic]='low' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
    />
  </Rule>

  <Rule name="segregovaná cyklotrasa se nezpevněným povrchem">
    <Filter>([traffic]='low' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="segregovaná cyklotrasa se špatným povrchem">
    <Filter>([traffic]='low' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='medium' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='medium' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
      stroke-dasharray="1, 9"
    />
  </Rule>

  <Rule name="cyklotrasa s mírným provozem a s dobrým povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='good' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a s nezpevněným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='unpaved' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="10, 4"
    />
  </Rule>
  <Rule name="cyklotrasa s mírným provozem a se špatným povrchem">
    <Filter>([traffic]='heavy' and [surface_type]='bad' and ([rcn]='yes' or [ncn]='yes'))</Filter>
    <LineSymbolizer
      stroke="&color_cycleway_heavy_traffic;"
      stroke-opacity="&opacity_cycleway;"
      stroke-width="4"
      stroke-linejoin="bevel"
      stroke-linecap="round"
      stroke-dasharray="1, 9"
    />
  </Rule>

</Style>

<Style name="nobicycle">
  <Rule name="zákaz vjezdu cyklistů">
    <Filter>([access_mode]='destination')</Filter>
    &maxscale_zoom13;
    &minscale_zoom18;
    <LinePatternSymbolizer file="../symbols/nobicycle-destination.png"/>
  </Rule>
  <Rule name="zákaz vjezdu cyklistů">
    <Filter>([access_mode]='no_access')</Filter>
    &maxscale_zoom13;
    &minscale_zoom18;
    <LinePatternSymbolizer file="../symbols/nobicycle.png"/>
  </Rule>
</Style>
