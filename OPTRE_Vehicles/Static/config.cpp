class CfgPatches
{
	class OPTRE_Vehicles_Static
	{
		units[]={"OPTRE_Static_M41_LAAG"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core"};
		magazines[]={};
		ammo[]={};
	};
};

class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class HitPoints
				{
					class HitGun;
					class HitTurret: HitGun
					{
						class DestructionEffects
						{
							class Smoke;
						};
					};
				};
			};
		};
		class Wounds;
		class HitPoints
		{
			class HitEngine;
			class HitHull;
			class HitTurret;
			class HitGun;
			class HitLTrack;
			class HitRTrack;
			class HitBody;
		};
		class ViewPilot;
		class CargoLight;
		class Reflectors;
		class UserActions;
	};
	class OPTRE_Static_Base: StaticWeapon
	{
		scope 							= 0;
		scopeCurator 					= 0;
		vehicleClass 					= "OPTRE_UNSC_Fortification_class";
		displayName 					= "-";
		author 							= "Article 2 Studios";
		faction							= "OPTRE_UNSC";
		side							= 1;
		crew							= "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				body					= "mainturret";
				gun						= "maingun";
				animationsourcebody		= "mainturret";
				animationSourceGun		= "maingun";
				gunAxis					= "Osa Hlavne";
				gunBeg					= "Usti hlavne";
				gunEnd					= "konec hlavne";
				minElev					= -15;
				maxElev					= 45;
				minTurn					= -360;
				maxTurn					= 360;
				initTurn				= 0;
				turretAxis				= "OsaVeze";
				maxHorizontalRotSpeed	= 1.5;
				maxVerticalRotSpeed		= 1.5;
				gunnerAction			= "driver_boat01";
				gunnerInAction			= "driver_boat01";
				gunnerGetInAction		= "GetInMRAP_01";
				gunnerGetOutAction		= "GetOutMRAP_01";
				gunnerName				= "Gunner";
				hideWeaponsGunner		= 0;
				soundServo[]			= {"",0.01,1};
				stabilizedInAxes 		= 3;
				outGunnerMayFire		= 1;
				inGunnerMayFire			= 1;
				commanding				= 1;
				primaryGunner			= 1;
				turretInfoType			= "RscWeaponZeroing";
				memoryPointsGetInGunner	= "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName	= "trigger";
				gunnerRightHandAnimName	= "trigger";
				memoryPointGun			= "machinegun";
				weapons[]				= {"OPTRE_M41_LAAG"};
				magazines[]				= {"500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow"};
				memoryPointGunnerOptics	= "gunnerview";
				gunnerOpticsShowCursor	= 1;
				castGunnerShadow		= 1;
				startEngine 			= 0;
				enableManualFire		= 0;
				gunnerOpticsModel		= "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics		= 0;
				hasGunner				= true;
				class ViewGunner:ViewOptics
				{
					initAngleX			= -15;
					minAngleX			= -45;
					maxAngleX			= 45;
					initFov				= 0.9;
					minFov				= 0.42;
					maxFov				= 0.9;
					visionMode[]		= {};
				};
			};
		};
	};
	class OPTRE_Static_M41_LAAG: OPTRE_Static_Base
	{
		scope 							= 2;
		scopeCurator 					= 2;
		vehicleClass 					= "OPTRE_UNSC_Fortification_class";
		displayName 					= "M41 LAAG Emplacement";
		author 							= "Article 2 Studios";
		model							= "OPTRE_Vehicles\Static\m41_laag.p3d";
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				body					= "mainturret";
				gun						= "maingun";
				animationsourcebody		= "mainturret";
				animationSourceGun		= "maingun";
				gunAxis					= "Osa Hlavne";
				gunBeg					= "Usti hlavne";
				gunEnd					= "konec hlavne";
				minElev					= -15;
				maxElev					= 45;
				minTurn					= -360;
				maxTurn					= 360;
				initTurn				= 0;
				turretAxis				= "OsaVeze";
				maxHorizontalRotSpeed	= 1.5;
				maxVerticalRotSpeed		= 1.5;
				gunnerAction			= "driver_boat01";
				gunnerInAction			= "driver_boat01";
				gunnerGetInAction		= "GetInMRAP_01";
				gunnerGetOutAction		= "GetOutMRAP_01";
				gunnerName				= "Gunner";
				hideWeaponsGunner		= 0;
				soundServo[]			= {"",0.01,1};
				stabilizedInAxes 		= 3;
				outGunnerMayFire		= 1;
				inGunnerMayFire			= 1;
				commanding				= 1;
				primaryGunner			= 1;
				turretInfoType			= "RscWeaponZeroing";
				memoryPointsGetInGunner	= "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName	= "trigger";
				gunnerRightHandAnimName	= "trigger";
				memoryPointGun			= "machinegun";
				weapons[]				= {"OPTRE_M41_LAAG"};
				magazines[]				= {"500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow"};
				memoryPointGunnerOptics	= "gunnerview";
				gunnerOpticsShowCursor	= 1;
				castGunnerShadow		= 1;
				startEngine 			= 0;
				enableManualFire		= 0;
				gunnerOpticsModel		= "a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics		= 0;
				hasGunner				= true;
				class ViewGunner:ViewOptics
				{
					initAngleX			= -15;
					minAngleX			= -45;
					maxAngleX			= 45;
					initFov				= 0.9;
					minFov				= 0.42;
					maxFov				= 0.9;
					visionMode[]		= {};
				};
			};
		};
	};
};