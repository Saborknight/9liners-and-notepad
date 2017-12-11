cw_noteblock_fnc_savePage =
{
_currentPage = cw_noteblock_currentPage;
_varname = "cw_noteblock_pageText_" + (str _currentPage);
_text = ctrlText 1400;

profileNamespace setVariable [_varname, _text];

hint format ["PAGE %1 SAVED", cw_noteblock_currentPage];
};