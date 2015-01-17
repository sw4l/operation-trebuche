
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
        requiredAddons[] = {"A3_characters_f_bootcamp","A3_Characters_F","TEI_Core","TEI_UNSC_Units","TEI_Weapons"};
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
	
	// SOLDIERS
	
	class TEI_Ins_ER_Rebel_tan: I_Soldier_base_F //Unit Class name: Class getting info from
	{
		scope											= 2;
		faction											= "TEI_Ins";
		side 											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "Rebel [OD]";
		vehicleClass									= "TEI_Ins_Man_ER_class";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		uniformClass									= "TEI_INS_ER_uniform_tan";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]									= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_Ins_Units\ER\Data\innie_uniform_1_tan_CO.paa"};
	};
		class TEI_Ins_ER_Rebel_green: I_Soldier_base_F //Unit Class name: Class getting info from
	{
		scope											= 2;
		faction											= "TEI_Ins";
		side 											= 0;
		author											= "Eridanus Insurrection Team";
		displayName										= "Rebel [Green]";
		vehicleClass									= "TEI_Ins_Man_ER_class";
		uniformAccessories[]							= {};
		nakedUniform 									= "U_BasicBody";
		uniformClass									= "TEI_INS_ER_uniform_green";
		weapons[]										= {"Throw","Put"};
		respawnWeapons[]								= {"Throw","Put"};
		Items[]											= {"FirstAidKit"};
		RespawnItems[]									= {"FirstAidKit"};
		magazines[]										= {};
		respawnMagazines[]								= {};
		linkedItems[] 									= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 							= {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		hiddenSelections[] 								= {"camo"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 						= {"TEI_Ins_Units\ER\Data\innie_uniform_1_green_CO.paa"};
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
	
    class TEI_INS_ER_uniform_base: Uniform_Base
    {
        scope 											= 0;
		author											= "Eridanus Insurrection Team";
        displayName 									= "-"; //In-Game name
        picture 										= ""; //Menu Picture
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel 								= "-";
            uniformClass 								= "TEI_INS_ER_uniform_base"; //A Unit that wears it
            containerClass								= "Supply20"; //Carry Amount
            mass 										= 30; //Weight
			modelSides[] 								= {6};
        };
	};
	    class TEI_INS_ER_uniform_tan: Uniform_Base
    {
        scope 											= 2;
		author											= "Eridanus Insurrection Team";
        displayName 									= "Insurrectionist Apparel (OD)"; //In-Game name
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
	    class TEI_INS_ER_uniform_green: Uniform_Base
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
};
	
	
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
	};
};

    class ItemCore;
    class HeadgearItem;
    
    class TEST_Helmet: ItemCore
    {
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Combat Helmet"; //In-Game name
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa"; //Menu Picture
        model = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry"; // Model
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"TEST\data\TEST_Helmet_co.paa"}; // Path to your texture.
        class ItemInfo: HeadgearItem
        {
            mass = 40; // Weight
            uniformModel = "\A3\Characters_F_EPA\BLUFOR\headgear_b_helmet_kerry";
            modelSides[] = {3,1,2};
            armor = "3*0.6";
            passThrough = 0.6;
            hiddenSelections[] = {"camo"};
        };
	};
};
*/