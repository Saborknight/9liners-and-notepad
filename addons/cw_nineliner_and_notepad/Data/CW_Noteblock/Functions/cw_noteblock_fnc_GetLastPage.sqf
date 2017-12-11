cw_noteblock_fnc_GetLastPage =
{
_lastPageVar = profileNamespace getVariable "cw_noteblock_LastPage";
_return = 1;

If (!isNil "_lastPageVar") then {_return = _lastPageVar;};

_return;

};