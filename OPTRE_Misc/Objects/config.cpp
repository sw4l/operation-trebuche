enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches
{
	class OPTRE_Ins_Object_class
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","OPTRE_Weapons","OPTRE_UNSC_Units","OPTRE_Ins_Units"};
	};
};

class CfgVehicles
{
	class All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class TargetTraining: NonStrategic {};
	class TargetGrenade: TargetTraining {};
	
	
	class OPTRE_odst_grave: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "ODST Grave";
		model = "\OPTRE_Misc\Objects\odst_grave.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class OPTRE_soldier_grave: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Soldier Grave";
		model = "\OPTRE_Misc\Objects\soldier_grave.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class OPTRE_monument: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Monument";
		model = "\OPTRE_Misc\Objects\monument.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class OPTRE_kiosk_1: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Kiosk 1";
		model = "\OPTRE_Misc\Objects\kiosk_1.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1","camo2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Misc\Objects\data\kiosk1_poster.paa"};
	};
	class OPTRE_kiosk_2: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Kiosk 2";
		model = "\OPTRE_Misc\Objects\kiosk_2.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1","camo2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Misc\Objects\data\kiosk2_poster.paa"};
	};
	class OPTRE_kiosk_3: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Kiosk 3";
		model = "\OPTRE_Misc\Objects\kiosk_3.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Misc\Objects\data\kiosk3_poster.paa"};
	};
	class OPTRE_holotable: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Holo Table";
		model = "\OPTRE_Misc\Objects\holotable.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"map_stratis"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {};
		
	};
};

class CfgGlasses 
{ 
    class G_Balaclava_blk; 
    class OPTRE_Cigarette: G_Balaclava_blk 
    { 
        displayName = "Cigarette"; 
        model = "\OPTRE_Misc\Objects\cigarette.p3d";
		picture   										= "\OPTRE_misc\objects\icons\cigarette.paa";
    }; 
    class OPTRE_Cigar: OPTRE_Cigarette
    { 
        displayName = "Cigar"; 
        model = "\OPTRE_Misc\Objects\cigar.p3d";
		picture   										= "\OPTRE_misc\objects\icons\cigar.paa";
    }; 
};  