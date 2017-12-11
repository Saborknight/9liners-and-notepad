cw_afm_fnc_GetLastPage =
{
_lastpage = profileNamespace getVariable "cw_afm_lastPage";
_return = 1;

If (!isNil "_lastpage") then {_return = _lastpage;};

_return;
};