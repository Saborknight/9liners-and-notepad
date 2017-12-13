#include "\a3\editor_f\data\scripts\dikCodes.h"

//OLD KEYBINDING
/*
["nineliners & Notepad", "OPEN NOTEPAD",	{call nln_noteblock_fnc_open;}, [DIK_N, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "OPEN 9-Liner CAS",	{call nln_nineliner_cas_fnc_open;}, [DIK_C, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "OPEN 9-Liner MEDIVAC",	{call nln_nineliner_medv_fnc_open;}, [DIK_M, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "OPEN 5-Liner GUNSHIP CALL FOR FIRE",	{call nln_fiveliner_gcff_fnc_open;}, [DIK_G, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "OPEN CAS CHECK-IN BREEFING",	{call nln_cas_check_in_fnc_open;}, [DIK_B, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "OPEN TARGET-LOCATION-METHODS SHEET",	{call nln_tlm_fnc_open;}, [DIK_T, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "OPEN FIRE-FOR-EFFECT SHEET",	{call nln_ffe_fnc_open;}, [DIK_F, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "OPEN MARKING-MISSION SHEET",	{call nln_mm_fnc_open;}, [DIK_M, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "OPEN ADJUST-FIRE-MISSION SHEET",	{call nln_afm_fnc_open;}, [DIK_A, [true, true, false]]] call CBA_fnc_registerKeybind;
["nineliners & Notepad", "DISABLE CONTROLS",	{[] spawn {execVM "nln_nineliner_and_notepad\data\toggleControls.sqf";};}, [DIK_P, [true, true, false]]] call CBA_fnc_registerKeybind;
*/

//HOTFIX
["nineliners & Notepad","nln_open_notepad_key", "OPEN NOTEPAD", {_this call nln_noteblock_fnc_open}, {}, [DIK_N, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_open_nineliner_cas_key", "OPEN 9-Liner CAS", {_this call nln_nineliner_cas_fnc_open}, {}, [DIK_C, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_open_nineliner_medv_key", "OPEN 9-Liner MEDIVAC", {_this call nln_nineliner_medv_fnc_open}, {}, [DIK_M, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_open_fiveliner_gcff_key", "OPEN 5-Liner GUNSHIP CALL FOR FIRE", {_this call nln_fiveliner_gcff_fnc_open}, {}, [DIK_G, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_open_cas_check_in_key", "OPEN CAS CHECK-IN BREEFING", {_this call nln_cas_check_in_fnc_open}, {}, [DIK_B, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_open_sheet_tlm_key", "OPEN TARGET-LOCATION-METHODS SHEET", {_this call nln_tlm_fnc_open}, {}, [DIK_T, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_open_sheet_ffe_key", "OPEN FIRE-FOR-EFFECT SHEET", {_this call nln_ffe_fnc_open}, {}, [DIK_F, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_open_sheet_mm_key", "OPEN MARKING-MISSION SHEET", {_this call nln_mm_fnc_open}, {}, [DIK_J, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_open_sheet_afm_key", "OPEN ADJUST-FIRE-MISSION SHEET", {_this call nln_afm_fnc_open}, {}, [DIK_A, [true, true, false]]] call CBA_fnc_addKeybind;
["nineliners & Notepad","nln_disable_controls_key", "DISABLE CONTROLS", {[] spawn {execVM "nln_nineliner_and_notepad\data\toggleControls.sqf";}}, {}, [DIK_P, [true, true, false]]] call CBA_fnc_addKeybind;
