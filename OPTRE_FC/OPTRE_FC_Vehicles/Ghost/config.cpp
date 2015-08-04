class CfgPatches
{
	class OPTRE_FC_Vehicles_Ghost
	{
		units[]={"OPTRE_FC_Ghost"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core"};
		magazines[]={};
		ammo[]={};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Car:LandVehicle
	{
		class NewTurret;
	};
	class Car_F:Car
	{
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel;
			class HitLBWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class Gatling;
			class Gatling_flash;
		};
		class Turrets
		{
			class MainTurret:NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
			class HitFuel;
			class HitEngine;
			class HitBody;
		};
	};
	class OPTRE_FC_Ghost_base:Car_F
	{
		displayName											= "-";
		class Library
		{
			libTextDesc										= "The Type-32 Rapid Assault Vehicle is the Covenant's primary scouting vehicle.";
		};
		model												= "OPTRE_FC_Vehicles\Ghost\ghost.p3d";
		//picture											= "OPTRE_Vehicles\Warthog\Data\picture.paa";
		//Icon												= "OPTRE_Vehicles\Warthog\Data\icon.paa";
		mapSize 											= 4;
		transportMaxBackpacks								= 1;
		vehicleClass										= "OPTRE_FC_GroundVehicles_class";
		transportSoldier									= 0;
		crewVulnerable										= 1;
		attenuationEffectType 								= "OpenCarAttenuation";
		crewCrashProtection									= 0;
		crewExplosionProtection 							= 0.5;
		fuelExplosionPower 									= 2;
		epeImpulseDamageCoef 								= 25;
		armor												= 100;
		cost												= 500000;
		canFloat											= 1;
		threat[]											= {0.8,0.6,0.3};
		camouflage											= 4;
		destrType											= "DestructBuilding";
		ejectDeadDriver 									= 1;
		hideWeaponsDriver 									= 1;
		class Turrets{};
		class Exhausts
		{
			class Exhaust1
			{
				position									= "exhaust1";
				direction									= "exhaust1_dir";
				effect										= "ExhaustsEffect";
			};
		};
		class HitPoints:HitPoints
		{
			class HitLFWheel:HitLFWheel
			{
				armor										= 999;
				explosionShielding							= 0;
				radius										= 0.25;
				passThrough									= 0;
			};
			class HitLF2Wheel:HitLF2Wheel
			{
				armor										= 999;
				explosionShielding							= 0;
				radius										= 0.25;
				passThrough									= 0;
			};
			class HitRFWheel:HitRFWheel
			{
				armor										= 999;
				explosionShielding							= 0;
				radius										= 0.25;
				passThrough									= 0;
			};
			class HitRF2Wheel:HitRF2Wheel
			{
				armor										= 999;
				explosionShielding							= 0;
				radius										= 0.25;
				passThrough									= 0;
			};
			class HitFuel:HitFuel
			{
				armor										= 999;
				name										= "palivo";
				passThrough									= 0.5;
				explosionShielding							= 0.5;
			};
			class HitEngine:HitEngine
			{
				armor										= 0.5;
				name										= "motor";
				passThrough									= 0.5;
				explosionShielding							= 0.5;
			};
			class HitBody:HitBody
			{
				armor										= 2;
				name										= "karoserie";
				visual										= "body";
				passThrough									= 1;
				explosionShielding							= 0.5;
			};
		};
		driverAction										= "Driver_low01";
		hiddenSelections[]									= {"camo1"};
		hiddenSelectionsTextures[]							= {"OPTRE_FC_Vehicles\Ghost\data\ghost_co.paa"};
		showNVGCargo[]										= {0,1};
		soundAttenuationCargo[]								= {1,0};
		maxFordingDepth 									= 1;
		getInAction											= "GetInMRAP_01";
		getOutAction										= "GetOutMRAP_01";
		commanderCanSee										= 31;
		driverDoor											= "";
		cargoDoors[]										= {};
		precision											= 15;
		
		#include "physx.hpp"
		
		supplyRadius										= 5;
		transportMaxMagazines								= 50;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name										= "FirstAidKit";
				count										= 2;
			};
		};
		class TransportWeapons
		{
		};
		class UserActions
		{
			class Flip
			{
				displayNameDefault 							= "Press SPACEBAR to Flip Vehicle";
				displayName 								= "Press SPACEBAR to Flip Vehicle";
				position 									= "";
				radius 										= 4;
				onlyForPlayer 								= 1;
				condition 									= "(alive this) AND !(canmove this)";
				statement 									= "this setVectorUp surfaceNormal getposATL this";
			};
		};
	};
	class OPTRE_FC_Ghost:OPTRE_FC_Ghost_base
	{
		displayName											= "Type-32 Rapid Assault Vehicle";
		scope												= 2;
		author												= "Drakedaeron & Article 2 Studios";
		faction												= "OPTRE_FC_Covenant";
		side												= 0;
		transportSoldier									= 0;
		crew												= "OPTRE_FC_Elite_Minor";
		hiddenSelections[]									= {"camo1"};
		hiddenSelectionsTextures[]							= {"optre_fc_vehicles\ghost\data\ghost_co.paa"};
		weapons[]											= {"OPTRE_FC_PlasmaCannons"};
		magazines[]											= {"OPTRE_FC_PlasmaCannons_Battery"};
	};
};