cw_ffe_fnc_previousPage =
{
_currentPage = cw_ffe_currentPage;
_previousPage = _currentPage - 1;

If (_previousPage <= 0)exitWith {hint (["STR_cw_nineline_and_notepad_Scripts_PageNotAvailable"] call BIS_fnc_localize);};

cw_ffe_currentPage = cw_ffe_currentPage - 1;
profileNamespace setVariable ["cw_ffe_lastPage", cw_ffe_currentPage];

_pagetext = [cw_ffe_currentPage] call cw_ffe_fnc_GetPageText;

[_pagetext] call cw_ffe_fnc_fill;

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageStep"] call BIS_fnc_localize), cw_ffe_currentPage];
};