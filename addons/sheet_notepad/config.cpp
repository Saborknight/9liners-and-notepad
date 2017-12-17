
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

class nln_noteblock_picture;
class nln_noteblock_edit;
class nln_noteblock_button

#include "gui\notepad.cpp"

class RscTitles
{
	#include "gui\RscTitles.cpp"
};

class Extended_PreInit_EventHandlers
{
	class nln_notepad
	{
		clientInit = "call compile preprocessFileLineNumbers '\x\nln\addons\notepad\XEH_clientPreInit.sqf';";
	};
};
