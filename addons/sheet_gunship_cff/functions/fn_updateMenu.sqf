
params [
    ["_id", -1, [0]]
];

private _values = (["gunship_cff", _id] call nln_main_fnc_getPage);
if ((count _values) != 8) then
{
    _values = [[profileName, nln_ui_fonts_defaultFont], "", "", "", "", "", ""];
};

missionNamespace setVariable ["nln_ui_fonts_currentFont", ((_values select 0) select 1)];

disableSerialization;
private _ui = (findDisplay 8885);

for "_i" from 1 to 6 do
{
    ctrlSetText [(1399 + _i), (_values select _i)];
    (_ui displayCtrl (1399 + _i)) ctrlSetFont nln_ui_fonts_currentFont;
};
