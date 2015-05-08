class CfgPatches
{
	class OPTRE_Frigate
	{
		units[]										= {"OPTRE_Frigate_Final_Dawn","OPTRE_Frigate_Console","OPTRE_Frigate_Hangar_Door","OPTRE_Frigate_LiftArm","OPTRE_Frigate_M910_Turret"};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","A3_static_f"};
	};
};

class CfgVehicles
{
	class Static;
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
	/*class StaticWeapon: LandVehicle
	{
		epeImpulseDamageCoef = 8.0;
		vehicleClass = "Static";
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		selectionClan = "clan";
		selectionShowDamage = "poskozeni";
		bounding = "usti hlavne";
		alphaTracks = 0.7;
		textureTrackWheel = 0;
		unitInfoType = "RscUnitInfoSoldier";
		waterLeakiness = 100;
		selectionFireAnim = "";
		fireDustEffect = "FDustEffects";
		class DestructionEffects{};
		memoryPointMissile[] = {"spice rakety","usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety","konec hlavne"};
		memoryPointCargoLight = "cargo light";
		gunnerCanSee = "2+8+32+4";
		gunnerHasFlares = 0;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				selectionFireAnim = "";
				memoryPointsGetInGunner = "pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner";
				memoryPointGun = "usti hlavne";
				gunbeg = "usti hlavne";
				gunend = "konec hlavne";
				outGunnerMayFire = 1;
				optics = 1;
				minTurn = -40;
				maxTurn = 40;
				initTurn = 0;
				minElev = -7;
				maxElev = 70;
				initElev = 0;
				castGunnerShadow = 1;
				ejectDeadGunner = 0;
				canEject = 0;
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerForceOptics = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.25;
					minFov = 0.10;
					maxFov = 1.1;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
				class HitPoints
				{
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "action";
						visual = "autonomous_unhide";
						passThrough = 0;
						radius = 0.2;
					};
					class HitTurret: HitGun
					{
						armor = 0.3;
						class DestructionEffects
						{
							class Smoke
							{
								simulation = "particles";
								type = "WeaponWreckSmoke";
								position = "destructionEffect";
								intensity = 1;
								interval = 1;
								lifeTime = 5;
							};
						};
					};
				};
			};
		};
		damperSize = 1.4;
		damperForce = 0.8;
		gearBox[] = {-1,0,1};
		attenuationEffectType = "OpenCarAttenuation";
		soundEnviron[] = {"",1.0,0.7};
		soundEngine[] = {"",10.0,1};
		soundCrash[] = {"",0.56234133,1};
		soundGear[] = {"",0.00031622776,1};
		soundDammage[] = {"",0.01,1};
		getInAction = "";
		getOutAction = "";
		cargoGetInAction[] = {};
		cargoGetOutAction[] = {};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		mapSize = 2.55;
		getInRadius = 3.5;
		secondaryExplosion = -1;
		fuelExplosionPower = 0;
		fuelCapacity = 0;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		irTarget = 0;
		laserTarget = 0;
		armor = 24;
		armorStructural = 1;
		explosionShielding = 1;
		minTotalDamageThreshold = 0.01;
		crewCrashProtection = 1;
		crewExplosionProtection = 0;
		class HitPoints
		{
			class HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				passThrough = 1;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "telo";
				passThrough = 1;
			};
			class HitTurret
			{
				armor = 0.8;
				material = -1;
				name = "vez";
				passThrough = 1;
			};
			class HitGun
			{
				armor = 0.6;
				material = -1;
				name = "zbran";
				passThrough = 1;
			};
			class HitLTrack
			{
				armor = 0.6;
				material = -1;
				name = "pas_L";
				passThrough = 1;
			};
			class HitRTrack
			{
				armor = 0.6;
				material = -1;
				name = "pas_P";
				passThrough = 1;
			};
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "NEzbytek";
				visual = "zbytek";
				passThrough = 1;
			};
		};
		extCameraPosition[] = {0,1.5,-9};
		class ViewPilot: ViewPilot
		{
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		cost = 10000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hasDriver = 0;
		nightVision = 0;
		driverAction = "ManActCargo";
		driverInAction = "ManActCargo";
		memoryPointsGetInCargo = "pos_cargo";
		memoryPointsGetInCargoDir = "pos_cargo_dir";
		simulation = "tankX";
		occludeSoundsWhenIn = 1.0;
		obstructSoundsWhenIn = 1.0;
		formationX = 20;
		formationZ = 30;
		precision = 1;
		brakeDistance = 0;
		turnCoef = 0;
		maxSpeed = 0;
		canFloat = 0;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.7,1,0.3};
		camouflage = 1;
		audible = 1;
		hideProxyInCombat = 0;
		driverOpticsColor[] = {0,0,0,1};
		class CargoLight
		{
			color[] = {0,0,0,0};
			ambient[] = {0.6,0,0.15,1};
			brightness = 0.007;
		};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors{};
		class UserActions
		{
			class PressXToFlipTheThing
			{
				displayNameDefault = "$STR_A3_StaticWeapon_UserActions_PressXToFlipTheThing0";
				displayName = "$STR_A3_StaticWeapon_UserActions_PressXToFlipTheThing0";
				position = "";
				radius = 2.7;
				onlyForPlayer = 1;
				condition = "alive this AND not canmove this AND count crew this == 0";
				statement = "this setpos [getpos this select 0,getpos this select 1,(getpos this select 2)+1]";
			};
		};
		numberPhysicalWheels = 0;
	};*/
	
	class OPTRE_Frigate_Final_Dawn: Static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "FFG-437 Final Dawn";
		model = "\OPTRE_frigate\finaldawn_complex.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Frigate_Final_Dawn_Wreck: OPTRE_Frigate_Final_Dawn
	{
		displayName = "FFG-437 Final Dawn";
		model = "\OPTRE_frigate\finaldawn_wreck.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	/*class OPTRE_1_box: Static
	{
		scope = 1;
		scopeCurator = 1;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "1_box";
		model = "\OPTRE_frigate\1_box.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
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
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
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