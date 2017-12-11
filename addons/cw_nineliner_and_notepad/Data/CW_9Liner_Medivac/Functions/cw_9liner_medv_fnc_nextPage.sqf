cw_9liner_medv_fnc_nextPage =
{
_currentPage = cw_9liner_medv_currentPage;
_nextpage = _currentPage + 1;

If (_nextpage > 20)exitWith {hint "No more 9-Liners left.";};

cw_9liner_medv_currentPage = cw_9liner_medv_currentPage + 1;
profileNamespace setVariable ["cw_9liner_medv_lastPage", cw_9liner_medv_currentPage];

_pagetext = [cw_9liner_medv_currentPage] call cw_9liner_medv_fnc_GetPageText;

[_pagetext] call cw_9liner_medv_fnc_fill;

hint format ["PAGE %1/20", cw_9liner_medv_currentPage];
};