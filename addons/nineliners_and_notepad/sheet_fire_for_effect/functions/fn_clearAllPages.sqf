
if (["fire_for_effect"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_fire_for_effect_currentPage", -1];
};

call nln_fire_for_effect_fnc_updateMenu;
