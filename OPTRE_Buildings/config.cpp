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
	
	class Elevator_Base
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
	class Elevator_Piece
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class Tower1
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};

	class Tower2
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};

	class Tower3
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};

	class Apartment8A
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};	
	
	class Apartment4A
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};	
	
	
	class RazorTower
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};	
	
	class SailTower
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
	class GenTower
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
	class BaseTower
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
	class SmallPlaza
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};

	class PedBridgeEnd
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};

	class PedBridgeMid
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
	class CityBlockArea
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
	class CityBlockPiece
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
		
	class CityBlockCorner
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};

	class RectangularPlantBox
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
		
	class OPTRE_City_Door
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
	class InformationBoard
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};

	class Light_Column
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
	class CornerBuilding
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};

	class Panel_Tower
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};

	class Building_SApartment
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};

	class Building_LApartment
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};

	class Dgnl_Tower
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};

	class ParkingGarage_Open
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};
		
	class ParkingGarage_closed
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};

	class Urban_Building_01
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};

	class Urban_Building_02
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
	};
	
	class Urban_Building_03
	{
		units[] = {"orbital"};
		weapons[] = {};
		requiredVersion = 0.1;
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
	class House_Small_F;
	class Lamps_base_F;	
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
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small [Green]";
	};
	
	class OPTRE_Building_Container_Large_Green: Land_Cargo_HQ_V1_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large [Green]";
	};
	
	class OPTRE_Building_Container_Tower_Green: Land_Cargo_Patrol_V1_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Tower [Green]";
	};
	
	class OPTRE_Building_Container_Small_Tan: Land_Cargo_House_V3_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small [Tan]";
	};
	
	class OPTRE_Building_Container_Large_Tan: Land_Cargo_HQ_V3_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large [Tan]";
	};
	
	class OPTRE_Building_Container_Tower_Tan: Land_Cargo_Patrol_V3_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Tower [Tan]";
	};
	
	class OPTRE_Building_Container_Small_Medical: Land_Medevac_house_V1_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small [Medical]";
	};
	
	class OPTRE_Building_Container_Large_Medical: Land_Medevac_HQ_V1_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large [Medical]";
	};
	
	class Elevator_Base: TargetGrenade
	{
		model="\OPTRE_Buildings\Elevator\Elevator_Base";
		armor=20000;
		scope=2;
		featureSize = 10;
		displayName="Elevator Base";
	};
		
	class Elevator_Piece: TargetGrenade
	{
		model="\OPTRE_Buildings\Elevator\Elevator_Piece";
		armor=20000;
		scope=2;
		featureSize = 10;
		displayName="Elevator Piece";
	};

	class Tower1: TargetGrenade
	{
		model="\OPTRE_Buildings\Towers\Tower1";
		armor=20000;
		scope=2;
		displayName="Tower 1";
	};

	class Tower2: TargetGrenade
	{
		model="\OPTRE_Buildings\Towers\Tower2";
		armor=20000;
		scope=2;
		displayName="Tower 2";
	};

	class Tower3: TargetGrenade
	{
		model="\OPTRE_Buildings\Towers\Tower3";
		armor=20000;
		scope=2;
		displayName="Tower 3";
	};

	class Apartment8A: TargetGrenade
	{
		model="\OPTRE_Buildings\Buildings\Apartment8A";
		armor=20000;
		scope=2;
		displayName="Apartment 1 Closed";
	};
	
	class Apartment4A: TargetGrenade
	{
		model="\OPTRE_Buildings\Buildings\Apartment4A";
		armor=20000;
		scope=2;
		displayName="Apartment 2 Closed";
	};
	
	class RazorTower: TargetGrenade
	{
		model="\OPTRE_Buildings\Towers\Razor_Tower";
		armor=20000;
		scope=2;
		displayName="Razor Tower";
	};
	
	class SailTower: TargetGrenade
	{
		model="\OPTRE_Buildings\Towers\Sail_Tower";
		armor=20000;
		scope=2;
		displayName="Sail Tower";
	};
	
	class GenTower: TargetGrenade
	{
		model="\OPTRE_Buildings\Towers\Gen_Tower";
		armor=20000;
		scope=2;
		displayName="Gen Tower";
	};
	
	class BaseTower: TargetGrenade
	{
		model="\OPTRE_Buildings\Towers\Base_Tower";
		armor=20000;
		scope=2;
		displayName="Base Tower";
	};
	
	class SmallPlaza: TargetGrenade
	{
		model="\OPTRE_Buildings\CityObjects\Small_Plaza";
		armor=20000;
		scope=2;
		displayName="Small Plaza";
	};

	class PedBridgeMid: TargetGrenade
	{
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Mid";
		armor=20000;
		scope=2;
		displayName="Pedestrian Bridge Middle Piece";
	};

	class PedBridgeEnd: TargetGrenade
	{
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_End";
		armor=20000;
		scope=2;
		displayName="Pedestrian Bridge End Piece";
	};
	
	class CityBlockArea: TargetGrenade
	{
		model="\OPTRE_Buildings\Buildings\City_Block_Area";
		armor=20000;
		scope=2;
		displayName="City Block Area";
	};
	
	class CityBlockPiece: TargetGrenade
	{
		model="\OPTRE_Buildings\Buildings\City_Block_Piece";
		armor=20000;
		scope=2;
		displayName="City Block Piece";
	};
		
	class CityBlockCorner: TargetGrenade
	{
		model="\OPTRE_Buildings\Buildings\City_Block_Corner";
		armor=20000;
		scope=2;
		displayName="City Block Corner";
	};
		
	class RectangularPlantBox: TargetGrenade
	{
		model="\OPTRE_Buildings\CityObjects\Rectangular_Plant_Box";
		armor=20000;
		scope=2;
		displayName="Rectangular Plant Box";
	};
	
	class OPTRE_City_Door: TargetGrenade
	{
		model="\OPTRE_Buildings\CityObjects\Door_Locked";
		armor=20000;
		scope=2;
		displayName="Locked Door";
	};
		
	class InformationBoard: TargetGrenade
	{
		model="\OPTRE_Buildings\CityObjects\Information_Board";
		armor=20000;
		scope=2;
		displayName="Information Board";
	};

	class Light_Column: TargetGrenade
	{
		model="\OPTRE_Buildings\Citylights\Light_Column";
		armor=20000;
		scope=2;
		displayName="Column Light";
	};

	class CornerBuilding: TargetGrenade
	{
		model="\OPTRE_Buildings\buildings\building01";
		armor=20000;
		scope=2;
		displayName="Corner Building";
	};

	class Panel_Tower: TargetGrenade
	{
		model="\OPTRE_Buildings\towers\Panel_Tower";
		armor=20000;
		scope=2;
		displayName="Panel Tower";
	};

	class Building_SApartment: TargetGrenade
	{
		model="\OPTRE_Buildings\buildings\Building_sApartment";
		armor=20000;
		scope=2;
		displayName="Small Apartment";
	};

	class Building_LApartment: TargetGrenade
	{
		model="\OPTRE_Buildings\buildings\Building_LApartment";
		armor=20000;
		scope=2;
		displayName="Large Apartment";
	};

	class Dgnl_Tower: TargetGrenade
	{
		model="\OPTRE_Buildings\Towers\Dgnl_Tower";
		armor=20000;
		scope=2;
		displayName="Large Tower";
	};

	class ParkingGarage_Open: TargetGrenade
	{
		model="\OPTRE_Buildings\buildings\Garage_UnCovered";
		armor=20000;
		scope=2;
		displayName="Parking Garage Open";
	};
	
	class Urban_Building_01: TargetGrenade
	{
		model="\OPTRE_Buildings\buildings\Urban_Building_01";
		armor=20000;
		scope=2;
		displayName="Urban Building 01";
	};

	class Urban_Building_02: TargetGrenade
	{
		model="\OPTRE_Buildings\buildings\Urban_Building_02";
		armor=20000;
		scope=2;
		displayName="Urban Building 02";
	};
	
	class Urban_Building_03: TargetGrenade
	{
		model="\OPTRE_Buildings\buildings\Urban_Building_03";
		armor=20000;
		scope=2;
		displayName="Urban Building 03";
	};
};
