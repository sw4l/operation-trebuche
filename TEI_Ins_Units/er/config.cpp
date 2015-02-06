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
    class TEI_Ins_Units_ER
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_characters_f_bootcamp","A3_Characters_F_Beta","A3_Characters_F","A3_Characters_F_Gamma","A3_Characters_F_Civil","TEI_Core","TEI_UNSC_Units","TEI_Weapons"};
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
	
	// SOLDIERS
	
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
	
	class TEI_Ins_ER_soldier_base: I_Soldier_base_F //Unit Class name: Class getting info from
	{
		scope											= 0;
		faction											= "TEI_Ins";
		side 											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "Innie Base";
		vehicleClass									= "TEI_Ins_Man_ER_class";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"TEI_Biofoam"};
		RespawnItems[]									= {"TEI_Biofoam"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo"}; //Determines what hiddenselections are enabled
		//hiddenSelectionsTextures[] 						= {"TEI_Ins_Units\Data\innie_uniform_ _CO.paa"};
	};
	class TEI_Ins_ER_Rebel_tan: TEI_Ins_ER_soldier_base //Unit Class name: Class getting info from
	{
		scope											= 2;
		displayName										= "Rebel [Tan]";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		uniformClass									= "TEI_INS_ER_uniform_GAtan";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"TEI_Biofoam"};
		RespawnItems[]									= {"TEI_Biofoam"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_Ins_Units\Data\innie_apparel_tan_CO.paa"};
	};
		class TEI_Ins_ER_Rebel_green: TEI_Ins_ER_Rebel_tan
	{
		scope											= 2;
		displayName										= "Rebel [Green]";
		uniformClass									= "TEI_INS_ER_uniform_GAgreen";
		hiddenSelections[] 								= {"camo"};
		hiddenSelectionsTextures[] 						= {"TEI_Ins_Units\Data\innie_apparel_green_CO.paa"};
	};
	class TEI_Ins_ER_Terrorist_OD: TEI_Ins_ER_soldier_base
	{
		scope											= 2;
		faction											= "TEI_Ins";
		side 											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "Terrorist [OD]";
		vehicleClass									= "TEI_Ins_Man_ER_class";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		uniformClass									= "TEI_Ins_ER_uniform_GSod";
		model 											= "\A3\characters_F_gamma\Guerrilla\ig_guerrilla3_1.p3d";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"TEI_Biofoam"};
		RespawnItems[]									= {"TEI_Biofoam"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo"};
		hiddenSelectionsTextures[] 						= {"TEI_Ins_Units\Data\innie_smocks_od_co.paa"};
	};
	class TEI_Ins_ER_Terrorist_Brown: TEI_Ins_ER_Terrorist_OD
	{
		displayName										= "Terrorist [Brown]";
		uniformClass									= "TEI_Ins_ER_uniform_GSod";
		hiddenSelectionsTextures[] 						= {"TEI_Ins_Units\Data\innie_smocks_brown_co.paa"};
	};
	class TEI_Ins_ER_Insurgent_OD: I_G_Soldier_A_F
	 {
        modelSides[] 						= {0,1,2,3};
        side                 	            = 0;
        scope                               = 2;
        faction                             = "TEI_Ins";
        author                              = "Eridanus Insurrection Team";
        displayName                         = "Insurgent (OD)";
        vehicleClass                  	    = "TEI_Ins_Man_ER_class";
        uniformClass                  	    = "TEI_Ins_ER_uniform_GGod";
        model                               = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
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
		hiddenSelectionsTextures[] 			= {"TEI_Ins_Units\Data\innie_garments_od_co.paa","TEI_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
	 };
	 
	 class TEI_Ins_ER_Insurgent_Grey: TEI_Ins_ER_Insurgent_OD
	 {
		displayName                         = "Insurgent (Grey)";
		uniformClass                  	    = "TEI_Ins_ER_uniform_GGod";
		hiddenSelectionsTextures[] 			= {"TEI_Ins_Units\Data\innie_garments_grey_co.paa","TEI_Ins_Units\Data\inne_CombatUniformOD_co.paa"};
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
	
	/*class TEI_: Uniform_Base //WORKING UNIFORM USE FOR REFERENCE IF NEED BE BECAUSE YOU SUCK AT THIS APPARENTLY SPACENAVY
	{
		scope = 2;
		displayName 						= "";
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
	
	    class TEI_Ins_ER_uniform_GAtan: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "Insurrectionist Apparel (Tan)"; //In-Game name
		//picture 										= "";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "TEI_Ins_ER_Rebel_tan"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	    class TEI_Ins_ER_uniform_GAgreen: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "Insurrectionist Apparel (Green)"; //In-Game name
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "TEI_Ins_ER_Rebel_green"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	class TEI_Ins_ER_uniform_GGod: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "Insurrectionist Garments (OD)"; //In-Game name
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "TEI_Ins_ER_Insurgent_OD"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	class TEI_Ins_ER_uniform_GGgrey: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "Insurrectionist Garments (Grey)"; //In-Game name
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "TEI_Ins_ER_Insurgent_Grey"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	class TEI_Ins_ER_uniform_GSbrown: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "Insurrectionist Smocks (Brown)"; //In-Game name
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformClass 								= "TEI_Ins_ER_Terrorist_Brown"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	class TEI_Ins_ER_uniform_GSod: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "Insurrectionist Smocks (OD)"; //In-Game name
		//picture 										= "\A3\characters_f_gamma\Guerrilla\data\ui\icon_U_G_guerrilla3_1_ca.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
        {
            uniformClass 								= "TEI_Ins_ER_Terrorist_OD"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};

	
	
	// HELMETS AND HEADGEAR
    
	/*
	class TEI_: ItemCore
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
	};
	*/
	
    class TEI_h_Booniehat_Grey: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Booniehat (Grey)"; //In-Game name
       // picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa"; //Menu Picture
        model = "\a3\characters_f\Common\booniehat"; // Model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_boonie_grey_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 40; // Weight
            uniformModel = "\a3\characters_f\Common\booniehat";
            modelSides[] = {6};
            //armor = "3*0.6";
            //passThrough = 0.6;
            hiddenSelections[] = {"camo"};
        };
	};
	class TEI_h_Booniehat_Green: TEI_h_Booniehat_Grey
	{
		displayName = "Booniehat (Green)";
		hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_boonie_green_co.paa"};
	};
	class TEI_h_PatrolCap_Green: ItemCore
    {
        scope = 2;
		weaponPoolAvailable = 1;
        displayName = "Military Cap (Green)"; //In-Game name
        model = "\a3\characters_f\Common\cappatrol"; // Model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_patrolcap_green_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 40; 
            uniformModel = "\a3\characters_f\Common\cappatrol";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_patrolcap_green_co.paa"};
            modelSides[] = {6};
        };
	};
	class TEI_h_PatrolCap_Brown: TEI_h_PatrolCap_Green
	{
        displayName = "Military Cap (Brown)"; //In-Game name
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_patrolcap_Brown_co.paa"};
        class ItemInfo: HeadgearItem
        {
			uniformModel = "\a3\characters_f\Common\cappatrol";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\innie_patrolcap_Brown_co.paa"};
        };
	};
	class TEI_h_MICH_OD: ItemCore
    {
        scope = 2;
		weaponPoolAvailable = 1;
        displayName = "MICH (OD)"; //In-Game name
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\inne_MICHOD_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 40; 
            uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"TEI_Ins_Units\data\inne_MICHOD_co.paa"};
            modelSides[] = {6};
        };
	};
	class TEI_: ItemCore
    {
        scope = 2;
		weaponPoolAvailable = 1;
        displayName = ""; //In-Game name
        model = "";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {""}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 40; 
            uniformModel = "";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {""};
            modelSides[] = {6};
        };
	};
	
	
	//VESTS
	
	/*class V_PlateCarrier3_rgr;
	class ItemInfo;
	
		
	class TEST_Vest: V_PlateCarrier3_rgr
	{
		picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa"; //Menu Picture
		displayName = "Heavy Vest"; //In-Game name
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"TEST\Data\TEST_Vest_co.paa"}; //Vest texture path
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01"; //Vest model you are using
			containerClass = "Supply160"; //Carry Amount
			mass = 50; // Weight
			armor = "5*1.4";
			passThrough = 0.4;
			hiddenSelections[] = {"camo"};
		};
	};*/
};