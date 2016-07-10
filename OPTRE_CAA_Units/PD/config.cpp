class CfgPatches
{
	class OPTRE_CAA_Units_PD
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgVehicles
{
	class Land;
	class Man: Land
	{
		class EventHandlers;
	};
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierWB: CAManBase
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
	};
	class OPTRE_UNSC_Soldier_Base: SoldierWB
	{
		class HitPoints: HitPoints
		{
			class HitFace: HitFace {};
			class HitNeck: HitNeck {};
			class HitPelvis : HitPelvis
			{
				armor = 1;
				passThrough = 0.5;
			};
			class HitAbdomen: HitAbdomen {};
			class HitDiaphragm: HitDiaphragm {};
			class HitChest: HitChest {};
			class HitArms: HitArms
			{
				armor = 1;
				passThrough = 0.5;
			};
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody {};
			class HitHands: HitHands
			{
				armor = 1;
			};
			class HitLegs: HitLegs
			{
				armor = 1;
				passThrough = 0.5;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_Medic;
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_PD_Soldier: OPTRE_UNSC_Soldier_Base
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
		faction															= "OPTRE_PD";
		author															= "Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_PD_Man_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_PD_Uniform";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		identityTypes[] 												= {"LanguageENG_F","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO", "G_IRAN_default"}; //G_IRAN_Default removes those pesky wacky glasses.  Everything else here serves to keep the UNSC diverse.  
		genericNames 													= "NATOMen";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit","FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit","FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"V_TacVest_blk_POLICE","H_Cap_police","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"V_TacVest_blk_POLICE","H_Cap_police","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
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
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_leftknee","attach_rightknee","attach_leftthigh","attach_rightthigh","attach_leftshin","attach_rightshin","attach_pant2","attach_shirt1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_CAA_Units\PD\data\uniform_pd_co.paa",""};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 3;
			};
			class HitHands: HitHands
			{
				armor = 3;
			};
			class HitLegs: HitLegs
			{
				armor = 3;
			};
		};
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_PD_Soldier_Officer: OPTRE_PD_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Officer";
		weapons[] 														= {"OPTRE_M6C","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6C","Throw","Put"};
		magazines[] 													= {"Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
		respawnMagazines[] 												= {"Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag"};
	};
	class OPTRE_PD_Soldier_Officer2: OPTRE_PD_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Patrol Officer (Shotgun)";
		weapons[] 														= {"OPTRE_M45","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M45","OPTRE_M6C","Throw","Put"};
		magazines[] 													= {"Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_PD_Soldier_Officer3: OPTRE_PD_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Patrol Officer (SMG)";
		weapons[] 														= {"OPTRE_M7","OPTRE_M6C","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","OPTRE_M6C","Throw","Put"};
		magazines[] 													= {"Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
		respawnMagazines[] 												= {"Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_blue","Chemlight_red","Chemlight_red","Chemlight_red","Chemlight_red","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
	};
	class OPTRE_PD_Soldier_Pilot: OPTRE_PD_Soldier_Officer3
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Pilot";
		linkedItems[] 													= {"V_TacVest_blk_POLICE","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		respawnLinkedItems[] 											= {"V_TacVest_blk_POLICE","H_PilotHelmetHeli_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
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
	class OPTRE_PD_Uniform: U_B_CombatUniform_mcam
	{
		dlc = "OPTRE";
		scope															= 2;
		author															= "Article 2 Studios";
		displayName														= "[PD] Police Uniform";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel												= "-";
			uniformClass												= "OPTRE_PD_Soldier";
			containerClass												= "Supply40";
			mass														= 50;
			modelSides[] 												= {6};
		};
	};
	// UNIFORMS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};