nln_nineliner_medv_fnc_savePage =
{
	_varname = "nln_nineliner_medv_pageText_" + (str nln_nineliner_medv_currentPage);
	_pagetext = profileNamespace setVariable
	[
		_varname,
		[
			ctrlText 1400,
			ctrlText 1401,
			ctrlText 1402,
			ctrlText 2800,
			ctrlText 2801,
			ctrlText 2802,
			ctrlText 2803,
			ctrlText 2804,
			ctrlText 1403,
			ctrlText 2805,
			ctrlText 2806,
			ctrlText 2807,
			ctrlText 2808,
			ctrlText 1404,
			ctrlText 2809,
			ctrlText 2810,
			ctrlText 1405,
			ctrlText 2811,
			ctrlText 2812,
			ctrlText 2813,
			ctrlText 2814,
			ctrlText 1406,
			ctrlText 2815,
			ctrlText 2816,
			ctrlText 2817,
			ctrlText 2818,
			ctrlText 2819,
			ctrlText 1407,
			ctrlText 2820,
			ctrlText 2821,
			ctrlText 2822,
			ctrlText 2823,
			ctrlText 2824,
			ctrlText 1408,
			ctrlText 2825,
			ctrlText 2826,
			ctrlText 2827
		]
	];

	hint format ["PAGE %1 SAVED", nln_nineliner_medv_currentPage];
};
