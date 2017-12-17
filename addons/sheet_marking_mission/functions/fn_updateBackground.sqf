
disableserialization;
params [
	["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_marking_mission", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["marking_mission", _id] call nln_main_fnc_getPage);

if ((count _values) != 21) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false];
};

for "_i" from 1 to 8 do
{
	(_ui displayCtrl (1399 + _i)) ctrlSetText (_values select _i);
};

private _sel = ["\x\nln\addons\marking_mission\data\ui\ringle.paa", ""];
for "_i" from 9 to 20 do
{
	(_ui displayCtrl (1192 + _i)) ctrlSetText (_sel select (_values select _i));
};
