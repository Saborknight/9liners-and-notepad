
#include "\a3\editor_f\data\scripts\dikCodes.h"

["STR_nln_Credentials_modName","nln_gunship_cff_keybind_open", ["STR_nln_Settings_keybindOpenFivelinerGunship"] call BIS_fnc_localize, { _this call nln_gunship_cff_fnc_openMenu; }, {}, [DIK_G, [true, true, false]]] call CBA_fnc_addKeybind;

[
	"nln_gunship_cff_enable",
	"CHECKBOX",
	["STR_nln_Settings_gunshipCallForFireEnable"] call BIS_fnc_localize,
	"STR_nln_Credentials_modName",
	true,
	1
] call CBA_Settings_fnc_init;
