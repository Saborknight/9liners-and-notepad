
private _key = (profileNamespace getVariable ["nln_notepad_currentPage", -1]);

private _values = [
	profileName,
	"", //TODO: add headerline field
	(ctrlText 1400)
];

if (_key <= -1) then
{
	_key = (["notepad", _values] call nln_fnc_addPage);
	profileNamespace setVariable ["nln_notepad_currentPage", _key];
	private _pP = (["notepad", _key] call nln_fnc_getPagePosition);
	hint format["Page %1/%2", (_pP select 0), (_pP select 1)];
}
else
{
	["notepad", _key, _values] call nln_fnc_setPage;
};
