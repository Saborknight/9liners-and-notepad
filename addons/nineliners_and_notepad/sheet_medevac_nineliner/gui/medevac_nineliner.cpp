
class nln_medevac_nineliner
{
    idd = -1;
    movingenable = "true";
    onUnload = "call nln_medevac_nineliner_fnc_onUnload;";

    class Controls
    {
        class nln_nineliner_medv_background : nln_nineliner_medv_picture
        {
            idc = 1200;
            text = "\x\nln\addons\nineliners_and_notepad\sheet_medevac_nineliner\data\ui\medevac_nineliner.paa";
            x = "-0.0213542 * safezoneW + safezoneX";
            y = "0.247099 * safezoneH + safezoneY";
            w = "0.4125 * safezoneW";
            h = "0.747708 * safezoneH";
            moving = 1;
        };

        class nln_nineliner_medevac_edit_line1 : nln_nineliner_medv_edit
        {
            idc = 1400;
            x = "0.144792 * safezoneW + safezoneX";
            y = "0.34606 * safezoneH + safezoneY";
            w = "0.189062 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line2 : nln_nineliner_medv_edit
        {
            idc = 1401;
            x = "0.173438 * safezoneW + safezoneX";
            y = "0.390043 * safezoneH + safezoneY";
            w = "0.160417 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line3 : nln_nineliner_medv_edit
        {
            idc = 1402;
            x = "0.161979 * safezoneW + safezoneX";
            y = "0.434026 * safezoneH + safezoneY";
            w = "0.171875 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line4 : nln_nineliner_medv_edit
        {
            idc = 1403;
            x = "0.144792 * safezoneW + safezoneX";
            y = "0.489004 * safezoneH + safezoneY";
            w = "0.189062 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line5 : nln_nineliner_medv_edit
        {
            idc = 1404;
            x = "0.121875 * safezoneW + safezoneX";
            y = "0.554979 * safezoneH + safezoneY";
            w = "0.20625 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line6 : nln_nineliner_medv_edit
        {
            idc = 1405;
            x = "0.133333 * safezoneW + safezoneX";
            y = "0.620953 * safezoneH + safezoneY";
            w = "0.200521 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line7 : nln_nineliner_medv_edit
        {
            idc = 1406;
            x = "0.15625 * safezoneW + safezoneX";
            y = "0.719914 * safezoneH + safezoneY";
            w = "0.177604 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line8 : nln_nineliner_medv_edit
        {
            idc = 1407;
            x = "0.150521 * safezoneW + safezoneX";
            y = "0.785888 * safezoneH + safezoneY";
            w = "0.183333 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medv_edit_1408 : nln_nineliner_medv_edit
        {
            idc = 1408;
            x = "0.127604 * safezoneW + safezoneX";
            y = "0.840867 * safezoneH + safezoneY";
            w = "0.200521 * safezoneW";
            h = "0.0219914 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line3_cross_picture1 : nln_nineliner_medv_picture_cross
        {
            idc = 2800;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line3_cross_picture2 : nln_nineliner_medv_picture_cross
        {
            idc = 2801;
            x = "0.104688 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line3_cross_picture3 : nln_nineliner_medv_picture_cross
        {
            idc = 2802;
            x = "0.173438 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line3_cross_picture4 : nln_nineliner_medv_picture_cross
        {
            idc = 2803;
            x = "0.219271 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line3_cross_picture5 : nln_nineliner_medv_picture_cross
        {
            idc = 2804;
            x = "0.270833 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line4_cross_picture1 : nln_nineliner_medv_picture_cross
        {
            idc = 2805;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.510996 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line4_cross_picture2 : nln_nineliner_medv_picture_cross
        {
            idc = 2806;
            x = "0.121875 * safezoneW + safezoneX";
            y = "0.510996 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line4_cross_picture3 : nln_nineliner_medv_picture_cross
        {
            idc = 2807;
            x = "0.179167 * safezoneW + safezoneX";
            y = "0.510996 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line4_cross_picture4 : nln_nineliner_medv_picture_cross
        {
            idc = 2808;
            x = "0.276563 * safezoneW + safezoneX";
            y = "0.510996 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line5_cross_picture1 : nln_nineliner_medv_picture_cross
        {
            idc = 2809;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.57697 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line5_cross_picture2 : nln_nineliner_medv_picture_cross
        {
            idc = 2810;
            x = "0.116146 * safezoneW + safezoneX";
            y = "0.57697 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line6_cross_picture1 : nln_nineliner_medv_picture_cross
        {
            idc = 2811;
            x = "0.0588542 * safezoneW + safezoneX";
            y = "0.65394 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line6_cross_picture2 : nln_nineliner_medv_picture_cross
        {
            idc = 2812;
            x = "0.110417 * safezoneW + safezoneX";
            y = "0.65394 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line6_cross_picture3 : nln_nineliner_medv_picture_cross
        {
            idc = 2813;
            x = "0.173438 * safezoneW + safezoneX";
            y = "0.65394 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line6_cross_picture4 : nln_nineliner_medv_picture_cross
        {
            idc = 2814;
            x = "0.247917 * safezoneW + safezoneX";
            y = "0.65394 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line7_cross_picture1 : nln_nineliner_medv_picture_cross
        {
            idc = 2815;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line7_cross_picture2 : nln_nineliner_medv_picture_cross
        {
            idc = 2816;
            x = "0.104688 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line7_cross_picture3 : nln_nineliner_medv_picture_cross
        {
            idc = 2817;
            x = "0.179167 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line7_cross_picture4 : nln_nineliner_medv_picture_cross
        {
            idc = 2818;
            x = "0.242188 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line7_cross_picture5 : nln_nineliner_medv_picture_cross
        {
            idc = 2819;
            x = "0.29375 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line8_cross_picture1 : nln_nineliner_medv_picture_cross
        {
            idc = 2820;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line8_cross_picture2 : nln_nineliner_medv_picture_cross
        {
            idc = 2821;
            x = "0.110417 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line8_cross_picture3 : nln_nineliner_medv_picture_cross
        {
            idc = 2822;
            x = "0.161979 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line8_cross_picture4 : nln_nineliner_medv_picture_cross
        {
            idc = 2823;
            x = "0.225 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line8_cross_picture5 : nln_nineliner_medv_picture_cross
        {
            idc = 2824;
            x = "0.29375 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line9_cross_picture1 : nln_nineliner_medv_picture_cross
        {
            idc = 2825;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.88485 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line9_cross_picture2 : nln_nineliner_medv_picture_cross
        {
            idc = 2826;
            x = "0.110417 * safezoneW + safezoneX";
            y = "0.88485 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line9_cross_picture3 : nln_nineliner_medv_picture_cross
        {
            idc = 2827;
            x = "0.161979 * safezoneW + safezoneX";
            y = "0.88485 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
        };

        class nln_nineliner_medevac_edit_line3_cross_button1 : nln_nineliner_medv_button
        {
            idc = 3800;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2800] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line3_cross_button2 : nln_nineliner_medv_button
        {
            idc = 3801;
            x = "0.104688 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2801] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line3_cross_button3 : nln_nineliner_medv_button
        {
            idc = 3802;
            x = "0.173438 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2802] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line3_cross_button4 : nln_nineliner_medv_button
        {
            idc = 3803;
            x = "0.219271 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2803] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line3_cross_button5 : nln_nineliner_medv_button
        {
            idc = 3804;
            x = "0.270833 * safezoneW + safezoneX";
            y = "0.456017 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2804] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line4_cross_button1 : nln_nineliner_medv_button
        {
            idc = 3805;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.510996 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2805] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line4_cross_button2 : nln_nineliner_medv_button
        {
            idc = 3806;
            x = "0.121875 * safezoneW + safezoneX";
            y = "0.510996 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2806] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line4_cross_button3 : nln_nineliner_medv_button
        {
            idc = 3807;
            x = "0.179167 * safezoneW + safezoneX";
            y = "0.510996 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2807] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line4_cross_button4 : nln_nineliner_medv_button
        {
            idc = 3808;
            x = "0.276563 * safezoneW + safezoneX";
            y = "0.510996 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2808] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line5_cross_button1 : nln_nineliner_medv_button
        {
            idc = 3809;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.57697 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2809] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line5_cross_button2 : nln_nineliner_medv_button
        {
            idc = 3810;
            x = "0.116146 * safezoneW + safezoneX";
            y = "0.57697 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2810] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line6_cross_button1 : nln_nineliner_medv_button
        {
            idc = 3811;
            x = "0.0588542 * safezoneW + safezoneX";
            y = "0.65394 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2811] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line6_cross_button2 : nln_nineliner_medv_button
        {
            idc = 2812;
            x = "0.110417 * safezoneW + safezoneX";
            y = "0.65394 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2812] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line6_cross_button3 : nln_nineliner_medv_button
        {
            idc = 3813;
            x = "0.173438 * safezoneW + safezoneX";
            y = "0.65394 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2813] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line6_cross_button4 : nln_nineliner_medv_button
        {
            idc = 3814;
            x = "0.247917 * safezoneW + safezoneX";
            y = "0.65394 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2814] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line7_cross_button1 : nln_nineliner_medv_button
        {
            idc = 3815;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2815] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line7_cross_button2 : nln_nineliner_medv_button
        {
            idc = 3816;
            x = "0.104688 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2816] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line7_cross_button3 : nln_nineliner_medv_button
        {
            idc = 3817;
            x = "0.179167 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2817] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line7_cross_button4 : nln_nineliner_medv_button
        {
            idc = 3818;
            x = "0.242188 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2818] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line7_cross_button5 : nln_nineliner_medv_button
        {
            idc = 3819;
            x = "0.29375 * safezoneW + safezoneX";
            y = "0.741906 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2819] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line8_cross_button1 : nln_nineliner_medv_button
        {
            idc = 3820;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2820] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line8_cross_button2 : nln_nineliner_medv_button
        {
            idc = 3821;
            x = "0.110417 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2821] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line8_cross_button3 : nln_nineliner_medv_button
        {
            idc = 3822;
            x = "0.161979 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2822] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line8_cross_button4 : nln_nineliner_medv_button
        {
            idc = 3823;
            x = "0.225 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2823] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line8_cross_button5 : nln_nineliner_medv_button
        {
            idc = 3824;
            x = "0.29375 * safezoneW + safezoneX";
            y = "0.796884 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2824] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line9_cross_button1 : nln_nineliner_medv_button
        {
            idc = 3825;
            x = "0.0645833 * safezoneW + safezoneX";
            y = "0.88485 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2825] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line9_cross_button2 : nln_nineliner_medv_button
        {
            idc = 3826;
            x = "0.110417 * safezoneW + safezoneX";
            y = "0.88485 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2826] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_edit_line9_cross_button3 : nln_nineliner_medv_button
        {
            idc = 3827;
            x = "0.161979 * safezoneW + safezoneX";
            y = "0.88485 * safezoneH + safezoneY";
            w = "0.0171875 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "[2827] call nln_medevac_nineliner_fnc_action_cross;";
        };

        class nln_nineliner_medevac_btn_nextPage : nln_nineliner_medv_button
        {
            idc = 1600;
            x = "0.305208 * safezoneW + safezoneX";
            y = "0.928833 * safezoneH + safezoneY";
            w = "0.0229167 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_medevac_nineliner_fnc_nextPage";
        };

        class nln_nineliner_medevac_btn_previousPage : nln_nineliner_medv_button
        {
            idc = 1601;
            x = "0.0302083 * safezoneW + safezoneX";
            y = "0.928833 * safezoneH + safezoneY";
            w = "0.0229167 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_medevac_nineliner_fnc_previousPage;";
        };

        class nln_nineliner_medevac_btn_clearthis : nln_nineliner_medv_button
        {
            idc = 1602;
            x = "0.0817708 * safezoneW + safezoneX";
            y = "0.928833 * safezoneH + safezoneY";
            w = "0.0572917 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_medevac_nineliner_fnc_clearPage;";
        };

        class nln_nineliner_medevac_btn_clearall : nln_nineliner_medv_button
        {
            idc = 1603;
            x = "0.225 * safezoneW + safezoneX";
            y = "0.928833 * safezoneH + safezoneY";
            w = "0.0515625 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_medevac_nineliner_fnc_clearAllPages;";
        };

        class nln_nineliner_medevac_btn_safe : nln_nineliner_medv_button
        {
            idc = 1604;
            x = "0.173438 * safezoneW + safezoneX";
            y = "0.928833 * safezoneH + safezoneY";
            w = "0.0229167 * safezoneW";
            h = "0.0329871 * safezoneH";
            action = "call nln_medevac_nineliner_fnc_savePage;";
        };

        /*class nln_medv_nineliner_enableControls_1 : nln_nineliner_medv_button
        {
            idc = 1605;
            x = "0.339583 * safezoneW + safezoneX";
            y = "-0.2697 * safezoneH + safezoneY";
            w = "1.53542 * safezoneW";
            h = "2.03421 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_nineliner_medevac\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_nineliner_medv_enableControls_2 : nln_nineliner_medv_button
        {
            idc = 1606;
            x = "-1.21875 * safezoneW + safezoneX";
            y = "0.972816 * safezoneH + safezoneY";
            w = "2.56094 * safezoneW";
            h = "2.0562 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_nineliner_medevac\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_nineliner_medv_enableControls_3 : nln_nineliner_medv_button
        {
            idc = 1607;
            x = "-0.336458 * safezoneW + safezoneX";
            y = "-1.77611 * safezoneH + safezoneY";
            w = "2.56094 * safezoneW";
            h = "2.0562 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_nineliner_medevac\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };

        class nln_nineliner_medv_enableControls_4 : nln_nineliner_medv_button
        {
            idc = 1608;
            x = "-2.53073 * safezoneW + safezoneX";
            y = "0.236103 * safezoneH + safezoneY";
            w = "2.56094 * safezoneW";
            h = "2.0562 * safezoneH";
            onMouseButtonClick = "execVM '\nln_nineliner_and_notepad\data\nln_nineliner_medevac\scripts\createResource.sqf';";
            onMouseButtonDblClick = "closeDialog 0;";
            tooltip = "CLICK: ENABLE CONTROLS | DBL CLICK: CLOSE";
            tooltipColorText[] = {1, 0, 0, 1};
        };*/
    };
};
