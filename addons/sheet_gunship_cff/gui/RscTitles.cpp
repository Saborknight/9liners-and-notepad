
class nln_gunship_cff
{
    idd = -1;
    duration = 9999999999999e10;
    fadein = 0;
    fadeout = 0;
    name = "nln_gunship_cff";
    onLoad = "uiNamespace setVariable ['nln_gunship_cff', _this select 0];";

    class Controls
    {
        class nln_gcff_background : nln_fiveliner_gcff_picture
        {
            idc = 1200;
            text = "\x\nln\addons\gunship_cff\data\ui\gunship_cff.paa";
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
    };
};
