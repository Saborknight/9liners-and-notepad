cw_9liner_medv_fnc_previousPage =
{
_currentPage = cw_9liner_medv_currentPage;
_previousPage = _currentPage - 1;

If (_previousPage <= 0)exitWith {hint (["STR_cw_nineline_and_notepad_Scripts_PageNotAvailable"] call BIS_fnc_localize);};

cw_9liner_medv_currentPage = cw_9liner_medv_currentPage - 1;
profileNamespace setVariable ["cw_9liner_medv_lastPage", cw_9liner_medv_currentPage];

_pagetext = [cw_9liner_medv_currentPage] call cw_9liner_medv_fnc_GetPageText;

[_pagetext] call cw_9liner_medv_fnc_fill;

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageStep"] call BIS_fnc_localize), cw_9liner_medv_currentPage];
};