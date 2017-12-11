cw_afm_fnc_savePage =
{
_varname = "cw_afm_pageText_" + (str cw_afm_currentPage);
_pagetext = profileNamespace setVariable 
[
	_varname, 
	[
		ctrlText 1400,
		ctrlText 1401,
		ctrlText 1402,
		ctrlText 1403,
		
		ctrlText 1201,
		ctrlText 1202,
		ctrlText 1203,
		ctrlText 1204,
		
		ctrlText 1205,
		ctrlText 1206,
		ctrlText 1207,
		ctrlText 1208,
		
		ctrlText 1404,
		ctrlText 1405,
		ctrlText 1406,
		ctrlText 1407,
		ctrlText 1408,
		
		ctrlText 1409,
		ctrlText 1410,
		ctrlText 1411,
		ctrlText 1412
	]
];

hint format ["PAGE %1 SAVED", cw_afm_currentPage];
};