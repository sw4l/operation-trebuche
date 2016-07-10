#include "basicdefines_A3.hpp"
class CfgPatches
{
	class OPTRE_Vehicles_Longsword
	{
		units[] = {"OPTRE_Longsword"};
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
		class Turrets;
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
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
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
		gunBeg[] = {"z_gunL_muzzle", "z_gunR_muzzle"};
		gunEnd[] = {"z_gunL_chamber", "z_gunR_chamber"};
		model = "OPTRE_Vehicles\Longsword\Longsword.p3d";
		vtol = 3;
		extCameraPosition[] = {0, 10, -45}; 

		icon = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		picture = "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";

		driverAction = passenger_apc_narrow_generic01;
		cargoAction[] = {"passenger_apc_narrow_generic01"};

		LockDetectionSystem = CM_Lock_Radar;
		incomingMissileDetectionSystem = CM_Missile;
		
		transportSoldier = 0;					/// how many cargo positions are available
		cargoCanEject = 0;					/// cargo should be able to grab a chute and drop out of the vehicle
		driverCanEject = 0;					/// pilot shouldn't be able to do so as he doesn't have eject seat
		
		memoryPointsGetInCargo = "pos driver";
		memoryPointsGetInCargoDir = "pos driver dir";
		hideWeaponsCargo = 1;
		cargoProxyIndexes[] = {1};		/// what indexes does regular cargo sit on
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			120Rnd_CMFlare_Chaff_Magazine
		};

		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 5;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 5;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={};
				magazines[]={};	
				minElev = -55;
				maxElev = 55;
				initElev = 0;
				minTurn = -55;
				maxTurn = 55;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.25;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				gunBeg = "S_start";
				gunEnd = "S_end";
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={};
				magazines[]={};	
				minElev = -55;
				maxElev = 55;
				initElev = 0;
				minTurn = -55;
				maxTurn = 55;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: LeftTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={};
				magazines[]={};	
				minElev = -55;
				maxElev = 55;
				initElev = 0;
				minTurn = -55;
				maxTurn = 55;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
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
		irScanRangeMax = 8000;
		irScanToEyeFactor = 3;
		envelope[] = {0.0,0.15,1.1,3,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};
		angleOfIndicence = 0.05235987;
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 2.0;
		thrustCoef[]= {1.5, 1.2, 1.1, 1.0, 1.0, 1.0, 1.0, 0.9, 0.7, 0.5, 0.3, 0.1, 0.0, 0.0, 0.0, 0.0};
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
		
		class Reflectors
		{
			class Left
			{
				color[] = {7000, 7500, 10000, 1}; 	/// defines red, green, blue and alpha components of the light
				ambient[] = {100, 100, 100};		/// the same definition format for colouring the environment around
				position = "Light_L";				/// name of memory point in model to take the origin of the light
				direction = "Light_L_end";			/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_L";				/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_L";				/// name of selection in visual lods of the model that are going to be hidden while the light is off
				innerAngle = 20;					/// angle from light direction vector where the light is at full strength
				outerAngle = 60;					/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;					/// coefficient of fading the light between inner and outer cone angles
				intensity = 50;						/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				useFlare = true;					/// boolean switch if the light produces flare or not
				dayLight = false;					/// boolean switch if the light is used during day or not
				FlareSize = 4;						/// how big is the flare, using the same metrics as intensity
				size = 1;							/// defines the visible size of light, has not much of an effect now
				class Attenuation					/// describes how fast does the light dim
				{
					start = 1;						/// offset of start of the attenuation
					constant = 0;					/// constant attenuation of the light in any distance from source
					linear = 0;						/// coefficient for linear attenuation
					quadratic = 4;					/// coefficient for attenuation with square of distance from source

					hardLimitStart = 150;			/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 300;				/// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};

		/*class Damage
		{
			tex[] = {};
			mat[] =
			{
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1.rvmat",			/// material mapped in model
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat"	/// changes to this one once damage of the part reaches 1
			};
		};*/
		
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
			/*class RampOpen
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
            };*/
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
		class pilotCamera				/// camera for pilot to observe sling loading
        {
            class OpticsIn				/// what is seen if player switches to optics
            {		
                class Wide
                {
                    opticsDisplayName 	= "W";	/// used in case the UI has place to display optics mode
                    initAngleX			= 0;	/// X-axis rotation and its limits
					minAngleX			= -0; 	/// X-axis rotation and its limits
					maxAngleX			= +0;	/// X-axis rotation and its limits
                    initAngleY			= 0; 	/// Y-axis rotation and its limits
					minAngleY			= -0;  	/// Y-axis rotation and its limits
					maxAngleY			= +0; 	/// Y-axis rotation and its limits
                    initFov				= 0.5;	/// Field of view size settings
					minFov				= 0.5;	/// Field of view size settings
					maxFov				= 0.5;	/// Field of view size settings
                    visionMode[] 		= {"Normal","NVG","Ti"};	/// what vision modes are available
                    thermalMode[] 		= {0,1};			/// not necessary as there is no TI mode defined, but just in case
                    gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; /// some optics model
				};
				showMiniMapInOptics				= true;	/// allows showing GPS mini map in optics
				showUAVViewpInOptics			= true;	/// allows showing UAV feed in this optics
				showSlingLoadManagerInOptics 	= false;		/// allows displaying of Sling Loading Assistant
            };
            minTurn                 = 0; 		//turn
            maxTurn                 = 0; 		//turn
            initTurn                = 0; 		//turn
            minElev                 = 0; 		//turn
            maxElev                 = 0; 		//turn
            initElev                = 0; 		//turn
            maxXRotSpeed            = 0.5; 		// movement speed
            maxYRotSpeed            = 0.5; 		// movement speed
            pilotOpticsShowCursor   = 1; 		//to show aimCursor (is useful to see plane direction)
            controllable            = false; 	// set false to have static camera, true to have moving like a turret
        };
		memoryPointDriverOptics="PilotCamera_Pos";
		driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
		driverOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
		driverForceOptics=0;
	};

	class OPTRE_Longsword_Super: OPTRE_Longsword_Base
	{
		//this is a test variant of the Longsword with the maximum load of every possible weapon for balancing/testing purposes
		
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1/A Longsword (Overloaded)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			OPTRE_missiles_Anvil1,
			OPTRE_missiles_Anvil2,
			OPTRE_missiles_Anvil3,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			OPTRE_32Rnd_Anvil1_missiles,
			OPTRE_32Rnd_Anvil1_missiles,
			OPTRE_24Rnd_Anvil2_missiles,
			OPTRE_12Rnd_Anvil3_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM2,
					OPTRE_missiles_ASGM10,
					OPTRE_missiles_Scorpion,
					OPTRE_missiles_Jackknife,
					OPTRE_bomblauncher_500lb,
					OPTRE_bomblauncher_1000lb,
					OPTRE_bomblauncher_2000lb,
					OPTRE_bomblauncher_GBU,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_48Rnd_ASGM2_rockets,
					OPTRE_12Rnd_ASGM10_missiles,
					OPTRE_16Rnd_Scorpion_missiles,
					OPTRE_3Rnd_Jackknife_missile,
					OPTRE_48Rnd_500lb_bomb,
					OPTRE_36Rnd_1000lb_bomb,
					OPTRE_16Rnd_2000lb_bomb,
					OPTRE_8Rnd_GBU_bomb,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_SuperNuke: OPTRE_Longsword_Base
	{
		//this is a test variant of the Longsword with a nuclear payload
		
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1/A Longsword (NukeOverloaded)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM2,
					OPTRE_missiles_ASGM10,
					OPTRE_missiles_Scorpion,
					OPTRE_missiles_Jackknife,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_48Rnd_ASGM2_rockets,
					OPTRE_12Rnd_ASGM10_missiles,
					OPTRE_16Rnd_Scorpion_missiles,
					OPTRE_3Rnd_Jackknife_missile,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"OPTRE_missiles_Shiva_nuke","Laserdesignator_mounted"};
				magazines[]={"OPTRE_2Rnd_Shiva_nuke_missile","Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_SuperGunship: OPTRE_Longsword_Base
	{
		//this is a test variant of the Longsword with the ventral guns for testing purposes.  Note that the guns aren't modeled/animated within the bay yet so I am not recommending this one for this release.
		
		scope = 1;
		scopeCurator = 1;
		displayName = "GA-TL1/A Longsword (Overloaded Gunship)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			OPTRE_missiles_Anvil1,
			OPTRE_missiles_Anvil2,
			OPTRE_missiles_Anvil3,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			OPTRE_32Rnd_Anvil1_missiles,
			OPTRE_32Rnd_Anvil1_missiles,
			OPTRE_24Rnd_Anvil2_missiles,
			OPTRE_12Rnd_Anvil3_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM2,
					OPTRE_missiles_ASGM10,
					OPTRE_missiles_Scorpion,
					OPTRE_missiles_Jackknife,
					OPTRE_bomblauncher_500lb,
					OPTRE_bomblauncher_1000lb,
					OPTRE_bomblauncher_2000lb,
					OPTRE_bomblauncher_GBU,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_48Rnd_ASGM2_rockets,
					OPTRE_12Rnd_ASGM10_missiles,
					OPTRE_16Rnd_Scorpion_missiles,
					OPTRE_3Rnd_Jackknife_missile,
					OPTRE_48Rnd_500lb_bomb,
					OPTRE_36Rnd_1000lb_bomb,
					OPTRE_16Rnd_2000lb_bomb,
					OPTRE_8Rnd_GBU_bomb,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret4";
				gun="Gun4";
				gunBeg="gun4beg";
				gunEnd="gun4end";
				animationSourceBody="Turret4";
				animationSourceGun="Gun4";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Left Gunner";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"OPTRE_120mm_M310E","Laserdesignator_mounted"};
				magazines[]={"OPTRE_120Rnd_120mm","Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.05;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner4";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret4_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret5";
				gun="Gun5";
				gunBeg="gun5beg";
				gunEnd="gun5end";
				animationSourceBody="Turret5";
				animationSourceGun="Gun5";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Right Gunner";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"OPTRE_120mm_M310E","Laserdesignator_mounted"};
				magazines[]={"OPTRE_120Rnd_120mm","Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.05;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner5";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret5_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
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
			OPTRE_110mm_Gatling,
			OPTRE_missiles_Anvil1,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			OPTRE_32Rnd_Anvil1_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM10,
					OPTRE_missiles_Scorpion,
					OPTRE_bomblauncher_GBU,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_4Rnd_ASGM10_missiles,
					OPTRE_12Rnd_Scorpion_missiles,
					OPTRE_4Rnd_GBU_bomb,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Bomb: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Bomber)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM10,
					OPTRE_missiles_Scorpion,
					OPTRE_bomblauncher_1000lb,
					OPTRE_bomblauncher_GBU,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_4Rnd_ASGM10_missiles,
					OPTRE_12Rnd_Scorpion_missiles,
					OPTRE_12Rnd_1000lb_bomb,
					OPTRE_4Rnd_GBU_bomb,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Carpet: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Carpet Bomber)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM10,
					OPTRE_missiles_Scorpion,
					OPTRE_missiles_Jackknife,
					OPTRE_bomblauncher_500lb,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_4Rnd_ASGM10_missiles,
					OPTRE_4Rnd_Scorpion_missiles,
					OPTRE_1Rnd_Jackknife_missile,
					OPTRE_48Rnd_500lb_bomb,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Precision: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Precision Bomber)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_Scorpion,
					OPTRE_missiles_Jackknife,
					OPTRE_bomblauncher_GBU,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_4Rnd_Scorpion_missiles,
					OPTRE_2Rnd_Jackknife_missile,
					OPTRE_8Rnd_GBU_bomb,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretInfoType = "RscOptics_CAS_01_TGP";
				turretAxis="Turret3_axis";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Heavy: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Heavy Bomber)";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM10,
					OPTRE_missiles_Scorpion,
					OPTRE_missiles_Jackknife,
					OPTRE_bomblauncher_2000lb,
					OPTRE_bomblauncher_GBU,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_4Rnd_ASGM10_missiles,
					OPTRE_4Rnd_Scorpion_missiles,
					OPTRE_1Rnd_Jackknife_missile,
					OPTRE_8Rnd_2000lb_bomb,
					OPTRE_4Rnd_GBU_bomb,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_CAP: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (CAP) [A/X]";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			OPTRE_missiles_Anvil1,
			OPTRE_missiles_Anvil2,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			OPTRE_32Rnd_Anvil1_missiles,
			OPTRE_24Rnd_Anvil2_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM2,
					OPTRE_missiles_ASGM10,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_12Rnd_ASGM2_rockets,
					OPTRE_8Rnd_ASGM10_missiles,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Multirole: OPTRE_Longsword_Base
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Multirole) [A/X]";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			OPTRE_missiles_Anvil2,
			OPTRE_missiles_Anvil3,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			OPTRE_24Rnd_Anvil2_missiles,
			OPTRE_12Rnd_Anvil3_missiles,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM2,
					OPTRE_missiles_ASGM10,
					OPTRE_missiles_Scorpion,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_12Rnd_ASGM2_rockets,
					OPTRE_4Rnd_ASGM10_missiles,
					OPTRE_8Rnd_Scorpion_missiles,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = 0;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 0;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
	class OPTRE_Longsword_Nuke: OPTRE_Longsword_Base
	{
				scope = 2;
		scopeCurator = 2;
		displayName = "GA-TL1/A Longsword (Nuclear) [A/X]";								/// how is the plane displayed in editor
		dlc = "OPTRE";
		author="Article 2 Studios";
		
		weapons[] =	/// lets use the weapons from Buzzard
		{
			OPTRE_M9109,
			OPTRE_110mm_Gatling,
			CMFlareLauncher
		};
		magazines[] = /// and their respective magazines
		{
			OPTRE_2500Rnd_50mm_HE,
			OPTRE_600Rnd_110mm,
			120Rnd_CMFlare_Chaff_Magazine
		};
		class Turrets: Turrets
		
		{
			class CopilotTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="mainTurret";
				gun="mainGun";
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 1;
				isCopilot = 1;
				gunnerName = "Co-Pilot";
				primaryGunner = 1;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={
					OPTRE_missiles_ASGM2,
					OPTRE_missiles_ASGM10,
					CMFlareLauncher
				};
				magazines[]={
					OPTRE_12Rnd_ASGM2_rockets,
					OPTRE_8Rnd_ASGM10_missiles,
					120Rnd_CMFlare_Chaff_Magazine
				};	
				minElev = -75;
				maxElev = 25;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.10;
                    maxFov = 0.75;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner1";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="axisturret1";
				gunnerOpticsModel="A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class LeftTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret2";
				gun="Gun2";
				gunBeg="gun2beg";
				gunEnd="gun2end";
				animationSourceBody="Turret2";
				animationSourceGun="Gun2";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 2;
				isCopilot = 0;
				gunnerName = "Systems Operator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"OPTRE_missiles_Shiva_nuke","Laserdesignator_mounted"};
				magazines[]={"OPTRE_2Rnd_Shiva_nuke_missile","Laserbatteries"};	
				minElev = -85;
				maxElev = 10;
				initElev = -10;
				minTurn = -25;
				maxTurn = 90;
				initTurn = 20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner2";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret2_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
			class RightTurret: CopilotTurret						/// taking controls is already defined in parent class
			{
				gunnerAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				gunnerInAction = pilot_Heli_Light_02;				/// what action does copilot switch to
				precisegetinout = 1;								/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
				gunnerGetInAction = pilot_Heli_Light_02_Enter;	/// what action uses the copilot to get in the heli, it uses "switchAction" script command on the proxy
				gunnerGetOutAction = pilot_Heli_Light_02_Exit;	/// what action uses the copilot to get out the heli				
				memoryPointsGetInGunner="pos Driver";
				memoryPointsGetInGunnerDir="pos Driver dir";
				canEject = 0;	/// copilot shouldn't be able to do so as he doesn't have eject seat
				body="Turret3";
				gun="Gun3";
				gunBeg="gun3beg";
				gunEnd="gun3end";
				animationSourceBody="Turret3";
				animationSourceGun="Gun3";
				gunnerLeftHandAnimName = "";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "";			/// what bone in model is the right hand connected to via IK (pilot has it set by default in parent class)
				maxHorizontalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				maxVerticalRotSpeed = 10;							/// how fast is the copilot able to look around (higher means faster)
				proxyindex = 3;
				isCopilot = 0;
				gunnerName = "Navigator";
				primaryGunner = 0;	
				visionMode[]={"Normal","NVG","Ti"};
				weapons[]={"Laserdesignator_mounted"};
				magazines[]={"Laserbatteries"};		
				minElev = -85;
				maxElev = 10;
				initElev = 10;
				minTurn = -90;
				maxTurn = 25;
				initTurn = -20;
				stabilizedInAxes = "StabilizedInAxesBoth";
				startEngine = 0;
				class Viewoptics
					{
                    minAngleX = -360;
                    maxAngleX = 360;
                    initAngleX = 0;
                    minAngleY = -360;
                    maxAngleY = 360;
                    initAngleY = 0;
                    initFov = 0.75;
                    minFov = 0.02;
                    maxFov = 0.85;
					visionMode[]={"Normal","NVG","Ti"};
					};
				soundServo[] = {"",0.01,1};
				outGunnerMayFire = 1;
				commanding = -1;
				memoryPointGunnerOptics = "gunner3";
				selectionFireAnim = "";
				castGunnerShadow = 0;
				viewGunnerShadow = 0;
				turretAxis="Turret3_axis";
				turretInfoType = "RscOptics_CAS_01_TGP";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerForceOptics = 0;
			};
		};
	};
};