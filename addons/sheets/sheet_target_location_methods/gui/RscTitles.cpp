
class nln_target_location_methods
{
    idd = -1;
    duration = 9999999999999e10;
    fadein = 0;
    fadeout = 0;
    name = "nln_target_location_methods";
    onLoad = "uiNamespace setVariable ['nln_target_location_methods', (_this select 0)];";
    class Controls
    {
        class nln_targetlocationmethods_background : nln_targetlocationmethods_picture
        {
            idc = 1200;
            text = "\x\nln\addons\sheets\sheet_target_location_methods\data\ui\target_location_methods.paa";
            x = "-0.0614583 * safezoneW + safezoneX";
            y = "0.236103 * safezoneH + safezoneY";
            w = "0.429688 * safezoneW";
            h = "0.758704 * safezoneH";
        };
    };
};
