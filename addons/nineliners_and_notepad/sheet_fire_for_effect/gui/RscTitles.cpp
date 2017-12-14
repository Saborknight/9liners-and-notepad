
class nln_fire_for_effect_resource
{
	idd = -1;
	onUnload = "uiNamespace setVariable ['nln_ffe_resource', nil]; hint '';";
	duration = 0.100000;
	fadein = 0;
	name = "nln_fire_for_effect_resource";
	onLoad = "uiNamespace setVariable ['nln_ffe_resource', _this select 0];call nln_nineliner_cas_fnc_hotkey;";

	class Controls
	{
		class nln_targetlocationmethods_background : nln_ffe_picture
		{
			idc = 1200;
			text = "\nln_nineliner_and_notepad\data\nln_fire_for_effect\images\fireforeffect.paa";
			x = "-0.0614581 * safezoneW + safezoneX";
			y = "0.236103 * safezoneH + safezoneY";
			w = "0.423958 * safezoneW";
			h = "0.758704 * safezoneH";
		};

		class nln_ffe_edit_line0_1 : nln_ffe_edit
		{
			idc = 1400;
			x = "0.01875 * safezoneW + safezoneX";
			y = "0.300077 * safezoneH + safezoneY";
			w = "0.0744792 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line0_2 : nln_ffe_edit
		{
			idc = 1402;
			x = "0.121875 * safezoneW + safezoneX";
			y = "0.300077 * safezoneH + safezoneY";
			w = "0.0744792 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line1 : nln_ffe_edit
		{
			idc = 1401;
			x = "0.0416667 * safezoneW + safezoneX";
			y = "0.340064 * safezoneH + safezoneY";
			w = "0.217708 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line2 : nln_ffe_edit
		{
			idc = 1403;
			x = "0.104688 * safezoneW + safezoneX";
			y = "0.381047 * safezoneH + safezoneY";
			w = "0.0916667 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line3 : nln_ffe_edit
		{
			idc = 1404;
			x = "0.0703125 * safezoneW + safezoneX";
			y = "0.592966 * safezoneH + safezoneY";
			w = "0.223438 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line4 : nln_ffe_edit
		{
			idc = 1405;
			x = "0.116146 * safezoneW + safezoneX";
			y = "0.620953 * safezoneH + safezoneY";
			w = "0.143229 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line5 : nln_ffe_edit
		{
			idc = 1406;
			x = "0.0989583 * safezoneW + safezoneX";
			y = "0.642944 * safezoneH + safezoneY";
			w = "0.148958 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line6 : nln_ffe_edit
		{
			idc = 1407;
			x = "0.0817708 * safezoneW + safezoneX";
			y = "0.669936 * safezoneH + safezoneY";
			w = "0.20625 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line7 : nln_ffe_edit
		{
			idc = 1408;
			x = "0.0760417 * safezoneW + safezoneX";
			y = "0.697923 * safezoneH + safezoneY";
			w = "0.171875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line8 : nln_ffe_edit
		{
			idc = 1409;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.746906 * safezoneH + safezoneY";
			w = "0.189062 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line9 : nln_ffe_edit
		{
			idc = 1410;
			x = "0.0703125 * safezoneW + safezoneX";
			y = "0.796884 * safezoneH + safezoneY";
			w = "0.0458333 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line10 : nln_ffe_edit
		{
			idc = 1411;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.838867 * safezoneH + safezoneY";
			w = "0.0572917 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_edit_line11 : nln_ffe_edit
		{
			idc = 1412;
			x = "0.0932292 * safezoneW + safezoneX";
			y = "0.950824 * safezoneH + safezoneY";
			w = "0.154687 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_ffe_ringle_1 : nln_ffe_picture
		{
			idc = 1201;
			text = "";
			x = "0.180896 * safezoneW + safezoneX";
			y = "0.401039 * safezoneH + safezoneY";
			w = "0.0572917 * safezoneW";
			h = "0.0549786 * safezoneH";
		};

		class nln_ffe_ringle_2 : nln_ffe_picture
		{
			idc = 1202;
			text = "";
			x = "0.236458 * safezoneW + safezoneX";
			y = "0.401039 * safezoneH + safezoneY";
			w = "0.0286458 * safezoneW";
			h = "0.0549786 * safezoneH";
		};

		class vnln_ffe_ringle_3 : nln_ffe_picture
		{
			idc = 1203;
			text = "";
			x = "0.264833 * safezoneW + safezoneX";
			y = "0.401039 * safezoneH + safezoneY";
			w = "0.0229167 * safezoneW";
			h = "0.0549786 * safezoneH";
		};

		class nln_ffe_ringle_4 : nln_ffe_picture
		{
			idc = 1204;
			text = "";
			x = "0.204813 * safezoneW + safezoneX";
			y = "0.412034 * safezoneH + safezoneY";
			w = "0.0802083 * safezoneW";
			h = "0.0659743 * safezoneH";
		};

		class nln_ffe_ringle_5 : nln_ffe_picture
		{
			idc = 1205;
			text = "";
			x = "0.177167 * safezoneW + safezoneX";
			y = "0.443021 * safezoneH + safezoneY";
			w = "0.0744792 * safezoneW";
			h = "0.0549786 * safezoneH";
		};

		class nln_ffe_ringle_6 : nln_ffe_picture
		{
			idc = 1206;
			text = "";
			x = "0.250646 * safezoneW + safezoneX";
			y = "0.443021 * safezoneH + safezoneY";
			w = "0.034375 * safezoneW";
			h = "0.0549786 * safezoneH";
		};

		class nln_ffe_ringle_7 : nln_ffe_picture
		{
			idc = 1207;
			text = "";
			x = "0.0416666 * safezoneW + safezoneX";
			y = "0.456017 * safezoneH + safezoneY";
			w = "0.06875 * safezoneW";
			h = "0.0549786 * safezoneH";
		};

		class nln_ffe_ringle_8 : nln_ffe_picture
		{
			idc = 1208;
			text = "";
			x = "0.110417 * safezoneW + safezoneX";
			y = "0.456017 * safezoneH + safezoneY";
			w = "0.0973958 * safezoneW";
			h = "0.0549786 * safezoneH";
		};
	};
};