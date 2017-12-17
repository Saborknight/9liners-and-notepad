
class CfgPatches
{
	#include "CfgPatches.cpp"
};

class CfgFunctions
{
	#include "CfgFunctions.cpp"
};

class CfgVehicles
{
	#include "CfgVehicles.cpp"
};

class nln_cas_check_in_picture;
class nln_cas_check_in_edit;
class nln_cas_check_in_button;

#include "gui\cas_checkin.cpp"

class RscTitles
{
	#include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
	class nln_cas_checkin
	{
		clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\cas_checkin\XEH_clientPreInit.sqf';";
	};
};
