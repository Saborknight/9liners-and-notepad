class nln_marking_mission
{
	idd = -1;
    duration = 9999999999999e10;
    fadein = 0;
    fadeout = 0;
	name = "nln_marking_mission";
	onLoad = "uiNamespace setVariable ['nln_marking_mission', (_this select 0)];";
	class Controls
	{
		class nln_mm_background : nln_mm_picture
		{
			idc = 1200;
			text = "\x\nln\addons\nineliners_and_notepad\sheet_marking_mission\data\ui\marking_mission.paa";
			x = "-0.0614583 * safezoneW + safezoneX";
			y = "0.236103 * safezoneH + safezoneY";
			w = "0.423958 * safezoneW";
			h = "0.758704 * safezoneH";
		};

		class nln_mm_edit_line0_1 : nln_mm_edit
		{
			idc = 1400;
			x = "0.01875 * safezoneW + safezoneX";
			y = "0.307077 * safezoneH + safezoneY";
			w = "0.06875 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_mm_edit_line0_2 : nln_mm_edit
		{
			idc = 1402;
			x = "0.116146 * safezoneW + safezoneX";
			y = "0.307077 * safezoneH + safezoneY";
			w = "0.0630208 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_mm_edit_line1 : nln_mm_edit
		{
			idc = 1401;
			x = "0.0416667 * safezoneW + safezoneX";
			y = "0.357056 * safezoneH + safezoneY";
			w = "0.194792 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_mm_edit_line2 : nln_mm_edit
		{
			idc = 1403;
			x = "0.0703125 * safezoneW + safezoneX";
			y = "0.636948 * safezoneH + safezoneY";
			w = "0.177604 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_mm_edit_line3 : nln_mm_edit
		{
			idc = 1404;
			x = "0.121146 * safezoneW + safezoneX";
			y = "0.667936 * safezoneH + safezoneY";
			w = "0.126042 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_mm_edit_line4 : nln_mm_edit
		{
			idc = 1405;
			x = "0.0989583 * safezoneW + safezoneX";
			y = "0.701923 * safezoneH + safezoneY";
			w = "0.183333 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_mm_edit_line5 : nln_mm_edit
		{
			idc = 1406;
			x = "0.0817708 * safezoneW + safezoneX";
			y = "0.73391 * safezoneH + safezoneY";
			w = "0.154687 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_mm_edit_line6 : nln_mm_edit
		{
			idc = 1407;
			x = "0.0760417 * safezoneW + safezoneX";
			y = "0.765897 * safezoneH + safezoneY";
			w = "0.20625 * safezoneW";
			h = "0.0219914 * safezoneH";
		};

		class nln_mm_ringle_1 : nln_mm_picture
		{
			idc = 1201;
			x = "0.0130208 * safezoneW + safezoneX";
			y = "0.379047 * safezoneH + safezoneY";
			w = "0.034375 * safezoneW";
			h = "0.0659743 * safezoneH";
		};

		class nln_mm_ringle_2 : nln_mm_picture
		{
			idc = 1202;
			x = "0.0416667 * safezoneW + safezoneX";
			y = "0.379047 * safezoneH + safezoneY";
			w = "0.0229167 * safezoneW";
			h = "0.07697 * safezoneH";
		};

		class nln_mm_ringle_3 : nln_mm_picture
		{
			idc = 1203;
			x = "0.0645833 * safezoneW + safezoneX";
			y = "0.368051 * safezoneH + safezoneY";
			w = "0.0802083 * safezoneW";
			h = "0.07697 * safezoneH";
		};

		class nln_mm_ringle_4 : nln_mm_picture
		{
			idc = 1204;
			x = "0.139062 * safezoneW + safezoneX";
			y = "0.379047 * safezoneH + safezoneY";
			w = "0.114583 * safezoneW";
			h = "0.0659743 * safezoneH";
		};

		class nln_mm_ringle_5 : nln_mm_picture
		{
			idc = 1205;
			x = "0.161979 * safezoneW + safezoneX";
			y = "0.412034 * safezoneH + safezoneY";
			w = "0.06875 * safezoneW";
			h = "0.0659743 * safezoneH";
		};

		class nln_mm_ringle_6 : nln_mm_picture
		{
			idc = 1206;
			x = "0.225 * safezoneW + safezoneX";
			y = "0.412034 * safezoneH + safezoneY";
			w = "0.0286458 * safezoneW";
			h = "0.0659743 * safezoneH";
		};

		class nln_mm_ringle_7 : nln_mm_picture
		{
			idc = 1207;
			x = "0.247917 * safezoneW + safezoneX";
			y = "0.412034 * safezoneH + safezoneY";
			w = "0.0286458 * safezoneW";
			h = "0.0659743 * safezoneH";
		};

		class nln_mm_ringle_8 : nln_mm_picture
		{
			idc = 1208;
			x = "0.190625 * safezoneW + safezoneX";
			y = "0.434026 * safezoneH + safezoneY";
			w = "0.0802083 * safezoneW";
			h = "0.0659743 * safezoneH";
		};

		class nln_mm_ringle_9 : nln_mm_picture
		{
			idc = 1209;
			x = "0.179167 * safezoneW + safezoneX";
			y = "0.456017 * safezoneH + safezoneY";
			w = "0.06875 * safezoneW";
			h = "0.07697 * safezoneH";
		};

		class nln_mm_ringle_10 : nln_mm_picture
		{
			idc = 1210;
			x = "0.247917 * safezoneW + safezoneX";
			y = "0.467013 * safezoneH + safezoneY";
			w = "0.0401042 * safezoneW";
			h = "0.0549786 * safezoneH";
		};

		class nln_mm_ringle_11 : nln_mm_picture
		{
			idc = 1211;
			x = "0.0416667 * safezoneW + safezoneX";
			y = "0.478009 * safezoneH + safezoneY";
			w = "0.06875 * safezoneW";
			h = "0.07697 * safezoneH";
		};

		class nln_mm_ringle_12 : nln_mm_picture
		{
			idc = 1212;
			x = "0.104688 * safezoneW + safezoneX";
			y = "0.478009 * safezoneH + safezoneY";
			w = "0.103125 * safezoneW";
			h = "0.07697 * safezoneH";
		};
	};
};