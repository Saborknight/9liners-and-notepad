
class nln_cas_nineliner
{
	idd = -1;
    duration = 9999999999999e10;
    fadein = 0;
    fadeout = 0;
	name = "nln_cas_nineliner";
	onLoad = "uiNamespace setVariable ['nln_cas_nineliner', _this select 0];";

	class Controls
	{
		class nln_nineliner_cas_background : nln_nineliner_cas_picture
		{
			idc = 1200;
			text = "\x\nln\addons\sheets\sheet_cas_nineliner\data\ui\cas_nineliner.paa";
			x = "-0.0786458 * safezoneW + safezoneX";
			y = "0.26909 * safezoneH + safezoneY";
			w = "0.452604 * safezoneW";
			h = "0.725717 * safezoneH";
			moving = 1;
		};

		class nln_nineliner_cas_line0_1 : nln_nineliner_cas_edit
		{
			idc = 1400;
			x = "0.121875 * safezoneW + safezoneX";
			y = "0.362056 * safezoneH + safezoneY";
			w = "0.0802083 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line0_2 : nln_nineliner_cas_edit
		{
			idc = 1401;
			x = "0.225 * safezoneW + safezoneX";
			y = "0.362056 * safezoneH + safezoneY";
			w = "0.0630208 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line1 : nln_nineliner_cas_edit
		{
			idc = 1402;
			x = "0.0989583 * safezoneW + safezoneX";
			y = "0.413034 * safezoneH + safezoneY";
			w = "0.189062 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line2 : nln_nineliner_cas_edit
		{
			idc = 1403;
			x = "0.104688 * safezoneW + safezoneX";
			y = "0.434026 * safezoneH + safezoneY";
			w = "0.148958 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line2_2 : nln_nineliner_cas_edit
		{
			idc = 1404;
			x = "0.0989583 * safezoneW + safezoneX";
			y = "0.471013 * safezoneH + safezoneY";
			w = "0.154687 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line3 : nln_nineliner_cas_edit
		{
			idc = 1405;
			x = "0.104688 * safezoneW + safezoneX";
			y = "0.489004 * safezoneH + safezoneY";
			w = "0.183333 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line4 : nln_nineliner_cas_edit
		{
			idc = 1406;
			x = "0.127604 * safezoneW + safezoneX";
			y = "0.521991 * safezoneH + safezoneY";
			w = "0.120313 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line5 : nln_nineliner_cas_edit
		{
			idc = 1407;
			x = "0.133333 * safezoneW + safezoneX";
			y = "0.542983 * safezoneH + safezoneY";
			w = "0.154687 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line6 : nln_nineliner_cas_edit
		{
			idc = 1408;
			x = "0.127604 * safezoneW + safezoneX";
			y = "0.570974 * safezoneH + safezoneY";
			w = "0.160417 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line7_1 : nln_nineliner_cas_edit
		{
			idc = 1409;
			x = "0.110417 * safezoneW + safezoneX";
			y = "0.622953 * safezoneH + safezoneY";
			w = "0.0859375 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line7_2 : nln_nineliner_cas_edit
		{
			idc = 1410;
			x = "0.225 * safezoneW + safezoneX";
			y = "0.622953 * safezoneH + safezoneY";
			w = "0.0630208 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line7_3 : nln_nineliner_cas_edit
		{
			idc = 1411;
			x = "0.133333 * safezoneW + safezoneX";
			y = "0.65594 * safezoneH + safezoneY";
			w = "0.0630208 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line8 : nln_nineliner_cas_edit
		{
			idc = 1412;
			x = "0.150521 * safezoneW + safezoneX";
			y = "0.677931 * safezoneH + safezoneY";
			w = "0.1375 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line8_2 : nln_nineliner_cas_edit
		{
			idc = 1413;
			x = "0.139062 * safezoneW + safezoneX";
			y = "0.697923 * safezoneH + safezoneY";
			w = "0.148958 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line9 : nln_nineliner_cas_edit
		{
			idc = 1414;
			x = "0.104688 * safezoneW + safezoneX";
			y = "0.73191 * safezoneH + safezoneY";
			w = "0.183333 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line10 : nln_nineliner_cas_edit
		{
			idc = 1415;
			x = "0.0817708 * safezoneW + safezoneX";
			y = "0.777893 * safezoneH + safezoneY";
			w = "0.20625 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line11 : nln_nineliner_cas_edit
		{
			idc = 1416;
			x = "0.150521 * safezoneW + safezoneX";
			y = "0.8098 * safezoneH + safezoneY";
			w = "0.1375 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line12 : nln_nineliner_cas_edit
		{
			idc = 1417;
			x = "0.133333 * safezoneW + safezoneX";
			y = "0.919837 * safezoneH + safezoneY";
			w = "0.120313 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line13_1 : nln_nineliner_cas_edit
		{
			idc = 1418;
			x = "0.15625 * safezoneW + safezoneX";
			y = "0.950824 * safezoneH + safezoneY";
			w = "0.034375 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_nineliner_cas_line13_2 : nln_nineliner_cas_edit
		{
			idc = 1419;
			x = "0.207813 * safezoneW + safezoneX";
			y = "0.950824 * safezoneH + safezoneY";
			w = "0.034375 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
	};
};
