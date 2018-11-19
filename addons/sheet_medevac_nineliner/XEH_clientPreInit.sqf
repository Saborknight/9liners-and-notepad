
#include "\a3\editor_f\data\scripts\dikCodes.h"

[("STR_nln_main_credentials_modName" call BIS_fnc_localize),"nln_medevac_nineliner_keybind_open", ("STR_nln_medevac_nineliner_settings_keybindOpen" call BIS_fnc_localize), { _this call nln_medevac_nineliner_fnc_openMenu; }, {}, [DIK_M, [true, true, false]]] call CBA_fnc_addKeybind;

[
    "nln_medevac_nineliner_disable",
    "CHECKBOX",
    ("STR_nln_medevac_nineliner_settings_disable" call BIS_fnc_localize),
    ("STR_nln_main_credentials_modName" call BIS_fnc_localize),
    false,
    1
] call CBA_Settings_fnc_init;
