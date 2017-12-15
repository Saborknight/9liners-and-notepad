/*
------------
*/
switch (nln_nineliners_and_notepad_currentResource) do
{

	case "cas_nineliner":	{
							nln_nineliners_and_notepad_currentResource = "";
							call nln_nineliner_cas_fnc_open;
						};

	case "tlm":			{
							nln_nineliners_and_notepad_currentResource = "";
							call nln_tlm_fnc_open;
						};

	case "medevac_nineliner": 		{
									nln_nineliners_and_notepad_currentResource = "";
									call nln_nineliner_medv_fnc_open;
								};

	case "cas_check_in": 	{
								nln_nineliners_and_notepad_currentResource = "";
								call nln_cas_check_in_fnc_open;
							};

	case "cas_gcff":	{
							nln_nineliners_and_notepad_currentResource = "";
							call nln_fiveliner_gcff_fnc_open;
						};

	case "notepad": 	{
							nln_nineliners_and_notepad_currentResource = "";
							call nln_noteblock_fnc_open;
						};

	case "fire_for_effect":	{
								nln_nineliners_and_notepad_currentResource = "";
								call nln_ffe_fnc_open;
							};

	case "adjust_fire_mission":		{
										nln_nineliners_and_notepad_currentResource = "";
										call nln_afm_fnc_open;
									};

	case "marking_mission":			{
										nln_nineliners_and_notepad_currentResource = "";
										call nln_mm_fnc_open;
									};
};
