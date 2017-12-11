

SWITCH (cw_9liners_and_notepad_currentResource) do
{

	CASE "CAS_9LINER":	{
							cw_9liners_and_notepad_currentResource = "";
							call cw_9liner_cas_fnc_open;
						};

	CASE "TLM":			{
							cw_9liners_and_notepad_currentResource = "";
							call cw_tlm_fnc_open;
						};
	
	CASE "MEDIVAC_9LINER": 		{
									cw_9liners_and_notepad_currentResource = "";
									call cw_9liner_medv_fnc_open;
								};
	
	CASE "CAS_CHECK_IN": 	{
								cw_9liners_and_notepad_currentResource = "";
								call cw_cas_check_in_fnc_open;
							};
							
	CASE "CAS_GCFF":	{
							cw_9liners_and_notepad_currentResource = "";
							call cw_5liner_gcff_fnc_open;
						};
						
	CASE "NOTEPAD": 	{
							cw_9liners_and_notepad_currentResource = "";
							call cw_noteblock_fnc_open;
						};
						
	CASE "FIRE_FOR_EFFECT":	{
								cw_9liners_and_notepad_currentResource = "";
								call cw_ffe_fnc_open;
							};
						
	CASE "ADJUST_FIRE_MISSION":		{
										cw_9liners_and_notepad_currentResource = "";
										call cw_afm_fnc_open;
									};
									
	CASE "MARKING_MISSION":			{
										cw_9liners_and_notepad_currentResource = "";
										call cw_mm_fnc_open;
									};
};


