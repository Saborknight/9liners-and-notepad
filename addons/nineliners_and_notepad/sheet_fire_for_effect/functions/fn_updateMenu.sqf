
params [
	["_id", -1, [0]]
];

private _values = (["fire_for_effect", _id] call nln_fnc_getPage);
if ((count _values) != 22) then
{
	_values = [profileName, "", "", "", "", false, false, false, false, false, false, false, false, "", "", "", "", "", "", "", "", ""];
};

ctrlSetText [1400, (_values select 1)];
ctrlSetText [1401, (_values select 2)];
ctrlSetText [1402, (_values select 3)];
ctrlSetText [1403, (_values select 4)];

//indexes 5-12
private _pictureRingle = "\x\nln\addons\nineliners_and_notepad\sheet_fire_for_effect\data\ui\ringle.paa";
for "_i" from 5 to 12 do
{
	if (_values select _i) then
	{
		ctrlSetText [(1196 + _i), _pictureRingle];
	}
	else
	{
		ctrlSetText[(1196 + _i), ""];
	};
};

ctrlSetText [1404, (_values select 13)];
ctrlSetText [1405, (_values select 14)];
ctrlSetText [1406, (_values select 15)];
ctrlSetText [1407, (_values select 16)];
ctrlSetText [1408, (_values select 17)];
ctrlSetText [1409, (_values select 18)];
ctrlSetText [1410, (_values select 19)];
ctrlSetText [1411, (_values select 20)];
ctrlSetText [1412, (_values select 21)];

