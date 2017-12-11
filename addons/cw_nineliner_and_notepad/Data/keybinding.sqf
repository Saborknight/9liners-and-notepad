#include "\a3\editor_f\Data\Scripts\dikCodes.h"

//OLD KEYBINDING
/*
["Notepad & 9-Liner", "OPEN NOTEPAD",	{call cw_noteblock_fnc_open;}, [DIK_N, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN 9-Liner CAS",	{call cw_9liner_cas_fnc_open;}, [DIK_C, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN 9-Liner MEDIVAC",	{call cw_9liner_medv_fnc_open;}, [DIK_M, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN 5-Liner GUNSHIP CALL FOR FIRE",	{call cw_5liner_gcff_fnc_open;}, [DIK_G, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN CAS CHECK-IN BREEFING",	{call cw_cas_check_in_fnc_open;}, [DIK_B, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN TARGET-LOCATION-METHODS SHEET",	{call cw_tlm_fnc_open;}, [DIK_T, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN FIRE-FOR-EFFECT SHEET",	{call cw_ffe_fnc_open;}, [DIK_F, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN MARKING-MISSION SHEET",	{call cw_mm_fnc_open;}, [DIK_M, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "OPEN ADJUST-FIRE-MISSION SHEET",	{call cw_afm_fnc_open;}, [DIK_A, [true, true, false]]] call CBA_fnc_registerKeybind;
["Notepad & 9-Liner", "DISABLE CONTROLS",	{[] spawn {execVM "cw_nineliner_and_notepad\Data\toggleControls.sqf";};}, [DIK_P, [true, true, false]]] call CBA_fnc_registerKeybind;
*/

//HOTFIX
["Notepad & 9-Liner","cw_open_notepad_key", "OPEN NOTEPAD", {_this call cw_noteblock_fnc_open}, {}, [DIK_N, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_open_nineliner_cas_key", "OPEN 9-Liner CAS", {_this call cw_9liner_cas_fnc_open}, {}, [DIK_C, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_open_nineliner_medv_key", "OPEN 9-Liner MEDIVAC", {_this call cw_9liner_medv_fnc_open}, {}, [DIK_M, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_open_fiveliner_gcff_key", "OPEN 5-Liner GUNSHIP CALL FOR FIRE", {_this call cw_5liner_gcff_fnc_open}, {}, [DIK_G, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_open_cas_check_in_key", "OPEN CAS CHECK-IN BREEFING", {_this call cw_cas_check_in_fnc_open}, {}, [DIK_B, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_open_sheet_tlm_key", "OPEN TARGET-LOCATION-METHODS SHEET", {_this call cw_tlm_fnc_open}, {}, [DIK_T, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_open_sheet_ffe_key", "OPEN FIRE-FOR-EFFECT SHEET", {_this call cw_ffe_fnc_open}, {}, [DIK_F, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_open_sheet_mm_key", "OPEN MARKING-MISSION SHEET", {_this call cw_mm_fnc_open}, {}, [DIK_J, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_open_sheet_afm_key", "OPEN ADJUST-FIRE-MISSION SHEET", {_this call cw_afm_fnc_open}, {}, [DIK_A, [true, true, false]]] call CBA_fnc_addKeybind;
["Notepad & 9-Liner","cw_disable_controls_key", "DISABLE CONTROLS", {[] spawn {execVM "cw_nineliner_and_notepad\Data\toggleControls.sqf";}}, {}, [DIK_P, [true, true, false]]] call CBA_fnc_addKeybind;
