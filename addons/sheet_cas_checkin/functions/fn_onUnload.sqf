
call nln_cas_checkin_fnc_savePage;

if (nln_dialogToDisplay_enable) then
{
	call nln_cas_checkin_fnc_openBackground;
};

nln_ui_fonts_currentFont = nil;
