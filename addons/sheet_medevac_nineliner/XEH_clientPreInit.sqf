
#include "\a3\editor_f\data\scripts\dikCodes.h"

["STR_nln_Credentials_modName","nln_medevac_nineliner_keybind_open", (["STR_nln_Settings_keybindOpenNinelinerMedevac"] call BIS_fnc_localize), { _this call nln_medevac_nineliner_fnc_openMenu; }, {}, [DIK_M, [true, true, false]]] call CBA_fnc_addKeybind;

[
	"nln_medevac_nineliner_enable",
	"CHECKBOX",
	["STR_nln_Settings_medevacNinelinerEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;
