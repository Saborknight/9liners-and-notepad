
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

class nln_nineliner_medv_picture;
class nln_nineliner_medv_edit;
class nln_nineliner_medv_button;
class nln_nineliner_medv_picture_cross;

#include "gui\medevac_nineliner.cpp"

class RscTitles
{
	#include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
	class nln_medevac_nineliner
	{
		clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\medevac_nineliner\XEH_clientPreInit.sqf';";
	};
};
