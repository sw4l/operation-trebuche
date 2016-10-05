#define true    1
#define false    0

enum {
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
	
	class OPTRE_UNSC_Structure_CityObjects
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_structures_f","OPTRE_Core"};
    };
};

class CfgVehicles
{
	class House_F;
	
	class holo_frigate: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Misc\holo\final_dawn_0.001.p3d";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Frigate (Holo)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	class holo_longsword: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Misc\holo\longsword_0.001.p3d";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Longsword (Holo)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	class holo_pelican: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Misc\holo\pelican_0.001.p3d";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pelican (Holo)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	class holo_data_chip: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Misc\holo\data_chip_holo.p3d";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Data Chip (Holo)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	class AI_Ball: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Misc\holo\AI_ball.p3d";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="AI Ball";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
		class Holo_eridanus: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Misc\holo\Holo_eridanus.p3d";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Eridanus Star System (Holo)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
};

	
class CfgWeapons
{
	class FirstAidKit;
	class InventoryFirstAidKitItem_Base_F;
	class Medikit;
	class MedikitItem;

	class OPTRE_Datachip: FirstAidKit
	{
		dlc = "OPTRE";
		scope 										= 2;
		scopeArsenal 								= 2;
		displayName 								= "[UNSC] AI Data Chip";
		picture 									= "\OPTRE_Misc\holo\Icons\datachip.paa";
		model 										= "\OPTRE_Misc\holo\data_chip.p3d";
		descriptionShort 							= "Data Crystal Chip which can store any type of Data.";
		weaponInfoType 								= "RscWeaponZeroing";
		class ItemInfo: MedikitItem
		{
			mass=1;
		};
	};
};

