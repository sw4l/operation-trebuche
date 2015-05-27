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
        displayName																				= "Naval Crewman [Yellow]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Yellow";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_YELLOW_co.paa"};
    };
	class OPTRE_UNSC_Navy_Soldier_Orange: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Orange]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Orange";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_ORANGE_co.paa"};
    };
	class OPTRE_UNSC_Navy_Soldier_Red: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Red]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Orange";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_ORANGE_co.paa"};
    };
	class OPTRE_UNSC_Navy_Soldier_Gray: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Crewman [Gray]";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Gray";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_GRAY_co.paa"};
    };
	class OPTRE_UNSC_Navy_Soldier_White: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Officer";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_White";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_WHITE_co.paa"};
    };
	class OPTRE_UNSC_Navy_Soldier_Olive: OPTRE_UNSC_Navy_Soldier 
	{
        scope 																					= 2;
		author																					= "Article 2 Studios";
        displayName																				= "Naval Pilot";
        uniformClass 																			= "OPTRE_UNSC_Navy_Uniform_Olive";
        hiddenSelections[] 																		= {"Camo"};
        hiddenSelectionsTextures[] 																= {"OPTRE_UNSC_Units\Navy\data\coveralls_OLIVE_co.paa"};
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
	// UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};
class cfgWeapons
{
	class UniformItem;
	class HeadgearItem;
	class H_MilCap_Blue;
	class H_Cap_oli;
	class U_B_HeliPilotCoveralls;
	
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
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};