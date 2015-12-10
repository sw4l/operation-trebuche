class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Core
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.11;
		requiredAddons[] 																		= {"Extended_EventHandlers", "cba_main", "A3_Map_Stratis"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_Core.pbo";
	};
};

class CfgMods
{
	class Mod_Base;
	class OPTRE: Mod_Base
	{
		author = "Article 2 Studios";
		picture = "\OPTRE_Core\Data\logo_large_ca.paa";
		logo = "\OPTRE_Core\Data\logo_ca.paa";
		logoOver = "\OPTRE_Core\Data\icon_unsc_ca.paa";
		logoSmall = "\OPTRE_Core\Data\logo_ca.paa";
		dlcColor[] = {0,0,0,1};
		hideName = 0;
		hidePicture = 0;
		tooltip = "OPTRE";
		tooltipOwned = "OPTRE";
		name = "Operation: TREBUCHET";
		overview = "Operation: TREBUCHET is a mod for ArmA 3 that seeks to combine the realistic warfare and sandbox freedoms of ArmA with the assets, characters, and weapons from the popular video game series Halo.";
		action = "https://www.reddit.com/r/OperationTrebuchet/";
		dir = "OPTRE";
	};
};

#include "cfgFunctions.hpp"

class CfgFactionClasses //This configures the in-game factions
{
	class OPTRE_UNSC
	{
		displayName 																			= "UNSCDF";
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 1;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
        /*personal_tf_faction_radio_api = "some_personal_radio_class";
        rifleman_tf_faction_radio_api = "some_rifleman_radio_class";
        airborne_tf_faction_radio_api = "some_airborne_radio_class";*/
	};
	class OPTRE_Ins
	{
		displayName 																			= "Insurrectionists";
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 0;
		icon 																					= "\OPTRE_Core\data\icon_Ins_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_Ins_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api 															= "OPTRE_Como_pack_2";
	};
	class OPTRE_CAA
	{
		displayName 																			= "CAA";
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 2;
		icon 																					= "\OPTRE_Core\data\icon_caa_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_caa_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class OPTRE_UEG_Civ
	{
		displayName 																			= "Civilians (UEG)";
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 3;
		//icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		//flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class OPTRE_Modules
	{
		displayName = "OPTRE Modules";
		priority = 1;
		side = 7;
	};
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class OPTRE_UNSC_Backpack_class
	{
		displayName 																			= "Backpacks (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Vehicle_class
	{
		displayName 																			= "Cars (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Armored_class
	{
		displayName 																			= "Armored (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Air_class
	{
		displayName 																			= "Air (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Auto_class
	{
		displayName 																			= "Autonomous (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_class
	{
		displayName 																			= "Men (Army)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_W_class
	{
		displayName 																			= "Men (Army Woodland)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_D_class
	{
		displayName 																			= "Men (Army Desert)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_S_class
	{
		displayName 																			= "Men (Army Snow)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_T_class
	{
		displayName 																			= "Men (Army Tropic)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_A_class
	{
		displayName 																			= "Men (Army Arid)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Marines_class
	{
		displayName 																			= "Men (Marines)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_ODST_class
	{
		displayName 																			= "Men (ODST)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Special_class
	{
		displayName																				= "Men (Special)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Training_class
	{
		displayName																				= "Men (Training)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Navy_class
	{
		displayName																				= "Men (Navy)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Airforce_class
	{
		displayName																				= "Men (Air Force)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_ONI_class
	{
		displayName																				= "Men (ONI)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Object_class
	{
		displayName 																			= "Objects (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Structure_class
	{
		displayName 																			= "Structures (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Fortification_class
	{
		displayName 																			= "Fortifications (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Ammo_class
	{
		displayName 																			= "Ammo (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_HEV_class 
	{
		displayName 																			= "HEVs (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Backpack_class
	{
		displayName 																			= "Backpacks (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Vehicle_class
	{
		displayName 																			= "Cars (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Armored_class
	{
		displayName 																			= "Armored (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Air_class
	{
		displayName 																			= "Air (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Auto_class
	{
		displayName 																			= "Autonomous (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_ER_class
	{
		displayName 																			= "Men (Eridanus Rebels)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_URF_class
	{
		displayName 																			= "Men (United Rebel Front)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_Special_class
	{
		displayName																				= "Men (Special)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Object_class
	{
		displayName 																			= "Objects (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Structure_class
	{
		displayName 																			= "Structures (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Fortification_class
	{
		displayName 																			= "Fortifications (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Ammo_class
	{
		displayName 																			= "Ammo (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class Stratis_intro1
		{
			directory = "OPTRE_Core\scenes\OPTRE_Intro1.Stratis";
		};
		class Altis_intro1
		{
			directory = "OPTRE_Core\scenes\OPTRE_Intro1.Altis";
		};
	};
};

class CfgSounds
{
	sounds[] = {"OPTRE_Sounds_HEV_Wind1","OPTRE_Sounds_HEV_Wind2","OPTRE_Sounds_HEV_Pop","OPTRE_Sounds_HEV_Door","OPTRE_Sounds_HEV_Chute","OPTRE_Sounds_HUD_Visor","OPTRE_Sounds_Alarm"};
	class OPTRE_Sounds_HEV_Wind1
	{
		name = "[OPTRE] HEV Wind 1";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Wind1.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Wind2
	{
		name = "[OPTRE] HEV Wind 2";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Wind2.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Pop
	{
		name = "[OPTRE] HEV Pop";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Pop.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Door
	{
		name = "[OPTRE] HEV Door";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Door.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Chute
	{
		name = "[OPTRE] HEV Chute";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Chute.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_HUD_Visor
	{
		name = "[OPTRE] HUD Visor";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_Visor.ogg", 0.25, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_Alarm
	{
		name = "[OPTRE] Alarm";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_Alarm.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class ModuleDescription
		{
			class AnyPlayer;
			class AnyBrain;
			class EmptyDetector;
		};
	};

	class ModuleOrdnance_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ModuleOrdnance_F";
		scope = 2;
		category = "Effects";
		function = "BIS_fnc_moduleProjectile";
		isGlobal = 0;
		isTriggerActivated = 1;
		displayName = "$STR_A3_CfgVehicles_ModuleOrdnance_F";
		icon = "\a3\Modules_F_Curator\Data\iconOrdnance_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnance_ca.paa";
		class Arguments
		{
			class Type
			{
				displayName = "$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description = "";
				class values
				{
					class Mortar
					{
						name = "$STR_A3_CfgVehicles_ModuleOrdnanceMortar_F";
						value = "ModuleOrdnanceMortar_F_Ammo";
						default = 1;
					};
					class Howitzer
					{
						name = "$STR_A3_CfgVehicles_ModuleOrdnanceHowitzer_F";
						value = "ModuleOrdnanceHowitzer_F_Ammo";
					};
					class Rocket
					{
						name = "$STR_A3_CfgVehicles_ModuleOrdnanceRocket_F";
						value = "ModuleOrdnanceRocket_F_Ammo";
					};
					class MAC
					{
						name = "MAC Strike";
						value = "OPTRE_MAC_Round";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleOrdnance_F_ModuleDescription";
			position = 1;
		};
	};
	
	class ModuleOrdnanceMAC_F: ModuleOrdnance_F
	{
		author = "Article 2 Studios";
		_generalMacro = "ModuleOrdnanceMAC_F";
		scope = 1;
		scopeCurator = 2;
		isGlobal = 1;
		category = "Ordnance";
		displayName = "MAC Strike";
		portrait = "\a3\Modules_F_Curator\Data\portraitOrdnanceRocket_ca.paa";
		ammo = "OPTRE_MAC_Round";
		delete Arguments;
		simulation = "house";
		model = "\a3\Modules_F_Curator\Ordnance\surfaceRocket.p3d";
		curatorCost = 10;
	};
};