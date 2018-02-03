
disableserialization;
params [
    ["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_notepad", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["notepad", _id] call nln_main_fnc_getPage);

if ((count _values) != 3) then
{
    _values = [[profileName, nln_ui_fonts_defaultFont], "", ""];
};

missionNamespace setVariable ["nln_ui_fonts_currentFont", ((_values select 0) select 1)];

(_ui displayCtrl 1400) ctrlSetText (_values select 2);
(_ui displayCtrl 1400) ctrlSetFont nln_ui_fonts_currentFont;
