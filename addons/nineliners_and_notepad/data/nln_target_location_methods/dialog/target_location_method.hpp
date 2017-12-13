class nln_target_location_methods
{
	idd = -1;
	movingenable = true;

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
			moving = 1;
		};
		class nln_targetlocationmethods_enableControls_1: nln_targetlocationmethods_button
		{
			idc = 1600;
			x = 0.29375 * safezoneW + safezoneX;
			y = -0.247708 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_target_location_methods\scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_targetlocationmethods_enableControls_2: nln_targetlocationmethods_button
		{
			idc = 1601;
			x = -1.64271 * safezoneW + safezoneX;
			y = -0.148747 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_target_location_methods\scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_targetlocationmethods_3: nln_targetlocationmethods_button
		{
			idc = 1602;
			x = -0.101562 * safezoneW + safezoneX;
			y = -2.44685 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_target_location_methods\scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class nln_targetlocationmethods_4: nln_targetlocationmethods_button
		{
			idc = 1603;
			x = -0.611458 * safezoneW + safezoneX;
			y = 0.983811 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\nln_nineliner_and_notepad\data\nln_target_location_methods\scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
	};
};

/*
class RscTitles
{
titles[]={"nln_target_location_methods_resource"};

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
			class nln_targetlocationmethods_enableControls_1: nln_targetlocationmethods_button
			{
				idc = 1600;
				x = 0.29375 * safezoneW + safezoneX;
				y = -0.247708 * safezoneH + safezoneY;
				w = 1.65573 * safezoneW;
				h = 2.69395 * safezoneH;
			};
			class nln_targetlocationmethods_enableControls_2: nln_targetlocationmethods_button
			{
				idc = 1601;
				x = -1.64271 * safezoneW + safezoneX;
				y = -0.148747 * safezoneH + safezoneY;
				w = 1.65573 * safezoneW;
				h = 2.69395 * safezoneH;
			};
			class nln_targetlocationmethods_3: nln_targetlocationmethods_button
			{
				idc = 1602;
				x = -0.101562 * safezoneW + safezoneX;
				y = -2.44685 * safezoneH + safezoneY;
				w = 1.65573 * safezoneW;
				h = 2.69395 * safezoneH;
			};
			class nln_targetlocationmethods_4: nln_targetlocationmethods_button
			{
				idc = 1603;
				x = -0.611458 * safezoneW + safezoneX;
				y = 0.983811 * safezoneH + safezoneY;
				w = 1.65573 * safezoneW;
				h = 2.69395 * safezoneH;
			};
		};
	};
};*/
