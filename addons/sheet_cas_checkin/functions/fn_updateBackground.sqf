
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

(_ui displayCtrl 1400) ctrlSetText (_values select 1);
(_ui displayCtrl 1401) ctrlSetText (_values select 2);
(_ui displayCtrl 1402) ctrlSetText (_values select 3);
(_ui displayCtrl 1403)ctrlSetText (_values select 4);
(_ui displayCtrl 1404) ctrlSetText (_values select 5);
(_ui displayCtrl 1405) ctrlSetText (_values select 6);
(_ui displayCtrl 1406) ctrlSetText (_values select 7);
(_ui displayCtrl 1407) ctrlSetText (_values select 8);
(_ui displayCtrl 1408) ctrlSetText (_values select 9);
