
//create activation/deactivation settings of each sheet
private _aF = (("true" configClasses (configFile >> "CfgFontFamilies")) apply { (configName _x); });
[
	"nln_ui_fonts_defaultFont",
	"LIST",
	"Disable adjust fire mission sheet",
	"STR_nln_nineliner_and_notepad_Scripts_category",
	[_aF, _aF, "RobotoCondensed"],
	0
] call CBA_Settings_fnc_init;
