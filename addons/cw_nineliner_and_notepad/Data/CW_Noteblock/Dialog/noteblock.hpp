class CW_NOTEBLOCK 
{
	idd = -1;
	movingenable = true;
	onUnload = "hint """"";
	
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
			moving = 1;
		};
		class cw_noteblock_bttn_nextPage: cw_noteblock_button
		{
			idc = 1600;
			x = 0.310937 * safezoneW + safezoneX;
			y = 0.291081 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_noteblock_fnc_nextPage;";
		};
		class cw_noteblock_bttn_previousPage: cw_noteblock_button
		{
			idc = 1601;
			x = 0.0416667 * safezoneW + safezoneX;
			y = 0.291081 * safezoneH + safezoneY;
			w = 0.034375 * safezoneW;
			h = 0.0219914 * safezoneH;
			action = "call cw_noteblock_fnc_previousPage;";
		};
		class cw_noteblock_bttn_save: cw_noteblock_button
		{
			idc = 1602;
			x = 0.3479 * safezoneW + safezoneX;
			y = 0.373 * safezoneH + safezoneY;
			w = 0.019 * safezoneW;
			h = 0.047 * safezoneH;
			action = "call cw_noteblock_fnc_savePage;";
		};
		class cw_noteblock_bttn_clearpage: cw_noteblock_button
		{
			idc = 1603;
			x = 0.3479 * safezoneW + safezoneX;
			y = 0.65 * safezoneH + safezoneY;
			w = 0.0155 * safezoneW;
			h = 0.054 * safezoneH;
			action = "call cw_noteblock_fnc_clearPage;";
		};
		class cw_noteblock_bttn_clearall: cw_noteblock_button
		{
			idc = 1604;
			x = 0.3479 * safezoneW + safezoneX;
			y = 0.788 * safezoneH + safezoneY;
			w = 0.015 * safezoneW;
			h = 0.043 * safezoneH;
			action = "call cw_noteblock_fnc_clearBlock;";
		};
		class cw_noteblock_bttn_close: cw_noteblock_button
		{
			idc = 1605;
			x = 0.3479 * safezoneW + safezoneX;
			y = 0.931 * safezoneH + safezoneY;
			w = 0.016 * safezoneW;
			h = 0.045 * safezoneH;
			action = "closeDialog 0;";
		};
		class cw_noteblock_bttn_enableContros_1: cw_noteblock_button
		{
			idc = 1606;
			x = 0.365* safezoneW + safezoneX;
			y = -5 * safezoneH + safezoneY;
			w = 10 * safezoneW;
			h = 10 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_Noteblock\Scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_noteblock_bttn_enableContros_2: cw_noteblock_button
		{
			idc = 1607;
			x = -10 * safezoneW + safezoneX;
			y = -5 * safezoneH + safezoneY;
			w = 10 * safezoneW;
			h = 10 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_Noteblock\Scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_noteblock_bttn_enableContros_3: cw_noteblock_button
		{
			idc = 1608;
			x = -1.0557292 * safezoneW + safezoneX;
			y = -9.715 * safezoneH + safezoneY;
			w = 10 * safezoneW;
			h = 10 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_Noteblock\Scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
		class cw_noteblock_bttn_enableContros_4: cw_noteblock_button
		{
			idc = 1609;
			x = -0.0557292 * safezoneW + safezoneX;
			y = 0.995 * safezoneH + safezoneY;
			w = 10 * safezoneW;
			h = 10 * safezoneH;
			onMouseButtonClick = "execVM ""\cw_nineliner_and_notepad\Data\CW_Noteblock\Scripts\createResource.sqf""";
			onMouseButtonDblClick = "closeDialog 0;";
			tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
			tooltipColorText[] = {1,0,0,1};
		};
	};
};


/*
class RscTitles
{
titles[]={"CW_NOTEBLOCK_RESOURCE"};
	
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
};