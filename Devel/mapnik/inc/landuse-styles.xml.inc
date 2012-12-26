<!-- styles for landuse -->
<Style name="cliffs">
    <Rule name="útes, skála">
            <Filter>([natural]='cliff')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LinePatternSymbolizer file="&symbols-path;cliff.png"></LinePatternSymbolizer>
    </Rule>
    <Rule name="útes, skála">
            <Filter>([natural]='cliff')</Filter>
            &maxscale_zoom15;
            <LinePatternSymbolizer file="&symbols-path;cliff2.png"></LinePatternSymbolizer>
    </Rule>
    <Rule name="násep">
            <Filter>([man_made]='embankment')</Filter>
            &maxscale_zoom15;
            <LinePatternSymbolizer file="&symbols-path;cliff.png"></LinePatternSymbolizer>
    </Rule>
</Style>
<Style name="leisure">
<!--    <Rule name="přístaviště">
            <Filter>([leisure]='marina')</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="rgb(114,155,249)"
            />
    </Rule>-->
    <Rule name="hřiště">
            <Filter>([leisure]='playground')</Filter>
            &maxscale_zoom13;
            <PolygonSymbolizer
                fill="rgb(204,255,241)"
            />
            <LineSymbolizer
                stroke="rgb(102,102,102)"
                stroke-width="0.3"
            />
    </Rule>
    <Rule name="tábořiště">
            <Filter>((([tourism]='camp_site') or ([tourism]='caravan_site')) or ([tourism]='picnic_site'))</Filter>
            &maxscale_zoom13;
            <PolygonSymbolizer
                fill="rgb(204,255,153)"
                fill-opacity="0.5"
            />
            <LineSymbolizer
                stroke="rgb(102,102,102)"
                stroke-width="0.3"
            />
    </Rule>
    <Rule name="!turistická zajímavost">
            <Filter>([tourism]='attraction')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(242,202,234)"
            />
    </Rule>
    <Rule name="důl">
            <Filter>([landuse]='quarry')</Filter>
            &maxscale_zoom11;
            <PolygonPatternSymbolizer file="&symbols-path;quarry2.png"></PolygonPatternSymbolizer>
            <LineSymbolizer
                stroke="rgb(128,128,128)"
                stroke-width="0.5"
            />
    </Rule>
    <Rule name="přírodní rezervace, vinice">
            <Filter>(([leisure]='nature_reserve') or ([landuse]='vineyard') or ([landuse]='orchard'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(171,223,150)"
            />
    </Rule>
    <Rule name="vinice">
            <Filter>([landuse]='vineyard')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;vineyard.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="vinice">
            <Filter>([landuse]='vineyard')</Filter>
            &maxscale_zoom15;
            <PolygonPatternSymbolizer file="&symbols-path;vineyard.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="ovocný sad">
            <Filter>([landuse]='orchard')</Filter>
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;orchard.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="přírodní rezervace">
            <Filter>([leisure]='nature_reserve')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;nature_reserve.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="přírodní rezervace">
            <Filter>([leisure]='nature_reserve')</Filter>
            &maxscale_zoom14;
            <PolygonPatternSymbolizer file="&symbols-path;nature_reserve2.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="hřbitov">
            <Filter>(([landuse]='cemetery') or ([amenity]='grave_yard'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(170,203,175)"
            />
    </Rule>
    <Rule name="zastavěná plocha">
            <Filter>([landuse]='residential')</Filter>
            &minscale_zoom18;
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(221,221,221)"
            />
    </Rule>
    <Rule name="vojenský objekt">
            <Filter>([military]='barracks')</Filter>
            &minscale_zoom18;
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(255,143,143)"
            />
    </Rule>
    <Rule name="vojenský prostor">
            <Filter>([military]='danger_area' or [landuse]='military')</Filter>
            &minscale_zoom18;
            &maxscale_zoom11;
            <PolygonPatternSymbolizer file="&symbols-path;military_red_hz2.png"></PolygonPatternSymbolizer>
            <LineSymbolizer
              stroke="#f55"
              stroke-width="3"
              stroke-opacity="0.329"
            />
    </Rule>
    <Rule name="hřbitov">
            <Filter>(([landuse]='cemetery') or ([amenity]='grave_yard'))</Filter>
            &maxscale_zoom14;
            <PolygonPatternSymbolizer file="&symbols-path;grave_yard.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="louka">
            <Filter>(([landuse]='meadow') or ([landuse]='grass') or ([natural]='fell'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="&color_grass;"
            />
    </Rule>
    <Rule name="park, zahrada">
            <Filter>(([leisure]='park') or ([leisure]='dog_park') or ([landuse]='recreation_ground') or ([landuse]='village_green') or ([leisure]='garden'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="&color_park;"
                fill-opacity="0.8"
            />
    </Rule>
    <Rule name="zoologická zahrada">
            <Filter>([tourism]='zoo')</Filter>
            &maxscale_zoom11;
            <PolygonPatternSymbolizer file="&symbols-path;zoo.png"></PolygonPatternSymbolizer>
    </Rule>
<!--    <Rule name="volné prostranství">
            <Filter>([leisure]='common')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(207,236,168)"
            />
    </Rule>-->
    <Rule name="golfové hřiště">
            <Filter>([leisure]='golf_course')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(181,227,181)"
            />
    </Rule>
    <Rule name="zahrádkářská kolonie">
            <Filter>([landuse]='allotments')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(200,176,132)"
            />
    </Rule>
    <Rule name="les">
            <Filter>([landuse]='forest')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="&color_forest;"
            />
    </Rule>
    <Rule name="prales">
            <Filter>([natural]='wood')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="&color_wood;"
            />
    </Rule>
    <Rule name="farma">
            <Filter>([landuse]='farmyard')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(221,191,146)"
            />
    </Rule>
    <Rule name="zemědělská plocha">
            <Filter>(([landuse]='farm') or ([landuse]='farmland'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(234,216,189)"
            />
    </Rule>
    <Rule name="">
            <Filter>([landuse]='retail')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(241,218,218)"
            />
    </Rule>
    <Rule name="průmyslová plocha">
            <Filter>(([landuse]='industrial') or ([landuse]='railway'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(223,209,214)"
            />
    </Rule>
    <Rule name="transformační stanice">
            <Filter>([power]='station')</Filter>
            &maxscale_zoom12;
            <PolygonSymbolizer
                fill="rgb(187,187,187)"
            />
            <LineSymbolizer
                stroke="rgb(85,85,85)"
                stroke-width="0.4"
            />
    </Rule>
    <Rule name="transformační stanice">
            <Filter>([power]='sub_station')</Filter>
            &maxscale_zoom13;
            <PolygonSymbolizer
                fill="rgb(187,187,187)"
            />
            <LineSymbolizer
                stroke="rgb(85,85,85)"
                stroke-width="0.4"
            />
    </Rule>
    <Rule name="plocha určená k výstavbě">
            <Filter>(((([landuse]='brownfield') or ([landuse]='landfill')) or ([landuse]='greenfield')) or ([landuse]='construction'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(157,157,108)"
            />
    </Rule>
    <Rule name="škola">
            <Filter>((((([amenity]='university') or ([amenity]='college')) or ([amenity]='school')) or ([amenity]='hospital')) or ([amenity]='kindergarten'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(240,240,216)"
            />
    </Rule>
    <Rule name="škola">
            <Filter>((((([amenity]='university') or ([amenity]='college')) or ([amenity]='school')) or ([amenity]='hospital')) or ([amenity]='kindergarten'))</Filter>
            &maxscale_zoom12;
            <LineSymbolizer
                stroke="rgb(165,42,42)"
                stroke-width="0.3"
            />
    </Rule>
    <Rule name="parkoviště">
            <Filter>([amenity]='parking')</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="&color_parking;"
            />
    </Rule>
    <Rule name="parkoviště">
            <Filter>([amenity]='parking')</Filter>
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="rgb(238,238,209)"
                stroke-width="0.3"
            />
    </Rule>
    <Rule name="letiště">
            <Filter>(([aeroway]='aerodrome') or ([aeroway]='apron'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="rgb(233,209,255)"
                fill-opacity="0.2"
            />
            <LineSymbolizer
                stroke="rgb(85,85,85)"
                stroke-width="0.2"
            />
    </Rule>
    <Rule name="pláž">
            <Filter>([natural]='beach')</Filter>
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;beach.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="strniště">
            <Filter>(([natural]='scrub') or ([natural]='heath'))</Filter>
            &maxscale_zoom11;
            <PolygonPatternSymbolizer file="&symbols-path;scrub.png"></PolygonPatternSymbolizer>
    </Rule>
</Style>
<Style name="piers">
    <Rule name="molo">
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="rgb(242,239,233)"
                stroke-width="2"
            />
    </Rule>
    <Rule name="molo">
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(242,239,233)"
                stroke-width="4"
            />
    </Rule>
    <Rule name="molo">
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="rgb(242,239,233)"
                stroke-width="7"
            />
    </Rule>
</Style>
<Style name="piers-area">
    <Rule name="molo">
            &maxscale_zoom12;
            <PolygonSymbolizer
                fill="rgb(242,239,233)"
            />
    </Rule>
</Style>
<Style name="power">
    <Rule name="elektrické vedení">
            &maxscale_zoom14;
            <LineSymbolizer stroke-width="0.3"/>
    </Rule>
</Style>
<Style name="power_towers">
    <Rule name="sloup elektrického vedení">
            &maxscale_zoom14;
            <PointSymbolizer file="&symbols-path;/SVG/power_tower.svg" allow-overlap="true" ignore-placement="true" transform="rotate([angle])" placement="interior"/>
    </Rule>
</Style>

<Style name="sports_grounds">
    <Rule name="sportoviště">
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="rgb(51,204,153)"
            />
    </Rule>
</Style>

