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
	class Lamps_base_F;
	
	class OPTRE_Building_Container_Small_Green: Land_Cargo_House_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small [Green]";
	};
	
	class OPTRE_Building_Container_Large_Green: Land_Cargo_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large [Green]";
	};
	
	class OPTRE_Building_Container_Tower_Green: Land_Cargo_Patrol_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Tower [Green]";
	};
	
	class OPTRE_Building_Container_Small_Tan: Land_Cargo_House_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small [Tan]";
	};
	
	class OPTRE_Building_Container_Large_Tan: Land_Cargo_HQ_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large [Tan]";
	};
	
	class OPTRE_Building_Container_Tower_Tan: Land_Cargo_Patrol_V3_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Tower [Tan]";
	};
	
	class OPTRE_Building_Container_Small_Medical: Land_Medevac_house_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Small [Medical]";
	};
	
	class OPTRE_Building_Container_Large_Medical: Land_Medevac_HQ_V1_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Structure_class";
		displayName = "Container Large [Medical]";
	};
	
	class Elevator_Base: TargetGrenade
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		model="\OPTRE_Buildings\Elevator\Elevator_Base";
		displayName="Elevator Base [WIP]";
		vehicleClass = "OPTRE_UNSC_Structure_class";
	};
		
	class Elevator_Piece: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Elevator\Elevator_Piece";
		displayName="Elevator Piece [WIP]";
	};

	class Tower1: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower1";
		displayName="Tower 1 [WIP]";
	};

	class Tower2: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower2";
		displayName="Tower 2 [WIP]";
	};

	class Tower3: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Tower3";
		displayName="Tower 3 [WIP]";
	};

	class Apartment8A: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\Apartment8A";
		displayName="Apartment 1 Closed [WIP]";
	};
	
	class Apartment4A: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\Apartment4A";
		displayName="Apartment 2 Closed [WIP]";
	};
	
	class RazorTower: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Razor_Tower";
		displayName="Razor Tower [WIP]";
	};
	
	class SailTower: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Sail_Tower";
		displayName="Sail Tower [WIP]";
	};
	
	class GenTower: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Gen_Tower";
		displayName="Gen Tower [WIP]";
	};
	
	class BaseTower: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Towers\Base_Tower";
		displayName="Base Tower [WIP]";
	};
	
	class SmallPlaza: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Small_Plaza";
		displayName="Small Plaza [WIP]";
	};

	class PedBridgeMid: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_Mid";
		displayName="Pedestrian Bridge Middle Piece [WIP]";
	};

	class PedBridgeEnd: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Ped_Bridge_End";
		displayName="Pedestrian Bridge End Piece [WIP]";
	};
	
	class CityBlockArea: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Area";
		displayName="City Block Area [WIP]";
	};
	
	class CityBlockPiece: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Piece";
		displayName="City Block Piece [WIP]";
	};
		
	class CityBlockCorner: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Buildings\City_Block_Corner";
		displayName="City Block Corner [WIP]";
	};
		
	class RectangularPlantBox: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Rectangular_Plant_Box";
		displayName="Rectangular Plant Box [WIP]";
	};
	
	class OPTRE_City_Door: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Door_Locked";
		displayName="Locked Door [WIP]";
	};
		
	class InformationBoard: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\CityObjects\Information_Board";
		displayName="Information Board";
	};

	class Light_Column: Elevator_Base
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Citylights\Light_Column";
		displayName="Column Light [WIP]";
	};

	class CornerBuilding: TargetGrenade
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\buildings\building01";
		displayName="Corner Building [WIP]";
	};

	class Light_Street_01_off: Lamps_base_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		VehicleClass		= "OPTRE_UNSC_Structure_class";
		displayName			= "Street Lamp (Off) [WIP]";									/// displayed in Editor
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
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName			= "Street Light (On) [WIP]";
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
