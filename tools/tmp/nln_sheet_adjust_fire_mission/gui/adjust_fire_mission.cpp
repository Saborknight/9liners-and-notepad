
class nln_adjust_fire_mission
{
    idd = -1;
    movingenable = "true";
    onUnload = "call nln_adjust_fire_mission_fnc_onUnload;";

    class Controls
    {
        class nln_adjustfiremission_background : nln_afm_picture
        {
            idc = 1200;
            text = "\x\nln\addons\adjust_fire_mission\data\ui\adjust_fire_mission.paa";
            x = "-0.0614583 * safezoneW + safezoneX";
            y = "0.236103 * safezoneH + safezoneY";
            w = "0.423958 * safezoneW";
            h = "0.758704 * safezoneH";
            moving = 1;
        };

        class nln_afm_edit_line0_1 : nln_afm_edit
        {
            idc = 1400;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.302077 * safezoneH + safezoneY";
            w = "0.0572917 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line0_2 : nln_afm_edit
        {
            idc = 1402;
            x = "0.15625 * safezoneW + safezoneX";
            y = "0.302077 * safezoneH + safezoneY";
            w = "0.0458333 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line1 : nln_afm_edit
        {
            idc = 1401;
            x = "0.0416667 * safezoneW + safezoneX";
            y = "0.339064 * safezoneH + safezoneY";
            w = "0.217708 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line2 : nln_afm_edit
        {
            idc = 1403;
            x = "0.104688 * safezoneW + safezoneX";
            y = "0.383047 * safezoneH + safezoneY";
            w = "0.06875 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line3 : nln_afm_edit
        {
            idc = 1404;
            x = "0.0703125 * safezoneW + safezoneX";
            y = "0.605961 * safezoneH + safezoneY";
            w = "0.0973958 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line4 : nln_afm_edit
        {
            idc = 1405;
            x = "0.116146 * safezoneW + safezoneX";
            y = "0.635948 * safezoneH + safezoneY";
            w = "0.131771 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line5 : nln_afm_edit
        {
            idc = 1406;
            x = "0.0989583 * safezoneW + safezoneX";
            y = "0.65794 * safezoneH + safezoneY";
            w = "0.1375 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line6 : nln_afm_edit
        {
            idc = 1407;
            x = "0.0817708 * safezoneW + safezoneX";
            y = "0.678931 * safezoneH + safezoneY";
            w = "0.200521 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line7 : nln_afm_edit
        {
            idc = 1408;
            x = "0.0760417 * safezoneW + safezoneX";
            y = "0.701923 * safezoneH + safezoneY";
            w = "0.160417 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line8 : nln_afm_edit
        {
            idc = 1409;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.752901 * safezoneH + safezoneY";
            w = "0.0572917 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line9 : nln_afm_edit
        {
            idc = 1410;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.80788 * safezoneH + safezoneY";
            w = "0.0515625 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line10 : nln_afm_edit
        {
            idc = 1411;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.846867 * safezoneH + safezoneY";
            w = "0.0458333 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_edit_line11 : nln_afm_edit
        {
            idc = 1412;
            x = "0.0932292 * safezoneW + safezoneX";
            y = "0.945828 * safezoneH + safezoneY";
            w = "0.154687 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_afm_ringle_1 : nln_afm_picture
        {
            idc = 1201;
            text = "";
            x = "0.167708 * safezoneW + safezoneX";
            y = "0.408039 * safezoneH + safezoneY";
            w = "0.0572917 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_2 : nln_afm_picture
        {
            idc = 1202;
            text = "";
            x = "0.225 * safezoneW + safezoneX";
            y = "0.408039 * safezoneH + safezoneY";
            w = "0.0286458 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class vnln_afm_ringle_3 : nln_afm_picture
        {
            idc = 1203;
            text = "";
            x = "0.254375 * safezoneW + safezoneX";
            y = "0.408039 * safezoneH + safezoneY";
            w = "0.0229167 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_4 : nln_afm_picture
        {
            idc = 1204;
            text = "";
            x = "0.190625 * safezoneW + safezoneX";
            y = "0.42303 * safezoneH + safezoneY";
            w = "0.0802083 * safezoneW";
            h = "0.0659743 * safezoneH";
        };

        class nln_afm_ringle_5 : nln_afm_picture
        {
            idc = 1205;
            text = "";
            x = "0.179167 * safezoneW + safezoneX";
            y = "0.450017 * safezoneH + safezoneY";
            w = "0.0744792 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_6 : nln_afm_picture
        {
            idc = 1206;
            text = "";
            x = "0.253646 * safezoneW + safezoneX";
            y = "0.450017 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_7 : nln_afm_picture
        {
            idc = 1207;
            text = "";
            x = "0.0588542 * safezoneW + safezoneX";
            y = "0.467013 * safezoneH + safezoneY";
            w = "0.06875 * safezoneW";
            h = "0.0549786 * safezoneH";
        };

        class nln_afm_ringle_8 : nln_afm_picture
        {
            idc = 1208;
            text = "";
            x = "0.127604 * safezoneW + safezoneX";
            y = "0.464013 * safezoneH + safezoneY";
            w = "0.103125 * safezoneW";
            h = "0.0659743 * safezoneH";
        };

        class nln_afm_btn_ringle_1 : nln_afm_button
        {
            idc = 1604;
            x = "0.167708 * safezoneW + safezoneX";
            y = "0.42303 * safezoneH + safezoneY";
            w = "0.0515625 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1201] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_2 : nln_afm_button
        {
            idc = 1605;
            x = "0.230729 * safezoneW + safezoneX";
            y = "0.42303 * safezoneH + safezoneY";
            w = "0.0229167 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1202] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_3 : nln_afm_button
        {
            idc = 1606;
            x = "0.259375 * safezoneW + safezoneX";
            y = "0.42303 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1203] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_3_2 : nln_afm_button
        {
            idc = 1607;
            x = "0.161979 * safezoneW + safezoneX";
            y = "0.445021 * safezoneH + safezoneY";
            w = "0.0229167 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1203] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_4 : nln_afm_button
        {
            idc = 1608;
            x = "0.196354 * safezoneW + safezoneX";
            y = "0.445021 * safezoneH + safezoneY";
            w = "0.0744792 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1204] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_5 : nln_afm_button
        {
            idc = 1609;
            x = "0.184896 * safezoneW + safezoneX";
            y = "0.467013 * safezoneH + safezoneY";
            w = "0.06875 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1205] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_6 : nln_afm_button
        {
            idc = 1610;
            x = "0.259375 * safezoneW + safezoneX";
            y = "0.467013 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1206] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_6_2 : nln_afm_button
        {
            idc = 1611;
            x = "0.01875 * safezoneW + safezoneX";
            y = "0.489004 * safezoneH + safezoneY";
            w = "0.0286458 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1206] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_7 : nln_afm_button
        {
            idc = 1612;
            x = "0.0588542 * safezoneW + safezoneX";
            y = "0.489004 * safezoneH + safezoneY";
            w = "0.06875 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1207] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_ringle_8 : nln_afm_button
        {
            idc = 1613;
            x = "0.133333 * safezoneW + safezoneX";
            y = "0.489004 * safezoneH + safezoneY";
            w = "0.0916667 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "[1208] call nln_adjust_fire_mission_fnc_action_ringle;";
        };

        class nln_afm_btn_previousPage : nln_afm_button
        {
            idc = 1614;
            x = "0.01875 * safezoneW + safezoneX";
            y = "0.258094 * safezoneH + safezoneY";
            w = "0.0286458 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_adjust_fire_mission_fnc_previousPage;";
        };

        class nln_afm_btn_nextPage : nln_afm_button
        {
            idc = 1615;
            x = "0.253646 * safezoneW + safezoneX";
            y = "0.258094 * safezoneH + safezoneY";
            w = "0.034375 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_adjust_fire_mission_fnc_nextPage;";
        };

        class nln_afm_btn_clearThis : nln_afm_button
        {
            idc = 1616;
            x = "0.0588542 * safezoneW + safezoneX";
            y = "0.26909 * safezoneH + safezoneY";
            w = "0.0515625 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_adjust_fire_mission_fnc_clearPage;";
        };

        class nln_afm_btn_save : nln_afm_button
        {
            idc = 1617;
            x = "0.139062 * safezoneW + safezoneX";
            y = "0.26909 * safezoneH + safezoneY";
            w = "0.0229167 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_adjust_fire_mission_fnc_savePage;"; //TODO: add save function
        };

        class nln_afm_btn_clearAll : nln_afm_button
        {
            idc = 1618;
            x = "0.196354 * safezoneW + safezoneX";
            y = "0.26909 * safezoneH + safezoneY";
            w = "0.0515625 * safezoneW";
            h = "0.0219914 * safezoneH";
            action = "call nln_adjust_fire_mission_fnc_clearAllPages;"; //TODO: add clearall function
        };
    };
};
