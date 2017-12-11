cw_afm_fnc_previousPage =
{
_currentPage = cw_afm_currentPage;
_previousPage = _currentPage - 1;

If (_previousPage <= 0)exitWith {hint "No more previous Sheets.";};

cw_afm_currentPage = cw_afm_currentPage - 1;
profileNamespace setVariable ["cw_afm_lastPage", cw_afm_currentPage];

_pagetext = [cw_afm_currentPage] call cw_afm_fnc_GetPageText;

[_pagetext] call cw_afm_fnc_fill;

hint format ["PAGE %1/20", cw_afm_currentPage];
};