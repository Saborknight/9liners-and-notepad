
private _key = (profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1]);

private _values = [
    [profileName, (missionNamespace getVariable ["nln_ui_fonts_currentFont", nln_ui_fonts_defaultFont])],
    (ctrlText 1400),
    (ctrlText 1401),
    (ctrlText 1402),
    (ctrlText 1403),
    (ctrlText 1404),
    (ctrlText 1405),
    (ctrlText 1406),
    (ctrlText 1407),
    (ctrlText 1408),
    (if ((ctrlText 2800) == "") then { false; } else { true; }),
    (if ((ctrlText 2801) == "") then { false; } else { true; }),
    (if ((ctrlText 2802) == "") then { false; } else { true; }),
    (if ((ctrlText 2803) == "") then { false; } else { true; }),
    (if ((ctrlText 2804) == "") then { false; } else { true; }),
    (if ((ctrlText 2805) == "") then { false; } else { true; }),
    (if ((ctrlText 2806) == "") then { false; } else { true; }),
    (if ((ctrlText 2807) == "") then { false; } else { true; }),
    (if ((ctrlText 2808) == "") then { false; } else { true; }),
    (if ((ctrlText 2809) == "") then { false; } else { true; }),
    (if ((ctrlText 2810) == "") then { false; } else { true; }),
    (if ((ctrlText 2811) == "") then { false; } else { true; }),
    (if ((ctrlText 2812) == "") then { false; } else { true; }),
    (if ((ctrlText 2813) == "") then { false; } else { true; }),
    (if ((ctrlText 2814) == "") then { false; } else { true; }),
    (if ((ctrlText 2815) == "") then { false; } else { true; }),
    (if ((ctrlText 2816) == "") then { false; } else { true; }),
    (if ((ctrlText 2817) == "") then { false; } else { true; }),
    (if ((ctrlText 2818) == "") then { false; } else { true; }),
    (if ((ctrlText 2819) == "") then { false; } else { true; }),
    (if ((ctrlText 2820) == "") then { false; } else { true; }),
    (if ((ctrlText 2821) == "") then { false; } else { true; }),
    (if ((ctrlText 2822) == "") then { false; } else { true; }),
    (if ((ctrlText 2823) == "") then { false; } else { true; }),
    (if ((ctrlText 2824) == "") then { false; } else { true; }),
    (if ((ctrlText 2825) == "") then { false; } else { true; }),
    (if ((ctrlText 2826) == "") then { false; } else { true; }),
    (if ((ctrlText 2827) == "") then { false; } else { true; }),
    (if ((ctrlText 2828) == "") then { false; } else { true; })
];

private _defaultValues = [
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false,
    false
];

if (_key <= -1) then
{
    if ([_values, _defaultValues] call nln_main_fnc_checkPageIsEmpty) exitWith { -1; };

    _key = (["medevac_nineliner", _values] call nln_main_fnc_addPage);
    profileNamespace setVariable ["nln_medevac_nineliner_currentPage", _key];
    private _pP = (["medevac_nineliner", _key] call nln_main_fnc_getPagePosition);
    hint format[("STR_nln_main_interactions_pageCountHint" call BIS_fnc_localize), (_pP select 0), (_pP select 1)];
}
else
{
    ["medevac_nineliner", _key, _values] call nln_main_fnc_setPage;
};
