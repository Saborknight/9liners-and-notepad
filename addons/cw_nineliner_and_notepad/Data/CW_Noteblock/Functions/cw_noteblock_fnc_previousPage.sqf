cw_noteblock_fnc_previousPage = 
{
_currentPage = cw_noteblock_currentPage;
_previouspage = _currentPage - 1;

If (_previouspage < 1)exitWith {hint "No more previous pages.";};

cw_noteblock_currentPage = cw_noteblock_currentPage - 1;
profileNamespace setVariable ["cw_noteblock_LastPage", cw_noteblock_currentPage];

_text = [cw_noteblock_currentPage] call cw_noteblock_fnc_GetPageText;

ctrlSetText [1400, _text];
ctrlSetText [100, cw_noteblock_currentPage];

hint format ["PAGE %1/50", cw_noteblock_currentPage];

};