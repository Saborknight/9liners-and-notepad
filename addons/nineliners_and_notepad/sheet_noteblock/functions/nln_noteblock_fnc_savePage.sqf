nln_noteblock_fnc_savePage =
{
	_currentPage = nln_noteblock_currentPage;
	_varname = "nln_noteblock_pageText_" + (str _currentPage);
	_text = ctrlText 1400;

	profileNamespace setVariable [_varname, _text];

	hint format ["PAGE %1 SAVED", nln_noteblock_currentPage];
};
