<!-- Styles for geographic names excluding placenames (countries, cities, villages...) -->
<Style name="area-text">
    <Rule>
            <Filter>(([way_area]&gt;=10000000) and (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom8;
            &minscale_zoom8;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" halo-radius="1" wrap-width="30" dy="7"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&gt;=5000000) and (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom9;
            &minscale_zoom9;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" halo-radius="1" wrap-width="30" dy="7"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&gt;=5000000) and (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom10;
            &minscale_zoom11;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&gt;=1000000) and (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom12;
            &minscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&gt;=500000) and (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom14;
            &minscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&gt;=150000) and not (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,51)" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&gt;=80000) and ([way_area]&lt;150000) and not (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,51)" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&gt;=20000) and ([way_area]&lt;80000) and not (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,51)" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&lt;20000) and not (([natural]='lake') or ([natural]='water') or ([landuse]='reservoir') or ([landuse]='water')))</Filter>
            &maxscale_zoom18;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,51)" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
</Style>
<Style name="glaciers-text">
    <Rule>
            <Filter>([way_area]&gt;=10000000)</Filter>
            &maxscale_zoom10;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(153,153,255)" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([way_area]&gt;=5000000) and ([way_area]&lt;10000000))</Filter>
            &maxscale_zoom11;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(153,153,255)" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([way_area]&lt;5000000)</Filter>
            &maxscale_zoom12;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(153,153,255)" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
</Style>
<Style name="roads-text">
    <Rule>
            <Filter>(([highway]='trunk') or ([highway]='primary'))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="rgb(0,0,0)" placement="line" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([highway]='trunk') or ([highway]='primary'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([highway]='trunk') or ([highway]='primary'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" placement="line" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='secondary') and [cycleway]='yes'</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="rgb(0,0,0)" placement="line" halo-radius="0" halo-fill="&color_secondary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='secondary') and [cycleway]='yes'</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" halo-radius="0" halo-fill="&color_secondary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='secondary') and [cycleway]='yes'</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" placement="line" halo-radius="0" halo-fill="&color_secondary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='secondary') and [cycleway]='no'</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="rgb(0,0,0)" placement="line" halo-radius="1" halo-fill="&color_secondary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='secondary') and [cycleway]='no'</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" halo-radius="1" halo-fill="&color_secondary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='secondary') and [cycleway]='no'</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" placement="line" halo-radius="1" halo-fill="&color_secondary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='tertiary') and [cycleway]='yes'</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" halo-radius="0" halo-fill="&color_tertiary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='tertiary') and [cycleway]='yes'</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="11" fill="rgb(0,0,0)" placement="line" halo-radius="0" halo-fill="&color_tertiary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='tertiary') and [cycleway]='no'</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" halo-radius="1" halo-fill="&color_tertiary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='tertiary') and [cycleway]='no'</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="11" fill="rgb(0,0,0)" placement="line" halo-radius="1" halo-fill="&color_tertiary;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
<!--
    <Rule>
            <Filter>(([highway]='construction'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([highway]='construction'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="11" fill="rgb(0,0,0)" placement="line" halo-radius="1"></TextSymbolizer>
    </Rule>
-->
    <Rule>
            <Filter>(([highway]='unclassified') or ([highway]='residential') or ([highway]='living_street')) and [cycleway]='yes'</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="rgb(0,0,0)" placement="line" halo-radius="0" spacing="300" halo-fill="&color_residential;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([highway]='unclassified') or ([highway]='residential') or ([highway]='living_street')) and [cycleway]='yes'</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" halo-radius="0" spacing="300" halo-fill="&color_residential;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([highway]='unclassified') or ([highway]='residential') or ([highway]='living_street')) and [cycleway]='yes'</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="11" fill="rgb(0,0,0)" placement="line" halo-radius="0" spacing="400" halo-fill="&color_residential;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>

    <Rule>
            <Filter>(([highway]='unclassified') or ([highway]='residential') or ([highway]='living_street')) and [cycleway]='no'</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="rgb(0,0,0)" placement="line" halo-radius="1" spacing="300" halo-fill="&color_residential;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([highway]='unclassified') or ([highway]='residential') or ([highway]='living_street')) and [cycleway]='no'</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" halo-radius="1" spacing="300" halo-fill="&color_residential;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([highway]='unclassified') or ([highway]='residential') or ([highway]='living_street')) and [cycleway]='no'</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="11" fill="rgb(0,0,0)" placement="line" halo-radius="1" spacing="400" halo-fill="&color_residential;" max-char-angle-delta="&text_max_angle;"></TextSymbolizer>
    </Rule>
<!--     <Rule>
            <ElseFilter/>
            &minscale_zoom16;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" placement="line" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <ElseFilter/>
            &minscale_zoom18;
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="11" fill="rgb(0,0,0)" placement="line" halo-radius="1"></TextSymbolizer>
    </Rule>
 -->
</Style>
<Style name="text">
    <Rule>
            <Filter>([place]='island')</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="oblique-fonts" size="9" fill="rgb(0,0,0)" halo-radius="1"></TextSymbolizer>
    </Rule>
<!--
    <Rule>
            <Filter>(((([amenity]='pub') or ([amenity]='restaurant')) or ([amenity]='cafe')) or ([amenity]='fast_food'))</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="10" fill="&color_food;" dy="14" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='bar')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="10" fill="&color_food;" dy="15" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>((([amenity]='cinema') or ([amenity]='library')) or ([amenity]='theatre'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="10" fill="&color_culture;" dy="18" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='parking')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="&color_parking;" dy="14" vertical-alignment="bottom" halo-radius="1" wrap-width="34"></TextSymbolizer>
    </Rule>
-->
    <Rule>
            <Filter>([amenity]='police')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_police;" dy="16" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
<!--
    <Rule>
            <Filter>([amenity]='fire_station')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(115,74,8)" dy="20" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='place_of_worship')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,51)" dy="16" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
-->
    <Rule>
            <Filter>([natural]='wood')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" halo-radius="2" wrap-width="10"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([natural]='peak')</Filter>
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(116,64,44)" dy="-6" vertical-alignment="top" allow-overlap="true" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([natural]='peak')</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[ele] + ' m'" fontset-name="oblique-fonts" size="9" fill="rgb(116,64,44)" dy="6" vertical-alignment="bottom" allow-overlap="true" halo-radius="1"></TextSymbolizer>
    </Rule>
    <!--
    <Rule>
            <Filter>((([leisure]&lt;&gt;'') or ([landuse]&lt;&gt;'')) and ([point]='yes'))</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" halo-radius="2" wrap-width="10"></TextSymbolizer>
    </Rule>
    -->
    <Rule>
            <Filter>([natural]='bay')</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([natural]='spring')</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="&color_water_text;" dy="10" vertical-alignment="bottom" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([tourism]='alpine_hut') or ([amenity]='shelter'))</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(102,153,204)" dy="15" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([tourism]='alpine_hut') or ([amenity]='shelter'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[ele]" fontset-name="oblique-fonts" size="8" fill="rgb(102,153,204)" dy="25" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
<!--
    <Rule>
            <Filter>([amenity]='bank')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" dy="16" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([tourism]='hotel') or ([tourism]='hostel'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_accomodation;" dy="15" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='embassy')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="&color_embasy;" dy="13" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([tourism]='guest_house')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="&color_accomodation;" dy="13" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([amenity]='fuel') or ([amenity]='bus_station'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="&color_non_bicycle_amenity;" dy="14" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([tourism]='camp_site')</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_camp_site;" dy="15" vertical-alignment="bottom" halo-radius="1" wrap-width="70"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([tourism]='caravan_site')</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_caravan_site;" dy="19" vertical-alignment="bottom" halo-radius="1" wrap-width="70"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([tourism]='museum')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_culture;" dy="16" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='prison')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_prison;" dy="16" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([tourism]='attraction')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_attraction;" halo-radius="2" wrap-width="10"></TextSymbolizer>
    </Rule>
-->
    <Rule>
            <Filter>([amenity]='university')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,51)" halo-radius="1" wrap-width="16"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([amenity]='school') or ([amenity]='college'))</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,51)" halo-radius="1" wrap-width="14"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='kindergarten')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,51)" halo-radius="1" wrap-width="14"></TextSymbolizer>
    </Rule>
    <!--
    <Rule>
            <Filter>([man_made]='lighthouse')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,51)" dy="16" vertical-alignment="bottom" halo-radius="2" wrap-width="12"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([man_made]='tower') and (([tower:type]='communication') or ([tower:type]='bts')))</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" dy="12" vertical-alignment="bottom" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([man_made]='tower') and ([tower:type]='observation'))</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" dy="12" vertical-alignment="bottom" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([man_made]='windmill')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(115,74,8)" dy="12" vertical-alignment="bottom" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    -->
    <Rule>
            <Filter>([amenity]='hospital')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="&color_hospital;" dy="16" vertical-alignment="bottom" halo-radius="2" wrap-width="12"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='pharmacy')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="&color_pharmacy;" dy="13" vertical-alignment="bottom" halo-radius="1" wrap-width="12"></TextSymbolizer>
    </Rule>
<!--    <Rule>
            <Filter>([highway]='motorway_junction')</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer name="[ref]" fontset-name="book-fonts" size="9" fill="rgb(3,3,3)" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='motorway_junction')</Filter>
            &minscale_zoom14;
            &maxscale_zoom12;
            <TextSymbolizer name="[ref]" fontset-name="book-fonts" size="9" fill="rgb(3,3,3)" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="rgb(3,3,3)" dy="-8" vertical-alignment="top" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='motorway_junction')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[ref]" fontset-name="book-fonts" size="13" fill="rgb(3,3,3)" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="14" fill="rgb(3,3,3)" dy="-14" vertical-alignment="top" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
    </Rule>
-->
    <Rule>
            <Filter>([military]='danger_area')</Filter>
            &maxscale_zoom12;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="9" fill="rgb(255,192,203)" halo-radius="1" wrap-width="10"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([aeroway]='gate')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[ref]" fontset-name="book-fonts" size="10" fill="rgb(170,102,204)" halo-radius="1" wrap-width="10"></TextSymbolizer>
    </Rule>
<!--
    <Rule>
            <Filter>([shop]='bicycle')</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_bicycle_shop;" dy="10" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule name="!zřícenina">
            <Filter>(([historic]='ruins') or ([historic]='castle' and [ruins]='yes'))</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" dy="10" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule name="!hrad, zámek">
            <Filter>([historic]='castle')</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" dy="10" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
-->
</Style>
<Style name="text-poly">
    <Rule>
            <Filter>([place]='island')</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="oblique-fonts" size="9" fill="rgb(0,0,0)" halo-radius="1"></TextSymbolizer>
    </Rule>
<!--
    <Rule>
            <Filter>(((([amenity]='pub') or ([amenity]='restaurant')) or ([amenity]='cafe')) or ([amenity]='fast_food'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="10" fill="&color_food;" dy="14" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='bar')</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="10" fill="&color_food;" dy="15" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>((([amenity]='cinema') or ([amenity]='library')) or ([amenity]='theatre'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="10" fill="&color_culture;" dy="18" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='parking')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="&color_parking;" dy="14" vertical-alignment="bottom" halo-radius="1" wrap-width="34"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='police')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_bicycle_amenity;" dy="16" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='fire_station')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_fire_station;" dy="20" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([amenity]='place_of_worship')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,51)" dy="16" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    -->
    <Rule>
            <Filter>([natural]='wood')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" halo-radius="2" wrap-width="10"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([natural]='bay')</Filter>
            &maxscale_zoom12;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([natural]='spring')</Filter>
            &maxscale_zoom16;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="&color_water_text;" dy="10" vertical-alignment="bottom" halo-radius="1" wrap-width="20"></TextSymbolizer>
    </Rule>
    <Rule name="!jeskyně">
            <Filter>([natural]='cave_entrance')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" dy="10" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
<!--
    <Rule>
            <Filter>([amenity]='bank')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="rgb(0,0,0)" dy="16" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([tourism]='camp_site')</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_camp_site;" dy="15" vertical-alignment="bottom" halo-radius="1" wrap-width="70"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([tourism]='caravan_site')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_caravan_site;" dy="19" vertical-alignment="bottom" halo-radius="1" wrap-width="70"></TextSymbolizer>
    </Rule>
-->
    <Rule>
            <Filter>([highway]='motorway_junction')</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer name="[ref]" fontset-name="book-fonts" size="9" fill="rgb(3,3,3)" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='motorway_junction')</Filter>
            &minscale_zoom14;
            &maxscale_zoom12;
            <TextSymbolizer name="[ref]" fontset-name="book-fonts" size="9" fill="rgb(3,3,3)" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="rgb(3,3,3)" dy="-8" vertical-alignment="top" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([highway]='motorway_junction')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer name="[ref]" fontset-name="book-fonts" size="13" fill="rgb(3,3,3)" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="14" fill="rgb(3,3,3)" dy="-14" vertical-alignment="top" halo-radius="1" wrap-width="12" minimum-distance="20"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([military]='danger_area')</Filter>
            &maxscale_zoom12;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="9" fill="rgb(255,192,203)" halo-radius="1" wrap-width="10"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([aeroway]='gate')</Filter>
            &maxscale_zoom17;
            <TextSymbolizer name="[ref]" fontset-name="book-fonts" size="10" fill="rgb(170,102,204)" halo-radius="1" wrap-width="10"></TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([shop]='bicycle')</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_bicycle_shop;" dy="10" vertical-alignment="bottom" halo-radius="1"></TextSymbolizer>
    </Rule>
    <!--
    <Rule name="!zřícenina">
            <Filter>(([historic]='ruins') or ([historic]='castle' and [ruins]='yes'))</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" dy="10" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    <Rule name="!hrad, zámek">
            <Filter>([historic]='castle')</Filter>
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="rgb(0,0,0)" dy="10" vertical-alignment="bottom" halo-radius="1" wrap-width="30"></TextSymbolizer>
    </Rule>
    -->
</Style>
<Style name="water-lines-text">
    <Rule name="!řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom10;
            &maxscale_zoom9;
    </Rule>
    <Rule name="!řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" placement="line" halo-radius="1" dy="7"></TextSymbolizer>
    </Rule>
    <Rule name="!řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="&color_water_text;" placement="line" halo-radius="1" dy="8"></TextSymbolizer>
    </Rule>
    <Rule name="!řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" placement="line" halo-radius="1" dy="9"></TextSymbolizer>
    </Rule>
    <Rule name="!řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" placement="line" halo-radius="1" dy="11"></TextSymbolizer>
    </Rule>
    <Rule name="!řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" placement="line" halo-radius="1" dy="13"></TextSymbolizer>
    </Rule>
    <Rule name="!řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom18;
            &maxscale_zoom18;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" placement="line" halo-radius="1" dy="16"></TextSymbolizer>
    </Rule>
    <Rule name="!plavební kanál">
            <Filter>([waterway]='canal')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="9" fill="&color_water_text;" placement="line" halo-radius="1" dy="8"></TextSymbolizer>
    </Rule>
    <Rule name="!plavební kanál">
            <Filter>([waterway]='canal')</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" placement="line" halo-radius="1" dy="11"></TextSymbolizer>
    </Rule>
    <Rule name="!plavební kanál">
            <Filter>([waterway]='canal')</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" placement="line" halo-radius="1" dy="14"></TextSymbolizer>
    </Rule>
    <Rule name="!potok">
            <Filter>(([waterway]='stream') or ([waterway]='drain'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="10" fill="&color_water_text;" placement="line" halo-radius="1" spacing="600" dy="7"></TextSymbolizer>
    </Rule>
</Style>

