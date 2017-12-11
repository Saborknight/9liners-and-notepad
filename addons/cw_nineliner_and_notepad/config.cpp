class CfgPatches
{
	class CW_9LINERS_AND_NOTEPAD
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.000000;
		requiredAddons[]=
		{
			"CBA_Extended_EventHandlers",
			"CBA_MAIN"
		};
		author="Chief Wiggum";
	};
};
class cw_9liner_cas_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_9liner_cas_edit
{
	access=0;
	type=2;
	style=528;
	x=0;
	y=0;
	h=0.040000;
	w=0.200000;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorSelection[]={0,0,0,0.250000};
	colorDisabled[]={0,0,0,0};
	font="TahomaB";
	sizeEx="0.015 / (getResolution select 5)";
	autocomplete="";
	text="";
	size=0.200000;
	shadow=1;
};
class cw_9liner_cas_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_9LINER_CAS
{
	idd=-1;
	movingenable="true";
	onUnload="hint """"";
	class Controls
	{
		class cw_9liner_cas_background: cw_9liner_cas_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_9Liner_CAS\Images\9liner_cas.paa";
			x="-0.0786458 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.452604 * safezoneW";
			h="0.725717 * safezoneH";
			moving=1;
		};
		class cw_9liner_cas_line0_1: cw_9liner_cas_edit
		{
			idc=1400;
			x="0.121875 * safezoneW + safezoneX";
			y="0.362056 * safezoneH + safezoneY";
			w="0.0802083 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line0_2: cw_9liner_cas_edit
		{
			idc=1401;
			x="0.225 * safezoneW + safezoneX";
			y="0.362056 * safezoneH + safezoneY";
			w="0.0630208 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line1: cw_9liner_cas_edit
		{
			idc=1402;
			x="0.0989583 * safezoneW + safezoneX";
			y="0.413034 * safezoneH + safezoneY";
			w="0.189062 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line2: cw_9liner_cas_edit
		{
			idc=1403;
			x="0.104688 * safezoneW + safezoneX";
			y="0.434026 * safezoneH + safezoneY";
			w="0.148958 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line2_2: cw_9liner_cas_edit
		{
			idc=1404;
			x="0.0989583 * safezoneW + safezoneX";
			y="0.471013 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line3: cw_9liner_cas_edit
		{
			idc=1405;
			x="0.104688 * safezoneW + safezoneX";
			y="0.489004 * safezoneH + safezoneY";
			w="0.183333 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line4: cw_9liner_cas_edit
		{
			idc=1406;
			x="0.127604 * safezoneW + safezoneX";
			y="0.521991 * safezoneH + safezoneY";
			w="0.120313 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line5: cw_9liner_cas_edit
		{
			idc=1407;
			x="0.133333 * safezoneW + safezoneX";
			y="0.542983 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line6: cw_9liner_cas_edit
		{
			idc=1408;
			x="0.127604 * safezoneW + safezoneX";
			y="0.570974 * safezoneH + safezoneY";
			w="0.160417 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line7_1: cw_9liner_cas_edit
		{
			idc=1409;
			x="0.110417 * safezoneW + safezoneX";
			y="0.622953 * safezoneH + safezoneY";
			w="0.0859375 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line7_2: cw_9liner_cas_edit
		{
			idc=1410;
			x="0.225 * safezoneW + safezoneX";
			y="0.622953 * safezoneH + safezoneY";
			w="0.0630208 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line7_3: cw_9liner_cas_edit
		{
			idc=1411;
			x="0.133333 * safezoneW + safezoneX";
			y="0.65594 * safezoneH + safezoneY";
			w="0.0630208 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line8: cw_9liner_cas_edit
		{
			idc=1412;
			x="0.150521 * safezoneW + safezoneX";
			y="0.677931 * safezoneH + safezoneY";
			w="0.1375 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line8_2: cw_9liner_cas_edit
		{
			idc=1413;
			x="0.139062 * safezoneW + safezoneX";
			y="0.697923 * safezoneH + safezoneY";
			w="0.148958 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line9: cw_9liner_cas_edit
		{
			idc=1414;
			x="0.104688 * safezoneW + safezoneX";
			y="0.73191 * safezoneH + safezoneY";
			w="0.183333 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line10: cw_9liner_cas_edit
		{
			idc=1415;
			x="0.0817708 * safezoneW + safezoneX";
			y="0.777893 * safezoneH + safezoneY";
			w="0.20625 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line11: cw_9liner_cas_edit
		{
			idc=1416;
			x="0.150521 * safezoneW + safezoneX";
			y="0.8098 * safezoneH + safezoneY";
			w="0.1375 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line12: cw_9liner_cas_edit
		{
			idc=1417;
			x="0.133333 * safezoneW + safezoneX";
			y="0.919837 * safezoneH + safezoneY";
			w="0.120313 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line13_1: cw_9liner_cas_edit
		{
			idc=1418;
			x="0.15625 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_line13_2: cw_9liner_cas_edit
		{
			idc=1419;
			x="0.207813 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_cas_bttn_clearThis: cw_9liner_cas_button
		{
			idc=1600;
			x="0.0780417 * safezoneW + safezoneX";
			y="0.274 * safezoneH + safezoneY";
			w="0.0610208 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_9liner_cas_fnc_clearPage;";
		};
		class cw_9liner_cas_bttn_clearAll: cw_9liner_cas_button
		{
			idc=1601;
			x="0.196354 * safezoneW + safezoneX";
			y="0.274 * safezoneH + safezoneY";
			w="0.0488333 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_9liner_cas_fnc_clearall;";
		};
		class cw_9liner_cas_bttn_save: cw_9liner_cas_button
		{
			idc=1602;
			x="0.152521 * safezoneW + safezoneX";
			y="0.273 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_9liner_cas_fnc_savePage;";
		};
		class cw_9liner_cas_bttn_nextPage: cw_9liner_cas_button
		{
			idc=1603;
			x="0.253646 * safezoneW + safezoneX";
			y="0.273 * safezoneH + safezoneY";
			w="0.0401042 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_9liner_cas_fnc_nextPage;";
		};
		class cw_9liner_cas_bttn_previousPage: cw_9liner_cas_button
		{
			idc=1604;
			x="0.0359375 * safezoneW + safezoneX";
			y="0.273 * safezoneH + safezoneY";
			w="0.039 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_9liner_cas_fnc_previousPage;";
		};
		class cw_9line_cas_bttn_enableControls_2: cw_9liner_cas_button
		{
			idc=1606;
			x="-2.27865 * safezoneW + safezoneX";
			y="-1.98503 * safezoneH + safezoneY";
			w="2.29167 * safezoneW";
			h="3.8485 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_9LINER_CAS\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_9line_cas_bttn_enableControls_1: cw_9liner_cas_button
		{
			idc=1605;
			x="0.310937 * safezoneW + safezoneX";
			y="-1.46823 * safezoneH + safezoneY";
			w="2.29167 * safezoneW";
			h="3.8485 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_9LINER_CAS\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_9line_cas_bttn_enableControls_3: cw_9liner_cas_button
		{
			idc=1607;
			x="-0.94375 * safezoneW + safezoneX";
			y="-3.57941 * safezoneH + safezoneY";
			w="2.29167 * safezoneW";
			h="3.8485 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_9LINER_CAS\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_9liner_cas_bttn_enableControls4: cw_9liner_cas_button
		{
			idc=1608;
			x="-0.628646 * safezoneW + safezoneX";
			y="0.983811 * safezoneH + safezoneY";
			w="2.29167 * safezoneW";
			h="3.8485 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_9LINER_CAS\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
	};
};
class cw_9liner_medv_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_9liner_medv_edit
{
	access=0;
	type=2;
	style=528;
	x=0;
	y=0;
	h=0.040000;
	w=0.200000;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorSelection[]={1,1,1,0.250000};
	colorDisabled[]={1,1,1,0.500000};
	font="TahomaB";
	sizeEx=0.040000;
	autocomplete="";
	text="";
	size=0.200000;
	shadow=1;
};
class cw_9liner_medv_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class cw_9liner_medv_picture_cross
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_9LINER_MEDEVAC
{
	idd=-1;
	movingenable="true";
	onUnload="hint """"";
	class Controls
	{
		class cw_9liner_medv_background: cw_9liner_medv_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Images\9liner_medevac.paa";
			x="-0.0213542 * safezoneW + safezoneX";
			y="0.247099 * safezoneH + safezoneY";
			w="0.4125 * safezoneW";
			h="0.747708 * safezoneH";
			moving=1;
		};
		class cw_9liner_medevac_edit_line1: cw_9liner_medv_edit
		{
			idc=1400;
			x="0.144792 * safezoneW + safezoneX";
			y="0.34606 * safezoneH + safezoneY";
			w="0.189062 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medevac_edit_line2: cw_9liner_medv_edit
		{
			idc=1401;
			x="0.173438 * safezoneW + safezoneX";
			y="0.390043 * safezoneH + safezoneY";
			w="0.160417 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medevac_edit_line3: cw_9liner_medv_edit
		{
			idc=1402;
			x="0.161979 * safezoneW + safezoneX";
			y="0.434026 * safezoneH + safezoneY";
			w="0.171875 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medevac_edit_line4: cw_9liner_medv_edit
		{
			idc=1403;
			x="0.144792 * safezoneW + safezoneX";
			y="0.489004 * safezoneH + safezoneY";
			w="0.189062 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medevac_edit_line5: cw_9liner_medv_edit
		{
			idc=1404;
			x="0.121875 * safezoneW + safezoneX";
			y="0.554979 * safezoneH + safezoneY";
			w="0.20625 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medevac_edit_line6: cw_9liner_medv_edit
		{
			idc=1405;
			x="0.133333 * safezoneW + safezoneX";
			y="0.620953 * safezoneH + safezoneY";
			w="0.200521 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medevac_edit_line7: cw_9liner_medv_edit
		{
			idc=1406;
			x="0.15625 * safezoneW + safezoneX";
			y="0.719914 * safezoneH + safezoneY";
			w="0.177604 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medevac_edit_line8: cw_9liner_medv_edit
		{
			idc=1407;
			x="0.150521 * safezoneW + safezoneX";
			y="0.785888 * safezoneH + safezoneY";
			w="0.183333 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medv_edit_1408: cw_9liner_medv_edit
		{
			idc=1408;
			x="0.127604 * safezoneW + safezoneX";
			y="0.840867 * safezoneH + safezoneY";
			w="0.200521 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_9liner_medevac_edit_line3_cross_picture1: cw_9liner_medv_picture_cross
		{
			idc=2800;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line3_cross_picture2: cw_9liner_medv_picture_cross
		{
			idc=2801;
			x="0.104688 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line3_cross_picture3: cw_9liner_medv_picture_cross
		{
			idc=2802;
			x="0.173438 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line3_cross_picture4: cw_9liner_medv_picture_cross
		{
			idc=2803;
			x="0.219271 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line3_cross_picture5: cw_9liner_medv_picture_cross
		{
			idc=2804;
			x="0.270833 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line4_cross_picture1: cw_9liner_medv_picture_cross
		{
			idc=2805;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.510996 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line4_cross_picture2: cw_9liner_medv_picture_cross
		{
			idc=2806;
			x="0.121875 * safezoneW + safezoneX";
			y="0.510996 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line4_cross_picture3: cw_9liner_medv_picture_cross
		{
			idc=2807;
			x="0.179167 * safezoneW + safezoneX";
			y="0.510996 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line4_cross_picture4: cw_9liner_medv_picture_cross
		{
			idc=2808;
			x="0.276563 * safezoneW + safezoneX";
			y="0.510996 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line5_cross_picture1: cw_9liner_medv_picture_cross
		{
			idc=2809;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.57697 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line5_cross_picture2: cw_9liner_medv_picture_cross
		{
			idc=2810;
			x="0.116146 * safezoneW + safezoneX";
			y="0.57697 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line6_cross_picture1: cw_9liner_medv_picture_cross
		{
			idc=2811;
			x="0.0588542 * safezoneW + safezoneX";
			y="0.65394 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line6_cross_picture2: cw_9liner_medv_picture_cross
		{
			idc=2812;
			x="0.110417 * safezoneW + safezoneX";
			y="0.65394 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line6_cross_picture3: cw_9liner_medv_picture_cross
		{
			idc=2813;
			x="0.173438 * safezoneW + safezoneX";
			y="0.65394 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line6_cross_picture4: cw_9liner_medv_picture_cross
		{
			idc=2814;
			x="0.247917 * safezoneW + safezoneX";
			y="0.65394 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line7_cross_picture1: cw_9liner_medv_picture_cross
		{
			idc=2815;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line7_cross_picture2: cw_9liner_medv_picture_cross
		{
			idc=2816;
			x="0.104688 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line7_cross_picture3: cw_9liner_medv_picture_cross
		{
			idc=2817;
			x="0.179167 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line7_cross_picture4: cw_9liner_medv_picture_cross
		{
			idc=2818;
			x="0.242188 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line7_cross_picture5: cw_9liner_medv_picture_cross
		{
			idc=2819;
			x="0.29375 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line8_cross_picture1: cw_9liner_medv_picture_cross
		{
			idc=2820;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line8_cross_picture2: cw_9liner_medv_picture_cross
		{
			idc=2821;
			x="0.110417 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line8_cross_picture3: cw_9liner_medv_picture_cross
		{
			idc=2822;
			x="0.161979 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line8_cross_picture4: cw_9liner_medv_picture_cross
		{
			idc=2823;
			x="0.225 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line8_cross_picture5: cw_9liner_medv_picture_cross
		{
			idc=2824;
			x="0.29375 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line9_cross_picture1: cw_9liner_medv_picture_cross
		{
			idc=2825;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.88485 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line9_cross_picture2: cw_9liner_medv_picture_cross
		{
			idc=2826;
			x="0.110417 * safezoneW + safezoneX";
			y="0.88485 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line9_cross_picture3: cw_9liner_medv_picture_cross
		{
			idc=2827;
			x="0.161979 * safezoneW + safezoneX";
			y="0.88485 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
		};
		class cw_9liner_medevac_edit_line3_cross_button1: cw_9liner_medv_button
		{
			idc=3800;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2800] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line3_cross_button2: cw_9liner_medv_button
		{
			idc=3801;
			x="0.104688 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2801] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line3_cross_button3: cw_9liner_medv_button
		{
			idc=3802;
			x="0.173438 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2802] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line3_cross_button4: cw_9liner_medv_button
		{
			idc=3803;
			x="0.219271 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2803] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line3_cross_button5: cw_9liner_medv_button
		{
			idc=3804;
			x="0.270833 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2804] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line4_cross_button1: cw_9liner_medv_button
		{
			idc=3805;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.510996 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2805] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line4_cross_button2: cw_9liner_medv_button
		{
			idc=3806;
			x="0.121875 * safezoneW + safezoneX";
			y="0.510996 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2806] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line4_cross_button3: cw_9liner_medv_button
		{
			idc=3807;
			x="0.179167 * safezoneW + safezoneX";
			y="0.510996 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2807] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line4_cross_button4: cw_9liner_medv_button
		{
			idc=3808;
			x="0.276563 * safezoneW + safezoneX";
			y="0.510996 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2808] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line5_cross_button1: cw_9liner_medv_button
		{
			idc=3809;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.57697 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2809] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line5_cross_button2: cw_9liner_medv_button
		{
			idc=3810;
			x="0.116146 * safezoneW + safezoneX";
			y="0.57697 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2810] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line6_cross_button1: cw_9liner_medv_button
		{
			idc=3811;
			x="0.0588542 * safezoneW + safezoneX";
			y="0.65394 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2811] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line6_cross_button2: cw_9liner_medv_button
		{
			idc=2812;
			x="0.110417 * safezoneW + safezoneX";
			y="0.65394 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2812] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line6_cross_button3: cw_9liner_medv_button
		{
			idc=3813;
			x="0.173438 * safezoneW + safezoneX";
			y="0.65394 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2813] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line6_cross_button4: cw_9liner_medv_button
		{
			idc=3814;
			x="0.247917 * safezoneW + safezoneX";
			y="0.65394 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2814] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line7_cross_button1: cw_9liner_medv_button
		{
			idc=3815;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2815] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line7_cross_button2: cw_9liner_medv_button
		{
			idc=3816;
			x="0.104688 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2816] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line7_cross_button3: cw_9liner_medv_button
		{
			idc=3817;
			x="0.179167 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2817] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line7_cross_button4: cw_9liner_medv_button
		{
			idc=3818;
			x="0.242188 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2818] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line7_cross_button5: cw_9liner_medv_button
		{
			idc=3819;
			x="0.29375 * safezoneW + safezoneX";
			y="0.741906 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2819] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line8_cross_button1: cw_9liner_medv_button
		{
			idc=3820;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2820] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line8_cross_button2: cw_9liner_medv_button
		{
			idc=3821;
			x="0.110417 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2821] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line8_cross_button3: cw_9liner_medv_button
		{
			idc=3822;
			x="0.161979 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2822] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line8_cross_button4: cw_9liner_medv_button
		{
			idc=3823;
			x="0.225 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2823] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line8_cross_button5: cw_9liner_medv_button
		{
			idc=3824;
			x="0.29375 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2824] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line9_cross_button1: cw_9liner_medv_button
		{
			idc=3825;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.88485 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2825] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line9_cross_button2: cw_9liner_medv_button
		{
			idc=3826;
			x="0.110417 * safezoneW + safezoneX";
			y="0.88485 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2826] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_edit_line9_cross_button3: cw_9liner_medv_button
		{
			idc=3827;
			x="0.161979 * safezoneW + safezoneX";
			y="0.88485 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="[2827] call cw_9liner_medv_fnc_show_or_hide_cross;";
		};
		class cw_9liner_medevac_bttn_nextPage: cw_9liner_medv_button
		{
			idc=1600;
			x="0.305208 * safezoneW + safezoneX";
			y="0.928833 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_9liner_medv_fnc_nextPage";
		};
		class cw_9liner_medevac_bttn_previousPage: cw_9liner_medv_button
		{
			idc=1601;
			x="0.0302083 * safezoneW + safezoneX";
			y="0.928833 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_9liner_medv_fnc_previousPage;";
		};
		class cw_9liner_medivac_bttn_clearthis: cw_9liner_medv_button
		{
			idc=1602;
			x="0.0817708 * safezoneW + safezoneX";
			y="0.928833 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_9liner_medv_fnc_clearPage;";
		};
		class cw_9liner_medivac_bttn_clearall: cw_9liner_medv_button
		{
			idc=1603;
			x="0.225 * safezoneW + safezoneX";
			y="0.928833 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_9liner_medv_fnc_clearall;";
		};
		class cw_9liner_medivac_bttn_safe: cw_9liner_medv_button
		{
			idc=1604;
			x="0.173438 * safezoneW + safezoneX";
			y="0.928833 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_9liner_medv_fnc_savePage;";
		};
		class cw_medv_9liner_enableControls_1: cw_9liner_medv_button
		{
			idc=1605;
			x="0.339583 * safezoneW + safezoneX";
			y="-0.2697 * safezoneH + safezoneY";
			w="1.53542 * safezoneW";
			h="2.03421 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_9liner_medv_enableControls_2: cw_9liner_medv_button
		{
			idc=1606;
			x="-1.21875 * safezoneW + safezoneX";
			y="0.972816 * safezoneH + safezoneY";
			w="2.56094 * safezoneW";
			h="2.0562 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_9liner_medv_enabelControls_3: cw_9liner_medv_button
		{
			idc=1607;
			x="-0.336458 * safezoneW + safezoneX";
			y="-1.77611 * safezoneH + safezoneY";
			w="2.56094 * safezoneW";
			h="2.0562 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_9liner_medv_enableControls_4: cw_9liner_medv_button
		{
			idc=1608;
			x="-2.53073 * safezoneW + safezoneX";
			y="0.236103 * safezoneH + safezoneY";
			w="2.56094 * safezoneW";
			h="2.0562 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
	};
};
class cw_noteblock_text
{
	access=0;
	type=0;
	idc=-1;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,0.700000};
	text="";
	fixedWidth=0;
	x=0;
	y=0;
	h=0.037000;
	w=0.300000;
	style=0;
	shadow=0;
	font="puristaMedium";
	SizeEx=0.039210;
};
class cw_noteblock_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_noteblock_edit
{
	access=0;
	type=2;
	style=528;
	x=0;
	y=0;
	h=0.040000;
	w=0.200000;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorSelection[]={1,1,1,0.250000};
	colorDisabled[]={1,1,1,0.500000};
	font="TahomaB";
	sizeEx=0.040000;
	autocomplete="";
	text="";
	size=0.200000;
	shadow=1;
};
class cw_noteblock_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_NOTEBLOCK
{
	idd=-1;
	movingenable="true";
	onUnload="hint """"";
	class Controls
	{
		class cw_noteblock_background: cw_noteblock_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_Noteblock\Images\noteblock.paa";
			x="-0.0557292 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.48125 * safezoneW";
			h="0.747708 * safezoneH";
			moving=1;
		};
		class cw_noteblock_edit: cw_noteblock_edit
		{
			idc=1400;
			x="0.0416667 * safezoneW + safezoneX";
			y="0.307 * safezoneH + safezoneY";
			w="0.303646 * safezoneW";
			h="0.637751 * safezoneH";
			moving=1;
		};
		class cw_noteblock_bttn_nextPage: cw_noteblock_button
		{
			idc=1600;
			x="0.310937 * safezoneW + safezoneX";
			y="0.291081 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_noteblock_fnc_nextPage;";
		};
		class cw_noteblock_bttn_previousPage: cw_noteblock_button
		{
			idc=1601;
			x="0.0416667 * safezoneW + safezoneX";
			y="0.291081 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_noteblock_fnc_previousPage;";
		};
		class cw_noteblock_bttn_save: cw_noteblock_button
		{
			idc=1602;
			x="0.3479 * safezoneW + safezoneX";
			y="0.373 * safezoneH + safezoneY";
			w="0.019 * safezoneW";
			h="0.047 * safezoneH";
			action="call cw_noteblock_fnc_savePage;";
		};
		class cw_noteblock_bttn_clearpage: cw_noteblock_button
		{
			idc=1603;
			x="0.3479 * safezoneW + safezoneX";
			y="0.65 * safezoneH + safezoneY";
			w="0.0155 * safezoneW";
			h="0.054 * safezoneH";
			action="call cw_noteblock_fnc_clearPage;";
		};
		class cw_noteblock_bttn_clearall: cw_noteblock_button
		{
			idc=1604;
			x="0.3479 * safezoneW + safezoneX";
			y="0.788 * safezoneH + safezoneY";
			w="0.015 * safezoneW";
			h="0.043 * safezoneH";
			action="call cw_noteblock_fnc_clearBlock;";
		};
		class cw_noteblock_bttn_close: cw_noteblock_button
		{
			idc=1605;
			x="0.3479 * safezoneW + safezoneX";
			y="0.931 * safezoneH + safezoneY";
			w="0.016 * safezoneW";
			h="0.045 * safezoneH";
			action="closeDialog 0;";
		};
		class cw_noteblock_bttn_enableContros_1: cw_noteblock_button
		{
			idc=1606;
			x="0.365* safezoneW + safezoneX";
			y="-5 * safezoneH + safezoneY";
			w="10 * safezoneW";
			h="10 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_Noteblock\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_noteblock_bttn_enableContros_2: cw_noteblock_button
		{
			idc=1607;
			x="-10 * safezoneW + safezoneX";
			y="-5 * safezoneH + safezoneY";
			w="10 * safezoneW";
			h="10 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_Noteblock\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_noteblock_bttn_enableContros_3: cw_noteblock_button
		{
			idc=1608;
			x="-1.0557292 * safezoneW + safezoneX";
			y="-9.715 * safezoneH + safezoneY";
			w="10 * safezoneW";
			h="10 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_Noteblock\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_noteblock_bttn_enableContros_4: cw_noteblock_button
		{
			idc=1609;
			x="-0.0557292 * safezoneW + safezoneX";
			y="0.995 * safezoneH + safezoneY";
			w="10 * safezoneW";
			h="10 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_Noteblock\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
	};
};
class cw_5liner_gcff_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_5liner_gcff_edit
{
	access=0;
	type=2;
	style=528;
	x=0;
	y=0;
	h=0.040000;
	w=0.200000;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorSelection[]={0,0,0,0.250000};
	colorDisabled[]={0,0,0,0};
	font="TahomaB";
	sizeEx="0.015 / (getResolution select 5)";
	autocomplete="";
	text="";
	size=0.200000;
	shadow=1;
};
class cw_5liner_gcff_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_GUNSHIP_CALL_FOR_FIRE
{
	idd=-1;
	movingenable="true";
	class Controls
	{
		class cw_gcff_background: cw_5liner_gcff_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_GunshipCallForFire\Images\gunshipcallforfire.paa";
			x="-0.0843753 * safezoneW + safezoneX";
			y="0.225107 * safezoneH + safezoneY";
			w="0.492708 * safezoneW";
			h="0.802687 * safezoneH";
			moving=1;
		};
		class cw_gcff_line1_1: cw_5liner_gcff_edit
		{
			idc=1400;
			x="0.139062 * safezoneW + safezoneX";
			y="0.384047 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_gcff_line1_2: cw_5liner_gcff_edit
		{
			idc=1401;
			x="0.225 * safezoneW + safezoneX";
			y="0.384047 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_gcff_line2_1: cw_5liner_gcff_edit
		{
			idc=1402;
			x="0.190625 * safezoneW + safezoneX";
			y="0.439026 * safezoneH + safezoneY";
			w="0.0802083 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_gcff_line2_2: cw_5liner_gcff_edit
		{
			idc=1403;
			x="0.0703121 * safezoneW + safezoneX";
			y="0.472013 * safezoneH + safezoneY";
			w="0.177604 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_gcff_line3_1: cw_5liner_gcff_edit
		{
			idc=1404;
			x="0.104688 * safezoneW + safezoneX";
			y="0.505 * safezoneH + safezoneY";
			w="0.131771 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_gcff_line4_1: cw_5liner_gcff_edit
		{
			idc=1405;
			x="0.184896 * safezoneW + safezoneX";
			y="0.538987 * safezoneH + safezoneY";
			w="0.0401042 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_gcff_line5_1: cw_5liner_gcff_edit
		{
			idc=1406;
			x="0.0760417 * safezoneW + safezoneX";
			y="0.570974 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_gcff_bttn_previousPage: cw_5liner_gcff_button
		{
			idc=1600;
			x="0.0130208 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_5liner_gcff_fnc_previousPage;";
		};
		class cw_gcff_bttn_nextPage: cw_5liner_gcff_button
		{
			idc=1601;
			x="0.276563 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_5liner_gcff_fnc_nextPage;";
		};
		class cw_gcff_bttn_clearPage: cw_5liner_gcff_button
		{
			idc=1602;
			x="0.053125 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_5liner_gcff_fnc_clearPage;";
		};
		class cw_gcff_bttn_save: cw_5liner_gcff_button
		{
			idc=1603;
			x="0.144792 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_5liner_gcff_fnc_savePage;";
		};
		class cw_gcff_bttn_clearAll: cw_5liner_gcff_button
		{
			idc=1604;
			x="0.196354 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_5liner_gcff_fnc_clearall;";
		};
		class cw_gcff_bttn_enableControls_1: cw_5liner_gcff_button
		{
			idc=1605;
			x="0.316667 * safezoneW + safezoneX";
			y="-0.302687 * safezoneH + safezoneY";
			w="1.63854 * safezoneW";
			h="2.06719 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_GunshipCallForFire\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_gcff_bttn_enableControls_2: cw_5liner_gcff_button
		{
			idc=1606;
			x="-0.571354 * safezoneW + safezoneX";
			y="0.994807 * safezoneH + safezoneY";
			w="1.63854 * safezoneW";
			h="2.06719 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_GunshipCallForFire\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cwgcff_bttn_enableControls_3: cw_5liner_gcff_button
		{
			idc=1607;
			x="-3.01771 * safezoneW + safezoneX";
			y="-0.258705 * safezoneH + safezoneY";
			w="3.025 * safezoneW";
			h="2.08919 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_GunshipCallForFire\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_gcff_in_bttn_enableControls_4: cw_5liner_gcff_button
		{
			idc=1608;
			x="-0.456771 * safezoneW + safezoneX";
			y="-1.77611 * safezoneH + safezoneY";
			w="1.63854 * safezoneW";
			h="2.06719 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_GunshipCallForFire\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
	};
};
class cw_cas_check_in_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_cas_check_in_edit
{
	access=0;
	type=2;
	style=528;
	x=0;
	y=0;
	h=0.040000;
	w=0.200000;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorSelection[]={0,0,0,0.250000};
	colorDisabled[]={0,0,0,0};
	font="TahomaB";
	sizeEx="0.015 / (getResolution select 5)";
	autocomplete="";
	text="";
	size=0.200000;
	shadow=1;
};
class cw_cas_check_in_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_CAS_CHECK_IN
{
	idd=-1;
	movingenable="true";
	class Controls
	{
		class cw_cas_checkIn_background: cw_cas_check_in_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_CAS_Check_In\Images\cas_check_in.paa";
			x="-0.0843753 * safezoneW + safezoneX";
			y="0.225107 * safezoneH + safezoneY";
			w="0.492708 * safezoneW";
			h="0.802687 * safezoneH";
			moving=1;
		};
		class cw_cas_checkIn_bttn_previousPage: cw_cas_check_in_button
		{
			idc=1600;
			x="0.0130208 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_cas_check_in_fnc_previousPage";
		};
		class cw_cas_checkIn_bttn_nextPage: cw_cas_check_in_button
		{
			idc=1601;
			x="0.276563 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_cas_check_in_fnc_nextPage";
		};
		class cw_cas_checkIn_clearPage: cw_cas_check_in_button
		{
			idc=1602;
			x="0.053125 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_cas_check_in_fnc_clearPage";
		};
		class cw_cas_checkIn_bttn_save: cw_cas_check_in_button
		{
			idc=1603;
			x="0.144792 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_cas_check_in_fnc_savePage";
		};
		class cw_cas_checkIn_bttn_clearAll: cw_cas_check_in_button
		{
			idc=1604;
			x="0.196354 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0329871 * safezoneH";
			action="call cw_cas_check_in_fnc_clearall";
		};
		class cw_cas_checkIn_line0_1: cw_cas_check_in_edit
		{
			idc=1400;
			x="0.0588542 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.0916667 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_checkIn_line0_2: cw_cas_check_in_edit
		{
			idc=1401;
			x="0.179167 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.103125 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_checkIn_line1: cw_cas_check_in_edit
		{
			idc=1402;
			x="0.144792 * safezoneW + safezoneX";
			y="0.476009 * safezoneH + safezoneY";
			w="0.143229 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_checkIn_line2: cw_cas_check_in_edit
		{
			idc=1403;
			x="0.139062 * safezoneW + safezoneX";
			y="0.5045 * safezoneH + safezoneY";
			w="0.148958 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_checkIn_line3: cw_cas_check_in_edit
		{
			idc=1404;
			x="0.116146 * safezoneW + safezoneX";
			y="0.537987 * safezoneH + safezoneY";
			w="0.171875 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_checkIn_line4: cw_cas_check_in_edit
		{
			idc=1405;
			x="0.0760417 * safezoneW + safezoneX";
			y="0.570974 * safezoneH + safezoneY";
			w="0.211979 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_checkIn_line5: cw_cas_check_in_edit
		{
			idc=1406;
			x="0.0932292 * safezoneW + safezoneX";
			y="0.602961 * safezoneH + safezoneY";
			w="0.194792 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_checkIn_line6: cw_cas_check_in_edit
		{
			idc=1407;
			x="0.0416667 * safezoneW + safezoneX";
			y="0.647944 * safezoneH + safezoneY";
			w="0.246354 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_checkIn_line7: cw_cas_check_in_edit
		{
			idc=1408;
			x="0.0817708 * safezoneW + safezoneX";
			y="0.679931 * safezoneH + safezoneY";
			w="0.20625 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_cas_check_in_bttn_enableControls_1: cw_cas_check_in_button
		{
			idc=1605;
			x="0.316667 * safezoneW + safezoneX";
			y="-0.302687 * safezoneH + safezoneY";
			w="1.63854 * safezoneW";
			h="2.06719 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_CAS_Check_In\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_cas_check_in_bttn_enableControls_2: cw_cas_check_in_button
		{
			idc=1606;
			x="-0.571354 * safezoneW + safezoneX";
			y="0.994807 * safezoneH + safezoneY";
			w="1.63854 * safezoneW";
			h="2.06719 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_CAS_Check_In\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_cas_check_in_bttn_enableControls_3: cw_cas_check_in_button
		{
			idc=1607;
			x="-3.01771 * safezoneW + safezoneX";
			y="-0.258705 * safezoneH + safezoneY";
			w="3.025 * safezoneW";
			h="2.08919 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_CAS_Check_In\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_cas_check_in_bttn_enableControls_4: cw_cas_check_in_button
		{
			idc=1608;
			x="-0.456771 * safezoneW + safezoneX";
			y="-1.77611 * safezoneH + safezoneY";
			w="1.63854 * safezoneW";
			h="2.06719 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_CAS_Check_In\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
	};
};
class cw_targetlocationmethods_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_targetlocationmethods_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_TARGETLOCATIONMETHODS
{
	idd=-1;
	movingenable="true";
	class Controls
	{
		class cw_targetlocactionmehtods_background: cw_targetlocationmethods_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Images\targetlocationmethods.paa";
			x="-0.0614583 * safezoneW + safezoneX";
			y="0.236103 * safezoneH + safezoneY";
			w="0.429688 * safezoneW";
			h="0.758704 * safezoneH";
			moving=1;
		};
		class cw_targetlocationmethods_enableControls_1: cw_targetlocationmethods_button
		{
			idc=1600;
			x="0.29375 * safezoneW + safezoneX";
			y="-0.247708 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_targetlocationmethods_enableControls_2: cw_targetlocationmethods_button
		{
			idc=1601;
			x="-1.64271 * safezoneW + safezoneX";
			y="-0.148747 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_targetlocationmethods_3: cw_targetlocationmethods_button
		{
			idc=1602;
			x="-0.101562 * safezoneW + safezoneX";
			y="-2.44685 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_targetlocationmethods_4: cw_targetlocationmethods_button
		{
			idc=1603;
			x="-0.611458 * safezoneW + safezoneX";
			y="0.983811 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Scripts\createResource.sqf""";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
	};
};
class cw_ffe_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_ffe_edit
{
	access=0;
	type=2;
	style=528;
	x=0;
	y=0;
	h=0.040000;
	w=0.200000;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorSelection[]={0,0,0,0.250000};
	colorDisabled[]={0,0,0,0};
	font="TahomaB";
	sizeEx="0.015 / (getResolution select 5)";
	autocomplete="";
	text="";
	size=0.200000;
	shadow=1;
};
class cw_ffe_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_FIRE_FOR_EFFECT
{
	idd=-1;
	movingenable="true";
	class Controls
	{
		class cw_fire_for_effect_background: cw_ffe_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_FireForEffect\Images\fireforeffect.paa";
			x="-0.0614581 * safezoneW + safezoneX";
			y="0.236103 * safezoneH + safezoneY";
			w="0.423958 * safezoneW";
			h="0.758704 * safezoneH";
			moving=1;
		};
		class cw_fire_for_effect_enableControls_1: cw_ffe_button
		{
			idc=1600;
			x="0.29375 * safezoneW + safezoneX";
			y="-0.0277942 * safezoneH + safezoneY";
			w="1.75885 * safezoneW";
			h="2.562 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_FireForEffect\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_fire_for_effect_enableControls_2: cw_ffe_button
		{
			idc=1601;
			x="-1.64271 * safezoneW + safezoneX";
			y="-0.148747 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_FireForEffect\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_fire_for_effect_nableControls_3: cw_ffe_button
		{
			idc=1602;
			x="-0.101562 * safezoneW + safezoneX";
			y="-2.44685 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_FireForEffect\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_fire_for_effect_nableControls_4: cw_ffe_button
		{
			idc=1603;
			x="-0.611458 * safezoneW + safezoneX";
			y="0.983811 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_FireForEffect\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_ffe_edit_line0_1: cw_ffe_edit
		{
			idc=1400;
			x="0.01875 * safezoneW + safezoneX";
			y="0.300077 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line0_2: cw_ffe_edit
		{
			idc=1402;
			x="0.121875 * safezoneW + safezoneX";
			y="0.300077 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line1: cw_ffe_edit
		{
			idc=1401;
			x="0.0416667 * safezoneW + safezoneX";
			y="0.340064 * safezoneH + safezoneY";
			w="0.217708 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line2: cw_ffe_edit
		{
			idc=1403;
			x="0.104688 * safezoneW + safezoneX";
			y="0.381047 * safezoneH + safezoneY";
			w="0.0916667 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line3: cw_ffe_edit
		{
			idc=1404;
			x="0.0703125 * safezoneW + safezoneX";
			y="0.592966 * safezoneH + safezoneY";
			w="0.223438 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line4: cw_ffe_edit
		{
			idc=1405;
			x="0.116146 * safezoneW + safezoneX";
			y="0.620953 * safezoneH + safezoneY";
			w="0.143229 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line5: cw_ffe_edit
		{
			idc=1406;
			x="0.0989583 * safezoneW + safezoneX";
			y="0.642944 * safezoneH + safezoneY";
			w="0.148958 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line6: cw_ffe_edit
		{
			idc=1407;
			x="0.0817708 * safezoneW + safezoneX";
			y="0.669936 * safezoneH + safezoneY";
			w="0.20625 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line7: cw_ffe_edit
		{
			idc=1408;
			x="0.0760417 * safezoneW + safezoneX";
			y="0.697923 * safezoneH + safezoneY";
			w="0.171875 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line8: cw_ffe_edit
		{
			idc=1409;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.746906 * safezoneH + safezoneY";
			w="0.189062 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line9: cw_ffe_edit
		{
			idc=1410;
			x="0.0703125 * safezoneW + safezoneX";
			y="0.796884 * safezoneH + safezoneY";
			w="0.0458333 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line10: cw_ffe_edit
		{
			idc=1411;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.838867 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_edit_line11: cw_ffe_edit
		{
			idc=1412;
			x="0.0932292 * safezoneW + safezoneX";
			y="0.950824 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_ffe_ringle_1: cw_ffe_picture
		{
			idc=1201;
			text="";
			x="0.180896 * safezoneW + safezoneX";
			y="0.401039 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_ffe_ringle_2: cw_ffe_picture
		{
			idc=1202;
			text="";
			x="0.236458 * safezoneW + safezoneX";
			y="0.401039 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class vcw_ffe_ringle_3: cw_ffe_picture
		{
			idc=1203;
			text="";
			x="0.264833 * safezoneW + safezoneX";
			y="0.401039 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_ffe_ringle_4: cw_ffe_picture
		{
			idc=1204;
			text="";
			x="0.204813 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.0802083 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_ffe_ringle_5: cw_ffe_picture
		{
			idc=1205;
			text="";
			x="0.177167 * safezoneW + safezoneX";
			y="0.443021 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_ffe_ringle_6: cw_ffe_picture
		{
			idc=1206;
			text="";
			x="0.250646 * safezoneW + safezoneX";
			y="0.443021 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_ffe_ringle_7: cw_ffe_picture
		{
			idc=1207;
			text="";
			x="0.0416666 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_ffe_ringle_8: cw_ffe_picture
		{
			idc=1208;
			text="";
			x="0.110417 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0973958 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_ffe_bttn_ringle_1: cw_ffe_button
		{
			idc=1604;
			x="0.184896 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1201] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_2: cw_ffe_button
		{
			idc=1605;
			x="0.242188 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1202] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_3: cw_ffe_button
		{
			idc=1606;
			x="0.270833 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1203] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_3_2: cw_ffe_button
		{
			idc=1607;
			x="0.179167 * safezoneW + safezoneX";
			y="0.434026 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1203] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_4: cw_ffe_button
		{
			idc=1608;
			x="0.207813 * safezoneW + safezoneX";
			y="0.434026 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1204] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_5: cw_ffe_button
		{
			idc=1609;
			x="0.179167 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1205] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_6: cw_ffe_button
		{
			idc=1610;
			x="0.247917 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1206] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_6_2: cw_ffe_button
		{
			idc=1611;
			x="0.0130208 * safezoneW + safezoneX";
			y="0.478009 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1206] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_7: cw_ffe_button
		{
			idc=1612;
			x="0.0473958 * safezoneW + safezoneX";
			y="0.478009 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1207] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_8: cw_ffe_button
		{
			idc=1613;
			x="0.110417 * safezoneW + safezoneX";
			y="0.478009 * safezoneH + safezoneY";
			w="0.0916667 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1208] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_previousPage: cw_ffe_button
		{
			idc=1614;
			x="0.01875 * safezoneW + safezoneX";
			y="0.258094 * safezoneH + safezoneY";
			w="0.0401042 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_ffe_fnc_previousPage;";
		};
		class cw_ffe_bttn_nextPage: cw_ffe_button
		{
			idc=1615;
			x="0.242188 * safezoneW + safezoneX";
			y="0.258094 * safezoneH + safezoneY";
			w="0.0458333 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_ffe_fnc_nextPage;";
		};
		class cw_ffe_bttn_clearThis: cw_ffe_button
		{
			idc=1616;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_ffe_fnc_clearPage;";
		};
		class cw_ffe_bttn_save: cw_ffe_button
		{
			idc=1617;
			x="0.139062 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_ffe_fnc_savePage;";
		};
		class cw_ffe_bttn_clearAll: cw_ffe_button
		{
			idc=1618;
			x="0.184896 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_ffe_fnc_clearall;";
		};
	};
};
class cw_afm_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_afm_edit
{
	access=0;
	type=2;
	style=528;
	x=0;
	y=0;
	h=0.040000;
	w=0.200000;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorSelection[]={0,0,0,0.250000};
	colorDisabled[]={0,0,0,0};
	font="TahomaB";
	sizeEx="0.015 / (getResolution select 5)";
	autocomplete="";
	text="";
	size=0.200000;
	shadow=1;
};
class cw_afm_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_ADJUST_FIRE_MISSION
{
	idd=-1;
	movingenable="true";
	class Controls
	{
		class cw_adjustfiremission_background: cw_afm_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Images\adjustfiremission.paa";
			x="-0.0614583 * safezoneW + safezoneX";
			y="0.236103 * safezoneH + safezoneY";
			w="0.423958 * safezoneW";
			h="0.758704 * safezoneH";
			moving=1;
		};
		class cw_adjustfiremission_enableControls_1: cw_afm_button
		{
			idc=1600;
			x="0.29375 * safezoneW + safezoneX";
			y="-0.126756 * safezoneH + safezoneY";
			w="1.75885 * safezoneW";
			h="2.562 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_adjustfiremission_enableControls_2: cw_afm_button
		{
			idc=1601;
			x="-1.64271 * safezoneW + safezoneX";
			y="-0.148747 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_adjustfiremission_enableControls_3: cw_afm_button
		{
			idc=1602;
			x="-0.101562 * safezoneW + safezoneX";
			y="-2.44685 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_adjustfiremission_enableControls_4: cw_afm_button
		{
			idc=1603;
			x="-0.611458 * safezoneW + safezoneX";
			y="0.983811 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_afm_edit_line0_1: cw_afm_edit
		{
			idc=1400;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.302077 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line0_2: cw_afm_edit
		{
			idc=1402;
			x="0.15625 * safezoneW + safezoneX";
			y="0.302077 * safezoneH + safezoneY";
			w="0.0458333 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line1: cw_afm_edit
		{
			idc=1401;
			x="0.0416667 * safezoneW + safezoneX";
			y="0.339064 * safezoneH + safezoneY";
			w="0.217708 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line2: cw_afm_edit
		{
			idc=1403;
			x="0.104688 * safezoneW + safezoneX";
			y="0.383047 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line3: cw_afm_edit
		{
			idc=1404;
			x="0.0703125 * safezoneW + safezoneX";
			y="0.605961 * safezoneH + safezoneY";
			w="0.0973958 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line4: cw_afm_edit
		{
			idc=1405;
			x="0.116146 * safezoneW + safezoneX";
			y="0.635948 * safezoneH + safezoneY";
			w="0.131771 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line5: cw_afm_edit
		{
			idc=1406;
			x="0.0989583 * safezoneW + safezoneX";
			y="0.65794 * safezoneH + safezoneY";
			w="0.1375 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line6: cw_afm_edit
		{
			idc=1407;
			x="0.0817708 * safezoneW + safezoneX";
			y="0.678931 * safezoneH + safezoneY";
			w="0.200521 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line7: cw_afm_edit
		{
			idc=1408;
			x="0.0760417 * safezoneW + safezoneX";
			y="0.701923 * safezoneH + safezoneY";
			w="0.160417 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line8: cw_afm_edit
		{
			idc=1409;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.752901 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line9: cw_afm_edit
		{
			idc=1410;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.80788 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line10: cw_afm_edit
		{
			idc=1411;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.846867 * safezoneH + safezoneY";
			w="0.0458333 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_edit_line11: cw_afm_edit
		{
			idc=1412;
			x="0.0932292 * safezoneW + safezoneX";
			y="0.945828 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_afm_ringle_1: cw_afm_picture
		{
			idc=1201;
			text="";
			x="0.167708 * safezoneW + safezoneX";
			y="0.408039 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_afm_ringle_2: cw_afm_picture
		{
			idc=1202;
			text="";
			x="0.225 * safezoneW + safezoneX";
			y="0.408039 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class vcw_afm_ringle_3: cw_afm_picture
		{
			idc=1203;
			text="";
			x="0.254375 * safezoneW + safezoneX";
			y="0.408039 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_afm_ringle_4: cw_afm_picture
		{
			idc=1204;
			text="";
			x="0.190625 * safezoneW + safezoneX";
			y="0.42303 * safezoneH + safezoneY";
			w="0.0802083 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_afm_ringle_5: cw_afm_picture
		{
			idc=1205;
			text="";
			x="0.179167 * safezoneW + safezoneX";
			y="0.450017 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_afm_ringle_6: cw_afm_picture
		{
			idc=1206;
			text="";
			x="0.253646 * safezoneW + safezoneX";
			y="0.450017 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_afm_ringle_7: cw_afm_picture
		{
			idc=1207;
			text="";
			x="0.0588542 * safezoneW + safezoneX";
			y="0.467013 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_afm_ringle_8: cw_afm_picture
		{
			idc=1208;
			text="";
			x="0.127604 * safezoneW + safezoneX";
			y="0.464013 * safezoneH + safezoneY";
			w="0.103125 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_afm_bttn_ringle_1: cw_afm_button
		{
			idc=1604;
			x="0.167708 * safezoneW + safezoneX";
			y="0.42303 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1201] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_2: cw_afm_button
		{
			idc=1605;
			x="0.230729 * safezoneW + safezoneX";
			y="0.42303 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1202] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_3: cw_afm_button
		{
			idc=1606;
			x="0.259375 * safezoneW + safezoneX";
			y="0.42303 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1203] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_3_2: cw_afm_button
		{
			idc=1607;
			x="0.161979 * safezoneW + safezoneX";
			y="0.445021 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1203] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_4: cw_afm_button
		{
			idc=1608;
			x="0.196354 * safezoneW + safezoneX";
			y="0.445021 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1204] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_5: cw_afm_button
		{
			idc=1609;
			x="0.184896 * safezoneW + safezoneX";
			y="0.467013 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1205] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_6: cw_afm_button
		{
			idc=1610;
			x="0.259375 * safezoneW + safezoneX";
			y="0.467013 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1206] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_6_2: cw_afm_button
		{
			idc=1611;
			x="0.01875 * safezoneW + safezoneX";
			y="0.489004 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1206] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_7: cw_afm_button
		{
			idc=1612;
			x="0.0588542 * safezoneW + safezoneX";
			y="0.489004 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1207] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_ringle_8: cw_afm_button
		{
			idc=1613;
			x="0.133333 * safezoneW + safezoneX";
			y="0.489004 * safezoneH + safezoneY";
			w="0.0916667 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1208] call cw_afm_fnc_show_or_hide_ringle;";
		};
		class cw_afm_bttn_previousPage: cw_afm_button
		{
			idc=1614;
			x="0.01875 * safezoneW + safezoneX";
			y="0.258094 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_afm_fnc_previousPage;";
		};
		class cw_afm_bttn_nextPage: cw_afm_button
		{
			idc=1615;
			x="0.253646 * safezoneW + safezoneX";
			y="0.258094 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_afm_fnc_nextPage;";
		};
		class cw_afm_bttn_clearThis: cw_afm_button
		{
			idc=1616;
			x="0.0588542 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_afm_fnc_clearPage;";
		};
		class cw_afm_bttn_save: cw_afm_button
		{
			idc=1617;
			x="0.139062 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_afm_fnc_savePage;";
		};
		class cw_afm_bttn_clearAll: cw_afm_button
		{
			idc=1618;
			x="0.196354 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_afm_fnc_clearall;";
		};
	};
};
class cw_mm_button
{
	access=0;
	type=1;
	text="";
	colorText[]={1,1,1,1};
	colorDisabled[]={0,0,0,0};
	colorBackground[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	colorBackgroundActive[]={0,0,0,0};
	colorFocused[]={0,0,0,0};
	colorShadow[]={0,0,0,0};
	colorBorder[]={0,0,0,0};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.090000,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.090000,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.090000,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.090000,
		1
	};
	style=2;
	x=0;
	y=0;
	w=0.095589;
	h=0.039216;
	shadow=0;
	font="puristaMedium";
	sizeEx=0.039210;
	offsetX=0.003000;
	offsetY=0.003000;
	offsetPressedX=0.002000;
	offsetPressedY=0.002000;
	borderSize=0;
};
class cw_mm_edit
{
	access=0;
	type=2;
	style=528;
	x=0;
	y=0;
	h=0.040000;
	w=0.200000;
	colorBackground[]={0,0,0,0};
	colorText[]={0,0,0,1};
	colorSelection[]={0,0,0,0.250000};
	colorDisabled[]={0,0,0,0};
	font="TahomaB";
	sizeEx="0.015 / (getResolution select 5)";
	autocomplete="";
	text="";
	size=0.200000;
	shadow=1;
};
class cw_mm_picture
{
	access=0;
	type=0;
	idc=-1;
	style=48;
	colorBackground[]={0,0,0,0};
	colorText[]={1,1,1,1};
	font="TahomaB";
	sizeEx=0;
	lineSpacing=0;
	text="";
	fixedWidth=0;
	shadow=0;
	x=0;
	y=0;
	w=0.200000;
	h=0.150000;
};
class CW_MARKING_MISSION
{
	idd=-1;
	movingenable="true";
	class Controls
	{
		class cw_mm_background: cw_mm_picture
		{
			idc=1200;
			text="\cw_nineliner_and_notepad\Data\CW_MarkingMission\Images\markingmission.paa";
			x="-0.0614583 * safezoneW + safezoneX";
			y="0.236103 * safezoneH + safezoneY";
			w="0.423958 * safezoneW";
			h="0.758704 * safezoneH";
			moving=1;
		};
		class cw_mm_enableControls_1: cw_mm_button
		{
			idc=1600;
			x="0.29375 * safezoneW + safezoneX";
			y="-0.126756 * safezoneH + safezoneY";
			w="1.75885 * safezoneW";
			h="2.562 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_MarkingMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_mm_enableControls_2: cw_mm_button
		{
			idc=1601;
			x="-1.64271 * safezoneW + safezoneX";
			y="-0.148747 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_MarkingMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_mm_enableControls_3: cw_mm_button
		{
			idc=1602;
			x="-0.101562 * safezoneW + safezoneX";
			y="-2.44685 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_MarkingMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_mm_enableControls_4: cw_mm_button
		{
			idc=1603;
			x="-0.611458 * safezoneW + safezoneX";
			y="0.983811 * safezoneH + safezoneY";
			w="1.65573 * safezoneW";
			h="2.69395 * safezoneH";
			onMouseButtonClick="execVM ""\cw_nineliner_and_notepad\Data\CW_MarkingMission\Scripts\createResource.sqf"";";
			onMouseButtonDblClick="closeDialog 0;";
			tooltip="CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[]={1,0,0,1};
		};
		class cw_mm_edit_line0_1: cw_mm_edit
		{
			idc=1400;
			x="0.01875 * safezoneW + safezoneX";
			y="0.307077 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_mm_edit_line0_2: cw_mm_edit
		{
			idc=1402;
			x="0.116146 * safezoneW + safezoneX";
			y="0.307077 * safezoneH + safezoneY";
			w="0.0630208 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_mm_edit_line1: cw_mm_edit
		{
			idc=1401;
			x="0.0416667 * safezoneW + safezoneX";
			y="0.357056 * safezoneH + safezoneY";
			w="0.194792 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_mm_edit_line2: cw_mm_edit
		{
			idc=1403;
			x="0.0703125 * safezoneW + safezoneX";
			y="0.636948 * safezoneH + safezoneY";
			w="0.177604 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_mm_edit_line3: cw_mm_edit
		{
			idc=1404;
			x="0.121146 * safezoneW + safezoneX";
			y="0.667936 * safezoneH + safezoneY";
			w="0.126042 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_mm_edit_line4: cw_mm_edit
		{
			idc=1405;
			x="0.0989583 * safezoneW + safezoneX";
			y="0.701923 * safezoneH + safezoneY";
			w="0.183333 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_mm_edit_line5: cw_mm_edit
		{
			idc=1406;
			x="0.0817708 * safezoneW + safezoneX";
			y="0.73391 * safezoneH + safezoneY";
			w="0.154687 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_mm_edit_line6: cw_mm_edit
		{
			idc=1407;
			x="0.0760417 * safezoneW + safezoneX";
			y="0.765897 * safezoneH + safezoneY";
			w="0.20625 * safezoneW";
			h="0.0219914 * safezoneH";
		};
		class cw_mm_ringle_1: cw_mm_picture
		{
			idc=1201;
			x="0.0130208 * safezoneW + safezoneX";
			y="0.379047 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_mm_ringle_2: cw_mm_picture
		{
			idc=1202;
			x="0.0416667 * safezoneW + safezoneX";
			y="0.379047 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.07697 * safezoneH";
		};
		class cw_mm_ringle_3: cw_mm_picture
		{
			idc=1203;
			x="0.0645833 * safezoneW + safezoneX";
			y="0.368051 * safezoneH + safezoneY";
			w="0.0802083 * safezoneW";
			h="0.07697 * safezoneH";
		};
		class cw_mm_ringle_4: cw_mm_picture
		{
			idc=1204;
			text="";
			x="0.139062 * safezoneW + safezoneX";
			y="0.379047 * safezoneH + safezoneY";
			w="0.114583 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_mm_bttn_ringle_1: cw_mm_button
		{
			idc=1604;
			x="0.01875 * safezoneW + safezoneX";
			y="0.401039 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1201] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_2: cw_mm_button
		{
			idc=1605;
			x="0.0473958 * safezoneW + safezoneX";
			y="0.401039 * safezoneH + safezoneY";
			w="0.0171875 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1202] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_3: cw_mm_button
		{
			idc=1606;
			x="0.0703125 * safezoneW + safezoneX";
			y="0.401039 * safezoneH + safezoneY";
			w="0.0744792 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1203] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_4: cw_mm_button
		{
			idc=1608;
			x="0.144792 * safezoneW + safezoneX";
			y="0.401039 * safezoneH + safezoneY";
			w="0.103125 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1204] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_5: cw_mm_button
		{
			idc=1609;
			x="0.167708 * safezoneW + safezoneX";
			y="0.434026 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1205] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_previousPage: cw_mm_button
		{
			idc=1614;
			x="0.01875 * safezoneW + safezoneX";
			y="0.258094 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_mm_fnc_previousPage;";
		};
		class cw_mm_bttn_nextPage: cw_mm_button
		{
			idc=1615;
			x="0.253646 * safezoneW + safezoneX";
			y="0.258094 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_mm_fnc_nextPage;";
		};
		class cw_mm_bttn_clearThis: cw_mm_button
		{
			idc=1616;
			x="0.0588542 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_mm_fnc_clearPage;";
		};
		class cw_mm_bttn_save: cw_mm_button
		{
			idc=1617;
			x="0.139062 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_mm_fnc_savePage;";
		};
		class cw_mm_bttn_clearAll: cw_mm_button
		{
			idc=1618;
			x="0.196354 * safezoneW + safezoneX";
			y="0.26909 * safezoneH + safezoneY";
			w="0.0515625 * safezoneW";
			h="0.0219914 * safezoneH";
			action="call cw_mm_fnc_clearall;";
		};
		class cw_mm_ringle_5: cw_mm_picture
		{
			idc=1205;
			x="0.161979 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_mm_ringle_6: cw_mm_picture
		{
			idc=1206;
			x="0.225 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_mm_ringle_7: cw_mm_picture
		{
			idc=1207;
			x="0.247917 * safezoneW + safezoneX";
			y="0.412034 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_mm_ringle_8: cw_mm_picture
		{
			idc=1208;
			x="0.190625 * safezoneW + safezoneX";
			y="0.434026 * safezoneH + safezoneY";
			w="0.0802083 * safezoneW";
			h="0.0659743 * safezoneH";
		};
		class cw_mm_ringle_9: cw_mm_picture
		{
			idc=1209;
			x="0.179167 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.07697 * safezoneH";
		};
		class cw_mm_ringle_10: cw_mm_picture
		{
			idc=1210;
			x="0.247917 * safezoneW + safezoneX";
			y="0.467013 * safezoneH + safezoneY";
			w="0.0401042 * safezoneW";
			h="0.0549786 * safezoneH";
		};
		class cw_mm_ringle_11: cw_mm_picture
		{
			idc=1211;
			x="0.0416667 * safezoneW + safezoneX";
			y="0.478009 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.07697 * safezoneH";
		};
		class cw_mm_ringle_12: cw_mm_picture
		{
			idc=1212;
			x="0.104688 * safezoneW + safezoneX";
			y="0.478009 * safezoneH + safezoneY";
			w="0.103125 * safezoneW";
			h="0.07697 * safezoneH";
		};
		class cw_mm_bttn_ringle_6: cw_mm_button
		{
			idc=1607;
			x="0.230729 * safezoneW + safezoneX";
			y="0.434026 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1206] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_7: cw_mm_button
		{
			idc=1610;
			x="0.253646 * safezoneW + safezoneX";
			y="0.434026 * safezoneH + safezoneY";
			w="0.0229167 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1207] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_7_2: cw_mm_button
		{
			idc=1611;
			x="0.161979 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1207] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_8: cw_mm_button
		{
			idc=1612;
			x="0.196354 * safezoneW + safezoneX";
			y="0.456017 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1208] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_9: cw_mm_button
		{
			idc=1613;
			x="0.179167 * safezoneW + safezoneX";
			y="0.489004 * safezoneH + safezoneY";
			w="0.06875 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1209] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_10: cw_mm_button
		{
			idc=1619;
			x="0.253646 * safezoneW + safezoneX";
			y="0.489004 * safezoneH + safezoneY";
			w="0.034375 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1210] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_10_2: cw_mm_button
		{
			idc=1620;
			x="0.0130208 * safezoneW + safezoneX";
			y="0.5 * safezoneH + safezoneY";
			w="0.0286458 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1210] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_11: cw_mm_button
		{
			idc=1621;
			x="0.0473958 * safezoneW + safezoneX";
			y="0.5 * safezoneH + safezoneY";
			w="0.0572917 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1211] call cw_mm_fnc_show_or_hide_ringle;";
		};
		class cw_mm_bttn_ringle_12: cw_mm_button
		{
			idc=1622;
			x="0.110417 * safezoneW + safezoneX";
			y="0.5 * safezoneH + safezoneY";
			w="0.0916667 * safezoneW";
			h="0.0219914 * safezoneH";
			action="[1212] call cw_mm_fnc_show_or_hide_ringle;";
		};
	};
};
class RscTitles
{
	titles[]=
	{
		"CW_TARGETLOCATIONMETHODS_RESOURCE",
		"CW_9LINER_CAS_RESOURCE",
		"CW_9LINER_MEDEVAC_RESOURCE",
		"CW_ADJUST_FIRE_MISSION_RESOURCE",
		"CW_CAS_CHECK_IN_RESOURCE",
		"CW_NOTEBLOCK_RESOURCE",
		"CW_GUNSHIP_CALL_FOR_FIRE_RESOURCE",
		"CW_MARKING_MISSION_RESOURCE",
		"CW_FIRE_FOR_EFFECT_RESOURCE"
	};
	class CW_9LINER_CAS_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_cas_9liner_resource', nil];hint """"";
		duration=0.100000;
		fadein=0;
		name="CW_9LINER_CAS_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_cas_9liner_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";
		class Controls
		{
			class cw_9liner_cas_background: cw_9liner_cas_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_9Liner_CAS\Images\9liner_cas.paa";
				x="-0.0786458 * safezoneW + safezoneX";
				y="0.26909 * safezoneH + safezoneY";
				w="0.452604 * safezoneW";
				h="0.725717 * safezoneH";
				moving=1;
			};
			class cw_9liner_cas_line0_1: cw_9liner_cas_edit
			{
				idc=1400;
				x="0.121875 * safezoneW + safezoneX";
				y="0.362056 * safezoneH + safezoneY";
				w="0.0802083 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line0_2: cw_9liner_cas_edit
			{
				idc=1401;
				x="0.225 * safezoneW + safezoneX";
				y="0.362056 * safezoneH + safezoneY";
				w="0.0630208 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line1: cw_9liner_cas_edit
			{
				idc=1402;
				x="0.0989583 * safezoneW + safezoneX";
				y="0.413034 * safezoneH + safezoneY";
				w="0.189062 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line2: cw_9liner_cas_edit
			{
				idc=1403;
				x="0.104688 * safezoneW + safezoneX";
				y="0.434026 * safezoneH + safezoneY";
				w="0.148958 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line2_2: cw_9liner_cas_edit
			{
				idc=1404;
				x="0.0989583 * safezoneW + safezoneX";
				y="0.471013 * safezoneH + safezoneY";
				w="0.154687 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line3: cw_9liner_cas_edit
			{
				idc=1405;
				x="0.104688 * safezoneW + safezoneX";
				y="0.489004 * safezoneH + safezoneY";
				w="0.183333 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line4: cw_9liner_cas_edit
			{
				idc=1406;
				x="0.127604 * safezoneW + safezoneX";
				y="0.521991 * safezoneH + safezoneY";
				w="0.120313 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line5: cw_9liner_cas_edit
			{
				idc=1407;
				x="0.133333 * safezoneW + safezoneX";
				y="0.542983 * safezoneH + safezoneY";
				w="0.154687 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line6: cw_9liner_cas_edit
			{
				idc=1408;
				x="0.127604 * safezoneW + safezoneX";
				y="0.570974 * safezoneH + safezoneY";
				w="0.160417 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line7_1: cw_9liner_cas_edit
			{
				idc=1409;
				x="0.110417 * safezoneW + safezoneX";
				y="0.622953 * safezoneH + safezoneY";
				w="0.0859375 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line7_2: cw_9liner_cas_edit
			{
				idc=1410;
				x="0.225 * safezoneW + safezoneX";
				y="0.622953 * safezoneH + safezoneY";
				w="0.0630208 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line7_3: cw_9liner_cas_edit
			{
				idc=1411;
				x="0.133333 * safezoneW + safezoneX";
				y="0.65594 * safezoneH + safezoneY";
				w="0.0630208 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line8: cw_9liner_cas_edit
			{
				idc=1412;
				x="0.150521 * safezoneW + safezoneX";
				y="0.677931 * safezoneH + safezoneY";
				w="0.1375 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line8_2: cw_9liner_cas_edit
			{
				idc=1413;
				x="0.139062 * safezoneW + safezoneX";
				y="0.697923 * safezoneH + safezoneY";
				w="0.148958 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line9: cw_9liner_cas_edit
			{
				idc=1414;
				x="0.104688 * safezoneW + safezoneX";
				y="0.73191 * safezoneH + safezoneY";
				w="0.183333 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line10: cw_9liner_cas_edit
			{
				idc=1415;
				x="0.0817708 * safezoneW + safezoneX";
				y="0.777893 * safezoneH + safezoneY";
				w="0.20625 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line11: cw_9liner_cas_edit
			{
				idc=1416;
				x="0.150521 * safezoneW + safezoneX";
				y="0.8098 * safezoneH + safezoneY";
				w="0.1375 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line12: cw_9liner_cas_edit
			{
				idc=1417;
				x="0.133333 * safezoneW + safezoneX";
				y="0.919837 * safezoneH + safezoneY";
				w="0.120313 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line13_1: cw_9liner_cas_edit
			{
				idc=1418;
				x="0.15625 * safezoneW + safezoneX";
				y="0.950824 * safezoneH + safezoneY";
				w="0.034375 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_cas_line13_2: cw_9liner_cas_edit
			{
				idc=1419;
				x="0.207813 * safezoneW + safezoneX";
				y="0.950824 * safezoneH + safezoneY";
				w="0.034375 * safezoneW";
				h="0.0219914 * safezoneH";
			};
		};
	};
	class CW_TARGETLOCATIONMETHODS_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_tlm_resource', nil];hint """"";
		duration=0.100000;
		fadein=0;
		name="CW_TARGETLOCATIONMETHODS_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_tlm_resource', _this select 0];";
		class Controls
		{
			class cw_targetlocactionmehtods_background: cw_targetlocationmethods_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Images\targetlocationmethods.paa";
				x="-0.0614583 * safezoneW + safezoneX";
				y="0.236103 * safezoneH + safezoneY";
				w="0.429688 * safezoneW";
				h="0.758704 * safezoneH";
			};
		};
	};
	class CW_9LINER_MEDEVAC_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_9liner_medv_resource', nil];hint """"";
		duration=1;
		fadein=0;
		name="CW_9LINER_MEDEVAC_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_9liner_medv_resource', _this select 0];";
		class Controls
		{
			class cw_9liner_medv_background: cw_9liner_medv_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Images\9liner_medevac.paa";
				x="-0.0213542 * safezoneW + safezoneX";
				y="0.247099 * safezoneH + safezoneY";
				w="0.4125 * safezoneW";
				h="0.747708 * safezoneH";
				moving=1;
			};
			class cw_9liner_medevac_edit_line1: cw_9liner_medv_edit
			{
				idc=1400;
				x="0.144792 * safezoneW + safezoneX";
				y="0.34606 * safezoneH + safezoneY";
				w="0.189062 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medevac_edit_line2: cw_9liner_medv_edit
			{
				idc=1401;
				x="0.173438 * safezoneW + safezoneX";
				y="0.390043 * safezoneH + safezoneY";
				w="0.160417 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medevac_edit_line3: cw_9liner_medv_edit
			{
				idc=1402;
				x="0.161979 * safezoneW + safezoneX";
				y="0.434026 * safezoneH + safezoneY";
				w="0.171875 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medevac_edit_line4: cw_9liner_medv_edit
			{
				idc=1403;
				x="0.144792 * safezoneW + safezoneX";
				y="0.489004 * safezoneH + safezoneY";
				w="0.189062 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medevac_edit_line5: cw_9liner_medv_edit
			{
				idc=1404;
				x="0.121875 * safezoneW + safezoneX";
				y="0.554979 * safezoneH + safezoneY";
				w="0.20625 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medevac_edit_line6: cw_9liner_medv_edit
			{
				idc=1405;
				x="0.133333 * safezoneW + safezoneX";
				y="0.620953 * safezoneH + safezoneY";
				w="0.200521 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medevac_edit_line7: cw_9liner_medv_edit
			{
				idc=1406;
				x="0.15625 * safezoneW + safezoneX";
				y="0.719914 * safezoneH + safezoneY";
				w="0.177604 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medevac_edit_line8: cw_9liner_medv_edit
			{
				idc=1407;
				x="0.150521 * safezoneW + safezoneX";
				y="0.785888 * safezoneH + safezoneY";
				w="0.183333 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medv_edit_1408: cw_9liner_medv_edit
			{
				idc=1408;
				x="0.127604 * safezoneW + safezoneX";
				y="0.840867 * safezoneH + safezoneY";
				w="0.200521 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_9liner_medevac_edit_line3_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc=2800;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.456017 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line3_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc=2801;
				x="0.104688 * safezoneW + safezoneX";
				y="0.456017 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line3_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc=2802;
				x="0.173438 * safezoneW + safezoneX";
				y="0.456017 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line3_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc=2803;
				x="0.219271 * safezoneW + safezoneX";
				y="0.456017 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line3_cross_picture5: cw_9liner_medv_picture_cross
			{
				idc=2804;
				x="0.270833 * safezoneW + safezoneX";
				y="0.456017 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line4_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc=2805;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.510996 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line4_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc=2806;
				x="0.121875 * safezoneW + safezoneX";
				y="0.510996 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line4_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc=2807;
				x="0.179167 * safezoneW + safezoneX";
				y="0.510996 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line4_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc=2808;
				x="0.276563 * safezoneW + safezoneX";
				y="0.510996 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line5_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc=2809;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.57697 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line5_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc=2810;
				x="0.116146 * safezoneW + safezoneX";
				y="0.57697 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line6_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc=2811;
				x="0.0588542 * safezoneW + safezoneX";
				y="0.65394 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line6_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc=2812;
				x="0.110417 * safezoneW + safezoneX";
				y="0.65394 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line6_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc=2813;
				x="0.173438 * safezoneW + safezoneX";
				y="0.65394 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line6_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc=2814;
				x="0.247917 * safezoneW + safezoneX";
				y="0.65394 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line7_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc=2815;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.741906 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line7_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc=2816;
				x="0.104688 * safezoneW + safezoneX";
				y="0.741906 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line7_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc=2817;
				x="0.179167 * safezoneW + safezoneX";
				y="0.741906 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line7_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc=2818;
				x="0.242188 * safezoneW + safezoneX";
				y="0.741906 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line7_cross_picture5: cw_9liner_medv_picture_cross
			{
				idc=2819;
				x="0.29375 * safezoneW + safezoneX";
				y="0.741906 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line8_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc=2820;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.796884 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line8_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc=2821;
				x="0.110417 * safezoneW + safezoneX";
				y="0.796884 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line8_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc=2822;
				x="0.161979 * safezoneW + safezoneX";
				y="0.796884 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line8_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc=2823;
				x="0.225 * safezoneW + safezoneX";
				y="0.796884 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line8_cross_picture5: cw_9liner_medv_picture_cross
			{
				idc=2824;
				x="0.29375 * safezoneW + safezoneX";
				y="0.796884 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line9_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc=2825;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.88485 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line9_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc=2826;
				x="0.110417 * safezoneW + safezoneX";
				y="0.88485 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
			class cw_9liner_medevac_edit_line9_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc=2827;
				x="0.161979 * safezoneW + safezoneX";
				y="0.88485 * safezoneH + safezoneY";
				w="0.0171875 * safezoneW";
				h="0.0329871 * safezoneH";
			};
		};
	};
	class CW_CAS_CHECK_IN_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_cas_check_in_resource', nil];hint """"";
		duration=0.100000;
		fadein=0;
		name="CW_CAS_CHECK_IN_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_cas_check_in_resource', _this select 0];";
		class Controls
		{
			class cw_cas_checkIn_background: cw_cas_check_in_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_CAS_Check_In\Images\cas_check_in.paa";
				x="-0.0843753 * safezoneW + safezoneX";
				y="0.225107 * safezoneH + safezoneY";
				w="0.492708 * safezoneW";
				h="0.802687 * safezoneH";
			};
			class cw_cas_checkIn_line0_1: cw_cas_check_in_edit
			{
				idc=1400;
				x="0.0588542 * safezoneW + safezoneX";
				y="0.412034 * safezoneH + safezoneY";
				w="0.0916667 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_cas_checkIn_line0_2: cw_cas_check_in_edit
			{
				idc=1401;
				x="0.179167 * safezoneW + safezoneX";
				y="0.412034 * safezoneH + safezoneY";
				w="0.103125 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_cas_checkIn_line1: cw_cas_check_in_edit
			{
				idc=1402;
				x="0.144792 * safezoneW + safezoneX";
				y="0.476009 * safezoneH + safezoneY";
				w="0.143229 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_cas_checkIn_line2: cw_cas_check_in_edit
			{
				idc=1403;
				x="0.139062 * safezoneW + safezoneX";
				y="0.5045 * safezoneH + safezoneY";
				w="0.148958 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_cas_checkIn_line3: cw_cas_check_in_edit
			{
				idc=1404;
				x="0.116146 * safezoneW + safezoneX";
				y="0.537987 * safezoneH + safezoneY";
				w="0.171875 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_cas_checkIn_line4: cw_cas_check_in_edit
			{
				idc=1405;
				x="0.0760417 * safezoneW + safezoneX";
				y="0.570974 * safezoneH + safezoneY";
				w="0.211979 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_cas_checkIn_line5: cw_cas_check_in_edit
			{
				idc=1406;
				x="0.0932292 * safezoneW + safezoneX";
				y="0.602961 * safezoneH + safezoneY";
				w="0.194792 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_cas_checkIn_line6: cw_cas_check_in_edit
			{
				idc=1407;
				x="0.0416667 * safezoneW + safezoneX";
				y="0.647944 * safezoneH + safezoneY";
				w="0.246354 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_cas_checkIn_line7: cw_cas_check_in_edit
			{
				idc=1408;
				x="0.0817708 * safezoneW + safezoneX";
				y="0.679931 * safezoneH + safezoneY";
				w="0.20625 * safezoneW";
				h="0.0219914 * safezoneH";
			};
		};
	};
	class CW_GUNSHIP_CALL_FOR_FIRE_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_5liner_gcff_resource', nil];hint """"";
		duration=0.100000;
		fadein=0;
		name="CW_GUNSHIP_CALL_FOR_FIRE_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_5liner_gcff_resource', _this select 0];";
		class Controls
		{
			class cw_gcff_background: cw_5liner_gcff_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_GunshipCallForFire\Images\gunshipcallforfire.paa";
				x="-0.0843753 * safezoneW + safezoneX";
				y="0.225107 * safezoneH + safezoneY";
				w="0.492708 * safezoneW";
				h="0.802687 * safezoneH";
				moving=1;
			};
			class cw_gcff_line1_1: cw_5liner_gcff_edit
			{
				idc=1400;
				x="0.139062 * safezoneW + safezoneX";
				y="0.384047 * safezoneH + safezoneY";
				w="0.0515625 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_gcff_line1_2: cw_5liner_gcff_edit
			{
				idc=1401;
				x="0.225 * safezoneW + safezoneX";
				y="0.384047 * safezoneH + safezoneY";
				w="0.0515625 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_gcff_line2_1: cw_5liner_gcff_edit
			{
				idc=1402;
				x="0.190625 * safezoneW + safezoneX";
				y="0.439026 * safezoneH + safezoneY";
				w="0.0802083 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_gcff_line2_2: cw_5liner_gcff_edit
			{
				idc=1403;
				x="0.0703121 * safezoneW + safezoneX";
				y="0.472013 * safezoneH + safezoneY";
				w="0.177604 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_gcff_line3_1: cw_5liner_gcff_edit
			{
				idc=1404;
				x="0.104688 * safezoneW + safezoneX";
				y="0.505 * safezoneH + safezoneY";
				w="0.131771 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_gcff_line4_1: cw_5liner_gcff_edit
			{
				idc=1405;
				x="0.184896 * safezoneW + safezoneX";
				y="0.538987 * safezoneH + safezoneY";
				w="0.0401042 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_gcff_line5_1: cw_5liner_gcff_edit
			{
				idc=1406;
				x="0.0760417 * safezoneW + safezoneX";
				y="0.570974 * safezoneH + safezoneY";
				w="0.154687 * safezoneW";
				h="0.0219914 * safezoneH";
			};
		};
	};
	class CW_NOTEBLOCK_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_noteblock_resource', nil];hint """"";
		duration=0.100000;
		fadein=0;
		name="CW_NOTEBLOCK_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_noteblock_resource', _this select 0];";
		class Controls
		{
			class cw_noteblock_background: cw_noteblock_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_Noteblock\Images\noteblock.paa";
				x="-0.0557292 * safezoneW + safezoneX";
				y="0.26909 * safezoneH + safezoneY";
				w="0.48125 * safezoneW";
				h="0.747708 * safezoneH";
				moving=1;
			};
			class cw_noteblock_edit: cw_noteblock_edit
			{
				idc=1400;
				x="0.0416667 * safezoneW + safezoneX";
				y="0.307 * safezoneH + safezoneY";
				w="0.303646 * safezoneW";
				h="0.637751 * safezoneH";
			};
		};
	};
	class CW_FIRE_FOR_EFFECT_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_ffe_resource', nil];hint """"";
		duration=0.100000;
		fadein=0;
		name="CW_FIRE_FOR_EFFECT_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_ffe_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";
		class Controls
		{
			class cw_targetlocactionmehtods_background: cw_ffe_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_FireForEffect\Images\fireforeffect.paa";
				x="-0.0614581 * safezoneW + safezoneX";
				y="0.236103 * safezoneH + safezoneY";
				w="0.423958 * safezoneW";
				h="0.758704 * safezoneH";
			};
			class cw_ffe_edit_line0_1: cw_ffe_edit
			{
				idc=1400;
				x="0.01875 * safezoneW + safezoneX";
				y="0.300077 * safezoneH + safezoneY";
				w="0.0744792 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line0_2: cw_ffe_edit
			{
				idc=1402;
				x="0.121875 * safezoneW + safezoneX";
				y="0.300077 * safezoneH + safezoneY";
				w="0.0744792 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line1: cw_ffe_edit
			{
				idc=1401;
				x="0.0416667 * safezoneW + safezoneX";
				y="0.340064 * safezoneH + safezoneY";
				w="0.217708 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line2: cw_ffe_edit
			{
				idc=1403;
				x="0.104688 * safezoneW + safezoneX";
				y="0.381047 * safezoneH + safezoneY";
				w="0.0916667 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line3: cw_ffe_edit
			{
				idc=1404;
				x="0.0703125 * safezoneW + safezoneX";
				y="0.592966 * safezoneH + safezoneY";
				w="0.223438 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line4: cw_ffe_edit
			{
				idc=1405;
				x="0.116146 * safezoneW + safezoneX";
				y="0.620953 * safezoneH + safezoneY";
				w="0.143229 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line5: cw_ffe_edit
			{
				idc=1406;
				x="0.0989583 * safezoneW + safezoneX";
				y="0.642944 * safezoneH + safezoneY";
				w="0.148958 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line6: cw_ffe_edit
			{
				idc=1407;
				x="0.0817708 * safezoneW + safezoneX";
				y="0.669936 * safezoneH + safezoneY";
				w="0.20625 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line7: cw_ffe_edit
			{
				idc=1408;
				x="0.0760417 * safezoneW + safezoneX";
				y="0.697923 * safezoneH + safezoneY";
				w="0.171875 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line8: cw_ffe_edit
			{
				idc=1409;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.746906 * safezoneH + safezoneY";
				w="0.189062 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line9: cw_ffe_edit
			{
				idc=1410;
				x="0.0703125 * safezoneW + safezoneX";
				y="0.796884 * safezoneH + safezoneY";
				w="0.0458333 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line10: cw_ffe_edit
			{
				idc=1411;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.838867 * safezoneH + safezoneY";
				w="0.0572917 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_edit_line11: cw_ffe_edit
			{
				idc=1412;
				x="0.0932292 * safezoneW + safezoneX";
				y="0.950824 * safezoneH + safezoneY";
				w="0.154687 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_ffe_ringle_1: cw_ffe_picture
			{
				idc=1201;
				text="";
				x="0.180896 * safezoneW + safezoneX";
				y="0.401039 * safezoneH + safezoneY";
				w="0.0572917 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_ffe_ringle_2: cw_ffe_picture
			{
				idc=1202;
				text="";
				x="0.236458 * safezoneW + safezoneX";
				y="0.401039 * safezoneH + safezoneY";
				w="0.0286458 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class vcw_ffe_ringle_3: cw_ffe_picture
			{
				idc=1203;
				text="";
				x="0.264833 * safezoneW + safezoneX";
				y="0.401039 * safezoneH + safezoneY";
				w="0.0229167 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_ffe_ringle_4: cw_ffe_picture
			{
				idc=1204;
				text="";
				x="0.204813 * safezoneW + safezoneX";
				y="0.412034 * safezoneH + safezoneY";
				w="0.0802083 * safezoneW";
				h="0.0659743 * safezoneH";
			};
			class cw_ffe_ringle_5: cw_ffe_picture
			{
				idc=1205;
				text="";
				x="0.177167 * safezoneW + safezoneX";
				y="0.443021 * safezoneH + safezoneY";
				w="0.0744792 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_ffe_ringle_6: cw_ffe_picture
			{
				idc=1206;
				text="";
				x="0.250646 * safezoneW + safezoneX";
				y="0.443021 * safezoneH + safezoneY";
				w="0.034375 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_ffe_ringle_7: cw_ffe_picture
			{
				idc=1207;
				text="";
				x="0.0416666 * safezoneW + safezoneX";
				y="0.456017 * safezoneH + safezoneY";
				w="0.06875 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_ffe_ringle_8: cw_ffe_picture
			{
				idc=1208;
				text="";
				x="0.110417 * safezoneW + safezoneX";
				y="0.456017 * safezoneH + safezoneY";
				w="0.0973958 * safezoneW";
				h="0.0549786 * safezoneH";
			};
		};
	};
	class CW_ADJUST_FIRE_MISSION_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_afm_resource', nil];hint """"";
		duration=0.100000;
		fadein=0;
		name="CW_ADJUST_FIRE_MISSION_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_afm_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";
		class Controls
		{
			class cw_adjustfiremission_background: cw_afm_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Images\adjustfiremission.paa";
				x="-0.0614583 * safezoneW + safezoneX";
				y="0.236103 * safezoneH + safezoneY";
				w="0.423958 * safezoneW";
				h="0.758704 * safezoneH";
			};
			class cw_afm_edit_line0_1: cw_afm_edit
			{
				idc=1400;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.302077 * safezoneH + safezoneY";
				w="0.0572917 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line0_2: cw_afm_edit
			{
				idc=1402;
				x="0.15625 * safezoneW + safezoneX";
				y="0.302077 * safezoneH + safezoneY";
				w="0.0458333 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line1: cw_afm_edit
			{
				idc=1401;
				x="0.0416667 * safezoneW + safezoneX";
				y="0.339064 * safezoneH + safezoneY";
				w="0.217708 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line2: cw_afm_edit
			{
				idc=1403;
				x="0.104688 * safezoneW + safezoneX";
				y="0.383047 * safezoneH + safezoneY";
				w="0.06875 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line3: cw_afm_edit
			{
				idc=1404;
				x="0.0703125 * safezoneW + safezoneX";
				y="0.605961 * safezoneH + safezoneY";
				w="0.0973958 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line4: cw_afm_edit
			{
				idc=1405;
				x="0.116146 * safezoneW + safezoneX";
				y="0.635948 * safezoneH + safezoneY";
				w="0.131771 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line5: cw_afm_edit
			{
				idc=1406;
				x="0.0989583 * safezoneW + safezoneX";
				y="0.65794 * safezoneH + safezoneY";
				w="0.1375 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line6: cw_afm_edit
			{
				idc=1407;
				x="0.0817708 * safezoneW + safezoneX";
				y="0.678931 * safezoneH + safezoneY";
				w="0.200521 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line7: cw_afm_edit
			{
				idc=1408;
				x="0.0760417 * safezoneW + safezoneX";
				y="0.701923 * safezoneH + safezoneY";
				w="0.160417 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line8: cw_afm_edit
			{
				idc=1409;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.752901 * safezoneH + safezoneY";
				w="0.0572917 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line9: cw_afm_edit
			{
				idc=1410;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.80788 * safezoneH + safezoneY";
				w="0.0515625 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line10: cw_afm_edit
			{
				idc=1411;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.846867 * safezoneH + safezoneY";
				w="0.0458333 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_edit_line11: cw_afm_edit
			{
				idc=1412;
				x="0.0932292 * safezoneW + safezoneX";
				y="0.945828 * safezoneH + safezoneY";
				w="0.154687 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_afm_ringle_1: cw_afm_picture
			{
				idc=1201;
				x="0.167708 * safezoneW + safezoneX";
				y="0.408039 * safezoneH + safezoneY";
				w="0.0572917 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_afm_ringle_2: cw_afm_picture
			{
				idc=1202;
				x="0.225 * safezoneW + safezoneX";
				y="0.408039 * safezoneH + safezoneY";
				w="0.0286458 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class vcw_afm_ringle_3: cw_afm_picture
			{
				idc=1203;
				x="0.254375 * safezoneW + safezoneX";
				y="0.408039 * safezoneH + safezoneY";
				w="0.0229167 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_afm_ringle_4: cw_afm_picture
			{
				idc=1204;
				x="0.190625 * safezoneW + safezoneX";
				y="0.42303 * safezoneH + safezoneY";
				w="0.0802083 * safezoneW";
				h="0.0659743 * safezoneH";
			};
			class cw_afm_ringle_5: cw_afm_picture
			{
				idc=1205;
				x="0.179167 * safezoneW + safezoneX";
				y="0.450017 * safezoneH + safezoneY";
				w="0.0744792 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_afm_ringle_6: cw_afm_picture
			{
				idc=1206;
				x="0.253646 * safezoneW + safezoneX";
				y="0.450017 * safezoneH + safezoneY";
				w="0.034375 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_afm_ringle_7: cw_afm_picture
			{
				idc=1207;
				x="0.0588542 * safezoneW + safezoneX";
				y="0.467013 * safezoneH + safezoneY";
				w="0.06875 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_afm_ringle_8: cw_afm_picture
			{
				idc=1208;
				x="0.127604 * safezoneW + safezoneX";
				y="0.464013 * safezoneH + safezoneY";
				w="0.103125 * safezoneW";
				h="0.0659743 * safezoneH";
			};
		};
	};
	class CW_MARKING_MISSION_RESOURCE
	{
		idd=-1;
		onUnload="uiNamespace setVariable ['cw_mm_resource', nil];hint """"";
		duration=0.100000;
		fadein=0;
		name="CW_MARKING_MISSION_RESOURCE";
		onLoad="uiNamespace setVariable ['cw_mm_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";
		class Controls
		{
			class cw_mm_background: cw_mm_picture
			{
				idc=1200;
				text="\cw_nineliner_and_notepad\Data\CW_MarkingMission\Images\markingmission.paa";
				x="-0.0614583 * safezoneW + safezoneX";
				y="0.236103 * safezoneH + safezoneY";
				w="0.423958 * safezoneW";
				h="0.758704 * safezoneH";
			};
			class cw_mm_edit_line0_1: cw_mm_edit
			{
				idc=1400;
				x="0.01875 * safezoneW + safezoneX";
				y="0.307077 * safezoneH + safezoneY";
				w="0.06875 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_mm_edit_line0_2: cw_mm_edit
			{
				idc=1402;
				x="0.116146 * safezoneW + safezoneX";
				y="0.307077 * safezoneH + safezoneY";
				w="0.0630208 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_mm_edit_line1: cw_mm_edit
			{
				idc=1401;
				x="0.0416667 * safezoneW + safezoneX";
				y="0.357056 * safezoneH + safezoneY";
				w="0.194792 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_mm_edit_line2: cw_mm_edit
			{
				idc=1403;
				x="0.0703125 * safezoneW + safezoneX";
				y="0.636948 * safezoneH + safezoneY";
				w="0.177604 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_mm_edit_line3: cw_mm_edit
			{
				idc=1404;
				x="0.121146 * safezoneW + safezoneX";
				y="0.667936 * safezoneH + safezoneY";
				w="0.126042 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_mm_edit_line4: cw_mm_edit
			{
				idc=1405;
				x="0.0989583 * safezoneW + safezoneX";
				y="0.701923 * safezoneH + safezoneY";
				w="0.183333 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_mm_edit_line5: cw_mm_edit
			{
				idc=1406;
				x="0.0817708 * safezoneW + safezoneX";
				y="0.73391 * safezoneH + safezoneY";
				w="0.154687 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_mm_edit_line6: cw_mm_edit
			{
				idc=1407;
				x="0.0760417 * safezoneW + safezoneX";
				y="0.765897 * safezoneH + safezoneY";
				w="0.20625 * safezoneW";
				h="0.0219914 * safezoneH";
			};
			class cw_mm_ringle_1: cw_mm_picture
			{
				idc=1201;
				x="0.0130208 * safezoneW + safezoneX";
				y="0.379047 * safezoneH + safezoneY";
				w="0.034375 * safezoneW";
				h="0.0659743 * safezoneH";
			};
			class cw_mm_ringle_2: cw_mm_picture
			{
				idc=1202;
				x="0.0416667 * safezoneW + safezoneX";
				y="0.379047 * safezoneH + safezoneY";
				w="0.0229167 * safezoneW";
				h="0.07697 * safezoneH";
			};
			class cw_mm_ringle_3: cw_mm_picture
			{
				idc=1203;
				x="0.0645833 * safezoneW + safezoneX";
				y="0.368051 * safezoneH + safezoneY";
				w="0.0802083 * safezoneW";
				h="0.07697 * safezoneH";
			};
			class cw_mm_ringle_4: cw_mm_picture
			{
				idc=1204;
				x="0.139062 * safezoneW + safezoneX";
				y="0.379047 * safezoneH + safezoneY";
				w="0.114583 * safezoneW";
				h="0.0659743 * safezoneH";
			};
			class cw_mm_ringle_5: cw_mm_picture
			{
				idc=1205;
				x="0.161979 * safezoneW + safezoneX";
				y="0.412034 * safezoneH + safezoneY";
				w="0.06875 * safezoneW";
				h="0.0659743 * safezoneH";
			};
			class cw_mm_ringle_6: cw_mm_picture
			{
				idc=1206;
				x="0.225 * safezoneW + safezoneX";
				y="0.412034 * safezoneH + safezoneY";
				w="0.0286458 * safezoneW";
				h="0.0659743 * safezoneH";
			};
			class cw_mm_ringle_7: cw_mm_picture
			{
				idc=1207;
				x="0.247917 * safezoneW + safezoneX";
				y="0.412034 * safezoneH + safezoneY";
				w="0.0286458 * safezoneW";
				h="0.0659743 * safezoneH";
			};
			class cw_mm_ringle_8: cw_mm_picture
			{
				idc=1208;
				x="0.190625 * safezoneW + safezoneX";
				y="0.434026 * safezoneH + safezoneY";
				w="0.0802083 * safezoneW";
				h="0.0659743 * safezoneH";
			};
			class cw_mm_ringle_9: cw_mm_picture
			{
				idc=1209;
				x="0.179167 * safezoneW + safezoneX";
				y="0.456017 * safezoneH + safezoneY";
				w="0.06875 * safezoneW";
				h="0.07697 * safezoneH";
			};
			class cw_mm_ringle_10: cw_mm_picture
			{
				idc=1210;
				x="0.247917 * safezoneW + safezoneX";
				y="0.467013 * safezoneH + safezoneY";
				w="0.0401042 * safezoneW";
				h="0.0549786 * safezoneH";
			};
			class cw_mm_ringle_11: cw_mm_picture
			{
				idc=1211;
				x="0.0416667 * safezoneW + safezoneX";
				y="0.478009 * safezoneH + safezoneY";
				w="0.06875 * safezoneW";
				h="0.07697 * safezoneH";
			};
			class cw_mm_ringle_12: cw_mm_picture
			{
				idc=1212;
				x="0.104688 * safezoneW + safezoneX";
				y="0.478009 * safezoneH + safezoneY";
				w="0.103125 * safezoneW";
				h="0.07697 * safezoneH";
			};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	CW_9LINERS_AND_NOTEPAD_PostInit="call compile preprocessFile '\cw_nineliner_and_notepad\Data\init.sqf'";
};
