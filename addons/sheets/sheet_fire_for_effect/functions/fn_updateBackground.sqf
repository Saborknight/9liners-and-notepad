
disableserialization;
params [
	["_id", -1, [0]]
];

private _ui = (uiNamespace getVariable ["nln_fire_for_effect", displayNull]);
if (isNull _ui) exitWith {};

private _values = (["fire_for_effect", _id] call nln_fnc_getPage);

if ((count _values) != 22) then
{
	_values = [profileName, "", "", "", "", false, false, false, false, false, false, false, false, "", "", "", "", "", "", "", "", ""];
};

(_ui displayCtrl 1400) ctrlSetText (_values select 1);
(_ui displayCtrl 1401) ctrlSetText (_values select 2);
(_ui displayCtrl 1402) ctrlSetText (_values select 3);
(_ui displayCtrl 1403) ctrlSetText (_values select 4);
(_ui displayCtrl 1404) ctrlSetText (_values select 13);
(_ui displayCtrl 1405) ctrlSetText (_values select 14);
(_ui displayCtrl 1406) ctrlSetText (_values select 15);
(_ui displayCtrl 1407) ctrlSetText (_values select 16);
(_ui displayCtrl 1408) ctrlSetText (_values select 17);
(_ui displayCtrl 1409) ctrlSetText (_values select 18);
(_ui displayCtrl 1410) ctrlSetText (_values select 19);
(_ui displayCtrl 1411) ctrlSetText (_values select 20);
(_ui displayCtrl 1412) ctrlSetText (_values select 21);

//indexes 5-12
private _pictureRingle = "\x\nln\addons\sheets\sheet_fire_for_effect\data\ui\ringle.paa";
for "_i" from 5 to 12 do
{
	if (_values select _i) then
	{
		(_ui displayCtrl (1996 + _i)) ctrlSetText _pictureRingle;
	}
	else
	{
		ctrlSetText[(1996 + _i), ""];
	};
};
