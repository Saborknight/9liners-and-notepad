
class Man;
class CAManBase : Man
{
    class ACE_SelfActions
    {
        class nln_sheets
        {
            displayName = "Sheets";
            condition = "nln_adjust_fire_mission_enable || nln_cas_checkin_enable || nln_cas_nineliner_enable || nln_fire_for_effect_enable || nln_gunship_cff_enable || nln_marking_mission_enable || nln_medevac_nineliner_enable || nln_notepad_enable || nln_target_location_methods_enable";
            statement = "";

            class adjust_fire_mission
            {
                displayName = "Adjust fire missions";
                condition = "nln_adjust_fire_mission_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_adjust_fire_mission_enable";
                    statement = "call nln_adjust_fire_mission_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_adjust_fire_mission_enable && (isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
                    statement = "call nln_adjust_fire_mission_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_adjust_fire_mission_enable && !(isNull (uiNamespace getVariable ['nln_adjust_fire_mission', displayNull]))";
                    statement = "call nln_adjust_fire_mission_fnc_closeBackground;";
                };
            };

            class cas_checkin
            {
                displayName = "CAS Check-in";
                condition = "nln_cas_checkin_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_cas_checkin_enable";
                    statement = "call nln_cas_checkin_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_cas_checkin_enable && (isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
                    statement = "call nln_cas_checkin_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_cas_checkin_enable && !(isNull (uiNamespace getVariable ['nln_cas_checkin', displayNull]))";
                    statement = "call nln_cas_checkin_fnc_closeBackground;";
                };
            };

            class cas_nineliner
            {
                displayName = "CAS 9-Liner";
                condition = "nln_cas_nineliner_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_cas_nineliner_enable";
                    statement = "call nln_cas_nineliner_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_cas_nineliner_enable && (isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
                    statement = "call nln_cas_nineliner_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_cas_nineliner_enable && !(isNull (uiNamespace getVariable ['nln_cas_nineliner', displayNull]))";
                    statement = "call nln_cas_nineliner_fnc_closeBackground;";
                };
            };

            class fire_for_effect
            {
                displayName = "Fire for effect";
                condition = "nln_fire_for_effect_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_fire_for_effect_enable";
                    statement = "call nln_fire_for_effect_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_fire_for_effect_enable && (isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
                    statement = "call nln_fire_for_effect_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_fire_for_effect_enable && !(isNull (uiNamespace getVariable ['nln_fire_for_effect', displayNull]))";
                    statement = "call nln_fire_for_effect_fnc_closeBackground;";
                };
            };

            class gunship_cff
            {
                displayName = "Gunship call for fire";
                condition = "nln_gunship_cff_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_gunship_cff_enable";
                    statement = "call nln_gunship_cff_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_gunship_cff_enable && (isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
                    statement = "call nln_gunship_cff_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_gunship_cff_enable && !(isNull (uiNamespace getVariable ['nln_gunship_cff', displayNull]))";
                    statement = "call nln_gunship_cff_fnc_closeBackground;";
                };
            };

            class marking_mission
            {
                displayName = "Marking mission";
                condition = "nln_marking_mission_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_marking_mission_enable";
                    statement = "call nln_marking_mission_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_marking_mission_enable && (isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
                    statement = "call nln_marking_mission_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_marking_mission_enable && !(isNull (uiNamespace getVariable ['nln_marking_mission', displayNull]))";
                    statement = "call nln_marking_mission_fnc_closeBackground;";
                };
            };

            class medevac_nineliner
            {
                displayName = "MedEvac 9-Liner";
                condition = "nln_medevac_nineliner_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_medevac_nineliner_enable";
                    statement = "call nln_medevac_nineliner_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_medevac_nineliner_enable && (isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
                    statement = "call nln_medevac_nineliner_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_medevac_nineliner_enable && !(isNull (uiNamespace getVariable ['nln_medevac_nineliner', displayNull]))";
                    statement = "call nln_medevac_nineliner_fnc_closeBackground;";
                };
            };

            class notepad
            {
                displayName = "Notepad";
                condition = "nln_notepad_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_notepad_enable";
                    statement = "call nln_notepad_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_notepad_enable && (isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
                    statement = "call nln_notepad_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_notepad_enable && !(isNull (uiNamespace getVariable ['nln_notepad', displayNull]))";
                    statement = "call nln_notepad_fnc_closeBackground;";
                };
            };

            class target_location_methods
            {
                displayName = "Target location methods";
                condition = "nln_target_location_methods_enable";
                statement = "";

                class edit
                {
                    displayName = "Edit";
                    condition = "nln_target_location_methods_enable";
                    statement = "call nln_target_location_methods_fnc_openMenu;";
                };

                class show
                {
                    displayName = "Show";
                    condition = "nln_target_location_methods_enable && (isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
                    statement = "call nln_target_location_methods_fnc_openBackground;";
                };

                class hide
                {
                    displayName = "Hide";
                    condition = "nln_target_location_methods_enable && !(isNull (uiNamespace getVariable ['nln_target_location_methods', displayNull]))";
                    statement = "call nln_target_location_methods_fnc_closeBackground;";
                };
            };
        };
    };
};
