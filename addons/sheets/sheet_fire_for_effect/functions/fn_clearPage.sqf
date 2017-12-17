
private _p = (profileNamespace getVariable ["nln_fire_for_effect_currentPage", -1]);
if (["fire_for_effect", _p] call nln_fnc_removePage) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_fire_for_effect_currentPage", (["fire_for_effect", _p] call nln_fnc_getPreviousPage)];
};

call nln_fire_for_effect_fnc_updateMenu;
