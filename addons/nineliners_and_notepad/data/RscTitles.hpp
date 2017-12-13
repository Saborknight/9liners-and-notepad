class RscTitles
{
titles[]={"nln_target_location_methods_resource","nln_nineliner_cas_resource","nln_nineliner_medevac_resource","nln_adjust_fire_mission_resource";"nln_cas_check_in_resource","nln_noteblock_resource","nln_gunship_call_for_fire_resource","nln_marking_mission_resource","nln_fire_for_effect_resource"};

	class nln_nineliner_cas_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_cas_nineliner_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_nineliner_cas_resource";
		onLoad = "uiNamespace setVariable ['nln_cas_nineliner_resource', _this select 0];call nln_nineliner_cas_fnc_hotkey;";

		class Controls
		{
			class nln_nineliner_cas_background: nln_nineliner_cas_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_nineliner_cas\images\nineliner_cas.paa";
				x = -0.0786458 * safezoneW + safezoneX;
				y = 0.26909 * safezoneH + safezoneY;
				w = 0.452604 * safezoneW;
				h = 0.725717 * safezoneH;
				moving = 1;
			};
			class nln_nineliner_cas_line0_1: nln_nineliner_cas_edit
			{
				idc = 1400;
				x = 0.121875 * safezoneW + safezoneX;
				y = 0.362056 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line0_2: nln_nineliner_cas_edit
			{
				idc = 1401;
				x = 0.225 * safezoneW + safezoneX;
				y = 0.362056 * safezoneH + safezoneY;
				w = 0.0630208 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line1: nln_nineliner_cas_edit
			{
				idc = 1402;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.413034 * safezoneH + safezoneY;
				w = 0.189062 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line2: nln_nineliner_cas_edit
			{
				idc = 1403;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.434026 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line2_2: nln_nineliner_cas_edit
			{
				idc = 1404;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.471013 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line3: nln_nineliner_cas_edit
			{
				idc = 1405;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.489004 * safezoneH + safezoneY;
				w = 0.183333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line4: nln_nineliner_cas_edit
			{
				idc = 1406;
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.521991 * safezoneH + safezoneY;
				w = 0.120313 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line5: nln_nineliner_cas_edit
			{
				idc = 1407;
				x = 0.133333 * safezoneW + safezoneX;
				y = 0.542983 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line6: nln_nineliner_cas_edit
			{
				idc = 1408;
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.570974 * safezoneH + safezoneY;
				w = 0.160417 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line7_1: nln_nineliner_cas_edit
			{
				idc = 1409;
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.622953 * safezoneH + safezoneY;
				w = 0.0859375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line7_2: nln_nineliner_cas_edit
			{
				idc = 1410;
				x = 0.225 * safezoneW + safezoneX;
				y = 0.622953 * safezoneH + safezoneY;
				w = 0.0630208 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line7_3: nln_nineliner_cas_edit
			{
				idc = 1411;
				x = 0.133333 * safezoneW + safezoneX;
				y = 0.65594 * safezoneH + safezoneY;
				w = 0.0630208 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line8: nln_nineliner_cas_edit
			{
				idc = 1412;
				x = 0.150521 * safezoneW + safezoneX;
				y = 0.677931 * safezoneH + safezoneY;
				w = 0.1375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line8_2: nln_nineliner_cas_edit
			{
				idc = 1413;
				x = 0.139062 * safezoneW + safezoneX;
				y = 0.697923 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line9: nln_nineliner_cas_edit
			{
				idc = 1414;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.73191 * safezoneH + safezoneY;
				w = 0.183333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line10: nln_nineliner_cas_edit
			{
				idc = 1415;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.777893 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line11: nln_nineliner_cas_edit
			{
				idc = 1416;
				x = 0.150521 * safezoneW + safezoneX;
				y = 0.8098 * safezoneH + safezoneY;
				w = 0.1375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line12: nln_nineliner_cas_edit
			{
				idc = 1417;
				x = 0.133333 * safezoneW + safezoneX;
				y = 0.919837 * safezoneH + safezoneY;
				w = 0.120313 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line13_1: nln_nineliner_cas_edit
			{
				idc = 1418;
				x = 0.15625 * safezoneW + safezoneX;
				y = 0.950824 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_cas_line13_2: nln_nineliner_cas_edit
			{
				idc = 1419;
				x = 0.207813 * safezoneW + safezoneX;
				y = 0.950824 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
		};
	};
	class nln_target_location_methods_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_tlm_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_target_location_methods_resource";
		onLoad = "uiNamespace setVariable ['nln_tlm_resource', _this select 0];";

		class Controls
		{
			class nln_targetlocationmethods_background: nln_targetlocationmethods_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_target_location_methods\images\targetlocationmethods.paa";
				x = -0.0614583 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.429688 * safezoneW;
				h = 0.758704 * safezoneH;
			};
		};
	};
	class nln_nineliner_medevac_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_nineliner_medv_resource', nil];hint """"";
		duration=1;
		fadein=0;
		name="nln_nineliner_medevac_resource";
		onLoad = "uiNamespace setVariable ['nln_nineliner_medv_resource', _this select 0];";

		class Controls
		{
			class nln_nineliner_medv_background: nln_nineliner_medv_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_nineliner_medevac\images\nineliner_medevac.paa";
				x = -0.0213542 * safezoneW + safezoneX;
				y = 0.247099 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.747708 * safezoneH;
				moving = 1;
			};
			class nln_nineliner_medevac_edit_line1: nln_nineliner_medv_edit
			{
				idc = 1400;
				x = 0.144792 * safezoneW + safezoneX;
				y = 0.34606 * safezoneH + safezoneY;
				w = 0.189062 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line2: nln_nineliner_medv_edit
			{
				idc = 1401;
				x = 0.173438 * safezoneW + safezoneX;
				y = 0.390043 * safezoneH + safezoneY;
				w = 0.160417 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line3: nln_nineliner_medv_edit
			{
				idc = 1402;
				x = 0.161979 * safezoneW + safezoneX;
				y = 0.434026 * safezoneH + safezoneY;
				w = 0.171875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line4: nln_nineliner_medv_edit
			{
				idc = 1403;
				x = 0.144792 * safezoneW + safezoneX;
				y = 0.489004 * safezoneH + safezoneY;
				w = 0.189062 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line5: nln_nineliner_medv_edit
			{
				idc = 1404;
				x = 0.121875 * safezoneW + safezoneX;
				y = 0.554979 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line6: nln_nineliner_medv_edit
			{
				idc = 1405;
				x = 0.133333 * safezoneW + safezoneX;
				y = 0.620953 * safezoneH + safezoneY;
				w = 0.200521 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line7: nln_nineliner_medv_edit
			{
				idc = 1406;
				x = 0.15625 * safezoneW + safezoneX;
				y = 0.719914 * safezoneH + safezoneY;
				w = 0.177604 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line8: nln_nineliner_medv_edit
			{
				idc = 1407;
				x = 0.150521 * safezoneW + safezoneX;
				y = 0.785888 * safezoneH + safezoneY;
				w = 0.183333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medv_edit_1408: nln_nineliner_medv_edit
			{
				idc = 1408;
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.840867 * safezoneH + safezoneY;
				w = 0.200521 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line3_cross_picture1: nln_nineliner_medv_picture_cross
			{
				idc = 2800;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line3_cross_picture2: nln_nineliner_medv_picture_cross
			{
				idc = 2801;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line3_cross_picture3: nln_nineliner_medv_picture_cross
			{
				idc = 2802;
				x = 0.173438 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
			};
			class nln_nineliner_medevac_edit_line3_cross_picture4: nln_nineliner_medv_picture_cross
			{
				idc = 2803;
				x = 0.219271 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;

			};
			class nln_nineliner_medevac_edit_line3_cross_picture5: nln_nineliner_medv_picture_cross
			{
				idc = 2804;
				x = 0.270833 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;

			};
			class nln_nineliner_medevac_edit_line4_cross_picture1: nln_nineliner_medv_picture_cross
			{
				idc = 2805;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.510996 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line4_cross_picture2: nln_nineliner_medv_picture_cross
			{
				idc = 2806;
				x = 0.121875 * safezoneW + safezoneX;
				y = 0.510996 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line4_cross_picture3: nln_nineliner_medv_picture_cross
			{
				idc = 2807;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.510996 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line4_cross_picture4: nln_nineliner_medv_picture_cross
			{
				idc = 2808;
				x = 0.276563 * safezoneW + safezoneX;
				y = 0.510996 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line5_cross_picture1: nln_nineliner_medv_picture_cross
			{
				idc = 2809;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.57697 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line5_cross_picture2: nln_nineliner_medv_picture_cross
			{
				idc = 2810;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.57697 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line6_cross_picture1: nln_nineliner_medv_picture_cross
			{
				idc = 2811;
				x = 0.0588542 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line6_cross_picture2: nln_nineliner_medv_picture_cross
			{
				idc = 2812;
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line6_cross_picture3: nln_nineliner_medv_picture_cross
			{
				idc = 2813;
				x = 0.173438 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line6_cross_picture4: nln_nineliner_medv_picture_cross
			{
				idc = 2814;
				x = 0.247917 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line7_cross_picture1: nln_nineliner_medv_picture_cross
			{
				idc = 2815;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line7_cross_picture2: nln_nineliner_medv_picture_cross
			{
				idc = 2816;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line7_cross_picture3: nln_nineliner_medv_picture_cross
			{
				idc = 2817;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line7_cross_picture4: nln_nineliner_medv_picture_cross
			{
				idc = 2818;
				x = 0.242188 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line7_cross_picture5: nln_nineliner_medv_picture_cross
			{
				idc = 2819;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line8_cross_picture1: nln_nineliner_medv_picture_cross
			{
				idc = 2820;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line8_cross_picture2: nln_nineliner_medv_picture_cross
			{
				idc = 2821;
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line8_cross_picture3: nln_nineliner_medv_picture_cross
			{
				idc = 2822;
				x = 0.161979 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line8_cross_picture4: nln_nineliner_medv_picture_cross
			{
				idc = 2823;
				x = 0.225 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line8_cross_picture5: nln_nineliner_medv_picture_cross
			{
				idc = 2824;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line9_cross_picture1: nln_nineliner_medv_picture_cross
			{
				idc = 2825;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.88485 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line9_cross_picture2: nln_nineliner_medv_picture_cross
			{
				idc = 2826;
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.88485 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
			class nln_nineliner_medevac_edit_line9_cross_picture3: nln_nineliner_medv_picture_cross
			{
				idc = 2827;
				x = 0.161979 * safezoneW + safezoneX;
				y = 0.88485 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;


			};
		};
	};
	class nln_cas_check_in_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_cas_check_in_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_cas_check_in_resource";
		onLoad = "uiNamespace setVariable ['nln_cas_check_in_resource', _this select 0];";

		class Controls
		{
			class nln_cas_checkIn_background: nln_cas_check_in_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_cas_check_in\images\cas_check_in.paa";
				x = -0.0843753 * safezoneW + safezoneX;
				y = 0.225107 * safezoneH + safezoneY;
				w = 0.492708 * safezoneW;
				h = 0.802687 * safezoneH;
			};
			class nln_cas_checkIn_line0_1: nln_cas_check_in_edit
			{
				idc = 1400;
				x = 0.0588542 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0916667 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line0_2: nln_cas_check_in_edit
			{
				idc = 1401;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.103125 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line1: nln_cas_check_in_edit
			{
				idc = 1402;
				x = 0.144792 * safezoneW + safezoneX;
				y = 0.476009 * safezoneH + safezoneY;
				w = 0.143229 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line2: nln_cas_check_in_edit
			{
				idc = 1403;
				x = 0.139062 * safezoneW + safezoneX;
				y = 0.5045 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line3: nln_cas_check_in_edit
			{
				idc = 1404;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.537987 * safezoneH + safezoneY;
				w = 0.171875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line4: nln_cas_check_in_edit
			{
				idc = 1405;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.570974 * safezoneH + safezoneY;
				w = 0.211979 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line5: nln_cas_check_in_edit
			{
				idc = 1406;
				x = 0.0932292 * safezoneW + safezoneX;
				y = 0.602961 * safezoneH + safezoneY;
				w = 0.194792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line6: nln_cas_check_in_edit
			{
				idc = 1407;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.647944 * safezoneH + safezoneY;
				w = 0.246354 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_cas_checkIn_line7: nln_cas_check_in_edit
			{
				idc = 1408;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.679931 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
		};
	};

		class nln_gunship_call_for_fire_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_fiveliner_gcff_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_gunship_call_for_fire_resource";
		onLoad = "uiNamespace setVariable ['nln_fiveliner_gcff_resource', _this select 0];";

		class Controls
		{
				class nln_gcff_background: nln_fiveliner_gcff_picture
				{
					idc = 1200;
					text = "\nln_nineliner_and_notepad\data\nln_gunship_call_for_fire\images\gunshipcallforfire.paa";
					x = -0.0843753 * safezoneW + safezoneX;
					y = 0.225107 * safezoneH + safezoneY;
					w = 0.492708 * safezoneW;
					h = 0.802687 * safezoneH;
					moving = 1;
				};
				class nln_gcff_line1_1: nln_fiveliner_gcff_edit
				{
					idc = 1400;
					x = 0.139062 * safezoneW + safezoneX;
					y = 0.384047 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class nln_gcff_line1_2: nln_fiveliner_gcff_edit
				{
					idc = 1401;
					x = 0.225 * safezoneW + safezoneX;
					y = 0.384047 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class nln_gcff_line2_1: nln_fiveliner_gcff_edit
				{
					idc = 1402;
					x = 0.190625 * safezoneW + safezoneX;
					y = 0.439026 * safezoneH + safezoneY;
					w = 0.0802083 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class nln_gcff_line2_2: nln_fiveliner_gcff_edit
				{
					idc = 1403;
					x = 0.0703121 * safezoneW + safezoneX;
					y = 0.472013 * safezoneH + safezoneY;
					w = 0.177604 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class nln_gcff_line3_1: nln_fiveliner_gcff_edit
				{
					idc = 1404;
					x = 0.104688 * safezoneW + safezoneX;
					y = 0.505 * safezoneH + safezoneY;
					w = 0.131771 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class nln_gcff_line4_1: nln_fiveliner_gcff_edit
				{
					idc = 1405;
					x = 0.184896 * safezoneW + safezoneX;
					y = 0.538987 * safezoneH + safezoneY;
					w = 0.0401042 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class nln_gcff_line5_1: nln_fiveliner_gcff_edit
				{
					idc = 1406;
					x = 0.0760417 * safezoneW + safezoneX;
					y = 0.570974 * safezoneH + safezoneY;
					w = 0.154687 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
		};
	};

	class nln_noteblock_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_noteblock_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_noteblock_resource";
		onLoad = "uiNamespace setVariable ['nln_noteblock_resource', _this select 0];";

		class Controls
		{
			class nln_noteblock_background: nln_noteblock_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_noteblock\images\noteblock.paa";
				x = -0.0557292 * safezoneW + safezoneX;
				y = 0.26909 * safezoneH + safezoneY;
				w = 0.48125 * safezoneW;
				h = 0.747708 * safezoneH;
				moving = 1;
			};
			class nln_noteblock_edit: nln_noteblock_edit
			{
				idc = 1400;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.307 * safezoneH + safezoneY;
				w = 0.303646 * safezoneW;
				h = 0.637751 * safezoneH;
			};
		};
	};

	class nln_fire_for_effect_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_ffe_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_fire_for_effect_resource";
		onLoad = "uiNamespace setVariable ['nln_ffe_resource', _this select 0];call nln_nineliner_cas_fnc_hotkey;";

		class Controls
		{
			class nln_targetlocationmethods_background: nln_ffe_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_fire_for_effect\images\fireforeffect.paa";
				x = -0.0614581 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.423958 * safezoneW;
				h = 0.758704 * safezoneH;
			};
			class nln_ffe_edit_line0_1: nln_ffe_edit
			{
				idc = 1400;
				x = 0.01875 * safezoneW + safezoneX;
				y = 0.300077 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line0_2: nln_ffe_edit
			{
				idc = 1402;
				x = 0.121875 * safezoneW + safezoneX;
				y = 0.300077 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line1: nln_ffe_edit
			{
				idc = 1401;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.340064 * safezoneH + safezoneY;
				w = 0.217708 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line2: nln_ffe_edit
			{
				idc = 1403;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.381047 * safezoneH + safezoneY;
				w = 0.0916667 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line3: nln_ffe_edit
			{
				idc = 1404;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.592966 * safezoneH + safezoneY;
				w = 0.223438 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line4: nln_ffe_edit
			{
				idc = 1405;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.620953 * safezoneH + safezoneY;
				w = 0.143229 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line5: nln_ffe_edit
			{
				idc = 1406;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.642944 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line6: nln_ffe_edit
			{
				idc = 1407;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.669936 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line7: nln_ffe_edit
			{
				idc = 1408;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.697923 * safezoneH + safezoneY;
				w = 0.171875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line8: nln_ffe_edit
			{
				idc = 1409;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.746906 * safezoneH + safezoneY;
				w = 0.189062 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line9: nln_ffe_edit
			{
				idc = 1410;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0458333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line10: nln_ffe_edit
			{
				idc = 1411;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.838867 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_edit_line11: nln_ffe_edit
			{
				idc = 1412;
				x = 0.0932292 * safezoneW + safezoneX;
				y = 0.950824 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_ffe_ringle_1: nln_ffe_picture
			{
				idc = 1201;
				text = "";
				x = 0.180896 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_ffe_ringle_2: nln_ffe_picture
			{
				idc = 1202;
				text = "";
				x = 0.236458 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class vnln_ffe_ringle_3: nln_ffe_picture
			{
				idc = 1203;
				text = "";
				x = 0.264833 * safezoneW + safezoneX;
				y = 0.401039 * safezoneH + safezoneY;
				w = 0.0229167 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_ffe_ringle_4: nln_ffe_picture
			{
				idc = 1204;
				text = "";
				x = 0.204813 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class nln_ffe_ringle_5: nln_ffe_picture
			{
				idc = 1205;
				text = "";
				x = 0.177167 * safezoneW + safezoneX;
				y = 0.443021 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_ffe_ringle_6: nln_ffe_picture
			{
				idc = 1206;
				text = "";
				x = 0.250646 * safezoneW + safezoneX;
				y = 0.443021 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_ffe_ringle_7: nln_ffe_picture
			{
				idc = 1207;
				text = "";
				x = 0.0416666 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_ffe_ringle_8: nln_ffe_picture
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

	class nln_adjust_fire_mission_resource
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['nln_afm_resource', nil];hint """"";
		duration=0.1;
		fadein=0;
		name="nln_adjust_fire_mission_resource";
		onLoad = "uiNamespace setVariable ['nln_afm_resource', _this select 0];call nln_nineliner_cas_fnc_hotkey;";

		class Controls
		{
			class nln_adjustfiremission_background: nln_afm_picture
			{
				idc = 1200;
				text = "\nln_nineliner_and_notepad\data\nln_adjust_fire_mission\images\adjustfiremission.paa";
				x = -0.0614583 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.423958 * safezoneW;
				h = 0.758704 * safezoneH;
			};
			class nln_afm_edit_line0_1: nln_afm_edit
			{
				idc = 1400;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.302077 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line0_2: nln_afm_edit
			{
				idc = 1402;
				x = 0.15625 * safezoneW + safezoneX;
				y = 0.302077 * safezoneH + safezoneY;
				w = 0.0458333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line1: nln_afm_edit
			{
				idc = 1401;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.339064 * safezoneH + safezoneY;
				w = 0.217708 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line2: nln_afm_edit
			{
				idc = 1403;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.383047 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line3: nln_afm_edit
			{
				idc = 1404;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.605961 * safezoneH + safezoneY;
				w = 0.0973958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line4: nln_afm_edit
			{
				idc = 1405;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.635948 * safezoneH + safezoneY;
				w = 0.131771 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line5: nln_afm_edit
			{
				idc = 1406;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.65794 * safezoneH + safezoneY;
				w = 0.1375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line6: nln_afm_edit
			{
				idc = 1407;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.678931 * safezoneH + safezoneY;
				w = 0.200521 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line7: nln_afm_edit
			{
				idc = 1408;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.701923 * safezoneH + safezoneY;
				w = 0.160417 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line8: nln_afm_edit
			{
				idc = 1409;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.752901 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line9: nln_afm_edit
			{
				idc = 1410;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.80788 * safezoneH + safezoneY;
				w = 0.0515625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line10: nln_afm_edit
			{
				idc = 1411;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.846867 * safezoneH + safezoneY;
				w = 0.0458333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_edit_line11: nln_afm_edit
			{
				idc = 1412;
				x = 0.0932292 * safezoneW + safezoneX;
				y = 0.945828 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class nln_afm_ringle_1: nln_afm_picture
			{
				idc = 1201;
				x = 0.167708 * safezoneW + safezoneX;
				y = 0.408039 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_afm_ringle_2: nln_afm_picture
			{
				idc = 1202;
				x = 0.225 * safezoneW + safezoneX;
				y = 0.408039 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class vnln_afm_ringle_3: nln_afm_picture
			{
				idc = 1203;
				x = 0.254375 * safezoneW + safezoneX;
				y = 0.408039 * safezoneH + safezoneY;
				w = 0.0229167 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_afm_ringle_4: nln_afm_picture
			{
				idc = 1204;
				x = 0.190625 * safezoneW + safezoneX;
				y = 0.42303 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class nln_afm_ringle_5: nln_afm_picture
			{
				idc = 1205;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.450017 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_afm_ringle_6: nln_afm_picture
			{
				idc = 1206;
				x = 0.253646 * safezoneW + safezoneX;
				y = 0.450017 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_afm_ringle_7: nln_afm_picture
			{
				idc = 1207;
				x = 0.0588542 * safezoneW + safezoneX;
				y = 0.467013 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class nln_afm_ringle_8: nln_afm_picture
			{
				idc = 1208;
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.464013 * safezoneH + safezoneY;
				w = 0.103125 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
		};
	};

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
};
