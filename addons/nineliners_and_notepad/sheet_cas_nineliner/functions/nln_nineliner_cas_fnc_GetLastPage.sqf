nln_nineliner_cas_fnc_GetLastPage =
{
	_lastpage = profileNamespace getVariable "nln_nineliner_cas_lastPage";
	_return = 1;

	if (!isNil "_lastpage") then {_return = _lastpage;};

	_return;
};
