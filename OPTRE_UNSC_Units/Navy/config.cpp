class CfgPatches
{
	class OPTRE_UNSC_Units_Navy
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};
class CfgVehicles
{
	class B_Helipilot_F;
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Navy_Soldier : B_Helipilot_F 
	{
        scope 																					= 1;
		author																					= "Article 2 Studios";
        displayName																				= "-";
        uniformAccessories[] 																	= {};
        nakedUniform 																			= "U_BasicBody"; 
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform";
		faction 																				= "OPTRE_UNSC";
		vehicleClass 																			= "OPTRE_UNSC_Man_Navy_class";		
		weapons[]																				= {"OPTRE_M6G_SF","Throw","Put"};
		respawnweapons[]																		= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[]																				= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnmagazines[]																		= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		Items[]																					= {"OPTRE_Biofoam"};
		RespawnItems[]																			= {"OPTRE_Biofoam"};
		linkedItems[] 																			= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 																	= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_GRAY_co.paa"};
	};
	class OPTRE_UNSC_Navy_Soldier_Yellow: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Flight Deck]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Yellow";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_YELLOW_co.paa"};
		linkedItems[] 													= {"OPTRE_Helmet_NavyDeckCrew","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_Helmet_NavyDeckCrew","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    };
	class OPTRE_UNSC_Navy_Soldier_Orange: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		engineer 														= 1;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Engineering]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Orange";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_ORANGE_co.paa"};
		linkedItems[] 													= {"OPTRE_Cap_Finaldawn","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_Cap_Finaldawn","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    };
	class OPTRE_UNSC_Navy_Soldier_Red: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Security]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Red";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_RED_co.paa"};
		linkedItems[] 													= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    };
	class OPTRE_UNSC_Navy_Soldier_Blue: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Blue";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_BLUE_co.paa"};
		linkedItems[] 													= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    };
	class OPTRE_UNSC_Navy_Soldier_Gray: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Bridge]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Gray";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_GRAY_co.paa"};
    };
	class OPTRE_UNSC_Navy_Soldier_White: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		attendant 																				= 1;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Medical]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_White";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_WHITE_co.paa"};
		linkedItems[] 													= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    };
	class OPTRE_UNSC_Navy_Soldier_Olive: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Aviator";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Olive";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_OLIVE_co.paa"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_Vacuum","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_Vacuum","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    };
	class OPTRE_UNSC_ONI_Soldier_Naval: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "ONI Officer";
		vehicleClass																			= "OPTRE_UNSC_Man_ONI_class";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_ONI";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_ONI_co.paa"};
    };
	
	// UNARMED UNITS (for mission set pieces)
	
	class OPTRE_UNSC_Navy_Soldier_Yellow_unarmed: OPTRE_UNSC_Navy_Soldier_Yellow 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Flight Deck] (Unarmed)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Yellow";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_YELLOW_co.paa"};
		linkedItems[] 													= {"OPTRE_Helmet_NavyDeckCrew","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_Helmet_NavyDeckCrew","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
    };
	class OPTRE_UNSC_Navy_Soldier_Orange_Unarmed: OPTRE_UNSC_Navy_Soldier_Orange 
	{
        scope 																					= 2;
		engineer 														= 1;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Engineering] (Unarmed)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Orange";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_ORANGE_co.paa"};
		linkedItems[] 													= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
		
    };
	class OPTRE_UNSC_Navy_Soldier_Red_Unarmed: OPTRE_UNSC_Navy_Soldier_Red 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Security] (Unarmed)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Red";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_RED_co.paa"};
		linkedItems[] 													= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
    };
	class OPTRE_UNSC_Navy_Soldier_Blue_Unarmed: OPTRE_UNSC_Navy_Soldier_Blue 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman  (Unarmed)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Blue";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_BLUE_co.paa"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
    };
	class OPTRE_UNSC_Navy_Soldier_Gray_Unarmed: OPTRE_UNSC_Navy_Soldier_Gray 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Bridge] (Unarmed)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Gray";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_GRAY_co.paa"};
		linkedItems[] 													= {"OPTRE_Cap_Finaldawn","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 							= {"OPTRE_Cap_Finaldawn","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
	
    };
	class OPTRE_UNSC_Navy_Soldier_White_Unarmed: OPTRE_UNSC_Navy_Soldier_White 
	{
        scope 																					= 2;
		attendant 																				= 1;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Medical]  (Unarmed)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_White";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_WHITE_co.paa"};	
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
	
    };
	class OPTRE_UNSC_Navy_Soldier_Olive_Unarmed: OPTRE_UNSC_Navy_Soldier_Olive 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Aviator  (Unarmed)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Olive";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_OLIVE_co.paa"};
		linkedItems[] 													= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_PatrolCap_Navy","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
	
    };
	class OPTRE_UNSC_ONI_Soldier_Naval_Unarmed: OPTRE_UNSC_ONI_Soldier_Naval 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "ONI Officer";
		vehicleClass																			= "OPTRE_UNSC_Man_ONI_class";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_ONI";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_ONI_co.paa"};
			
		weapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnweapons[] = {"Throw","Put"};
		respawnmagazines[] = {};
	
    };

	
	// SPECIAL UNITS
	
	class OPTRE_UNSC_Navy_Soldier_Red_LT: OPTRE_UNSC_Navy_Soldier_Red 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Security] (Light)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Red";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_RED_co.paa"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    };
	class OPTRE_UNSC_Navy_Soldier_Red_HVY: OPTRE_UNSC_Navy_Soldier_Red 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Security] (Heavy)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Red";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_RED_co.paa"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Helmet","OPTRE_UNSC_Marine_Vest_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Helmet","OPTRE_UNSC_Marine_Vest_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		respawnweapons[] = {"OPTRE_MA5B_AC","Throw","Put"};
		respawnmagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
    };
	class OPTRE_UNSC_Navy_Soldier_Red_SMG: OPTRE_UNSC_Navy_Soldier_Red 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Security] (SMG)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Red";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_RED_co.paa"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"OPTRE_M7","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
		respawnweapons[] = {"OPTRE_M7","Throw","Put"};
		respawnmagazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
    };
	class OPTRE_UNSC_Navy_Soldier_Red_SG: OPTRE_UNSC_Navy_Soldier_Red 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Security] (Shotgun)";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Red";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_RED_co.paa"};
		linkedItems[] 													= {"OPTRE_PatrolCap_Navy","OPTRE_UNSC_Marine_Vest_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_PatrolCap_Navy","OPTRE_UNSC_Marine_Vest_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"OPTRE_M45","Throw","Put"};
		magazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnweapons[] = {"OPTRE_M45","Throw","Put"};
		respawnmagazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
    };
	class OPTRE_UNSC_Navy_Soldier_SCPO: OPTRE_UNSC_Navy_Soldier_Gray 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Senior Chief Petty Officer";
		icon = "iconManOfficer";	
		uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Gray";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_RED_co.paa"};
		linkedItems[] 													= {"OPTRE_Cap_FinalDawn","OPTRE_UNSC_Marine_Vest_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_Cap_FinalDawn","OPTRE_UNSC_Marine_Vest_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		weapons[] = {"OPTRE_M45","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M45","OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
    };

	// UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};
class cfgWeapons
{
	class UniformItem;
	class HeadgearItem;
	class H_MilCap_Blue;
	class H_Cap_oli;
	class H_HelmetCrew_B;
	class U_B_HeliPilotCoveralls;
	class Iteminfo;
	
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Navy_Uniform : U_B_HeliPilotCoveralls 
	{
		scope																					= 1;
		author																					= "Article 2 Studios";
		//picture   																			= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName																				= "-";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_Navy_Soldier";
		};
    };
	class OPTRE_UNSC_Navy_Uniform_Yellow : OPTRE_UNSC_Navy_Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Naval BDU [Yellow]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_Navy_Soldier_Yellow";
		};
    };
	class OPTRE_UNSC_Navy_Uniform_Orange : OPTRE_UNSC_Navy_Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Naval BDU [Orange]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_Navy_Soldier_Orange";
		};
    };
	class OPTRE_UNSC_Navy_Uniform_Red : OPTRE_UNSC_Navy_Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Naval BDU [Red]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_Navy_Soldier_Red";
		};
    };
	class OPTRE_UNSC_Navy_Uniform_Blue : OPTRE_UNSC_Navy_Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Naval BDU [Blue]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_Navy_Soldier_Blue";
		};
    };
	class OPTRE_UNSC_Navy_Uniform_Gray : OPTRE_UNSC_Navy_Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Naval BDU [Gray]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_Navy_Soldier_Gray";
		};
    };
	class OPTRE_UNSC_Navy_Uniform_Olive : OPTRE_UNSC_Navy_Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Naval BDU [Olive]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_Navy_Soldier_Olive";
		};
    };
	class OPTRE_UNSC_Navy_Uniform_White : OPTRE_UNSC_Navy_Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Naval BDU [White]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_Navy_Soldier_White";
		};
    };
	class OPTRE_UNSC_Navy_Uniform_ONI : OPTRE_UNSC_Navy_Uniform
	{
		scope																					= 2;
		author																					= "Article 2 Studios";
		displayName																				= "[UNSC] Naval BDU [ONI]";
		class ItemInfo: ItemInfo
		{
			uniformClass																		= "OPTRE_UNSC_ONI_Soldier_Naval";
		};
    };
	// UNIFORMS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// HELMETS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_PatrolCap_Navy: H_MilCap_blue 
	{
		displayname 																			= "[UNSC] Patrol Cap [Navy]";
		hiddenselectionstextures[] 																= {"OPTRE_UNSC_Units\Navy\data\patrolcap_Navy_co.paa"};
	};
	class OPTRE_Cap_FinalDawn: H_Cap_oli 
	{
		displayname 																			= "[UNSC] Cap [Final Dawn]";
		hiddenselectionstextures[] 																= {"OPTRE_UNSC_Units\Navy\data\cap_FinalDawn_co.paa"};
	};
	class OPTRE_Helmet_NavyDeckCrew: H_HelmetCrew_B {
		scope = 2;
		displayname = "[UNSC] Flight Deck Helmet [Navy]";
		hiddenselectionstextures[] = {"OPTRE_UNSC_Units\Navy\data\helmet_deckcrew_co.paa"};
	};
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};