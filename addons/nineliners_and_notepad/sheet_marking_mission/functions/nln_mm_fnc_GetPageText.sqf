nln_mm_fnc_GetPageText =
{
	_pageNR = _this select 0;
	_varname = "nln_mm_pageText_" + (str _pageNR);
	_textvar = profileNamespace getVariable _varname;
	_return = ["","","","","","","","","","","","","","","","","","","",""];


	if (!isNil "_textvar") then {_return = _textvar;};

	_return;
};
