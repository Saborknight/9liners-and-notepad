
if (["notepad"] call nln_fnc_removeAllPages) then
{
	hint "All pages were removed.";
	profileNamespace setVariable ["nln_notepad_currentPage", -1];
};

call nln_notepad_fnc_updateMenu;
