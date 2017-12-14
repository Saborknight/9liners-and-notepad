nln_noteblock_fnc_previousPage =
{
	_currentPage = nln_noteblock_currentPage;
	_previouspage = _currentPage - 1;

	if (_previouspage < 1) exitWith {hint "No more previous pages.";};

	nln_noteblock_currentPage = nln_noteblock_currentPage - 1;
	profileNamespace setVariable ["nln_noteblock_LastPage", nln_noteblock_currentPage];

	_text = [nln_noteblock_currentPage] call nln_noteblock_fnc_GetPageText;

	ctrlSetText [1400, _text];
	ctrlSetText [100, nln_noteblock_currentPage];

	hint format ["PAGE %1/50", nln_noteblock_currentPage];
};
