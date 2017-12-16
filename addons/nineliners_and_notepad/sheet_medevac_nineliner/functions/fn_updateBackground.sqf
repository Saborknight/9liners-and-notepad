
disableserialization;
params [
	["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_medevac_nineliner", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["medevac_nineliner", _id] call nln_fnc_getPage);

if ((count _values) != 38) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false];
};

for "_i" from 1 to 9 do
{
	(_ui displayCtrl (1399 + _i)) ctrlSetText (_values select _i);
};

private _pictureCross = "\x\nln\addons\nineliners_and_notepad\sheet_medevac_nineliner\data\ui\cross.paa";
for "_i" from 10 to 37 do
{
	if (_values select _i) then
	{
		(_ui displayCtrl (2790 + _i)) ctrlSetText _pictureCross;
	}
	else
	{
		(_ui displayCtrl (2790 + _i)) ctrlSetText "";
	};
};
