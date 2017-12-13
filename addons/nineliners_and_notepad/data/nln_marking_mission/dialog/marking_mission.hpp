class nln_marking_mission
{
	idd = -1;
	movingenable = true;

	class Controls
	{
		class nln_mm_background: nln_mm_picture
		{
			idc = 1200;
			text = "\nln_nineliner_and_notepad\data\nln_marking_mission\images\markingmission.paa";
			x = -0.0614583 * safezoneW + safezoneX;
			y = 0.236103 * safezoneH + safezoneY;
			w = 0.423958 * safezoneW;
			h = 0.758704 * safezoneH;
			moving = 1;
		};
		class nln_mm_enableControls_1: nln_mm_button
		{
			idc = 1600;
			x = 0.29375 * safezoneW + safezoneX;
			y = -0.126756 * safezoneH + safezoneY;
			w = 1.75885 * safezoneW;
			h = 2.562 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_marking_mission\scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_mm_enableControls_2: nln_mm_button
		{
			idc = 1601;
			x = -1.64271 * safezoneW + safezoneX;
			y = -0.148747 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_marking_mission\scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_mm_enableControls_3: nln_mm_button
		{
			idc = 1602;
			x = -0.101562 * safezoneW + safezoneX;
			y = -2.44685 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_marking_mission\scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_mm_enableControls_4: nln_mm_button
		{
			idc = 1603;
			x = -0.611458 * safezoneW + safezoneX;
			y = 0.983811 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_marking_mission\scripts\createResource.sqf"";";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_mm_edit_line0_1: nln_mm_edit
		{
			idc = 1400;
			x = 0.01875 * safezoneW + safezoneX;
			y = 0.307077 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_mm_edit_line0_2: nln_mm_edit
		{
			idc = 1402;
			x = 0.116146 * safezoneW + safezoneX;
			y = 0.307077 * safezoneH + safezoneY;
			w = 0.0630208 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_mm_edit_line1: nln_mm_edit
		{
			idc = 1401;
			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.357056 * safezoneH + safezoneY;
			w = 0.194792 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_mm_edit_line2: nln_mm_edit
		{
			idc = 1403;
			x = 0.0703125 * safezoneW + safezoneX;
			y = 0.636948 * safezoneH + safezoneY;
			w = 0.177604 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_mm_edit_line3: nln_mm_edit
		{
			idc = 1404;
			x = 0.121146 * safezoneW + safezoneX;
			y = 0.667936 * safezoneH + safezoneY;
			w = 0.126042 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_mm_edit_line4: nln_mm_edit
		{
			idc = 1405;
			x = 0.0989583 * safezoneW + safezoneX;
			y = 0.701923 * safezoneH + safezoneY;
			w = 0.183333 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_mm_edit_line5: nln_mm_edit
		{
			idc = 1406;
			x = 0.0817708 * safezoneW + safezoneX;
			y = 0.73391 * safezoneH + safezoneY;
			w = 0.154687 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_mm_edit_line6: nln_mm_edit
		{
			idc = 1407;
			x = 0.0760417 * safezoneW + safezoneX;
			y = 0.765897 * safezoneH + safezoneY;
			w = 0.20625 * safezoneW;
			h = 0.0219914 * safezoneH;
		};
		class nln_mm_ringle_1: nln_mm_picture
		{
			idc = 1201;

			x = 0.0130208 * safezoneW + safezoneX;
			y = 0.379047 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class nln_mm_ringle_2: nln_mm_picture
		{
			idc = 1202;

			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.379047 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.07697 * safezoneH;
		};
		class nln_mm_ringle_3: nln_mm_picture
		{
			idc = 1203;

			x = 0.0645833 * safezoneW + safezoneX;
			y = 0.368051 * safezoneH + safezoneY;
			w = 0.0802083 * safezoneW;
			h = 0.07697 * safezoneH;
		};
		class nln_mm_ringle_4: nln_mm_picture
		{
			idc = 1204;
			text = "";
			x = 0.139062 * safezoneW + safezoneX;
			y = 0.379047 * safezoneH + safezoneY;
			w = 0.114583 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class nln_mm_btn_ringle_1: nln_mm_button
		{
			idc = 1604;
			x = 0.01875 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1201] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_2: nln_mm_button
		{
			idc = 1605;
			x = 0.0473958 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.0171875 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1202] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_3: nln_mm_button
		{
			idc = 1606;
			x = 0.0703125 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.0744792 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1203] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_4: nln_mm_button
		{
			idc = 1608;
			x = 0.144792 * safezoneW + safezoneX;
			y = 0.401039 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1204] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_5: nln_mm_button
		{
			idc = 1609;
			x = 0.167708 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1205] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_previousPage: nln_mm_button
		{
			idc = 1614;
			x = 0.01875 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call nln_mm_fnc_previousPage;";
		};
		class nln_mm_btn_nextPage: nln_mm_button
		{
			idc = 1615;
			x = 0.253646 * safezoneW + safezoneX;
			y = 0.258094 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call nln_mm_fnc_nextPage;";
		};
		class nln_mm_btn_clearThis: nln_mm_button
		{
			idc = 1616;
			x = 0.0588542 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call nln_mm_fnc_clearPage;";
		};
		class nln_mm_btn_save: nln_mm_button
		{
			idc = 1617;
			x = 0.139062 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call nln_mm_fnc_savePage;";
		};
		class nln_mm_btn_clearAll: nln_mm_button
		{
			idc = 1618;
			x = 0.196354 * safezoneW + safezoneX;
			y = 0.26909 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call nln_mm_fnc_clearall;";
		};
		class nln_mm_ringle_5: nln_mm_picture
		{
			idc = 1205;

			x = 0.161979 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class nln_mm_ringle_6: nln_mm_picture
		{
			idc = 1206;

			x = 0.225 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class nln_mm_ringle_7: nln_mm_picture
		{
			idc = 1207;

			x = 0.247917 * safezoneW + safezoneX;
			y = 0.412034 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class nln_mm_ringle_8: nln_mm_picture
		{
			idc = 1208;

			x = 0.190625 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.0802083 * safezoneW;
			h = 0.0659743 * safezoneH;
		};
		class nln_mm_ringle_9: nln_mm_picture
		{
			idc = 1209;

			x = 0.179167 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.07697 * safezoneH;
		};
		class nln_mm_ringle_10: nln_mm_picture
		{
			idc = 1210;

			x = 0.247917 * safezoneW + safezoneX;
			y = 0.467013 * safezoneH + safezoneY;
			w = 0.0401042 * safezoneW;
			h = 0.0549786 * safezoneH;
		};
		class nln_mm_ringle_11: nln_mm_picture
		{
			idc = 1211;

			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.478009 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.07697 * safezoneH;
		};
		class nln_mm_ringle_12: nln_mm_picture
		{
			idc = 1212;

			x = 0.104688 * safezoneW + safezoneX;
			y = 0.478009 * safezoneH + safezoneY;
			w = 0.103125 * safezoneW;
			h = 0.07697 * safezoneH;
		};
		class nln_mm_btn_ringle_6: nln_mm_button
		{
			idc = 1607;
			x = 0.230729 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1206] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_7: nln_mm_button
		{
			idc = 1610;
			x = 0.253646 * safezoneW + safezoneX;
			y = 0.434026 * safezoneH + safezoneY;
			w = 0.0229167 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1207] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_7_2: nln_mm_button
		{
			idc = 1611;
			x = 0.161979 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1207] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_8: nln_mm_button
		{
			idc = 1612;
			x = 0.196354 * safezoneW + safezoneX;
			y = 0.456017 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1208] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_9: nln_mm_button
		{
			idc = 1613;
			x = 0.179167 * safezoneW + safezoneX;
			y = 0.489004 * safezoneH + safezoneY;
			w = 0.06875 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1209] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_10: nln_mm_button
		{
			idc = 1619;
			x = 0.253646 * safezoneW + safezoneX;
			y = 0.489004 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1210] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_10_2: nln_mm_button
		{
			idc = 1620;
			x = 0.0130208 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0286458 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1210] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_11: nln_mm_button
		{
			idc = 1621;
			x = 0.0473958 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0572917 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1211] call nln_mm_fnc_show_or_hide_ringle;";
		};
		class nln_mm_btn_ringle_12: nln_mm_button
		{
			idc = 1622;
			x = 0.110417 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0916667 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "[1212] call nln_mm_fnc_show_or_hide_ringle;";
		};
	};
};

/*
class RscTitles
{
	titles[]={"nln_marking_mission_resource"};

	class nln_marking_mission_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_mm_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_marking_mission_resource";
		onLoad = "uiNamespace setVariable ['nln_mm_resource', _this select 0];call nln_nineliner_cas_fnc_hotkey;";

		class Controls
		{
			class nln_mm_background: nln_mm_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_marking_mission\images\markingmission.paa";
				x = -0.0614583 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.423958 * safezoneW;
				h = 0.758704 * safezoneH;
			};
			class nln_mm_edit_line0_1: nln_mm_edit
			{
				idc = 1400;
				x = 0.01875 * safezoneW + safezoneX;
				y = 0.302077 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_mm_edit_line0_2: nln_mm_edit
			{
				idc = 1402;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.302077 * safezoneH + safezoneY;
				w = 0.0630208 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_mm_edit_line1: nln_mm_edit
			{
				idc = 1401;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.357056 * safezoneH + safezoneY;
				w = 0.194792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_mm_edit_line2: nln_mm_edit
			{
				idc = 1403;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.631948 * safezoneH + safezoneY;
				w = 0.177604 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_mm_edit_line3: nln_mm_edit
			{
				idc = 1404;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.664936 * safezoneH + safezoneY;
				w = 0.126042 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_mm_edit_line4: nln_mm_edit
			{
				idc = 1405;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.697923 * safezoneH + safezoneY;
				w = 0.183333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_mm_edit_line5: nln_mm_edit
			{
				idc = 1406;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.73091 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_mm_edit_line6: nln_mm_edit
			{
				idc = 1407;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.763897 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_mm_ringle_1: nln_mm_picture
			{
				idc = 1201;

				x = 0.0130208 * safezoneW + safezoneX;
				y = 0.379047 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class nln_mm_ringle_2: nln_mm_picture
			{
				idc = 1202;

				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.379047 * safezoneH + safezoneY;
				w = 0.0229167 * safezoneW;
				h = 0.07697 * safezoneH;
			};
			class nln_mm_ringle_3: nln_mm_picture
			{
				idc = 1204;

				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.368051 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.07697 * safezoneH;
			};
			class nln_mm_ringle_4: nln_mm_picture
			{
				idc = 1204;
				x = 0.139062 * safezoneW + safezoneX;
				y = 0.379047 * safezoneH + safezoneY;
				w = 0.114583 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class nln_mm_ringle_5: nln_mm_picture
			{
				idc = 1205;

				x = 0.161979 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class nln_mm_ringle_6: nln_mm_picture
			{
				idc = 1206;

				x = 0.225 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class nln_mm_ringle_7: nln_mm_picture
			{
				idc = 1207;

				x = 0.247917 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class nln_mm_ringle_8: nln_mm_picture
			{
				idc = 1208;

				x = 0.190625 * safezoneW + safezoneX;
				y = 0.434026 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class nln_mm_ringle_9: nln_mm_picture
			{
				idc = 1209;

				x = 0.179167 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.07697 * safezoneH;
			};
			class nln_mm_ringle_10: nln_mm_picture
			{
				idc = 1210;

				x = 0.247917 * safezoneW + safezoneX;
				y = 0.467013 * safezoneH + safezoneY;
				w = 0.0401042 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_mm_ringle_11: nln_mm_picture
			{
				idc = 1211;

				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.478009 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.07697 * safezoneH;
			};
			class nln_mm_ringle_12: nln_mm_picture
			{
				idc = 1212;

				x = 0.104688 * safezoneW + safezoneX;
				y = 0.478009 * safezoneH + safezoneY;
				w = 0.103125 * safezoneW;
				h = 0.07697 * safezoneH;
			};
		};
	};
};*/


