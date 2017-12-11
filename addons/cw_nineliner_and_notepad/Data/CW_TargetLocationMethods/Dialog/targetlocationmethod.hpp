class CW_TARGETLOCATIONMETHODS
{
	idd = -1;
	movingenable = true;
	
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
			moving = 1;
		};
		class cw_targetlocationmethods_enableControls_1: cw_targetlocationmethods_button
		{
			idc = 1600;
			x = 0.29375 * safezoneW + safezoneX;
			y = -0.247708 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_targetlocationmethods_enableControls_2: cw_targetlocationmethods_button
		{
			idc = 1601;
			x = -1.64271 * safezoneW + safezoneX;
			y = -0.148747 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_targetlocationmethods_3: cw_targetlocationmethods_button
		{
			idc = 1602;
			x = -0.101562 * safezoneW + safezoneX;
			y = -2.44685 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_targetlocationmethods_4: cw_targetlocationmethods_button
		{
			idc = 1603;
			x = -0.611458 * safezoneW + safezoneX;
			y = 0.983811 * safezoneH + safezoneY;
			w = 1.65573 * safezoneW;
			h = 2.69395 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_TargetLocationMethods\Scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
	};
};

/*
class RscTitles
{
titles[]={"CW_TARGETLOCATIONMETHODS_RESOURCE"};
	
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
			class cw_targetlocationmethods_enableControls_1: cw_targetlocationmethods_button
			{
				idc = 1600;
				x = 0.29375 * safezoneW + safezoneX;
				y = -0.247708 * safezoneH + safezoneY;
				w = 1.65573 * safezoneW;
				h = 2.69395 * safezoneH;
			};
			class cw_targetlocationmethods_enableControls_2: cw_targetlocationmethods_button
			{
				idc = 1601;
				x = -1.64271 * safezoneW + safezoneX;
				y = -0.148747 * safezoneH + safezoneY;
				w = 1.65573 * safezoneW;
				h = 2.69395 * safezoneH;
			};
			class cw_targetlocationmethods_3: cw_targetlocationmethods_button
			{
				idc = 1602;
				x = -0.101562 * safezoneW + safezoneX;
				y = -2.44685 * safezoneH + safezoneY;
				w = 1.65573 * safezoneW;
				h = 2.69395 * safezoneH;
			};
			class cw_targetlocationmethods_4: cw_targetlocationmethods_button
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
