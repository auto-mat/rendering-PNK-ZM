<!-- Styles for MTB tracks -->
<Style name="mtb_basic">
  <Rule name="MTB stezka">
    &maxscale_zoom6;
    &minscale_zoom8;
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="1"
      stroke-linejoin="round"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="MTB stezka">
    &maxscale_zoom9;
    &minscale_zoom9;
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="1.5"
      stroke-linejoin="round"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="MTB stezka">
    &maxscale_zoom10;
    &minscale_zoom11;
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="2"
      stroke-linejoin="round"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="MTB stezka">
    &maxscale_zoom12;
    &minscale_zoom12;
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="3"
      stroke-linejoin="round"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 0">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='0' or [mtb:scale]='0+' or [mtb:scale]='0-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="3"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 1">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='1' or [mtb:scale]='1+' or [mtb:scale]='1-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="3"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="8,4"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 2">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='2' or [mtb:scale]='2+' or [mtb:scale]='2-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="3"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="3,3"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 3">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='3' or [mtb:scale]='3+' or [mtb:scale]='3-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="2"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="6,2"
    />
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="6"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0,2,2,4"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 4 a 5">
    &maxscale_zoom13;
    &minscale_zoom14;
    <Filter>([mtb:scale]='4' or [mtb:scale]='4+' or [mtb:scale]='4-' or [mtb:scale]='5' or [mtb:scale]='5+' or [mtb:scale]='5-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="5"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0,2,1,2"
    />
  </Rule>
  <Rule name="MTB stezka bez značení obtížnosti">
    &maxscale_zoom13;
    &minscale_zoom14;
    <ElseFilter />
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="3"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="4,4,8,4"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 0">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='0' or [mtb:scale]='0+' or [mtb:scale]='0-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="4"
      stroke-offset="3"
      stroke-linejoin="round"
      stroke-linecap="round"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 1">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='1' or [mtb:scale]='1+' or [mtb:scale]='1-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="4"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="11,5"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 2">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='2' or [mtb:scale]='2+' or [mtb:scale]='2-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="4"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="4,5"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 3">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='3' or [mtb:scale]='3+' or [mtb:scale]='3-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="2"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="6,2"
    />
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="6"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0,2,2,4"
    />
  </Rule>
  <Rule name="MTB stezka obtížnosti 4 a 5">
    &maxscale_zoom15;
    <Filter>([mtb:scale]='4' or [mtb:scale]='4+' or [mtb:scale]='4-' or [mtb:scale]='5' or [mtb:scale]='5+' or [mtb:scale]='5-')</Filter>
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="6"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="0,2,2,2"
    />
  </Rule>
  <Rule name="MTB stezka bez značení obtížnosti">
    &maxscale_zoom15;
    <ElseFilter />
    <LineSymbolizer
      stroke="&color_mtb_track;"
      stroke-opacity="1"
      stroke-width="4"
      stroke-offset="3"
      stroke-linejoin="bevel"
      stroke-linecap="butt"
      stroke-dasharray="4,4,8,4"
    />
  </Rule>
</Style>
<!--<Style name="mtb_shield0">
  <Rule name="MTB obtížnost 0">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face-name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale0.png" width="12" height="12" minimum-distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield1">
  <Rule name="MTB obtížnost 1">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face-name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale1.png" width="12" height="12" minimum-distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield2">
  <Rule name="MTB obtížnost 2">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face-name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale2.png" width="12" height="12" minimum-distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield3">
  <Rule name="MTB obtížnost 3">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face-name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale3.png" width="13" height="12" minimum-distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield4">
  <Rule name="MTB obtížnost 4">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face-name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale4.png" width="12" height="12" minimum-distance="10" spacing="100"/>
  </Rule>
</Style>
<Style name="mtb_shield5">
  <Rule name="MTB obtížnost 5">
    &maxscale_zoom13;
    &minscale_zoom18;
    <ShieldSymbolizer name="osm_id" face-name="DejaVu Sans Bold" no_text="true" size="0" placement="line" file= "../symbols/mtb_sh_scale5.png" width="12" height="12" minimum-distance="10" spacing="100"/>
  </Rule>
</Style>-->
<Style name="mtb_incline">
  <Rule name="příkré stoupání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='up')</Filter>
    <LinePatternSymbolizer width="20" height="12" file="../symbols/mtb_up.png"/>
  </Rule>
  <Rule name="prudké klesání">
    &maxscale_zoom13;
    &minscale_zoom18;
    <Filter>([incline]='down')</Filter>
    <LinePatternSymbolizer width="20" height="12" file="../symbols/mtb_down.png"/>
  </Rule>
</Style>

