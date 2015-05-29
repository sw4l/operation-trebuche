class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Vehicles_HEV
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		OPTRE_Driver_HEV = "OPTRE_Driver_HEV";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class OPTRE_Driver_HEV: Crew
		{
			file = "\OPTRE_Vehicles\HEV\data\anim\POD_Pilot.rtm";
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
	
	class OPTRE_HEV: Quadbike_01_base_F
	{
			side 																		= 1;
			scope 																		= 2;
			author																		= "Article 2 Studios";
			model 																		= "OPTRE_Vehicles\HEV\hev_pod.p3d";
			displayName 																= "SOEIV Human Entry Vehicle";
			nameSound																	= "chopper";
			hasgunner																	= 0;
			faction																		= "OPTRE_UNSC";
			crew 																		= "OPTRE_UNSC_ODST_Soldier_Scout";
			transportSoldier															= 0;
			isBicycle																	= true;
			vehicleClass 																= "OPTRE_UNSC_HEV_class";
			mapSize 																	= 2.5;
			weapons[]																	={};
			armor 																		= 10000;
			explosionShielding 															= 1;
			typicalCargo[] 																= {};
			icon 																		= "OPTRE_Vehicles\hev\Data\icon.paa";	/// icon in map/editor
			picture 																	= "OPTRE_Vehicles\hev\Data\icon2.paa";	/// small picture in command menu
			driverAction 																= "OPTRE_Driver_HEV";
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
			fuelExplosionPower 															= 0;
			occludeSoundsWhenIn 														= 0;
			obstructSoundsWhenIn 														= 0;
			crewCrashProtection 														= 0;
			crewExplosionProtection 													= 0;
			hiddenSelections[]															= {"camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[]													= {"OPTRE_Vehicles\hev\data\pod_CO.paa","#(argb,256,512,1)r2t(rendertarget0,1.0)","#(argb,256,512,1)r2t(rendertarget1,1.0)","OPTRE_core\data\base\glass_ca.paa"};
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
	class OPTRE_HEV_Door: RoadCone_F
	{
			scope 																		= 1;
			author																		= "Article 2 Studios";
			model 																		= "OPTRE_Vehicles\HEV\hev_door.p3d";
			displayName 																= "HEV Door";
			vehicleClass 																= "OPTRE_UNSC_HEV_class";
			icon 																		= "";
			mapSize 																	= 0.7;
			armor 																		= 10000;
			canFloat 																	= true;
	};
	class OPTRE_HEV_Chute: RoadCone_F
	{
			scope 																		= 1;
			author																		= "Article 2 Studios";
			model 																		= "OPTRE_Vehicles\HEV\hev_chute.p3d";
			displayName 																= "HEV Chute";
			vehicleClass 																= "OPTRE_UNSC_HEV_class";
			icon 																		= "";
			mapSize 																	= 0.7;
			armor 																		= 10000;
			canFloat 																	= true;
	};
};