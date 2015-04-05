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
};

class Extended_PostInit_EventHandlers
{
	OPTRE_HEV_Fncs_Init 																			= [] spawn OPTRE_HEV_fnc_Init;
	OPTRE_HUD_Fncs_Init 																			= [] spawn OPTRE_HUD_fnc_Init;
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
	class OPTRE_ODST_HUD_purple: OPTRE_ODST_HUD_blue
	{
		name 																					= "OPTRE_ODST_HUD_purple";
		controls[]																				= {"OPTRE_ODST_HUD_purple_class"};
		class OPTRE_ODST_HUD_purple_class : OPTRE_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_purple_ca.paa";
		};
	};
	class OPTRE_ODST_HUD_white: OPTRE_ODST_HUD_blue
	{
		name 																					= "OPTRE_ODST_HUD_white";
		controls[]																				= {"OPTRE_ODST_HUD_white_class"};
		class OPTRE_ODST_HUD_white_class : OPTRE_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_white_ca.paa";
		};
	};
	class OPTRE_ODST_HUD_green: OPTRE_ODST_HUD_blue
	{
		name 																					= "OPTRE_ODST_HUD_green";
		controls[]																				= {"OPTRE_ODST_HUD_green_class"};
		class OPTRE_ODST_HUD_green_class : OPTRE_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_green_ca.paa";
		};
	};
	class OPTRE_ODST_HUD_orange: OPTRE_ODST_HUD_blue
	{
		name 																					= "OPTRE_ODST_HUD_orange";
		controls[]																				= {"OPTRE_ODST_HUD_orange_class"};
		class OPTRE_ODST_HUD_orange_class : OPTRE_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_orange_ca.paa";
		};
	};
	class OPTRE_ODST_HUD_pink: OPTRE_ODST_HUD_blue
	{
		name 																					= "OPTRE_ODST_HUD_pink";
		controls[]																				= {"OPTRE_ODST_HUD_pink_class"};
		class OPTRE_ODST_HUD_orange_class : OPTRE_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_pink_ca.paa";
		};
	};
	class OPTRE_ODST_HUD_teal: OPTRE_ODST_HUD_blue
	{
		name 																					= "OPTRE_ODST_HUD_teal";
		controls[]																				= {"OPTRE_ODST_HUD_teal_class"};
		class OPTRE_ODST_HUD_teal_class : OPTRE_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_teal_ca.paa";
		};
	};
	class OPTRE_ODST_HUD_red: OPTRE_ODST_HUD_blue
	{
		name 																					= "OPTRE_ODST_HUD_red";
		controls[]																				= {"OPTRE_ODST_HUD_red_class"};
		class OPTRE_ODST_HUD_orange_class : OPTRE_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_red_ca.paa";
		};
	};
	class OPTRE_ODST_HUD_black: OPTRE_ODST_HUD_blue
	{
		name 																					= "OPTRE_ODST_HUD_black";
		controls[]																				= {"OPTRE_ODST_HUD_black_class"};
		class OPTRE_ODST_HUD_orange_class : OPTRE_ODST_HUD_blue_class //RscPicture // For pictures
		{
			text																				= "\OPTRE_Core\scripts\Data\odst_hud_black_ca.paa";
		};
	};
};

class CfgSounds
{
	sounds[] = {};
	class OPTRE_HEV_Wind1
	{
		name = "[OPTRE] HEV Wind 1";
		sound[] = {"\OPTRE_core\scripts\sounds\HEV_Wind1.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_HEV_Wind2
	{
		name = "[OPTRE] HEV Wind 2";
		sound[] = {"\OPTRE_core\scripts\sounds\HEV_Wind2.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_HEV_Pop
	{
		name = "[OPTRE] HEV Pop";
		sound[] = {"\OPTRE_core\scripts\sounds\HEV_Pop.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_HEV_Door
	{
		name = "[OPTRE] HEV Door";
		sound[] = {"\OPTRE_core\scripts\sounds\HEV_Door.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_HEV_Chute
	{
		name = "[OPTRE] HEV Chute";
		sound[] = {"\OPTRE_core\scripts\sounds\HEV_Chute.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_HUD_Helmet_Visor
	{
		name = "[OPTRE] Helmet Visor";
		sound[] = {"\OPTRE_core\scripts\sounds\ODST_Helmet_Visor.ogg", db-5, 1};
		titles[] = {};
	};
};
