nln_fiveliner_gcff_fnc_GetLastPage =
{
	_lastpage = profileNamespace getVariable "nln_fiveliner_gcff_lastPage";
	_return = 1;

	if (!isNil "_lastpage") then {_return = _lastpage;};

	_return;
};
