enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_Vehicles_HEV
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		TEI_Driver_HEV = "TEI_Driver_HEV";
	};
};
class CfgMovesMaleSdr
{
	class States
	{
		class Crew;
		class TEI_Driver_HEV: Crew
		{
			file = "\TEI_Vehicles\HEV\data\anim\POD_Pilot.rtm";
			interpolateTo[] ={"KIA_Truck_Cargo02", 1};
			speed = 1e+010;
			looped = 0;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
		};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class Quadbike_01_base_F;
	class RoadCone_F;

	// HUMAN ENTRY VEHICLES
	
	class TEI_HEV: Quadbike_01_base_F
	{
			side 																		= 1;
			scope 																		= 2;
			author																		= "Eridanus Insurrection Team";
			model 																		= "TEI_Vehicles\HEV\hev_pod.p3d";
			displayName 																= "Human Entry Vehicle";
			nameSound																	= "chopper";
			hasgunner																	= 0;
			faction																		= "TEI_UNSC";
			crew 																		= "TEI_UNSC_ODST_Scout";
			transportSoldier															= 0;
			isBicycle																	= true;
			vehicleClass 																= "TEI_UNSC_HEV_class";
			icon 																		= "iconObject";
			mapSize 																	= 2.5;
			weapons[]																	={};
			armor 																		= 10000;
			typicalCargo[] 																= {};
			driverAction 																= "TEI_Driver_HEV";
			getInAction 																= "bench_Heli_Light_01_get_in";	
			getinRadius																	= 2;
			getOutAction 																= "bench_Heli_Light_01_get_out";
			memoryPointsGetIndriver 													= "pos driver";		/// on what memory points should the cargo get in the heli
			memoryPointsGetIndriverDir 													= "pos driver dir";/// what is the direction of the cargo facing during get in animation (and opposite for get out)
			usePreciseGetInAction 														= 0;
			enableSweep																	= true;
			driverIsCommander															= true;
			canFloat 																	= true;
			fuelCapacity 																= 0;
			fuelConsumptionRate 														= 0;
			crewCrashProtection 														= 0;
			crewExplosionProtection 													= 1;
			soundAttenuationCargo[] 													= {0,0};
			ejectDeadDriver 															= 0;
			#include "pip.hpp"

		class AnimationSources	/// custom made animation sources
		{
			class Doors				/// the class name is later used in model.cfg
			{
				source 																	= "user";	/// user source means it is waiting on some scripting input
				animPeriod																= 1.5;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase 																= 0;		/// what value does it have while creating the vehicle
			};
		};	
		class userActions 
		{
			class door_open
			{
				displayName																= "Open HEV Doors";
				position																= "";
				radius																	= 4;
				condition																= "((this animationPhase ""main_door_rotation"" == 0) && (this animationPhase ""left_door_rotation"" == 0) && (this animationPhase ""right_door_rotation"" == 0))";
				statement																= "this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
				onlyforplayer															= 1;
			};
			class door_close
			{
				displayName																= "Close HEV Doors";
				position																= "";
				radius																	= 4;
				condition																= "((this animationPhase ""main_door_rotation"" == 1) && (this animationPhase ""left_door_rotation"" == 1) && (this animationPhase ""right_door_rotation"" == 1))";
				statement																= "this animate [""main_door_rotation"",0]; this animate [""left_door_rotation"",0]; this animate [""right_door_rotation"",0];";
				onlyforplayer															= 1;
			};
		};
	};
	class TEI_HEV_Door: RoadCone_F
	{
			scope 																		= 1;
			author																		= "Eridanus Insurrection Team";
			model 																		= "TEI_Vehicles\HEV\hev_door.p3d";
			displayName 																= "HEV Door";
			vehicleClass 																= "TEI_UNSC_HEV_class";
			icon 																		= "";
			mapSize 																	= 0.7;
			armor 																		= 10000;
			canFloat 																	= true;
	};
	class TEI_HEV_Chute: RoadCone_F
	{
			scope 																		= 1;
			author																		= "Eridanus Insurrection Team";
			model 																		= "TEI_Vehicles\HEV\hev_chute.p3d";
			displayName 																= "HEV Chute";
			vehicleClass 																= "TEI_UNSC_HEV_class";
			icon 																		= "";
			mapSize 																	= 0.7;
			armor 																		= 10000;
			canFloat 																	= true;
	};
};