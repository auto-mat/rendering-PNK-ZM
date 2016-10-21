<!-- Water areas, rivers, glaciers -->
<Style name="water_areas">
    <Rule name="ledovec">
            <Filter>([natural]='glacier')</Filter>
            &minscale_zoom7;
            &maxscale_zoom6;
            <LineSymbolizer
                stroke="&color_glacier;"
                stroke-width="1.5"
                stroke-dasharray="4, 2"
            />
            <PolygonPatternSymbolizer file="&symbols-path;glacier.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="ledovec">
            <Filter>([natural]='glacier')</Filter>
            &maxscale_zoom8;
            <LineSymbolizer
                stroke="&color_glacier;"
                stroke-width="1.5"
                stroke-dasharray="4, 2"
            />
            <PolygonPatternSymbolizer file="&symbols-path;glacier2.png"></PolygonPatternSymbolizer>
    </Rule>
    <Rule name="vodní plocha">
            <Filter>(([natural]='lake') or ([natural]='water') or (([landuse]='reservoir') and ([way_area]&gt;=500000)))</Filter>
            &maxscale_zoom7;
            &minscale_zoom8;
            <PolygonSymbolizer
                fill="&color_water_fill;"
            />
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="0.4"
            />
    </Rule>
    <Rule name="vodní plocha">
            <Filter>((([natural]='lake') or ([natural]='water') or ([landuse]='basin') or ([waterway]='dock') or ([landuse]='reservoir') or ([landuse]='water') or ([waterway]='mill_pond') or ([waterway]='riverbank') or ([waterway]='canal')) and ([way_area]&gt;=100000))</Filter>
            &maxscale_zoom9;
            &minscale_zoom10;
            <PolygonSymbolizer
                fill="&color_water_fill;"
            />
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="0.4"
            />
    </Rule>
    <Rule name="vodní plocha">
            <Filter>(([natural]='lake') or ([natural]='water') or ([landuse]='basin') or ([waterway]='dock') or ([landuse]='reservoir') or ([landuse]='water') or ([waterway]='mill_pond') or ([waterway]='riverbank') or ([waterway]='canal'))</Filter>
            &maxscale_zoom11;
            &minscale_zoom13;
            <PolygonSymbolizer
                fill="&color_water_fill;"
            />
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="1.4"
            />
    </Rule>
    <Rule name="vodní plocha">
            <Filter>(([natural]='lake') or ([natural]='water') or ([landuse]='basin') or ([waterway]='dock') or ([landuse]='reservoir') or ([landuse]='water') or ([waterway]='mill_pond') or ([waterway]='riverbank') or ([waterway]='canal'))</Filter>
            &maxscale_zoom14;
            <PolygonSymbolizer
                fill="&color_water_fill;"
            />
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="2.0"
            />
    </Rule>
    <Rule name="zamokřená půda">
            <Filter>(([natural]='marsh') or ([natural]='wetland'))</Filter>
            &maxscale_zoom13;
            <PolygonPatternSymbolizer file="&symbols-path;marsh.png"></PolygonPatternSymbolizer>
    </Rule>
</Style>
<Style name="water_areas_fill_island">
    <Rule name="!ostrov">
            <Filter>([natural]='land')</Filter>
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="&color_island;"
            />
    </Rule>
</Style>

<!-- vrstva navic, ktera umoznila plynule napojeni rek a vodnich ploch i s okrajem -->
<Style name="water_areas_fill">
    <Rule name="vodní plocha">
            <Filter>(([natural]='lake') or ([natural]='water') or ([landuse]='basin') or ([waterway]='dock') or ([landuse]='reservoir') or ([landuse]='water') or ([waterway]='mill_pond') or ([waterway]='riverbank') or ([waterway]='canal'))</Filter>
            &maxscale_zoom11;
            <PolygonSymbolizer
                fill="&color_water_fill;"
            />
    </Rule>
</Style>

<Style name="water_lines_fill">
    <Rule name="jez">
            <Filter>([waterway]='weir')</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_weir;"
                stroke-width="2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom10;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="0.8"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="9"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom18;
            &maxscale_zoom18;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="plavební kanál">
            <Filter>([waterway]='canal')</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="plavební kanál">
            <Filter>([waterway]='canal')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="3.2"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní vodní tok">
            <ElseFilter/>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_water_fill;"
            />
    </Rule>
    <!--
    <Rule name="řeka pod povrchem">
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_water_fill_tunnel;"
                stroke-width="4"
            />
    </Rule>
    <Rule name="řeka pod povrchem">
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="6"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_water_fill_tunnel;"
                stroke-width="4"
            />
    </Rule>
    <Rule name="řeka pod povrchem">
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="10"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_water_fill_tunnel;"
                stroke-width="7"
            />
    </Rule>
    <Rule name="řeka pod povrchem">
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &maxscale_zoom18;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="12"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_water_fill_tunnel;"
                stroke-width="9"
            />
    </Rule>
    <Rule name="plavební kanál pod povrchem">
            <Filter>(([waterway]='canal') and ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="6"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_water_fill_tunnel;"
                stroke-width="3"
            />
    </Rule>
    -->
    <Rule name="plavební kanál">
            <Filter>(([waterway]='canal') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <!--
    <Rule name="plavební kanál pod povrchem">
            <Filter>(([waterway]='canal') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="10"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_water_fill_tunnel;"
                stroke-width="7"
            />
    </Rule>
    -->
    <Rule name="plavební kanál">
            <Filter>(([waterway]='canal') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="10"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <!--
    <Rule name="potok pod povrchem">
            <Filter>((([waterway]='stream') or ([waterway]='drain')) and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="2.0"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_water_fill_tunnel;"
                stroke-width="1.2"
            />
    </Rule>
    -->
    <Rule name="potok">
            <Filter>((([waterway]='stream') or ([waterway]='drain')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="1"
            />
    </Rule>
    <Rule name="ostatní vodní tok">
            <ElseFilter/>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="2"
            />
    </Rule>
</Style>
<Style name="water_lines_casing">
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="0.8"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom10;
            &maxscale_zoom9;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="5.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="11"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="řeka">
            <Filter>([waterway]='river')</Filter>
            &minscale_zoom18;
            &maxscale_zoom18;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="13"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="plavební kanál">
            <Filter>([waterway]='canal')</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="plavební kanál">
            <Filter>([waterway]='canal')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní vodní tok">
            <ElseFilter/>
            &minscale_zoom14;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_water_stroke;"
            />
    </Rule>
    <!--
    <Rule name="řeka pod povrchem">
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="6.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="řeka pod povrchem">
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="7.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="řeka pod povrchem">
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &minscale_zoom17;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="12"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="řeka pod povrchem">
            <Filter>(([waterway]='river') and ([tunnel]='yes'))</Filter>
            &maxscale_zoom18;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="14"
                stroke-dasharray="4, 2"
            />
    </Rule>
    <Rule name="plavební kanál pod povrchem">
            <Filter>(([waterway]='canal') and ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="7.5"
                stroke-dasharray="4, 2"
            />
    </Rule>
    -->
    <Rule name="plavební kanál">
            <Filter>(([waterway]='canal') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="7.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <!--
    <Rule name="plavební kanál pod povrchem">
            <Filter>(([waterway]='canal') and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="12"
                stroke-dasharray="4, 2"
            />
    </Rule>
    -->
    <Rule name="plavební kanál">
            <Filter>(([waterway]='canal') and not ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="12"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <!--
    <Rule name="potok pod povrchem">
            <Filter>((([waterway]='stream') or ([waterway]='drain')) and ([tunnel]='yes'))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="2.9"
                stroke-dasharray="4, 2"
            />
    </Rule>
    -->
    <Rule name="potok">
            <Filter>((([waterway]='stream') or ([waterway]='drain')) and not (([tunnel]='yes')))</Filter>
            &minscale_zoom18;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_water_stroke;"
                stroke-width="2"
            />
    </Rule>
</Style>
<Style name="waterway-bridges">
    <Rule name="!akvadukt">
            &minscale_zoom16;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke-width="7"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="6"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <TextSymbolizer fontset-name="book-fonts" size="9" fill="&color_water_text;" placement="line" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
    <Rule name="!akvadukt">
            &minscale_zoom18;
            &maxscale_zoom17;
            <LineSymbolizer
                stroke-width="11"
                stroke-linejoin="round"
            />
            <LineSymbolizer
                stroke="&color_water_fill;"
                stroke-width="10"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <TextSymbolizer fontset-name="book-fonts" size="9" fill="&color_water_text;" placement="line" halo-radius="1">[name] </TextSymbolizer>
    </Rule>
</Style>
