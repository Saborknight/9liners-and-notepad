
params [
	["_id", -1, [0]]
];

private _values = (["adjust_fire_mission", _id] call nln_fnc_getPage);
if ((count _values) != 22) then
{
	_values = [profileName, "", "", "", "", false, false, false, false, false, false, false, false, "", "", "", "", "", "", "", "", ""];
};

for "_i" from 1 to 13 do
{
	ctrlSetText [(1399 + _i), (_values select 1)];
};

private _pictureRingle = "\x\nln\addons\sheets\sheet_adjust_fire_mission\data\ui\ringle.paa";
for "_i" from 14 to 21 do
{
	ctrlSetText [(1399 + _i), _pictureRingle];
};
