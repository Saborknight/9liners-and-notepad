
#include "\a3\editor_f\data\scripts\dikCodes.h"

[("STR_nln_main_credentials_modName" call BIS_fnc_localize),"nln_gunship_cff_keybind_open", ("STR_nln_gunship_call_for_fire_settings_keybindOpen" call BIS_fnc_localize), { _this call nln_gunship_cff_fnc_openMenu; }, {}, [DIK_G, [true, true, false]]] call CBA_fnc_addKeybind;

[
    "nln_gunship_cff_disable",
    "CHECKBOX",
    ("STR_nln_gunship_call_for_fire_settings_disable" call BIS_fnc_localize),
    ("STR_nln_main_credentials_modName" call BIS_fnc_localize),
    false,
    1
] call CBA_Settings_fnc_init;
