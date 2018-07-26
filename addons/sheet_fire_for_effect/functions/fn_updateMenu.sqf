
params [
    ["_id", -1, [0]]
];

private _values = (["fire_for_effect", _id] call nln_main_fnc_getPage);
if ((count _values) != 22) then
{
    _values = [[profileName, nln_ui_fonts_defaultFont], "", "", "", "", "", "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false];
};

disableSerialization;
private _ui = (findDisplay 8884);

for "_i" from 1 to 13 do
{
    ctrlSetText [(1399 + _i), (_values select _i)];
    (_ui displayCtrl (1399 + _i)) ctrlSetFont nln_ui_fonts_currentFont;
};

private _sel = ["", "\x\nln\addons\sheet_fire_for_effect\data\ui\ringle.paa"];
for "_i" from 14 to 21 do
{
    ctrlSetText [(1187 + _i), (_sel select (_values select _i))];
};
