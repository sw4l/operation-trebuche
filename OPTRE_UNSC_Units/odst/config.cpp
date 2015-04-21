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
	class OPTRE_UNSC_Units_ODST
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Soldier_F;
	class B_Kitbag_rgr;    //Instead of inheriting from base classes, inherit from pre-defined classes so you dont have to worry about missing entries
	
	// SOLDIERS
	
	class OPTRE_UNSC_ODST_Soldier: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																					= 1;
		faction																					= "OPTRE_UNSC";
		author																					= "Article 2 Studios";
		displayName																				= "ODST [Heavy]";
		vehicleClass																			= "OPTRE_UNSC_Man_ODST_class";
		uniformAccessories[]																	= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform";
		model																					= "\OPTRE_UNSC_Units\ODST\uniform.p3d";
		weapons[]																				= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																					= {"OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam"};
		magazines[]																				= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\uniform_co.paa"};
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
	class OPTRE_UNSC_ODST_Soldier_light: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																				= 1;
		author																				= "Article 2 Studios";
		displayName																			= "ODST [Light]";
		uniformAccessories[]																		= {};
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_light";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan","attach_leftforearm", "attach_leftshoulder", "attach_rightforearm", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"OPTRE_UNSC_Units\ODST\data\uniform_co.paa"};
		class HitPoints : HitPoints
		{
			class HitHead : HitHead 
			{
				armor = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 1;
				explosionShielding = 6;
			};
			class HitHands : HitHands
			{
				armor = 1;
				explosionShielding = 0.6;
			};
			class HitLegs : HitLegs
			{
				armor = 1.35;
				explosionShielding = 0.6;
			};
		};
	};
	class OPTRE_UNSC_ODST_Soldier_medium: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																				= 1;
		faction																				= "OPTRE_UNSC";
		author																				= "Article 2 Studios";
		displayName																			= "ODST [Medium]";
		vehicleClass																			= "OPTRE_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_medium";
		model																				= "\OPTRE_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan", "attach_leftshoulder", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"OPTRE_UNSC_Units\ODST\data\uniform_co.paa"};
		class HitPoints : HitPoints
		{
			class HitHead : HitHead 
			{
				armor = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 1;
				explosionShielding = 8;
			};
			class HitHands : HitHands
			{
				armor = 1.15;
				explosionShielding = 0.8;
			};
			class HitLegs : HitLegs
			{
				armor = 1.35;
				explosionShielding = 0.8;
			};
		};
	};
	class OPTRE_UNSC_ODST_Soldier_Sniper: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																				= 1;
		faction																				= "OPTRE_UNSC";
		author																				= "Article 2 Studios";
		displayName																			= "ODST [Sniper]";
		vehicleClass																			= "OPTRE_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_sniper";
		model																				= "\OPTRE_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_Helmet_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_Helmet_sniper","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan", "attach_rightshoulder" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"OPTRE_UNSC_Units\ODST\data\uniform_co.paa"};
		class HitPoints : HitPoints
		{
			class HitHead : HitHead 
			{
				armor = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 1;
				explosionShielding = 8;
			};
			class HitHands : HitHands
			{
				armor = 1.2;
				explosionShielding = 0.8;
			};
			class HitLegs : HitLegs
			{
				armor = 1.35;
				explosionShielding = 0.8;
			};
		};
	};
	class OPTRE_UNSC_ODST_Soldier_medic: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																				= 1;
		faction																				= "OPTRE_UNSC";
		author																				= "Article 2 Studios";
		displayName																			= "ODST [Medic]";
		vehicleClass																			= "OPTRE_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_medic";
		model																				= "\OPTRE_UNSC_Units\ODST\uniform.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]											= {"OPTRE_Biofoam"};
		RespawnItems[]									= {"OPTRE_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_medic","OPTRE_UNSC_ODST_Helmet_medic","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																		= {"OPTRE_UNSC_ODST_Vest_medic","OPTRE_UNSC_ODST_Helmet_medic","G_Balaclava_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"OPTRE_UNSC_Units\ODST\data\uniform_medic_co.paa"};
		class HitPoints : HitPoints
		{
			class HitHead : HitHead 
			{
				armor = 0.5;
				explosionShielding = 0.5;
			};
			class HitBody : HitBody
			{
				armor = 1;
				explosionShielding = 6;
			};
			class HitHands : HitHands
			{
				armor = 1.35;
				explosionShielding = 0.6;
			};
			class HitLegs : HitLegs
			{
				armor = 1.35;
				explosionShielding = 0.6;
			};
		};
	};
	class OPTRE_UNSC_ODST_Soldier_scorch: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "Scorch";
		vehicleClass																			= "OPTRE_UNSC_Man_Special_class";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_scorch";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 																				= {"OPTRE_MA5B_AC","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] 																		= {"OPTRE_MA5B_AC","OPTRE_M6G","Throw","Put"};
		magazines[] 																			= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] 																		= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		Items[]																					= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_scorch","OPTRE_UNSC_ODST_Helmet_scorch","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_scorch","OPTRE_UNSC_ODST_Helmet_scorch","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\uniform_scorch_co.paa"};
	};
		class OPTRE_UNSC_ODST_Soldier_zero: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "Zero";
		vehicleClass																			= "OPTRE_UNSC_Man_Special_class";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_zero";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 																				= {"OPTRE_MA5B_AC","OPTRE_M6G","Throw","Put"};
		respawnWeapons[] 																		= {"OPTRE_MA5B_AC","OPTRE_M6G","Throw","Put"};
		magazines[] 																			= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		respawnMagazines[] 																		= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen","SmokeShellRed"};
		Items[]																					= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_zero","OPTRE_UNSC_ODST_Helmet_zero","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_zero","OPTRE_UNSC_ODST_Helmet_zero","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\uniform_zero_co.paa"};
	};
		class OPTRE_UNSC_ODST_Soldier_thedog: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "The Dog";
		vehicleClass																			= "OPTRE_UNSC_Man_Special_class";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_thedog";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 										= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		Items[]																					= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_Vest_thedog","OPTRE_UNSC_ODST_Helmet_thedog","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_Vest_thedog","OPTRE_UNSC_ODST_Helmet_thedog","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\uniform_thedog_co.paa"};
	};
		class OPTRE_UNSC_ODST_Soldier_stirls: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "Stirls";
		vehicleClass																			= "OPTRE_UNSC_Man_Special_class";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_stirls";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 										= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		Items[]																					= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_vest_stirls","OPTRE_UNSC_ODST_Helmet_stirls","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_vest_stirls","OPTRE_UNSC_ODST_Helmet_stirls","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\uniform_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_urban: OPTRE_UNSC_ODST_Soldier //Configures the unit part of the ODST Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		attendant 																				= 1;
		engineer 																				= 1;
		canDeactivateMines 																		= 1;
		detectSkill 																			= 80;
		displayName																				= "Urban";
		vehicleClass																			= "OPTRE_UNSC_Man_Special_class";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_Urban";		
		backpack 																				= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		Items[]																					= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam","OPTRE_Biofoam"};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_vest_urban","OPTRE_UNSC_ODST_Helmet_urban","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"OPTRE_UNSC_ODST_vest_urban","OPTRE_UNSC_ODST_Helmet_urban","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\ODST\data\uniform_Urban_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_instructor: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "OPTRE_UNSC";
		author																				= "Article 2 Studios";
		displayName																			= "ODST Instructor";
		vehicleClass																			= "OPTRE_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_instructor";
		model																				= "\OPTRE_UNSC_Units\ODST\training.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"OPTRE_UNSC_ODST_InstructorHat","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																		= {"OPTRE_UNSC_ODST_InstructorHat","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"OPTRE_UNSC_Units\ODST\data\odst_instr_co.paa"};
	};
	class OPTRE_UNSC_ODST_Soldier_recruit: B_Soldier_F //Configures the unit part of the ODST Uniform
	{
		scope																				= 2;
		faction																				= "OPTRE_UNSC";
		author																				= "Article 2 Studios";
		displayName																			= "ODST Recruit";
		vehicleClass																			= "OPTRE_UNSC_Man_ODST_class";
		uniformAccessories[]																		= {};
		nakedUniform 																			= "U_BasicBody";
		uniformClass																			= "OPTRE_UNSC_ODST_Uniform_recruit";
		model																				= "\OPTRE_UNSC_Units\ODST\training.p3d";
		weapons[]																			= {"Throw","Put"};
		respawnWeapons[]																		= {"Throw","Put"};
		Items[]																				= {"OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam"};
		magazines[]																			= {};
		respawnMagazines[]																		= {};
		linkedItems[] 																			= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																		= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 																		= {"camo1","insignia","clan" }; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 																	= {"OPTRE_UNSC_Units\ODST\data\basic_odst_co.paa"};
	};
	
	
	
	//SOLDIER CLASSES W/ WEAPONS

		
	class OPTRE_UNSC_ODST_Scout: OPTRE_UNSC_ODST_Soldier
	{
		scope 											= 2;
		displayName										= "ODST Scout";
		backpack 										= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 										= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	
	};
	class OPTRE_UNSC_ODST_Scout_AT: OPTRE_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Scout (AT)";
		backpack 										= "OPTRE_ILCS_Black_Rockets"; //rockets inside?
		weapons[] 										= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_ODST_Rifleman_AR: OPTRE_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Rifleman (MA5)";
		backpack 										= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 										= {"OPTRE_MA5B_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	
	};
	class OPTRE_UNSC_ODST_Rifleman_BR: OPTRE_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Rifleman (BR55)";
		backpack 										= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	
	};
	class OPTRE_UNSC_ODST_Rifleman_AT: OPTRE_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Rifleman (AT)";
		backpack 										= "OPTRE_ILCS_Black_Rockets"; //rockets inside?
		weapons[] 										= {"OPTRE_MA5B_AC","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","OPTRE_M6G_SF","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_ODST_Autorifleman: OPTRE_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Autorifleman";
		backpack										= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 										= {"OPTRE_M73","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M73","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class OPTRE_UNSC_ODST_Marksman: OPTRE_UNSC_ODST_Soldier_Sniper
	{
		scope											= 2;
		displayName										= "ODST Marksman";
		backpack										= "OPTRE_ILCS_Rucksack_Black";
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	
	};
	class OPTRE_UNSC_ODST_Scout_Sniper: OPTRE_UNSC_ODST_Soldier_Sniper
	{
		scope											= 2;
		displayName										= "ODST Scout Sniper";
		weapons[] 										= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	
	};
	class OPTRE_UNSC_ODST_TeamLead: OPTRE_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Team Leader";
		backpack										= "OPTRE_ILCS_Rucksack_Black";
		linkedItems[] 									= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_helmet_com","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_helmet_com","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5BGL_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_ODST_Paramedic: OPTRE_UNSC_ODST_Soldier_medic
	{
		scope 											= 2;
		attendant 										= 1;
		displayName										= "ODST Paramedic";
		cost 											= 300000;
		backpack 										= "OPTRE_ILCS_Rucksack_Medical1";
		vehicleClass									= "OPTRE_UNSC_Man_ODST_class";
		weapons[] 										= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7S","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_medic_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam3_co.paa"};
		icon 											= "iconManMedic";
	};
	class OPTRE_UNSC_ODST_Demo: OPTRE_UNSC_ODST_Soldier
	{
		scope											= 2;
		displayName										= "ODST Demolitions";
		backpack										= "OPTRE_ILCS_Black_Exp";
		linkedItems[] 									= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_helmet_recon","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_ODST_helmet_recon","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5BGL_AC","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		icon = "iconManExplosive";
	};
	class OPTRE_UNSC_ODST_ONI_Op: OPTRE_UNSC_ODST_Soldier_light
	{
		scope											= 2;
		displayName										= "ONI Operator";
		linkedItems[] 									= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_Recon_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_ODST_Vest","G_Balaclava_blk","OPTRE_UNSC_Recon_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
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
	
	class OPTRE_UNSC_ODST_uniform_base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope																					= 0;
		author																					= "Article 2 Studios";
		displayName																				= "-";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform.paa";
		model																					= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier";
			containerClass																		= "Supply50";
			mass																				= 45; //The weight and storage capacity of the uniform
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_uniform: OPTRE_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST Undersuit";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier";
			containerClass																		= "Supply60";
			mass																				= 40;
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_uniform_light: OPTRE_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST Light Undersuit";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_light";
			containerClass																		= "Supply50";
			mass																				= 30;
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_uniform_medium: OPTRE_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform.paa";
		displayName																				= "[UNSC] ODST Medium Undersuit";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_medium";
			containerClass																		= "Supply50";
			mass																				= 35;
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_uniform_Sniper: OPTRE_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_left.paa";
		displayName																				= "[UNSC] ODST Sniper Undersuit";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_sniper";
			containerClass																		= "Supply50";
			mass																				= 35;
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_uniform_Medic: OPTRE_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_uniform_med.paa";
		displayName																				= "[UNSC] ODST Medic Undersuit";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_medic";
			containerClass																		= "Supply60";
			mass																				= 40;
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_uniform_scorch: OPTRE_UNSC_ODST_uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Scorch's ODST Undersuit";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_scorch";
		};
	};
	class OPTRE_UNSC_ODST_uniform_thedog: OPTRE_UNSC_ODST_uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] TheDog's ODST Undersuit";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_thedog";
		};
	};
	class OPTRE_UNSC_ODST_uniform_stirls: OPTRE_UNSC_ODST_uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Stirl's ODST Undersuit";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_stirls";
		};
	};
	class OPTRE_UNSC_ODST_uniform_Urban: OPTRE_UNSC_ODST_uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Urban's ODST Undersuit";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_urban";
		};
	};
	class OPTRE_UNSC_ODST_uniform_zero: OPTRE_UNSC_ODST_uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Zero's ODST Undersuit";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_zero";
		};
	};
	class OPTRE_UNSC_ODST_uniform_instructor: OPTRE_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_instr.paa";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST Instructor Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_instructor";
			containerClass																		= "Supply20";
			mass																				= 30;
			modelSides[] 																		= {6};
		};
	};
		class OPTRE_UNSC_ODST_uniform_recruit: OPTRE_UNSC_ODST_uniform_base
	{
		scope																					= 2;
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_recruit.paa";
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] ODST Recruit Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel																		= "-";
			uniformClass																		= "OPTRE_UNSC_ODST_Soldier_recruit";
			containerClass																		= "Supply20";
			mass																				= 30;
			modelSides[] 																		= {6};
		};
	};
	
	// VESTS
	
	class OPTRE_UNSC_ODST_vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 																					= 0; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName  																			= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_vest.paa"; /// this icon fits the vest surprisingly well
		model   																				= "\OPTRE_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 																		= "\OPTRE_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor 																				= 50; /// what protection does the vest provide
			containerClass 																		= "Supply140";
			mass 																				= 50;
			passThrough 																		= 0; /// coef of damage passed to total damage
			modelSides[] 																		= {6};
		};
	};
	class OPTRE_UNSC_ODST_vest: OPTRE_UNSC_ODST_vest_base
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] ODST M53 Body Armor"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_vest.paa"; /// this icon fits the vest surprisingly well
		model     																				= "\OPTRE_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife","attach_nade"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"optre_unsc_units\odst\data\odst_vest_basic_co.tga",""}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor   																			= 50; /// what protection does the vest provide
			containerClass   																	= "Supply140";
			mass   																				= 50;
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			modelSides[]   																		= {6};
			hiddenSelections[]   																= {"camo1","camo2","attach_knife","attach_nade"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"optre_unsc_units\odst\data\odst_vest_basic_co.tga",""}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_vest_medic: OPTRE_UNSC_ODST_vest_base
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] ODST M53 Body Armor (Medic)"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_vest_med.paa"; /// this icon fits the vest surprisingly well
		model     																				= "\OPTRE_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife","attach_nade"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_medic_co.paa",""}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\vest.p3d"; /// what model does the vest use
			armor   																			= 50; /// what protection does the vest provide
			containerClass   																	= "Supply140";
			mass   																				= 50;
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			modelSides[]   																		= {6};
			hiddenSelections[]   																= {"camo1","camo2","attach_knife","attach_nade"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_medic_co.paa",""}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_vest_scorch: OPTRE_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] Scorch's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_scorch_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_scorch_co.paa",""}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_ODST_vest_thedog: OPTRE_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] TheDog's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife","attach_nade"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\odst_vest_thedog_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_knife","attach_nade"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\odst_vest_thedog_co.paa",""}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_ODST_vest_zero: OPTRE_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] Zero's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_knife","attach_nade"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_zero_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_knife","attach_nade"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_zero_co.paa",""}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_ODST_vest_stirls: OPTRE_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] Stirl's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_stirls_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_stirls_co.paa",""}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_vest_urban: OPTRE_UNSC_ODST_vest
	{	
		scope 																					= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName  																			= "[UNSC] Urban's ODST Armor"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_nade"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\vest_Urban_co.paa",""}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   																= {"camo1","camo2","attach_nade"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\vest_Urban_co.paa",""}; /// what texture is going to be used
		};
	};
	
	// HELMETS
	
	class OPTRE_UNSC_ODST_helmet_base: H_HelmetB
	{	
		scope   																				= 0; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa"; /// this icon fits the vest surprisingly well
		model     																				= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		allowedFacewear[] 																		= {""};
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 0; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_recon: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_recon.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Recon)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_communication","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet2_co.paa","OPTRE_UNSC_Units\ODST\data\helmet2_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_communication","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet2_co.paa","OPTRE_UNSC_Units\ODST\data\helmet2_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_sniper: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Sniper)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet1_co.paa","OPTRE_UNSC_Units\ODST\data\helmet1_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet1_co.paa","OPTRE_UNSC_Units\ODST\data\helmet1_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_com: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Comms)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet3_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet3_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_Medic: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_scorch: OPTRE_UNSC_ODST_helmet
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] Scorch's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa"}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_ODST_helmet_thedog: OPTRE_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] TheDog's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa","OPTRE_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa","OPTRE_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa"}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_ODST_helmet_zero: OPTRE_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] Zero's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa"}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_ODST_helmet_stirls: OPTRE_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] Stirl's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_urban: OPTRE_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] Urban's ODST Helmet"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_Urban_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_Urban_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_Urban_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_Urban_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_dp: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_sniper_dp: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_sniper.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Sniper) [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet1_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet1_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_com_dp: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_como.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Comms) [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		hiddenSelectionsMaterials[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_recon_dp: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_recon.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Recon) [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rebreather","attach_rangefinder","attach_laser"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet3_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_Medic_dp: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_helmet_med.paa";
		displayName    																			= "[UNSC] ODST CH253 Helmet (Medic) [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rebreather","attach_rangefinder", "attach_laser"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_medic_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_helmet_thedog_dp: OPTRE_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] TheDog's ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa","OPTRE_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa","OPTRE_UNSC_Units\ODST\data\odst_helmet_thedog_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_ODST_helmet_scorch_dp: OPTRE_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] Scorch's ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_rangefinder"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_scorch_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
			class OPTRE_UNSC_ODST_helmet_stirls_dp: OPTRE_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] Stirl's ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_stirls_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
			class OPTRE_UNSC_ODST_helmet_zero_dp: OPTRE_UNSC_ODST_helmet_scorch
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		displayName    																			= "[UNSC] Zero's ODST Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			
		hiddenSelections[]   																	= {"camo1","camo2","attach_cam","attach_flashlight","attach_laser","attach_mount","attach_rangefinder","attach_rebreather","attach_communication"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_zero_co.paa"}; /// what texture is going to be used
			hiddenSelectionsMaterials[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet.rvmat","OPTRE_UNSC_Units\ODST\data\helmet_visor2.rvmat"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_Recon_helmet: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_recon.paa";
		displayName    																			= "[UNSC] ONI Recon Helmet"; /// how would the stuff be displayed in inventory and on ground
		model     																				= "\OPTRE_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa","OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 20;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa","OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_Recon_helmet_dp: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_recon.paa";
		displayName    																			= "[UNSC] ONI Recon Helmet [Depolarized]"; /// how would the stuff be displayed in inventory and on ground
		model     																				= "\OPTRE_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   																	= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   															= {"OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\recon_helmet.p3d"; /// what model does the vest use
			armor   																			= 15; /// what protection does the vest provide
			mass   																				= 20;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\recon_helmet_co.paa","OPTRE_UNSC_Units\ODST\data\helmet_ca.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_ODST_InstructorHat: OPTRE_UNSC_ODST_helmet_base
	{	
		scope   																			  	= 2; /// scope needs to be 2 to have a visible class
		author																					= "Article 2 Studios";
		picture   																				= "\OPTRE_UNSC_Units\ODST\icons\odst_hat.paa";
		displayName    																			= "[UNSC] ODST Instructor Cap"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   																	= {"camo1"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   																= {"OPTRE_UNSC_Units\ODST\data\instructor_hat_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   																		= "\OPTRE_UNSC_Units\ODST\instructor_hat.p3d"; /// what model does the vest use
			armor   																			= 0; /// what protection does the vest provide
			mass   																				= 30;
			modelSides[]   																		= {6};
			passThrough   																		= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   																= {"camo1","camo2","attach_cam","attach_communication","attach_flashlight","attach_rangefinder","attach_rebreather"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   														= {"OPTRE_UNSC_Units\ODST\data\helmet_co.paa","OPTRE_Core\data\base\glass_ca.paa"}; /// what texture is going to be used
		};
	};
};