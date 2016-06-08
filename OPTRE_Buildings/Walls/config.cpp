class CfgPatches
{
	
	class OPTRE_UNSC_Structure_Walls
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
	
	class Land_DistrictWall_45l: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Walls\DistrictWall_45l";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="District Wall (45 Angle Left)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_DistrictWall_45r: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Walls\DistrictWall_45r";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="District Wall (45 Angle Right)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_DistrictWall_Corner: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Walls\DistrictWall_Corner";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="District Wall (Corner)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_DistrictWall_Edge: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Walls\DistrictWall_Edge";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="District Wall (Edge)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_DistrictWall_Gateway: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Walls\DistrictWall_Gateway";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="District Wall (Gateway)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_DistrictWall_Straight: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Walls\DistrictWall_Straight";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="District Wall (Straight)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_DistrictWall_Straight_F: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Walls\DistrictWall_Straight_F";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="District Wall (Straight Simple)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
};
