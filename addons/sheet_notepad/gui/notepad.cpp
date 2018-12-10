
class nln_notepad
{
    idd = 8888;
    movingEnable = 1;
    onUnload = "call nln_notepad_fnc_onUnload;";
    onMouseButtonUp = "_this call nln_main_fnc_backgroundClick;";

    class Controls
    {
        class nln_notepad_background : nln_base_picture
        {
            idc = 1200;
            text = "\x\nln\addons\sheet_notepad\data\ui\notepad.paa";
            x = "-0.0557292 * safezoneW + safezoneX";
            y = "0.26909 * safezoneH + safezoneY";
            w = "0.48125 * safezoneW";
            h = "0.747708 * safezoneH";
            moving = 1;
        };

        class nln_notepad_edit : nln_base_edit
        {
            idc = 1400;
            x = "0.0416667 * safezoneW + safezoneX";
            y = "0.307 * safezoneH + safezoneY";
            w = "0.303646 * safezoneW";
            h = "0.637751 * safezoneH";
            moving = 1;
        };

        class nln_notepad_btn_nextPage : nln_base_button
        {
            idc = 1600;
            x = "0.310937 * safezoneW + safezoneX";
            y = "0.291081 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_notepad_fnc_nextPage;";
        };

        class nln_notepad_btn_previousPage : nln_base_button
        {
            idc = 1601;
            x = "0.0416667 * safezoneW + safezoneX";
            y = "0.291081 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_notepad_fnc_previousPage;";
        };

        class nln_notepad_btn_save : nln_base_button
        {
            idc = 1602;
            x = "0.3479 * safezoneW + safezoneX";
            y = "0.373 * safezoneH + safezoneY";
            w = "0.019 * safezoneW";
            h = "0.047 * safezoneH";
            action = "call nln_notepad_fnc_savePage;";
        };

        class nln_notepad_btn_clearpage : nln_base_button
        {
            idc = 1603;
            x = "0.3479 * safezoneW + safezoneX";
            y = "0.65 * safezoneH + safezoneY";
            w = "0.0155 * safezoneW";
            h = "0.054 * safezoneH";
            action = "call nln_notepad_fnc_clearPage;";
        };

        class nln_notepad_btn_clearall : nln_base_button
        {
            idc = 1604;
            x = "0.3479 * safezoneW + safezoneX";
            y = "0.788 * safezoneH + safezoneY";
            w = "0.015 * safezoneW";
            h = "0.043 * safezoneH";
            action = "call nln_notepad_fnc_clearAllPages;";
        };
    };
};
