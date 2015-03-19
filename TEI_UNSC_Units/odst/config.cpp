enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_UNSC_Units_ODST
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Soldier_F;
	class B_Kitbag_rgr;    //Instead of inheriting from base classes, inherit from pre-defined classes so you dont have to worry about missing entries
	
	// SOLDIERS
	
	class TEI_UNSC_ODST_Soldier: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																					= 1;
		faction																					= "TEI_UNSC";
		author																					= "Eridanus Insurrection Team";
		displayName																				= "ODST [Heavy]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																	= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform";
		model																					= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																				= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																					= {"TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam"};
		magazines[]																				= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG","TEI_NVG"};
		respawnLinkedItems[] 																	= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"TEI_UNSC_Units\ODST\data\uniform_co.paa"};
		armor																					= 4;
		armorStructural																			= 5;
		class HitPoints
		{
			class HitHead
			{
				armor = 0.5;
				material = -1;
				name = "head";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0;
			};
			class HitBody
			{
				armor = 1.75;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0.15;
				explosionShielding = 8;
				visual = "injury_body";
				minimalHit = 0;
			};
			class HitHands
			{
				armor = 1.75;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.8;
				visual = "injury_hands";
				minimalHit = 0;
			};
			class HitLegs
			{
				armor = 1.75;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.8;
				visual = "injury_legs";
				minimalHit = 0;
			};
		};
	};
	class TEI_UNSC_ODST_Soldier_light: TEI_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																				= 1;
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Light]";
		uniformAccessories[]																		= {};
		uniformClass																			= "TEI_UNSC_ODST_Uniform_light";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","attach_leftforearm", "attach_leftshoulder", "attach_rightforearm", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\uniform_co.paa"};
		class HitPoints : HitPoints
		{
			class HitHead : HitHead 
			{
				armor = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 1.5;
				explosionShielding = 6;
			};
			class HitHands : HitHands
			{
				armor = 1.5;
				explosionShielding = 0.6;
			};
			class HitLegs : HitLegs
			{
				armor = 1.5;
				explosionShielding = 0.6;
			};
		};
	};
	class TEI_UNSC_ODST_Soldier_medium: TEI_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																				= 1;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Medium]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_medium";
		model																				= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia", "attach_leftshoulder", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\uniform_co.paa"};
		class HitPoints : HitPoints
		{
			class HitHead : HitHead 
			{
				armor = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 1.6;
				explosionShielding = 8;
			};
			class HitHands : HitHands
			{
				armor = 1.6;
				explosionShielding = 0.8;
			};
			class HitLegs : HitLegs
			{
				armor = 1.6;
				explosionShielding = 0.8;
			};
		};
	};
	class TEI_UNSC_ODST_Soldier_Sniper: TEI_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																				= 1;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Sniper]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_sniper";
		model																				= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_Helmet_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_Helmet_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\uniform_co.paa"};
		class HitPoints : HitPoints
		{
			class HitHead : HitHead 
			{
				armor = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 1.6;
				explosionShielding = 8;
			};
			class HitHands : HitHands
			{
				armor = 1.6;
				explosionShielding = 0.8;
			};
			class HitLegs : HitLegs
			{
				armor = 1.6;
				explosionShielding = 0.8;
			};
		};
	};
	class TEI_UNSC_ODST_Soldier_medic: TEI_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																				= 1;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST [Medic]";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_medic";
		model																				= "\TEI_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]											= {"TEI_Biofoam"};
		RespawnItems[]									= {"TEI_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest_medic","TEI_UNSC_ODST_Helmet_medic","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_Vest_medic","TEI_UNSC_ODST_Helmet_medic","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\uniform_medic_co.paa"};
		class HitPoints : HitPoints
		{
			class HitHead : HitHead 
			{
				armor = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 1.75;
				explosionShielding = 6;
			};
			class HitHands : HitHands
			{
				armor = 1.75;
				explosionShielding = 0.6;
			};
			class HitLegs : HitLegs
			{
				armor = 1.75;
				explosionShielding = 0.6;
			};
		};
	};
	class TEI_UNSC_ODST_Soldier_scorch: TEI_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "Scorch";
		vehicleClass																			= "TEI_UNSC_Man_Special_class";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_scorch";		
		backpack 																				= "TEI_ILCS_Rucksack_Black";
		weapons[] 																				= {"TEI_MA5B_AC","TEI_M6G","Throw","Put"};
		respawnWeapons[] 																		= {"TEI_MA5B_AC","TEI_M6G","Throw","Put"};
		magazines[] 																			= {"TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] 																		= {"TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		Items[]																					= {"TEI_Biofoam","TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam","TEI_Biofoam"};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest_scorch","TEI_UNSC_ODST_Helmet_scorch","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TEI_NVG"};
		respawnLinkedItems[] 																	= {"TEI_UNSC_ODST_Vest_scorch","TEI_UNSC_ODST_Helmet_scorch","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"TEI_UNSC_Units\ODST\data\uniform_scorch_co.paa"};
	};
		class TEI_UNSC_ODST_Soldier_zero: TEI_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "Zero";
		vehicleClass																			= "TEI_UNSC_Man_Special_class";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_zero";		
		backpack 																				= "TEI_ILCS_Rucksack_Black";
		weapons[] 																				= {"TEI_MA5B_AC","TEI_M6G","Throw","Put"};
		respawnWeapons[] 																		= {"TEI_MA5B_AC","TEI_M6G","Throw","Put"};
		magazines[] 																			= {"TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] 																		= {"TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		Items[]																					= {"TEI_Biofoam","TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam","TEI_Biofoam"};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest_zero","TEI_UNSC_ODST_Helmet_zero","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TEI_NVG"};
		respawnLinkedItems[] 																	= {"TEI_UNSC_ODST_Vest_zero","TEI_UNSC_ODST_Helmet_zero","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"TEI_UNSC_Units\ODST\data\uniform_zero_co.paa"};
	};
		class TEI_UNSC_ODST_Soldier_thedog: TEI_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "The Dog";
		vehicleClass																			= "TEI_UNSC_Man_Special_class";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_thedog";		
		backpack 																				= "TEI_ILCS_Rucksack_Black";
		weapons[] 										= {"TEI_M7S","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7S","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		Items[]																					= {"TEI_Biofoam","TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam","TEI_Biofoam"};
		linkedItems[] 																			= {"TEI_UNSC_ODST_Vest_thedog","TEI_UNSC_ODST_Helmet_thedog","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TEI_NVG"};
		respawnLinkedItems[] 																	= {"TEI_UNSC_ODST_Vest_thedog","TEI_UNSC_ODST_Helmet_thedog","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"TEI_UNSC_Units\ODST\data\uniform_thedog_co.paa"};
	};
	class TEI_UNSC_ODST_Soldier_instructor: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST Instructor";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_instructor";
		model																				= "\TEI_UNSC_Units\ODST\training.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"TEI_UNSC_ODST_InstructorHat","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		respawnLinkedItems[] 																		= {"TEI_UNSC_ODST_InstructorHat","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\odst_instr_co.paa"};
	};
	class TEI_UNSC_ODST_Soldier_recruit: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "TEI_UNSC";
		author																				= "Eridanus Insurrection Team";
		displayName																			= "ODST Recruit";
		vehicleClass																			= "TEI_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "TEI_UNSC_ODST_Uniform_recruit";
		model																				= "\TEI_UNSC_Units\ODST\training.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"TEI_Biofoam"};
		RespawnItems[]																			= {"TEI_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		respawnLinkedItems[] 																		= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"TEI_UNSC_Units\ODST\data\basic_odst_co.paa"};
	};
	
	
	
	//SOLDIER CLASSES W/ WEAPONS

		
	class TEI_UNSC_ODST_Scout: TEI_UNSC_ODST_Soldier
	{
		scope 											= 2;
		displayName										= "ODST Scout";
		backpack 										= "TEI_ILCS_Rucksack_Black";
		weapons[] 										= {"TEI_M7S","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7S","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	
	};
	class TEI_UNSC_ODST_Scout_AT: TEI_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Scout (AT)";
		backpack 										= "TEI_ILCS_Black_Rockets"; //rockets inside?
		weapons[] 										= {"TEI_M7S","TEI_M6G_SF","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_M7S","TEI_M6G_SF","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_UNSC_ODST_Rifleman_AR: TEI_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Rifleman (MA5)";
		backpack 										= "TEI_ILCS_Rucksack_Black";
		weapons[] 										= {"TEI_MA5B_AC","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	
	};
	class TEI_UNSC_ODST_Rifleman_BR: TEI_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Rifleman (BR55)";
		backpack 										= "TEI_ILCS_Rucksack_Black";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	
	};
	class TEI_UNSC_ODST_Rifleman_AT: TEI_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Rifleman (AT)";
		backpack 										= "TEI_ILCS_Black_Rockets"; //rockets inside?
		weapons[] 										= {"TEI_MA5B_AC","TEI_M6G_SF","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","TEI_M6G_SF","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_UNSC_ODST_Autorifleman: TEI_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Autorifleman";
		backpack										= "TEI_ILCS_Rucksack_Black";
		weapons[] 										= {"LMG_Zafir_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"LMG_Zafir_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class TEI_UNSC_ODST_Marksman: TEI_UNSC_ODST_Soldier_Sniper
	{
		scope											= 2;
		displayName										= "ODST Marksman";
		backpack										= "TEI_ILCS_Rucksack_Black";
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	
	};
	class TEI_UNSC_ODST_Scout_Sniper: TEI_UNSC_ODST_Soldier_Sniper
	{
		scope											= 2;
		displayName										= "ODST Scout Sniper";
		weapons[] 										= {"srifle_GM6_SOS_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	
	};
	class TEI_UNSC_ODST_TeamLead: TEI_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Team Leader";
		backpack										= "TEI_ILCS_Rucksack_Black";
		linkedItems[] 									= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_helmet_com","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_helmet_com","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_MA5BGL_AC","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class TEI_UNSC_ODST_Paramedic: TEI_UNSC_ODST_Soldier_medic
	{
		scope 											= 2;
		attendant 										= 1;
		displayName										= "ODST Paramedic";
		cost 											= 300000;
		backpack 										= "TEI_ILCS_Rucksack_Medical1";
		vehicleClass									= "TEI_UNSC_Man_ODST_class";
		weapons[] 										= {"TEI_M7S","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7S","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[] 								= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_medic_co.paa","TEI_UNSC_Units\Army\data\uniform_cam3_co.paa"};
		icon 											= "iconManMedic";
	};
	class TEI_UNSC_ODST_Demo: TEI_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Demolitions";
		backpack										= "TEI_ILCS_Black_Exp";
		linkedItems[] 									= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_helmet_recon","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_ODST_helmet_recon","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_MA5BGL_AC","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		icon = "iconManExplosive";
	};
	class TEI_UNSC_ODST_ONI_Op: TEI_UNSC_ODST_Soldier_light
	{
		scope											= 2;
		displayName										= "ONI Operator";
		linkedItems[] 									= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_Recon_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_ODST_Vest","G_Balaclava_blk","TEI_UNSC_Recon_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManOfficer";
	};
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
	class Binocular;
	
	// UNIFORMS
	
	class TEI_UNSC_ODST_uniform_base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope																					= 0;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "-";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_uniform.paa";
		model																					= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier";
			containerClass																		= "Supply50";
			mass																				= 45; //The weight and storage capacity of the uniform
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Undersuit";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier";
			containerClass																		= "Supply60";
			mass																				= 40;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_light: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 1;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Light Undersuit";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_light";
			containerClass																		= "Supply50";
			mass																				= 30;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_medium: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 1;
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_uniform.paa";
		displayName																				= "[UNSC] ODST Medium Undersuit";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_medium";
			containerClass																		= "Supply50";
			mass																				= 35;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_Sniper: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		displayName																				= "[UNSC] ODST Sniper Undersuit";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_sniper";
			containerClass																		= "Supply50";
			mass																				= 35;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_Medic: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_uniform_med.paa";
		displayName																				= "[UNSC] ODST Medic Undersuit";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_medic";
			containerClass																		= "Supply60";
			mass																				= 40;
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_uniform_scorch: TEI_UNSC_ODST_uniform
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] Scorch's ODST Undersuit";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "TEI_UNSC_ODST_Soldier_scorch";
		};
	};
	class TEI_UNSC_ODST_uniform_thedog: TEI_UNSC_ODST_uniform
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] TheDog's ODST Undersuit";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "TEI_UNSC_ODST_Soldier_thedog";
		};
	};
	class TEI_UNSC_ODST_uniform_zero: TEI_UNSC_ODST_uniform
	{
		scope																					= 2;
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] Zero's ODST Undersuit";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "TEI_UNSC_ODST_Soldier_zero";
		};
	};
	class TEI_UNSC_ODST_uniform_instructor: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 1;
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_instr.paa";
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Instructor Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_instructor";
			containerClass																		= "Supply20";
			mass																				= 30;
			modelSides[] 																		= {6};
		};
	};
		class TEI_UNSC_ODST_uniform_recruit: TEI_UNSC_ODST_uniform_base
	{
		scope																					= 1;
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_recruit.paa";
		author																					= "Eridanus Insurrection Team";
		displayName																				= "[UNSC] ODST Recruit Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "TEI_UNSC_ODST_Soldier_recruit";
			containerClass																		= "Supply20";
			mass																				= 30;
			modelSides[] 																		= {6};
		};
	};
	
	// VESTS
	
	class TEI_UNSC_ODST_vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 																					= 0; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_vest.paa"; /// this icon fits the vest surprisingly well
		model   																				= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 																		= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor 																				= 55; /// what protection does the vest provide
			containerClass 																		= "Supply140";
			mass 																				= 50;
			passThrough 																		= 0; /// coef of damage passed to total damage
			modelSides[] 																		= {6};
		};
	};
	class TEI_UNSC_ODST_vest: TEI_UNSC_ODST_vest_base
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "[UNSC] ODST M53 Body Armor"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_vest.paa"; /// this icon fits the vest surprisingly well
		model     																				= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\vest_co.paa",""}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor   																			= 55; /// what protection does the vest provide
			containerClass   																	= "Supply140";
			mass   																				= 50;
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			modelSides[]   																		= {6};
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\vest_co.paa",""}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_vest_medic: TEI_UNSC_ODST_vest_base
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "[UNSC] ODST M53 Body Armor (Medic)"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_vest_med.paa"; /// this icon fits the vest surprisingly well
		model     																				= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\vest_medic_co.paa",""}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor   																			= 55; /// what protection does the vest provide
			containerClass   																	= "Supply140";
			mass   																				= 50;
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			modelSides[]   																		= {6};
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\vest_medic_co.paa",""}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_vest_scorch: TEI_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "[UNSC] Scorch's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\vest_scorch_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\vest_scorch_co.paa",""}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_ODST_vest_thedog: TEI_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "[UNSC] TheDog's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\odst_vest_thedog_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\odst_vest_thedog_co.paa",""}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_ODST_vest_zero: TEI_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "[UNSC] Zero's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\vest_zero_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\vest_zero_co.paa",""}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_ODST_vest_stirls: TEI_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName  																			= "[UNSC] Stirl's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\vest_stirls_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\vest_stirls_co.paa",""}; /// what texture is going to be used
		};
	};
	
	// HELMETS
	
	class TEI_UNSC_ODST_helmet_base: H_HelmetB
	{	
		scope   																				= 0; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet.paa"; /// this icon fits the vest surprisingly well
		model     																				= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		allowedFacewear[] 																		= {""};
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 0; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_recon: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet_recon.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Recon)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_communication","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet2_co.paa","TEI_UNSC_Units\ODST\data\helmet2_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_communication","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet2_co.paa","TEI_UNSC_Units\ODST\data\helmet2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_sniper: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Sniper)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet1_co.paa","TEI_UNSC_Units\ODST\data\helmet1_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet1_co.paa","TEI_UNSC_Units\ODST\data\helmet1_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_com: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Comms)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet3_co.paa","TEI_UNSC_Units\ODST\data\helmet3_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet3_co.paa","TEI_UNSC_Units\ODST\data\helmet3_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_Medic: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_medic_co.paa","TEI_UNSC_Units\ODST\data\helmet_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_medic_co.paa","TEI_UNSC_Units\ODST\data\helmet_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_scorch: TEI_UNSC_ODST_helmet
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] Scorch's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_scorch_co.paa","TEI_UNSC_Units\ODST\data\helmet_scorch_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_scorch_co.paa","TEI_UNSC_Units\ODST\data\helmet_scorch_co.paa"}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_ODST_helmet_thedog: TEI_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] TheDog's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa","TEI_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa","TEI_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa"}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_ODST_helmet_zero: TEI_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] Zero's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_zero_co.paa","TEI_UNSC_Units\ODST\data\helmet_zero_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_zero_co.paa","TEI_UNSC_Units\ODST\data\helmet_zero_co.paa"}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_ODST_helmet_stirls: TEI_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] Stirl's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_stirls_co.paa","TEI_UNSC_Units\ODST\data\helmet_stirls_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_stirls_co.paa","TEI_UNSC_Units\ODST\data\helmet_stirls_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_dp: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		hiddenSelectionsMaterials[]   															= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_sniper_dp: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Sniper) [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet1_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		hiddenSelectionsMaterials[]   															= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet1_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_com_dp: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Comms) [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet3_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		hiddenSelectionsMaterials[]   															= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet3_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_recon_dp: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet_recon.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Recon) [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet3_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_Medic_dp: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Medic) [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_medic_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_medic_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_helmet_thedog_dp: TEI_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] TheDog's ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa","TEI_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa","TEI_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_ODST_helmet_scorch_dp: TEI_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] Scorch's ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_scorch_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_scorch_co.paa","TEI_UNSC_Units\ODST\data\helmet_scorch_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
			class TEI_UNSC_ODST_helmet_stirls_dp: TEI_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] Stirl's ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_stirls_co.paa","TEI_UNSC_Units\ODST\data\helmet_stirls_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_stirls_co.paa","TEI_UNSC_Units\ODST\data\helmet_stirls_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
			class TEI_UNSC_ODST_helmet_zero_dp: TEI_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		displayName    																			= "[UNSC] Zero's ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_zero_co.paa","TEI_UNSC_Units\ODST\data\helmet_zero_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\helmet_zero_co.paa","TEI_UNSC_Units\ODST\data\helmet_zero_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"TEI_UNSC_Units\ODST\data\helmet.rvmat","TEI_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Recon_helmet: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_recon.paa";
		displayName    																			= "[UNSC] ONI Recon Helmet"; /// how would the stuff be displayed in inventory and on ground
		model     																				= "\TEI_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\recon_helmet_co.paa","TEI_UNSC_Units\ODST\data\recon_helmet_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 20;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\recon_helmet_co.paa","TEI_UNSC_Units\ODST\data\recon_helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_Recon_helmet_dp: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_recon.paa";
		displayName    																			= "[UNSC] ONI Recon Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		model     																				= "\TEI_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"TEI_UNSC_Units\ODST\data\recon_helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
			armor   																			= 20; /// what protection does the vest provide
			mass   																				= 20;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\recon_helmet_co.paa","TEI_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_ODST_InstructorHat: TEI_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Eridanus Insurrection Team";
		picture   																				= "\TEI_UNSC_Units\ODST\icons\odst_hat.paa";
		displayName    																			= "[UNSC] ODST Instructor Cap"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   																= {"TEI_UNSC_Units\ODST\data\instructor_hat_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\TEI_UNSC_Units\ODST\instructor_hat.p3d"; /// what model does the vest use
			armor   																			= 0; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"TEI_UNSC_Units\ODST\data\helmet_co.paa","TEI_Core\data\base\glass_ca.paa"}; /// what texture is going to be used
		};
	};
};