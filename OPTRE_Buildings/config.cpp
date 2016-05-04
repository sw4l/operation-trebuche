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
	class RoadCone_F;
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Large_Green: Land_Cargo_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Green]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Tower_Green: Land_Cargo_Patrol_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Tower [Green]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Small_Tan: Land_Cargo_House_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Large_Tan: Land_Cargo_HQ_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Tower_Tan: Land_Cargo_Patrol_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Tower [Tan]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Small_Medical: Land_Medevac_house_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Small [Medical]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};
	
	class OPTRE_Building_Container_Large_Medical: Land_Medevac_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Building_class";
		displayName = "Container Large [Medical]";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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

	/*class Land_Tower1: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower1";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Tower 1";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};*/

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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
	
	class Land_AMG_Tower: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\AMG_Tower";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="AMG Tower";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
	
	class Land_Can_Tower1: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Can_Tower1";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Can Tower 1";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
	
	class Land_Can_Tower2: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Can_Tower2";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Can Tower 2";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
	
	class Land_Can_Tower3: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Can_Tower3";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Can Tower 3";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
	
	class Land_J_Tower_a: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\J_Tower_a";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="J Tower (Part A)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
	
	class Land_J_Tower_b: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\J_Tower_b";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="J Tower (Part B)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
	
	class Land_Tower4a: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower4a";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Tower 4 (Part A)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
	};
	
	class Land_Tower4b: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower4b";
		vehicleClass = "OPTRE_City_Skyscrapers_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Tower 4 (Part B)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
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
	
	class Land_Small_Plaza_Trees: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Small_Plaza_Trees";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Small Plaza (Trees)";
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
	
	class Land_shipping_crate_lg_locked: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Shipping Container [Locked]";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};	
	
	class Land_shipping_crate_lg_open: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_open";
		displayName="Shipping Container [Open]";
	};
	
	class Land_shipping_crate_sm_locked: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_sm_locked";
		displayName="Shipping Container (Small) [Locked]";
	};
	
	class Land_shipping_crate_sm_open: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_sm_open";
		displayName="Shipping Container (Small) [Open]";
	};
	
	class Land_shipping_crate_lg_locked_amg: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_amg";
		displayName="Shipping Container (AMG)";
	};
	
	class Land_shipping_crate_lg_locked_bxr: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_bxr";
		displayName="Shipping Container (BXR)";
	};
	
	class Land_shipping_crate_lg_locked_cobb1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_cobb1";
		displayName="Shipping Container (Cobb 1)";
	};
	
	class Land_shipping_crate_lg_locked_cobb2: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_cobb2";
		displayName="Shipping Container (Cobb 2)";
	};
	
	class Land_shipping_crate_lg_locked_cobb3: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_cobb3";
		displayName="Shipping Container (Cobb 3)";
	};
	
	class Land_shipping_crate_lg_locked_feud: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_feud";
		displayName="Shipping Container (Feud)";
	};
	
	class Land_shipping_crate_lg_locked_jot1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_jot1";
		displayName="Shipping Container (Jot 1)";
	};
	
	class Land_shipping_crate_lg_locked_jot2: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_jot2";
		displayName="Shipping Container (Jot 2)";
	};
	
	class Land_shipping_crate_lg_locked_leth: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_leth";
		displayName="Shipping Container (Leth)";
	};
	
	class Land_shipping_crate_lg_locked_mt: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_mt";
		displayName="Shipping Container (MT)";
	};
	
	class Land_shipping_crate_lg_locked_nap1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_nap1";
		displayName="Shipping Container (Nap 1)";
	};
	
	class Land_shipping_crate_lg_locked_nap2: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_nap2";
		displayName="Shipping Container (Nap 2)";
	};
	
	class Land_shipping_crate_lg_locked_sin1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_sin1";
		displayName="Shipping Container (Sin)";
	};
	
	class Land_shipping_crate_lg_locked_trax1: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_trax1";
		displayName="Shipping Container (Traxus 1)";
	};
	
	class Land_shipping_crate_lg_locked_trax2: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_trax2";
		displayName="Shipping Container (Traxus 2)";
	};
	
	class Land_shipping_crate_lg_locked_trax3: Land_shipping_crate_lg_locked
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\shipping_crate_lg_locked_trax3";
		displayName="Shipping Container (Traxus 3)";
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
		
	class Land_Rectangular_Plant_Box_Trees: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Rectangular_Plant_Box_Trees";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Rectangular Plant Box (Trees)";
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
	
	class Land_Door_Locked_lg: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Door_Locked_lg";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Locked Door (Large)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Door_Locked_med: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Door_Locked_med";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Locked Door (Medium)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Dumpster_01: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Dumpster_Closed_01";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Dumpster 1";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Dumpster_02: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Dumpster_Closed_02";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Dumpster 2";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Optican_Kiosk_lg: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Optican_Kiosk_lg";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Optican Kiosk (Large)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
	
	class Land_Optican_Kiosk_sm: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Optican_Kiosk_sm";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Optican Kiosk (Small)";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Skyscraper";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
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
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_I_Building: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\I_Building";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="I Building";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_Round_Office_A: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Round_Office_a";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Round Office (Part A)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_Round_Office_B: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\Round_Office_b";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Round Office (Part B)";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_Advert_V_AMG: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_AMG";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (AMG)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Atlas: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Atlas";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Atlas)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Errera: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Errera";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Errera)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Havadi: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Havadi";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Havadi)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Hinos: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Hinos";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Hinos)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Mainz: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Mainz";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Mainz)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Movie: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Movie";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Movie)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Nomolos: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Nomolos";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Nomolos)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Optican: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Optican";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Optican)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Tech: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Tech";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Tech)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Traxus: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Traxus";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Traxus)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Advert_V_Vyrant: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Advert_V_Vyrant";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Street Advertisement (Vyrant)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Vending_Machine_ded: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Vending_Machine_ded";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vending Machine (Damaged)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Vending_Machine_drink: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Vending_Machine_drink";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vending Machine (Drink)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Vending_Machine_rooster: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Vending_Machine_rooster";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vending Machine (Rooster)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_Vending_Machine_teeth: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Vending_Machine_teeth";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Vending Machine (Teeth)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_blue: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_blue";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / Blue)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_green: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_green";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / Green)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_red: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_red";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / Red)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_unsc: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_unsc";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / UNSC)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_packing_crate_lg_yellow: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Containers\packing_crate_lg_yellow";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Packaging Crate (Large / Yellow)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};

	class Land_FarmHouseOPTRE_1: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Farm\FarmHouse_1";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Farm House 1";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Civilian";
	};

	class Land_catwalk_end: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\catwalk_end";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (End)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_catwalk_helipad: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\catwalk_helipad";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (Helipad)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_catwalk_long: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\catwalk_long";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (Long)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_catwalk_short: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\catwalk_short";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (Short)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_catwalk_supported: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\catwalk_supported";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (Supported)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_corner: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_corner";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Corner)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_damage: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_damage";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Damaged)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_gate: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_gate";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Gate)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_hub: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_hub";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Hub)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_segment: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_segment";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Segment)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_traffic_cone: RoadCone_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\StreetObjects\cone";
		scope = 2;
		displayName="Traffic Cone";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Civilian";
	};
};
