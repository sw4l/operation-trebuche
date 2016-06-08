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
	class Car_F;
	class RoadCone_F;
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
		class ViewPilot;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
	};

	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class RotorLibHelicopterProperties;
		class CargoTurret;
		class Reflectors
		{
			class Right;
		};
	};
	
	class OPTRE_HEV: Car_F
	{
		dlc = "OPTRE";
		side = 1;
		scope = 2;
		author = "Article 2 Studios";
		model = "OPTRE_Vehicles\HEV\hev_pod.p3d";
		displayName = "SOEIV Human Entry Vehicle";
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_ODST_Soldier_Scout";
		transportSoldier = 0;
		isBicycle = 1;
		vehicleClass = "OPTRE_UNSC_HEV_class";
		attenuationEffectType = "CarAttenuation";
		mapSize = 2.5;
		weapons[] = {};
		armor = 10000;
		explosionShielding = 1;
		typicalCargo[] = {};
		icon = "OPTRE_Vehicles\hev\Data\icon.paa";
		picture = "OPTRE_Vehicles\hev\Data\icon2.paa";
		driverAction = "OPTRE_Driver_HEV";
		getInAction = "bench_Heli_Light_01_get_in";
		getinRadius = 2;
		getOutAction = "bench_Heli_Light_01_get_out";
		memoryPointsGetIndriver = "pos driver";
		memoryPointsGetIndriverDir = "pos driver dir";
		usePreciseGetInAction = 0;
		driverIsCommander = 1;
		canFloat = 1;
		fuelCapacity = 0;
		fuelConsumptionRate = 0;
		fuelExplosionPower = 0;
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		crewCrashProtection = 1;
		crewExplosionProtection = 1;
		epeImpulseDamageCoef = 0;
		hideWeaponsDriver = 0;
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"OPTRE_Vehicles\hev\data\pod_CO.paa","#(argb,256,512,1)r2t(rendertarget0,1.0)","#(argb,256,512,1)r2t(rendertarget1,1.0)","OPTRE_core\data\base\glass_ca.paa"};
		ejectDeadDriver = 0;
		maximumLoad = 2000;
		extCameraPosition[] = {0,2.5,-10};
		class Turrets{};
		class Reflectors{};
		class TextureSources{};
		class Sounds{};	
		class Eventhandlers {	
			init = "_this select 0 allowDamage false";
		};
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
				condition																= "((this animationPhase ""main_door_rotation"" == 0) && (this animationPhase ""left_door_rotation"" == 0) && (this animationPhase ""right_door_rotation"" == 0) && (((velocity this) select 2) < 10) && (((velocity this) select 2) > -10) && !(this getVariable ['OPTRE_PlayerControled',false]))";
				statement																= "this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
				onlyforplayer															= 1;
			};
			class door_close
			{
				displayName																= "Close HEV Doors";
				position																= "";
				radius																	= 4;
				condition																= "((this animationPhase ""main_door_rotation"" == 1) && (this animationPhase ""left_door_rotation"" == 1) && (this animationPhase ""right_door_rotation"" == 1) && (((velocity this) select 2) < 10) && (((velocity this) select 2) > -10) && !(this getVariable ['OPTRE_PlayerControled',false]))";
				statement																= "this animate [""main_door_rotation"",0]; this animate [""left_door_rotation"",0]; this animate [""right_door_rotation"",0];";
				onlyforplayer															= 1;
			};
		};
	};
	
	/*class OPTRE_HEV: Helicopter_Base_H
	{
		dlc = "OPTRE";
			side 																		= 1;
			scope 																		= 2;
			author																		= "Article 2 Studios";
			model 																		= "OPTRE_Vehicles\HEV\hev_pod.p3d";
			displayName 																= "SOEIV Human Entry Vehicle";
			faction																		= "OPTRE_UNSC";
			crew 																		= "OPTRE_UNSC_ODST_Soldier_Scout";
			transportSoldier															= 0;
			isBicycle																	= true;
			vehicleClass 																= "OPTRE_UNSC_HEV_class";
			attenuationEffectType 														= "TankAttenuation";
			mapSize 																	= 2.5;
			weapons[]																	={};
			armor 																		= 9999999;
			epeImpulseDamageCoef 														= 0;
			altFullForce = 0;	/// in what height do the engines still have full thrust
			altNoForce = 0;		/// thrust of the engines interpolates to zero between altFullForce and altNoForce
			maxSpeed = 0;			/// what is the maximum speed of the vehicle
			maxFordingDepth = 0;	/// how deep could the vehicle be in water without getting some damage
			mainBladeRadius = 0;	/// describes the radius of main rotor - used for collision detection
			driverCanEject = 0;			/// pilot shouldn't be able to do so as he doesn't have eject seat
			liftForceCoef = 0;	///multiplier of lift force
			bodyFrictionCoef = 0.0;		///multiplier of body friction
			cyclicAsideForceCoef = 0.0;	///multiplier of bank force
			cyclicForwardForceCoef = 0.0;	///multiplier of dive force
			backRotorForceCoef = 0.0;	///multiplier of back rotor force
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
			driverIsCommander															= true;
			canFloat 																	= true;
			fuelCapacity 																= 0;
			fuelConsumptionRate 														= 1;
			fuelExplosionPower 															= 0;
			occludeSoundsWhenIn 														= 1;
			obstructSoundsWhenIn 														= 1;
			crewCrashProtection 														= 0;
			crewExplosionProtection 													= 0;
			hideWeaponsDriver 															= 0;
			hiddenSelections[]															= {"camo1","camo2","camo3","camo4"};
			hiddenSelectionsTextures[]													= {"OPTRE_Vehicles\hev\data\pod_CO.paa","#(argb,256,512,1)r2t(rendertarget0,1.0)","#(argb,256,512,1)r2t(rendertarget1,1.0)","OPTRE_core\data\base\glass_ca.paa"};
			ejectDeadDriver 															= 0;
			maximumLoad 																= 0;
			extCameraPosition[] 														= {0,2.5,-10};
			class Turrets{};
			class Reflectors{};
			class TextureSources{};		
			class Eventhandlers {	
				init = "_this select 0 allowDamage false";
			};
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
					condition																= "((this animationPhase ""main_door_rotation"" == 0) && (this animationPhase ""left_door_rotation"" == 0) && (this animationPhase ""right_door_rotation"" == 0) && (((velocity this) select 2) < 10) && (((velocity this) select 2) > -10) && !(this getVariable ['OPTRE_PlayerControled',false]))";
					statement																= "this animate [""main_door_rotation"",1]; this animate [""left_door_rotation"",1]; this animate [""right_door_rotation"",1];";
					onlyforplayer															= 1;
				};
				class door_close
				{
					displayName																= "Close HEV Doors";
					position																= "";
					radius																	= 4;
					condition																= "((this animationPhase ""main_door_rotation"" == 1) && (this animationPhase ""left_door_rotation"" == 1) && (this animationPhase ""right_door_rotation"" == 1) && (((velocity this) select 2) < 10) && (((velocity this) select 2) > -10) && !(this getVariable ['OPTRE_PlayerControled',false]))";
					statement																= "this animate [""main_door_rotation"",0]; this animate [""left_door_rotation"",0]; this animate [""right_door_rotation"",0];";
					onlyforplayer															= 1;
				};
			};
			class HitPoints:HitPoints
			{
				class HitHull:HitHull
				{
					armor=999;
					visual="Hull";
					minimalHit = 0.05;
					depends = "Total";
					radius = 0.01;
				};
				class HitFuel:HitFuel
				{
					armor = 999;
					radius = 0.25;
					minimalHit = 0.05;
					explosionShielding = 2;
				};
				class HitAvionics:HitAvionics
				{
					armor = 999;
					radius = 0.4;
					minimalHit = 0.05;
					explosionShielding = 1.5;
				};
				class HitHRotor:HitHRotor
				{
					armor = 999;
					radius = 0.4;
					minimalHit = 0.09;
					explosionShielding = 2.5;
				};
				class HitVRotor:HitVRotor
				{
					armor = 999;
					radius = 0.06;
					minimalHit = 0.05;
					explosionShielding = 6;
				};
			};
	};*/
	class OPTRE_HEV_Door: RoadCone_F
	{
		dlc = "OPTRE";
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
		dlc = "OPTRE";
			scope 																		= 1;
			author																		= "Article 2 Studios";
			model 																		= "OPTRE_Vehicles\HEV\hev_chute.p3d";
			displayName 																= "HEV Chute";
			vehicleClass 																= "OPTRE_UNSC_HEV_class";
			icon 																		= "";
			mapSize 																	= 0.7;
			armor 																		= 10000;
			canFloat 																	= true;
			class AnimationSources	/// custom made animation sources
			{
				class Wings				/// the class name is later used in model.cfg
				{
					source 																	= "user";	/// user source means it is waiting on some scripting input
					animPeriod																= 0.1;		/// how long does it take to change value from 0 to 1 (or vice versa)
					initPhase 																= 0;		/// what value does it have while creating the vehicle
				};
			};	
	};
};