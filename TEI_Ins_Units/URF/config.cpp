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
    class TEI_Ins_Units_URF
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_characters_f_bootcamp","A3_Characters_F_Beta","A3_Characters_F_EPC","A3_Characters_F","A3_Characters_F_Gamma","A3_Characters_F_Civil","TEI_Core","TEI_UNSC_Units","TEI_Weapons"};
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
	
	/*class TEI_: I_Soldier_base_F //WORKING SOLIDER USE FOR REFERENCE IF NEED BE BECAUSE YOU SUCK AT THIS APPARENTLY SPACENAVY
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 2;
        faction                             = "";
        author                              = "";
        displayName                         = "";
        vehicleClass                  	    = "";
        uniformClass                  	    = "";
	//identityTypes[] = {"LanguageGRE_F","Head_Greek","G_HAF_default"};
	//faceType = "Man_A3";
        model                               = "";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"TEI_Biofoam"};
        RespawnItems[]                      = {"TEI_Biofoam"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[]           	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack                            = "";
		hiddenSelections[] 					= {"camo"};
		hiddenSelectionsTextures[] 			= {""};
	 };*/
	 
	 class TEI_Ins_URF_Boarder_base: I_Soldier_base_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 1;
        faction                             = "TEI_Ins";
        author                              = "Eridanus Insurrection Team";
        displayName                         = "-";
        vehicleClass                  	    = "TEI_Ins_Man_URF_class";
        uniformClass                  	    = "TEI_Ins_URF_uniform_boarder";
        model                               = "\A3\Characters_F\Common\coveralls.p3d";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"TEI_Biofoam"};
        RespawnItems[]                      = {"TEI_Biofoam"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[]           	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack                            = "";
		hiddenSelections[] 					= {"camo"};
		hiddenSelectionsTextures[] 			= {"TEI_Ins_Units\Data\inne_BoardingUniformBlue3_co.paa"};
	 };
	 
	 class TEI_Ins_URF_soldierCmbtUni_OD_base: I_Soldier_base_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 1;
        faction                             = "TEI_Ins";
        author                              = "Eridanus Insurrection Team";
        displayName                         = "Rifleman";
        vehicleClass                  	    = "TEI_Ins_Man_URF_class";
        uniformClass                  	    = "TEI_Ins_URF_uniform_combatuni_OD";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"TEI_Biofoam"};
        RespawnItems[]                      = {"TEI_Biofoam"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[]           	    = {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack 							= "B_Kitbag_rgr";
		hiddenSelections[] 					= {"camo"};
		hiddenSelectionsTextures[] 			= {"TEI_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
	 };
	 
	 class TEI_Ins_URF_officer_base: I_Soldier_base_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 1;
        faction                             = "TEI_Ins";
        author                              = "Eridanus Insurrection Team";
        displayName                         = "Officer";
        vehicleClass                  	    = "TEI_Ins_Man_URF_class";
        uniformClass                  	    = "TEI_Ins_URF_uniform_officer";
        model 								= "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"TEI_Biofoam"};
        RespawnItems[]                      = {"TEI_Biofoam"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"TEI_v_Ins_vest","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[]           	    = {"TEI_v_Ins_vest","H_Beret_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack                            = "";
		hiddenSelections[] 					= {"camo1","camo2"};
		hiddenSelectionsTextures[] 			= {"TEI_Ins_Units\Data\inne_OfficerUniformOD_co.paa",""};
	 };
	 
	 
	 
	 
	 //CLASSES WITH WEAPONS
	 
	 
	class TEI_Ins_URF_Boarder: TEI_Ins_URF_Boarder_base //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Boarder";
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	
	
	class TEI_Ins_URF_Medic: TEI_Ins_URF_soldierCmbtUni_OD_base //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Medic";
		attendant 										= 1;
		cost 											= 300000;
		icon 											= "iconManMedic";
		backpack 										= "TEI_ILCS_Rucksack_Medical1";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_Ins_URF_Radioman: TEI_Ins_URF_soldierCmbtUni_OD_base //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		backpack 										= "TEI_Como_pack_1";
		weapons[] 										= {"TEI_M7","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7","Throw","Put"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	};
	class TEI_Ins_URF_Pilot: TEI_Ins_URF_officer_base
	{
		scope															= 2;
		author															= "Eridanus Insurrection Team";
		displayName														= "Pilot";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
	};
	class TEI_Ins_URF_Rifleman_AR: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Rifleman (MA5)";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_Ins_URF_Rifleman_BR: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Rifleman (BR55)";
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_Ins_URF_Rifleman_AT: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Rifleman (AT)";
		backpack 										= "TEI_Kitbag_rgr_Rockets";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT","TEI_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_Ins_URF_Rifleman_Light: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Rifleman (Light)";
		linkedItems[] 									= {"TEI_v_Ins_GAvest","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_Ins_URF_AT_Specialist: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "AT Specialist";
		
		backpack 										= "TEI_Kitbag_rgr_Rockets";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G","TEI_M41_Twin_HEAT_G","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_Ins_URF_AA_Specialist: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "AA Specialist";
		
		backpack 										= "TEI_Kitbag_rgr_Rockets";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA","TEI_M41_Twin_HEAA","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA","TEI_M41_Twin_HEAA","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class TEI_Ins_URF_Engineer: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Engineer";
		engineer 										= 1;
		
		backpack 										= "TEI_Kitbag_rgr_Exp";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class TEI_Ins_URF_Breacher: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Breacher";
		
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
	};
	class TEI_Ins_URF_TeamLead: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Team Leader";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"TEI_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class TEI_Ins_URF_SquadLead: TEI_Ins_URF_officer_base
	{
		scope											= 2;
		displayName										= "Squad Leader";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_36Rnd_95x40_Mag_Tracer","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","SmokeShell","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class TEI_Ins_URF_Grenadier: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Grenadier";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"TEI_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class TEI_Ins_URF_Autorifleman: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Autorifleman";
		
		backpack 										= "B_Kitbag_rgr";
		weapons[] 										= {"LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] 								= {"LMG_Zafir_F","Throw","Put"};
		magazines[] 									= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class TEI_Ins_URF_Assist_Autorifleman: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Assistant Autorifleman";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
	};
	class TEI_Ins_URF_Marksman: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Designated Marksman";
		backpack 										= "B_Kitbag_rgr";
		
		weapons[] 										= {"srifle_EBR_MRCO_pointer_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_EBR_MRCO_pointer_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_Ins_URF_Sniper: TEI_Ins_URF_soldierCmbtUni_OD_base //change to sniper uniform
	{
		scope											= 2;
		displayName										= "Sniper";
		
		weapons[] 										= {"srifle_GM6_SOS_F","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class TEI_Ins_URF_Observer: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Observer";
		backpack 										= "B_Kitbag_rgr";
		
		Items[]											= {"TEI_Biofoam","Item_Laserdesignator"};
		RespawnItems[]									= {"TEI_Biofoam","Item_Laserdesignator"};
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class TEI_Ins_URF_Crewman: TEI_Ins_URF_officer_base
	{
		displayName										= "Crewman";
		weapons[] 										= {"TEI_M7","TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M7","TEI_M6G_SF","Throw","Put"};
		linkedItems[] 									= {"TEI_Ins_URF_Vest_vacuum","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnlinkedItems[] 							= {"TEI_Ins_URF_Vest_vacuum","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		magazines[] 									= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
	};
	class TEI_Ins_URF_Demolitions: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Demolitions";
		
		engineer 										= 1;
		backpack										= "TEI_Kitbag_rgr_Exp";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class TEI_Ins_URF_UAV_Op: TEI_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "UAV Operator";
		
		backpack 										= "B_UAV_01_backpack_F";
		uavHacker 										= 1;
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShellGreen"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_Ins_beret_od","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG","B_UavTerminal"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_Ins_beret_od","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG","B_UavTerminal"};
	};
	class TEI_Ins_URF_Unarmed: TEI_Ins_URF_officer_base
	{
		scope											= 2;
		displayName										= "Unarmed";
		
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class TEI_Ins_URF_Officer: TEI_Ins_URF_officer_base
	{
		scope											= 2;
		displayName										= "Officer";
		
		linkedItems[] 									= {"TEI_Ins_URF_Vest","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"TEI_Ins_URF_Vest","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[]	 							= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManOfficer";
	};
	class TEI_Ins_URF_Col_Watts: TEI_Ins_URF_officer_base //make black and give military cap
	{
		scope											= 1;
		displayName										= "Col. Robert Watts";
		identityTypes[] 								= {"TEI_Col_Watts"};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","TEI_Biofoam","TEI_NVG"};
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		icon = "iconManLeader";
	};
};





class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class Default;
		class Col_Watts: Default
		{
			name = "Col_Watts";
			displayname = "Robert Watts";
			//identityTypes[] = {"",""};
			//head = "";
		};
	};
};
class CfgIdentities
{
	class TEI_Col_Watts
	{
		name = "Robert Watts";
		glasses = "None";
		speaker = "Male01ENG";
		//face="AfricanHead_03";
		pitch=0.94971651;
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
	
	/*class TEI_: Uniform_Base //WORKING UNIFORM USE FOR REFERENCE IF NEED BE BECAUSE YOU SUCK AT THIS APPARENTLY SPACENAVY
	{
		scope 								= 2;
		displayName 						= "";
		author								= "Eridanus Insurrection Team";
		picture 							= "";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		//hiddenSelections[]	   		    = {"-"};
		//hiddenSelectionsTextures[] 		= {""};
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "";
            containerClass 					= "Supply30";
            mass 							= 30;
        };
	};*/
	
	class TEI_Ins_URF_uniform_boarder: Uniform_Base
	{
		scope 								= 2;
		displayName 						= "[INS] Boarding Coveralls";
		author								= "Eridanus Insurrection Team";
		picture = "\A3\characters_f_kart\data\ui\icon_u_driver_02_ca.paa";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "TEI_Ins_URF_Boarder_base";
            containerClass 					= "Supply30";
            mass 							= 30;
			modelSides[] 					= {6};
        };
	};
	
	class TEI_Ins_URF_uniform_combatuni_OD: Uniform_Base
	{
		scope 								= 2;
		displayName 						= "[INS] Combat Fatigues (OD)";
		author								= "Eridanus Insurrection Team";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "TEI_Ins_URF_soldierCmbtUni_OD_base";
            containerClass 					= "Supply30";
            mass 							= 30;
			modelSides[] 					= {6};
        };
	};
	
	
	class TEI_Ins_URF_uniform_officer: Uniform_Base
	{
		scope 								= 2;
		displayName 						= "[INS] Officer Fatigues [Ins]";
		author								= "Eridanus Insurrection Team";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CombatUniform_rucamo_ca.paa";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "TEI_Ins_URF_officer_base";
            containerClass 					= "Supply30";
            mass 							= 30;
			modelSides[] 					= {6};
        };
	};
	
	// HELMETS AND HEADGEAR
    
	/*class TEI_: ItemCore
    {
        scope 								= 2;
		weaponPoolAvailable 				= 1;
        displayName 						= ""; //In-Game name
        model								= "";
        hiddenSelections[] 					= {"camo"};
        hiddenSelectionsTextures[] 			= {""}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass 							= 40; 
            uniformModel					= "";
			hiddenSelections[] 				= {"camo"};
			hiddenSelectionsTextures[] 		= {""};
            modelSides[] 					= {6};
        };
	};*/
	
	class TEI_h_Ins_beret_od: ItemCore
    {
        scope 								= 2;
		weaponPoolAvailable 				= 1;
        displayName 						= "[INS] Beret (OD)"; //In-Game name
        model 								= "\A3\Characters_F\Common\headgear_beret01";
		picture = "\A3\characters_f\Data\UI\icon_H_Beret_blk_CA.paa";
        hiddenSelections[] 					= {"camo"};
        hiddenSelectionsTextures[] 			= {"TEI_Ins_Units\data\innie_h_beret_od_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass 							= 40; 
            uniformModel					= "\A3\Characters_F\Common\headgear_beret01";
			hiddenSelections[] 				= {"camo"};
			hiddenSelectionsTextures[] 		= {"TEI_Ins_Units\data\innie_h_beret_od_co.paa"};
            modelSides[] 					= {6};
        };
	};
	
	
	//VESTS
		
	class TEI_v_Ins_vest: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[INS] Bulletproof Vest"; //In-Game name
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01";
		picture = "\TEI_Ins_Units\data\icon_innie_vest_press_od_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_vest_od1_co.paa"}; //Vest texture path
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01";
			containerClass = "Supply160"; //Carry Amount
			mass = 30; // Weight
			armor = "30";
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
		};
	};
	class TEI_v_Ins_GAvest: Vest_Camo_Base
	{
		scope = 2;
		displayName = "[INS] Plate Carrier"; //In-Game name
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_cmbtvest_od1_co.paa"}; //Vest texture path
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply160"; //Carry Amount
			mass = 50; // Weight
			armor = "30";
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
		};
	};
	
};