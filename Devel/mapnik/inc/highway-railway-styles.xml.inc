<!-- -->
<!--
<Style name="access">
    <Rule name="soukromá komunikace">
            <Filter>((([access]='private') or ([access]='no')) and not ([bicycle]='yes'))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="rgb(239,169,169)"
                stroke-width="6"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="6, 8"
            />
    </Rule>
</Style>
-->
<Style name="aerialways">
    <Rule name="kabinová lanovka">
            <Filter>(([aerialway]='cable_car') or ([aerialway]='gondola'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom12;
            <LinePatternSymbolizer file="&symbols-path;cable_car.png"></LinePatternSymbolizer>
    </Rule>
    <Rule name="sedačková lanovka, lyžařský vlek">
            <Filter>(([aerialway]='chair_lift') or ([aerialway]='drag_lift'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom12;
            <LinePatternSymbolizer file="&symbols-path;chair_lift.png"></LinePatternSymbolizer>
    </Rule>
</Style>
<Style name="directions">
    <Rule name="jednosměrná ulice">
            <Filter>([oneway]='yes')</Filter>
            &maxscale_zoom15;
            &minscale_zoom16;
            <MarkersSymbolizer spacing="&spacing_directions;" marker-type="arrow" allow-overlap="true" placement="line" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_oneway_arrow;" transform="translate(7 &offset_directions;) scale(&scale_directions;)"/>
    </Rule>
    <Rule name="jednosměrná ulice">
            <Filter>([oneway]='-1')</Filter>
            &maxscale_zoom15;
            &minscale_zoom16;
            <MarkersSymbolizer spacing="&spacing_directions;" marker-type="arrow" allow-overlap="true" placement="line" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_oneway_arrow;" transform="translate(-7 -&offset_directions;) scale(-&scale_directions;)"/>
    </Rule>

    <Rule name="jednosměrná ulice">
            <Filter>([oneway]='yes')</Filter>
            &maxscale_zoom17;
            <MarkersSymbolizer spacing="&spacing_directions;" marker-type="arrow" allow-overlap="true" placement="line" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_oneway_arrow;" transform="translate(7 &offset_directions_high;) scale(&scale_directions;)"/>
    </Rule>
    <Rule name="jednosměrná ulice">
            <Filter>([oneway]='-1')</Filter>
            &maxscale_zoom17;
            <MarkersSymbolizer spacing="&spacing_directions;" marker-type="arrow" allow-overlap="true" placement="line" max-error="0" stroke-width="&stroke-width_directions;" stroke="&stroke_directions;" fill="&color_oneway_arrow;" transform="translate(-7 -&offset_directions_high;) scale(-&scale_directions;)"/>
    </Rule>
</Style>
<Style name="footbikecycle-tunnels">
    <Rule name="!podchod">
            <Filter>([highway]='bridleway')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bridleway;"
                stroke-width="2"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="podchod">
            <Filter>(([highway]='footway' or ([highway]='path' and [foot]='designated')) and not ([bicycle]='yes' or [bicycle]='designated'))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_footway_casing;"
                stroke-width="6.5"
                stroke-dasharray="4, 4"
            />
            <LineSymbolizer
                stroke="&color_footway_tunnel;"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na stezce pro pěší a cyklisty">
            <Filter>(([highway]='cycleway' and ([foot]='yes' or [foot]='designated')) or (([highway]='footway') and ([bicycle]='yes' or [bicycle]='designated')))</Filter>
            &maxscale_zoom10;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="6"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="&color_bicycle_footway_tunnel;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na stezce pro cyklisty">
            <Filter>(([highway]='cycleway') and not ([foot]='yes' or [foot]='designated'))</Filter>
            &maxscale_zoom10;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="6"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="&color_bicycle_tunnel;"
                stroke-width="3"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na stezce pro pěší a cyklisty">
            <Filter>(([highway]='cycleway' and ([foot]='yes' or [foot]='designated')) or (([highway]='footway') and ([bicycle]='yes' or [bicycle]='designated')))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="8"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="6"
            />
            <LineSymbolizer
                stroke="&color_bicycle_footway_tunnel;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na stezce pro cyklisty">
            <Filter>(([highway]='cycleway') and not ([foot]='yes' or [foot]='designated'))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="8"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="6"
            />
            <LineSymbolizer
                stroke="&color_bicycle_tunnel;"
                stroke-width="5"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!podchod">
            <Filter>(([highway]='path') and not (([bicycle]='designated') or ([foot]='designated')))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="5.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke-width="0.5"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="6, 3"
            />
    </Rule>
    <Rule name="singltrack">
            <Filter>(([highway]='path') and [bicycle]='designated')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="6"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-opacity="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="6, 3"
            />
    </Rule>
</Style>
<Style name="highway-area-casing">
    <Rule name="!prostranství">
            <Filter>((([highway]='residential') or ([highway]='unclassified')) or ([highway]='service') or ([highway]='living_street'))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_residential_background;"
            />
    </Rule>
    <Rule name="!pěší zóna">
            <Filter>((([highway]='pedestrian') or ([highway]='service')) or ([highway]='footway'))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_pedestrian;"
            />
    </Rule>
</Style>
<Style name="highway-area-fill">
    <Rule name="!prostranství">
            <Filter>((([highway]='residential') or ([highway]='unclassified')) or ([highway]='service') or ([highway]='living_street'))</Filter>
            &maxscale_zoom14;
            <PolygonSymbolizer
                fill="&color_residential;"
            />
    </Rule>
    <Rule name="!pěší zóna">
            <Filter>((([highway]='pedestrian') or ([highway]='service')) or ([highway]='footway'))</Filter>
            &maxscale_zoom14;
            <PolygonSymbolizer
                fill="&color_pedestrian;"
            />
    </Rule>
</Style>
<Style name="minor-roads-casing">
    <Rule name="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="3"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="3"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="6.5"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="7"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="7"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="10"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="11.5"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="12"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="13"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="16"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="16"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>((((([highway]='living_street') or ([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified'))) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="7.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified')) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="8.1"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="8.1"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="16"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="15"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="15"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="podklad stezky pro cyklisty">
            <Filter>(([highway]='cycleway' or ([highway]='footway' and ([bicycle]='yes' or [bicycle]='designated'))) and not ((([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &maxscale_zoom10;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="&color_bicycle_casing;"
                stroke-width="4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="podklad stezky pro cyklisty">
            <Filter>(([highway]='cycleway' or ([highway]='footway' and ([bicycle]='yes' or [bicycle]='designated'))) and not ((([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_bicycle_casing;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="stezka pro pěší / chodnik">
            <Filter>(([highway]='footway') and not ([bicycle]='yes' or [bicycle]='designated') and not [tunnel]='yes')</Filter>
            &maxscale_zoom13;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="&color_footway_casing;"
                stroke-width="2.5"
            />
    </Rule>
    <Rule name="stezka pro pěší / chodnik">
            <Filter>(([highway]='footway') and not ([bicycle]='yes' or [bicycle]='designated') and not [tunnel]='yes')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_footway_casing;"
                stroke-width="3.5"
            />
    </Rule>
    <Rule name="pěší zóna">
            <Filter>(([highway]='pedestrian') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_pedestrian_background;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!pěší zóna">
            <Filter>(([highway]='pedestrian') and ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_pedestrian_background;"
                stroke-width="4"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="pěší zóna">
            <Filter>(([highway]='pedestrian') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_pedestrian_background;"
                stroke-width="3.6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!pěší zóna">
            <Filter>(([highway]='pedestrian') and ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_pedestrian_background;"
                stroke-width="5.6"
                stroke-dasharray="4, 4"
            />
    </Rule>
    <Rule name="pěší zóna">
            <Filter>(([highway]='pedestrian') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_pedestrian_background;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!pěší zóna">
            <Filter>(([highway]='pedestrian') and ([tunnel]='yes'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_pedestrian_background;"
                stroke-width="9.5"
                stroke-dasharray="4, 4"
            />
    </Rule>
    <Rule name="pěší zóna">
            <Filter>(([highway]='pedestrian') and not (([tunnel]='yes')))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_pedestrian_background;"
                stroke-width="9"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!pěší zóna">
            <Filter>(([highway]='pedestrian') and ([tunnel]='yes'))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_pedestrian_background;"
                stroke-width="12"
                stroke-dasharray="4, 4"
            />
    </Rule>
</Style>
<Style name="minor-roads-casing-links">
    <Rule name="!přivaděč dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="1.5"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="!přivaděč dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="4.6"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="!přivaděč dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="8.1"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="!přivaděč dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="11"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="!přivaděč silnice 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="3"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="!přivaděč silnice 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="6"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="!přivaděč silnice 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="12"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="!přivaděč silnice 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="16"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="!přivaděč silnice 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč silnice 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="7"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč silnice 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="12"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč silnice 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="16"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="závodní okruh">
            <Filter>([highway]='raceway')</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_raceway;"
                stroke-width="1.2"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="závodní okruh">
            <Filter>([highway]='raceway')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_raceway;"
                stroke-width="4"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="závodní okruh">
            <Filter>([highway]='raceway')</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_raceway;"
                stroke-width="7"
                stroke-linejoin="round"
            />
    </Rule>
</Style>
<Style name="minor-roads-fill">
<!--
    <Rule name="silnice ve výstavbě">
            <Filter>(([highway]='construction') and not (([construction]&lt;&gt;'')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="2"
            />
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="2"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="dálnice nebo rychlostní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='motorway') or ([construction]='motorway_link') or ([construction]='trunk') or ([construction]='trunk_link')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="2"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="2"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="silnice 1. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='primary') or ([construction]='primary_link')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="2"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="2"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="silnice 2.třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='secondary') or ([construction]='secondary_link')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="2"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="2"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="silnice ve výstavbě">
            <Filter>(([highway]='construction') and not (([construction]&lt;&gt;'')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="3.5"
                stroke-dasharray="6, 4"
            />
    </Rule>
    <Rule name="dálnice nebo rychlostní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='motorway') or ([construction]='motorway_link') or ([construction]='trunk') or ([construction]='trunk_link')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="3.5"
                stroke-dasharray="6, 4"
            />
    </Rule>
    <Rule name="silnice 1. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='primary') or ([construction]='primary_link')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="3.5"
                stroke-dasharray="6, 4"
            />
    </Rule>
    <Rule name="silnice 2.třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='secondary') or ([construction]='secondary_link')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="3.5"
                stroke-dasharray="6, 4"
            />
    </Rule>
    <Rule name="silnice 3.třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='tertiary') or ([construction]='tertiary_link')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="3.5"
                stroke-dasharray="6, 4"
            />
    </Rule>
    <Rule name="ostatní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (((([construction]='residential') or ([construction]='unclassified')) or ([construction]='living_street')) or ([construction]='service')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="3.5"
                stroke-dasharray="6, 4"
            />
    </Rule>
    <Rule name="zrušená silnice">
            <Filter>([highway]='abandoned')</Filter>
            &minscale_zoom15;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(151,151,151)"
                stroke-width="4"
                stroke-opacity="0.5"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="3.5"
                stroke-dasharray="6, 4"
                stroke-opacity="0.5"
            />
    </Rule>
    <Rule name="silnice ve výstavbě">
            <Filter>(([highway]='construction') and not (([construction]&lt;&gt;'')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="8"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="7"
                stroke-dasharray="8, 6"
            />
    </Rule>
    <Rule name="dálnice nebo rychlostní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='motorway') or ([construction]='motorway_link') or ([construction]='trunk') or ([construction]='trunk_link')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="8"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="7"
                stroke-dasharray="8, 6"
            />
    </Rule>
    <Rule name="silnice 1. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='primary') or ([construction]='primary_link')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="8"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="7"
                stroke-dasharray="8, 6"
            />
    </Rule>
    <Rule name="silnice 2.třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='secondary') or ([construction]='secondary_link')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="8"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="7"
                stroke-dasharray="8, 6"
            />
    </Rule>
    <Rule name="silnice 3. třídy ve výstavbě">
            <Filter>(([highway]='construction') and (([construction]='tertiary') or ([construction]='tertiary_link')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="8"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="7"
                stroke-dasharray="8, 6"
            />
    </Rule>
    <Rule name="ostatní silnice ve výstavbě">
            <Filter>(([highway]='construction') and (((([construction]='residential') or ([construction]='unclassified')) or ([construction]='living_street')) or ([construction]='service')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="8"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="7"
                stroke-dasharray="8, 6"
            />
    </Rule>
    <Rule name="zrušená silnice">
            <Filter>([highway]='abandoned')</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="rgb(151,151,151)"
                stroke-width="8"
                stroke-opacity="0.5"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="7"
                stroke-dasharray="8, 6"
                stroke-opacity="0.5"
            />
    </Rule>
-->
    <Rule name="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="2"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="8.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>((([highway]='motorway') or ([highway]='trunk')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_primary_lozoom;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="15.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="15.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="elektrifikovaná železnice">
            <Filter>([railway]='rail' and ([electrified]='yes' or [electrified]='contact_line'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="6"
                stroke-linejoin="bevel"
                stroke-dasharray="0, 8, 1, 9, 1, 1"
            />
    </Rule>
    <Rule name="železniční tunel">
            <Filter>(([railway]='rail') and ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="4"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="1"
                stroke-linejoin="round"
            />
    </Rule>
<!--    <Rule name="">
            <Filter>(((([railway]='disused') or ([railway]='abandoned')) or ([railway]='construction')) and not (([highway]&lt;&gt;'')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-dasharray="2, 4"
            />
    </Rule>
    <Rule name="">
            <Filter>((((([railway]='disused') or ([railway]='abandoned')) or ([railway]='construction')) and not (([highway]&lt;&gt;''))) and ([bridge]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-dasharray="2, 4"
            />
    </Rule>-->
    <Rule name="železnice">
            <Filter>(([railway]='rail') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="3"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-linejoin="round"
                stroke-dasharray="8, 12"
            />
    </Rule>
    <Rule name="elektrifikovaná železnice">
            <Filter>([railway]='rail' and ([electrified]='yes' or [electrified]='contact_line'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="7"
                stroke-linejoin="bevel"
                stroke-dasharray="1,9,1,9"
            />
    </Rule>
    <Rule name="železniční most">
            <Filter>(([railway]='rail' or [railway]='tram') and ([bridge]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="7"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="5"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="železnice">
            <Filter>(([railway]='rail') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="3"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-linejoin="round"
                stroke-dasharray="0, 11, 8, 1"
            />
    </Rule>
    <Rule name="železniční tunel">
            <Filter>(([railway]='rail') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="4"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="1"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="vedlejší kolej">
            <Filter>([railway]='spur-siding-yard')</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="2"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="0.7"
                stroke-linejoin="round"
                stroke-dasharray="0, 11, 8, 1"
            />
    </Rule>
    <Rule name="úzkorozchodná železnice">
            <Filter>((([railway]='narrow_gauge') or ([railway]='funicular')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(102,102,102)"
                stroke-width="2"
            />
    </Rule>
    <Rule name="tunel úzkorozchodné železnice">
            <Filter>((([railway]='narrow_gauge') or ([railway]='funicular')) and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(102,102,102)"
                stroke-width="5"
                stroke-dasharray="5, 3"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="rgb(170,170,170)"
                stroke-width="1.5"
            />
    </Rule>
    <Rule name="!tunel pro tramvaj">
            <Filter>(([railway]='tram') and ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_tram;"
                stroke-width="0.5"
                stroke-opacity="&opacity_tram;"
                stroke-dasharray="5, 3"
            />
    </Rule>
    <Rule name="!tunel pro tramvaj">
            <Filter>(([railway]='tram') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_tram;"
                stroke-width="1"
                stroke-opacity="&opacity_tram;"
                stroke-dasharray="5, 3"
            />
    </Rule>
    <Rule name="!městská rychlodráha">
            <Filter>(([railway]='light_rail') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(102,102,102)"
                stroke-width="2"
                stroke-dasharray="5, 3"
            />
    </Rule>
    <Rule name="!městská rychlodráha">
            <Filter>(([railway]='light_rail') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(102,102,102)"
                stroke-width="2"
            />
    </Rule>
<!--
    <Rule name="metro">
            <Filter>(([railway]='subway') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(153,153,153)"
                stroke-width="2"
                stroke-dasharray="5, 3"
            />
    </Rule>
-->
    <Rule name="metro na povrchu">
            <Filter>(([railway]='subway') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(153,153,153)"
                stroke-width="2"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_tertiary_lozoom;"
                stroke-width="0.8"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_tertiary_lozoom;"
                stroke-width="1"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="9.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice 3. třídy">
            <Filter>(([highway]='tertiary') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="13"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') or ([highway]='road')) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') or ([highway]='road')) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') or ([highway]='road')) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom12;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_road_lozoom;"
                stroke-width="0.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="9.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified') ) and not ([tunnel]='yes')) or (([highway]='service') and not (([service]='parking_aisle') or ([tunnel]='yes'))))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="13"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="9.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="silnice s chybějící klasifikací">
            <Filter>(([highway]='road') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="13"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="parkovací pruh">
            <Filter>(([highway]='service') and ([service]='parking_aisle'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="pěší zóna">
            <Filter>([highway]='pedestrian' and not [bicycle]='yes')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_pedestrian;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="pěší zóna">
            <Filter>([highway]='pedestrian' and not [bicycle]='yes')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_pedestrian;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="pěší zóna">
            <Filter>([highway]='pedestrian' and not [bicycle]='yes')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_pedestrian;"
                stroke-width="5.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="pěší zóna">
            <Filter>([highway]='pedestrian' and not [bicycle]='yes')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_pedestrian;"
                stroke-width="8"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="nástupiště">
            <Filter>(([highway]='platform') or ([railway]='platform'))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="schodiště">
            <Filter>([highway]='steps')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_steps_background;"
                stroke-width="5"
            />
            <LineSymbolizer
                stroke="&color_steps;"
                stroke-width="4"
                stroke-dasharray="2, 1"
            />
    </Rule>
    <Rule name="!stezka např. pro koně">
            <Filter>([highway]='bridleway' and not ([tunnel]='yes'))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="3"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bridleway;"
                stroke-width="1.2"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="stezka pro pěší">
            <Filter>(([highway]='footway' or ([highway]='path' and [foot]='designated')) and not ([bicycle]='yes' or [bicycle]='designated') and not [tunnel]='yes')</Filter>
            &maxscale_zoom13;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="&color_footway;"
                stroke-width="1.5"
            />
    </Rule>
    <Rule name="stezka pro pěší">
            <Filter>(([highway]='footway' or ([highway]='path' and [foot]='designated')) and not ([bicycle]='yes' or [bicycle]='designated') and not [tunnel]='yes')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_footway;"
                stroke-width="2.5"
            />
    </Rule>
    <Rule name="!ostatní neurčené stezky">
            <Filter>((([highway]='path') and not (([bicycle]='designated') or ([foot]='designated'))) and not (([tunnel]='yes')))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke-width="0.5"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="6, 3"
            />
    </Rule>
    <Rule name="nástupiště">
            <Filter>(([highway]='platform') or ([railway]='platform'))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="rgb(187,187,187)"
                stroke-width="4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="schodiště">
            <Filter>([highway]='steps')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_steps_background;"
                stroke-width="6"
                stroke-opacity="0.4"
            />
            <LineSymbolizer
                stroke="&color_steps;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="1, 3"
            />
    </Rule>
    <Rule name="singltrack">
            <Filter>((([highway]='path') and ([bicycle]='designated' or [bicycle]='yes')) and not ([tunnel]='yes'))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-opacity="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle;"
                stroke-width="5"
                stroke-dasharray="6, 3"
            />
    </Rule>
    <Rule name="přistávací plocha">
            <Filter>([aeroway]='runway')</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="rgb(187,187,204)"
                stroke-width="2"
            />
    </Rule>
    <Rule name="přistávací plocha">
            <Filter>([aeroway]='runway')</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="rgb(187,187,204)"
                stroke-width="7"
            />
    </Rule>
    <Rule name="přistávací plocha">
            <Filter>(([aeroway]='runway') and not (([bridge]='yes')))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="rgb(187,187,204)"
                stroke-width="18"
            />
    </Rule>
    <Rule name="!příjezd na ranvej">
            <Filter>([aeroway]='taxiway')</Filter>
            &minscale_zoom13;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="rgb(187,187,204)"
            />
    </Rule>
    <Rule name="!příjezd na ranvej">
            <Filter>(([aeroway]='taxiway') and not (([bridge]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="rgb(187,187,204)"
                stroke-width="4"
            />
    </Rule>
    <Rule name="!příjezd na ranvej">
            <Filter>(([aeroway]='taxiway') and not (([bridge]='yes')))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="rgb(187,187,204)"
                stroke-width="6"
            />
    </Rule>
</Style>
<Style name="bicycle-roads-fill">
    <Rule name="ulice pro cyklisty bez aut">
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_pedestrian_bicycle;"
                stroke-opacity="&opacity_pedestrian_bicycle;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ulice pro cyklisty bez aut">
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_pedestrian_bicycle;"
                stroke-opacity="&opacity_pedestrian_bicycle;"
                stroke-width="4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ulice pro cyklisty bez aut">
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_pedestrian_bicycle;"
                stroke-opacity="&opacity_pedestrian_bicycle;"
                stroke-width="8"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ulice pro cyklisty bez aut">
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_pedestrian_bicycle;"
                stroke-opacity="&opacity_pedestrian_bicycle;"
                stroke-width="12"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="bicycle-area-fill">
    <Rule name="plocha pro cyklisty bez aut">
            &maxscale_zoom14;
            <PolygonSymbolizer
                fill="&color_pedestrian_bicycle_area;"
            />
    </Rule>
</Style>
<Style name="cycleway-fill">
    <Rule name="stezka pro cyklisty">
            <Filter>((([highway]='cycleway') and not ([foot]='yes' or [foot]='designated')) and not (([tunnel]='yes')))</Filter>
            &maxscale_zoom10;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="&color_bicycle;"
                stroke-width="3"
            />
    </Rule>
    <Rule name="stezka pro cyklisty">
            <Filter>((([highway]='cycleway') and not ([foot]='yes' or [foot]='designated')) and not (([tunnel]='yes')))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_bicycle;"
                stroke-width="4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="stezka pro  pěší a cyklisty">
            <Filter>((([highway]='cycleway' and ([foot]='yes' or [foot]='designated')) or (([highway]='footway') and ([bicycle]='yes' or [bicycle]='designated'))) and not (([tunnel]='yes')))</Filter>
            &maxscale_zoom10;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="&color_bicycle_footway;"
                stroke-width="3"
            />
    </Rule>
    <Rule name="stezka pro  pěší a cyklisty">
            <Filter>((([highway]='cycleway' and ([foot]='yes' or [foot]='designated')) or (([highway]='footway') and ([bicycle]='yes' or [bicycle]='designated'))) and not (([tunnel]='yes')))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_bicycle_footway;"
                stroke-width="4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="minor-roads-fill-links">
    <Rule name="!přivaděč na dálnici nebo rychlostní silnici">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="0.5"
            />
    </Rule>
    <Rule name="!přivaděč na dálnici nebo rychlostní silnici">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na dálnici nebo rychlostní silnici">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na dálnici nebo rychlostní silnici">
            <Filter>((([highway]='motorway_link') or ([highway]='trunk_link')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="9"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_primary_lozoom;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 1. třídy">
            <Filter>(([highway]='primary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="15.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="8"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!přivaděč na silnici 2. třídy">
            <Filter>(([highway]='secondary_link') and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="15.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="mwaybridge_layer0_casing">
    <Rule name="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6.5"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="9"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="12"
            />
    </Rule>
</Style>
<Style name="mwaybridge_layer0_fill">
    <Rule name="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="5.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="7.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="10"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="mwaybridge_layer1_casing">
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6.5"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="9"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="12"
            />
    </Rule>
</Style>
<Style name="mwaybridge_layer1_fill">
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="5.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="7.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='1'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="10"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="mwaybridge_layer2_casing">
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6.5"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="9"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="12"
            />
    </Rule>
</Style>
<Style name="mwaybridge_layer2_fill">
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="5.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="7.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='2'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="10"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="mwaybridge_layer3_casing">
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6.5"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="9"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="12"
            />
    </Rule>
</Style>
<Style name="mwaybridge_layer3_fill">
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="5.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="7.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční most">
            <Filter>((([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link')) and ([layer]='3'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="10"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="noncased-ways-bridges">
    <Rule name="!přistávací plocha">
            <Filter>([aeroway]='runway')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="19"
            />
            <LineSymbolizer
                stroke="rgb(187,187,204)"
                stroke-width="18"
            />
    </Rule>
    <Rule name="!příjezd na ranvej">
            <Filter>([aeroway]='taxiway')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="5"
            />
            <LineSymbolizer
                stroke="rgb(187,187,204)"
                stroke-width="4"
            />
    </Rule>
    <Rule name="!příjezd na ranvej">
            <Filter>([aeroway]='taxiway')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="7"
            />
            <LineSymbolizer
                stroke="rgb(187,187,204)"
                stroke-width="6"
            />
    </Rule>
    <Rule name="!metro">
            <Filter>([railway]='subway')</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="5.5"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="rgb(153,153,153)"
                stroke-width="2"
            />
    </Rule>
    <Rule name="!městská rychlodráha">
            <Filter>([railway]='light_rail')</Filter>
            &minscale_zoom18;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="rgb(85,85,85)"
                stroke-width="5.5"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="rgb(102,102,102)"
                stroke-width="2"
            />
    </Rule>
    <Rule name="!stezka např. pro koně">
            <Filter>([highway]='bridleway')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="5.5"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bridleway;"
                stroke-width="1.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="most na stezce pro pěší">
            <Filter>(([highway]='footway' or ([highway]='path' and [foot]='designated')) and not ([bicycle]='yes' or [bicycle]='designated'))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_footway;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="1, 3"
            />
    </Rule>
    <Rule name="most na stezce pro pěší a cyklisty">
            <Filter>(([highway]='cycleway' and ([foot]='yes' or [foot]='designated')) or (([highway]='footway') and ([bicycle]='yes' or [bicycle]='designated')))</Filter>
            &maxscale_zoom10;
            &minscale_zoom14;
            <LineSymbolizer
                stroke-width="7"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_footway;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na stezce pro cyklisty">
            <Filter>(([highway]='cycleway') and not ([foot]='yes' or [foot]='designated'))</Filter>
            &maxscale_zoom10;
            &minscale_zoom14;
            <LineSymbolizer
                stroke-width="7"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="5"
            />
            <LineSymbolizer
                stroke="&color_bicycle;"
                stroke-width="3"
            />
    </Rule>
    <Rule name="most na stezce pro pěší a cyklisty">
            <Filter>(([highway]='cycleway' and ([foot]='yes' or [foot]='designated')) or (([highway]='footway') and ([bicycle]='yes' or [bicycle]='designated')))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="9"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="7"
            />
            <LineSymbolizer
                stroke="&color_bicycle_footway;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na stezce pro cyklisty">
            <Filter>(([highway]='cycleway') and not ([foot]='yes' or [foot]='designated'))</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="9"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="9"
            />
            <LineSymbolizer
                stroke="&color_bicycle;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="pěšina">
            <Filter>(([highway]='path') and not (([bicycle]='designated') or ([foot]='designated')))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke-width="0.5"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="6, 3"
            />
    </Rule>
    <Rule name="singltrack">
            <Filter>((([highway]='path') and [bicycle]='designated'))</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle;"
                stroke-width="5"
                stroke-dasharray="6, 3"
            />
    </Rule>
    <Rule name="!ostatní neurčené stezky">
            <Filter>(([highway]='path') and not (([bicycle]='designated') or ([foot]='designated')))</Filter>
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="4"
            />
            <LineSymbolizer
                stroke="rgb(255,255,255)"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke-width="0.5"
                stroke-linejoin="round"
                stroke-linecap="round"
                stroke-dasharray="6, 3"
            />
    </Rule>
</Style>
<Style name="primarybridge_layer0_casing">
    <Rule name="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="11"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="16"
            />
    </Rule>
</Style>
<Style name="primarybridge_layer0_fill">
    <Rule name="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="9.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="14.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="primarybridge_layer1_casing">
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="11"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="16"
            />
    </Rule>
</Style>
<Style name="primarybridge_layer1_fill">
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="9.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='1'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="14.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="primarybridge_layer2_casing">
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="6"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="11"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="16"
            />
    </Rule>
</Style>
<Style name="primarybridge_layer2_fill">
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="9.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>((([highway]='primary') or ([highway]='primary_link')) and ([layer]='2'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="14.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="road-bridges-casing">
    <Rule name="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke-width="3"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke-width="4"
            />
    </Rule>
    <Rule name="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="8"
            />
    </Rule>
    <Rule name="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="12"
            />
    </Rule>
    <Rule name="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="16"
            />
    </Rule>
    <Rule name="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="7.5"
            />
    </Rule>
    <Rule name="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="11"
            />
    </Rule>
    <Rule name="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="16"
            />
    </Rule>
    <Rule name="most na ostatní silnici">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="4.5"
            />
    </Rule>
    <Rule name="most na ostatní silnici">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="9"
            />
    </Rule>
    <Rule name="most na ostatní silnici">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke-width="11"
            />
    </Rule>
    <Rule name="most na ostatní silnici">
            <Filter>(((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')) or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="16"
            />
    </Rule>
    <Rule name="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="2.2"
            />
    </Rule>
    <Rule name="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="3.8"
            />
    </Rule>
    <Rule name="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke-width="7"
            />
    </Rule>
    <Rule name="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke-width="9.5"
            />
    </Rule>
</Style>
<Style name="road-bridges-fill">
    <Rule name="dálniční most">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_primary;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="7"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="10.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="14.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="9.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_tertiary;"
                stroke-width="14"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na ostatní silnici">
            <Filter>((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified') or ([highway]='road') or ([highway]='service'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na ostatní silnici">
            <Filter>((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')  or ([highway]='service'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="7.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na ostatní silnici">
            <Filter>((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')  or ([highway]='service'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="9.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na ostatní silnici">
            <Filter>((([highway]='residential') or ([highway]='minor')) or ([highway]='unclassified')  or ([highway]='service'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_residential;"
                stroke-width="14"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="7.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="9.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="most na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_road;"
                stroke-width="14"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_pedestrian;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_pedestrian;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_pedestrian;"
                stroke-width="5.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="!most v pěší zóně">
            <Filter>([highway]='pedestrian')</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_pedestrian;"
                stroke-width="8"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="roads-casing">
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom6;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="2.5"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="3"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="3.5"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='trunk'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="4"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="4.6"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="2.4"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="3"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>([highway]='primary')</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="3.5"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="4.1"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>([highway]='secondary')</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="2.5"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>([highway]='secondary')</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="2.8"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="3.6"
            />
    </Rule>
</Style>
<Style name="roads">
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom5;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="0.5"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer
                stroke="&color_motorway;"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="1.4"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="2"
            />
    </Rule>
    <Rule name="dálnice, rychlostní silnice">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_motorway;"
                stroke-width="2.5"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer
                stroke="&color_primary_lozoom;"
                stroke-width="0.5"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_primary_lozoom;"
                stroke-width="1.2"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_primary_lozoom;"
                stroke-width="2"
            />
    </Rule>
    <Rule name="silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_primary_lozoom;"
                stroke-width="2"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_secondary_lozoom;"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_secondary;"
                stroke-width="1.5"
            />
    </Rule>
    <Rule name="silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_secondary_lozoom;"
                stroke-width="1.5"
            />
    </Rule>
    <Rule name="železnice">
            <Filter>([railway]='rail')</Filter>
            &minscale_zoom9;
            &maxscale_zoom8;
            <LineSymbolizer
                stroke="&color_railway;"
            />
    </Rule>
    <Rule name="elektrifikovaná železnice">
            <Filter>([railway]='rail' and ([electrified]='yes' or [electrified]='contact_line'))</Filter>
            &minscale_zoom11;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="3.4"
                stroke-linejoin="bevel"
                stroke-dasharray="1, 8"
            />
    </Rule>
    <Rule name="železnice">
            <Filter>([railway]='rail')</Filter>
            &minscale_zoom11;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="1.2"
            />
    </Rule>
    <Rule name="úzkorozchodná železnice">
            <Filter>([railway]='narrow_gauge')</Filter>
            &minscale_zoom12;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_railway;"
            />
    </Rule>
    <Rule name="">
            <Filter>([railway]='preserved')</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="1.5"
                stroke-linejoin="round"
            />
    </Rule>
    <Rule name="historická železnice">
            <Filter>([railway]='preserved')</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_railway;"
                stroke-width="3"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_white;"
                stroke-linejoin="round"
                stroke-dasharray="0, 1, 8, 1"
            />
    </Rule>
</Style>
<Style name="trams">
    <Rule name="koleje tramvají">
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_tram;"
                stroke-width="3"
                stroke-dasharray="1, 8"
                stroke-opacity="&opacity_tram;"
            />
            <LineSymbolizer
                stroke="&color_tram;"
                stroke-width="0.5"
                stroke-opacity="&opacity_tram;"
            />
    </Rule>
    <Rule name="koleje tramvají">
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_tram;"
                stroke-width="5"
                stroke-dasharray="1, 8"
                stroke-opacity="&opacity_tram;"
            />
            <LineSymbolizer
                stroke="&color_tram;"
                stroke-width="1"
                stroke-opacity="&opacity_tram;"
            />
    </Rule>
</Style>
<Style name="tunnels-casing">
    <Rule name="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="3"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="6.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="10"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway_background;"
                stroke-width="13"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="4"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="6"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="11"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 1. třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary_background;"
                stroke-width="14"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="4"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="8"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="12"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 2. třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_secondary_background;"
                stroke-width="17"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="6"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="7.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="3"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="3.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="11"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="8.1"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="11"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="8.1"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="11"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel silnice 3. třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_tertiary_background;"
                stroke-width="11"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_residential_background;"
                stroke-width="15"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_road_background;"
                stroke-width="16"
                stroke-dasharray="4, 2"
            />
    </Rule>
</Style>
<Style name="tunnels-fill">
    <Rule name="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_motorway_tunnel;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_motorway_tunnel;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_motorway_tunnel;"
                stroke-width="8.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="dálniční tunel">
            <Filter>(([highway]='motorway') or ([highway]='motorway_link') or ([highway]='trunk') or ([highway]='trunk_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_motorway_tunnel;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 1.třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_primary_tunnel;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 1.třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_primary_tunnel;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 1.třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_primary_tunnel;"
                stroke-width="9"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 1.třídy">
            <Filter>(([highway]='primary') or ([highway]='primary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_primary_tunnel;"
                stroke-width="12"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 2.třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="&color_secondary_tunnel;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 2.třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_secondary_tunnel;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 2.třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_secondary_tunnel;"
                stroke-width="10"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 2.třídy">
            <Filter>(([highway]='secondary') or ([highway]='secondary_link'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_secondary_tunnel;"
                stroke-width="14"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_tertiary_lozoom;"
                stroke-width="0.8"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom12;
            &maxscale_zoom10;
            <LineSymbolizer
                stroke="&color_tertiary_lozoom;"
                stroke-width="1"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_tertiary_tunnel;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_tertiary_tunnel;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_residential_tunnel;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_residential_tunnel;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_road_tunnel;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_road_tunnel;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_tertiary_tunnel;"
                stroke-width="9.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel silnice 3.třídy">
            <Filter>([highway]='tertiary')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_tertiary_tunnel;"
                stroke-width="13"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_residential_tunnel;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_residential_tunnel;"
                stroke-width="9.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_road_tunnel;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_road_tunnel;"
                stroke-width="9.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel ostatní silnice">
            <Filter>(((([highway]='living_street') or ([highway]='residential') or ([highway]='minor') or ([highway]='unclassified'))) or (([highway]='service') and not ([service]='parking_aisle')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_residential_tunnel;"
                stroke-width="13"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="tunel na silnici s chybějící klasifikací">
            <Filter>([highway]='road')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_road_tunnel;"
                stroke-width="13"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<Style name="turning_circle">
    <Rule name="!točna pro auta">
            &minscale_zoom16;
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;turning_circle.15.png"></PointSymbolizer>
    </Rule>
    <Rule name="">
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;turning_circle.19.png"></PointSymbolizer>
    </Rule>
</Style>

