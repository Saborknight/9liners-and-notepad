
params [
	["_id", -1, [0]]
];

private _values = (["marking_mission", _id] call nln_main_fnc_getPage);
if ((count _values) != 21) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false];
};

for "_i" from 1 to 8 do
{
	ctrlSetText [(1399 + _i), (_values select _i)];
};

private _sel = ["", "\x\nln\addons\marking_mission\data\ui\ringle.paa"];
for "_i" from 9 to 20 do
{
	ctrlSetText [(1192 + _i), (_sel select (_values select _i))];
};
