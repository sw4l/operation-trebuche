class CfgFunctions
{
	class TEI
	{
		class HEV_Init
		{
			file = "\TEI_Core\scripts\HEV";
			class Init{};
		};
		class HEV_podPrepare
		{
			file = "\TEI_Core\scripts\HEV";
			class podPrepare{};
		};
		class HEV_podPrepareAI
		{
			file = "\TEI_Core\scripts\HEV";
			class podPrepareAI{};
		};
		class HEV_podLaunch
		{
			file = "\TEI_Core\scripts\HEV";
			class podLaunch{};
		};
		class HEV_podLaunchAI
		{
			file = "\TEI_Core\scripts\HEV";
			class podLaunchAI{};
		};
		class HEV_podLand
		{
			file = "\TEI_Core\scripts\HEV";
			class podLand{};
		};
		class HEV_podDoor
		{
			file = "\TEI_Core\scripts\HEV";
			class podDoor{};
		};
		class HEV_podCallAI
		{
			file = "\TEI_Core\scripts\HEV";
			class podCallAI{};
		};
		class HEV_podCallSelf
		{
			file = "\TEI_Core\scripts\HEV";
			class podCallSelf{};
		};
		class ODST_Helmet_Init
		{
			file = "\TEI_Core\scripts\ODST_Helmet";
			class Init{};
		};
		class ODST_Helmet_VisorToggle
		{
			file = "\TEI_Core\scripts\ODST_Helmet";
			class VisorToggle{};
		};
		class ODST_Helmet_getHelmet
		{
			file = "\TEI_Core\scripts\ODST_Helmet";
			class getHelmet{};
		};
		class ODST_Helmet_setHelmet
		{
			file = "\TEI_Core\scripts\ODST_Helmet";
			class setHelmet{};
		};
		class ODST_Helmet_LowLightToggle
		{
			file = "\TEI_Core\scripts\ODST_Helmet";
			class LowLightToggle{};
		};
	};
};



class Extended_PreInit_EventHandlers //This is a CBA configuration for the HUD
{
	TEI_ODST_Helmet_Init 																		= TEI_fnc_ODST_Helmet_Init;
	TEI_HEV_Init 																				= TEI_fnc_HEV_Init;
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
	titles[] 																					= {"TEI_UNSC_ODST_HUD"};
	class TEI_UNSC_ODST_HUD
	{
		idd																						= -1; // ID ... always -1
		movingEnable 																			= false; // always false
		duration																				= 999999999; // time of the effect (in seconds)
		name 																					= "TEI_UNSC_ODST_HUD"; // name in editor
		sizeEx 																					= 256;// Size required for ARMA
		controls[]																				= {"TEI_UNSC_ODST_HUD_class"};
		fadein																					= 0;
		fadeout																					= 0;

		class TEI_UNSC_ODST_HUD_class : RscStdText //RscPicture // For pictures
		{
			style																				= 48; 
			x 																					= safeZoneXAbs; 
			y 																					= safeZoneY; 
			w 																					= safeZoneWAbs; 
			h 																					= safeZoneH;
			text																				= "\TEI_Core\scripts\Data\ODST_HUD.paa";
			sizeEx 																				= 1;
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class TEI_HEV_Wind1
	{
		name = "[TEI] HEV Wind 1";
		sound[] = {"\tei_core\scripts\sounds\HEV_Wind1.ogg", 1, 1};
		titles[] = {};
	};
	class TEI_HEV_Wind2
	{
		name = "[TEI] HEV Wind 2";
		sound[] = {"\tei_core\scripts\sounds\HEV_Wind2.ogg", 1, 1};
		titles[] = {};
	};
	class TEI_HEV_Pop
	{
		name = "[TEI] HEV Pop";
		sound[] = {"\tei_core\scripts\sounds\HEV_Pop.ogg", 1, 1};
		titles[] = {};
	};
	class TEI_HEV_Door
	{
		name = "[TEI] HEV Door";
		sound[] = {"\tei_core\scripts\sounds\HEV_Door.ogg", 1, 1};
		titles[] = {};
	};
	class TEI_HEV_Chute
	{
		name = "[TEI] HEV Chute";
		sound[] = {"\tei_core\scripts\sounds\HEV_Chute.ogg", 1, 1};
		titles[] = {};
	};
	class TEI_ODST_Helmet_Visor
	{
		name = "[TEI] ODST Helmet Visor";
		sound[] = {"\tei_core\scripts\sounds\ODST_Helmet_Visor.ogg", 1, 1};
		titles[] = {};
	};
};