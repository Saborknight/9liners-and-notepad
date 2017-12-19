
#include "\a3\editor_f\data\scripts\dikCodes.h"

["STR_nln_Credentials_modName","nln_target_location_methods_keybind_open", ("STR_nln_Settings_keybindOpenTargetLocationMethods" call BIS_fnc_localize), { _this call nln_target_location_methods_fnc_openMenu; }, {}, [DIK_T, [true, true, false]]] call CBA_fnc_addKeybind;

[
	"nln_target_location_methods_enable",
	"CHECKBOX",
	("STR_nln_Settings_targetLocationMethodsEnable" call BIS_fnc_localize),
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;
