#include "basicdefines_A3.hpp"

class CfgPatches
{
	
	class OPTRE_UNSC_Structure_class
    {
        units[] = {"OPTRE_Building_Container_Small_Green","OPTRE_Building_Container_Large_Green","OPTRE_Building_Container_Tower_Green","OPTRE_Building_Container_Small_Tan","OPTRE_Building_Container_Large_Tan","OPTRE_Building_Container_Tower_Tan","OPTRE_Building_Container_Small_Medical","OPTRE_Building_Container_Large_Medical"};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_structures_f","OPTRE_Core"};
    };
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class OPTRE_City_Building_class
	{
		displayName 																			= "OPTRE Structures (Civil)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_City_Skyscrapers_class
	{
		displayName 																			= "OPTRE Structures (Towers)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Industrial_Building_class
	{
		displayName 																			= "OPTRE Structures (Industrial)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Trans_Building_class
	{
		displayName 																			= "OPTRE Structures (Transportation)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_City_Objects_class
	{
		displayName 																			= "OPTRE Objects (City)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
};

class CfgVehicles
{
	class House_F;
	class Land_Cargo_House_V1_F;
	class Land_Cargo_HQ_V1_F;
	class Land_Cargo_Patrol_V1_F;
	class Land_Cargo_House_V3_F;
	class Land_Cargo_HQ_V3_F;
	class Land_Cargo_Patrol_V3_F;
	class Land_Medevac_house_V1_F;
	class Land_Medevac_HQ_V1_F;
	
	class OPTRE_Building_Container_Small_Green: Land_Cargo_House_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Green]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Military";
	};
	
	class OPTRE_Building_Container_Large_Green: Land_Cargo_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Green]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Military";
	};
	
	class OPTRE_Building_Container_Tower_Green: Land_Cargo_Patrol_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Tower [Green]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Military";
	};
	
	class OPTRE_Building_Container_Small_Tan: Land_Cargo_House_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Military";
	};
	
	class OPTRE_Building_Container_Large_Tan: Land_Cargo_HQ_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Military";
	};
	
	class OPTRE_Building_Container_Tower_Tan: Land_Cargo_Patrol_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Tower [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Military";
	};
	
	class OPTRE_Building_Container_Small_Medical: Land_Medevac_house_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Medical]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Military";
	};
	
	class OPTRE_Building_Container_Large_Medical: Land_Medevac_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Medical]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Military";
	};
	
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
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
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
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};

	class Land_Tower1: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower1";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Tower 1";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};

	class Land_Tower2: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower2";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Tower 2";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};

	class Land_Tower3: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower3";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Tower 3";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};

	class Land_Apartment8A: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\Apartment8A";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Apartment 1 Closed";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};
	
	class Land_Apartment4A: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\Apartment4A";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Apartment 2 Closed";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};
	
	class Land_Razor_Tower: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Razor_Tower";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Razor Tower";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};
	
	class Land_Sail_Tower: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Sail_Tower";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Sail Tower";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};
	
	class Land_Gen_Tower: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Gen_Tower";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Gen Tower";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};
	
	class Land_Base_Tower: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Base_Tower";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Base Tower";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};
	
	class Land_Small_Plaza: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Small_Plaza";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Small Plaza";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Ped_Bridge_Mid: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Mid";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (Middle)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Ped_Bridge_End: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_End";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Pedestrian Bridge (End)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_City_Block_Area: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Area";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="City Block (Area)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_City_Block_Piece: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Piece";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="City Block (Piece)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
		
	class Land_City_Block_Corner: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Corner";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="City Block (Corner)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
		
	class Land_Rectangular_Plant_Box: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Rectangular_Plant_Box";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Rectangular Plant Box";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Door_Locked: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Door_Locked";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Locked Door";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
		
	class Land_Information_Board: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Information_Board";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Information Board";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_building01: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\building01";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Corner Building";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};

	class Land_Panel_Tower: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\towers\Panel_Tower";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Panel Tower";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};

	class Land_Building_sApartment: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Building_sApartment";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Small Apartment";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};

	class Land_Building_LApartment: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Building_LApartment";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Large Apartment";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};

	class Land_Dgnl_Tower: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Dgnl_Tower";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Large Tower";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Skyscraper";
	};

	class Land_Garage_UnCovered: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Garage_UnCovered";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Parking Garage (Open)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};
	
	class Land_Urban_Building_01: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_01";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 01";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};

	class Land_Urban_Building_02: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_02";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 02";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};
	
	class Land_Urban_Building_03: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_03";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 03";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};
	class Land_Urban_Building_04: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_04";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 04";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};

	class Land_Urban_Building_05: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Urban_Building_05";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Urban Building 05";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorCategory_Buildings_Civilian";
	};
};
