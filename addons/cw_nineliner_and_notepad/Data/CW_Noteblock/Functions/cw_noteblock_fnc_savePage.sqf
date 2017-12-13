cw_noteblock_fnc_savePage =
{
_currentPage = cw_noteblock_currentPage;
_varname = "cw_noteblock_pageText_" + (str _currentPage);
_text = ctrlText 1400;

profileNamespace setVariable [_varname, _text];

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageSaved"] call BIS_fnc_localize), cw_noteblock_currentPage];
};