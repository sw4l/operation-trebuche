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
	};
	
	class OPTRE_Building_Container_Large_Green: Land_Cargo_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Green]";
	};
	
	class OPTRE_Building_Container_Tower_Green: Land_Cargo_Patrol_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Tower [Green]";
	};
	
	class OPTRE_Building_Container_Small_Tan: Land_Cargo_House_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Tan]";
	};
	
	class OPTRE_Building_Container_Large_Tan: Land_Cargo_HQ_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Tan]";
	};
	
	class OPTRE_Building_Container_Tower_Tan: Land_Cargo_Patrol_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Tower [Tan]";
	};
	
	class OPTRE_Building_Container_Small_Medical: Land_Medevac_house_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Medical]";
	};
	
	class OPTRE_Building_Container_Large_Medical: Land_Medevac_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Medical]";
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
	};
};
