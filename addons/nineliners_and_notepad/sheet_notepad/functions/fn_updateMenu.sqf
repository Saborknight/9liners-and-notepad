
params [
	["_id", -1, [0]]
];

private _values = (["notepad", _id] call nln_fnc_getPage);
if ((count _values) != 22) then
{
	_values = [profileName, "", ""];
};

ctrlSetText [1400, (_values select 2)];
