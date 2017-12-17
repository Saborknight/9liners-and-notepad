
params [
	["_id", -1, [0]]
];

private _values = (["cas_checkin", _id] call nln_main_fnc_getPage);
if ((count _values) != 10) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", ""];
};

ctrlSetText [1400, (_values select 1)];
ctrlSetText [1401, (_values select 2)];
ctrlSetText [1402, (_values select 3)];
ctrlSetText [1403, (_values select 4)];
ctrlSetText [1404, (_values select 5)];
ctrlSetText [1405, (_values select 6)];
ctrlSetText [1406, (_values select 7)];
ctrlSetText [1407, (_values select 8)];
ctrlSetText [1408, (_values select 9)];
