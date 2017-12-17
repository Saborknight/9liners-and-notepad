
class Man;
class CAManBase : Man
{
	class ACE_SelfActions
	{
		class nln_sheets
		{
			displayName = ["STR_nln_Interaction_selfActionSheets"] call BIS_fnc_localize;
			condition = "nln_adjust_fire_mission_enable || nln_cas_checkin_enable || nln_cas_nineliner_enable || nln_fire_for_effect_enable || nln_gunship_cff_enable || nln_marking_mission_enable || nln_medevac_nineliner_enable || nln_notepad_enable || nln_target_location_methods_enable";
			statement = "";
		};
	};
};
