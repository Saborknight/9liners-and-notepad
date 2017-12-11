cw_ffe_fnc_previousPage =
{
_currentPage = cw_ffe_currentPage;
_previousPage = _currentPage - 1;

If (_previousPage <= 0)exitWith {hint "No more previous Sheets.";};

cw_ffe_currentPage = cw_ffe_currentPage - 1;
profileNamespace setVariable ["cw_ffe_lastPage", cw_ffe_currentPage];

_pagetext = [cw_ffe_currentPage] call cw_ffe_fnc_GetPageText;

[_pagetext] call cw_ffe_fnc_fill;

hint format ["PAGE %1/20", cw_ffe_currentPage];
};