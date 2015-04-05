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
    class OPTRE_Ins_Units_ER
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_characters_f_bootcamp","A3_Characters_F_Beta","A3_Characters_F","A3_Characters_F_Gamma","A3_Characters_F_Civil","OPTRE_Core","OPTRE_UNSC_Units","OPTRE_Weapons"};
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
	class I_G_Soldier_A_F;
	class OPTRE_Ins_URF_officer_base;
	class OPTRE_Ins_URF_soldierCmbtUni_OD_base;
	
	
	
	// SOLDIERS
	
	class OPTRE_Ins_ER_soldier_base: I_Soldier_base_F //Unit Class name: Class getting info from
	{
		scope											= 0;
		faction											= "OPTRE_Ins";
		side 											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "Innie Base";
		vehicleClass									= "OPTRE_Ins_Man_ER_class";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"OPTRE_Biofoam"};
		RespawnItems[]									= {"OPTRE_Biofoam"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		hiddenSelections[] 								= {"camo"}; //Determines what hiddenselections are enabled
		//hiddenSelectionsTextures[] 						= {"OPTRE_Ins_Units\Data\innie_uniform_ _CO.paa"};
	};
	class OPTRE_Ins_ER_Rebel_tan: OPTRE_Ins_ER_soldier_base //Unit Class name: Class getting info from
	{
		scope											= 1;
		displayName										= "Rebel [Tan]";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		uniformClass									= "OPTRE_INS_ER_uniform_GAtan";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"OPTRE_Biofoam"};
		RespawnItems[]									= {"OPTRE_Biofoam"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		hiddenSelections[] 								= {"camo"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"OPTRE_Ins_Units\Data\innie_apparel_tan_CO.paa"};
	};
		class OPTRE_Ins_ER_Rebel_green: OPTRE_Ins_ER_Rebel_tan
	{
		scope											= 1;
		displayName										= "Rebel [Green]";
		uniformClass									= "OPTRE_INS_ER_uniform_GAgreen";
		hiddenSelections[] 								= {"camo"};
		hiddenSelectionsTextures[] 						= {"OPTRE_Ins_Units\Data\innie_apparel_green_CO.paa"};
	};
	class OPTRE_Ins_ER_Terrorist_OD: OPTRE_Ins_ER_soldier_base
	{
		scope											= 1;
		faction											= "OPTRE_Ins";
		side 											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "Terrorist [OD]";
		vehicleClass									= "OPTRE_Ins_Man_ER_class";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		uniformClass									= "OPTRE_Ins_ER_uniform_GSod";
		model 											= "\A3\characters_F_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"OPTRE_Biofoam"};
		RespawnItems[]									= {"OPTRE_Biofoam"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		hiddenSelections[] 								= {"camo"};
		hiddenSelectionsTextures[] 						= {"OPTRE_Ins_Units\Data\innie_smocks_od_co.paa"};
	};
	class OPTRE_Ins_ER_Terrorist_Brown: OPTRE_Ins_ER_Terrorist_OD
	{
		scope = 1;
		displayName										= "Terrorist [Brown]";
		uniformClass									= "OPTRE_Ins_ER_uniform_GSod";
		hiddenSelectionsTextures[] 						= {"OPTRE_Ins_Units\Data\innie_smocks_brown_co.paa"};
	};
	class OPTRE_Ins_ER_Insurgent_OD: I_G_Soldier_A_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 1;
        faction                             = "OPTRE_Ins";
        author                              = "Eridanus Insurrection Team";
        displayName                         = "Insurgent (OD)";
        vehicleClass                  	    = "OPTRE_Ins_Man_ER_class";
        uniformClass                  	    = "OPTRE_Ins_ER_uniform_GGod";
        model                               = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
        weapons[]                           = {"Throw","Put"};
        respawnWeapons[]             	    = {"Throw","Put"};
        Items[]                             = {"OPTRE_Biofoam"};
        RespawnItems[]                      = {"OPTRE_Biofoam"};
        magazines[]                         = {};
        respawnMagazines[]                  = {};
        linkedItems[]                 	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        headgearProbability            	    = 0;
        allowedHeadgear[]                   = {};
        backpack                            = "";
		hiddenSelections[] 					= {"camo1","camo2"};
		hiddenSelectionsTextures[] 			= {"OPTRE_Ins_Units\Data\innie_garments_od_co.paa","OPTRE_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
	 };
	 class OPTRE_Ins_ER_Insurgent_Grey: OPTRE_Ins_ER_Insurgent_OD
	 {
		scope 								= 1;
		displayName                         = "Insurgent (Grey)";
		uniformClass                  	    = "OPTRE_Ins_ER_uniform_GGod";
		hiddenSelectionsTextures[] 			= {"OPTRE_Ins_Units\Data\innie_garments_grey_co.paa","OPTRE_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
	 };
	 class OPTRE_Ins_ER_Surgeon: OPTRE_Ins_URF_officer_base //Configures the unit part of the Units Uniform
	{
		
		scope 											= 2;
		attendant 										= 1;
		displayName										= "Surgeon";
		backpack 										= "OPTRE_ILCS_Rucksack_Medical1";
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		linkedItems[]                 	    = {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    = {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		//press vest + grey military cap
		
	};
	class OPTRE_Ins_ER_Guerilla_AR: OPTRE_Ins_ER_Insurgent_Grey
	{
		scope											= 2;
		displayName										= "Guerilla (MA5)";
		backpack 										= "B_AssaultPack_rgr";
		linkedItems[]                 	    = {"OPTRE_v_Ins_vest","OPTRE_h_Booniehat_Grey","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    = {"OPTRE_v_Ins_vest","OPTRE_h_Booniehat_Grey","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_Ins_ER_Insurgent_BR: OPTRE_Ins_ER_Insurgent_OD
	{
		scope											= 2;
		displayName										= "Insurgent (BR55)";
		backpack 										= "B_AssaultPack_rgr";
		linkedItems[]                 	    = {"OPTRE_v_Ins_vest","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    = {"OPTRE_v_Ins_vest","H_Booniehat_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] 										= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 									= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_Ins_ER_Rebel_AT: OPTRE_Ins_ER_Rebel_tan
	{
		scope											= 2;
		displayName										= "Rebel (AT)";
		backpack 										= "B_AssaultPack_khk"; //"OPTRE_Kitbag_rgr_Rockets"; //rockets inside?
		linkedItems[]                 	    = {"OPTRE_v_Ins_vest","OPTRE_h_Ins_beret_od","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    = {"OPTRE_v_Ins_vest","OPTRE_h_Ins_beret_od","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] 										= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 								= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManAT";
	};
	class OPTRE_Ins_ER_Farmer: OPTRE_Ins_ER_Terrorist_Brown
	{
		scope											= 2;
		displayName										= "Farmer (M45)";
		engineer 										= 1;
		backpack 										= "OPTRE_Kitbag_rgr_Exp"; //B_AssaultPack_khk
		linkedItems[]                 	    = {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    = {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon = "iconManEngineer";
	};
	class OPTRE_Ins_ER_MAdvisor: OPTRE_Ins_URF_soldierCmbtUni_OD_base
	{
		scope											= 2;
		displayName										= "Militia Advisor";
		backpack 										= "B_AssaultPack_rgr";
		linkedItems[] 									= {"OPTRE_v_Ins_GAvest","OPTRE_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 							= {"OPTRE_v_Ins_GAvest","OPTRE_h_MICH_OD","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","HandGrenade","SmokeShell","SmokeShellOrange","SmokeShellGreen"};
		icon = "iconManLeader";
	};
	class OPTRE_Ins_ER_Deserter_GL: OPTRE_Ins_ER_Terrorist_Brown
	{
		scope											= 2;
		displayName										= "Deserter (GL)";
		backpack 										= "B_AssaultPack_khk";
		linkedItems[]                 	    			= {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    			= {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] 										= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 									= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 								= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_Ins_ER_Militia_MG: OPTRE_Ins_ER_Rebel_tan
	{
		scope											= 2;
		displayName										= "Militia (MG)";
		//backpack										= assistance AR backpack with ammo inside //B_AssaultPack_khk
		linkedItems[]                 	    			= {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    			= {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		weapons[] 										= {"LMG_Zafir_F","Throw","Put"};
		respawnWeapons[] 								= {"LMG_Zafir_F","Throw","Put"};
		magazines[] 									= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","150Rnd_762x51_Box","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		icon = "iconManMG";
	};
	class OPTRE_Ins_ER_Assassin: OPTRE_Ins_ER_Insurgent_OD
	{
		scope											= 2;
		displayName										= "Assassin";
		linkedItems[] 									= {"H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 										= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"srifle_GM6_SOS_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 								= {"5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","5Rnd_127x108_APDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","SmokeShell","SmokeShellGreen"};
	};
	class OPTRE_Ins_ER_Terrorist: OPTRE_Ins_ER_Insurgent_Grey
	{
		scope											= 2;
		displayName										= "Terrorist";
		backpack 										= "OPTRE_Kitbag_rgr_Exp";
		linkedItems[]                 	    = {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[]           	    = {"OPTRE_v_Ins_vest","H_MilCap_gry","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		engineer 										= 1;
		weapons[] 										= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 								= {"OPTRE_M45_olive","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","HandGrenade","HandGrenade","SmokeShell","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon = "iconManExplosive";
	};
	class OPTRE_Ins_ER_Unarmed: OPTRE_Ins_ER_Rebel_tan
	{
		scope											= 2;
		displayName										= "Unarmed";
		weapons[] 										= {"Throw","Put"};
		respawnWeapons[] 								= {"Throw","Put"};
		magazines[] 									= {};
		respawnMagazines[] 								= {};
	};
	class OPTRE_Ins_ER_Warlord: OPTRE_Ins_URF_officer_base
	{
		scope											= 2;
		displayName										= "Warlord";
		linkedItems[] 									= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_h_PatrolCap_Green","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","OPTRE_Biofoam","OPTRE_NVG"};
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
	class Uniform_Base;	
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
		
	// UNIFORMS
	
	    class OPTRE_Ins_ER_uniform_GAtan: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "[INS] Insurrectionist Apparel (Tan)"; //In-Game name
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";									
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "OPTRE_Ins_ER_Rebel_tan"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	    class OPTRE_Ins_ER_uniform_GAgreen: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "[INS] Insurrectionist Apparel (Green)"; //In-Game name
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "OPTRE_Ins_ER_Rebel_green"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	class OPTRE_Ins_ER_uniform_GGod: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "[INS] Insurrectionist Garments (OD)"; //In-Game name
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla1_1_ca.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "OPTRE_Ins_ER_Insurgent_OD"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	class OPTRE_Ins_ER_uniform_GGgrey: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "[INS] Insurrectionist Garments (Grey)"; //In-Game name
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla1_1_ca.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "OPTRE_Ins_ER_Insurgent_Grey"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	class OPTRE_Ins_ER_uniform_GSbrown: Uniform_Base
    {
        scope 											= 1;
		author											= "Eridanus Insurrection Team";
        displayName 									= "[INS] Insurrectionist Smocks (Brown)"; //In-Game name
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformClass 								= "OPTRE_Ins_ER_Terrorist_Brown"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	class OPTRE_Ins_ER_uniform_GSod: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "[INS] Insurrectionist Smocks (OD)"; //In-Game name
		picture = "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
        {
            uniformClass 								= "OPTRE_Ins_ER_Terrorist_OD"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};

	
	
	// HELMETS AND HEADGEAR
	
    class OPTRE_h_Booniehat_Grey: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "[INS] Booniehat (Grey)"; //In-Game name
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
        model = "\a3\characters_f\Common\booniehat"; // Model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\innie_boonie_grey_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 5; // Weight
            uniformModel = "\a3\characters_f\Common\booniehat";
            modelSides[] = {6};
            hiddenSelections[] = {"camo"};
        };
	};
	class OPTRE_h_Booniehat_Green: OPTRE_h_Booniehat_Grey
	{
		scope = 1;
		displayName = "[INS] Booniehat (Green)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\innie_boonie_green_co.paa"};
	};
	class OPTRE_h_PatrolCap_Green: ItemCore
    {
        scope = 2;
		weaponPoolAvailable = 1;
        displayName = "[INS] Military Cap (Green)"; //In-Game name
        model = "\a3\characters_f\Common\cappatrol"; // Model
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\innie_patrolcap_green_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 5; 
            uniformModel = "\a3\characters_f\Common\cappatrol";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\innie_patrolcap_green_co.paa"};
            modelSides[] = {6};
        };
	};
	class OPTRE_h_PatrolCap_Brown: OPTRE_h_PatrolCap_Green
	{
        displayName = "[INS] Military Cap (Brown)"; //In-Game name
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\innie_patrolcap_Brown_co.paa"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_MilCap_gry_ca.paa";
        class ItemInfo: HeadgearItem
        {
			uniformModel = "\a3\characters_f\Common\cappatrol";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"OPTRE_Ins_Units\data\innie_patrolcap_Brown_co.paa"};
        };
	};
};