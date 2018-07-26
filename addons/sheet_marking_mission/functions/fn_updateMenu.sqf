
params [
    ["_id", -1, [0]]
];

private _values = (["marking_mission", _id] call nln_main_fnc_getPage);
if ((count _values) != 21) then
{
    _values = [[profileName, nln_ui_fonts_defaultFont], "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false];
};

missionNamespace setVariable ["nln_ui_fonts_currentFont", ((_values select 0) select 1)];

disableSerialization;
private _ui = (findDisplay 8886);

for "_i" from 1 to 8 do
{
    ctrlSetText [(1399 + _i), (_values select _i)];
    (_ui displayCtrl (1399 + _i)) ctrlSetFont nln_ui_fonts_currentFont;
};

private _sel = ["", "\x\nln\addons\sheet_marking_mission\data\ui\ringle.paa"];
for "_i" from 9 to 20 do
{
    ctrlSetText [(1192 + _i), (_sel select (_values select _i))];
};
