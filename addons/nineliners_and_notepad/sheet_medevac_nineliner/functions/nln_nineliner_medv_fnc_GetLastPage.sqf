nln_nineliner_medv_fnc_GetLastPage =
{
	_lastpage = profileNamespace getVariable "nln_nineliner_medv_lastPage";
	_return = 1;

	if (!isNil "_lastpage") then {_return = _lastpage;};

	_return;
};
