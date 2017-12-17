
disableserialization;
params [
	["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_cas_nineliner", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["cas_nineliner", _id] call nln_main_fnc_getPage);

if ((count _values) != 21) then
{
	_values = [profileName, "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""];
};

for "_i" from 1 to 20 do
{
	(_ui displayCtrl (1399 + _i)) ctrlSetText (_values select _i);
};
