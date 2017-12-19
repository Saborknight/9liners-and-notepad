
private _p = (profileNamespace getVariable ["nln_cas_nineliner_currentPage", -1]);
if (["cas_nineliner", _p] call nln_main_fnc_removePage) then
{
	hint ["STR_nln_Interactions_clearPageHint"] call BIS_fnc_localize;
	profileNamespace setVariable ["nln_cas_nineliner_currentPage", (["cas_nineliner", _p] call nln_main_fnc_getPreviousPage)];
};

[(profileNamespace getVariable ["nln_cas_nineliner_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
