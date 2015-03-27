
class CfgPatches
{
	class TEI_Ins_Object_class
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core","static_f"};
	};
};

class CfgVehicles
{
	class All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class TargetTraining: NonStrategic {};
	class TargetGrenade: TargetTraining {};
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
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
	};
	
	class TEI_testbox: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "test box";
		model = "\TEI_frigate\testbox.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_final_dawn: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Final Dawn";
		model = "\TEI_frigate\finaldawn_empty.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_1_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "1_box";
		model = "\TEI_frigate\1_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_2_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "2_box";
		model = "\TEI_frigate\2_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_3_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "3_box";
		model = "\TEI_frigate\3_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_4_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "4_box";
		model = "\TEI_frigate\4_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_5_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "5_box";
		model = "\TEI_frigate\5_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_6_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "6_box";
		model = "\TEI_frigate\6_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_7_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "7_box";
		model = "\TEI_frigate\7_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_8_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "8_box";
		model = "\TEI_frigate\8_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_9_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "9_box";
		model = "\TEI_frigate\9_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_10_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "10_box";
		model = "\TEI_frigate\10_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_11_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "11_box";
		model = "\TEI_frigate\11_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_12_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "12_box";
		model = "\TEI_frigate\12_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_13_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "13_box";
		model = "\TEI_frigate\13_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_14_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "14_box";
		model = "\TEI_frigate\14_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_15_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "15_box";
		model = "\TEI_frigate\15_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_16_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "16_box";
		model = "\TEI_frigate\16_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_17_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "17_box";
		model = "\TEI_frigate\17_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_19_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "19_box";
		model = "\TEI_frigate\19_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_20_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "20_box";
		model = "\TEI_frigate\20_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_21_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "21_box";
		model = "\TEI_frigate\21_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_22_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "22_box";
		model = "\TEI_frigate\22_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_23_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "23_box";
		model = "\TEI_frigate\23_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_24_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "24_box";
		model = "\TEI_frigate\24_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_25_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "25_box";
		model = "\TEI_frigate\25_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_26_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "26_box";
		model = "\TEI_frigate\26_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_27_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "27_box";
		model = "\TEI_frigate\27_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_28_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "28_box";
		model = "\TEI_frigate\28_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_29_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "29_box";
		model = "\TEI_frigate\29_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_30_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "30_box";
		model = "\TEI_frigate\30_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_31_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "31_box";
		model = "\TEI_frigate\31_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_interior: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Interior";
		model = "\TEI_frigate\interior.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_console: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Console";
		model = "\TEI_frigate\console.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_spawn_door: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Spawn Door";
		model = "\TEI_frigate\spawn_door.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_liftarm: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Lift Arm";
		model = "\TEI_frigate\liftarm.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_frigate_gun: StaticWeapon
	{
		scope = 2;
		armor = 450;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Frigate Gun";
		model = "\TEI_frigate\turret2.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		class Turrets: Turrets
		{
			class MainTurret:MainTurret
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
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="trigger";
				gunnerRightHandAnimName="trigger";
				memoryPointGun="machinegun";
				weapons[]={"cannon_120mm"};
				magazines[] = {"32Rnd_120mm_APFSDS_shells_Tracer_Red","32Rnd_120mm_APFSDS_shells_Tracer_Red","32Rnd_120mm_APFSDS_shells_Tracer_Red"};
				memoryPointGunnerOptics="gunnerview";
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
