cw_cas_check_in_fnc_GetLastPage =
{
_lastpage = profileNamespace getVariable "cw_cas_check_in_lastPage";
_return = 1;

If (!isNil "_lastpage") then {_return = _lastpage;};

_return;
};