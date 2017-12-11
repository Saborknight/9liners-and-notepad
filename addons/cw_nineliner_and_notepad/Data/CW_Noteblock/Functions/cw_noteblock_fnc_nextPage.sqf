cw_noteblock_fnc_nextPage =
{
_currentPage = cw_noteblock_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 50)exitWith {hint "No more pages left.";};

cw_noteblock_currentPage = cw_noteblock_currentPage + 1;
profileNamespace setVariable ["cw_noteblock_LastPage", cw_noteblock_currentPage];

_text = [cw_noteblock_currentPage] call cw_noteblock_fnc_GetPageText;

ctrlSetText [1400, _text];
ctrlSetText [1000, cw_noteblock_currentPage];

hint format ["PAGE %1/50", cw_noteblock_currentPage];
};