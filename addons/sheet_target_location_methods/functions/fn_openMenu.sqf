
if (nln_target_location_methods_disable) exitWith { -1; };

call nln_target_location_methods_fnc_closeBackground;
closeDialog 0;
createDialog "nln_target_location_methods";
