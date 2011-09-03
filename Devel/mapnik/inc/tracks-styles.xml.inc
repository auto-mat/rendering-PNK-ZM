<!-- styles for basic unpaved tracks: highway='track' -->
<Style name="tracks-bridges">
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.7</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">12, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<!-- Nasledujici styl pridal VF pro umozneni cistych dvojitych linii-->
<!-- Dvojita cara, sirka mezi sirkou ulice a cyklostezky pro kategorii 1 a 2 a vsechny zoomy,
     Kategorie 3-5 zustavaji stejne jako predtim. -->
<Style name="tracks-nt-nb-casing">
    <Rule title="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            &minscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom14;
            &minscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom16;
            &minscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">6</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">8</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &maxscale_zoom13;
            &minscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-dasharray">2, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &maxscale_zoom14;
            &minscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-dasharray">2, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">2, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &maxscale_zoom16;
            &minscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">2, 2</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">2, 2</CssParameter>
            </LineSymbolizer>
    </Rule>

</Style>
<!-- Styl predelan, cesty 1 a 2 jsou dvoulinkove -->
<Style name="tracks-notunnel-nobridge">
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">#dddddd</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">#dddddd</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">#dddddd</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">#dddddd</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">#dddddd</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">&width_track_casing;</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">&width_track_fill;</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">&width_track_casing_lozoom;</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">&width_track_fill_lozoom;</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>

    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">&width_track_casing;</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">&width_track_fill;</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">&width_track_casing_lozoom;</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">&width_track_fill_lozoom;</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>

    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">&width_track_casing;</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">&width_track_fill;</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">&width_track_casing_lozoom;</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">&width_track_fill_lozoom;</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>

    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">#ffffff</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
<!--    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">&width_track_casing;</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">&width_track_fill;</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom11;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">&width_track_casing_lozoom;</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">&width_track_fill_lozoom;</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>-->
</Style>
<Style name="tracks-tunnels">
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">12, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně zpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>




<Style name="tracks-bridges-bicycle">
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.7</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">12, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke-width">4.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
<Style name="tracks-notunnel-nobridge-bicycle">
    <Rule title="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">6.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
<!--    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">12, 3</CssParameter>
            </LineSymbolizer>
    </Rule>-->
    <Rule title="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.9</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta"><!-- VF mdf -->
            <ElseFilter/>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom17;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
    </Rule>

<!--    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-opacity">0.4</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>-->
</Style>
<Style name="tracks-tunnels-bicycle">
    <Rule title="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2.5</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">12, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="částečně zpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">7, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">4, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">2</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
    <Rule title="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_tunnel;</CssParameter>
                <CssParameter name="stroke-width">4.5</CssParameter>
                <CssParameter name="stroke-dasharray">4, 2</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_casing;</CssParameter>
                <CssParameter name="stroke-width">3</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">round</CssParameter>
            </LineSymbolizer>
            <LineSymbolizer>
                <CssParameter name="stroke">&color_bicycle_track_fill;</CssParameter>
                <CssParameter name="stroke-width">1.8</CssParameter>
                <CssParameter name="stroke-opacity">0.5</CssParameter>
                <CssParameter name="stroke-linejoin">round</CssParameter>
                <CssParameter name="stroke-linecap">butt</CssParameter>
                <CssParameter name="stroke-dasharray">5, 3, 2, 3</CssParameter>
            </LineSymbolizer>
    </Rule>
</Style>
