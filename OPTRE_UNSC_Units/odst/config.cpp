class CfgPatches
{
	class OPTRE_UNSC_Units_ODST
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class OPTRE_UNSC_Soldier_Base: B_Soldier_base_F
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_ODST_Soldier: OPTRE_UNSC_Soldier_Base
	{
		dlc = "OPTRE";
		scope																					= 1;
		scopeCurator																			= 0;
		side 																					= 1;
		faction																					= "OPTRE_UNSC";
		author																					= "Article 2 Studios";
		vehicleClass																			= "OPTRE_UNSC_Man_ODST_class";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform";
		model																					= "\OPTRE_UNSC_Units\ODST\uniform.p3d";
		weapons[]																				= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																					= {"OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam"};
		magazines[]																				= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\armor_co.paa"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody
			{
				armor = 7;
			};
			class HitHands: HitHands
			{
				armor = 10;
			};
			class HitLegs: HitLegs
			{
				armor = 10;
			};
		};
		editorSubcategory = "OPTRE_EditorSubcategory_MenODST";
	};
	class OPTRE_UNSC_ODST_Soldier_L: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		author																				= "Article 2 Studios";
		uniformClass																		= "OPTRE_UNSC_ODST_Uniform_L";
		hiddenSelections[] 																	= {"camo1","insignia","clan","attach_leftforearm","attach_leftshoulder","attach_rightforearm","attach_rightshoulder"};
		hiddenSelectionsTextures[] 															= {"OPTRE_UNSC_Units\ODST\data\armor_co.paa"};
		linkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet_Recon","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet_Recon","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody
			{
				armor = 8;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 10;
			};
		};
	};
	class OPTRE_UNSC_ODST_Soldier_M: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		author																				= "Article 2 Studios";
		uniformClass																		= "OPTRE_UNSC_ODST_Uniform_M";
		hiddenSelections[] 																	= {"camo1","insignia","clan","attach_leftshoulder","attach_rightshoulder"};
		hiddenSelectionsTextures[] 															= {"OPTRE_UNSC_Units\ODST\data\armor_co.paa"};
		linkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet_Comms","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet_Comms","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody
			{
				armor = 8;
			};
			class HitHands: HitHands
			{
				armor = 7;
			};
			class HitLegs: HitLegs
			{
				armor = 10;
			};
		};
	};
	class OPTRE_UNSC_ODST_Soldier_Sniper: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		author																				= "Article 2 Studios";
		uniformClass																		= "OPTRE_UNSC_ODST_Uniform_Sniper";
		hiddenSelections[] 																	= {"camo1","insignia","clan","attach_rightshoulder"};
		hiddenSelectionsTextures[] 															= {"OPTRE_UNSC_Units\ODST\data\armor_co.paa"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody
			{
				armor = 8;
			};
			class HitHands: HitHands
			{
				armor = 8;
			};
			class HitLegs: HitLegs
			{
				armor = 10;
			};
		};
	};
	class OPTRE_UNSC_ODST_Soldier_Medic: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		author																				= "Article 2 Studios";
		scopeCurator																		= 0;
		uniformClass																		= "OPTRE_UNSC_ODST_Uniform_Medic";
		hiddenSelections[] 																	= {"camo1","insignia","clan" };
		hiddenSelectionsTextures[] 															= {"OPTRE_UNSC_Units\ODST\data\armor_medic_co.paa"};
		icon 																				= "iconManMedic";
		attendant 																			= 1;
		linkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest_Medic","OPTRE_UNSC_ODST_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																= {"OPTRE_UNSC_ODST_Vest_Medic","OPTRE_UNSC_ODST_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody
			{
				armor = 8;
			};
			class HitHands: HitHands
			{
				armor = 10;
			};
			class HitLegs: HitLegs
			{
				armor = 10;
			};
		};
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_ODST_Soldier_Scorch: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope																					= 2;
		scopeCurator																			= 2;
		author																					= "Article 2 Studios";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "Scorch";
		vehicleClass																			= "OPTRE_UNSC_Man_Special_class";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_Scorch";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 																				= {"OPTRE_MA5B_AC","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] 																		= {"OPTRE_MA5B_AC","OPTRE_M6G","Throw","Put"};
		magazines[] 																			= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Red"};
		respawnMagazines[] 																		= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M2_Smoke_Red"};
		Items[]																					= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_scorch","OPTRE_UNSC_ODST_Helmet_scorch","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_scorch","OPTRE_UNSC_ODST_Helmet_scorch","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\armor_scorch_co.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenS";
	};
	class OPTRE_UNSC_ODST_Soldier_Zero: OPTRE_UNSC_ODST_Soldier_Scorch
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "Zero";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_Zero";
		weapons[] 																				= {"OPTRE_MA5B_AC","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] 																		= {"OPTRE_MA5B_AC","OPTRE_M6G","Throw","Put"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_Zero","OPTRE_UNSC_ODST_Helmet_Zero","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_Zero","OPTRE_UNSC_ODST_Helmet_Zero","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\armor_zero_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_TheDog: OPTRE_UNSC_ODST_Soldier_Scorch
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "The Dog";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_TheDog";	
		weapons[] 																				= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																		= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																			= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																		= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		Items[]																					= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_TheDog","OPTRE_UNSC_ODST_Helmet_TheDog","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_TheDog","OPTRE_UNSC_ODST_Helmet_TheDog","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\armor_thedog_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_Stirls: OPTRE_UNSC_ODST_Soldier_TheDog
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "Stirls";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_Stirls";
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_vest_Stirls","OPTRE_UNSC_ODST_Helmet_Stirls","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_vest_Stirls","OPTRE_UNSC_ODST_Helmet_Stirls","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\armor_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_Urban: OPTRE_UNSC_ODST_Soldier_Scorch
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "Urban";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_Urban";	
		weapons[] 																				= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																		= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																			= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																		= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		Items[]																					= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_vest_Urban","OPTRE_UNSC_ODST_Helmet_Urban","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_vest_Urban","OPTRE_UNSC_ODST_Helmet_Urban","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\armor_urban_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_Convader: OPTRE_UNSC_ODST_Soldier_Scorch
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "Convader";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_Convader";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_Convader","OPTRE_UNSC_ODST_Helmet_Convader","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_Convader","OPTRE_UNSC_ODST_Helmet_Convader","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\armor_convader_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_EvilFlea: OPTRE_UNSC_ODST_Soldier_Scorch
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "Evil Flea";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_EvilFlea";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_EvilFlea","OPTRE_UNSC_ODST_Helmet_EvilFlea","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_EvilFlea","OPTRE_UNSC_ODST_Helmet_EvilFlea","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\armor_evilflea_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_BW: OPTRE_UNSC_ODST_Soldier_Scorch
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "Bourbon Warrior";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_BW","OPTRE_UNSC_ODST_Helmet_CBRN","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_BW","OPTRE_UNSC_ODST_Helmet_CBRN","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
	};
	/*class OPTRE_UNSC_ODST_Soldier_Instructor: CAManBase
	{
		scope																				= 2;
		scopeCurator																		= 2;
		author																				= "Article 2 Studios";
		displayName																			= "ODST Instructor";
		vehicleClass																		= "OPTRE_UNSC_Man_Training_class";
		uniformClass																		= "OPTRE_UNSC_ODST_Uniform_Instructor";
		model																				= "\OPTRE_UNSC_Units\ODST\training.p3d";
		linkedItems[] 																		= {"OPTRE_UNSC_ODST_InstructorHat","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																= {"OPTRE_UNSC_ODST_InstructorHat","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 																	= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 															= {"OPTRE_UNSC_Units\ODST\data\instructor_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_Recruit: OPTRE_UNSC_ODST_Soldier_Instructor
	{
		author																				= "Article 2 Studios";
		displayName																			= "ODST Recruit";
		uniformClass																		= "OPTRE_UNSC_ODST_Uniform_Recruit";
		hiddenSelections[] 																	= {"camo1","insignia","clan"};
		hiddenSelectionsTextures[] 															= {"OPTRE_UNSC_Units\ODST\data\basic_odst_co.paa"};
	};*/
	class OPTRE_UNSC_ODST_Soldier_Scout: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope 																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Scout";
		backpack 																			= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 																			= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
	
	};
	class OPTRE_UNSC_ODST_Soldier_Scout_AT: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Scout (AT)";
		backpack 																			= "OPTRE_ILCS_Rucksack_Black_AT";
		weapons[] 																			= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 																	= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 																		= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 																				= "iconManAT";
	};
	class OPTRE_UNSC_ODST_Soldier_Rifleman_AR: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Rifleman (MA5)";
		backpack 																			= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 																			= {"OPTRE_MA5B_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_MA5B_AC","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_ODST_Soldier_Rifleman_BR: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Rifleman (BR55)";
		backpack 																			= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 																			= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_ODST_Soldier_Rifleman_AT: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Rifleman (AT)";
		backpack 																			= "OPTRE_ILCS_Rucksack_Black_AT";
		weapons[] 																			= {"OPTRE_MA5B_AC","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 																	= {"OPTRE_MA5B_AC","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 																		= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 																				= "iconManAT";
	};
	class OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Automatic Rifleman";
		backpack																			= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 																			= {"OPTRE_M73","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_M73","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 																				= "iconManMG";
	};
	class OPTRE_UNSC_ODST_Soldier_Marksman: OPTRE_UNSC_ODST_Soldier_Sniper
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Marksman";
		backpack																			= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 																			= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	
	};
	class OPTRE_UNSC_ODST_Soldier_Scout_Sniper: OPTRE_UNSC_ODST_Soldier_Sniper
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Scout Sniper";
		weapons[] 																			= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	
	};
	class OPTRE_UNSC_ODST_Soldier_TeamLeader: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Team Leader";
		backpack																			= "OPTRE_ILCS_Rucksack_Black";
		linkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet_Comms","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 																= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet_Comms","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 																			= {"OPTRE_MA5BGL_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_MA5BGL_AC","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 																	= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 																				= "iconManLeader";
	};
	class OPTRE_UNSC_ODST_Soldier_Paramedic: OPTRE_UNSC_ODST_Soldier_Medic
	{
		dlc = "OPTRE";
		scope 																				= 2;
		scopeCurator																		= 2;
		attendant 																			= 1;
		displayName																			= "ODST Paramedic";
		backpack 																			= "OPTRE_ILCS_Rucksack_Medical";
		weapons[] 																			= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest_Medic","OPTRE_UNSC_ODST_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 																= {"OPTRE_UNSC_ODST_Vest_Medic","OPTRE_UNSC_ODST_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 																		= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnMagazines[] 																	= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		icon 																				= "iconManMedic";
	};
	class OPTRE_UNSC_ODST_Soldier_DemolitionsExpert: OPTRE_UNSC_ODST_Soldier
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ODST Demolitions Expert";
		backpack																			= "OPTRE_ILCS_Rucksack_Black_EXP";
		linkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet_Recon","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 																= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_ODST_Helmet_Recon","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 																			= {"OPTRE_MA5BGL_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_MA5BGL_AC","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 																	= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		icon 																				= "iconManExplosive";
	};
	class OPTRE_UNSC_ONI_Soldier_Operative: OPTRE_UNSC_ODST_Soldier_M
	{
		dlc = "OPTRE";
		scope																				= 2;
		scopeCurator																		= 2;
		displayName																			= "ONI Field Operative";
		vehicleClass																		= "OPTRE_UNSC_Man_ONI_class";
		backpack																			= "OPTRE_ILCS_Rucksack_Black";
		linkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_Recon_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 																= {"OPTRE_UNSC_ODST_Vest","OPTRE_UNSC_Recon_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 																			= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 																	= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 																		= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnMagazines[] 																	= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		icon 																				= "iconManOfficer";
	};
	// UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};

class cfgWeapons
{
	class ItemCore;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class H_Cap_oli;
	class Binocular;
	
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_ODST_Uniform: U_B_CombatUniform_mcam
	{
		dlc = "OPTRE";
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Full)";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform.paa";
		model																					= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier";
			containerClass																		= "Supply60";
			mass																				= 50;
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_Uniform_L: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Light)";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_L";
			mass																				= 30;
		};
	};
	class OPTRE_UNSC_ODST_Uniform_M: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Medium)";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_M";
			mass																				= 40;
		};
	};
	class OPTRE_UNSC_ODST_Uniform_Sniper: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		displayName																				= "[UNSC] ODST BDU (Sniper)";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Sniper";
			mass																				= 35;
		};
	};
	class OPTRE_UNSC_ODST_Uniform_Medic: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_med.paa";
		displayName																				= "[UNSC] ODST BDU (Full) [Medic]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Medic";
		};
	};
	class OPTRE_UNSC_ODST_Uniform_Scorch: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Full) [Scorch]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Scorch";
		};
	};
	class OPTRE_UNSC_ODST_Uniform_TheDog: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Full) [The Dog]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_TheDog";
		};
	};
	class OPTRE_UNSC_ODST_Uniform_Stirls: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Full) [Stirls]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Stirls";
		};
	};
	class OPTRE_UNSC_ODST_Uniform_Urban: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Full) [Urban]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Urban";
		};
	};
	class OPTRE_UNSC_ODST_Uniform_Zero: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Full) [Zero]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Zero";
		};
	};
	class OPTRE_UNSC_ODST_Uniform_Convader: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Full) [Convader]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Convader";
		};
	};
	class OPTRE_UNSC_ODST_Uniform_EvilFlea: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST BDU (Full) [Evil Flea]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_EvilFlea";
		};
	};
	/*class OPTRE_UNSC_ODST_Uniform_Instructor: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_instr.paa";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST Fatigues [Instructor]";
		class ItemInfo: ItemInfo
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Instructor";
			containerClass																		= "Supply30";
			mass																				= 20;
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_uniform_recruit: OPTRE_UNSC_ODST_Uniform
	{
		dlc = "OPTRE";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_recruit.paa";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST Fatigues [Recruit]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_Recruit";
		};
	};*/
	// UNIFORMS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// VESTS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_ODST_Vest_Base: V_PlateCarrier1_rgr
	{	
		dlc = "OPTRE";
		scope 																					= 0;
		author																					= "Article 2 Studios";
		displayName  																			= "-";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_vest.paa";
		model   																				= "\OPTRE_UNSC_Units\ODST\vest.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel 																		= "\OPTRE_UNSC_Units\ODST\vest.p3d";
			//armor 																				= 40;
			containerClass 																		= "Supply180";
			mass 																				= 80;
			passThrough 																		= 0.1;
			modelSides[] 																		= {6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck"; // Defined in the man base class
					armor		= 8; // Armor value of this hitpoint
					passThrough	= 0.5; // Penetration resistance of the hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.5;
				};
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 24; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 24;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 24;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_ODST_Vest: OPTRE_UNSC_ODST_Vest_Base
	{	
		dlc = "OPTRE";
		scope 																					= 2;
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [ODST]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife","attach_nade"};
		hiddenSelectionsTextures[]   															= {"optre_unsc_units\odst\data\vest_basic_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_knife","attach_nade"};
			hiddenSelectionsTextures[]   														= {"optre_unsc_units\odst\data\vest_basic_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Medic: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Medic]";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_vest_med.paa";
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife","attach_nade"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_medic_co.paa",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_knife","attach_nade"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_medic_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Scorch: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Scorch]";
		hiddenSelections[]   																	= {"camo1","camo2"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_scorch_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_scorch_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_vest_TheDog: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [The Dog]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife","attach_nade"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_thedog_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_knife","attach_nade"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_thedog_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Zero: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Zero]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife","attach_nade"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_zero_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_knife","attach_nade"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_zero_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Stirls: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Stirls]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_stirls_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_stirls_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Urban: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Urban]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_urban_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_urban_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Convader: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Convader]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade","attach_knife"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_convader_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade","attach_knife"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_convader_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_EvilFlea: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Evil Flea]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade","attach_knife"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_evilflea_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade","attach_knife"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_evilflea_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Red: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Red]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade","attach_knife"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_red_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade","attach_knife"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_red_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Blue: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Blue]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade","attach_knife"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_blue_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade","attach_knife"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_blue_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Yellow: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Yellow]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade","attach_knife"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_yellow_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade","attach_knife"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_yellow_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Orange: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Orange]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade","attach_knife"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_orange_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade","attach_knife"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_orange_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Purple: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Purple]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade","attach_knife"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_purple_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade","attach_knife"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_purple_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_Green: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [Green]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade","attach_knife"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_green_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade","attach_knife"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_green_co.paa",""};
		};
	};
	class OPTRE_UNSC_ODST_Vest_BW: OPTRE_UNSC_ODST_Vest
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] M53 Body Armor [BW]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_bw_co.paa",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_bw_co.paa",""};
		};
	};
	// VESTS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// HELMETS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_ODST_Helmet_Base: H_HelmetB
	{	
		dlc = "OPTRE";
		scope   																				= 0;
		author																					= "Article 2 Studios";
		displayName    																			= "-";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		model     																				= "\OPTRE_UNSC_Units\ODST\helmet.p3d";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_co.paa"};
		optreVarietys[] 																		= {"_dp","","_broken"};
		optreHUDStyle 																			= "ODST_1";
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d";
			mass   																				= 40;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1;
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class OPTRE_UNSC_ODST_Helmet: OPTRE_UNSC_ODST_Helmet_Base
	{	
		dlc = "OPTRE";
		scope   																			  	= 2;
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [ODST]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Recon: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_recon.paa";
		displayName    																			= "[UNSC] CH253 Helmet (Recon) [ODST]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_communication","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet2_co.paa","OPTRE_UNSC_Units\ODST\data\helmet2_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_communication","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet2_co.paa","OPTRE_UNSC_Units\ODST\data\helmet2_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Sniper: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName    																			= "[UNSC] CH253 Helmet (Sniper) [ODST]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet1_co.paa","OPTRE_UNSC_Units\ODST\data\helmet1_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet1_co.paa","OPTRE_UNSC_Units\ODST\data\helmet1_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Comms: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName    																			= "[UNSC] CH253 Helmet (Comms) [ODST]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet3_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_CBRN: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName    																			= "[UNSC] CH253 Helmet (CBRN) [ODST]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_rangefinder","attach_laser"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet3_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_rangefinder","attach_laser"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet3_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Medic: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName    																			= "[UNSC] CH253 Helmet [Medic]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Scorch: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Scorch]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_TheDog: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [The Dog]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_thedog_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_thedog_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_thedog_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_thedog_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Zero: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Zero]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Stirls: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Stirls]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Urban: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Urban]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_Urban_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_urban_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_Urban_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_urban_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Convader: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Convader]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_convader_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_convader_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_convader_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_convader_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_EvilFlea: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Evil Flea]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_communication","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_evilflea_co.paa","OPTRE_UNSC_Units\ODST\data\helmet2_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_communication","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_evilflea_co.paa","OPTRE_UNSC_Units\ODST\data\helmet2_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Red: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Red]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_red_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_red_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_red_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_red_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Blue: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Blue]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_blue_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_blue_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_blue_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_blue_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Yellow: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Yellow]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_yellow_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_yellow_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_yellow_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_yellow_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Orange: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Orange]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_orange_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_orange_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_orange_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_orange_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Purple: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Purple]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_purple_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_purple_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_purple_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_purple_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Green: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] CH253 Helmet [Green]";
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_green_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_green_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_green_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_green_co.paa"};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_dp: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Recon_dp: OPTRE_UNSC_ODST_Helmet_Recon
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet2_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet2_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Sniper_dp: OPTRE_UNSC_ODST_Helmet_Sniper
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet1_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet1_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Comms_dp: OPTRE_UNSC_ODST_Helmet_Comms
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_CBRN_dp: OPTRE_UNSC_ODST_Helmet_CBRN
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Medic_dp: OPTRE_UNSC_ODST_Helmet_Medic
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Scorch_dp: OPTRE_UNSC_ODST_Helmet_Scorch
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Convader_dp: OPTRE_UNSC_ODST_Helmet_Convader
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_convader_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_convader_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_EvilFlea_dp: OPTRE_UNSC_ODST_Helmet_EvilFlea
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_evilflea_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_evilflea_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_TheDog_dp: OPTRE_UNSC_ODST_Helmet_TheDog
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_thedog_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_thedog_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Zero_dp: OPTRE_UNSC_ODST_Helmet_Zero
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Stirls_dp: OPTRE_UNSC_ODST_Helmet_Stirls
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Urban_dp: OPTRE_UNSC_ODST_Helmet_Urban
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_urban_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_urban_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Red_dp: OPTRE_UNSC_ODST_Helmet_Red
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_red_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_red_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Blue_dp: OPTRE_UNSC_ODST_Helmet_Blue
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_blue_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_blue_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Yellow_dp: OPTRE_UNSC_ODST_Helmet_Yellow
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_yellow_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_yellow_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Orange_dp: OPTRE_UNSC_ODST_Helmet_Orange
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_orange_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_orange_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Purple_dp: OPTRE_UNSC_ODST_Helmet_Purple
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_purple_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_purple_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_ODST_Helmet_Green_dp: OPTRE_UNSC_ODST_Helmet_Green
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_green_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_green_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat",""};
		};
	};
	class OPTRE_UNSC_Recon_Helmet: OPTRE_UNSC_ODST_Helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_recon.paa";
		displayName    																			= "[UNSC] R/B5 Helmet";
		model     																				= "\OPTRE_UNSC_Units\ODST\recon_helmet.p3d";
		hiddenSelections[]   																	= {"camo1","camo2"};
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa","OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\recon_helmet.p3d";
			mass   																				= 20;
			passThrough   																		= 0.1;
			hiddenSelections[]   																= {"camo1","camo2"};
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa","OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa"};
		};
	};
	class OPTRE_UNSC_Recon_Helmet_dp: OPTRE_UNSC_Recon_helmet
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		scopeArsenal																			= 1;
		scopeCurator																			= 1;
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\recon_helmet.rvmat",""};
		class ItemInfo: ItemInfo 
		{
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa","optre_vehicles\pelican\data\glass_ca.paa"};
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\recon_helmet.rvmat",""};
		};
	};
	class OPTRE_Cap_ODST: H_Cap_oli
	{	
		dlc = "OPTRE";
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_hat.paa";
		displayName    																			= "[UNSC] Cap [ODST]";
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\instructor_hat_co.paa"};
	};
	class H_Booniehat_khk;
	class OPTRE_BoonieHat_ODST: H_Booniehat_khk 
	{
		dlc = "OPTRE";
		displayname 									= "[UNSC] Boonie Hat [ODST]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\ODST\data\booniehat_odst_co.paa"};
	};	
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};