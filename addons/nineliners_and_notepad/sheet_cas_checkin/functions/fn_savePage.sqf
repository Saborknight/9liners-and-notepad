
private _key = (profileNamespace getVariable ["nln_cas_checkin_currentPage", -1]);

private _values = [
	profileName,
	(ctrlText 1400),
	(ctrlText 1401),
	(ctrlText 1402),
	(ctrlText 1403),
	(ctrlText 1404),
	(ctrlText 1405),
	(ctrlText 1406),
	(ctrlText 1407),
	(ctrlText 1408)
];

if (_key <= -1) then
{
	_key = (["cas_checkin", _values] call nln_fnc_addPage);
	profileNamespace setVariable ["nln_cas_checkin_currentPage", _key];
	private _pP = (["cas_checkin", _key] call nln_fnc_getPagePosition);
	hint format["Page %1/%2", (_pP select 0), (_pP select 1)];
}
else
{
	["cas_checkin", _key, _values] call nln_fnc_setPage;
};
