#include "basicdefines_A3.hpp"
class CfgPatches
{
	class OPTRE_Vehicles_Longsword
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","OPTRE_Core"};
	};
};

class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};

	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
	};

	class OPTRE_Longsword_Base: Plane_Base_F
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1 Base";
		class Library
		{
			libTextDesc					= "The GA-TL1/A is the atmospheric variant of the UNSC's mainstay starfighter. Whilst the aircraft's primary role is that of an interceptor, it is more than capable of serving in a ground support role.";
		};
		dlc = "OPTRE";
		side = 1;
		vehicleClass = "OPTRE_UNSC_Air_class";
		faction	= "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Airforce_Soldier_Airman";
		author="Article 2 Studios";
        armor = 180;
		accuracy = 0.2;
		destrType = DestructWreck;
		damageResistance = 0.004;
		gearRetracting=1;	
		model = "OPTRE_Vehicles\Longsword\Longsword.p3d";
		vtol = 3;
		extCameraPosition[] = {0, 10, -45}; 

		icon = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		picture = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";

		driverAction = passenger_apc_narrow_generic01;
		cargoAction[] = {"passenger_apc_narrow_generic01"};

		LockDetectionSystem = CM_Lock_Radar;
		incomingMissileDetectionSystem = CM_Missile;
		
		transportSoldier = 1;					/// how many cargo positions are available
		cargoCanEject = 0;					/// cargo should be able to grab a chute and drop out of the vehicle
		driverCanEject = 0;					/// pilot shouldn't be able to do so as he doesn't have eject seat
		
		memoryPointsGetInCargo = "pos driver";
		memoryPointsGetInCargoDir = "pos driver dir";
		hideWeaponsCargo = 1;
		cargoProxyIndexes[] = {1};		/// what indexes does regular cargo sit on
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";

		class Turrets {};

		class TransportItems{};

		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};

			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};

			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};

		#include "sounds.hpp"
		landingSpeed = 200;
		acceleration = 500;
		maxSpeed = 1750;
		driveOnComponent[] = {"wheel_1","wheel_2","wheel_3"};
		rudderInfluence = 0.5;
		aileronSensitivity = 5;
		elevatorSensitivity = 5;
		irScanRangeMin = 500;
		irScanRangeMax = 5000;
		irScanToEyeFactor = 2;
		envelope[] = {0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};
		angleOfIndicence = 0.05235987;
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 2.0;
		thrustCoef[]= {1.5, 1.2, 1.1, 1.0, 1.0, 1.0, 1.0, 0.9, 0.8, 0.6, 0.4, 0.2, 0.1, 0.05, 0.025, 0.0};
		elevatorCoef[]= {};
		aileronCoef[]= {};
		//rudderCoef[]= {};
		elevatorControlsSensitivityCoef = 4;
		aileronControlsSensitivityCoef = 4;
		//rudderControlsSensitivityCoef = 50;
		landingAoa = "rad 10";
		laserScanner = 1;
		gunAimDown = 0.0000;
		headAimDown = 0.0000;
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		memoryPointLMissile = "Missile_1";
		memoryPointRMissile = "Missile_2";
		memoryPointGun[] = {"Muzzle_1"};
		flapsFrictionCoef = 0.5;
		minFireTime = 30;
		threat[] = {1, 1, 1};

		class MFD
		{
			class AirplaneHUD
			{
				topLeft = "HUD_top_left";
				topRight = "HUD_top_right";
				bottomLeft = "HUD_bottom_left";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0.0,0.13,0.16,1.0};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0.0,0.0};
				helmetDown[] = {0.0,-0.05,0.0};
				class Bones
				{
					class HUDCenter
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class WeaponAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class VelocityVector
					{
						type = "vector";
						source = "velocityToView";
						pos0[] = {0.5,0.5};
						pos10[] = {0.847,0.845};
					};
					class ForwardVector
					{
						type = "vector";
						source = "forward";
						pos0[] = {0,0};
						pos10[] = {0.347,0.345};
					};
					class HorizonVector
					{
						type = "horizon";
						pos0[] = {0.5,0.5};
						pos10[] = {0.990727,0.987899};
						angle = 0;
					};
					class GunnerAim
					{
						type = "vector";
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class VerticalSpeedBone
					{
						type = "linear";
						source = "vspeed";
						sourceScale = 1;
						min = -15;
						max = 15;
						minPos[] = {0,-0.15};
						maxPos[] = {0,0.15};
					};
				};
				class Draw
				{
					alpha = 1.0;
					color[] = {0.25,1.0,0.25};
					condition = "on";
					class Static
					{
						type = "line";
						width = 4.0;
						points[] = {{ { 0.48,0.14 },1 },{ { 0.5,0.12 },1 },{ { 0.52,0.14 },1 },{  },{ { 0.4,0.86 },1 },{ { 0.4,0.94 },1 },{ { 0.6,0.94 },1 },{ { 0.6,0.86 },1 },{ { 0.4,0.86 },1 },{  },{ { 0.4,0.9 },1 },{ { 0.408,0.9 },1 },{  },{ { 0.6,0.9 },1 },{ { 0.592,0.9 },1 },{  },{ { 0.5,0.86 },1 },{ { 0.5,0.868 },1 },{  },{ { 0.5,0.94 },1 },{ { 0.5,0.932 },1 }};
					};
					class VelocityLine
					{
						type = "line";
						width = 4.0;
						points[] = {{ "HUDCenter",1 },{ "VelocityVector",1 }};
					};
					class CollectiveGroup
					{
						condition = "simulRTD";
						class CollectiveText
						{
							type = "text";
							source = "static";
							text = "%";
							align = "right";
							scale = 1;
							pos[] = {{ 0.22,0.2 },1};
							right[] = {{ 0.28,0.2 },1};
							down[] = {{ 0.22,0.24 },1};
						};
						class CollectiveNumber
						{
							type = "text";
							source = "rtdCollective";
							sourceScale = 100;
							align = "left";
							scale = 1;
							pos[] = {{ 0.22,0.2 },1};
							right[] = {{ 0.28,0.2 },1};
							down[] = {{ 0.22,0.24 },1};
						};
					};
					class SpeedNumber
					{
						type = "text";
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						scale = 1;
						pos[] = {{ 0.16,0.48 },1};
						right[] = {{ 0.22,0.48 },1};
						down[] = {{ 0.16,0.52 },1};
					};
					class AltNumber
					{
						type = "text";
						source = "altitudeAGL";
						sourceScale = 1;
						align = "left";
						scale = 1;
						pos[] = {{ 0.84,0.48 },1};
						right[] = {{ 0.9,0.48 },1};
						down[] = {{ 0.84,0.52 },1};
					};
					class Weapons
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 0.5;
						pos[] = {{ 0.0,0.85 },1};
						right[] = {{ 0.04,0.85 },1};
						down[] = {{ 0.0,0.89 },1};
					};
					class Ammo
					{
						type = "text";
						source = "ammo";
						sourceScale = 1;
						align = "right";
						scale = 0.5;
						pos[] = {{ 0.0,0.9 },1};
						right[] = {{ 0.04,0.9 },1};
						down[] = {{ 0.0,0.94 },1};
					};
					class VerticalSpeedScale
					{
						type = "line";
						width = 4.0;
						points[] = {{ "VerticalSpeedBone",{ 0.85,0.48 },1 },{ "VerticalSpeedBone",{ 0.87,0.5 },1 },{ "VerticalSpeedBone",{ 0.85,0.52 },1 },{  },{ { 0.875,0.35 },1 },{ { 0.885,0.35 },1 },{  },{ { 0.875,0.4 },1 },{ { 0.885,0.4 },1 },{  },{ { 0.875,0.45 },1 },{ { 0.885,0.45 },1 },{  },{ { 0.875,0.5 },1 },{ { 0.895,0.5 },1 },{  },{ { 0.875,0.55 },1 },{ { 0.885,0.55 },1 },{  },{ { 0.875,0.6 },1 },{ { 0.885,0.6 },1 },{  },{ { 0.875,0.65 },1 },{ { 0.885,0.65 },1 }};
					};
					class HeadingScale
					{
						type = "scale";
						horizontal = 1;
						source = "heading";
						sourceScale = 1;
						width = 4.0;
						top = 0.2;
						center = 0.5;
						bottom = 0.8;
						lineXleft = 0.11;
						lineYright = 0.1;
						lineXleftMajor = 0.11;
						lineYrightMajor = 0.09;
						majorLineEach = 2;
						numberEach = 2;
						step = 22.5;
						stepSize = "(0.80 - 0.20) / 6";
						align = "center";
						scale = 1;
						pos[] = {0.2,0.05};
						right[] = {0.26,0.05};
						down[] = {0.2,0.09};
					};
					class HorizonLine
					{
						clipTL[] = {0.2,0.145};
						clipBR[] = {0.8,0.855};
						class HorizonLineDraw
						{
							type = "line";
							width = 4.0;
							points[] = {{ "HorizonVector",{ "-6 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-5 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "-4 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-3 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "-2 * 0.0375",0.0 },1 },{ "HorizonVector",{ "-1 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "1 * 0.0375",0.0 },1 },{ "HorizonVector",{ "2 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "3 * 0.0375",0.0 },1 },{ "HorizonVector",{ "4 * 0.0375",0.0 },1 },{  },{ "HorizonVector",{ "5 * 0.0375",0.0 },1 },{ "HorizonVector",{ "6 * 0.0375",0.0 },1 }};
						};
					};
					class Gunner
					{
						type = "line";
						width = 4.0;
						points[] = {{ "GunnerAim",{ "0.5 - 0.015","0.9 - 0.008" },1 },{ "GunnerAim",{ "0.5 - 0.015","0.9 + 0.008" },1 },{ "GunnerAim",{ "0.5 + 0.015","0.9 + 0.008" },1 },{ "GunnerAim",{ "0.5 + 0.015","0.9 - 0.008" },1 },{ "GunnerAim",{ "0.5 - 0.015","0.9 - 0.008" },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "ForwardVector",1,"WeaponAim",{ 0.025,0 },1 },{ "ForwardVector",1,"WeaponAim",{ 0.01,0 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0,0.0248559 },1 },{ "ForwardVector",1,"WeaponAim",{ 0,0.00994236 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ -0.025,0 },1 },{ "ForwardVector",1,"WeaponAim",{ -0.01,0 },1 },{  },{ "ForwardVector",1,"WeaponAim",{ 0,-0.0248559 },1 },{ "ForwardVector",1,"WeaponAim",{ 0,-0.00994236 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "ForwardVector",1,"HUDCenter",{ 0,-0.248559 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.0434,-0.244781 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.0855,-0.233571 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.125,-0.215252 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.1607,-0.190396 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.1915,-0.159774 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.2165,-0.12428 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.234925,-0.0850072 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.2462,-0.0431499 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.25,0 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.2462,0.0431499 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.234925,0.0850072 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.2165,0.12428 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.1915,0.159774 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.1607,0.190396 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.125,0.215252 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.0855,0.233571 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.0434,0.244781 },1 },{ "ForwardVector",1,"HUDCenter",{ 0,0.248559 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.0434,0.244781 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.0855,0.233571 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.125,0.215252 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.1607,0.190396 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.1915,0.159774 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.2165,0.12428 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.234925,0.0850072 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.2462,0.0431499 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.25,0 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.2462,-0.0431499 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.234925,-0.0850072 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.2165,-0.12428 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.1915,-0.159774 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.1607,-0.190396 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.125,-0.215252 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.0855,-0.233571 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.0434,-0.244781 },1 },{ "ForwardVector",1,"HUDCenter",{ 0,-0.248559 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "ForwardVector",1,"HUDCenter",{ -0.15,-0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.15,-0.129251 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ -0.15,0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.15,0.129251 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ 0.15,-0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.15,-0.129251 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ 0.15,0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.15,0.129251 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ -0.15,-0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.13,-0.149135 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ -0.15,0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ -0.13,0.149135 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ 0.15,-0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.13,-0.149135 },1 },{  },{ "ForwardVector",1,"HUDCenter",{ 0.15,0.149135 },1 },{ "ForwardVector",1,"HUDCenter",{ 0.13,0.149135 },1 }};
						};
					};
				};
			};
		};
		
		class AnimationSources: AnimationSources	/// custom made animation sources
		{
			class rampDoor				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 3;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};		
			class bayDoor				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 3;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};			
		};
		
		class UserActions
		{
			class RampOpen
			{
				userActionID = 60;	
				displayName = "Open Ramp";
				displayNameDefault = "Open Ramp";
				textToolTip = "Open Ramp";
				position = pos driver;
				radius = 6;
				priority = 2;
				onlyForPlayer = 1;
				condition = "((this animationPhase ""ramp_anim"" < 0.5) AND (alive this))"; /// only openable from inside and when closed
				statement = "this animate [""ramp_anim"",1];";
				animPeriod = 3;
            };
            class RampClose: RampOpen
            {
				userActionID = 61;
				displayName = "Close Ramp";
				displayNameDefault = "Close Ramp";
				textToolTip = "Close Ramp";
				priority = 2;
				condition = "((this animationPhase ""ramp_anim"" > 0.5) AND (alive this))"; /// only openable from inside and when closed
				statement = "this animate [""ramp_anim"",0];";
            };
		};
		
		class ViewPilot: ViewPilot 	/// describes what does the pilot see using bare eyes
		{
			initFov = 0.5; 		/// this is the standard field of view angle for soldier, bit more narrow than a real-life one
			minFov = 0.25; 		/// this is how much can people "zoom" their view via focusing on something
			maxFov = 1.0;			/// this is how wide can the field of view be
		};
		class Viewoptics: ViewOptics
		{
			initAngleX=0;
			minAngleX=0;
			maxAngleX=0;
			initAngleY=0;
			minAngleY=0;
			maxAngleY=0;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.5;
			visionMode[]=
			{
				"Normal",
				"NVG",
				"Ti"
			};
			thermalMode[]={0,1};
		};
		memoryPointDriverOptics="pilotcam";
		driverOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		driverForceOptics=0;
	};

	class OPTRE_Longsword_CAS: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (CAS)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			missiles_DAR,
			missiles_SCALPEL,
			missiles_ASRAAM,
			GBU12BombLauncher,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_M9109_2500Rnd_50mm,
			24Rnd_missiles,
			24Rnd_missiles,
			2Rnd_LG_scalpel,
			2Rnd_LG_scalpel,
			2Rnd_LG_scalpel,
			2Rnd_LG_scalpel,
			2Rnd_AAA_missiles,
			2Rnd_AAA_missiles,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};

	class OPTRE_Longsword_BOMB: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Bomber)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			missiles_SCALPEL,
			missiles_ASRAAM,
			GBU12BombLauncher,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_M9109_2500Rnd_50mm,
			2Rnd_LG_scalpel,
			2Rnd_AAA_missiles,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			2Rnd_GBU12_LGB_MI10,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};
	
	class OPTRE_Longsword_AA: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (CAP)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =
		{
			OPTRE_M9109,
			missiles_ASRAAM,
			missiles_Zephyr,
			CMFlareLauncher
		};
		magazines[] =
		{
			OPTRE_M9109_2500Rnd_50mm,
			2Rnd_AAA_missiles,
			2Rnd_AAA_missiles,
			2Rnd_AAA_missiles,
			2Rnd_AAA_missiles,
			4Rnd_GAA_missiles,
			4Rnd_GAA_missiles,
			4Rnd_GAA_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};
	
	class OPTRE_Longsword_CANNON: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A  Longsword (Cannon)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =
		{
			OPTRE_M91091,
			missiles_ASRAAM,
			missiles_SCALPEL,
			CMFlareLauncher
		};
		magazines[] =
		{
			OPTRE_M91091_1000Rnd_110mm,
			2Rnd_AAA_missiles,
			2Rnd_AAA_missiles,
			2Rnd_LG_scalpel,
			2Rnd_LG_scalpel,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};
	
	class OPTRE_Longsword_SUPPRESS: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A  Longsword (Suppression)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =
		{
			OPTRE_M9109,
			missiles_DAR,
			missiles_ASRAAM,
			CMFlareLauncher
		};
		magazines[] =
		{
			OPTRE_M9109_2500Rnd_50mm,
			OPTRE_M9109_2500Rnd_50mm,
			2Rnd_AAA_missiles,
			24Rnd_missiles,
			24Rnd_missiles,
			24Rnd_missiles,
			24Rnd_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};
	};
};