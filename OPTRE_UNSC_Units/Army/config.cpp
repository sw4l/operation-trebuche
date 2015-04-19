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
	class OPTRE_UNSC_Units_Army
	{
		units[]											= {};
		weapons[]										= {};
		requiredVersion									= 0.1;
		requiredAddons[]								= {"OPTRE_Core","A3_Characters_F","A3_Characters_F_Common","A3_Weapons_F"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Soldier_F;
	
	// BASE CLASSES (ALL SCOPE=1)
	
	class OPTRE_UNSC_Army_Soldier_Base: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope											= 0;
		faction											= "OPTRE_UNSC";
		author											= "Article 2 Studios";
		displayName										= "-";
		vehicleClass									= "OPTRE_UNSC_Man_Army_class";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		uniformClass									= "OPTRE_UNSC_Army_BDU_Base";
		model											= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"OPTRE_Biofoam"};
		RespawnItems[]									= {"OPTRE_Biofoam"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam1_co.paa"};
		identityTypes[] 								= {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO"};
		genericNames 									= "NATOMen";
		portrait 										= "";
		picture	 										= "";
		icon 											= "iconMan";
		armor											= 4;
		armorStructural									= 5;
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
	class OPTRE_UNSC_Army_Pilot_WDL: OPTRE_UNSC_Army_Soldier_Base //Configures the unit part of the Units Uniform
	{
		scope											= 1;
		author											= "Article 2 Studios";
		displayName										= "Pilot [Woodland]";
		uniformClass									= "OPTRE_UNSC_Army_Pilot_BDU_WDL";
		model											= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		linkedItems[] 									= {"OPTRE_UNSC_M52V_Vest_WDL","OPTRE_UNSC_CH252V_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52V_Vest_WDL","OPTRE_UNSC_CH252V_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam1_co.paa"};
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
	class OPTRE_UNSC_Army_Rifleman_L_WDL: OPTRE_UNSC_Army_Pilot_WDL //Configures the unit part of the Units Uniform
	{
		scope											= 1;
		author											= "Article 2 Studios";
		displayName										= "Rifleman (Light) [Woodland]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_L_WDL";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam1_co.paa"};
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
	class OPTRE_UNSC_Army_Rifleman_WDL: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Rifleman [Woodland]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_WDL";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam1_co.paa"};
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
	class OPTRE_UNSC_Army_Rifleman_H_WDL: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Rifleman (Heavy) [Woodland]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_H_WDL";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam1_co.paa"};
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
	class OPTRE_UNSC_Army_Medic: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		attendant 										= 1;
		displayName										= "Medic";
		cost 											= 300000;
		icon 											= "iconManMedic";
		uniformClass									= "OPTRE_UNSC_Army_BDU_Medic";
		backpack 										= "OPTRE_ILCS_Rucksack_Medical1";
		Items[]											= {"OPTRE_Biofoam"};
		RespawnItems[]									= {"OPTRE_Biofoam"};
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_Medic","OPTRE_UNSC_CH252_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_Medic","OPTRE_UNSC_CH252_Helmet_Medic","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_medic_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam3_co.paa"};
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
	class OPTRE_UNSC_Army_Pilot_DES: OPTRE_UNSC_Army_Pilot_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Pilot [Desert]";
		uniformClass									= "OPTRE_UNSC_Army_Pilot_BDU_DES";
		linkedItems[] 									= {"OPTRE_UNSC_M52V_Vest_DES","OPTRE_UNSC_CH252V_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52V_Vest_DES","OPTRE_UNSC_CH252V_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_cam2_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class OPTRE_UNSC_Army_Rifleman_L_DES: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Rifleman (Light) [Desert]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_L_DES";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_cam2_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class OPTRE_UNSC_Army_Rifleman_DES: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Rifleman [Desert]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_DES";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_cam2_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	class OPTRE_UNSC_Army_Rifleman_H_DES: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Rifleman (Heavy) [Desert]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_H_DES";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_cam2_co.paa","OPTRE_UNSC_Units\Army\data\uniform_cam2_co.paa"};
	};
	//snow units 
	
	class OPTRE_UNSC_Army_Pilot_SNO: OPTRE_UNSC_Army_Pilot_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Pilot [Snow]";
		uniformClass									= "OPTRE_UNSC_Army_Pilot_BDU_SNO";
		linkedItems[] 									= {"OPTRE_UNSC_M52V_Vest_SNO","OPTRE_UNSC_CH252V_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52V_Vest_SNO","OPTRE_UNSC_CH252V_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_UNSC_Units\Army\data\uniform_snow_co.paa"};
	};
	class OPTRE_UNSC_Army_Rifleman_L_SNO: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Rifleman (Light) [Snow]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_L_SNO";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_UNSC_Units\Army\data\uniform_snow_co.paa"};
	};
	class OPTRE_UNSC_Army_Rifleman_SNO: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Rifleman [Snow]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_SNO";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_UNSC_Units\Army\data\uniform_snow_co.paa"};
	};
	class OPTRE_UNSC_Army_Rifleman_H_SNO: OPTRE_UNSC_Army_Rifleman_L_WDL //Configures the unit part of the Units Uniform
	{
		author											= "Article 2 Studios";
		displayName										= "Rifleman (Heavy) [Snow]";
		uniformClass									= "OPTRE_UNSC_Army_BDU_H_SNO";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		hiddenSelections[] 								= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_rightknee2","attach_leftknee2","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_UNSC_Units\Army\data\uniform_snow_co.paa"};
	};
	
		// ARMY WOODLAND SOLDIERS CLASSES (W/ WEAPONS)
		
	class OPTRE_UNSC_Army_W_Medic: OPTRE_UNSC_Army_Medic //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		attendant 										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
	};
	class OPTRE_UNSC_Army_W_Radioman: OPTRE_UNSC_Army_Rifleman_H_WDL //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		uniformClass									= "OPTRE_UNSC_Army_BDU_H_WDL";
		backpack 										= "OPTRE_Como_pack_1";
		weapons[] 										= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Army_W_Pilot: OPTRE_UNSC_Army_Pilot_WDL
	{
		scope											= 2;
		displayName										= "Pilot";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_W_Rifleman_AR: OPTRE_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_W_Rifleman_BR: OPTRE_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_W_Rifleman_AT: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		backpack 										= "OPTRE_Kitbag_rgr_Rockets"; //rockets inside?
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_W_Rifleman_Light: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_W_AT_Specialist: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "AT Specialist";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		backpack 										= "OPTRE_Kitbag_rgr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_W_AA_Specialist: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "AA Specialist";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		backpack 										= "OPTRE_Kitbag_rgr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_W_Engineer: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		backpack 										= "OPTRE_Kitbag_rgr_Exp";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class OPTRE_UNSC_Army_W_Breacher: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Breacher";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Army_W_TeamLead: OPTRE_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_Army_W_SquadLead: OPTRE_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "OPTRE_Como_pack_1";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_Army_W_Grenadier: OPTRE_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Army_W_Autorifleman: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Autorifleman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M73","Throw","Put"};
		magazines[] 									= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class OPTRE_UNSC_Army_W_Assist_Autorifleman: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Army_W_Marksman: OPTRE_UNSC_Army_Rifleman_H_WDL
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_W_Sniper: OPTRE_UNSC_Army_Rifleman_WDL //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest2_WDL","OPTRE_UNSC_CH252_Helmet2_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest2_WDL","OPTRE_UNSC_CH252_Helmet2_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_W_Observer: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_rgr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest2_WDL","OPTRE_UNSC_CH252_Helmet2_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest2_WDL","OPTRE_UNSC_CH252_Helmet2_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		Items[]											= {"OPTRE_Biofoam","Item_Laserdesignator"};
		RespawnItems[]									= {"OPTRE_Biofoam","Item_Laserdesignator"};
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Army_W_Crewman: OPTRE_UNSC_Army_W_Pilot
	{
		displayName										= "Crewman";
		weapons[] 										= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		engineer = 1;
		linkedItems[] 									= {"OPTRE_UNSC_M52V_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52V_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_W_Demolitions: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Demolitions";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		backpack 										= "OPTRE_Kitbag_rgr_Exp";
		engineer 										= 1;
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class OPTRE_UNSC_Army_W_UAV_Op: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "UAV Operator";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		backpack 										= "B_UAV_01_backpack_F";
		uavHacker 										= 1;
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_UNSC_Army_W_Unarmed: OPTRE_UNSC_Army_Rifleman_WDL
	{
		scope											= 2;
		displayName										= "Unarmed";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class OPTRE_UNSC_Army_W_Officer: OPTRE_UNSC_Army_W_Pilot
	{
		scope											= 2;
		displayName										= "Officer";
		vehicleClass									= "OPTRE_UNSC_Man_Army_W_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManOfficer";
	};
	
	
	
	
	
	
		// ARMY DESERT SOLDIERS CLASSES (W/ WEAPONS)
		
	class OPTRE_UNSC_Army_D_Medic: OPTRE_UNSC_Army_W_Medic //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		attendant 										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
	};
	class OPTRE_UNSC_Army_D_Radioman: OPTRE_UNSC_Army_Rifleman_H_DES //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		//uniformClass									= "OPTRE_UNSC_Army_BDU_H_WDL";
		backpack 										= "OPTRE_Como_pack_1";
		weapons[] 										= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Army_D_Pilot: OPTRE_UNSC_Army_Pilot_DES
	{
		scope											= 2;
		displayName										= "Pilot";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_D_Rifleman_AR: OPTRE_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		backpack 										= "B_Kitbag_cbr";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_D_Rifleman_BR: OPTRE_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		backpack 										= "B_Kitbag_cbr";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_D_Rifleman_AT: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		backpack 										= "OPTRE_Kitbag_cbr_Rockets"; //rockets inside?
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_D_Rifleman_Light: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_DES","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_DES","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_D_AT_Specialist: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "AT Specialist";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		backpack 										= "OPTRE_Kitbag_cbr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_D_AA_Specialist: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "AA Specialist";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		backpack 										= "OPTRE_Kitbag_cbr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_D_Engineer: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		backpack 										= "OPTRE_Kitbag_cbr_Exp";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class OPTRE_UNSC_Army_D_Breacher: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Breacher";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Army_D_TeamLead: OPTRE_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_Army_D_SquadLead: OPTRE_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "OPTRE_Como_pack_1";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_Army_D_Grenadier: OPTRE_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Army_D_Autorifleman: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Autorifleman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M73","Throw","Put"};
		magazines[] 									= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class OPTRE_UNSC_Army_D_Assist_Autorifleman: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Army_D_Marksman: OPTRE_UNSC_Army_Rifleman_H_DES
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_D_Sniper: OPTRE_UNSC_Army_Rifleman_DES //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest2_DES","OPTRE_UNSC_CH252_Helmet2_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest2_DES","OPTRE_UNSC_CH252_Helmet2_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_D_Observer: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest2_DES","OPTRE_UNSC_CH252_Helmet2_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest2_DES","OPTRE_UNSC_CH252_Helmet2_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		Items[]											= {"FirstAidKit","Item_Laserdesignator"};
		RespawnItems[]									= {"FirstAidKit","Item_Laserdesignator"};
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Army_D_Crewman: OPTRE_UNSC_Army_Pilot_DES
	{
		displayName										= "Crewman";
		weapons[] 										= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		engineer										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52V_Vest_DES","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52V_Vest_DES","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_D_Demolitions: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Demolitions";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		backpack 										= "OPTRE_Kitbag_cbr_Exp";
		engineer 										= 1;
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class OPTRE_UNSC_Army_D_UAV_Op: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "UAV Operator";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		backpack 										= "B_UAV_01_backpack_F";
		uavHacker 										= 1;
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};														
	class OPTRE_UNSC_Army_D_Unarmed: OPTRE_UNSC_Army_Rifleman_DES
	{
		scope											= 2;
		displayName										= "Unarmed";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class OPTRE_UNSC_Army_D_Officer: OPTRE_UNSC_Army_Pilot_DES
	{
		scope											= 2;
		displayName										= "Officer";
		vehicleClass									= "OPTRE_UNSC_Man_Army_D_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_DES","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_DES","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManOfficer";
	};
	

	
//snow units with weapons
		
class OPTRE_UNSC_Army_S_Medic: OPTRE_UNSC_Army_Medic //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		attendant 										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
	};
	class OPTRE_UNSC_Army_S_Radioman: OPTRE_UNSC_Army_Rifleman_H_SNO //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		//uniformClass									= "OPTRE_UNSC_Army_BDU_H_SNO";
		backpack 										= "OPTRE_Como_pack_1";
		weapons[] 										= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Army_S_Pilot: OPTRE_UNSC_Army_Pilot_SNO
	{
		scope											= 2;
		displayName										= "Pilot";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_S_Rifleman_AR: OPTRE_UNSC_Army_Rifleman_H_SNO
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		backpack 										= "B_Kitbag_cbr";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_S_Rifleman_BR: OPTRE_UNSC_Army_Rifleman_H_SNO
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		backpack 										= "B_Kitbag_cbr";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_S_Rifleman_AT: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		backpack 										= "OPTRE_Kitbag_cbr_Rockets"; //rockets inside?
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_S_Rifleman_Light: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_SNO","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_SNO","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_S_AT_Specialist: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "AT Specialist";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		backpack 										= "OPTRE_Kitbag_cbr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_S_AA_Specialist: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "AA Specialist";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		backpack 										= "OPTRE_Kitbag_cbr_Rockets";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_UNSC_Army_S_Engineer: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		backpack 										= "OPTRE_Kitbag_cbr_Exp";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class OPTRE_UNSC_Army_S_Breacher: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Breacher";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Army_S_TeamLead: OPTRE_UNSC_Army_Rifleman_H_SNO
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_h_Jarhead_cap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_Army_S_SquadLead: OPTRE_UNSC_Army_Rifleman_H_SNO
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "OPTRE_Como_pack_1";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_UNSC_Army_S_Grenadier: OPTRE_UNSC_Army_Rifleman_H_SNO
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Army_S_Autorifleman: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Autorifleman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M73","Throw","Put"};
		magazines[] 									= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class OPTRE_UNSC_Army_S_Assist_Autorifleman: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		//backpack										= assistance AR backpack with ammo inside
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Army_S_Marksman: OPTRE_UNSC_Army_Rifleman_H_SNO
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_S_Sniper: OPTRE_UNSC_Army_Rifleman_SNO //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest2_SNO","OPTRE_UNSC_CH252_Helmet2_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest2_SNO","OPTRE_UNSC_CH252_Helmet2_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_S_Observer: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_cbr";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest2_SNO","OPTRE_UNSC_CH252_Helmet2_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest2_SNO","OPTRE_UNSC_CH252_Helmet2_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		Items[]											= {"FirstAidKit","Item_LaserSNOignator"};
		RespawnItems[]									= {"FirstAidKit","Item_LaserSNOignator"};
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Army_S_Crewman: OPTRE_UNSC_Army_Pilot_SNO
	{
		displayName										= "Crewman";
		weapons[] 										= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		engineer										= 1;
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52V_Vest_SNO","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_UNSC_M52V_Vest_SNO","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_UNSC_Army_S_Demolitions: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Demolitions";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		backpack 										= "OPTRE_Kitbag_cbr_Exp";
		engineer 										= 1;
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class OPTRE_UNSC_Army_S_UAV_Op: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "UAV Operator";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		backpack 										= "B_UAV_01_backpack_F";
		uavHacker 										= 1;
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};														
	class OPTRE_UNSC_Army_S_Unarmed: OPTRE_UNSC_Army_Rifleman_SNO
	{
		scope											= 2;
		displayName										= "Unarmed";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class OPTRE_UNSC_Army_S_Officer: OPTRE_UNSC_Army_Pilot_SNO
	{
		scope											= 2;
		displayName										= "Officer";
		vehicleClass									= "OPTRE_UNSC_Man_Army_S_class";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_SNO","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_SNO","H_MilCap_mcamo","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
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
	
	
	class OPTRE_NVG: NVGoggles
	{
		author											= "Article 2 Studios";
		displayName										= "[UNSC] Neural Implant Vision Enhancement";
		modelOptics 									= "";
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
	
	class OPTRE_UNSC_Army_BDU_Base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope											= 0;
		author											= "Article 2 Studios";
		displayName										= "-";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Soldier_Base";
			containerClass								= "Supply50";
			mass										= 40; //The weight and storage capacity of the uniform
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_Pilot_BDU_WDL: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		displayName										= "[UNSC] Pilot Coveralls [Woodland]";
		class ItemInfo: ItemInfo
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Pilot_WDL";
			containerClass								= "Supply30";
			mass										= 25;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_L_WDL: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		displayName										= "[UNSC] Army BDU (Light/Woodland)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Rifleman_L_WDL";
			containerClass								= "Supply30";
			mass										= 30;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_WDL: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		displayName										= "[UNSC] Army BDU (Medium/Woodland)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Rifleman_WDL";
			containerClass								= "Supply40";
			mass										= 35;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_H_WDL: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		displayName										= "[UNSC] Army BDU (Heavy/Woodland)";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Rifleman_H_WDL";
			containerClass								= "Supply50";
			mass										= 40;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_Pilot_BDU_DES: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		displayName										= "[UNSC] Pilot Coveralls [Desert]";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Pilot_DES";
			containerClass								= "Supply30";
			mass										= 25;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_L_DES: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des.paa";
		displayName										= "[UNSC] Army BDU (Light/Desert)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Rifleman_L_DES";
			containerClass								= "Supply30";
			mass										= 30;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_DES: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des_hvy.paa";
		displayName										= "[UNSC] Army BDU (Medium/Desert)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Rifleman_DES";
			containerClass								= "Supply40";
			mass										= 35;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_H_DES: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des_hvy.paa";
		displayName										= "[UNSC] Army BDU (Heavy/Desert)";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Army_Rifleman_H_DES";
			containerClass									= "Supply50";
			mass											= 40;
			modelSides[] 									= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_Medic: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_med.paa";
		displayName										= "[UNSC] Medic BDU";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Army_Medic";
			containerClass									= "Supply50";
			mass											= 40;
			modelSides[] 									= {6};
		};
	};
	// snow
	class OPTRE_UNSC_Army_Pilot_BDU_SNO: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_sno.paa";
		displayName										= "[UNSC] Pilot Coveralls [Snow]";
		class ItemInfo: ItemInfo
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Pilot_SNO";
			containerClass								= "Supply30";
			mass										= 25;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_L_SNO: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_sno.paa";
		displayName										= "[UNSC] Army BDU (Light/Snow)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Rifleman_L_SNO";
			containerClass								= "Supply30";
			mass										= 30;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_SNO: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_sno_hvy.paa";
		displayName										= "[UNSC] Army BDU (Medium/Snow)";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Rifleman_SNO";
			containerClass								= "Supply40";
			mass										= 35;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_BDU_H_SNO: OPTRE_UNSC_Army_BDU_Base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		displayName										= "[UNSC] Army BDU (Heavy/Snow)";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_sno_hvy.paa";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Rifleman_H_SNO";
			containerClass								= "Supply50";
			mass										= 40;
			modelSides[] 								= {6};
		};
	};
	
	// VESTS
	
	class OPTRE_UNSC_M52_Vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 											= 0; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName  									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture 										= ""; /// this icon fits the vest surprisingly well
		model   										= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor 										= 50; /// what protection does the vest provide
			containerClass 								= "Supply160";
			mass 										= 80;
			passThrough 								= 0; /// coef of damage passed to total damage
			modelSides[] 								= {6};
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack""attach_pouches"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52_Vest_WDL: OPTRE_UNSC_M52_Vest_base
	{	
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_wdl.paa";
		displayName  									= "[UNSC] M52 Body Armor (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52V_Vest_WDL: OPTRE_UNSC_M52_Vest_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_wdl_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52_Vest_DES: OPTRE_UNSC_M52_Vest_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_des.paa";
		displayName  									= "[UNSC] M52 Body Armor (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52_Vest_Medic: OPTRE_UNSC_M52_Vest_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_med.paa";
		displayName  									= "[UNSC] M52 Body Armor (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52V_Vest_SNO: OPTRE_UNSC_M52_Vest_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_sno_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Snow)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_M52_Vest_SNO: OPTRE_UNSC_M52_Vest_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_sno.paa";
		displayName  									= "[UNSC] M52 Body Armor (Snow)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52V_Vest_Medic: OPTRE_UNSC_M52_Vest_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_med_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52V_Vest_DES: OPTRE_UNSC_M52_Vest_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_des_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52_Vest2_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 											= 0; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName  									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture 										= ""; /// this icon fits the vest surprisingly well
		model   										= "\OPTRE_UNSC_Units\Army\vest2.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\vest2.p3d"; /// what model does the vest use
			armor 										= 50; /// what protection does the vest provide
			containerClass 								= "Supply160";
			mass 										= 80;
			passThrough 								= 0; /// coef of damage passed to total damage
			modelSides[] 								= {6};
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52_Vest2_WDL: OPTRE_UNSC_M52_Vest2_base
	{	
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_wdl_gil.paa";
		displayName  									= "[UNSC] M52 Body Armor (Woodland) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};	
	class OPTRE_UNSC_M52_Vest2b_WDL: OPTRE_UNSC_M52_Vest2_WDL
	{	
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_wdl_gil_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Woodland) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_M52_Vest2_DES: OPTRE_UNSC_M52_Vest2_base
	{	
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_des_gil.paa";
		displayName  									= "[UNSC] M52 Body Armor (Desert) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_neck","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		};
	};	
	class OPTRE_UNSC_M52_Vest2b_DES: OPTRE_UNSC_M52_Vest2_DES
	{	
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_vest_des_gil_vac.paa";
		displayName  									= "[UNSC] M52[V] Body Armor (Desert) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_pack"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","camo3","attach_knife","attach_pack"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		};
	};
	
	// HELMETS
	
	class OPTRE_UNSC_CH252_Helmet_Base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName    									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_wdl.paa";
		allowedFacewear[] 								={"G_Tactical_Clear","G_Tactical_Black","G_Bandanna_beast","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_tan","G_Combat"};
		model     										= "\OPTRE_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\OPTRE_UNSC_Units\Army\helmet.p3d"; /// what model does the vest use
			armor   									= 10; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   								= {6};
			passThrough   								= 0; /// coef of damage passed to total damage
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252_Helmet_WDL: OPTRE_UNSC_CH252_Helmet_Base
	{	
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_wdl.paa";
		displayName    									= "[UNSC] CH252 Helmet (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252V_Helmet_WDL: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_wdl_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Woodland)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252_Helmet_DES: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_des.paa";
		displayName    									= "[UNSC] CH252 Helmet (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252V_Helmet_DES: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_des_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Desert)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252_Helmet_Medic: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_med.paa";
		displayName    									= "[UNSC] CH252 Helmet (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252V_Helmet_Medic: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_med_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Medic)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252_Helmet_SNO: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_sno.paa";
		displayName    									= "[UNSC] CH252 Helmet (Snow)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252V_Helmet_SNO: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_sno_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Snow)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252_Helmet2_Base: H_HelmetB
	{	
		scope   										= 0; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName    									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= ""; /// this icon fits the vest surprisingly well
		allowedFacewear[] 								={"G_Tactical_Clear","G_Tactical_Black","G_Bandanna_beast","G_Bandanna_blk","G_Bandanna_khk","G_Bandanna_oli","G_Bandanna_tan","G_Combat"};
		model     										= "\OPTRE_UNSC_Units\Army\helmet2.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","camo3","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\OPTRE_UNSC_Units\Army\helmet2.p3d"; /// what model does the vest use
			armor   									= 10; /// what protection does the vest provide
			mass   										= 30;
			modelSides[]   								= {6};
			passThrough   								= 0; /// coef of damage passed to total damage
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","camo3","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_CH252_Helmet2_WDL: OPTRE_UNSC_CH252_Helmet2_Base
	{	
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_wdl_gil.paa";
		displayName    									= "[UNSC] CH252 Helmet (Woodland) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","camo3","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","camo3","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_CH252_Helmet2b_WDL: OPTRE_UNSC_CH252_Helmet2_WDL
	{	
		scope = 1;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_wdl_gil_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Woodland) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","camo3"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\ghillie_1_ca.paa"}; /// what texture is going to be used
		};
	};
	class OPTRE_UNSC_CH252_Helmet2_DES: OPTRE_UNSC_CH252_Helmet2_Base
	{	
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_des_gil.paa";
		displayName    									= "[UNSC] CH252 Helmet (Desert) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","camo3","attach_face"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","camo3","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		};
	};
		class OPTRE_UNSC_CH252_Helmet2b_DES: OPTRE_UNSC_CH252_Helmet2_DES
	{	
		scope = 1;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_helmet_des_gil_vac.paa";
		displayName    									= "[UNSC] CH252[V] Helmet (Desert) (Ghillie)"; /// how would the stuff be displayed in inventory and on ground
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","camo3"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","camo3"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_cam2_co.paa","OPTRE_UNSC_Units\Army\data\addons_cam2_ca.paa","OPTRE_UNSC_Units\Army\data\ghillie_3_ca.paa"}; /// what texture is going to be used
		};
	};
};