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
			class podLaunchInit{};
			class podLand{};
			class podLandAI{};
			class podDoor{};
			class podDoorAI{};
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
			class InitRespawn{};
			class VisorToggle{};
			class getHelmet{};
			class setHelmet{};
			class LowLightToggle{};
		};
	};
};

class Extended_PostInit_EventHandlers
{
	TEI_HEV_Fncs_Init 																			= [] spawn TEI_HEV_fnc_Init;
	TEI_HUD_Fncs_Init 																			= [] spawn TEI_HUD_fnc_Init;
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
	titles[] 																					= {"TEI_ODST_HUD_blue"};
	class TEI_ODST_HUD_blue
	{
		idd																						= -1; // ID ... always -1
		movingEnable 																			= false; // always false
		duration																				= 999999999; // time of the effect (in seconds)
		name 																					= "TEI_ODST_HUD_blue"; // name in editor
		sizeEx 																					= 256;// Size required for ARMA
		controls[]																				= {"TEI_ODST_HUD_blue_class"};
		fadein																					= 0;
		fadeout																					= 0;
		class TEI_ODST_HUD_blue_class : RscStdText //RscPicture // For pictures
		{
			style																				= 48; 
			x 																					= safeZoneXAbs; 
			y 																					= safeZoneY; 
			w 																					= safeZoneWAbs; 
			h 																					= safeZoneH;
			text																				= "\TEI_Core\scripts\Data\odst_hud_blue_ca.paa";
			sizeEx 																				= 1;
		};
	};
	class TEI_ODST_HUD_purple: TEI_ODST_HUD_blue
	{
		name 																					= "TEI_ODST_HUD_purple";
		controls[]																				= {"TEI_ODST_HUD_purple_class"};
		class TEI_ODST_HUD_purple_class : TEI_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\TEI_Core\scripts\Data\odst_hud_purple_ca.paa";
		};
	};
	class TEI_ODST_HUD_white: TEI_ODST_HUD_blue
	{
		name 																					= "TEI_ODST_HUD_white";
		controls[]																				= {"TEI_ODST_HUD_white_class"};
		class TEI_ODST_HUD_white_class : TEI_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\TEI_Core\scripts\Data\odst_hud_white_ca.paa";
		};
	};
	class TEI_ODST_HUD_green: TEI_ODST_HUD_blue
	{
		name 																					= "TEI_ODST_HUD_green";
		controls[]																				= {"TEI_ODST_HUD_green_class"};
		class TEI_ODST_HUD_green_class : TEI_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\TEI_Core\scripts\Data\odst_hud_green_ca.paa";
		};
	};
	class TEI_ODST_HUD_orange: TEI_ODST_HUD_blue
	{
		name 																					= "TEI_ODST_HUD_orange";
		controls[]																				= {"TEI_ODST_HUD_orange_class"};
		class TEI_ODST_HUD_orange_class : TEI_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\TEI_Core\scripts\Data\odst_hud_orange_ca.paa";
		};
	};
	class TEI_ODST_HUD_pink: TEI_ODST_HUD_blue
	{
		name 																					= "TEI_ODST_HUD_pink";
		controls[]																				= {"TEI_ODST_HUD_pink_class"};
		class TEI_ODST_HUD_orange_class : TEI_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\TEI_Core\scripts\Data\odst_hud_pink_ca.paa";
		};
	};
	class TEI_ODST_HUD_teal: TEI_ODST_HUD_blue
	{
		name 																					= "TEI_ODST_HUD_teal";
		controls[]																				= {"TEI_ODST_HUD_teal_class"};
		class TEI_ODST_HUD_teal_class : TEI_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\TEI_Core\scripts\Data\odst_hud_teal_ca.paa";
		};
	};
	class TEI_ODST_HUD_red: TEI_ODST_HUD_blue
	{
		name 																					= "TEI_ODST_HUD_red";
		controls[]																				= {"TEI_ODST_HUD_red_class"};
		class TEI_ODST_HUD_orange_class : TEI_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\TEI_Core\scripts\Data\odst_hud_red_ca.paa";
		};
	};
	class TEI_ODST_HUD_black: TEI_ODST_HUD_blue
	{
		name 																					= "TEI_ODST_HUD_black";
		controls[]																				= {"TEI_ODST_HUD_black_class"};
		class TEI_ODST_HUD_orange_class : TEI_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\TEI_Core\scripts\Data\odst_hud_black_ca.paa";
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
		sound[] = {"\tei_core\scripts\sounds\ODST_Helmet_Visor.ogg", db-5, 1};
		titles[] = {};
	};
};