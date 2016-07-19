class CfgPatches
{
	class OPTRE_FC_Units_FORECON
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_FC_Core"};
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
	class OPTRE_FC_Marines_Soldier: OPTRE_UNSC_Soldier_Base
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		side 															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_FC_Marines_Uniform";
		model															= "\OPTRE_FC_Units\Marines\h3_uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_FC_Marines_Vest","OPTRE_FC_Marines_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_FC_Marines_Vest","OPTRE_FC_Marines_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","attach_nosleeves"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"optre_fc_units\marines\data\h3_uniform_co.paa"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 4;
			};
			class HitHands: HitHands
			{
				armor = 4;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
		editorSubcategory = "OPTRE_FC_EditorSubcategory_Marines";
	};
	class OPTRE_FC_Marines_Soldier_L: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_FC_Marines_Uniform_L";
		linkedItems[] 													= {"OPTRE_FC_Marines_Vest_L","OPTRE_FC_Marines_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_FC_Marines_Vest_L","OPTRE_FC_Marines_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","attach_kneepads","attach_sleeves"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"optre_fc_units\marines\data\h3_uniform_co.paa"};
	};	
	class OPTRE_FC_Marines_Soldier_WDL: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_FC_Marines_Uniform_WDL";
		hiddenSelections[] 												= {"camo1","attach_nosleeves"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"optre_fc_units\marines\data\h3_uniform_wdl_co.paa"};
	};
	class OPTRE_FC_Marines_Soldier_WDL_L: OPTRE_FC_Marines_Soldier_L
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_FC_Marines_Uniform_WDL_L";
		hiddenSelections[] 												= {"camo1","attach_kneepads","attach_sleeves"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"optre_fc_units\marines\data\h3_uniform_wdl_co.paa"};
	};
	class OPTRE_FC_Marines_Soldier_URB: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_FC_Marines_Uniform_URB";
		hiddenSelections[] 												= {"camo1","attach_nosleeves"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"optre_fc_units\marines\data\h3_uniform_urb_co.paa"};
	};
	class OPTRE_FC_Marines_Soldier_URB_L: OPTRE_FC_Marines_Soldier_L
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_FC_Marines_Uniform_URB_L";
		hiddenSelections[] 												= {"camo1","attach_kneepads","attach_sleeves"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"optre_fc_units\marines\data\h3_uniform_urb_co.paa"};
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_FC_Marines_Soldier_Radioman: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Radio Operator";
		backpack 														= "OPTRE_ANPRC_521_Black";
		weapons[] 														= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_FC_Marines_Soldier_Rifleman_AR: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (MA5)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_FC_Marines_Soldier_Rifleman_BR: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (BR55)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_FC_Marines_Soldier_Rifleman_AT: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (AT)";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_FC_Marines_Soldier_Rifleman_Light: OPTRE_FC_Marines_Soldier_L
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (Light)";
		linkedItems[] 													= {"OPTRE_FC_Marines_Vest","OPTRE_BoonieHat_FORECON","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"OPTRE_FC_Marines_Vest","OPTRE_BoonieHat_FORECON","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_FC_Marines_Soldier_AT_Specialist: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AT Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_FC_Marines_Soldier_AA_Specialist: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AA Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AA";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_FC_Marines_Soldier_Engineer: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Engineer";
		engineer 														= 1;
		backpack 														= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon 															= "iconManEngineer";
	};
	class OPTRE_FC_Marines_Soldier_Breacher: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Breacher";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_FC_Marines_Soldier_TeamLead: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Team Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_FC_Marines_Soldier_SquadLead: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Squad Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_FC_Marines_Soldier_Grenadier: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Grenadier";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_FC_Marines_Soldier_Autorifleman: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M73","Throw","Put"};
		magazines[] 													= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon				 											= "iconManMG";
	};
	class OPTRE_FC_Marines_Soldier_Assist_Autorifleman: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Assistant Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
	};
	class OPTRE_FC_Marines_Soldier_Marksman: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Designated Marksman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_FC_Marines_Soldier_Sniper: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Sniper";
		weapons[] 														= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_FC_Marines_Soldier_ForwardObserver: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Forward Observer";
		backpack 														= "B_Kitbag_rgr";
		Items[]															= {"OPTRE_Biofoam","Item_Laserdesignator"};
		RespawnItems[]													= {"OPTRE_Biofoam","Item_Laserdesignator"};
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_FC_Marines_Soldier_Crewman: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Crewman";
		weapons[] 														= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 													= {"OPTRE_FC_Marines_Vest","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 											= {"OPTRE_FC_Marines_Vest","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_FC_Marines_Soldier_Demolitions: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Demolitions Expert";
		engineer 														= 1;
		backpack														= "OPTRE_Kitbag_rgr_EXP";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon 															= "iconManExplosive";
	};
	class OPTRE_FC_Marines_Soldier_UAV_Op: OPTRE_FC_Marines_Soldier
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "UAV Operator";
		backpack 														= "B_UAV_01_backpack_F";
		uavHacker 														= 1;
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"OPTRE_FC_Marines_Vest","OPTRE_FC_Marines_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 											= {"OPTRE_FC_Marines_Vest","OPTRE_FC_Marines_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_FC_Marines_Soldier_Unarmed: OPTRE_FC_Marines_Soldier_L
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
	class H_MilCap_Blue;
	class H_Booniehat_khk;
	
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_FC_Marines_Uniform: U_B_CombatUniform_mcam
	{
		dlc = "OPTRE";
		scope															= 2;
		author															= "Article 2 Studios";
		displayName														= "[UNSC] '31 Marine BDU";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_uniform_hvy.paa";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel												= "-";
			uniformClass												= "OPTRE_FC_Marines_Soldier";
			containerClass												= "Supply40";
			mass														= 35;
			modelSides[] 												= {6};
		};
	};
	class OPTRE_FC_Marines_Uniform_L: OPTRE_FC_Marines_Uniform
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[UNSC] '31 Marine BDU (Light)";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_FC_Marines_Soldier_L";
			mass														= 30;
		};
	};
	class OPTRE_FC_Marines_Uniform_WDL: OPTRE_FC_Marines_Uniform
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[UNSC] '31 Marine BDU [Woodland]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_FC_Marines_Soldier_WDL";
		};
	};
	class OPTRE_FC_Marines_Uniform_WDL_L: OPTRE_FC_Marines_Uniform_L
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[UNSC] '31 Marine BDU (Light) [Woodland]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_FC_Marines_Soldier_WDL_L";
		};
	};
	class OPTRE_FC_Marines_Uniform_URB: OPTRE_FC_Marines_Uniform
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[UNSC] '31 Marine BDU [Urban]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_FC_Marines_Soldier_URB";
		};
	};
	class OPTRE_FC_Marines_Uniform_URB_L: OPTRE_FC_Marines_Uniform_L
	{
		dlc = "OPTRE";
		author															= "Article 2 Studios";
		displayName														= "[UNSC] '31 Marine BDU (Light) [Urban]";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_FC_Marines_Soldier_URB_L";
		};
	};
	// UNIFORMS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// VESTS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_FC_Marines_Vest_Base: V_PlateCarrier1_rgr
	{
		dlc = "OPTRE";	
		scope 															= 0;
		author															= "Article 2 Studios";
		displayName  													= "-";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_vest.paa";
		model   														= "\OPTRE_FC_Units\Marines\h3_vest.p3d";
		hiddenSelections[] 												= {"attach_arms"};
		class ItemInfo: VestItem 
		{
			uniformModel 												= "\OPTRE_FC_Units\Marines\h3_vest.p3d";
			//armor 													= 40;
			containerClass 												= "Supply160";
			mass 														= 65;
			passThrough 												= 0.15;
			modelSides[] 												= {6};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 28;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 28;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 28;
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_FC_Marines_Vest: OPTRE_FC_Marines_Vest_Base
	{
		dlc = "OPTRE";	
		scope 															= 2;
		author															= "Article 2 Studios";
		displayName  													= "[UNSC] M55 Body Armor";
		hiddenSelections[] 												= {};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   										= {};
		};
	};
	class OPTRE_FC_Marines_Vest_L: OPTRE_FC_Marines_Vest
	{
		dlc = "OPTRE";	
		author															= "Article 2 Studios";
		displayName  													= "[UNSC] M55 Body Armor (Light)";
		hiddenSelections[] 												= {"attach_arms"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] 											= {"attach_arms"};
		};
	};
	// VESTS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_FC_Marines_Helmet_Base: H_HelmetB
	{	
		dlc = "OPTRE";
		scope   										= 0;
		author											= "Article 2 Studios";
		displayName    									= "-";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_helmet.paa";
		model     										= "\OPTRE_FC_Units\Marines\h3_helmet.p3d";
		hiddenSelections[]   							= {"camo","attach_visor"};
		hiddenSelectionsTextures[]   					= {"optre_fc_units\marines\data\h3_helmet_co.paa"};
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\OPTRE_FC_Units\Marines\h3_helmet.p3d";
			//armor   									= 8;
			mass   										= 30;
			modelSides[]   								= {6};
			passThrough   								= 0.15;
			hiddenSelections[]   						= {"camo","attach_visor"};
			hiddenSelectionsTextures[]   				= {"optre_fc_units\marines\data\h3_helmet_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	class OPTRE_FC_Marines_Helmet: OPTRE_FC_Marines_Helmet_Base
	{	
		dlc = "OPTRE";
		scope   										= 2;
		author											= "Article 2 Studios";
		displayName    									= "[UNSC] CH255 Helmet";
		hiddenSelections[]   							= {"camo","attach_visor"};
		hiddenSelectionsTextures[]   					= {"optre_fc_units\marines\data\h3_helmet_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo","attach_visor"};
			hiddenSelectionsTextures[]   				= {"optre_fc_units\marines\data\h3_helmet_co.paa"};
		};
	};
	class OPTRE_FC_Marines_Helmet_Visor: OPTRE_FC_Marines_Helmet_Base
	{	
		dlc = "OPTRE";
		scope   										= 2;
		author											= "Article 2 Studios";
		displayName    									= "[UNSC] CH255 Helmet (Visor)";
		hiddenSelections[]   							= {"camo"};
		hiddenSelectionsTextures[]   					= {"optre_fc_units\marines\data\h3_helmet_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo"};
			hiddenSelectionsTextures[]   				= {"optre_fc_units\marines\data\h3_helmet_co.paa"};
		};
	};
	class OPTRE_FC_Marines_Helmet_Medic: OPTRE_FC_Marines_Helmet_Base
	{	
		dlc = "OPTRE";
		scope   										= 2;
		author											= "Article 2 Studios";
		displayName    									= "[UNSC] CH255 Helmet [Medic]";
		hiddenSelections[]   							= {"camo","attach_visor"};
		hiddenSelectionsTextures[]   					= {"optre_fc_units\marines\data\h3_helmet_med_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo","attach_visor"};
			hiddenSelectionsTextures[]   				= {"optre_fc_units\marines\data\h3_helmet_med_co.paa"};
		};
	};
	class OPTRE_FC_Marines_Helmet_Visor_Medic: OPTRE_FC_Marines_Helmet_Base
	{	
		dlc = "OPTRE";
		scope   										= 2;
		author											= "Article 2 Studios";
		displayName    									= "[UNSC] CH255 Helmet (Visor) [Medic]";
		hiddenSelections[]   							= {"camo"};
		hiddenSelectionsTextures[]   					= {"optre_fc_units\marines\data\h3_helmet_med_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo"};
			hiddenSelectionsTextures[]   				= {"optre_fc_units\marines\data\h3_helmet_med_co.paa"};
		};
	};
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};