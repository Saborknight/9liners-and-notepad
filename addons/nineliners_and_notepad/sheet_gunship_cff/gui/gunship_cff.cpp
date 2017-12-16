
class nln_gunship_cff
{
    idd = -1;
    movingenable = "true";
    onUnload = "call nln_gunship_cff_fnc_onUnload;";

    class Controls
    {
        class nln_gcff_background : nln_fiveliner_gcff_picture
        {
            idc = 1200;
            text = "\x\nln\addons\nineliners_and_notepad\sheet_gunship_cff\data\ui\gunship_cff.paa";
            x = "-0.0843753 * safezoneW + safezoneX";
            y = "0.225107 * safezoneH + safezoneY";
            w = "0.492708 * safezoneW";
            h = "0.802687 * safezoneH";
            moving = 1;
        };

        class nln_gcff_line1_1 : nln_fiveliner_gcff_edit
        {
            idc = 1400;
            x = "0.139062 * safezoneW + safezoneX";
            y = "0.384047 * safezoneH + safezoneY";
            w = "0.0515625 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_gcff_line1_2 : nln_fiveliner_gcff_edit
        {
            idc = 1401;
            x = "0.225 * safezoneW + safezoneX";
            y = "0.384047 * safezoneH + safezoneY";
            w = "0.0515625 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_gcff_line2_1 : nln_fiveliner_gcff_edit
        {
            idc = 1402;
            x = "0.190625 * safezoneW + safezoneX";
            y = "0.439026 * safezoneH + safezoneY";
            w = "0.0802083 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_gcff_line2_2 : nln_fiveliner_gcff_edit
        {
            idc = 1403;
            x = "0.0703121 * safezoneW + safezoneX";
            y = "0.472013 * safezoneH + safezoneY";
            w = "0.177604 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_gcff_line3_1 : nln_fiveliner_gcff_edit
        {
            idc = 1404;
            x = "0.104688 * safezoneW + safezoneX";
            y = "0.505 * safezoneH + safezoneY";
            w = "0.131771 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_gcff_line4_1 : nln_fiveliner_gcff_edit
        {
            idc = 1405;
            x = "0.184896 * safezoneW + safezoneX";
            y = "0.538987 * safezoneH + safezoneY";
            w = "0.0401042 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_gcff_line5_1 : nln_fiveliner_gcff_edit
        {
            idc = 1406;
            x = "0.0760417 * safezoneW + safezoneX";
            y = "0.570974 * safezoneH + safezoneY";
            w = "0.154687 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_gcff_btn_previousPage : nln_fiveliner_gcff_button
        {
            idc = 1600;
            x = "0.0130208 * safezoneW + safezoneX";
            y = "0.950824 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_gunship_cff_fnc_previousPage;";
        };

        class nln_gcff_btn_nextPage : nln_fiveliner_gcff_button
        {
            idc = 1601;
            x = "0.276563 * safezoneW + safezoneX";
            y = "0.950824 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_gunship_cff_fnc_nextPage;";
        };

        class nln_gcff_btn_clearPage : nln_fiveliner_gcff_button
        {
            idc = 1602;
            x = "0.053125 * safezoneW + safezoneX";
            y = "0.950824 * safezoneH + safezoneY";
            w = "0.0744792 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_gunship_cff_fnc_clearPage;";
        };

        class nln_gcff_btn_save : nln_fiveliner_gcff_button
        {
            idc = 1603;
            x = "0.144792 * safezoneW + safezoneX";
            y = "0.950824 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_gunship_cff_fnc_savePage;";
        };

        class nln_gcff_btn_clearAll : nln_fiveliner_gcff_button
        {
            idc = 1604;
            x = "0.196354 * safezoneW + safezoneX";
            y = "0.950824 * safezoneH + safezoneY";
            w = "0.06875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_gunship_cff_fnc_clearAllPages;";
        };

        /*class nln_gcff_btn_enableControls_1 : nln_fiveliner_gcff_button
        {
            idc = 1605;
            x = "0.316667 * safezoneW + safezoneX";
            y = "-0.302687 * safezoneH + safezoneY";
            w = "1.63854 * safezoneW";
            h = "2.06719 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_gunship_call_for_fire\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_gcff_btn_enableControls_2 : nln_fiveliner_gcff_button
        {
            idc = 1606;
            x = "-0.571354 * safezoneW + safezoneX";
            y = "0.994807 * safezoneH + safezoneY";
            w = "1.63854 * safezoneW";
            h = "2.06719 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_gunship_call_for_fire\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class cwgcff_btn_enableControls_3 : nln_fiveliner_gcff_button
        {
            idc = 1607;
            x = "-3.01771 * safezoneW + safezoneX";
            y = "-0.258705 * safezoneH + safezoneY";
            w = "3.025 * safezoneW";
            h = "2.08919 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_gunship_call_for_fire\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_gcff_in_btn_enableControls_4 : nln_fiveliner_gcff_button
        {
            idc = 1608;
            x = "-0.456771 * safezoneW + safezoneX";
            y = "-1.77611 * safezoneH + safezoneY";
            w = "1.63854 * safezoneW";
            h = "2.06719 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_gunship_call_for_fire\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };*/
    };
};
