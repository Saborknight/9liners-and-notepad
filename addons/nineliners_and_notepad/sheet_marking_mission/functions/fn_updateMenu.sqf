
params [
	["_id", -1, [0]]
];

private _values = (["marking_mission", _id] call nln_fnc_getPage);
if ((count _values) != 21) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false];
};

for "_i" from 1 to 8 do
{
	ctrlSetText [(1399 + _i), (_values select _i)];
};

private _pictureRingle = "\x\nln\addons\nineliners_and_notepad\sheet_marking_mission\data\ui\ringle.paa";
for "_i" from 9 to 20 do
{
	if (_values select _i) then
	{
		ctrlSetText [(1192 + _i), _pictureRingle];
	}
	else
	{
		ctrlSetText[(1992 + _i), ""];
	};
};
