nln_fiveliner_gcff_fnc_GetPageText =
{
	_pageNR = _this select 0;
	_varname = "nln_fiveliner_gcff_pageText_" + (str _pageNR);
	_textvar = profileNamespace getVariable _varname;
	_return = ["","","","","","",""];


	if (!isNil "_textvar") then {_return = _textvar;};

	_return;
};
