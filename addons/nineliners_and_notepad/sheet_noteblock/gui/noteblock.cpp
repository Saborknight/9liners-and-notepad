
class nln_noteblock
{
    idd = -1;
    movingenable = "true";
    onUnload = "hint '';";
    class Controls
    {
        class nln_noteblock_background : nln_noteblock_picture
        {
            idc = 1200;
            text = "\nln_nineliner_and_notepad\data\nln_noteblock\images\noteblock.paa";
            x = "-0.0557292 * safezoneW + safezoneX";
            y = "0.26909 * safezoneH + safezoneY";
            w = "0.48125 * safezoneW";
            h = "0.747708 * safezoneH";
            moving = 1;
        };

        class nln_noteblock_edit : nln_noteblock_edit
        {
            idc = 1400;
            x = "0.0416667 * safezoneW + safezoneX";
            y = "0.307 * safezoneH + safezoneY";
            w = "0.303646 * safezoneW";
            h = "0.637751 * safezoneH";
            moving = 1;
        };

        class nln_noteblock_btn_nextPage : nln_noteblock_button
        {
            idc = 1600;
            x = "0.310937 * safezoneW + safezoneX";
            y = "0.291081 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_noteblock_fnc_nextPage;";
        };

        class nln_noteblock_btn_previousPage : nln_noteblock_button
        {
            idc = 1601;
            x = "0.0416667 * safezoneW + safezoneX";
            y = "0.291081 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_noteblock_fnc_previousPage;";
        };

        class nln_noteblock_btn_save : nln_noteblock_button
        {
            idc = 1602;
            x = "0.3479 * safezoneW + safezoneX";
            y = "0.373 * safezoneH + safezoneY";
            w = "0.019 * safezoneW";
            h = "0.047 * safezoneH";
            action = "call nln_noteblock_fnc_savePage;";
        };

        class nln_noteblock_btn_clearpage : nln_noteblock_button
        {
            idc = 1603;
            x = "0.3479 * safezoneW + safezoneX";
            y = "0.65 * safezoneH + safezoneY";
            w = "0.0155 * safezoneW";
            h = "0.054 * safezoneH";
            action = "call nln_noteblock_fnc_clearPage;";
        };

        class nln_noteblock_btn_clearall : nln_noteblock_button
        {
            idc = 1604;
            x = "0.3479 * safezoneW + safezoneX";
            y = "0.788 * safezoneH + safezoneY";
            w = "0.015 * safezoneW";
            h = "0.043 * safezoneH";
            action = "call nln_noteblock_fnc_clearBlock;";
        };

        class nln_noteblock_btn_close : nln_noteblock_button
        {
            idc = 1605;
            x = "0.3479 * safezoneW + safezoneX";
            y = "0.931 * safezoneH + safezoneY";
            w = "0.016 * safezoneW";
            h = "0.045 * safezoneH";
            action = "closeDialog 0;";
        };

        class nln_noteblock_btn_enableControls_1 : nln_noteblock_button
        {
            idc = 1606;
            x = "0.365* safezoneW + safezoneX";
            y = "-5 * safezoneH + safezoneY";
            w = "10 * safezoneW";
            h = "10 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_noteblock\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_noteblock_btn_enableControls_2 : nln_noteblock_button
        {
            idc = 1607;
            x = "-10 * safezoneW + safezoneX";
            y = "-5 * safezoneH + safezoneY";
            w = "10 * safezoneW";
            h = "10 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_noteblock\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_noteblock_btn_enableControls_3 : nln_noteblock_button
        {
            idc = 1608;
            x = "-1.0557292 * safezoneW + safezoneX";
            y = "-9.715 * safezoneH + safezoneY";
            w = "10 * safezoneW";
            h = "10 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_noteblock\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_noteblock_btn_enableControls_4 : nln_noteblock_button
        {
            idc = 1609;
            x = "-0.0557292 * safezoneW + safezoneX";
            y = "0.995 * safezoneH + safezoneY";
            w = "10 * safezoneW";
            h = "10 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_noteblock\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };
    };
};
