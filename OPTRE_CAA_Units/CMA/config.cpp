class CfgPatches
{
	class OPTRE_UNSC_Units_Marines
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class OPTRE_UNSC_Army_Soldier_Medic;
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_CMA_Soldier_WDL: CAManBase
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		side 															= 2;
		portrait 														= "";
		picture 														= "";
		icon 															= "iconMan";
		accuracy 														= 2.3;
		sensitivity 													= 3;
		threat[] 														= {1,0.1,0.1};
		camouflage 														= 1.4;
		minFireTime 													= 7;
		cost 															= 100000;
		canCarryBackPack 												= 1;
		oxygenCapacity 													= 80;
		class EventHandlers;
		faction															= "OPTRE_CAA";
		author															= "Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_CMA_Man_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_CMA_Uniform_WDL";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		identityTypes[] 												= {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO", "G_IRAN_default"}; //G_IRAN_Default removes those pesky wacky glasses.  Everything else here serves to keep the UNSC diverse.  
		genericNames 													= "NATOMen";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"V_TacVestIR_blk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		respawnLinkedItems[] 											= {"V_TacVestIR_blk","H_HelmetB_light","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_INDEP"};
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",	

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"					
			};
		};
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_leftthigh","attach_rightthigh","attach_leftshin","attach_rightshin","attach_pant2","attach_shirt2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_CAA_Units\CMA\data\uniform_cma_wdl_co.paa",""};
		class HitPoints: HitPoints
		{
			class HitFace: HitHead
			{
				armor               = 1; // Keep constant so that the hit point armor remains on the same scale
				material            = -1;
				name                = "face_hub"; // Selection name
				passThrough         = 0.1; // Damage resistance
				radius              = 0.08;
				explosionShielding  = 0.1; // Protection against explosive damage
				minimalHit          = 0.01; // Minimal damage value that can be applied
			};
			class HitNeck: HitFace
			{
				armor               = 1;
				material            = -1;
				name                = "neck";
				passThrough         = 0.1;
				radius              = 0.1;
				explosionShielding  = 0.5;
				minimalHit          = 0.01;
			};
			class HitHead: HitNeck
			{
				armor               = 1;
				material            = -1;
				name                = "head";
				passThrough         = 0.1;
				radius              = 0.2;
				explosionShielding  = 0.5;
				minimalHit          = 0.01;
				depends             = "HitFace max HitNeck"; // Returns the greater of HitFace and HitNeck.
			};
			class HitPelvis: HitBody
			{
				armor               = 1;
				material            = -1;
				name                = "pelvis";
				passThrough         = 0.1;
				radius              = 0.2;
				explosionShielding  = 1;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor               = 1;
				material            = -1;
				name                = "spine1";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 1;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor               = 1;
				material            = -1;
				name                = "spine2";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 6;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor               = 1;
				material            = -1;
				name                = "spine3";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 6;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitBody: HitChest
			{
				armor               = 1000; //not supposed to take damage directly
				material            = -1;
				name                = "body";
				passThrough         = 0.1;
				radius              = 0.16;
				explosionShielding  = 6;
				visual              = "injury_body";
				minimalHit          = 0.01;
				depends             = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitHands
			{
				armor               = 1;
				material            = -1;
				name                = "arms";
				passThrough         = 0.85;
				radius              = 0.1;
				explosionShielding  = 1;
				visual              = "injury_hands";
				minimalHit          = 0.01;
			};
			class HitHands: HitArms
			{
				armor               = 1;
				material            = -1;
				name                = "hands";
				passThrough         = 0.85;
				radius              = 0.1;
				explosionShielding  = 1;
				visual              = "injury_hands";
				minimalHit          = 0.01;
				depends             = "HitArms";
			};
			class HitLegs: HitLegs
			{
				armor               = 1;
				material            = -1;
				name                = "legs";
				passThrough         = 0.7;
				radius              = 0.12;
				explosionShielding  = 1;
				visual              = "injury_legs";
				minimalHit          = 0.01;
			};
		};
		armor= 2;//keep constant so that the hit point armor remains on the same scale
		armorStructural= 0.4;// [*] must be adjusted for each model to achieve consistent total damage results
		explosionShielding = 0.04;// [*] for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold = 0.001;//minimalHit for total damage
		impactDamageMultiplier= 0.5;//multiplier for falling damage
	};
	class OPTRE_CMA_Soldier_WDL_L: OPTRE_CMA_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_CMA_Uniform_WDL_L";
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_leftthigh","attach_rightthigh","attach_leftshin","attach_rightshin","attach_pant2","attach_shirt1"};
		linkedItems[] 													= {"V_TacVestIR_blk","OPTRE_PatrolCap_CMA_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 											= {"V_TacVestIR_blk","OPTRE_PatrolCap_CMA_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class OPTRE_CMA_Soldier_DES: OPTRE_CMA_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_CMA_Uniform_DES";
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_leftthigh","attach_rightthigh","attach_leftshin","attach_rightshin","attach_pant2","attach_shirt2"};
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_desert_co.paa","OPTRE_CAA_Units\CMA\data\uniform_cma_des_co.paa",""};
		linkedItems[] 													= {"V_TacVestIR_blk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 											= {"V_TacVestIR_blk","H_HelmetB_light_sand","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class OPTRE_CMA_Soldier_DES_L: OPTRE_CMA_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_CMA_Uniform_DES_L";
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_leftthigh","attach_rightthigh","attach_leftshin","attach_rightshin","attach_pant2","attach_shirt1"};
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_desert_co.paa","OPTRE_CAA_Units\CMA\data\uniform_cma_des_co.paa",""};
		linkedItems[] 													= {"V_TacVestIR_blk","OPTRE_PatrolCap_CMA_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 											= {"V_TacVestIR_blk","OPTRE_PatrolCap_CMA_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	class OPTRE_CMA_Soldier_SNO: OPTRE_CMA_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_CMA_Uniform_SNO";
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_leftthigh","attach_rightthigh","attach_leftshin","attach_rightshin","attach_pant2","attach_shirt2"};
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_CAA_Units\CMA\data\uniform_cma_snow_co.paa",""};
		linkedItems[] 													= {"V_TacVestIR_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
		respawnLinkedItems[] 											= {"V_TacVestIR_blk","H_HelmetB_light_black","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
	};
	class OPTRE_CMA_Soldier_SNO_L: OPTRE_CMA_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_CMA_Uniform_SNO_L";
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_leftthigh","attach_rightthigh","attach_leftshin","attach_rightshin","attach_pant2","attach_shirt1"};
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_CAA_Units\CMA\data\uniform_cma_snow_co.paa",""};
		linkedItems[] 													= {"V_TacVestIR_blk","OPTRE_PatrolCap_CMA_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 											= {"V_TacVestIR_blk","OPTRE_PatrolCap_CMA_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_CMA_Soldier_Rifleman_WDL: OPTRE_CMA_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman";
		weapons[] 														= {"OPTRE_MA5B","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
	};
	class OPTRE_CMA_Soldier_Guard_WDL: OPTRE_CMA_Soldier_WDL_L
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Guard";
		weapons[] 														= {"OPTRE_M6G","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
	};
	class OPTRE_CMA_Soldier_Unarmed_WDL: OPTRE_CMA_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[] 														= {"Throw","Put"};
		respawnWeapons[] 												= {"Throw","Put"};
		magazines[] 													= {};
		respawnMagazines[] 												= {};
	};
	class OPTRE_CMA_Soldier_Rifleman_DES: OPTRE_CMA_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman";
		weapons[] 														= {"OPTRE_MA5B","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
	};
	class OPTRE_CMA_Soldier_Guard_DES: OPTRE_CMA_Soldier_DES_L
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Guard";
		weapons[] 														= {"OPTRE_M6G","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
	};
	class OPTRE_CMA_Soldier_Unarmed_DES: OPTRE_CMA_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[] 														= {"Throw","Put"};
		respawnWeapons[] 												= {"Throw","Put"};
		magazines[] 													= {};
		respawnMagazines[] 												= {};
	};
	class OPTRE_CMA_Soldier_Rifleman_SNO: OPTRE_CMA_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman";
		weapons[] 														= {"OPTRE_MA5B","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
	};
	class OPTRE_CMA_Soldier_Guard_SNO: OPTRE_CMA_Soldier_SNO_L
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Guard";
		weapons[] 														= {"OPTRE_M6G","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
	};
	class OPTRE_CMA_Soldier_Unarmed_SNO: OPTRE_CMA_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[] 														= {"Throw","Put"};
		respawnWeapons[] 												= {"Throw","Put"};
		magazines[] 													= {};
		respawnMagazines[] 												= {};
	};
	class OPTRE_CMA_Pilot: OPTRE_CMA_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Pilot";
		weapons[] 														= {"OPTRE_M6G","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"V_Chestrig_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 											= {"V_Chestrig_blk","H_CrewHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
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
	class H_MilCap_Blue;
	class H_Booniehat_khk;
	
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_CMA_Uniform_WDL: U_B_CombatUniform_mcam
	{
		dlc = "OPTRE";
		scope															= 2;
		author															= "Article 2 Studios";
		displayName														= "[CAA] CMA BDU [Woodland]";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel												= "-";
			uniformClass												= "OPTRE_CMA_Soldier_WDL";
			containerClass												= "Supply40";
			mass														= 50;
			modelSides[] 												= {6};
		};
	};
	class OPTRE_CMA_Uniform_WDL_L: OPTRE_CMA_Uniform_WDL
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[CAA] CMA BDU (Light) [Woodland]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_CMA_Soldier_WDL_L";
			mass														= 40;
		};
	};	
	class OPTRE_CMA_Uniform_DES: OPTRE_CMA_Uniform_WDL
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[CAA] CMA BDU [Desert]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_CMA_Soldier_DES";
		};
	};
	class OPTRE_CMA_Uniform_DES_L: OPTRE_CMA_Uniform_DES
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[CAA] CMA BDU (Light) [Desert]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_CMA_Soldier_DES_L";
			mass														= 40;
		};
	};
	class OPTRE_CMA_Uniform_SNO: OPTRE_CMA_Uniform_WDL
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[CAA] CMA BDU [Snow]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_CMA_Soldier_SNO";
		};
	};
	class OPTRE_CMA_Uniform_SNO_L: OPTRE_CMA_Uniform_SNO
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[CAA] CMA BDU (Light) [Snow]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_CMA_Soldier_SNO_L";
			mass														= 40;
		};
	};
	// UNIFORMS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	class OPTRE_PatrolCap_CMA_WDL: H_MilCap_blue 
	{
		dlc = "OPTRE";
		displayname 									= "[CAA] Patrol Cap [Woodland]";
		hiddenselectionstextures[] 						= {"OPTRE_CAA_Units\CMA\data\cappatrol_cma_wdl_co.paa"};
	};
	class OPTRE_PatrolCap_CMA_DES: H_MilCap_blue 
	{
		dlc = "OPTRE";
		displayname 									= "[CAA] Patrol Cap [Desert]";
		hiddenselectionstextures[] 						= {"OPTRE_CAA_Units\CMA\data\cappatrol_cma_des_co.paa"};
	};
	class OPTRE_PatrolCap_CMA_SNO: H_MilCap_blue 
	{
		dlc = "OPTRE";
		displayname 									= "[CAA] Patrol Cap [Snow]";
		hiddenselectionstextures[] 						= {"OPTRE_CAA_Units\CMA\data\cappatrol_cma_snow_co.paa"};
	};
	class OPTRE_BoonieHat_CMA_WDL: H_Booniehat_khk 
	{
		dlc = "OPTRE";
		displayname 									= "[CAA] Boonie Hat [Woodland]";
		hiddenselectionstextures[] 						= {"OPTRE_CAA_Units\CMA\data\booniehat_cma_wdl_co.paa"};
	};
	class OPTRE_BoonieHat_CMA_DES: OPTRE_BoonieHat_CMA_WDL 
	{
		dlc = "OPTRE";
		displayname 									= "[CAA] Boonie Hat [Desert]";
		hiddenselectionstextures[] 						= {"OPTRE_CAA_Units\CMA\data\booniehat_cma_des_co.paa"};
	};
	class OPTRE_BoonieHat_CMA_SNO: OPTRE_BoonieHat_CMA_WDL 
	{
		dlc = "OPTRE";
		displayname 									= "[CAA] Boonie Hat [Snow]";
		hiddenselectionstextures[] 						= {"OPTRE_CAA_Units\CMA\data\booniehat_cma_snow_co.paa"};
	};
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};