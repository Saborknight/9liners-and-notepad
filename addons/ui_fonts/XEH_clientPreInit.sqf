
//create activation/deactivation settings of each sheet
private _aF = (("true" configClasses (configFile >> "CfgFontFamilies")) apply { (configName _x); });
_aF sort true;
private _def = (_aF find "TahomaB");
[
    "nln_ui_fonts_defaultFont",
    "LIST",
    ["Default Font", "The default font to be used throughout the sheets"],
    ("STR_nln_main_credentials_modName" call BIS_fnc_localize),
    [_aF, _aF, _def],
    0
] call CBA_Settings_fnc_init;
