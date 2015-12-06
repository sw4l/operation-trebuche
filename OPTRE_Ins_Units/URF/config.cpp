enum {
     //  = 2,    // Error parsing: Empty enum name
    DESTRUCTENGINE = 2,
    DESTRUCTDEFAULT = 6,
    DESTRUCTWRECK = 7,
    DESTRUCTTREE = 3,
    DESTRUCTTENT = 4,
    STABILIZEDINAXISX = 1,
    STABILIZEDINAXESXYZ = 4,
    STABILIZEDINAXISY = 2,
    STABILIZEDINAXESBOTH = 3,
    DESTRUCTNO = 0,
    STABILIZEDINAXESNONE = 0,
    DESTRUCTMAN = 5,
    DESTRUCTBUILDING = 1,
};

class CfgPatches
{
    class OPTRE_Ins_Units_URF
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_characters_f_bootcamp","A3_Characters_F_Beta","A3_Characters_F_EPC","A3_Characters_F","A3_Characters_F_Gamma","A3_Characters_F_Civil","OPTRE_Core","OPTRE_UNSC_Units","OPTRE_Weapons"};
    };
};
  
class CfgVehicles
{
    class B_Soldier_base_F; 
	class I_Soldier_base_F;
	class O_Soldier_base_F;
	class I_G_Soldier_AR_F;
	class I_G_Soldier_LAT_F;
	class I_officer_F;
	class B_RangeMaster_F;
	class C_man_hunter_1_F;	
	class I_G_Soldier_M_F;
	 
	 class OPTRE_Ins_URF_soldierCmbtUni_OD_base: I_Soldier_base_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 1;
        faction                             = "OPTRE_Ins";
        author                              = "Article 2 Studios";
        displayName                         = "Rifleman";
        vehicleClass                  	    = "OPTRE_Ins_Man_URF_class";
        uniformClass                  	    = "OPTRE_Ins_URF_uniform_combatuni_OD";
		identityTypes[] 												= {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO", "G_IRAN_default"}; //G_IRAN_Default removes those pesky wacky glasses.  Everything else here serves to keep the UNSC diverse.  
		genericNames 													= "NATOMen";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"OPTRE_Biofoam"};
        RespawnItems[]                      = {"OPTRE_Biofoam"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"OPTRE_UNSC_M52_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[]           	    = {"OPTRE_UNSC_M52_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack 							= "B_Kitbag_rgr";
		hiddenSelections[] 					= {"camo"};
		hiddenSelectionsTextures[] 			= {"OPTRE_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
	 };
	 
	 class OPTRE_Ins_URF_officer_base: I_Soldier_base_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 1;
        faction                             = "OPTRE_Ins";
        author                              = "Article 2 Studios";
        displayName                         = "Officer";
        vehicleClass                  	    = "OPTRE_Ins_Man_URF_class";
        uniformClass                  	    = "OPTRE_Ins_URF_uniform_officer";
        model 								= "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"OPTRE_Biofoam"};
        RespawnItems[]                      = {"OPTRE_Biofoam"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"OPTRE_UNSC_M52_Vest_WDL","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
        respawnLinkedItems[]           	    = {"OPTRE_UNSC_M52_Vest_WDL","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack                            = "";
		hiddenSelections[] 					= {"camo1","camo2"};
		hiddenSelectionsTextures[] 			= {"OPTRE_Ins_Units\Data\inne_OfficerUniformOD_co.paa",""};
	 };
	 
	 
	 
	 
	 //CLASSES WITH WEAPONS
	
	
	class OPTRE_Ins_URF_Medic: OPTRE_Ins_URF_soldierCmbtUni_OD_base //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Medic";
		attendant 										= 1;
		cost 											= 300000;
		icon 											= "iconManMedic";
		backpack 										= "OPTRE_ILCS_Rucksack_Medical";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag"};
	};
	class OPTRE_Ins_URF_Radioman: OPTRE_Ins_URF_soldierCmbtUni_OD_base //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		backpack 										= "OPTRE_ANPRC_521_Green";
		weapons[] 										= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","Throw","Put"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
	};
	class OPTRE_Ins_URF_Pilot: OPTRE_Ins_URF_officer_base
	{
		scope															= 2;
		author															= "Article 2 Studios";
		displayName														= "Pilot";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
	};
	class OPTRE_Ins_URF_Rifleman_AR: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
	};
	class OPTRE_Ins_URF_Rifleman_BR: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
	};
	class OPTRE_Ins_URF_Rifleman_AT: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		backpack 										= "OPTRE_kitbag_rgr_AT";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_URF_Rifleman_Light: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		linkedItems[] 									= {"OPTRE_v_Ins_GAvest","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 							= {"OPTRE_v_Ins_GAvest","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
	};
	class OPTRE_Ins_URF_AT_Specialist: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "AT Specialist";
		
		backpack 										= "OPTRE_kitbag_rgr_AT";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_URF_AA_Specialist: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "AA Specialist";
		
		backpack 										= "OPTRE_kitbag_rgr_AA";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_URF_Engineer: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		
		backpack 										= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 										= {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class OPTRE_Ins_URF_Breacher: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Breacher";
		
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_Ins_URF_TeamLead: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_60rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_60rnd_762x51_Mag_Tracer","OPTRE_60rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
		icon = "iconManLeader";
	};
	class OPTRE_Ins_URF_SquadLead: OPTRE_Ins_URF_officer_base
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
		icon = "iconManLeader";
	};
	class OPTRE_Ins_URF_Grenadier: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_Ins_URF_Autorifleman: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Autorifleman";
		
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M73","Throw","Put"};
		magazines[] 									= {"OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		icon = "iconManMG";
	};
	class OPTRE_Ins_URF_Assist_Autorifleman: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag"};
		respawnMagazines[] 								= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag"};
	};
	class OPTRE_Ins_URF_Marksman: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_Ins_URF_Sniper: OPTRE_Ins_URF_soldierCmbtUni_OD_base //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		
		weapons[] 										= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
	};
	class OPTRE_Ins_URF_Observer: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_rgr";
		
		Items[]											= {"OPTRE_Biofoam","Item_Laserdesignator"};
		RespawnItems[]									= {"OPTRE_Biofoam","Item_Laserdesignator"};
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_Ins_URF_Crewman: OPTRE_Ins_URF_officer_base
	{
		displayName										= "Crewman";
		weapons[] 										= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 									= {"OPTRE_Ins_URF_Vest_vacuum","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_Ins_URF_Vest_vacuum","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 									= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[]	 							= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
	};
	class OPTRE_Ins_URF_Demolitions: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Demolitions";
		
		engineer 										= 1;
		backpack										= "OPTRE_Kitbag_rgr_Exp";
		weapons[] 										= {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class OPTRE_Ins_URF_UAV_Op: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "UAV Operator";
		
		backpack 										= "O_UAV_01_backpack_F";
		uavHacker 										= 1;
		weapons[] 										= {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_m45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_green"};
		linkedItems[] 									= {"OPTRE_v_Ins_GAvest","OPTRE_h_Ins_beret_od","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG","O_UavTerminal"};
		respawnLinkedItems[] 							= {"OPTRE_v_Ins_GAvest","OPTRE_h_Ins_beret_od","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG","O_UavTerminal"};
	};
	class OPTRE_Ins_URF_Unarmed: OPTRE_Ins_URF_officer_base
	{
		scope											= 2;
		displayName										= "Unarmed";
		
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class OPTRE_Ins_URF_Officer: OPTRE_Ins_URF_officer_base
	{
		scope											= 2;
		displayName										= "Officer";
		
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_orange","OPTRE_M2_Smoke_green"};
		icon = "iconManOfficer";
	};
};

class cfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class Uniform_Base;	
	class UniformItem;
	class Vest_Base;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class Vest_Camo_Base;
		
	// UNIFORMS
	
	class OPTRE_Ins_URF_uniform_combatuni_OD: Uniform_Base
	{
		scope 								= 2;
		displayName 						= "[INS] Combat Fatigues (OD)";
		author								= "Article 2 Studios";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "OPTRE_Ins_URF_soldierCmbtUni_OD_base";
            containerClass 					= "Supply60";
            mass 							= 30;
			modelSides[] 					= {6};
        };
	};
	
	
	class OPTRE_Ins_URF_uniform_officer: Uniform_Base
	{
		scope 								= 2;
		displayName 						= "[INS] Officer Fatigues [Ins]";
		author								= "Article 2 Studios";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CombatUniform_rucamo_ca.paa";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "OPTRE_Ins_URF_officer_base";
            containerClass 					= "Supply30";
            mass 							= 15;
			modelSides[] 					= {6};
        };
	};
	
	// HELMETS AND HEADGEAR
	
	class OPTRE_h_Ins_beret_od: ItemCore
    {
        scope 								= 2;
		weaponPoolAvailable 				= 1;
        displayName 						= "[INS] Beret (OD)"; //In-Game name
        model 								= "\A3\Characters_F\Common\headgear_beret01";
		picture = "\A3\characters_f\Data\UI\icon_H_Beret_blk_CA.paa";
        hiddenSelections[] 					= {"camo"};
        hiddenSelectionsTextures[] 			= {"OPTRE_Ins_Units\data\innie_h_beret_od_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass 							= 40; 
            uniformModel					= "\A3\Characters_F\Common\headgear_beret01";
			hiddenSelections[] 				= {"camo"};
			hiddenSelectionsTextures[] 		= {"OPTRE_Ins_Units\data\innie_h_beret_od_co.paa"};
            modelSides[] 					= {6};
        };
	};
	class OPTRE_h_helmet_OD: ItemCore
    {
        scope = 2;
		weaponPoolAvailable = 1;
        displayName = "[INS] Helmet (OD)"; //In-Game name
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
		picture = "\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_canvas_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\inne_MICHOD_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 30;
            uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\inne_MICHOD_co.paa"};
            modelSides[] = {6};
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
	
	
	//VESTS
		
	class OPTRE_v_Ins_vest: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[INS] Bulletproof Vest"; //In-Game name
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01";
		picture = "\OPTRE_Ins_Units\data\icon_innie_vest_press_od_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\innie_vest_od1_co.paa"}; //Vest texture path
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01";
			containerClass = "Supply120"; //Carry Amount
			mass = 30; // Weight
			//armor = 20;
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
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
	class OPTRE_v_Ins_GAvest: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[INS] Plate Carrier"; //In-Game name
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\innie_cmbtvest_od1_co.paa"}; //Vest texture path
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply160"; //Carry Amount
			mass = 50; // Weight
			//armor = 40;
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
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
	
};