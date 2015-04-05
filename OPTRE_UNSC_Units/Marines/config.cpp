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
	class OPTRE_UNSC_Units_Marines
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","A3_Weapons_F"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Soldier_F;
	class OPTRE_UNSC_Army_Medic;
	
	// SOLDIERS
	
	class OPTRE_UNSC_Marine_Soldier_Base: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 0;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_heavy";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
		armor															= 4;
		armorStructural													= 5;
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
				armor = 1.5;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0.15;
				explosionShielding = 5;
				visual = "injury_body";
				minimalHit = 0;
			};
			class HitHands
			{
				armor = 1.5;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.5;
				visual = "injury_hands";
				minimalHit = 0;
			};
			class HitLegs
			{
				armor = 1.5;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				visual = "injury_legs";
				minimalHit = 0;
			};
		};
	};
	
	class OPTRE_UNSC_Marine_heavy: OPTRE_UNSC_Marine_Soldier_Base //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "Rifleman [Heavy]";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_heavy";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
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
				explosionShielding = 5;
			};
			class HitHands : HitHands
			{
				armor = 1.25;
				explosionShielding = 0.5;
			};
			class HitLegs : HitLegs
			{
				armor = 1.25;
				explosionShielding = 0.5;
			};
		};
	};
	class OPTRE_UNSC_Marine_vacuum_heavy: OPTRE_UNSC_Marine_Soldier_Base //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "Rifleman [Heavy/Vacuum]";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_heavy";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
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
				armor = 1.25;
				explosionShielding = 0.8;
			};
			class HitLegs : HitLegs
			{
				armor = 1.25;
				explosionShielding = 0.8;
			};
		};
	};
class OPTRE_UNSC_Marine_medium: OPTRE_UNSC_Marine_Soldier_Base //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "Rifleman [Medium]";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_medium";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
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
				explosionShielding = 7;
			};
			class HitHands : HitHands
			{
				armor = 1.25;
				explosionShielding = 0.7;
			};
			class HitLegs : HitLegs
			{
				armor = 1.15;
				explosionShielding = 0.7;
			};
		};
	};
	class OPTRE_UNSC_Marine_light: OPTRE_UNSC_Marine_Soldier_Base //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "Rifleman [Light]";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_light";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
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
				armor = 1.15;
				explosionShielding = 0.6;
			};
		};
	};
	
	
	
	
	//CLASSES WITH WEAPONS
	
	class OPTRE_UNSC_Marine_Corpsman: OPTRE_UNSC_Army_Medic //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Corpsman";
		attendant 										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52V_Vest_Medic","OPTRE_UNSC_CH252V_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52V_Vest_Medic","OPTRE_UNSC_CH252V_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Marine_Radioman: OPTRE_UNSC_Marine_vacuum_heavy //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "OPTRE_Como_pack_1";
		weapons[] 										= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Marine_Pilot: OPTRE_UNSC_Marine_Soldier_Base
	{
		scope															= 2;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "Pilot";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_pilot";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
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
				explosionShielding = 5;
			};
			class HitHands : HitHands
			{
				armor = 1;
				explosionShielding = 0.5;
			};
			class HitLegs : HitLegs
			{
				armor = 1;
				explosionShielding = 0.5;
			};
		};
	};
	class OPTRE_UNSC_Marine_Rifleman_AR: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Marine_Rifleman_BR: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Marine_Rifleman_AT: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "OPTRE_Kitbag_rgr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Marine_Rifleman_Light: OPTRE_UNSC_Marine_medium
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		linkedItems[] 									= {"OPTRE_UNSC_Marine_Vest","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_Marine_Vest","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Marine_AT_Specialist: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "AT Specialist";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "OPTRE_Kitbag_rgr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Marine_AA_Specialist: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "AA Specialist";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "OPTRE_Kitbag_rgr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Marine_Engineer: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "OPTRE_Kitbag_rgr_Exp";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class OPTRE_UNSC_Marine_Breacher: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Breacher";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Marine_TeamLead: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_Marine_SquadLead: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_Marine_Grenadier: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Marine_Autorifleman: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Autorifleman";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] 								= {"LMG_Zafir_F","Throw","Put"};
		magazines[] 									= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class OPTRE_UNSC_Marine_Assist_Autorifleman: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Marine_Marksman: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Marine_Sniper: OPTRE_UNSC_Marine_vacuum_heavy //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		weapons[] 										= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Marine_Observer: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		Items[]											= {"OPTRE_Biofoam","Item_Laserdesignator"};
		RespawnItems[]									= {"OPTRE_Biofoam","Item_Laserdesignator"};
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Marine_Crewman: OPTRE_UNSC_Marine_Pilot
	{
		displayName										= "Crewman";
		weapons[] 										= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 									= {"OPTRE_UNSC_Marine_Vest_vacuum","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_Marine_Vest_vacuum","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Marine_Demolitions: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "Demolitions";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		engineer 										= 1;
		backpack										= "OPTRE_Kitbag_rgr_Exp";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class OPTRE_UNSC_Marine_UAV_Op: OPTRE_UNSC_Marine_vacuum_heavy
	{
		scope											= 2;
		displayName										= "UAV Operator";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		backpack 										= "B_UAV_01_backpack_F";
		uavHacker 										= 1;
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] 									= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_UNSC_Marine_Unarmed: OPTRE_UNSC_Marine_medium
	{
		scope											= 2;
		displayName										= "Unarmed";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class OPTRE_UNSC_Marine_Officer: OPTRE_UNSC_Marine_light
	{
		scope											= 2;
		displayName										= "Officer";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		linkedItems[] 									= {"OPTRE_UNSC_Marine_Vest","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_Marine_Vest","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManOfficer";
	};
	class OPTRE_UNSC_Marine_Sgt_Johnson: OPTRE_UNSC_Marine_medium //make black and give military cap
	{
		scope											= 1;
		displayName										= "Sgt. Avery Johnson";
		vehicleClass									= "OPTRE_UNSC_Man_Marines_class";
		identityTypes[] 								= {"OPTRE_Sgt_Johnson_ID"};
		linkedItems[] 									= {"OPTRE_UNSC_Marine_Vest","OPTRE_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_Marine_Vest","OPTRE_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
};
class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class Default;
		class Avery_Johnson: Default
		{
			name = "Avery_Johnson";
			displayname = "Avery Johnson";
			//identityTypes[] = {"",""};
			//head = "";
		};
	};
};
class CfgIdentities
{
	class OPTRE_Sgt_Johnson_ID
	{
		name = "Avery_Johnson";
		glasses = "None";
		speaker = "Male01ENG";
		face="AfricanHead_03";
		pitch=0.94971651;
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
	
	// UNIFORMS
	
	class OPTRE_UNSC_Marine_uniform_base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope															= 0;
		author															= "Article 2 Studios";
		displayName														= "-";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_uniform_des.paa";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel													= "-";
			uniformClass													= "OPTRE_UNSC_Marine_Soldier";
			containerClass													= "Supply20";
			mass														= 40; //The weight and storage capacity of the uniform
			modelSides[] 													= {6};
		};
	};
	class OPTRE_UNSC_Marine_uniform_heavy: OPTRE_UNSC_Marine_uniform_base
	{
		scope															= 2;
		author															= "Article 2 Studios";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_uniform_hvy.paa";
		displayName														= "[UNSC] Marine BDU (Heavy)";
		class ItemInfo: UniformItem
		{
			uniformModel													= "-";
			uniformClass													= "OPTRE_UNSC_Marine_Heavy";
			containerClass													= "Supply60";
			mass														= 40;
			modelSides[] 													= {6};
		};
	};
	class OPTRE_UNSC_Marine_uniform_pilot: OPTRE_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa";
		displayName										= "[UNSC] Pilot Uniform [Marine]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Marine_pilot";
			containerClass									= "Supply30";
			mass										= 25;
			modelSides[] 									= {6};
		};
	};
	class OPTRE_UNSC_Marine_uniform_medium: OPTRE_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform_hvy.paa";
		displayName										= "[UNSC] Marine BDU (Medium)";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Marine_medium";
			containerClass									= "Supply50";
			mass										= 35;
			modelSides[] 									= {6};
		};
	};
	class OPTRE_UNSC_Marine_uniform_light: OPTRE_UNSC_Marine_uniform_base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa";
		displayName										= "[UNSC] Marine BDU (Light)";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Marine_light";
			containerClass									= "Supply50";
			mass										= 30;
			modelSides[] 									= {6};
		};
	};



///VEST
	class OPTRE_UNSC_Marine_vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 											= 0; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName  										= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_vest.paa";
		model   										= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 									= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor 										= 50; /// what protection does the vest provide
			containerClass 									= "Supply140";
			mass 										= 40;
			passThrough 									= 0; /// coef of damage passed to total damage
			modelSides[] 									= {6};
		};
	};
	class OPTRE_UNSC_Marine_vest: OPTRE_UNSC_Marine_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName  										= "[UNSC] M52 Body Armor (Marine)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_vest.paa";
		model     										= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_knife","attach_neck"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Marines\data\vest_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   									= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 50; /// what protection does the vest provide
			containerClass   								= "Supply140";
			mass   										= 40;
			passThrough   									= 0.1; /// coef of damage passed to total damage
			modelSides[]   									= {6};
			hiddenSelections[]   								= {"camo1","camo2","attach_knife","attach_neck"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"OPTRE_UNSC_Units\Army\data\vest_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_Marine_vest_vacuum: OPTRE_UNSC_Marine_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName  									= "[UNSC] M52[V] Body Armor (Marine)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_vest_vac.paa";
		model     										= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Marines\data\vest_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: VestItem 
		{
			uniformModel   								= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor   									= 50; /// what protection does the vest provide
			containerClass   							= "Supply140";
			mass   										= 40;
			passThrough   								= 0.1; /// coef of damage passed to total damage
			modelSides[]   								= {6};
			hiddenSelections[]   						= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		};
	};


// HELMETS
	
	class OPTRE_UNSC_Marine_helmet_base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName    										= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\OPTRE_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Marines\data\helmet_cam3_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\OPTRE_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 10; /// what protection does the vest provide
			mass   										= 20;
			modelSides[]   									= {6};
			passThrough   									= 0; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"OPTRE_UNSC_Units\Marines\data\helmet_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_Marine_helmet: OPTRE_UNSC_Marine_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_helmet.paa";
		displayName    										= "[UNSC] CH252 Helmet (Marine)"; /// how would the stuff be displayed in inventory and on ground
		model     										= "\OPTRE_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Marines\data\helmet_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\OPTRE_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 10; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"OPTRE_UNSC_Units\Army\data\helmet_cam3_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_Marine_helmet_vacuum: OPTRE_UNSC_Marine_helmet_base
	{	
		scope   										= 2; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName    										= "[UNSC] CH252[V] Helmet (Marine)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_helmet_vac.paa";
		model     										= "\OPTRE_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   									= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Marines\data\helmet_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   									= "\OPTRE_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 10; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   									= {6};
			passThrough   									= 0.1; /// coef of damage passed to total damage
			hiddenSelections[]   								= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   							= {"OPTRE_UNSC_Units\Army\data\helmet_cam3_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_h_Jarhead_cap_Marine: ItemCore
    {
        scope = 2;
		weaponPoolAvailable = 1;
        displayName = "[UNSC] Jarhead Cap (Marine)"; //In-Game name
        model = "\a3\characters_f\Common\cappatrol"; // Model
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\OPTRE_UNSC_Units\Marines\data\jarhead_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 5; 
            uniformModel = "\a3\characters_f\Common\cappatrol";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"\OPTRE_UNSC_Units\Marines\data\jarhead_co.paa"};
            modelSides[] = {6};
        };
	};
};