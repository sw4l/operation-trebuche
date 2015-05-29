class CfgPatches
{
	class OPTRE_Misc_Objects
	{
		units[]										= {"OPTRE_Objects_ODST_Grave","OPTRE_Objects_Soldier_Grave","OPTRE_Objects_Monument","OPTRE_Objects_Kiosk1","OPTRE_Objects_Kiosk2","OPTRE_Objects_Kiosk3","OPTRE_Objects_Holotable_Blank","OPTRE_Objects_Holotable_Altis","OPTRE_Objects_Holotable_Stratis"};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","OPTRE_Weapons","OPTRE_UNSC_Units","OPTRE_Ins_Units"};
	};
};

class CfgVehicles
{
	class Static;
	
	class OPTRE_Objects_Base: Static
	{
		scope = 0;
		scopeCurator = 0;
		vehicleClass = "OPTRE_UNSC_Object_class";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Objects_ODST_Grave: OPTRE_Objects_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "ODST Grave";
		model = "\OPTRE_Misc\Objects\odst_grave.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Objects_Soldier_Grave: OPTRE_Objects_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Soldier Grave";
		model = "\OPTRE_Misc\Objects\soldier_grave.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Objects_Monument: OPTRE_Objects_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Monument";
		model = "\OPTRE_Misc\Objects\monument.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Objects_Kiosk1: OPTRE_Objects_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Recruiting Kiosk 1";
		model = "\OPTRE_Misc\Objects\kiosk_1.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1","camo2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Misc\Objects\data\kiosk1_poster.paa"};
	};
	class OPTRE_Objects_Kiosk2: OPTRE_Objects_Kiosk1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Recruiting Kiosk 2";
		model = "\OPTRE_Misc\Objects\kiosk_2.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1","camo2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Misc\Objects\data\kiosk2_poster.paa"};
	};
	class OPTRE_Objects_Kiosk3: OPTRE_Objects_Kiosk1
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Recruiting Kiosk 3";
		model = "\OPTRE_Misc\Objects\kiosk_3.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"camo1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {"OPTRE_Misc\Objects\data\kiosk3_poster.paa"};
	};
	class OPTRE_Objects_Holotable_Blank: OPTRE_Objects_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Holo Table (Blank)";
		model = "\OPTRE_Misc\Objects\holotable.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"map_stratis","map_altis"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {};
	};
	class OPTRE_Objects_Holotable_Stratis: OPTRE_Objects_Holotable_Blank
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Holo Table (Stratis)";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"map_altis"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {};
	};
	class OPTRE_Objects_Holotable_Altis: OPTRE_Objects_Holotable_Blank
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Holo Table (Altis)";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		hiddenSelections[]= {"map_stratis"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {};
	};
};

class CfgGlasses 
{ 
    class G_Balaclava_blk; 
    class OPTRE_Glasses_Cigarette: G_Balaclava_blk 
    { 
        displayName = "Cigarette"; 
        model = "\OPTRE_Misc\Objects\cigarette.p3d";
		picture = "\OPTRE_misc\objects\icons\cigarette.paa";
    }; 
    class OPTRE_Glasses_Cigar: OPTRE_Glasses_Cigarette
    { 
        displayName = "Cigar"; 
        model = "\OPTRE_Misc\Objects\cigar.p3d";
		picture = "\OPTRE_misc\objects\icons\cigar.paa";
    }; 
};  