
disableserialization;
params [
	["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_marking_mission", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["marking_mission", _id] call nln_fnc_getPage);

if ((count _values) != 22) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false];
};

for "_i" from 1 to 8 do
{
	(_ui displayCtrl (1399 + _i)) ctrlSetText (_values select _i);
};

private _pictureRingle = "\x\nln\addons\nineliners_and_notepad\sheet_marking_mission\data\ui\ringle.paa";
for "_i" from 9 to 20 do
{
	if (_values select _i) then
	{
		(_ui displayCtrl (1192 + _i)) ctrlSetText _pictureRingle;
	};
};
