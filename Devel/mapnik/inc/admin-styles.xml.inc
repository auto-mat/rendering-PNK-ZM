<!-- staty - level 2; kraje - level 4 -->
<Style name="admin-01234">
    <Rule name="státní hranice">
            <Filter>(([admin_level]='2') or ([admin_level]='3'))</Filter>
            &minscale_zoom6;
            &maxscale_zoom2;
            <LineSymbolizer
               stroke="rgb(64,64,64)"
               stroke-width="1.5"
               stroke-opacity="0.6"
               stroke-dasharray="12, 6, 4, 6"
            />
    </Rule>
    <Rule name="státní hranice">
            <Filter>(([admin_level]='2') or ([admin_level]='3'))</Filter>
            &minscale_zoom9;
            &maxscale_zoom7;
            <LineSymbolizer
                stroke="rgb(64,64,64)"
                stroke-width="2"
                stroke-opacity="0.6"
                stroke-dasharray="12, 6, 4, 6"
            />
    </Rule>
    <Rule name="státní hranice">
            <Filter>(([admin_level]='2') or ([admin_level]='3'))</Filter>
            &maxscale_zoom10;
            <LineSymbolizer
               stroke="rgb(64,64,64)"
               stroke-width="5"
               stroke-opacity="0.6"
               stroke-dasharray="12, 6, 4, 6"
            />
    </Rule>
<!--    <Rule>
            <Filter>([admin_level]='4')</Filter>
            &minscale_zoom6;
            &maxscale_zoom4;
            <LineSymbolizer
                stroke="rgb(64,64,64)"
                stroke-width="1"
                stroke-opacity="0.3"
                stroke-dasharray="12, 6"
            />
    </Rule>
    <Rule>
            <Filter>([admin_level]='4')</Filter>
            &minscale_zoom10;
            &maxscale_zoom7;
            <LineSymbolizer
                stroke="rgb(64,64,64)"
                stroke-width="2"
                stroke-opacity="0.3"
                stroke-dasharray="12, 6"
            />
    </Rule>
    <Rule>
            <Filter>([admin_level]='4')</Filter>
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="rgb(64,64,64)"
                stroke-width="4"
                stroke-opacity="0.3"
                stroke-dasharray="12, 6"
            />
    </Rule>
-->
</Style>
<!-- okresy -->
<Style name="admin-5678">
    <Rule name="okresní hranice">
            <Filter>(([admin_level]='6') or ([admin_level]='7'))</Filter>
            &maxscale_zoom11;
            <LineSymbolizer
                stroke="rgb(64,64,64)"
                stroke-width="3"
                stroke-opacity="0.3"
                stroke-dasharray="6,3"
            />
    </Rule>
</Style>
<Style name="boundary">
    <Rule name="chráněné území">
            &minscale_zoom12;
            &maxscale_zoom10;
            <PolygonSymbolizer
                fill="rgb(0,128,0)"
                fill-opacity="0.1"
            />
            <LineSymbolizer
                stroke="rgb(0,128,0)"
                stroke-width="3"
                stroke-opacity="0.4"
                stroke-dasharray="6, 2"
            />
    </Rule>
    <Rule name="chráněné území">
            &minscale_zoom18;
            &maxscale_zoom13;
            <LineSymbolizer
                stroke="rgb(0,128,0)"
                stroke-width="5"
                stroke-opacity="0.4"
                stroke-dasharray="6, 2"
            />
    </Rule>
    <Rule name="!popis chráněného území">
            &minscale_zoom11;
            &maxscale_zoom10;
            <TextSymbolizer fontset-name="bold-fonts" size="11" fill="rgb(153,204,153)" halo-radius="1" wrap-width="14">[name]</TextSymbolizer>
    </Rule>
</Style>

