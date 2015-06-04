class CfgPatches
{
	class OPTRE_Frigate
	{
		units[]										= {"OPTRE_Frigate_Final_Dawn","OPTRE_Frigate_Console","OPTRE_Frigate_M910_Turret"};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","A3_static_f"};
	};
};

class CfgVehicles
{
	class OPTRE_Objects_Base;
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
	
	class OPTRE_Frigate_Final_Dawn: OPTRE_Objects_Base
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "FFG-437 Final Dawn";
		model = "\OPTRE_frigate\finaldawn_complex.p3d";
		author = "Article 2 Studios";
	};
	/*class OPTRE_Frigate_Experimental: Static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Experimental Frigate";
		model = "\OPTRE_frigate\finaldawn_0.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class Eventhandlers {
			init = "_scr = _this execVM ""\OPTRE_Frigate\build.sqf"";";
		};
	};*/
	class OPTRE_Frigate_Console: OPTRE_Frigate_Final_Dawn
	{
		displayName = "Console [Frigate]";
		model = "\OPTRE_frigate\console.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Frigate_Hangar_Door: OPTRE_Frigate_Final_Dawn
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Hangar Door [Frigate]";
		model = "\OPTRE_frigate\spawn_door.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Frigate_LiftArm: OPTRE_Frigate_Final_Dawn
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "Lift Arm [Frigate]";
		model = "\OPTRE_frigate\liftarm.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Frigate_M910_Turret: StaticWeapon
	{
		scope = 2;
		scopeCurator = 2;
		armor = 450;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "M910 Point Defense Turret";
		model = "\OPTRE_Frigate\turret.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="OsaHlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				minElev=-4;
				maxElev=50;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.2;
				maxVerticalRotSpeed=1.2;
				gunnerAction="driver_boat01";
				gunnerInAction="driver_boat01";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				soundServo[] = { "", 0.01, 2.000000 };
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "trigger";
				gunnerRightHandAnimName = "trigger";
				memoryPointGun = "machinegun";
				weapons[] = {"autocannon_40mm_CTWS"};
				magazines[] = {"60Rnd_40mm_GPR_Tracer_Red_shells","60Rnd_40mm_GPR_Tracer_Red_shells","60Rnd_40mm_GPR_Tracer_Red_shells","60Rnd_40mm_GPR_Tracer_Red_shells"};
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerOpticsShowCursor=1;
				turretInfoType="RscWeaponZeroing";
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {2};
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerForceOptics = 1;
				gunnerForceOutOptics = 1;
				hideWeaponsGunner = 1;
				class ViewGunner:ViewOptics
				{
					initFov=0.7;
					minFov=0.05;
					maxFov=1.1;
				};
			};
		};
	};
};