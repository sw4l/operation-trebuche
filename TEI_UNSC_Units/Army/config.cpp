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
		requiredAddons[]								= {"TEI_Core"};
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
		Items[]											= {"FirstAidKit"};
		RespawnItems[]									= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_WDL","TEI_UNSC_CH252V_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52V_Vest_WDL","TEI_UNSC_CH252V_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_co.paa","TEI_UNSC_Units\Army\data\uniform_cam1_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_L_WDL: TEI_UNSC_Army_Pilot_WDL //Configures the unit part of the Units Uniform
	{
		scope											= 1;
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman (Light) [Woodland]";
		uniformClass									= "TEI_UNSC_Army_BDU_L_WDL";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_co.paa","TEI_UNSC_Units\Army\data\uniform_cam1_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_WDL: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman [Woodland]";
		uniformClass									= "TEI_UNSC_Army_BDU_WDL";
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_co.paa","TEI_UNSC_Units\Army\data\uniform_cam1_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_H_WDL: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman (Heavy) [Woodland]";
		uniformClass									= "TEI_UNSC_Army_BDU_H_WDL";
		hiddenSelections[] 									= {"camo1","camo2","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
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
		backpack 										= "TEI_ILCS_Rucksack_Medical";
		weapons[] 										= {"TEI_MA5B","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_Medic","TEI_UNSC_CH252_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_Medic","TEI_UNSC_CH252_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_medic_co.paa","TEI_UNSC_Units\Army\data\uniform_cam3_co.paa"};
	};
	class TEI_UNSC_Army_Pilot_DES: TEI_UNSC_Army_Pilot_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Pilot [Desert]";
		uniformClass									= "TEI_UNSC_Army_Pilot_BDU_DES";
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_DES","TEI_UNSC_CH252V_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52V_Vest_DES","TEI_UNSC_CH252V_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_cam2_co.paa","TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_L_DES: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman (Light) [Desert]";
		uniformClass									= "TEI_UNSC_Army_BDU_L_DES";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_cam2_co.paa","TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_DES: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman [Desert]";
		uniformClass									= "TEI_UNSC_Army_BDU_DES";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_cam2_co.paa","TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_Rifleman_H_DES: TEI_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Eridanus Insurrection Team";
		displayName										= "Rifleman (Heavy) [Desert]";
		uniformClass									= "TEI_UNSC_Army_BDU_H_DES";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		weapons[] 										= {"TEI_MA5B","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","TEI_MA5B_AmmoCounter","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_WDL","TEI_UNSC_CH252_Helmet_WDL","TEI_MA5B_AmmoCounter","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_UNSC_Units\Army\data\armor_cam2_co.paa","TEI_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class TEI_UNSC_Army_W_Pilot: TEI_UNSC_Army_Pilot_WDL
	{
		scope											= 2;
		displayName										= "Pilot";
		vehicleClass									= "TEI_UNSC_Man_Army_W_class";
		weapons[] 										= {"TEI_M6G","TEI_M6G_Scope","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G","TEI_M6G_Scope","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_WDL","TEI_UNSC_CH252V_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52V_Vest_WDL","TEI_UNSC_CH252V_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_UNSC_Army_W_Rifleman_AR: TEI_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (AR)";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_MA5B","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_UNSC_Army_W_Rifleman_BR: TEI_UNSC_Army_W_Rifleman_AR
	{
		
	};
	
	
	TEI_BR55HB_Scope_F
	
	
		// ARMY DESERT SOLDIERS CLASSES (W/ WEAPONS)

	class TEI_UNSC_Army_D_Medic: TEI_UNSC_Army_W_Medic //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		attendant 										= 1;
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
	};
	class TEI_UNSC_Army_D_Radioman: TEI_UNSC_Army_W_Radioman //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		uniformClass									= "TEI_UNSC_Army_BDU_H_DES";
		backpack 										= "TEI_Como_pack_1";
		linkedItems[] 									= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","TEI_MA5B_AmmoCounter","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_UNSC_M52_Vest_DES","TEI_UNSC_CH252_Helmet_DES","TEI_MA5B_AmmoCounter","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_UNSC_Army_D_Pilot: TEI_UNSC_Army_W_Pilot
	{
		scope											= 2;
		displayName										= "Pilot";
		vehicleClass									= "TEI_UNSC_Man_Army_D_class";
		weapons[] 										= {"TEI_M6G","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G","Throw","Put"};
		magazines[]										= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		linkedItems[] 									= {"TEI_UNSC_M52V_Vest_DES","TEI_UNSC_CH252V_Helmet_DES","TEI_M6G_Scope","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnlinkedItems[] 							= {"TEI_UNSC_M52V_Vest_DES","TEI_UNSC_CH252V_Helmet_DES","TEI_M6G_Scope","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_UNSC_Army_D_Rifleman_AR: 
	{
		weapons[] 										= {"TEI_MA5B","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_UNSC_Army_D_Rifleman_BR: 
	{
		
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
	
	class TEI_UNSC_Army_BDU_Base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "-";
		picture											= "";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Soldier_Base";
			containerClass								= "Supply50";
			mass										= 50; //The weight and storage capacity of the uniform
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_Pilot_BDU_WDL: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Pilot Uniform [Woodland]";
		class ItemInfo: ItemInfo
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Pilot_WDL";
			containerClass								= "Supply30";
			mass										= 30;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_L_WDL: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army BDU (Light) [Woodland]";
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
		displayName										= "[UNSC] Army BDU [Woodland]";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Rifleman_WDL";
			containerClass								= "Supply40";
			mass										= 40;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_H_WDL: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army BDU (Heavy) [Woodland]";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Rifleman_H_WDL";
			containerClass								= "Supply50";
			mass										= 50;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_Pilot_BDU_DES: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Pilot Uniform [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Pilot_DES";
			containerClass								= "Supply30";
			mass										= 30;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_L_DES: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army BDU (Light) [Desert]";
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
		displayName										= "[UNSC] Army BDU [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "TEI_UNSC_Army_Rifleman_DES";
			containerClass								= "Supply40";
			mass										= 40;
			modelSides[] 								= {6};
		};
	};
	class TEI_UNSC_Army_BDU_H_DES: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army BDU (Heavy) [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Rifleman_H_DES";
			containerClass									= "Supply50";
			mass											= 50;
			modelSides[] 									= {6};
		};
	};
	class TEI_UNSC_Army_BDU_Medic: TEI_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Eridanus Insurrection Team";
		displayName										= "[UNSC] Army BDU [Medic]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "TEI_UNSC_Army_Medic";
			containerClass									= "Supply50";
			mass											= 50;
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
			armor 										= 30; /// what protection does the vest provide
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
		displayName  									= "[UNSC] M52 Body Armor (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
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
		displayName  									= "[UNSC] M52[V] Body Armor (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
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
		displayName  									= "[UNSC] M52 Body Armor (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52_Vest_Medic: TEI_UNSC_M52_Vest_WDL
	{	
		author											= "Eridanus Insurrection Team";
		displayName  									= "[UNSC] M52 Body Armor (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_medic_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_M52V_Vest_Medic: TEI_UNSC_M52_Vest_WDL
	{	
		author											= "Eridanus Insurrection Team";
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
		displayName  									= "[UNSC] M52[V] Body Armor (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\vest_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	
	// HELMETS
	
	class TEI_UNSC_CH252_Helmet_Base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Eridanus Insurrection Team";
		displayName    									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		model     										= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_co.paa","TEI_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\TEI_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 20; /// what protection does the vest provide
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
		displayName    									= "[UNSC] CH252 Helmet (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252V_Helmet_DES: TEI_UNSC_CH252_Helmet_WDL
	{	
		author											= "Eridanus Insurrection Team";
		displayName    									= "[UNSC] CH252[V] Helmet (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_cam2_co.paa","TEI_UNSC_Units\Army\data\addons_cam2_co.paa"}; /// what texture is going to be used
		};
	};
	class TEI_UNSC_CH252_Helmet_Medic: TEI_UNSC_CH252_Helmet_WDL
	{	
		author											= "Eridanus Insurrection Team";
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
		displayName    									= "[UNSC] CH252[V] Helmet (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"TEI_UNSC_Units\Army\data\helmet_medic_co.paa","TEI_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};
};