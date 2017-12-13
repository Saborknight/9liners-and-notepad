cw_5liner_gcff_fnc_savePage =
{
_varname = "cw_5liner_gcff_pageText_" + (str cw_5liner_gcff_currentPage);
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
		ctrlText 1406
	]
];

hint format [(["STR_cw_nineliner_and_notepad_Scripts_PageSaved"] call BIS_fnc_localize), cw_5liner_gcff_currentPage];
};