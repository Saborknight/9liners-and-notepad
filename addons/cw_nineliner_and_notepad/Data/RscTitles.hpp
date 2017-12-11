class RscTitles
{
titles[]={"CW_TARGETLOCATIONMETHODS_RESOURCE","CW_9LINER_CAS_RESOURCE","CW_9LINER_MEDEVAC_RESOURCE","CW_ADJUST_FIRE_MISSION_RESOURCE";"CW_CAS_CHECK_IN_RESOURCE","CW_NOTEBLOCK_RESOURCE","CW_GUNSHIP_CALL_FOR_FIRE_RESOURCE","CW_MARKING_MISSION_RESOURCE","CW_FIRE_FOR_EFFECT_RESOURCE"};

	class CW_9LINER_CAS_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_cas_9liner_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_9LINER_CAS_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_cas_9liner_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";
		
		class Controls
		{
			class cw_9liner_cas_background: cw_9liner_cas_picture
			{
				idc = 1200;
				text = "\cw_nineliner_and_notepad\Data\CW_9Liner_CAS\Images\9liner_cas.paa";
				x = -0.0786458 * safezoneW + safezoneX;
				y = 0.26909 * safezoneH + safezoneY;
				w = 0.452604 * safezoneW;
				h = 0.725717 * safezoneH;
				moving = 1;
			};
			class cw_9liner_cas_line0_1: cw_9liner_cas_edit
			{
				idc = 1400;
				x = 0.121875 * safezoneW + safezoneX;
				y = 0.362056 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line0_2: cw_9liner_cas_edit
			{
				idc = 1401;
				x = 0.225 * safezoneW + safezoneX;
				y = 0.362056 * safezoneH + safezoneY;
				w = 0.0630208 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line1: cw_9liner_cas_edit
			{
				idc = 1402;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.413034 * safezoneH + safezoneY;
				w = 0.189062 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line2: cw_9liner_cas_edit
			{
				idc = 1403;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.434026 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line2_2: cw_9liner_cas_edit
			{
				idc = 1404;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.471013 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line3: cw_9liner_cas_edit
			{
				idc = 1405;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.489004 * safezoneH + safezoneY;
				w = 0.183333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line4: cw_9liner_cas_edit
			{
				idc = 1406;
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.521991 * safezoneH + safezoneY;
				w = 0.120313 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line5: cw_9liner_cas_edit
			{
				idc = 1407;
				x = 0.133333 * safezoneW + safezoneX;
				y = 0.542983 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line6: cw_9liner_cas_edit
			{
				idc = 1408;
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.570974 * safezoneH + safezoneY;
				w = 0.160417 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line7_1: cw_9liner_cas_edit
			{
				idc = 1409;
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.622953 * safezoneH + safezoneY;
				w = 0.0859375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line7_2: cw_9liner_cas_edit
			{
				idc = 1410;
				x = 0.225 * safezoneW + safezoneX;
				y = 0.622953 * safezoneH + safezoneY;
				w = 0.0630208 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line7_3: cw_9liner_cas_edit
			{
				idc = 1411;
				x = 0.133333 * safezoneW + safezoneX;
				y = 0.65594 * safezoneH + safezoneY;
				w = 0.0630208 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line8: cw_9liner_cas_edit
			{
				idc = 1412;
				x = 0.150521 * safezoneW + safezoneX;
				y = 0.677931 * safezoneH + safezoneY;
				w = 0.1375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line8_2: cw_9liner_cas_edit
			{
				idc = 1413;
				x = 0.139062 * safezoneW + safezoneX;
				y = 0.697923 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line9: cw_9liner_cas_edit
			{
				idc = 1414;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.73191 * safezoneH + safezoneY;
				w = 0.183333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line10: cw_9liner_cas_edit
			{
				idc = 1415;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.777893 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line11: cw_9liner_cas_edit
			{
				idc = 1416;
				x = 0.150521 * safezoneW + safezoneX;
				y = 0.8098 * safezoneH + safezoneY;
				w = 0.1375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line12: cw_9liner_cas_edit
			{
				idc = 1417;
				x = 0.133333 * safezoneW + safezoneX;
				y = 0.919837 * safezoneH + safezoneY;
				w = 0.120313 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line13_1: cw_9liner_cas_edit
			{
				idc = 1418;
				x = 0.15625 * safezoneW + safezoneX;
				y = 0.950824 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_cas_line13_2: cw_9liner_cas_edit
			{
				idc = 1419;
				x = 0.207813 * safezoneW + safezoneX;
				y = 0.950824 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
		};
	};
	class CW_TARGETLOCATIONMETHODS_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_tlm_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_TARGETLOCATIONMETHODS_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_tlm_resource', _this select 0];";
		
		class Controls
		{
			class cw_targetlocactionmehtods_background: cw_targetlocationmethods_picture
			{
				idc = 1200;
				text = "\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Images\targetlocationmethods.paa";
				x = -0.0614583 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.429688 * safezoneW;
				h = 0.758704 * safezoneH;
			};
		};
	};
	class CW_9LINER_MEDEVAC_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_9liner_medv_resource', nil];hint """"";
		duration=1;  
		fadein=0;    
		name="CW_9LINER_MEDEVAC_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_9liner_medv_resource', _this select 0];";
		
		class Controls
		{
			class cw_9liner_medv_background: cw_9liner_medv_picture
			{
				idc = 1200;
				text = "\cw_nineliner_and_notepad\Data\CW_9Liner_Medivac\Images\9liner_medevac.paa";
				x = -0.0213542 * safezoneW + safezoneX;
				y = 0.247099 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.747708 * safezoneH;
				moving = 1;
			};
			class cw_9liner_medevac_edit_line1: cw_9liner_medv_edit
			{
				idc = 1400;
				x = 0.144792 * safezoneW + safezoneX;
				y = 0.34606 * safezoneH + safezoneY;
				w = 0.189062 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medevac_edit_line2: cw_9liner_medv_edit
			{
				idc = 1401;
				x = 0.173438 * safezoneW + safezoneX;
				y = 0.390043 * safezoneH + safezoneY;
				w = 0.160417 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medevac_edit_line3: cw_9liner_medv_edit
			{
				idc = 1402;
				x = 0.161979 * safezoneW + safezoneX;
				y = 0.434026 * safezoneH + safezoneY;
				w = 0.171875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medevac_edit_line4: cw_9liner_medv_edit
			{
				idc = 1403;
				x = 0.144792 * safezoneW + safezoneX;
				y = 0.489004 * safezoneH + safezoneY;
				w = 0.189062 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medevac_edit_line5: cw_9liner_medv_edit
			{
				idc = 1404;
				x = 0.121875 * safezoneW + safezoneX;
				y = 0.554979 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medevac_edit_line6: cw_9liner_medv_edit
			{
				idc = 1405;
				x = 0.133333 * safezoneW + safezoneX;
				y = 0.620953 * safezoneH + safezoneY;
				w = 0.200521 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medevac_edit_line7: cw_9liner_medv_edit
			{
				idc = 1406;
				x = 0.15625 * safezoneW + safezoneX;
				y = 0.719914 * safezoneH + safezoneY;
				w = 0.177604 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medevac_edit_line8: cw_9liner_medv_edit
			{
				idc = 1407;
				x = 0.150521 * safezoneW + safezoneX;
				y = 0.785888 * safezoneH + safezoneY;
				w = 0.183333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medv_edit_1408: cw_9liner_medv_edit
			{
				idc = 1408;
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.840867 * safezoneH + safezoneY;
				w = 0.200521 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_9liner_medevac_edit_line3_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc = 2800;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
			};
			class cw_9liner_medevac_edit_line3_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc = 2801;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
			};
			class cw_9liner_medevac_edit_line3_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc = 2802;
				x = 0.173438 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
			};
			class cw_9liner_medevac_edit_line3_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc = 2803;
				x = 0.219271 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;

			};
			class cw_9liner_medevac_edit_line3_cross_picture5: cw_9liner_medv_picture_cross
			{
				idc = 2804;
				x = 0.270833 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
			
			};
			class cw_9liner_medevac_edit_line4_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc = 2805;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.510996 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line4_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc = 2806;
				x = 0.121875 * safezoneW + safezoneX;
				y = 0.510996 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line4_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc = 2807;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.510996 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line4_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc = 2808;
				x = 0.276563 * safezoneW + safezoneX;
				y = 0.510996 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line5_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc = 2809;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.57697 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line5_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc = 2810;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.57697 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line6_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc = 2811;
				x = 0.0588542 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line6_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc = 2812;
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line6_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc = 2813;
				x = 0.173438 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line6_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc = 2814;
				x = 0.247917 * safezoneW + safezoneX;
				y = 0.65394 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line7_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc = 2815;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line7_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc = 2816;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line7_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc = 2817;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line7_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc = 2818;
				x = 0.242188 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line7_cross_picture5: cw_9liner_medv_picture_cross
			{
				idc = 2819;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.741906 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line8_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc = 2820;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line8_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc = 2821;
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line8_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc = 2822;
				x = 0.161979 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line8_cross_picture4: cw_9liner_medv_picture_cross
			{
				idc = 2823;
				x = 0.225 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line8_cross_picture5: cw_9liner_medv_picture_cross
			{
				idc = 2824;
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.796884 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line9_cross_picture1: cw_9liner_medv_picture_cross
			{
				idc = 2825;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.88485 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line9_cross_picture2: cw_9liner_medv_picture_cross
			{
				idc = 2826;
				x = 0.110417 * safezoneW + safezoneX;
				y = 0.88485 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
			class cw_9liner_medevac_edit_line9_cross_picture3: cw_9liner_medv_picture_cross
			{
				idc = 2827;
				x = 0.161979 * safezoneW + safezoneX;
				y = 0.88485 * safezoneH + safezoneY;
				w = 0.0171875 * safezoneW;
				h = 0.0329871 * safezoneH;
				
			
			};
		};
	};
	class CW_CAS_CHECK_IN_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_cas_check_in_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_CAS_CHECK_IN_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_cas_check_in_resource', _this select 0];";
		
		class Controls
		{
			class cw_cas_checkIn_background: cw_cas_check_in_picture
			{
				idc = 1200;
				text = "\cw_nineliner_and_notepad\Data\CW_CAS_Check_In\Images\cas_check_in.paa";
				x = -0.0843753 * safezoneW + safezoneX;
				y = 0.225107 * safezoneH + safezoneY;
				w = 0.492708 * safezoneW;
				h = 0.802687 * safezoneH;
			};
			class cw_cas_checkIn_line0_1: cw_cas_check_in_edit
			{
				idc = 1400;
				x = 0.0588542 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0916667 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_cas_checkIn_line0_2: cw_cas_check_in_edit
			{
				idc = 1401;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.103125 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_cas_checkIn_line1: cw_cas_check_in_edit
			{
				idc = 1402;
				x = 0.144792 * safezoneW + safezoneX;
				y = 0.476009 * safezoneH + safezoneY;
				w = 0.143229 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_cas_checkIn_line2: cw_cas_check_in_edit
			{
				idc = 1403;
				x = 0.139062 * safezoneW + safezoneX;
				y = 0.5045 * safezoneH + safezoneY;
				w = 0.148958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_cas_checkIn_line3: cw_cas_check_in_edit
			{
				idc = 1404;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.537987 * safezoneH + safezoneY;
				w = 0.171875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_cas_checkIn_line4: cw_cas_check_in_edit
			{
				idc = 1405;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.570974 * safezoneH + safezoneY;
				w = 0.211979 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_cas_checkIn_line5: cw_cas_check_in_edit
			{
				idc = 1406;
				x = 0.0932292 * safezoneW + safezoneX;
				y = 0.602961 * safezoneH + safezoneY;
				w = 0.194792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_cas_checkIn_line6: cw_cas_check_in_edit
			{
				idc = 1407;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.647944 * safezoneH + safezoneY;
				w = 0.246354 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_cas_checkIn_line7: cw_cas_check_in_edit
			{
				idc = 1408;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.679931 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
		};
	};	
	
		class CW_GUNSHIP_CALL_FOR_FIRE_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_5liner_gcff_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_GUNSHIP_CALL_FOR_FIRE_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_5liner_gcff_resource', _this select 0];";
		
		class Controls
		{
				class cw_gcff_background: cw_5liner_gcff_picture
				{
					idc = 1200;
					text = "\cw_nineliner_and_notepad\Data\CW_GunshipCallForFire\Images\gunshipcallforfire.paa";
					x = -0.0843753 * safezoneW + safezoneX;
					y = 0.225107 * safezoneH + safezoneY;
					w = 0.492708 * safezoneW;
					h = 0.802687 * safezoneH;
					moving = 1;
				};
				class cw_gcff_line1_1: cw_5liner_gcff_edit
				{
					idc = 1400;
					x = 0.139062 * safezoneW + safezoneX;
					y = 0.384047 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class cw_gcff_line1_2: cw_5liner_gcff_edit
				{
					idc = 1401;
					x = 0.225 * safezoneW + safezoneX;
					y = 0.384047 * safezoneH + safezoneY;
					w = 0.0515625 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class cw_gcff_line2_1: cw_5liner_gcff_edit
				{
					idc = 1402;
					x = 0.190625 * safezoneW + safezoneX;
					y = 0.439026 * safezoneH + safezoneY;
					w = 0.0802083 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class cw_gcff_line2_2: cw_5liner_gcff_edit
				{
					idc = 1403;
					x = 0.0703121 * safezoneW + safezoneX;
					y = 0.472013 * safezoneH + safezoneY;
					w = 0.177604 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class cw_gcff_line3_1: cw_5liner_gcff_edit
				{
					idc = 1404;
					x = 0.104688 * safezoneW + safezoneX;
					y = 0.505 * safezoneH + safezoneY;
					w = 0.131771 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class cw_gcff_line4_1: cw_5liner_gcff_edit
				{
					idc = 1405;
					x = 0.184896 * safezoneW + safezoneX;
					y = 0.538987 * safezoneH + safezoneY;
					w = 0.0401042 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
				class cw_gcff_line5_1: cw_5liner_gcff_edit
				{
					idc = 1406;
					x = 0.0760417 * safezoneW + safezoneX;
					y = 0.570974 * safezoneH + safezoneY;
					w = 0.154687 * safezoneW;
					h = 0.0219914 * safezoneH;
				};
		};
	};
	
	class CW_NOTEBLOCK_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_noteblock_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_NOTEBLOCK_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_noteblock_resource', _this select 0];";

		class Controls
		{
			class cw_noteblock_background: cw_noteblock_picture
			{
				idc = 1200;
				text = "\cw_nineliner_and_notepad\Data\CW_Noteblock\Images\noteblock.paa";
				x = -0.0557292 * safezoneW + safezoneX;
				y = 0.26909 * safezoneH + safezoneY;
				w = 0.48125 * safezoneW;
				h = 0.747708 * safezoneH;
				moving = 1;
			};
			class cw_noteblock_edit: cw_noteblock_edit
			{
				idc = 1400;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.307 * safezoneH + safezoneY;
				w = 0.303646 * safezoneW;
				h = 0.637751 * safezoneH;
			};
		};
	};
	
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
			class cw_targetlocactionmehtods_background: cw_ffe_picture
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
		};
	};
	
	class CW_ADJUST_FIRE_MISSION_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_afm_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_ADJUST_FIRE_MISSION_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_afm_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";

		class Controls
		{
			class cw_adjustfiremission_background: cw_afm_picture
			{
				idc = 1200;
				text = "\cw_nineliner_and_notepad\Data\CW_AdjustFireMission\Images\adjustfiremission.paa";
				x = -0.0614583 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.423958 * safezoneW;
				h = 0.758704 * safezoneH;
			};
			class cw_afm_edit_line0_1: cw_afm_edit
			{
				idc = 1400;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.302077 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line0_2: cw_afm_edit
			{
				idc = 1402;
				x = 0.15625 * safezoneW + safezoneX;
				y = 0.302077 * safezoneH + safezoneY;
				w = 0.0458333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line1: cw_afm_edit
			{
				idc = 1401;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.339064 * safezoneH + safezoneY;
				w = 0.217708 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line2: cw_afm_edit
			{
				idc = 1403;
				x = 0.104688 * safezoneW + safezoneX;
				y = 0.383047 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line3: cw_afm_edit
			{
				idc = 1404;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.605961 * safezoneH + safezoneY;
				w = 0.0973958 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line4: cw_afm_edit
			{
				idc = 1405;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.635948 * safezoneH + safezoneY;
				w = 0.131771 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line5: cw_afm_edit
			{
				idc = 1406;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.65794 * safezoneH + safezoneY;
				w = 0.1375 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line6: cw_afm_edit
			{
				idc = 1407;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.678931 * safezoneH + safezoneY;
				w = 0.200521 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line7: cw_afm_edit
			{
				idc = 1408;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.701923 * safezoneH + safezoneY;
				w = 0.160417 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line8: cw_afm_edit
			{
				idc = 1409;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.752901 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line9: cw_afm_edit
			{
				idc = 1410;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.80788 * safezoneH + safezoneY;
				w = 0.0515625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line10: cw_afm_edit
			{
				idc = 1411;
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.846867 * safezoneH + safezoneY;
				w = 0.0458333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_edit_line11: cw_afm_edit
			{
				idc = 1412;
				x = 0.0932292 * safezoneW + safezoneX;
				y = 0.945828 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_afm_ringle_1: cw_afm_picture
			{
				idc = 1201;
				x = 0.167708 * safezoneW + safezoneX;
				y = 0.408039 * safezoneH + safezoneY;
				w = 0.0572917 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_2: cw_afm_picture
			{
				idc = 1202;
				x = 0.225 * safezoneW + safezoneX;
				y = 0.408039 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class vcw_afm_ringle_3: cw_afm_picture
			{
				idc = 1203;
				x = 0.254375 * safezoneW + safezoneX;
				y = 0.408039 * safezoneH + safezoneY;
				w = 0.0229167 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_4: cw_afm_picture
			{
				idc = 1204;
				x = 0.190625 * safezoneW + safezoneX;
				y = 0.42303 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_afm_ringle_5: cw_afm_picture
			{
				idc = 1205;
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.450017 * safezoneH + safezoneY;
				w = 0.0744792 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_6: cw_afm_picture
			{
				idc = 1206;
				x = 0.253646 * safezoneW + safezoneX;
				y = 0.450017 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_7: cw_afm_picture
			{
				idc = 1207;
				x = 0.0588542 * safezoneW + safezoneX;
				y = 0.467013 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_afm_ringle_8: cw_afm_picture
			{
				idc = 1208;
				x = 0.127604 * safezoneW + safezoneX;
				y = 0.464013 * safezoneH + safezoneY;
				w = 0.103125 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
		};
	};
	
	class CW_MARKING_MISSION_RESOURCE
	{
		idd = -1;
		onUnload = "uiNamespace setVariable ['cw_mm_resource', nil];hint """"";
		duration=0.1;  
		fadein=0;    
		name="CW_MARKING_MISSION_RESOURCE";
		onLoad = "uiNamespace setVariable ['cw_mm_resource', _this select 0];call cw_9liner_cas_fnc_hotkey;";

		class Controls
		{
			class cw_mm_background: cw_mm_picture
			{
				idc = 1200;
				text = "\cw_nineliner_and_notepad\Data\CW_MarkingMission\Images\markingmission.paa";
				x = -0.0614583 * safezoneW + safezoneX;
				y = 0.236103 * safezoneH + safezoneY;
				w = 0.423958 * safezoneW;
				h = 0.758704 * safezoneH;
			};
			class cw_mm_edit_line0_1: cw_mm_edit
			{
				idc = 1400;
				x = 0.01875 * safezoneW + safezoneX;
				y = 0.307077 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_mm_edit_line0_2: cw_mm_edit
			{
				idc = 1402;
				x = 0.116146 * safezoneW + safezoneX;
				y = 0.307077 * safezoneH + safezoneY;
				w = 0.0630208 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_mm_edit_line1: cw_mm_edit
			{
				idc = 1401;
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.357056 * safezoneH + safezoneY;
				w = 0.194792 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_mm_edit_line2: cw_mm_edit
			{
				idc = 1403;
				x = 0.0703125 * safezoneW + safezoneX;
				y = 0.636948 * safezoneH + safezoneY;
				w = 0.177604 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_mm_edit_line3: cw_mm_edit
			{
				idc = 1404;
				x = 0.121146 * safezoneW + safezoneX;
				y = 0.667936 * safezoneH + safezoneY;
				w = 0.126042 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_mm_edit_line4: cw_mm_edit
			{
				idc = 1405;
				x = 0.0989583 * safezoneW + safezoneX;
				y = 0.701923 * safezoneH + safezoneY;
				w = 0.183333 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_mm_edit_line5: cw_mm_edit
			{
				idc = 1406;
				x = 0.0817708 * safezoneW + safezoneX;
				y = 0.73391 * safezoneH + safezoneY;
				w = 0.154687 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_mm_edit_line6: cw_mm_edit
			{
				idc = 1407;
				x = 0.0760417 * safezoneW + safezoneX;
				y = 0.765897 * safezoneH + safezoneY;
				w = 0.20625 * safezoneW;
				h = 0.0219914 * safezoneH;
			};
			class cw_mm_ringle_1: cw_mm_picture
			{
				idc = 1201;
				x = 0.0130208 * safezoneW + safezoneX;
				y = 0.379047 * safezoneH + safezoneY;
				w = 0.034375 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_mm_ringle_2: cw_mm_picture
			{
				idc = 1202;
				
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.379047 * safezoneH + safezoneY;
				w = 0.0229167 * safezoneW;
				h = 0.07697 * safezoneH;
			};
			class cw_mm_ringle_3: cw_mm_picture
			{
				idc = 1203;
				
				x = 0.0645833 * safezoneW + safezoneX;
				y = 0.368051 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.07697 * safezoneH;
			};
			class cw_mm_ringle_4: cw_mm_picture
			{
				idc = 1204;
				x = 0.139062 * safezoneW + safezoneX;
				y = 0.379047 * safezoneH + safezoneY;
				w = 0.114583 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_mm_ringle_5: cw_mm_picture
			{
				idc = 1205;
				
				x = 0.161979 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_mm_ringle_6: cw_mm_picture
			{
				idc = 1206;
				
				x = 0.225 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_mm_ringle_7: cw_mm_picture
			{
				idc = 1207;
				
				x = 0.247917 * safezoneW + safezoneX;
				y = 0.412034 * safezoneH + safezoneY;
				w = 0.0286458 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_mm_ringle_8: cw_mm_picture
			{
				idc = 1208;
				
				x = 0.190625 * safezoneW + safezoneX;
				y = 0.434026 * safezoneH + safezoneY;
				w = 0.0802083 * safezoneW;
				h = 0.0659743 * safezoneH;
			};
			class cw_mm_ringle_9: cw_mm_picture
			{
				idc = 1209;
				
				x = 0.179167 * safezoneW + safezoneX;
				y = 0.456017 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.07697 * safezoneH;
			};
			class cw_mm_ringle_10: cw_mm_picture
			{
				idc = 1210;
				
				x = 0.247917 * safezoneW + safezoneX;
				y = 0.467013 * safezoneH + safezoneY;
				w = 0.0401042 * safezoneW;
				h = 0.0549786 * safezoneH;
			};
			class cw_mm_ringle_11: cw_mm_picture
			{
				idc = 1211;
				
				x = 0.0416667 * safezoneW + safezoneX;
				y = 0.478009 * safezoneH + safezoneY;
				w = 0.06875 * safezoneW;
				h = 0.07697 * safezoneH;
			};
			class cw_mm_ringle_12: cw_mm_picture
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
