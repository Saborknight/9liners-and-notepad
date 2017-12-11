cw_9liner_medv_fnc_GetLastPage =
{
_lastpage = profileNamespace getVariable "cw_9liner_medv_lastPage";
_return = 1;

If (!isNil "_lastpage") then {_return = _lastpage;};

_return;
};