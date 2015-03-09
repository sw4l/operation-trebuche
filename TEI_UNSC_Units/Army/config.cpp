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
	class TEI_UNSC_Units_Army
	{
		units[]											= {};
		weapons[]										= {};
		requiredVersion									= 0.1;
		requiredAddons[]								= {"TEI_Core","A3_Characters_F","A3_Characters_F_Common","A3_Weapons_F"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Soldier_F;
	
	// BASE CLASSES (ALL SCOPE=1)
	
	class TEI_UNSC_Army_Soldier_Base: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 1;
		faction											= "TEI_UNSC";
		author											= "Eridanus Insurrection Team";
		displayName										= "-";
		vehicleClass									= "TEI_UNSC_Man_Army_class";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		uniformClass									= "TEI_UNSC_Army_BDU_Base";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"TEI_Biofoam"};
		RespawnItems[]									= {"TEI_Biofoam"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_co.paa","TEI_UNSC_Units\Army\data\uniform_cam1_co.paa"};
		identityTypes[] 								= {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO"};
		genericNames 									= "NATOMen";
		portrait 										= "";
		picture	 										= "";
		icon 											= "iconMan";
	};
	class TEI_UNSC_Army_Pilot_WDL: TEI_UNSC_Army_Soldier_Base //Configures the unit part of the Units Uniform
	{
		scope											= 1;
		author											= "Eridanus Insurrection Team";
		displayName										= "Pilot [Woodland]";
		uniformClass									= "TEI_UNSC_Army_Pilot_BDU_WDL";
		model											= "\TEI_UNSC_Units\Army\uniform.p3d";
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_WDL","TEI_UNSC_CH252V_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52V_Vest_WDL","TEI_UNSC_CH252V_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_co.paa","TEI_UNSC_Units\Army\data\uniform_cam1_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_L_WDL: TEI_UNSC_Army_Pilot_WDL //Configures the unit part of the Units Uniform
	{
		scope											= 1;
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman (Light) [Woodland]";
		uniformClass									= "TEI_UNSC_Army_BDU_L_WDL";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_co.paa","TEI_UNSC_Units\Army\data\uniform_cam1_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_WDL: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman [Woodland]";
		uniformClass									= "TEI_UNSC_Army_BDU_WDL";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_co.paa","TEI_UNSC_Units\Army\data\uniform_cam1_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_H_WDL: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman (Heavy) [Woodland]";
		uniformClass									= "TEI_UNSC_Army_BDU_H_WDL";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_co.paa","TEI_UNSC_Units\Army\data\uniform_cam1_co.paa"};
	};
	class TEI_UNSC_Army_Medic: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		attendant 										= 1;
		displayName										= "Medic";
		cost 											= 300000;
		icon 											= "iconManMedic";
		uniformClass									= "TEI_UNSC_Army_BDU_Medic";
		backpack 										= "TEI_ILCS_Rucksack_Medical1";
		Items[]											= {"TEI_Biofoam"};
		RespawnItems[]									= {"TEI_Biofoam"};
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_Medic","TEI_UNSC_CH252_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_Medic","TEI_UNSC_CH252_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_medic_co.paa","TEI_UNSC_Units\Army\data\uniform_cam3_co.paa"};
	};
	class TEI_UNSC_Army_Pilot_DES: TEI_UNSC_Army_Pilot_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Pilot [Desert]";
		uniformClass									= "TEI_UNSC_Army_Pilot_BDU_DES";
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_DES","TEI_UNSC_CH252V_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52V_Vest_DES","TEI_UNSC_CH252V_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_cam2_co.paa","TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_L_DES: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman (Light) [Desert]";
		uniformClass									= "TEI_UNSC_Army_BDU_L_DES";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_cam2_co.paa","TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_DES: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman [Desert]";
		uniformClass									= "TEI_UNSC_Army_BDU_DES";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_cam2_co.paa","TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_H_DES: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman (Heavy) [Desert]";
		uniformClass									= "TEI_UNSC_Army_BDU_H_DES";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_cam2_co.paa","TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	
	
	
	
	
		// ARMY WOODLAND SOLDIERS CLASSES (W/ WEAPONS)
		
	class TEI_UNSC_Army_W_Medic: TEI_UNSC_Army_Medic //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		attendant 										= 1;
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
	};
	class TEI_UNSC_Army_W_Radioman: TEI_UNSC_Army_Rifleman_H_WDL //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		uniformClass									= "TEI_UNSC_Army_BDU_H_WDL";
		backpack 										= "TEI_Como_pack_1";
		weapons[] 										= {"TEI_M7","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7","Throw","Put"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
	};
	class TEI_UNSC_Army_W_Pilot: TEI_UNSC_Army_Pilot_WDL
	{
		scope											= 2;
		displayName										= "Pilot";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_W_Rifleman_AR: TEI_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_W_Rifleman_BR: TEI_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_W_Rifleman_AT: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		backpack 										= "TEI_Kitbag_rgr_Rockets"; //rockets inside?
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_UNSC_Army_W_Rifleman_Light: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_W_AT_Specialist: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "AT Specialist";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		backpack 										= "TEI_Kitbag_rgr_Rockets";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_UNSC_Army_W_AA_Specialist: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "AA Specialist";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		backpack 										= "TEI_Kitbag_rgr_Rockets";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA","TEI_M41_Twin_HEAA","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA","TEI_M41_Twin_HEAA","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_UNSC_Army_W_Engineer: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		backpack 										= "TEI_Kitbag_rgr_Exp";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class TEI_UNSC_Army_W_Breacher: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Breacher";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
	};
	class TEI_UNSC_Army_W_TeamLead: TEI_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class TEI_UNSC_Army_W_SquadLead: TEI_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "TEI_Como_pack_1";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class TEI_UNSC_Army_W_Grenadier: TEI_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		weapons[] 										= {"TEI_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class TEI_UNSC_Army_W_Autorifleman: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Autorifleman";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] 								= {"LMG_Zafir_F","Throw","Put"};
		magazines[] 									= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class TEI_UNSC_Army_W_Assist_Autorifleman: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_UNSC_Army_W_Marksman: TEI_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_W_Sniper: TEI_UNSC_Army_Rifleman_WDL //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest2_WDL","TEI_UNSC_CH252_Helmet2_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest2_WDL","TEI_UNSC_CH252_Helmet2_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"srifle_GM6_SOS_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_W_Observer: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest2_WDL","TEI_UNSC_CH252_Helmet2_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest2_WDL","TEI_UNSC_CH252_Helmet2_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		Items[]											= {"TEI_Biofoam","Item_Laserdesignator"};
		RespawnItems[]									= {"TEI_Biofoam","Item_Laserdesignator"};
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class TEI_UNSC_Army_W_Crewman: TEI_UNSC_Army_W_Pilot
	{
		displayName										= "Crewman";
		weapons[] 										= {"TEI_M7","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7","TEI_M6G_SF","Throw","Put"};
		engineer = 1;
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52V_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_W_Demolitions: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Demolitions";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		backpack 										= "TEI_Kitbag_rgr_Exp";
		engineer 										= 1;
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class TEI_UNSC_Army_W_UAV_Op: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "UAV Operator";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		backpack 										= "B_UAV_01_backpack_F";
		uavHacker 										= 1;
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG","B_UavTerminal"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG","B_UavTerminal"};
	};
	class TEI_UNSC_Army_W_Unarmed: TEI_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Unarmed";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class TEI_UNSC_Army_W_Officer: TEI_UNSC_Army_W_Pilot
	{
		scope											= 2;
		displayName										= "Officer";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManOfficer";
	};
	
	
	
	
	
	
		// ARMY DESERT SOLDIERS CLASSES (W/ WEAPONS)
		
class TEI_UNSC_Army_D_Medic: TEI_UNSC_Army_W_Medic //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		attendant 										= 1;
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
	};
	class TEI_UNSC_Army_D_Radioman: TEI_UNSC_Army_Rifleman_H_DES //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		//uniformClass									= "TEI_UNSC_Army_BDU_H_WDL";
		backpack 										= "TEI_Como_pack_1";
		weapons[] 										= {"TEI_M7","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7","Throw","Put"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
	};
	class TEI_UNSC_Army_D_Pilot: TEI_UNSC_Army_Pilot_DES
	{
		scope											= 2;
		displayName										= "Pilot";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_D_Rifleman_AR: TEI_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		backpack 										= "B_Kitbag_cbr";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_D_Rifleman_BR: TEI_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		backpack 										= "B_Kitbag_cbr";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_D_Rifleman_AT: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		backpack 										= "TEI_Kitbag_cbr_Rockets"; //rockets inside?
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_UNSC_Army_D_Rifleman_Light: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_D_AT_Specialist: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "AT Specialist";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		backpack 										= "TEI_Kitbag_cbr_Rockets";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_UNSC_Army_D_AA_Specialist: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "AA Specialist";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		backpack 										= "TEI_Kitbag_cbr_Rockets";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA","TEI_M41_Twin_HEAA","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA","TEI_M41_Twin_HEAA","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_UNSC_Army_D_Engineer: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		backpack 										= "TEI_Kitbag_cbr_Exp";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class TEI_UNSC_Army_D_Breacher: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Breacher";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
	};
	class TEI_UNSC_Army_D_TeamLead: TEI_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class TEI_UNSC_Army_D_SquadLead: TEI_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "TEI_Como_pack_1";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class TEI_UNSC_Army_D_Grenadier: TEI_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		weapons[] 										= {"TEI_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class TEI_UNSC_Army_D_Autorifleman: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Autorifleman";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] 								= {"LMG_Zafir_F","Throw","Put"};
		magazines[] 									= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class TEI_UNSC_Army_D_Assist_Autorifleman: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_UNSC_Army_D_Marksman: TEI_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_D_Sniper: TEI_UNSC_Army_Rifleman_DES //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest2_DES","TEI_UNSC_CH252_Helmet2_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest2_DES","TEI_UNSC_CH252_Helmet2_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"srifle_GM6_SOS_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_D_Observer: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest2_DES","TEI_UNSC_CH252_Helmet2_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest2_DES","TEI_UNSC_CH252_Helmet2_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		Items[]											= {"FirstAidKit","Item_Laserdesignator"};
		RespawnItems[]									= {"FirstAidKit","Item_Laserdesignator"};
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class TEI_UNSC_Army_D_Crewman: TEI_UNSC_Army_Pilot_DES
	{
		displayName										= "Crewman";
		weapons[] 										= {"TEI_M7","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7","TEI_M6G_SF","Throw","Put"};
		engineer										= 1;
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_DES","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52V_Vest_DES","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
	};
	class TEI_UNSC_Army_D_Demolitions: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Demolitions";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		backpack 										= "TEI_Kitbag_cbr_Exp";
		engineer 										= 1;
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class TEI_UNSC_Army_D_UAV_Op: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "UAV Operator";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		backpack 										= "B_UAV_01_backpack_F";
		uavHacker 										= 1;
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG","B_UavTerminal"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG","B_UavTerminal"};
	};														
	class TEI_UNSC_Army_D_Unarmed: TEI_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Unarmed";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class TEI_UNSC_Army_D_Officer: TEI_UNSC_Army_Pilot_DES
	{
		scope											= 2;
		displayName										= "Officer";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
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
	class NVGoggles;
	
	
	class TEI_NVG: NVGoggles
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Neural Implant Vision Enhancement";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "";
			modelOff = "";
			mass = 1;
		};
	};
	
	// UNIFORMS
	
	class TEI_UNSC_Army_BDU_Base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "-";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Soldier_Base";
			containerClass								= "Supply50";
			mass										= 40; //The weight and storage capacity of the uniform
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_Pilot_BDU_WDL: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		displayName										= "[UNSC] Pilot Coveralls [Woodland]";
		class ItemInfo: ItemInfo
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Pilot_WDL";
			containerClass								= "Supply30";
			mass										= 25;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_L_WDL: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		displayName										= "[UNSC] Army BDU (Light/Woodland)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Rifleman_L_WDL";
			containerClass								= "Supply30";
			mass										= 30;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_WDL: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		displayName										= "[UNSC] Army BDU (Medium/Woodland)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Rifleman_WDL";
			containerClass								= "Supply40";
			mass										= 35;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_H_WDL: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army BDU (Heavy/Woodland)";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Rifleman_H_WDL";
			containerClass								= "Supply50";
			mass										= 40;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_Pilot_BDU_DES: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		displayName										= "[UNSC] Pilot Coveralls [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Pilot_DES";
			containerClass								= "Supply30";
			mass										= 25;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_L_DES: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_des.paa";
		displayName										= "[UNSC] Army BDU (Light/Desert)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Rifleman_L_DES";
			containerClass								= "Supply30";
			mass										= 30;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_DES: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_des_hvy.paa";
		displayName										= "[UNSC] Army BDU (Medium/Desert)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Rifleman_DES";
			containerClass								= "Supply40";
			mass										= 35;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_H_DES: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_des_hvy.paa";
		displayName										= "[UNSC] Army BDU (Heavy/Desert)";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Rifleman_H_DES";
			containerClass									= "Supply50";
			mass											= 40;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_BDU_Medic: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_uniform_med.paa";
		displayName										= "[UNSC] Medic BDU";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Medic";
			containerClass									= "Supply50";
			mass											= 40;
			modelSides[] 									= {6};
		};
	};
	
	// VESTS
	
	class TEI_UNSC_M52_Vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 											= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture 										= ""; /// this icon fits the vest surprisingly well
		model   										= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\TEI_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor 										= 50; /// what protection does the vest provide
			containerClass 								= "Supply160";
			mass 										= 80;
			passThrough 								= 0; /// coef of damage passed to total damage
			modelSides[] 								= {6};
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52_Vest_WDL: TEI_UNSC_M52_Vest_base
	{	
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_wdl.paa";
		displayName  									= "[UNSC] M52 Body Armor (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52V_Vest_WDL: TEI_UNSC_M52_Vest_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_wdl_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52_Vest_DES: TEI_UNSC_M52_Vest_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_des.paa";
		displayName  									= "[UNSC] M52 Body Armor (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52_Vest_Medic: TEI_UNSC_M52_Vest_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_med.paa";
		displayName  									= "[UNSC] M52 Body Armor (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52V_Vest_Medic: TEI_UNSC_M52_Vest_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_med_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52V_Vest_DES: TEI_UNSC_M52_Vest_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_des_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52_Vest2_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 											= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName  									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture 										= ""; /// this icon fits the vest surprisingly well
		model   										= "\TEI_UNSC_Units\Army\vest2.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\TEI_UNSC_Units\Army\vest2.p3d"; /// what model does the vest use
			armor 										= 50; /// what protection does the vest provide
			containerClass 								= "Supply160";
			mass 										= 80;
			passThrough 								= 0; /// coef of damage passed to total damage
			modelSides[] 								= {6};
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52_Vest2_WDL: TEI_UNSC_M52_Vest2_base
	{	
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_wdl_gil.paa";
		displayName  									= "[UNSC] M52 Body Armor (Woodland) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};	
	class TEI_UNSC_M52_Vest2b_WDL: TEI_UNSC_M52_Vest2_WDL
	{	
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_wdl_gil_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Woodland) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52_Vest2_DES: TEI_UNSC_M52_Vest2_base
	{	
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_des_gil.paa";
		displayName  									= "[UNSC] M52 Body Armor (Desert) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa","TEI_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa","TEI_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		};
	};	
	class TEI_UNSC_M52_Vest2b_DES: TEI_UNSC_M52_Vest2_DES
	{	
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_vest_des_gil_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Desert) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa","TEI_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa","TEI_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		};
	};
	
	// HELMETS
	
	class TEI_UNSC_CH252_Helmet_Base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_wdl.paa";
		allowedFacewear[] 								={"G_Tactical_Clear","G_Tactical_Black","G_Bandanna_beast","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_tan","G_Combat"};
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 15; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   								= {6};
			passThrough   								= 0; /// coef of damage passed to total damage
			hiddenSelections[]   						= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252_Helmet_WDL: TEI_UNSC_CH252_Helmet_Base
	{	
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_wdl.paa";
		displayName    									= "[UNSC] CH252 Helmet (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252V_Helmet_WDL: TEI_UNSC_CH252_Helmet_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_wdl_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252_Helmet_DES: TEI_UNSC_CH252_Helmet_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_des.paa";
		displayName    									= "[UNSC] CH252 Helmet (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252V_Helmet_DES: TEI_UNSC_CH252_Helmet_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_des_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252_Helmet_Medic: TEI_UNSC_CH252_Helmet_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_med.paa";
		displayName    									= "[UNSC] CH252 Helmet (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252V_Helmet_Medic: TEI_UNSC_CH252_Helmet_WDL
	{	
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_med_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252_Helmet2_Base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		allowedFacewear[] 								={"G_Tactical_Clear","G_Tactical_Black","G_Bandanna_beast","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_tan","G_Combat"};
		model     										= "\TEI_UNSC_Units\Army\helmet2.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","camo3","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\TEI_UNSC_Units\Army\helmet2.p3d"; /// what model does the vest use
			armor   									= 15; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   								= {6};
			passThrough   								= 0; /// coef of damage passed to total damage
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_CH252_Helmet2_WDL: TEI_UNSC_CH252_Helmet2_Base
	{	
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_wdl_gil.paa";
		displayName    									= "[UNSC] CH252 Helmet (Woodland) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_CH252_Helmet2b_WDL: TEI_UNSC_CH252_Helmet2_WDL
	{	
		scope = 1;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_wdl_gil_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Woodland) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa","TEI_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252_Helmet2_DES: TEI_UNSC_CH252_Helmet2_Base
	{	
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_des_gil.paa";
		displayName    									= "[UNSC] CH252 Helmet (Desert) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa","TEI_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa","TEI_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		};
	};
		class TEI_UNSC_CH252_Helmet2b_DES: TEI_UNSC_CH252_Helmet2_DES
	{	
		scope = 1;
		author											= "Eridanus Insurrection Team";
		picture   										= "\TEI_UNSC_Units\Army\icons\army_helmet_des_gil_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Desert) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa","TEI_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_ca.paa","TEI_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		};
	};
};