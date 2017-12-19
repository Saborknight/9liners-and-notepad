
params [
	["_id", -1, [0]]
];

private _values = (["medevac_nineliner", _id] call nln_main_fnc_getPage);
if ((count _values) != 39) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", "", false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false];
};

for "_i" from 1 to 9 do
{
	ctrlSetText [(1399 + _i), (_values select _i)];
};

private _sel = ["", "\x\nln\addons\medevac_nineliner\data\ui\cross.paa"];
for "_i" from 10 to 38 do
{
	ctrlSetText [(2790 + _i), (_sel select (_values select _i))];
};
