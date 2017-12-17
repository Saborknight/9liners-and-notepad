
#include "\a3\editor_f\data\scripts\dikCodes.h"

["STR_nln_Credentials_modName","nln_open_nineliner_cas_key", ["STR_nln_Settings_keybindOpenNinelinerCAS"] call BIS_fnc_localize, { _this call nln_cas_nineliner_fnc_openMenu; }, {}, [DIK_C, [true, true, false]]] call CBA_fnc_addKeybind;

[
	"nln_cas_nineliner_enable",
	"CHECKBOX",
	["STR_nln_Settings_casNinelinerEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;
