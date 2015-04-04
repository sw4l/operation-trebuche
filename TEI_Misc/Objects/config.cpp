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
	class TEI_Ins_Object_class
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core","TEI_Weapons","TEI_UNSC_Units","TEI_Ins_Units"};
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
	
	
	class TEI_odst_grave: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "ODST Grave";
		model = "\TEI_Misc\Objects\odst_grave.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_soldier_grave: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Soldier Grave";
		model = "\TEI_Misc\Objects\soldier_grave.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_monument: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Monument";
		model = "\TEI_Misc\Objects\monument.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_kiosk_1: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Kiosk 1";
		model = "\TEI_Misc\Objects\kiosk_1.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1","camo2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"TEI_Misc\Objects\data\kiosk1_poster.paa"};
	};
	class TEI_kiosk_2: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Kiosk 2";
		model = "\TEI_Misc\Objects\kiosk_2.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1","camo2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"TEI_Misc\Objects\data\kiosk2_poster.paa"};
	};
	class TEI_kiosk_3: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Kiosk 3";
		model = "\TEI_Misc\Objects\kiosk_3.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"TEI_Misc\Objects\data\kiosk3_poster.paa"};
	};
	class TEI_holotable: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Holo Table";
		model = "\TEI_Misc\Objects\holotable.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"map_stratis"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {};
		
	};
};

class CfgGlasses 
{ 
    class G_Balaclava_blk; 
    class TEI_Cigarette: G_Balaclava_blk 
    { 
        displayName = "Cigarette"; 
        model = "\TEI_Misc\Objects\cigarette.p3d";
		picture   										= "\TEI_misc\objects\icons\cigarette.paa";
    }; 
    class TEI_Cigar: TEI_Cigarette
    { 
        displayName = "Cigar"; 
        model = "\TEI_Misc\Objects\cigar.p3d";
		picture   										= "\TEI_misc\objects\icons\cigar.paa";
    }; 
};  