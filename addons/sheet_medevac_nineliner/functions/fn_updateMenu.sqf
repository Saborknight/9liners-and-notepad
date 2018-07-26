
params [
    ["_id", -1, [0]]
];

private _values = (["medevac_nineliner", _id] call nln_main_fnc_getPage);
if ((count _values) != 39) then
{
    _values = [[profileName, nln_ui_fonts_defaultFont], "", "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false];
};

missionNamespace setVariable ["nln_ui_fonts_currentFont", ((_values select 0) select 1)];

disableSerialization;
private _ui = (findDisplay 8887);

for "_i" from 1 to 9 do
{
    ctrlSetText [(1399 + _i), (_values select _i)];
    (_ui displayCtrl (1399 + _i)) ctrlSetFont nln_ui_fonts_currentFont;
};

private _sel = ["", "\x\nln\addons\sheet_medevac_nineliner\data\ui\cross.paa"];
for "_i" from 10 to 38 do
{
    ctrlSetText [(2790 + _i), (_sel select (_values select _i))];
};
