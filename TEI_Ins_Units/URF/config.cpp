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
        Items[]                             = {"FirstAidKit"};
        RespawnItems[]                      = {"FirstAidKit"};
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
	 
	 class TEI_Ins_URF_Boarder: I_Soldier_base_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 0;
        faction                             = "TEI_Ins";
        author                              = "Eridanus Insurrection Team";
        displayName                         = "Boarder";
        vehicleClass                  	    = "TEI_Ins_Man_URF_class";
        uniformClass                  	    = "TEI_Ins_URF_uniform_boarder";
        model                               = "\A3\Characters_F\Common\coveralls.p3d";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"FirstAidKit"};
        RespawnItems[]                      = {"FirstAidKit"};
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
	 
	 class TEI_Ins_URF_soldierCmbtUni_OD: I_Soldier_base_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 0;
        faction                             = "TEI_Ins";
        author                              = "Eridanus Insurrection Team";
        displayName                         = "Rifleman";
        vehicleClass                  	    = "TEI_Ins_Man_URF_class";
        uniformClass                  	    = "TEI_Ins_URF_uniform_combatuni_OD";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"FirstAidKit"};
        RespawnItems[]                      = {"FirstAidKit"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[]           	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack                            = "";
		hiddenSelections[] 					= {"camo"};
		hiddenSelectionsTextures[] 			= {"TEI_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
	 };
	 
	 class TEI_Ins_URF_officer: I_Soldier_base_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 0;
        faction                             = "TEI_Ins";
        author                              = "Eridanus Insurrection Team";
        displayName                         = "Officer";
        vehicleClass                  	    = "TEI_Ins_Man_URF_class";
        uniformClass                  	    = "TEI_Ins_URF_uniform_officer";
        model 								= "\A3\characters_F_gamma\Guerrilla\ig_leader.p3d";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"FirstAidKit"};
        RespawnItems[]                      = {"FirstAidKit"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[]           	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack                            = "";
		hiddenSelections[] 					= {"camo1","camo2"};
		hiddenSelectionsTextures[] 			= {"TEI_Ins_Units\Data\inne_OfficerUniformOD_co.paa",""};
	 };
	 
	 
	 /// boarder classes 
	 
	class TEI_Ins_URF_Boarder_AR: TEI_Ins_URF_Boarder //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Boarder (AR)";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		linkedItems[] 									= {"G_Bandanna_beast","H_Bandanna_blu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"G_Bandanna_beast","H_Bandanna_blu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_Boarder_BR: TEI_Ins_URF_Boarder //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Boarder (BR)";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		linkedItems[] 									= {"H_Cap_blu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"H_Cap_blu","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_Boarder_PS: TEI_Ins_URF_Boarder //Configures the unit part of the Units Uniform
	{
		scope 											= 2;
		displayName										= "Boarding Officer";
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		linkedItems[] 									= {"H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	
	//regular URF classes
	
	
	class TEI_Ins_URF_rifleman_AR: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		displayName										= "Rifleman (AR)";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_rifleman_BR: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		displayName										= "Rifleman (BR)";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_rifleman_AT: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		displayName										= "AT Specialist";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAT_G"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_rifleman_AA: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		displayName										= "AA Specialist";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put","TEI_M41_SSR"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_M41_Twin_HEAA"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
		class TEI_Ins_URF_Grenadier: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		displayName										= "Grenadier";
		weapons[] 										= {"TEI_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_Booniehat_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_Booniehat_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};		
	class TEI_Ins_URF_TeamLeader: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		displayName										= "Team Leader";
		weapons[] 										= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"TEI_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		respawnMagazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_Ins_beret_od","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_Ins_beret_od","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_Engineer: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		engineer 										= 1;
		displayName										= "Engineer";
		Items[]                            	 			= {"FirstAidKit","ToolKit"};
        RespawnItems[]                      			= {"FirstAidKit","ToolKit"};
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_Medic: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		attendant 										= 1;
		displayName										= "Medic";
		backpack 										= "TEI_ILCS_Rucksack_Medical";
		Items[]                            	 			= {"FirstAidKit","Medikit"};
        RespawnItems[]                      			= {"FirstAidKit","Medikit"};
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_Radioman: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		displayName										= "Radio Operator";
		backpack 										= "TEI_Como_pack_1";
		weapons[] 										= {"TEI_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"TEI_MA5B_AC","Throw","Put"};
		magazines[] 									= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		respawnMagazines[] 								= {"TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag"};
		linkedItems[] 									= {"TEI_v_Ins_GAvest","TEI_h_Booniehat_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_GAvest","TEI_h_Booniehat_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_Breacher: TEI_Ins_URF_soldierCmbtUni_OD
	{
		scope 											= 2;
		displayName										= "Breacher";
		weapons[] 										= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		respawnWeapons[] 								= {"TEI_M45_olive","Throw","Put","TEI_M6G_SF"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs","TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		linkedItems[] 									= {"G_Bandanna_beast","TEI_v_Ins_GAvest","TEI_h_Booniehat_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"G_Bandanna_beast","TEI_v_Ins_GAvest","TEI_h_Booniehat_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_Officer_P: TEI_Ins_URF_officer
	{
		scope 											= 2;
		displayName										= "Officer";
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		linkedItems[] 									= {"TEI_v_Ins_vest","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_vest","TEI_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class TEI_Ins_URF_Pilot_P: TEI_Ins_URF_officer
	{
		scope 											= 2;
		displayName										= "Pilot";
		weapons[] 										= {"TEI_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"TEI_M6G_SF","Throw","Put"};
		magazines[] 									= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		respawnMagazines[] 								= {"TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag","TEI_8Rnd_127x40_Mag"};
		linkedItems[] 									= {"TEI_v_Ins_vest","TEI_UNSC_CH252V_Helmet_WDL","ItemMap","G_Bandanna_oli","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"TEI_v_Ins_vest","TEI_UNSC_CH252V_Helmet_WDL","ItemMap","G_Bandanna_oli","ItemCompass","ItemWatch","ItemRadio"};
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
		displayName 						= "Boarding Coveralls";
		author								= "Eridanus Insurrection Team";
		//picture 							= "";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "TEI_Ins_URF_Boarder";
            containerClass 					= "Supply30";
            mass 							= 30;
			modelSides[] 					= {6};
        };
	};
	
	class TEI_Ins_URF_uniform_combatuni_OD: Uniform_Base
	{
		scope 								= 2;
		displayName 						= "Combat Fatigues (OD)";
		author								= "Eridanus Insurrection Team";
		//picture 							= "";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "TEI_Ins_URF_soldierCmbtUni_OD";
            containerClass 					= "Supply30";
            mass 							= 30;
			modelSides[] 					= {6};
        };
	};
	
	
	class TEI_Ins_URF_uniform_officer: Uniform_Base
	{
		scope 								= 2;
		displayName 						= "Officer Fatigues [Ins]";
		author								= "Eridanus Insurrection Team";
		//picture 							= "";
		model								= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo : UniformItem 
		{
            uniformModel 					= "-";
            uniformClass 					= "TEI_Ins_URF_officer";
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
        displayName 						= "Beret (OD)"; //In-Game name
        model 								= "\A3\Characters_F\Common\headgear_beret01";
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
		picture = ""; //Menu Picture
		displayName = "Vest (OD)"; //In-Game name
		model = "\A3\Characters_F_EPC\Civil\equip_press_vest_01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_vest_od1_co.paa"}; //Vest texture path
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_EPC\Civil\equip_press_vest_01";
			containerClass = "Supply160"; //Carry Amount
			mass = 50; // Weight
			armor = "5*1.4";
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
		};
	};
	class TEI_v_Ins_GAvest: Vest_Camo_Base
	{
		scope = 2;
		picture = ""; //Menu Picture
		displayName = "Insurrectionist Vest"; //In-Game name
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_cmbtvest_od1_co.paa"}; //Vest texture path
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			containerClass = "Supply160"; //Carry Amount
			mass = 50; // Weight
			armor = "5*1.4";
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
		};
	};
	
};