
params [
	["_id", -1, [0]]
];

private _values = (["marking_mission", _id] call nln_fnc_getPage);
if ((count _values) != 22) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false];
};

for "_i" from 1 to 9 do
{
	ctrlSetText [(1399 + _i), (_values select _i)];
};

private _pictureCross = "\x\nln\addons\nineliners_and_notepad\sheet_medevac_nineliner\data\ui\cross.paa";
for "_i" from 10 to 37 do
{
	if (_values select _i) then
	{
		ctrlSetText [(2790 + _i), _pictureCross];
	}
	else
	{
		ctrlSetText[(2790 + _i), ""];
	};
};
