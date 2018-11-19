
#include "\a3\editor_f\data\scripts\dikCodes.h"

[("STR_nln_main_credentials_modName" call BIS_fnc_localize),"nln_target_location_methods_keybind_open", ("STR_nln_target_location_methods_settings_keybindOpen" call BIS_fnc_localize), { _this call nln_target_location_methods_fnc_openMenu; }, {}, [DIK_T, [true, true, false]]] call CBA_fnc_addKeybind;

[
    "nln_target_location_methods_disable",
    "CHECKBOX",
    ("STR_nln_target_location_methods_settings_disable" call BIS_fnc_localize),
    ("STR_nln_main_credentials_modName" call BIS_fnc_localize),
    false,
    1
] call CBA_Settings_fnc_init;
