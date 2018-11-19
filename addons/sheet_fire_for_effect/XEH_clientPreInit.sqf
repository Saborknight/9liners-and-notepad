
#include "\a3\editor_f\data\scripts\dikCodes.h"

[("STR_nln_main_credentials_modName" call BIS_fnc_localize),"nln_fire_for_effect_keybind_open", ("STR_nln_fire_for_effect_settings_keybindOpen" call BIS_fnc_localize), { _this call nln_fire_for_effect_fnc_openMenu; }, {}, [DIK_F, [true, true, false]]] call CBA_fnc_addKeybind;

[
    "nln_fire_for_effect_disable",
    "CHECKBOX",
    ("STR_nln_fire_for_effect_settings_disable" call BIS_fnc_localize),
    ("STR_nln_main_credentials_modName" call BIS_fnc_localize),
    false,
    1
] call CBA_Settings_fnc_init;
