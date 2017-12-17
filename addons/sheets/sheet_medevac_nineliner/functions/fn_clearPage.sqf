
private _p = (profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1]);
if (["medevac_nineliner", _p] call nln_fnc_removePage) then
{
	hint "Page removed.";
	profileNamespace setVariable ["nln_medevac_nineliner_currentPage", (["medevac_nineliner", _p] call nln_fnc_getPreviousPage)];
};

[(profileNamespace getVariable ["nln_medevac_nineliner_currentPage", -1])] call nln_marking_mission_fnc_updateMenu;
