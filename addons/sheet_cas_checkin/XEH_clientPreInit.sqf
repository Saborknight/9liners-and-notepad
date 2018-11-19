
#include "\a3\editor_f\data\scripts\dikCodes.h"

[("STR_nln_main_credentials_modName" call BIS_fnc_localize),"nln_open_cas_check_in_key", ("STR_nln_cas_checkin_settings_keybindOpen" call BIS_fnc_localize), { _this call nln_cas_checkin_fnc_openMenu; }, {}, [DIK_B, [true, true, false]]] call CBA_fnc_addKeybind;

[
    "nln_cas_checkin_disable",
    "CHECKBOX",
    ("STR_nln_cas_checkin_settings_disable" call BIS_fnc_localize),
    ("STR_nln_main_credentials_modName" call BIS_fnc_localize),
    false,
    1
] call CBA_Settings_fnc_init;
