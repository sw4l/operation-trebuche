class CfgFunctions
{
	class TEI_HEV
	{
		class TEI_HEV
		{
			file = "\TEI_Core\scripts\HEV";
			class Init{};
			class podPrepare{};
			class podPrepareAI{};
			class podLaunch{};
			class podLaunchAI{};
			class podLand{};
			class podDoor{};
			class podCallAI{};
			class podCallSelf{};
		};
	};
	class TEI_HUD
	{
		class TEI_HUD
		{
			file = "\TEI_Core\scripts\HUD";
			class Init{};
			class VisorToggle{};
			class getHelmet{};
			class setHelmet{};
			class LowLightToggle{};
		};
	};
};

/*class Extended_PostInit_EventHandlers //This is a CBA configuration for the HUD
{
	class TEI_HUD
	{
		init	 																				= "call TEI_HUD_fnc_Init";
		serverInit 																				= "call TEI_HUD_fnc_Init";
		disableModuload 																		= "true";
	};
	class TEI_HEV
	{
		init	 																				= "call TEI_HEV_fnc_Init";
		serverInit 																				= "call TEI_HEV_fnc_Init";
		disableModuload 																		= "true";
	};
};*/

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
	titles[] 																					= {"TEI_ODST_HUD"};
	class TEI_ODST_HUD
	{
		idd																						= -1; // ID ... always -1
		movingEnable 																			= false; // always false
		duration																				= 999999999; // time of the effect (in seconds)
		name 																					= "TEI_ODST_HUD"; // name in editor
		sizeEx 																					= 256;// Size required for ARMA
		controls[]																				= {"TEI_ODST_HUD_class"};
		fadein																					= 0;
		fadeout																					= 0;

		class TEI_ODST_HUD_class : RscStdText //RscPicture // For pictures
		{
			style																				= 48; 
			x 																					= safeZoneXAbs; 
			y 																					= safeZoneY; 
			w 																					= safeZoneWAbs; 
			h 																					= safeZoneH;
			text																				= "\TEI_Core\scripts\Data\odst_hud_lightblue_ca.paa";
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
	class TEI_HUD_Helmet_Visor
	{
		name = "[TEI] Helmet Visor";
		sound[] = {"\tei_core\scripts\sounds\ODST_Helmet_Visor.ogg", 1, 1};
		titles[] = {};
	};
};