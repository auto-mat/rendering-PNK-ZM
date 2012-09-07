<!-- styles for basic unpaved tracks: highway='track' -->
<Style name="tracks-bridges">
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="5"
            />
            <LineSymbolizer
                stroke="&color_track_fill_doubleline;"
                stroke-width="3.5"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_track_fill_doubleline2;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="2"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="7, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="2"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="4, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="2"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="2, 3"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_track_fill_doubleline;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
</Style>
<!-- Nasledujici styl pridal VF pro umozneni cistych dvojitych linii-->
<!-- Dvojita cara, sirka mezi sirkou ulice a cyklostezky pro kategorii 1 a 2 a vsechny zoomy,
     Kategorie 3-5 zustavaji stejne jako predtim. -->
<Style name="tracks-nt-nb-casing">
    <Rule name="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            &minscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="2.5"
            />
    </Rule>
    <Rule name="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom14;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="3.5"
            />
    </Rule>
    <Rule name="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="6"
            />
    </Rule>
    <Rule name="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom16;
            &minscale_zoom16;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="6"
            />
    </Rule>
    <Rule name="cesty 1 a 2">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="8"
            />
    </Rule>
    <Rule name="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &maxscale_zoom13;
            &minscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="2.5"
                stroke-dasharray="2, 2"
            />
    </Rule>
    <Rule name="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &maxscale_zoom14;
            &minscale_zoom14;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="3.5"
                stroke-dasharray="2, 2"
            />
    </Rule>
    <Rule name="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="5"
                stroke-dasharray="2, 2"
            />
    </Rule>
    <Rule name="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &maxscale_zoom16;
            &minscale_zoom16;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="5"
                stroke-dasharray="2, 2"
            />
    </Rule>
    <Rule name="cesty nezadane">
            <Filter>(not ([tracktype]='grade1' or [tracktype]='grade2' or [tracktype]='grade3' or [tracktype]='grade4' or [tracktype]='grade5'))</Filter>
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_track_casing_doubleline;"
                stroke-width="5"
                stroke-dasharray="2, 2"
            />
    </Rule>

</Style>
<!-- Styl predelan, cesty 1 a 2 jsou dvoulinkove -->
<Style name="tracks-notunnel-nobridge">
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline;"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline2;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline2;"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline2;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline2;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_track_fill_doubleline2;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="&width_track_casing;"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="&width_track_fill;"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="7, 3"
            />
    </Rule>
    <Rule name="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="&width_track_casing_lozoom;"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="&width_track_fill_lozoom;"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="7, 3"
            />
    </Rule>

    <Rule name="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="&width_track_casing;"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="&width_track_fill;"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="4, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="&width_track_casing_lozoom;"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="&width_track_fill_lozoom;"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="4, 3"
            />
    </Rule>

    <Rule name="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="&width_track_casing;"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="&width_track_fill;"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="2, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="&width_track_casing_lozoom;"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="&width_track_fill_lozoom;"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="2, 3"
            />
    </Rule>

    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="#ffffff"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="#ffffff"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="#ffffff"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="#ffffff"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="#ffffff"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
<!--    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="&width_track_casing;"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="&width_track_fill;"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="5, 3, 2, 3"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="&width_track_casing_lozoom;"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="&width_track_fill_lozoom;"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="5, 3, 2, 3"
            />
    </Rule>-->
</Style>
<Style name="tracks-tunnels">
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_tunnel;"
                stroke-width="5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3.5"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="2.5"
                stroke-opacity="0.5"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="1.8"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="12, 3"
            />
    </Rule>
    <Rule name="částečně zpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="2"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="7, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="2"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="4, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="2"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="2, 3"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_track_fill;"
                stroke-width="1.8"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="5, 3, 2, 3"
            />
    </Rule>
</Style>




<Style name="tracks-bridges-bicycle">
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3.5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2.5"
                stroke-opacity="0.7"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.8"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="12, 3"
            />
    </Rule>
    <Rule name="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="7, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="4, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="2, 3"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke-width="4.5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.8"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="5, 3, 2, 3"
            />
    </Rule>
</Style>
<Style name="tracks-notunnel-nobridge-bicycle">
    <Rule name="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="4.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="zpevněná a kamenitá cesta">
            <Filter>([tracktype]='grade1' or [tracktype]='grade2')</Filter>
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="6.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
<!--    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3.5"
                stroke-opacity="0.4"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2.5"
                stroke-opacity="0.9"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.8"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="12, 3"
            />
    </Rule>-->
    <Rule name="částečně nezpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.8"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="7, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="4, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2"
                stroke-opacity="0.9"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="2, 3"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta"><!-- VF mdf -->
            <ElseFilter/>
            &minscale_zoom13;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom14;
            &maxscale_zoom14;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom15;
            &maxscale_zoom15;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &minscale_zoom16;
            &maxscale_zoom16;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom17;
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
    </Rule>

<!--    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-opacity="0.4"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.8"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="5, 3, 2, 3"
            />
    </Rule>-->
</Style>
<Style name="tracks-tunnels-bicycle">
    <Rule name="zpevněná cesta">
            <Filter>([tracktype]='grade1')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_tunnel;"
                stroke-width="5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3.5"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2.5"
                stroke-opacity="0.5"
            />
    </Rule>
    <Rule name="štěrková nebo kamenitá cesta">
            <Filter>([tracktype]='grade2')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.8"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="12, 3"
            />
    </Rule>
    <Rule name="částečně zpevněná cesta">
            <Filter>([tracktype]='grade3')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3.5"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="7, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta hlinitá">
            <Filter>([tracktype]='grade4')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="4, 3"
            />
    </Rule>
    <Rule name="nezpevněná cesta travnatá">
            <Filter>([tracktype]='grade5')</Filter>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="2"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="2, 3"
            />
    </Rule>
    <Rule name="ostatní nezpevněná cesta">
            <ElseFilter/>
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="&color_bicycle_track_tunnel;"
                stroke-width="4.5"
                stroke-dasharray="4, 2"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_casing;"
                stroke-width="3"
                stroke-linejoin="round"
                stroke-linecap="round"
            />
            <LineSymbolizer
                stroke="&color_bicycle_track_fill;"
                stroke-width="1.8"
                stroke-opacity="0.5"
                stroke-linejoin="round"
                stroke-linecap="butt"
                stroke-dasharray="5, 3, 2, 3"
            />
    </Rule>
</Style>
