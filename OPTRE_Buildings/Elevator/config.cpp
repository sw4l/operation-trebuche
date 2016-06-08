class CfgPatches
{
	
	class OPTRE_UNSC_Structure_Elevator
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
	
	class Land_Elevator_Base: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Elevator\Elevator_Base";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		featureSize = 10;
		displayName="Space Elevator (Base)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
		
	class Land_Elevator_Piece: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Elevator\Elevator_Piece";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		featureSize = 10;
		displayName="Space Elevator (Piece)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
};