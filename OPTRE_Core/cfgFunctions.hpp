class CfgFunctions
{
	class OPTRE_HEV
	{
		class OPTRE_HEV
		{
			file = "\OPTRE_Core\scripts\HEV";
			class Init{};
			class podPrepare{};
			class podPrepareAI{};
			class podLaunch{};
			class podLaunchAI{};
			class podLaunchInit{};
			class podLand{};
			class podLandAI{};
			class podDoor{};
			class podDoorAI{};
			class podCallAI{};
			class podCallSelf{};
		};
	};
	class OPTRE_HUD
	{
		class OPTRE_HUD
		{
			file = "\OPTRE_Core\scripts\HUD";
			class Init{};
			class InitRespawn{};
			class VisorToggle{};
			class getHelmet{};
			class setHelmet{};
			class LowLightToggle{};
		};
	};
	class OPTRE_Thruster
	{
		class OPTRE_Thruster
		{
			file = "\OPTRE_Core\scripts\Thruster";
			class Init{};
			class Engage{};
			class Disengage{};
		};
	};
	class OPTRE_Magnet
	{
		class OPTRE_Magnet
		{
			file = "\OPTRE_Core\scripts\Magnet";
			class Init{};
			class Attach{};
			class Detach{};
		};
	};
	class OPTRE
	{
		class OPTRE
		{
			file = "\OPTRE_Core\scripts";
			class FireSupport_MAC{};
		};
	};
};

class Extended_PostInit_EventHandlers
{
	OPTRE_HEV_Fncs_Init 																		= [] spawn OPTRE_HEV_fnc_Init;
	OPTRE_HUD_Fncs_Init 																		= [] spawn OPTRE_HUD_fnc_Init;
};

class RscStdText //More HUD Stuff
{
	type																						= 0;
	idc																							= -1;
	style																						= 2;
	colorBackground[]																			= {1,1,1,1};
	colorText[]																					= {1,1,1,1};
	font																						= "puristaMedium";
	size																						= 1;
};

class RscTitles //Even More HUD Stuff
{
	titles[] 																					= {"OPTRE_ODST_HUD_blue"};
	class OPTRE_ODST_HUD_blue
	{
		idd																						= -1; // ID ... always -1
		movingEnable 																			= false; // always false
		duration																				= 999999999; // time of the effect (in seconds)
		name 																					= "OPTRE_ODST_HUD_blue"; // name in editor
		sizeEx 																					= 256;// Size required for ARMA
		controls[]																				= {"OPTRE_ODST_HUD_blue_class"};
		fadein																					= 0;
		fadeout																					= 0;
		class OPTRE_ODST_HUD_blue_class : RscStdText //RscPicture // For pictures
		{
			style																				= 48; 
			x 																					= safeZoneXAbs; 
			y 																					= safeZoneY; 
			w 																					= safeZoneWAbs; 
			h 																					= safeZoneH;
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_blue_ca.paa";
			sizeEx 																				= 1;
		};
	};
};
