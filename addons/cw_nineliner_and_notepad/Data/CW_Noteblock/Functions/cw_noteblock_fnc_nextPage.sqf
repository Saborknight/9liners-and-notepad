cw_noteblock_fnc_nextPage =
{
_currentPage = cw_noteblock_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 50)exitWith {hint (["STR_cw_nineliner_and_notepad_Scripts_PageSpaceFull"] call BIS_fnc_localize);};

cw_noteblock_currentPage = cw_noteblock_currentPage + 1;
profileNamespace setVariable ["cw_noteblock_LastPage", cw_noteblock_currentPage];

_text = [cw_noteblock_currentPage] call cw_noteblock_fnc_GetPageText;

ctrlSetText [1400, _text];
ctrlSetText [1000, cw_noteblock_currentPage];

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageStep50"] call BIS_fnc_localize), cw_noteblock_currentPage];
};