
class nln_cas_nineliner
{
    idd = -1;
    movingenable = "true";
    onUnload = "call nln_cas_nineliner_fnc_onUnload;";

    class Controls
    {
        class nln_nineliner_cas_background : nln_nineliner_cas_picture
        {
            idc = 1200;
            text = "\x\nln\addons\nineliner_and_notepad\sheet_cas_nineliner\data\ui\cas_nineliner.paa";
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

        class nln_nineliner_cas_btn_clearThis : nln_nineliner_cas_button
        {
            idc = 1600;
            x = "0.0780417 * safezoneW + safezoneX";
            y = "0.274 * safezoneH + safezoneY";
            w = "0.0610208 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_cas_nineliner_fnc_clearPage;";
        };

        class nln_nineliner_cas_btn_clearAll : nln_nineliner_cas_button
        {
            idc = 1601;
            x = "0.196354 * safezoneW + safezoneX";
            y = "0.274 * safezoneH + safezoneY";
            w = "0.0488333 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_cas_nineliner_fnc_clearAllPages;";
        };

        class nln_nineliner_cas_btn_save : nln_nineliner_cas_button
        {
            idc = 1602;
            x = "0.152521 * safezoneW + safezoneX";
            y = "0.273 * safezoneH + safezoneY";
            w = "0.0286458 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_cas_nineliner_fnc_savePage;";
        };

        class nln_nineliner_cas_btn_nextPage : nln_nineliner_cas_button
        {
            idc = 1603;
            x = "0.253646 * safezoneW + safezoneX";
            y = "0.273 * safezoneH + safezoneY";
            w = "0.0401042 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_cas_nineliner_fnc_nextPage;";
        };

        class nln_nineliner_cas_btn_previousPage : nln_nineliner_cas_button
        {
            idc = 1604;
            x = "0.0359375 * safezoneW + safezoneX";
            y = "0.273 * safezoneH + safezoneY";
            w = "0.039 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_cas_nineliner_fnc_previousPage;";
        };

        /*class nln_nineliner_cas_btn_enableControls_2 : nln_nineliner_cas_button
        {
            idc = 1606;
            x = "-2.27865 * safezoneW + safezoneX";
            y = "-1.98503 * safezoneH + safezoneY";
            w = "2.29167 * safezoneW";
            h = "3.8485 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_nineliner_cas\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };
        
        class nln_nineliner_cas_btn_enableControls_1 : nln_nineliner_cas_button
        {
            idc = 1605;
            x = "0.310937 * safezoneW + safezoneX";
            y = "-1.46823 * safezoneH + safezoneY";
            w = "2.29167 * safezoneW";
            h = "3.8485 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_nineliner_cas\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_nineliner_cas_btn_enableControls_3 : nln_nineliner_cas_button
        {
            idc = 1607;
            x = "-0.94375 * safezoneW + safezoneX";
            y = "-3.57941 * safezoneH + safezoneY";
            w = "2.29167 * safezoneW";
            h = "3.8485 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_nineliner_cas\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_nineliner_cas_btn_enableControls4 : nln_nineliner_cas_button
        {
            idc = 1608;
            x = "-0.628646 * safezoneW + safezoneX";
            y = "0.983811 * safezoneH + safezoneY";
            w = "2.29167 * safezoneW";
            h = "3.8485 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_nineliner_cas\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };*/
    };
};
