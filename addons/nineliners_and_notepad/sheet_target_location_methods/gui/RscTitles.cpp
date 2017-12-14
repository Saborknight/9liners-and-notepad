
class nln_target_location_methods_resource
{
    idd = -1;
    onUnload = "uiNamespace setVariable ['nln_tlm_resource', nil]; hint '';";
    duration = 0.100000;
    fadein = 0;
    name = "nln_target_location_methods_resource";
    onLoad = "uiNamespace setVariable ['nln_tlm_resource', _this select 0];";
    class Controls
    {
        class nln_targetlocationmethods_background : nln_targetlocationmethods_picture
        {
            idc = 1200;
            text = "\nln_nineliner_and_notepad\data\nln_target_location_methods\images\targetlocationmethods.paa";
            x = "-0.0614583 * safezoneW + safezoneX";
            y = "0.236103 * safezoneH + safezoneY";
            w = "0.429688 * safezoneW";
            h = "0.758704 * safezoneH";
        };
    };
};
