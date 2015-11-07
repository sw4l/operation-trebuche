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

	class Light_Street
	{
		units[] = {"Light_Street_01_off", "Light_Street_01"};
		weapons[] = {};
		requiredAddons[] = {"A3_Structures_F_Civ_Lamps"};
		requiredVersion = 0.1;
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
};
class CfgVehicles
{
	class All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class TargetTraining: NonStrategic {};
	class TargetGrenade: TargetTraining {};
	
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
	
	
	class Lamps_base_F;

	class Light_Street_01_off: Lamps_base_F
	{
		scope				= public;										/// makes the lamp visible in editor
		scopeCurator		= public;											/// makes the lamp visible in Zeus
		VehicleClass		= "City Lights";
		displayName			= "Street Lamp (off)";									/// displayed in Editor
		model				= \OPTRE_Buildings\Citylights\Light_Street_off.p3d;	/// simple path to model

		armor				= 5000;	/// just some protection against missiles, collisions and explosions

		class Hitpoints {};
		class AnimationSources {};
		class MarkerLights
		{
			class Light_4
			{
				color[]				= {1.0, 0.0, 0.0};		/// approximate colour of standard lights
				ambient[]			= {0.01, 0.0, 0.0};		/// nearly a white one
				intensity			= 800;					/// strength of the light
				name				= "Light_4_pos";		/// name of 
				
				blinking			= true;					/// lets make it blinking to show how patterns work
				blinkingPattern[]	= {0.25, 1.0};			// 0.25 s flash, 1.25 s period
				blinkingStartsOn	= true;					/// pattern starts with length of the first flash
				blinkingPatternGuarantee	= true;			/// use this to guarantee all blinks of the patter to be done
															/// doesn't guarantee the length of pattern if true 
															/// (e.g. because of blinks shorter than a frame would take a frame to be seen)

				useFlare			= true;					/// does the light use flare?
				flareSize			= 1.5;					/// how big is the flare
				flareMaxDistance	= 1000;					/// how far can you see the flare

				activeLight			= true;					/// engine counts this one as an active light into limit of lights
				dayLight			= false;				/// it doesn't shine during the day
				drawLight			= false;				/// doesn't create a specific face for flare

				class Attenuation
				{
					start			= 0;
					constant		= 2;
					linear			= 10;
					quadratic		= 20;

					hardLimitStart	= 5;					/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd	= 6;					/// this allows adding more lights into scene
				};
			};
		};
	};

	class Light_Street_01: Light_Street_01_off
	{
		scope				= public;
		scopeCurator		= public;
		displayName			= "Street Light (on)";
		model				= \OPTRE_Buildings\Citylights\Light_Street.p3d;

		aggregateReflectors[] =
		{
			{"Light_1"}
		};

		class Reflectors
		{
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;					/// attenuation of light between the above angles

				position			= "Light_1_pos";		/// memory point for start of the light and flare
				direction			= "Light_1_dir";		/// memory point for the light direction
				hitpoint			= "Light_1_hitpoint";	/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection			= "Light_1_hide";		/// selection for artificial glow around the bulb, not much used any more

				useFlare			= true;
				flareSize			= 2;
				flareMaxDistance	= 130;

				class Attenuation
				{
					start			= 0;
					constant		= 0;
					linear			= 0;
					quadratic		= 0.3;

					hardLimitStart	= 50;
					hardLimitEnd	= 65;
				};
			};
		};
	};
};
