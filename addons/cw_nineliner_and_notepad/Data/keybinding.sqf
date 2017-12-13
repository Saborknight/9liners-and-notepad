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



private _categoryName = (["STR_cw_nineliner_and_notepad_Scripts_keybindCategory"] call BIS_fnc_localize),"cw_open_notepad_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpenNotepad"] call BIS_fnc_localize);
//HOTFIX
[_categoryName, {_this call cw_noteblock_fnc_open}, {}, [DIK_N, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_open_nineliner_cas_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpen9LinerCAS"] call BIS_fnc_localize), {_this call cw_9liner_cas_fnc_open}, {}, [DIK_C, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_open_nineliner_medv_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpen9LinerMEDEVAC"] call BIS_fnc_localize), {_this call cw_9liner_medv_fnc_open}, {}, [DIK_M, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_open_fiveliner_gcff_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpen5LinerGunship"] call BIS_fnc_localize), {_this call cw_5liner_gcff_fnc_open}, {}, [DIK_G, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_open_cas_check_in_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpenCASCheckInBriefing"] call BIS_fnc_localize), {_this call cw_cas_check_in_fnc_open}, {}, [DIK_B, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_open_sheet_tlm_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpenTargetLocationMethods"] call BIS_fnc_localize), {_this call cw_tlm_fnc_open}, {}, [DIK_T, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_open_sheet_ffe_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpenFireForEffect"] call BIS_fnc_localize), {_this call cw_ffe_fnc_open}, {}, [DIK_F, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_open_sheet_mm_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpenMarkingMission"] call BIS_fnc_localize), {_this call cw_mm_fnc_open}, {}, [DIK_J, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_open_sheet_afm_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindOpenAdjustFireMission"] call BIS_fnc_localize), {_this call cw_afm_fnc_open}, {}, [DIK_A, [true, true, false]]] call CBA_fnc_addKeybind;
[_categoryName,"cw_disable_controls_key", (["STR_cw_nineliner_and_notepad_Scripts_keybindDisableControls"] call BIS_fnc_localize), {[] spawn {execVM "cw_nineliner_and_notepad\Data\toggleControls.sqf";}}, {}, [DIK_P, [true, true, false]]] call CBA_fnc_addKeybind;
