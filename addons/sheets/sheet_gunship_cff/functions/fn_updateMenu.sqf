
params [
	["_id", -1, [0]]
];

private _values = (["gunship_cff", _id] call nln_fnc_getPage);
if ((count _values) != 8) then
{
	_values = [profileName, "", "", "", "", "", ""];
};

for "_i" from 1 to 6 do
{
	ctrlSetText [(1399 + _i), (_values select _i)];
};
