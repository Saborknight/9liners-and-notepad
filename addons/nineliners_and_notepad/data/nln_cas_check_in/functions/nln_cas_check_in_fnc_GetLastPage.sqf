nln_cas_check_in_fnc_GetLastPage =
{
	_lastpage = profileNamespace getVariable "nln_cas_check_in_lastPage";
	_return = 1;

	if (!isNil "_lastpage") then {_return = _lastpage;};

	_return;
};
