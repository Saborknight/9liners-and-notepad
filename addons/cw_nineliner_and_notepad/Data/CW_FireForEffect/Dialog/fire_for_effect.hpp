class CW_FIRE_FOR_EFFECT
{
	idd = -1;
	movingenable = true;
	
	class Controls
	{
		class cw_fire_for_effect_background: cw_ffe_picture
		{
			idc = 1200;
			text = "\cw_nineliner_and_notepad\Data\CW_FireForEffect\Images\fireforeffect.paa";
			x = -0.0614581 * safezoneW + safezoneX;
			y = 0.236103 * safezoneH + safezoneY;
			w = 0.423958 * safezoneW;
			h = 0.758704 * safezoneH;
			moving = 1;
		};
		class cw_fire_for_effect_enableControls_1: cw_ffe_button
		{
			idc = 1600;
			x = 0.29375 * safezoneW + safezoneX;
			y = -0.0277942 * safezoneH + safezoneY;
			w = 1.75885 * safezoneW;
			h = 2.562 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_FireForEffect\Scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_fire_for_effect_enableControls_2: cw_ffe_button
		{
			idc = 1601;
			x = -1.64271 * safezoneW + safezoneX;
			y = -0.148747 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_FireForEffect\Scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_fire_for_effect_nableControls_3: cw_ffe_button
		{
			idc = 1602;
			x = -0.101562 * safezoneW + safezoneX;
			y = -2.44685 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_FireForEffect\Scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_fire_for_effect_nableControls_4: cw_ffe_button
		{
			idc = 1603;
			x = -0.611458 * safezoneW + safezoneX;
			y = 0.983811 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_FireForEffect\Scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_ffe_edit_line0_1: cw_ffe_edit
		{
			idc = 1400;
			x = 0.01875 * safezoneW + safezoneX;
			y = 0.300077 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line0_2: cw_ffe_edit
		{
			idc = 1402;
			x = 0.121875 * safezoneW + safezoneX;
			y = 0.300077 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line1: cw_ffe_edit
		{
			idc = 1401;
			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.340064 * safezoneH + safezoneY;
			w = 0.217708 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line2: cw_ffe_edit 
		{
			idc = 1403;
			x = 0.104688 * safezoneW + safezoneX;
			y = 0.381047 * safezoneH + safezoneY;
			w = 0.0916667 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line3: cw_ffe_edit
		{
			idc = 1404;
			x = 0.0703125 * safezoneW + safezoneX;
			y = 0.592966 * safezoneH + safezoneY;
			w = 0.223438 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line4: cw_ffe_edit
		{
			idc = 1405;
			x = 0.116146 * safezoneW + safezoneX;
			y = 0.620953 * safezoneH + safezoneY;
			w = 0.143229 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line5: cw_ffe_edit
		{
			idc = 1406;
			x = 0.0989583 * safezoneW + safezoneX;
			y = 0.642944 * safezoneH + safezoneY;
			w = 0.148958 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line6: cw_ffe_edit
		{
			idc = 1407;
			x = 0.0817708 * safezoneW + safezoneX;
			y = 0.669936 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line7: cw_ffe_edit
		{
			idc = 1408;
			x = 0.0760417 * safezoneW + safezoneX;
			y = 0.697923 * safezoneH + safezoneY;
			w = 0.171875 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line8: cw_ffe_edit
		{
			idc = 1409;
			x = 0.0645833 * safezoneW + safezoneX;
			y = 0.746906 * safezoneH + safezoneY;
			w = 0.189062 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line9: cw_ffe_edit
		{
			idc = 1410;
			x = 0.0703125 * safezoneW + safezoneX;
			y = 0.796884 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line10: cw_ffe_edit 
		{
			idc = 1411;
			x = 0.0645833 * safezoneW + safezoneX;
			y = 0.838867 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_edit_line11: cw_ffe_edit
		{
			idc = 1412;
			x = 0.0932292 * safezoneW + safezoneX;
			y = 0.950824 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class cw_ffe_ringle_1: cw_ffe_picture
		{
			idc = 1201;
			text = "";
			x = 0.180896 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_ffe_ringle_2: cw_ffe_picture
		{
			idc = 1202;
			text = "";
			x = 0.236458 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class vcw_ffe_ringle_3: cw_ffe_picture 
		{
			idc = 1203;
			text = "";
			x = 0.264833 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_ffe_ringle_4: cw_ffe_picture
		{
			idc = 1204;
			text = "";
			x = 0.204813 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.0802083 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class cw_ffe_ringle_5: cw_ffe_picture
		{
			idc = 1205;
			text = "";
			x = 0.177167 * safezoneW + safezoneX;
			y = 0.443021 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_ffe_ringle_6: cw_ffe_picture
		{
			idc = 1206;
			text = "";
			x = 0.250646 * safezoneW + safezoneX;
			y = 0.443021 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_ffe_ringle_7: cw_ffe_picture
		{
			idc = 1207;
			text = "";
			x = 0.0416666 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_ffe_ringle_8: cw_ffe_picture
		{
			idc = 1208;
			text = "";
			x = 0.110417 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.0973958 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class cw_ffe_bttn_ringle_1: cw_ffe_button
		{
			idc = 1604;
			x = 0.184896 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1201] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_2: cw_ffe_button
		{
			idc = 1605;
			x = 0.242188 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1202] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_3: cw_ffe_button
		{
			idc = 1606;
			x = 0.270833 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.0171875 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1203] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_3_2: cw_ffe_button
		{
			idc = 1607;
			x = 0.179167 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1203] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_4: cw_ffe_button
		{
			idc = 1608;
			x = 0.207813 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1204] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_5: cw_ffe_button
		{
			idc = 1609;
			x = 0.179167 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1205] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_6: cw_ffe_button
		{
			idc = 1610;
			x = 0.247917 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1206] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_6_2: cw_ffe_button
		{
			idc = 1611;
			x = 0.0130208 * safezoneW + safezoneX;
			y = 0.478009 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1206] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_7: cw_ffe_button
		{
			idc = 1612;
			x = 0.0473958 * safezoneW + safezoneX;
			y = 0.478009 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1207] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_ringle_8: cw_ffe_button
		{
			idc = 1613;
			x = 0.110417 * safezoneW + safezoneX;
			y = 0.478009 * safezoneH + safezoneY;
			w = 0.0916667 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1208] call cw_ffe_fnc_show_or_hide_ringle;";
		};
		class cw_ffe_bttn_previousPage: cw_ffe_button
		{
			idc = 1614;
			x = 0.01875 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.0401042 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_ffe_fnc_previousPage;";
		};
		class cw_ffe_bttn_nextPage: cw_ffe_button
		{
			idc = 1615;
			x = 0.242188 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.0458333 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_ffe_fnc_nextPage;";
		};
		class cw_ffe_bttn_clearThis: cw_ffe_button
		{
			idc = 1616;
			x = 0.0645833 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_ffe_fnc_clearPage;";
		};
		class cw_ffe_bttn_save: cw_ffe_button
		{
			idc = 1617;
			x = 0.139062 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_ffe_fnc_savePage;";
		};
		class cw_ffe_bttn_clearAll: cw_ffe_button
		{
			idc = 1618;
			x = 0.184896 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_ffe_fnc_clearall;";
		};
	};
};

/*
class RscTitles
{
	titles[]={"CW_FIRE_FOR_EFFECT_RESOURCE"};
	
	class CW_FIRE_FOR_EFFECT_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_ffe_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_FIRE_FOR_EFFECT_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_ffe_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";

		class Controls
		{
			class cw_fire_for_effect_background: cw_ffe_picture
			{
				idc = 1200;
				text = "\cw_nineliner_and_notepad\Data\CW_FireForEffect\Images\fireforeffect.paa";
				x = -0.0614581 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.423958 * safezoneW;
				h = 0.758704 * safezoneH;
			};
			class cw_ffe_edit_line0_1: cw_ffe_edit
			{
				idc = 1400;
				x = 0.01875 * safezoneW + safezoneX;
				y = 0.300077 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line0_2: cw_ffe_edit
			{
				idc = 1402;
				x = 0.121875 * safezoneW + safezoneX;
				y = 0.300077 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line1: cw_ffe_edit
			{
				idc = 1401;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.340064 * safezoneH + safezoneY;
				w = 0.217708 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line2: cw_ffe_edit
			{
				idc = 1403;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.383047 * safezoneH + safezoneY;
				w = 0.0916667 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line3: cw_ffe_edit
			{
				idc = 1404;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.592966 * safezoneH + safezoneY;
				w = 0.223438 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line4: cw_ffe_edit
			{
				idc = 1405;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.620953 * safezoneH + safezoneY;
				w = 0.143229 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line5: cw_ffe_edit
			{
				idc = 1406;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.642944 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line6: cw_ffe_edit
			{
				idc = 1407;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.669936 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line7: cw_ffe_edit
			{
				idc = 1408;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.697923 * safezoneH + safezoneY;
				w = 0.171875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line8: cw_ffe_edit
			{
				idc = 1409;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.746906 * safezoneH + safezoneY;
				w = 0.189062 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line9: cw_ffe_edit
			{
				idc = 1410;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0458333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line10: cw_ffe_edit
			{
				idc = 1411;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.840867 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_edit_line11: cw_ffe_edit
			{
				idc = 1412;
				x = 0.0932292 * safezoneW + safezoneX;
				y = 0.950824 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_ffe_ringle_1: cw_ffe_picture
			{
				idc = 1201;
				text = "";
				x = 0.180896 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_ffe_ringle_2: cw_ffe_picture
			{
				idc = 1202;
				text = "";
				x = 0.236458 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class vcw_ffe_ringle_3: cw_ffe_picture
			{
				idc = 1203;
				text = "";
				x = 0.267833 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0229167 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_ffe_ringle_4: cw_ffe_picture
			{
				idc = 1204;
				text = "";
				x = 0.204813 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_ffe_ringle_5: cw_ffe_picture
			{
				idc = 1205;
				text = "";
				x = 0.177167 * safezoneW + safezoneX;
				y = 0.443021 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_ffe_ringle_6: cw_ffe_picture
			{
				idc = 1206;
				text = "";
				x = 0.250646 * safezoneW + safezoneX;
				y = 0.443021 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_ffe_ringle_7: cw_ffe_picture
			{
				idc = 1207;
				text = "";
				x = 0.0416666 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_ffe_ringle_8: cw_ffe_picture
			{
				idc = 1208;
				text = "";
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0973958 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
		};
	};
};*/


