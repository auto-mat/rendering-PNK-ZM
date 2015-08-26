<!-- -->
<Style name="barriers">
    <Rule name="živý plot">
            <Filter>(([natural]='hedge') or ([barrier]='hedge'))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="rgb(174,209,160)"
                stroke-width="3"
            />
    </Rule>
    <Rule name="plot, zeď">
            <Filter>(([barrier]&lt;&gt;'') and not (([barrier]='hedge')))</Filter>
            &maxscale_zoom16;
            <LineSymbolizer
                stroke-width="0.4"
            />
    </Rule>
</Style>
<Style name="buildings">
    <Rule name="!železniční stanice">
            <Filter>(([railway]='station') or ([building]='station'))</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="rgb(212,170,170)"
            />
    </Rule>
    <Rule name="!supermarket">
            <Filter>([building]='supermarket')</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="rgb(255,192,203)"
                fill-opacity="0.5"
            />
    </Rule>
    <!--
    <Rule name="!náboženský chrám">
            <Filter>([amenity]='place_of_worship')</Filter>
            &minscale_zoom14;
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="rgb(119,119,119)"
                fill-opacity="0.5"
            />
    </Rule>
    <Rule name="!náboženský chrám">
            <Filter>([amenity]='place_of_worship')</Filter>
            &maxscale_zoom15;
            <PolygonSymbolizer
                fill="rgb(119,119,119)"
                fill-opacity="0.5"
            />
            <LineSymbolizer
                stroke="rgb(17,17,17)"
                stroke-width="0.3"
            />
    </Rule>
    -->
    <Rule name="!sportoviště, dráha">
            <Filter>([leisure]='track')</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="&color_leisure_track;"
            />
            <LineSymbolizer
                stroke="&color_leisure_track;"
                stroke-width="0.5"
            />
    </Rule>
    <Rule name="budova">
            <Filter>(((([building]&lt;&gt;'station') and ([building]&lt;&gt;'supermarket')) and ([building]&lt;&gt;'')))</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="&color_building;"
                fill-opacity="&opacity_building;"
            />
    </Rule>
    <Rule name="!terminál letiště">
            <Filter>([aeroway]='terminal')</Filter>
            &maxscale_zoom12;
            <PolygonSymbolizer
                fill="rgb(204,153,255)"
            />
    </Rule>
    <Rule name="!terminál letiště">
            <Filter>([aeroway]='terminal')</Filter>
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="rgb(51,0,102)"
                stroke-width="0.2"
            />
    </Rule>
</Style>
<!--<Style name="citywalls">
    <Rule name="">
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="4"
                stroke-opacity="0.8"
            />
    </Rule>
    <Rule name="">
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="6"
                stroke-opacity="0.8"
            />
    </Rule>
    <Rule name="">
            &minscale_zoom18;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="9"
                stroke-opacity="0.8"
            />
    </Rule>
</Style>-->
<Style name="dam">
    <Rule name="hráz">
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(68,68,68)"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="hráz">
            &maxscale_zoom15;
            <TextSymbolizer name="[name]" fontset-name="book-fonts" size="8" fill="rgb(34,34,34)" halo-radius="1"></TextSymbolizer>
    </Rule>
</Style>
<Style name="points">
<!--
    <Rule name="horská chata">
            <Filter>([tourism]='alpine_hut')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;alpinehut.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="přístřešek">
            <Filter>([amenity]='shelter')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;shelter2.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="bankomat">
            <Filter>([amenity]='atm')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;atm2.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="banka">
            <Filter>([amenity]='bank')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;bank2.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="bar">
            <Filter>([amenity]='bar')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;bar.p.20.png"></PointSymbolizer>
    </Rule>
-->
    <Rule name="stojany pro jízdní kola">
            <Filter>([amenity]='bicycle_parking')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;bicycle_parking.png" allow-overlap="true"></PointSymbolizer>
    </Rule>
    <Rule name="půjčovna jízdních kol">
            <Filter>([amenity]='bicycle_rental')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;rental_bicycle.p.20.png" allow-overlap="true"></PointSymbolizer>
    </Rule>
<!--
    <Rule name="zastávka autobusů">
            <Filter>(([amenity]='bus_stop') or ([highway]='bus_stop'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;bus_stop_small.png"></PointSymbolizer>
    </Rule>
    <Rule name="zastávka autobusů">
            <Filter>(([amenity]='bus_stop') or ([highway]='bus_stop'))</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;bus_stop.p.12.png"></PointSymbolizer>
    </Rule>
    <Rule name="autobusové nádraží">
            <Filter>([amenity]='bus_station')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;bus_station.n.16.png"></PointSymbolizer>
    </Rule>
-->
    <Rule name="semafor">
            <Filter>([highway]='traffic_signals')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;SVG/traffic_light.svg"></PointSymbolizer>
    </Rule>
<!--
    <Rule name="kavárna">
            <Filter>([amenity]='cafe')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;cafe.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="kemp">
            <Filter>([tourism]='camp_site')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;camping.n.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="kemp pro karavany">
            <Filter>([tourism]='caravan_site')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;caravan_park.p.24.png"></PointSymbolizer>
    </Rule>
    <Rule name="půjčovna aut">
            <Filter>([amenity]='car_sharing')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;car_share.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="kino">
            <Filter>([amenity]='cinema')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;cinema.p.24.png"></PointSymbolizer>
    </Rule>
    <Rule name="požární zbrojnice">
            <Filter>([amenity]='fire_station')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;firestation.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="čerpací stanice">
            <Filter>([amenity]='fuel')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;fuel.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="penzion">
            <Filter>([tourism]='guest_house')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;guest_house.p.16.png"></PointSymbolizer>
    </Rule>
-->
    <Rule name="nemocnice">
            <Filter>([amenity]='hospital')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;hospital.p.16.png" allow-overlap="true"></PointSymbolizer>
    </Rule>
<!--
    <Rule name="hostel">
            <Filter>([tourism]='hostel')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;hostel.p.20.png"></PointSymbolizer>
    </Rule>
    <Rule name="hotel">
            <Filter>([tourism]='hotel')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;hotel2.p.20.png"></PointSymbolizer>
    </Rule>
    <Rule name="ambasáda">
            <Filter>([amenity]='embassy')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;embassy.png"></PointSymbolizer>
    </Rule>
    <Rule name="knihovna">
            <Filter>([amenity]='library')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;library.p.20.png"></PointSymbolizer>
    </Rule>
    <Rule name="muzeum">
            <Filter>([tourism]='museum')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;museum.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="parkoviště">
            <Filter>(([amenity]='parking') and (([access]='public') or not (([access]&lt;&gt;''))))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;parking.p.16.png"></PointSymbolizer>
    </Rule>
-->
    <Rule name="lékárna">
            <Filter>([amenity]='pharmacy')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;pharmacy.p.16.png"></PointSymbolizer>
    </Rule>
    <!--
    <Rule name="kostel">
            <Filter>(([amenity]='place_of_worship') and ([religion]='christian'))</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;christian3.p.14.png"></PointSymbolizer>
    </Rule>
    <Rule name="mešita">
            <Filter>(([amenity]='place_of_worship') and ([religion]='muslim'))</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;islamic3.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="chrám sikhů">
            <Filter>(([amenity]='place_of_worship') and ([religion]='sikh'))</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;sikh3.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="synagoga">
            <Filter>(([amenity]='place_of_worship') and ([religion]='jewish'))</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;jewish3.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="náboženský chrám">
            <Filter>([amenity]='place_of_worship')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;place_of_worship3.p.16.png"></PointSymbolizer>
    </Rule>
    -->
    <Rule name="policejní stanice">
            <Filter>([amenity]='police')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;police.p.16.png" allow-overlap="true"></PointSymbolizer>
    </Rule>
<!--
    <Rule name="poštovní schránka">
            <Filter>([amenity]='post_box')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;post_box.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="pošta">
            <Filter>([amenity]='post_office')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;post_office.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="hospoda">
            <Filter>([amenity]='pub')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;pub.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="recyklace">
            <Filter>([amenity]='recycling')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;recycling.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="restaurace">
            <Filter>([amenity]='restaurant')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;restaurant.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="rychlé občerstvení">
            <Filter>([amenity]='fast_food')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;fast_food.png"></PointSymbolizer>
    </Rule>
    <Rule name="telefonní budka">
            <Filter>([amenity]='telephone')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;telephone.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="divadlo">
            <Filter>([amenity]='theatre')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;theatre.p.20.png"></PointSymbolizer>
    </Rule>
    <Rule name="veřejné toalety">
            <Filter>([amenity]='toilets')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;toilets.p.20.png"></PointSymbolizer>
    </Rule>
-->
    <Rule name="pitná voda">
            <Filter>([amenity]='drinking_water')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;food_drinkingtap.p.20.png" allow-overlap="true"></PointSymbolizer>
    </Rule>
<!--
    <Rule name="věznice">
            <Filter>([amenity]='prison')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;amenity_prison.p.20.png"></PointSymbolizer>
    </Rule>
    <Rule name="místo rozhledu">
            <Filter>([tourism]='viewpoint' and not [man_made]='tower')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;view_point.p.16.png"></PointSymbolizer>
    </Rule>
    <Rule name="vodojem">
            <Filter>([man_made]='water_tower')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;tower_water.p.20.png"></PointSymbolizer>
    </Rule>
-->
</Style>
<Style name="symbols">
    <Rule name="!popis letiště">
            <Filter>([aeroway]='airport')</Filter>
            &minscale_zoom18;
            &maxscale_zoom13;
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="9" fill="rgb(0,0,0)" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule name="letiště">
            <Filter>([aeroway]='aerodrome')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;airport.p.16.png"></PointSymbolizer>
            <TextSymbolizer name="[name]" fontset-name="oblique-fonts" size="8" fill="rgb(0,0,0)" dy="-12" vertical-alignment="top" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule name="železniční přejezd">
            <Filter>([railway]='level_crossing')</Filter>
            &minscale_zoom15;
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;level_crossing.png"></PointSymbolizer>
    </Rule>
    <Rule name="železniční přejezd">
            <Filter>([railway]='level_crossing')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;level_crossing2.png"></PointSymbolizer>
    </Rule>
    <Rule name="maják">
            <Filter>([man_made]='lighthouse')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;lighthouse.p.20.png"></PointSymbolizer>
    </Rule>
    <Rule name="vrchol">
            <Filter>([natural]='peak')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;peak.png"></PointSymbolizer>
    </Rule>
    <!--
    <Rule name="pramen">
            <Filter>([natural]='spring')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;spring09.png"></PointSymbolizer>
    </Rule>
    -->
    <Rule name="památný strom">
            <Filter>([natural]='tree')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;tree.png"></PointSymbolizer>
    </Rule>
    <Rule name="památný strom">
            <Filter>([natural]='tree')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;tree2.png"></PointSymbolizer>
    </Rule>
<!--
    <Rule name="jeskyně">
            <Filter>([natural]='cave_entrance')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;cave20.png"></PointSymbolizer>
    </Rule>
-->
    <Rule name="větrná elektrárna">
            <Filter>(([man_made]='power_wind') or (([power]='generator') and ([power_source]='wind')))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;power_wind.png"></PointSymbolizer>
    </Rule>
    <Rule name="větrný mlýn">
            <Filter>([man_made]='windmill')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;windmill.png"></PointSymbolizer>
    </Rule>
    <!--
    <Rule name="vysílač">
            <Filter>(([man_made]='tower') and (([tower:type]='communication') or ([tower:type]='bts')))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;communications.p.18.png"></PointSymbolizer>
    </Rule>
    <Rule name="rozhledna">
            <Filter>(([man_made]='tower') and ([tower:type]='observation'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;observation.p.18.png"></PointSymbolizer>
    </Rule>
    -->
    <Rule name="kruhový objezd">
            <Filter>([highway]='mini_roundabout')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;mini_round.png"></PointSymbolizer>
    </Rule>
    <Rule name="brána">
            <Filter>(([highway]='gate') or ([barrier]='gate'))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;gate2.png"></PointSymbolizer>
    </Rule>
    <Rule name="sloupek proti vjezdu">
            <Filter>([barrier]='bollard' or [barrier]='block')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;bollard.png"></PointSymbolizer>
    </Rule>
    <Rule name="cyklistická prodejna">
            <Filter>([shop]='bicycle')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;shop_bicycle.png" allow-overlap="true"></PointSymbolizer>
    </Rule>
<!--
    <Rule name="zřícenina">
            <Filter>(([historic]='ruins') or ([historic]='castle' and [ruins]='yes'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;ruins12.png"></PointSymbolizer>
    </Rule>
    <Rule name="hrad, zámek">
            <Filter>(([historic]='castle') and ([castle_type]='stately' or [castle_type]='schloss'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;castle14.png"></PointSymbolizer>
    </Rule>
    <Rule name="hrad, zámek">
            <Filter>([historic]='castle' and ([castle_type]='burg' or [castle_type]='defensive'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;burg18.png"></PointSymbolizer>
    </Rule>
    <Rule name="hrad, zámek">
            <Filter>([historic]='castle')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;castle14.png"></PointSymbolizer>
    </Rule>
    <Rule name="informační tabule">
            <Filter>([information]='board')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoBoard12.png"></PointSymbolizer>
    </Rule>
    <Rule name="tabule s mapou">
            <Filter>([information]='map')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoMap14.png"></PointSymbolizer>
    </Rule>
    <Rule name="infocentrum">
            <Filter>([information]='office')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoOffice14.png"></PointSymbolizer>
    </Rule>
-->
</Style>
<Style name="symbols-poly">
    <Rule name="!letiště">
            <Filter>([aeroway]='airport')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;airport.p.16.png"></PointSymbolizer>
            <TextSymbolizer name="[name]" fontset-name="bold-fonts" size="8" fill="rgb(0,0,0)" dy="-12" vertical-alignment="top" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule name="!letiště">
            <Filter>([aeroway]='aerodrome')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;airport.p.16.png"></PointSymbolizer>
            <TextSymbolizer name="[name]" fontset-name="oblique-fonts" size="8" fill="rgb(0,0,0)" dy="-12" vertical-alignment="top" halo-radius="1"></TextSymbolizer>
    </Rule>
    <Rule name="!železniční přejezd">
            <Filter>([railway]='level_crossing')</Filter>
            &minscale_zoom15;
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;level_crossing.png"></PointSymbolizer>
    </Rule>
    <Rule name="!železniční přejezd">
            <Filter>([railway]='level_crossing')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;level_crossing2.png"></PointSymbolizer>
    </Rule>
    <Rule name="!maják">
            <Filter>([man_made]='lighthouse')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;lighthouse.p.20.png"></PointSymbolizer>
    </Rule>
    <Rule name="!vrchol">
            <Filter>([natural]='peak')</Filter>
            &maxscale_zoom11;
            <PointSymbolizer file="&symbols-path;peak.png"></PointSymbolizer>
    </Rule>
    <Rule name="!rozcestí tras KČT">
      &maxscale_zoom14;
      <Filter>[amenity]='signpost'</Filter>
      <PointSymbolizer file= "&symbols-path;signpost2.png"/>
    </Rule>
    <!--
    <Rule name="!pramen">
            <Filter>([natural]='spring')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;spring09.png"></PointSymbolizer>
    </Rule>
    -->
    <Rule name="!památný strom">
            <Filter>([natural]='tree')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;tree.png"></PointSymbolizer>
    </Rule>
    <Rule name="!památný strom">
            <Filter>([natural]='tree')</Filter>
            &maxscale_zoom17;
            <PointSymbolizer file="&symbols-path;tree2.png"></PointSymbolizer>
    </Rule>
<!--    <Rule name="">
            <Filter>(([man_made]='power_wind') or (([power]='generator') and ([power_source]='wind')))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;power_wind.png"></PointSymbolizer>
    </Rule>-->
    <Rule name="!větrný mlýn">
            <Filter>([man_made]='windmill')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;windmill.png"></PointSymbolizer>
    </Rule>
    <!--
    <Rule name="!vysílač">
            <Filter>(([man_made]='tower') and (([tower:type]='communication') or ([tower:type]='bts')))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;communications.p.18.png"></PointSymbolizer>
    </Rule>
    <Rule name="!rozhledna">
            <Filter>(([man_made]='tower') and ([tower:type]='observation'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;observation.p.18.png"></PointSymbolizer>
    </Rule>
    -->
    <Rule name="!kruhový objezd">
            <Filter>([highway]='mini_roundabout')</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;mini_round.png"></PointSymbolizer>
    </Rule>
    <Rule name="brána">
            <Filter>(([highway]='gate') or ([barrier]='gate'))</Filter>
            &maxscale_zoom15;
            <PointSymbolizer file="&symbols-path;gate2.png"></PointSymbolizer>
    </Rule>
    <Rule name="!sloupek proti vjezdu">
            <Filter>([barrier]='bollard' or [barrier]='block')</Filter>
            &maxscale_zoom16;
            <PointSymbolizer file="&symbols-path;bollard.png"></PointSymbolizer>
    </Rule>
    <Rule name="!cyklistická prodejna">
            <Filter>([shop]='bicycle')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;shop_bicycle.png" allow-overlap="true"></PointSymbolizer>
    </Rule>
    <!--
    <Rule name="zřícenina">
            <Filter>(([historic]='ruins') or ([historic]='castle' and [ruins]='yes'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;ruins12.png"></PointSymbolizer>
    </Rule>
    <Rule name="hrad, zámek">
            <Filter>(([historic]='castle') and ([castle_type]='stately' or [castle_type]='schloss'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;castle14.png"></PointSymbolizer>
    </Rule>
    <Rule name="hrad, zámek">
            <Filter>([historic]='castle' and ([castle_type]='burg' or [castle_type]='defensive'))</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;burg18.png"></PointSymbolizer>
    </Rule>
    <Rule name="hrad, zámek">
            <Filter>([historic]='castle')</Filter>
            &maxscale_zoom13;
            <PointSymbolizer file="&symbols-path;castle14.png"></PointSymbolizer>
    </Rule>
    -->
    <Rule name="informační tabule">
            <Filter>([information]='board')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoBoard12.png"></PointSymbolizer>
    </Rule>
    <Rule name="tabule s mapou">
            <Filter>([information]='map')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoMap14.png"></PointSymbolizer>
    </Rule>
    <Rule name="infocentrum">
            <Filter>([information]='office')</Filter>
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;infoOffice14.png"></PointSymbolizer>
    </Rule>
</Style>

