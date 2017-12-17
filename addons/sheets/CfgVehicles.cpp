
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

			class adjust_fire_mission
			{
				displayName = ["STR_nln_Interaction_selfActionAdjustFireMission"] call BIS_fnc_localize;
				condition = "nln_adjust_fire_mission_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_adjust_fire_mission_enable";
					statement = "call nln_adjust_fire_mission_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_adjust_fire_mission_enable && (isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
					statement = "call nln_adjust_fire_mission_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_adjust_fire_mission_enable && !(isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
					statement = "call nln_adjust_fire_mission_fnc_closeBackground;";
				};
			};

			class cas_checkin
			{
				displayName = ["STR_nln_Interaction_selfActionCASCheckIn"] call BIS_fnc_localize;
				condition = "nln_cas_checkin_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_cas_checkin_enable";
					statement = "call nln_cas_checkin_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_cas_checkin_enable && (isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
					statement = "call nln_cas_checkin_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_cas_checkin_enable && !(isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
					statement = "call nln_cas_checkin_fnc_closeBackground;";
				};
			};

			class cas_nineliner
			{
				displayName = ["STR_nln_Interaction_selfActionCASNineliner"] call BIS_fnc_localize;
				condition = "nln_cas_nineliner_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_cas_nineliner_enable";
					statement = "call nln_cas_nineliner_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_cas_nineliner_enable && (isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
					statement = "call nln_cas_nineliner_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_cas_nineliner_enable && !(isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
					statement = "call nln_cas_nineliner_fnc_closeBackground;";
				};
			};

			class fire_for_effect
			{
				displayName = ["STR_nln_Interaction_selfActionFireForEffect"] call BIS_fnc_localize;
				condition = "nln_fire_for_effect_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_fire_for_effect_enable";
					statement = "call nln_fire_for_effect_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_fire_for_effect_enable && (isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
					statement = "call nln_fire_for_effect_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_fire_for_effect_enable && !(isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
					statement = "call nln_fire_for_effect_fnc_closeBackground;";
				};
			};

			class gunship_cff
			{
				displayName = ["STR_nln_Interaction_selfActionGunshipCallForFire"] call BIS_fnc_localize;
				condition = "nln_gunship_cff_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_gunship_cff_enable";
					statement = "call nln_gunship_cff_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_gunship_cff_enable && (isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
					statement = "call nln_gunship_cff_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_gunship_cff_enable && !(isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
					statement = "call nln_gunship_cff_fnc_closeBackground;";
				};
			};

			class marking_mission
			{
				displayName = ["STR_nln_Interaction_selfActionMarkingMission"] call BIS_fnc_localize;
				condition = "nln_marking_mission_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_marking_mission_enable";
					statement = "call nln_marking_mission_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_marking_mission_enable && (isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
					statement = "call nln_marking_mission_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_marking_mission_enable && !(isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
					statement = "call nln_marking_mission_fnc_closeBackground;";
				};
			};

			class medevac_nineliner
			{
				displayName = ["STR_nln_Interaction_selfActionMedevacNineliner"] call BIS_fnc_localize;
				condition = "nln_medevac_nineliner_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_medevac_nineliner_enable";
					statement = "call nln_medevac_nineliner_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_medevac_nineliner_enable && (isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
					statement = "call nln_medevac_nineliner_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_medevac_nineliner_enable && !(isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
					statement = "call nln_medevac_nineliner_fnc_closeBackground;";
				};
			};

			class notepad
			{
				displayName = ["STR_nln_Interaction_selfActionNotepad"] call BIS_fnc_localize;
				condition = "nln_notepad_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_notepad_enable";
					statement = "call nln_notepad_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_notepad_enable && (isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
					statement = "call nln_notepad_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_notepad_enable && !(isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
					statement = "call nln_notepad_fnc_closeBackground;";
				};
			};

			class target_location_methods
			{
				displayName = ["STR_nln_Interaction_selfActionTargetLocationMethods"] call BIS_fnc_localize;
				condition = "nln_target_location_methods_enable";
				statement = "";

				class edit
				{
					displayName = ["STR_nln_Interaction_selfActionEdit"] call BIS_fnc_localize;
					condition = "nln_target_location_methods_enable";
					statement = "call nln_target_location_methods_fnc_openMenu;";
				};

				class show
				{
					displayName = ["STR_nln_Interaction_selfActionShow"] call BIS_fnc_localize;
					condition = "nln_target_location_methods_enable && (isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
					statement = "call nln_target_location_methods_fnc_openBackground;";
				};

				class hide
				{
					displayName = ["STR_nln_Interaction_selfActionHide"] call BIS_fnc_localize;
					condition = "nln_target_location_methods_enable && !(isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
					statement = "call nln_target_location_methods_fnc_closeBackground;";
				};
			};
		};
	};
};
