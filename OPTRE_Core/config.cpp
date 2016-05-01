class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Core
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.14;
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
		logo = "OPTRE_Core\Data\logo_ca.paa";
		dir = "@OPTRE";
		picture = "OPTRE_Core\Data\logo_ca.paa";
		name = "Operation: TREBUCHET";
	};
};

class CfgEditorCategories
{
	class OPTRE_EditorCategory_Objects // Category class, you point to it in editorCategory property
	{
		displayName = "OPTRE Objects"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Frigate // Category class, you point to it in editorCategory property
	{
		displayName = "OPTRE Frigate Objects"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Buildings // Category class, you point to it in editorCategory property
	{
		displayName = "OPTRE Buildings"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class OPTRE_EditorSubcategory_Objects_Military // Category class, you point to it in editorSubcategory property
	{
		displayName = "Military"; // Name visible in the list
	};
	class OPTRE_EditorSubcategory_Objects_Civilian // Category class, you point to it in editorSubcategory property
	{
		displayName = "Civil"; // Name visible in the list
	};
	class OPTRE_EditorSubcategory_Objects_Light // Category class, you point to it in editorSubcategory property
	{
		displayName = "Lights"; // Name visible in the list
	};
	class OPTRE_EditorSubcategory_Objects_Plants // Category class, you point to it in editorSubcategory property
	{
		displayName = "Plants"; // Name visible in the list
	};
	class OPTRE_EditorSubcategory_Objects_Transport // Category class, you point to it in editorSubcategory property
	{
		displayName = "Transportation"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Frigate_Pieces // Category class, you point to it in editorSubcategory property
	{
		displayName = "Pieces"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Frigate_Deco // Category class, you point to it in editorSubcategory property
	{
		displayName = "Decoration"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Frigate_Objects // Category class, you point to it in editorSubcategory property
	{
		displayName = "Objects"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Buildings_Civilian // Category class, you point to it in editorCategory property
	{
		displayName = "Civil"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Buildings_Military // Category class, you point to it in editorCategory property
	{
		displayName = "Military"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Buildings_Skyscraper // Category class, you point to it in editorCategory property
	{
		displayName = "Skyscrapers"; // Name visible in the list
	};
	class OPTRE_EditorCategory_Buildings_Highway // Category class, you point to it in editorCategory property
	{
		displayName = "Highway"; // Name visible in the list
	};
};

class CfgFactionClasses //This configures the in-game factions
{
	class OPTRE_UNSC
	{
		dlc = "OPTRE";
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
		dlc = "OPTRE";
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
		dlc = "OPTRE";
		displayName 																			= "CAA";
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 2;
		icon 																					= "\OPTRE_Core\data\icon_caa_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_caa_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class OPTRE_PD
	{
		dlc = "OPTRE";
		displayName 																			= "Colonial Police";
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 2;
		icon 																					= "\OPTRE_Core\data\icon_caa_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_caa_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class OPTRE_UEG_Civ
	{
		dlc = "OPTRE";
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
		dlc = "OPTRE";
		displayName = "OPTRE Modules";
		priority = 1;
		side = 7;
	};
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class OPTRE_UNSC_Backpack_class
	{
		dlc = "OPTRE";
		displayName 																			= "Backpacks (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Vehicle_class
	{
		dlc = "OPTRE";
		displayName 																			= "Cars (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Armored_class
	{
		dlc = "OPTRE";
		displayName 																			= "Armored (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Air_class
	{
		dlc = "OPTRE";
		displayName 																			= "Air (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Auto_class
	{
		dlc = "OPTRE";
		displayName 																			= "Autonomous (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (Army)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_W_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (Army Woodland)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_D_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (Army Desert)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_S_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (Army Snow)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_T_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (Army Tropic)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_A_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (Army Arid)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Marines_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (Marines)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_ODST_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (ODST)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Special_class
	{
		dlc = "OPTRE";
		displayName																				= "Men (Special)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Training_class
	{
		dlc = "OPTRE";
		displayName																				= "Men (Training)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Navy_class
	{
		dlc = "OPTRE";
		displayName																				= "Men (Navy)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Airforce_class
	{
		dlc = "OPTRE";
		displayName																				= "Men (Air Force)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_ONI_class
	{
		dlc = "OPTRE";
		displayName																				= "Men (ONI)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Object_class
	{
		dlc = "OPTRE";
		displayName 																			= "OPTRE Objects (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Structure_class
	{
		dlc = "OPTRE";
		displayName 																			= "OPTRE Structures (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Fortification_class
	{
		dlc = "OPTRE";
		displayName 																			= "OPTRE Fortifications (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Ammo_class
	{
		dlc = "OPTRE";
		displayName 																			= "OPTRE Ammo (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_HEV_class 
	{
		dlc = "OPTRE";
		displayName 																			= "HEVs (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Backpack_class
	{
		dlc = "OPTRE";
		displayName 																			= "Backpacks (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Vehicle_class
	{
		dlc = "OPTRE";
		displayName 																			= "Cars (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Armored_class
	{
		dlc = "OPTRE";
		displayName 																			= "Armored (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Air_class
	{
		dlc = "OPTRE";
		displayName 																			= "Air (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Auto_class
	{
		dlc = "OPTRE";
		displayName 																			= "Autonomous (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_ER_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (Eridanus Rebels)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_URF_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (United Rebel Front)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_Special_class
	{
		dlc = "OPTRE";
		displayName																				= "Men (Special)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Object_class
	{
		dlc = "OPTRE";
		displayName 																			= "OPTRE Objects (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Structure_class
	{
		dlc = "OPTRE";
		displayName 																			= "OPTRE Structures (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Fortification_class
	{
		dlc = "OPTRE";
		displayName 																			= "OPTRE Fortifications (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Ammo_class
	{
		dlc = "OPTRE";
		displayName 																			= "OPTRE Ammo (Ins)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_CMA_Vehicle_class
	{
		dlc = "OPTRE";
		displayName 																			= "Cars (CMA)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_CMA_Armored_class
	{
		dlc = "OPTRE";
		displayName 																			= "Armored (CMA)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_CMA_Air_class
	{
		dlc = "OPTRE";
		displayName 																			= "Air (CMA)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_CMA_Man_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (CMA)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_PD_Man_class
	{
		dlc = "OPTRE";
		displayName 																			= "Men (PD)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_PD_Vehicle_class
	{
		dlc = "OPTRE";
		displayName 																			= "Cars (PD)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_PD_Air_class
	{
		dlc = "OPTRE";
		displayName 																			= "Air (PD)";
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
		dlc = "OPTRE";
		name = "[OPTRE] HEV Wind 1";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Wind1.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Wind2
	{
		dlc = "OPTRE";
		name = "[OPTRE] HEV Wind 2";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Wind2.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Pop
	{
		dlc = "OPTRE";
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
		dlc = "OPTRE";
		name = "[OPTRE] HEV Chute";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Chute.ogg", 1, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_HUD_Visor
	{
		dlc = "OPTRE";
		name = "[OPTRE] HUD Visor";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_Visor.ogg", 0.25, 1};
		author	= "Article 2 Studios";
		titles[] = {};
	};
	class OPTRE_Sounds_Alarm
	{
		dlc = "OPTRE";
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
	
		class ModuleCAS_F: Module_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ModuleCAS_F";
		scope = 2;
		scopeCurator = 0;
		isGlobal = 1;
		isTriggerActivated = 1;
		category = "Effects";
		displayName = "$STR_A3_CfgVehicles_ModuleCAS_F";
		icon = "\a3\Modules_F_Curator\Data\iconCAS_ca.paa";
		portrait = "\a3\Modules_F_Curator\Data\portraitCAS_ca.paa";
		function = "BIS_fnc_moduleCAS";
		curatorCost = 5;
		class Arguments
		{
			class Type
			{
				displayName = "$STR_A3_CfgVehicles_ModuleOrdnance_F_Arguments_Type";
				description = "";
				typeName = "NUMBER";
				class values
				{
					class Gun
					{
						name = "$STR_A3_CfgVehicles_ModuleCAS_F_Arguments_Type_values_Gun";
						value = 0;
						default = 1;
					};
					class Missiles
					{
						name = "$STR_A3_CfgVehicles_ModuleCAS_F_Arguments_Type_values_Missiles";
						value = 1;
					};
					class GunMissiles
					{
						name = "$STR_A3_CfgVehicles_ModuleCAS_F_Arguments_Type_values_GunMissiles";
						value = 2;
					};
				};
			};
			class Vehicle
			{
				displayName = "$STR_DN_Plane";
				description = "";
				class values
				{
					class B_Plane_CAS_01_F
					{
						name = "$STR_A3_CfgVehicles_B_Plane_CAS_01_F0";
						value = "B_Plane_CAS_01_F";
						default = 1;
					};
					class O_Plane_CAS_02_F
					{
						name = "$STR_A3_CfgVehicles_O_Plane_CAS_02_F0";
						value = "O_Plane_CAS_02_F";
					};
					class I_Plane_Fighter_03_CAS_F
					{
						name = "$STR_A3_CfgVehicles_O_Plane_Fighter_03_CAS0";
						value = "I_Plane_Fighter_03_CAS_F";
					};
					class OPTRE_Longsword_SUPPRESS_F
					{
						name = "GA-TL1/A  Longsword";
						value = "OPTRE_Longsword_SUPPRESS_F";
					};
					class OPTRE_Longsword_CANNON_F
					{
						name = "GA-TL1/A  Longsword (Cannon)";
						value = "OPTRE_Longsword_CANNON_F";
					};
				};
			};
		};
		class ModuleDescription: ModuleDescription
		{
			description = "$STR_A3_CfgVehicles_ModuleCAS_F_ModuleDescription";
			position = 1;
			direction = 1;
		};
	};
	
	class ModuleOrdnanceMAC_F: ModuleOrdnance_F
	{
		dlc = "OPTRE";
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