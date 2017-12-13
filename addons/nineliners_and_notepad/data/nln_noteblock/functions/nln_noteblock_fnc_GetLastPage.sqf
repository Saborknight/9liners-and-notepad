nln_noteblock_fnc_GetLastPage =
{
	_lastPageVar = profileNamespace getVariable "nln_noteblock_LastPage";
	_return = 1;

	if (!isNil "_lastPageVar") then {_return = _lastPageVar;};

	_return;
};
