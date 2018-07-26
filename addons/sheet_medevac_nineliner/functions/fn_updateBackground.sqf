
disableserialization;
params [
    ["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_medevac_nineliner", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["medevac_nineliner", _id] call nln_main_fnc_getPage);

if ((count _values) != 39) then
{
    _values = [[profileName, nln_ui_fonts_defaultFont], "", "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false];
};

missionNamespace setVariable ["nln_ui_fonts_currentFont", ((_values select 0) select 1)];

for "_i" from 1 to 9 do
{
    (_ui displayCtrl (1399 + _i)) ctrlSetText (_values select _i);
    (_ui displayCtrl (1399 + _i)) ctrlSetFont nln_ui_fonts_currentFont;
};

private _sel = ["", "\x\nln\addons\sheet_medevac_nineliner\data\ui\cross.paa"];
for "_i" from 10 to 38 do
{
    (_ui displayCtrl (2790 + _i)) ctrlSetText (_sel select (_values select _i));
};
