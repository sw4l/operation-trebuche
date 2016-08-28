class CfgPatches
{
	
	class OPTRE_UNSC_Structure_Misc
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
	class Items_base_F;
	
	class Land_KOTH_playset: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Misc\KOTH_playset";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="King of the Hill Playset";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_OPTRE_windmill_large: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Misc\OPTRE_windmill_large";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Large Windmill";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_OPTRE_windmill_small: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Misc\OPTRE_windmill_small";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Small Windmill";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
};
