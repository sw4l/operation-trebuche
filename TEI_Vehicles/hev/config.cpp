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
	class TEI_Vehicles_Pod
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

class Extended_PreInit_EventHandlers //This is a CBA configuration for the HUD
{
	//TEI_POD_Init 																			= "[] execVM '\TEI_Vehicles\HEV\scripts\POD_init.sqf'";
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
		};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class B_Quadbike_01_F;
	class RoadCone_F;

	// HUMAN ENTRY VEHICLES
	
	class TEI_HEV: B_Quadbike_01_F
	{
			side 																		= 1;
			scope 																		= 2;
			simulation = 																car;
			author																		= "Eridanus Insurrection Team";
			model 																		= "TEI_Vehicles\HEV\hev_pod.p3d";
			displayName 																	= "Human Entry Vehicle";
			nameSound																	= "chopper";
			hasgunner																	= 0;
			faction																		= "TEI_UNSC";
			crew 																		= "TEI_UNSC_ODST_Soldier";
			transportSoldier																= 0;
			vehicleClass 																	= "TEI_UNSC_HEV_class";
			icon 																		= "";
			mapSize 																	= 0.7;
			accuracy 																	= 0.5;
			cost 																		= 10;
			armor 																		= 10000;
			typicalCargo[] 																	= {};
			driverAction 																	= TEI_Driver_HEV;
			getInAction 																	= bench_Heli_Light_01_get_in;	
			getOutAction 																	= bench_Heli_Light_01_get_out;
			getInRadius = 10;
			memoryPointsGetIndriver = "pos driver";		/// on what memory points should the cargo get in the heli
			memoryPointsGetIndriverDir = "pos driver dir";/// what is the direction of the cargo facing during get in animation (and opposite for get out)
			memoryPointsGetInCargo = "pos driver";
			memoryPointsGetInCargoDir = "pos driver dir";
			enableSweep																	= true;
			driverIsCommander																= true;
			canFloat 																	= true;
			fuelCapacity 																	= 1;
			crewCrashProtection 																= 1;
			crewExplosionProtection 															= 1;
			soundAttenuationCargo[] 															= {0,0};
			hiddenSelections[] 																= {"camo1","camo2","camo3"}; //Determines what hiddenselections are enabled
			hiddenSelectionsTextures[] 															= {"TEI_Vehicles\HEV\data\pod_CO.paa","TEI_Vehicles\HEV\data\pod_CO.paa","tei_core\data\base\glass_ca.paa"};
			#include "pip.hpp"

		class AnimationSources	/// custom made animation sources
		{
			class Doors				/// the class name is later used in model.cfg
			{
				scope = 2;
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 2;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
			};
		};	
		class userActions 
		{
				class door_open
				{
				displayName="Open Doors";
				position="";
				radius=2;
				condition="alive(player)";
				statement="this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1] ";//;this animate [""left_door_rotation"",1];this animate [""right_door_rotation"",1]
				onlyforplayer=1;
				};

				class door_close
				{
				displayName="Close Doors";
				position="";
				radius=2;
				condition="alive(player)";
				statement="this animate [""main_door_rotation"",0]; this animate [""left_door_rotation"",0]; this animate [""right_door_rotation"",0]";
				onlyforplayer=1;
				};

		};
	};

	class hev_test_classname : TEI_HEV
	{
		displayName 																	= "Animation testing HEV";


	};
	class TEI_HEV_Door: RoadCone_F
	{
			scope 																				= 1;
			author																				= "Eridanus Insurrection Team";
			model 																				= "TEI_Vehicles\HEV\hev_door.p3d";
			displayName 																		= "HEV Door";
			vehicleClass 																		= "TEI_UNSC_HEV_class";
			icon 																				= "";
			mapSize 																			= 0.7;
			armor 																				= 10000;
			canFloat 																			= true;
	};
	class TEI_HEV_Chute: RoadCone_F
	{
			scope 																				= 1;
			author																				= "Eridanus Insurrection Team";
			model 																				= "TEI_Vehicles\HEV\hev_chute.p3d";
			displayName 																		= "HEV Chute";
			vehicleClass 																		= "TEI_UNSC_HEV_class";
			icon 																				= "";
			mapSize 																			= 0.7;
			armor 																				= 10000;
			canFloat 																			= true;
	};
};