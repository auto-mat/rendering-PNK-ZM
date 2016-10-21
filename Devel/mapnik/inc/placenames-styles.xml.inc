<!-- styles for placenames - countries, cities, villages etc. -->

<!-- large -->
<Style name="country">
    <Rule>
            <Filter>([place]='country')</Filter>
            &minscale_zoom3;
            &maxscale_zoom2;
            <TextSymbolizer fontset-name="book-fonts" size="14" fill="&color_countries_text;" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='country')</Filter>
            &minscale_zoom7;
            &maxscale_zoom4;
            <TextSymbolizer fontset-name="book-fonts" size="18" fill="&color_countries_text;" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="state">
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom4;
            &maxscale_zoom4;
            <TextSymbolizer fontset-name="oblique-fonts" size="15" fill="&color_countries_text;" halo-radius="1">[ref]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom6;
            &maxscale_zoom5;
            <TextSymbolizer fontset-name="oblique-fonts" size="15" fill="&color_countries_text;" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='state')</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <TextSymbolizer fontset-name="oblique-fonts" size="18" fill="&color_countries_text;" halo-radius="1">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="capital">
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom6;
            <PointSymbolizer file="&symbols-path;capital12.png"></PointSymbolizer>
            <TextSymbolizer fontset-name="book-fonts" size="14" fill="&color_placenames_text;" halo-radius="1" dy="-8" horizontal-alignment="right">[upper]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom8;
            &maxscale_zoom7;
            <PointSymbolizer file="&symbols-path;capital16.png"></PointSymbolizer>
            <TextSymbolizer fontset-name="book-fonts" size="18" fill="&color_placenames_text;" halo-radius="1" dy="-9" horizontal-alignment="right" allow-overlap="true">[upper]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;capital24.png"></PointSymbolizer>
            <TextSymbolizer fontset-name="book-fonts" size="18" fill="&color_placenames_text;" halo-radius="1" dy="-14" horizontal-alignment="right" allow-overlap="true">[upper]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;capital30.png"></PointSymbolizer>
            <TextSymbolizer fontset-name="book-fonts" size="20" fill="&color_placenames_text;" halo-radius="1" dy="-16" horizontal-alignment="right" allow-overlap="true">[upper]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='city') or ([place]='metropolis') or ([place]='town'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom11;
            <TextSymbolizer fontset-name="book-fonts" size="24" fill="&color_placenames_text;" halo-radius="1" allow-overlap="true">[upper]</TextSymbolizer>
    </Rule>
</Style>

<!-- medium -->
<Style name="town">
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom7;
            &maxscale_zoom7;
            <TextSymbolizer fontset-name="book-fonts" size="10" fill="&color_placenames_text;" halo-radius="1" dx="10" horizontal-alignment="right">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <TextSymbolizer fontset-name="book-fonts" size="13" fill="&color_placenames_text;" halo-radius="1" dx="10" horizontal-alignment="right" allow-overlap="true" >[name]</TextSymbolizer>
    </Rule>
    <Rule name="město 50 001-100 000 obyv.">
            <Filter>(([population]&gt;50000) and not ([population]&gt;100000))</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <PointSymbolizer file="&symbols-path;city12.png"></PointSymbolizer>
            <TextSymbolizer fontset-name="book-fonts" size="11" fill="&color_placenames_text;" halo-radius="1" dx="10" horizontal-alignment="right" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <TextSymbolizer fontset-name="book-fonts" size="15" fill="&color_placenames_text;" halo-radius="1" dx="12" horizontal-alignment="right" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město 50 001-100 000 obyv.">
            <Filter>(([population]&gt;50000) and not ([population]&gt;100000))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <TextSymbolizer fontset-name="book-fonts" size="13" fill="&color_placenames_text;" halo-radius="1" dx="10" horizontal-alignment="right" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město 10 001-50 000 obyv.">
            <Filter>(([population]&gt;10000) and not ([population]&gt;50000))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <TextSymbolizer fontset-name="book-fonts" size="10" fill="&color_placenames_text;" halo-radius="1" wrap-width="30" dx="10" horizontal-alignment="right" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <TextSymbolizer fontset-name="book-fonts" size="15" fill="&color_placenames_text;" halo-radius="1" dx="12" horizontal-alignment="right" allow-overlap="true">[upper]</TextSymbolizer>
    </Rule>
    <Rule name="město 50 001-100 000 obyv.">
            <Filter>(([population]&gt;50000) and not ([population]&gt;100000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <TextSymbolizer fontset-name="book-fonts" size="13" fill="&color_placenames_text;" halo-radius="1" dx="10" horizontal-alignment="right" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město 10 001-50 000 obyv.">
            <Filter>(([population]&gt;10000) and not ([population]&gt;50000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <TextSymbolizer fontset-name="book-fonts" size="11" fill="&color_placenames_text;" halo-radius="1" wrap-width="30" dx="10" horizontal-alignment="right" allow-overlap="true">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([population]&gt;10000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <TextSymbolizer fontset-name="book-fonts" size="9" fill="&color_placenames_text;" halo-radius="1" wrap-width="30" dx="7" horizontal-alignment="right">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer fontset-name="book-fonts" size="18" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[upper]</TextSymbolizer>
    </Rule>
    <Rule name="město 50 001-100 000 obyv.">
            <Filter>(([population]&gt;50000) and not ([population]&gt;100000))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer fontset-name="book-fonts" size="16" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město 10 001-50 000 obyv.">
            <Filter>(([population]&gt;10000) and not ([population]&gt;50000))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer fontset-name="book-fonts" size="14" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([population]&gt;10000))</Filter>
            &minscale_zoom11;
            &maxscale_zoom11;
            <TextSymbolizer fontset-name="book-fonts" size="10" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <TextSymbolizer fontset-name="book-fonts" size="20" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[upper]</TextSymbolizer>
    </Rule>
    <Rule name="město 50 001-100 000 obyv.">
            <Filter>(([population]&gt;50000) and not ([population]&gt;100000))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <TextSymbolizer fontset-name="book-fonts" size="15" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[upper]</TextSymbolizer>
    </Rule>
    <Rule name="město 10 001-50 000 obyv.">
            <Filter>(([population]&gt;10000) and not ([population]&gt;50000))</Filter>
            &minscale_zoom13;
            &maxscale_zoom12;
            <TextSymbolizer fontset-name="book-fonts" size="14" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([population]&gt;10000))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <TextSymbolizer fontset-name="book-fonts" size="10" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([population]&gt;10000))</Filter>
            &minscale_zoom13;
            &maxscale_zoom13;
            <TextSymbolizer fontset-name="book-fonts" size="14" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule name="město s více než 50 000 obyv.">
            <Filter>([population]&gt;50000)</Filter>
            &maxscale_zoom14;
            &minscale_zoom15;
            <TextSymbolizer fontset-name="book-fonts" size="22" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[upper]</TextSymbolizer>
    </Rule>
    <Rule name="město s méně než 50 000 obyv.">
            <ElseFilter />
            &maxscale_zoom14;
            <TextSymbolizer fontset-name="book-fonts" size="22" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
</Style>

<Style name="town-symbols">
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom7;
            &maxscale_zoom7;
            <PointSymbolizer file="&symbols-path;city09.png"></PointSymbolizer>
    </Rule>
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <PointSymbolizer file="&symbols-path;city15.png"></PointSymbolizer>
    </Rule>
    <Rule name="město 50 001-100 000 obyv.">
            <Filter>(([population]&gt;50000) and not ([population]&gt;100000))</Filter>
            &minscale_zoom8;
            &maxscale_zoom8;
            <PointSymbolizer file="&symbols-path;city12.png"></PointSymbolizer>
    </Rule>
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;city20.png"></PointSymbolizer>
    </Rule>
    <Rule name="město 50 001-100 000 obyv.">
            <Filter>(([population]&gt;50000) and not ([population]&gt;100000))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;city15.png"></PointSymbolizer>
    </Rule>
    <Rule name="město 10 001-50 000 obyv.">
            <Filter>(([population]&gt;10000) and not ([population]&gt;50000))</Filter>
            &minscale_zoom9;
            &maxscale_zoom9;
            <PointSymbolizer file="&symbols-path;town12.png" allow-overlap="true" ></PointSymbolizer>
    </Rule>
    <Rule name="město s více než 100 000 obyv.">
            <Filter>([population]&gt;100000)</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;city20.png"></PointSymbolizer>
    </Rule>
    <Rule name="město 50 001-100 000 obyv.">
            <Filter>(([population]&gt;50000) and not ([population]&gt;100000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;city15.png"></PointSymbolizer>
    </Rule>
    <Rule name="město 10 001-50 000 obyv.">
            <Filter>(([population]&gt;10000) and not ([population]&gt;50000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;town12.png" allow-overlap="true" ></PointSymbolizer>
    </Rule>
    <Rule name="město s méně než 10 000">
            <Filter>((([place]='town') or ([place]='large_town') or ([place]='small_town')) and not ([population]&gt;10000))</Filter>
            &minscale_zoom10;
            &maxscale_zoom10;
            <PointSymbolizer file="&symbols-path;town08.png"></PointSymbolizer>
    </Rule>
</Style>

<!-- small -->
<Style name="suburb">
    <Rule>
            <Filter>([place]='suburb')</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <TextSymbolizer fontset-name="book-fonts" size="14" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>([place]='suburb')</Filter>
            &maxscale_zoom15;
            <TextSymbolizer fontset-name="book-fonts" size="17" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="village">
    <Rule>
            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &minscale_zoom12;
            &maxscale_zoom12;
            <TextSymbolizer fontset-name="book-fonts" size="10" fill="&color_placenames_text;" halo-radius="1" dy="15" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &minscale_zoom14;
            &maxscale_zoom13;
            <TextSymbolizer fontset-name="book-fonts" size="14" fill="&color_placenames_text;" halo-radius="1" dy="15" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    <Rule>
            <Filter>(([place]='village') or ([place]='large_village'))</Filter>
            &maxscale_zoom15;
            <TextSymbolizer fontset-name="book-fonts" size="17" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
</Style>
<Style name="hamlet">
    <!--
    <Rule>
            <Filter>(([place]='hamlet') or ([place]='locality'))</Filter>
            &minscale_zoom15;
            &maxscale_zoom14;
            <TextSymbolizer fontset-name="book-fonts" size="12" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
    -->
    <Rule>
            <Filter>(([place]='hamlet') or ([place]='locality'))</Filter>
            &maxscale_zoom16;
            <TextSymbolizer fontset-name="book-fonts" size="14" fill="&color_placenames_text;" halo-radius="1" wrap-width="30">[name]</TextSymbolizer>
    </Rule>
</Style>
