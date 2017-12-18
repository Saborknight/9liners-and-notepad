
disableserialization;
params [
	["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_cas_checkin", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["cas_checkin", _id] call nln_main_fnc_getPage);

if ((count _values) != 10) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", ""];
};

for "_i" from 1 to 9 do
{
	(_ui displayCtrl (1399 + _i)) ctrlSetText (_values select _i);
};
