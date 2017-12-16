
disableserialization;
params [
	["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_gunship_cff", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["gunship_cff", _id] call nln_fnc_getPage);

if ((count _values) != 22) then
{
	_values = [profileName, "", "", "", "", "", ""];
};

for "_i" from 1 to 6 do
{
	(_ui displayCtrl (1399 + _i)) ctrlSetText (_values select _i);
};
