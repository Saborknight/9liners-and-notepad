cw_5liner_gcff_fnc_GetLastPage =
{
_lastpage = profileNamespace getVariable "cw_5liner_gcff_lastPage";
_return = 1;

If (!isNil "_lastpage") then {_return = _lastpage;};

_return;
};