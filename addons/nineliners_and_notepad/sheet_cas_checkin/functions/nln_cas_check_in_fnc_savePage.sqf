nln_cas_check_in_fnc_savePage =
{
	_varname = "nln_cas_check_in_pageText_" + (str nln_cas_check_in_currentPage);
	_pagetext = profileNamespace setVariable
	[
		_varname,
		[
			ctrlText 1400,
			ctrlText 1401,
			ctrlText 1402,
			ctrlText 1403,
			ctrlText 1404,
			ctrlText 1405,
			ctrlText 1406,
			ctrlText 1407,
			ctrlText 1408
		]
	];

	hint format ["PAGE %1 SAVED", nln_cas_check_in_currentPage];
};
