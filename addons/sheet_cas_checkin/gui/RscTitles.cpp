
class nln_cas_checkin
{
	idd = -1;
    duration = 9999999999999e10;
    fadein = 0;
    fadeout = 0;
	name = "nln_cas_checkin";
	onLoad = "uiNamespace setVariable ['nln_cas_checkin', (_this select 0)];";

	class Controls
	{
		class nln_cas_checkIn_background : nln_cas_check_in_picture
		{
			idc = 1200;
			text = "\x\nln\addons\cas_checkin\data\ui\cas_check_in.paa";
			x = "-0.0843753 * safezoneW + safezoneX";
			y = "0.225107 * safezoneH + safezoneY";
			w = "0.492708 * safezoneW";
			h = "0.802687 * safezoneH";
		};

		class nln_cas_checkIn_line0_1 : nln_cas_check_in_edit
		{
			idc = 1400;
			x = "0.0588542 * safezoneW + safezoneX";
			y = "0.412034 * safezoneH + safezoneY";
			w = "0.0916667 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_cas_checkIn_line0_2 : nln_cas_check_in_edit
		{
			idc = 1401;
			x = "0.179167 * safezoneW + safezoneX";
			y = "0.412034 * safezoneH + safezoneY";
			w = "0.103125 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_cas_checkIn_line1 : nln_cas_check_in_edit
		{
			idc = 1402;
			x = "0.144792 * safezoneW + safezoneX";
			y = "0.476009 * safezoneH + safezoneY";
			w = "0.143229 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_cas_checkIn_line2 : nln_cas_check_in_edit
		{
			idc = 1403;
			x = "0.139062 * safezoneW + safezoneX";
			y = "0.5045 * safezoneH + safezoneY";
			w = "0.148958 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_cas_checkIn_line3 : nln_cas_check_in_edit
		{
			idc = 1404;
			x = "0.116146 * safezoneW + safezoneX";
			y = "0.537987 * safezoneH + safezoneY";
			w = "0.171875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_cas_checkIn_line4 : nln_cas_check_in_edit
		{
			idc = 1405;
			x = "0.0760417 * safezoneW + safezoneX";
			y = "0.570974 * safezoneH + safezoneY";
			w = "0.211979 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_cas_checkIn_line5 : nln_cas_check_in_edit
		{
			idc = 1406;
			x = "0.0932292 * safezoneW + safezoneX";
			y = "0.602961 * safezoneH + safezoneY";
			w = "0.194792 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_cas_checkIn_line6 : nln_cas_check_in_edit
		{
			idc = 1407;
			x = "0.0416667 * safezoneW + safezoneX";
			y = "0.647944 * safezoneH + safezoneY";
			w = "0.246354 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_cas_checkIn_line7 : nln_cas_check_in_edit
		{
			idc = 1408;
			x = "0.0817708 * safezoneW + safezoneX";
			y = "0.679931 * safezoneH + safezoneY";
			w = "0.20625 * safezoneW";
			h = "0.0219914 * safezoneH";
		};
	};
};
