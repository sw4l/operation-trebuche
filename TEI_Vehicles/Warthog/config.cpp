class CfgPatches
{
	class TEI_Vehicles_Warthog
	{
		units[]={"TEI_M12_FAV","TEI_M12_FAV_black","TEI_M12_FAV_tan","TEI_M12_FAV_snow","TEI_M12_FAV_ins","TEI_M813_TT","TEI_M813_TT_black","TEI_M813_TT_tan","TEI_M813_TT_snow","TEI_M12_LRV","TEI_M12_LRV_black","TEI_M12_LRV_tan","TEI_M12_LRV_snow","TEI_M12_LRV_ins","TEI_M12G1_LRV","TEI_M12_FAV_APC"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Air_F","A3_Air_F_Beta","A3_Weapons_F","TEI_Core"};
		magazines[]={};
		ammo[]={};
	};
};

class CfgAmmo
{
	class B_35mm_AA;
	class B_40mm_GPR;
	class B_40mm_APFSDS;
	class B_40mm_APFSDS_Tracer_Green;
	class Sh_120mm_APFSDS;
	class B_coil_20g_spike;
	class TEI_25x130mm_Slug: B_40mm_APFSDS_Tracer_Green
	{
		
		scope = 2;
		caliber = 50;
		//typicalSpeed = 9000;
		//maxSpeed = 9999;
		cost = 1000;
		hit = 300;
		whistleOnFire = 1;
		whistleDist = 14;
		tracerScale = 6;
		tracerStartTime = 0.001;
		tracerEndTime = 10.0;
		indirectHit = 15;
		indirectHitRange = 1;
		
		CraterEffects = "HEShellCrater";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		ExplosionEffects = "HEShellExplosion";
		
		//CraterEffects = "GrenadeCrater";
		//explosionEffects = "GrenadeExplosion";
		
		allowAgainstInfantry = 1;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",3.1622777,1,2000};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",3.1622777,1,2000};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_3",3.1622777,1,2000};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_4",3.1622777,1,2000};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_5",3.1622777,1,2000};
		soundHit6[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_6",3.1622777,1,2000};
		soundHit7[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_7",3.1622777,1,2000};
		soundHit8[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_8",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.13,"soundHit2",0.13,"soundHit3",0.13,"soundHit4",0.13,"soundHit5",0.12,"soundHit6",0.12,"soundHit7",0.12,"soundHit8",0.12};
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(180^0.5)";
			duration = "((round (180^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 180;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};

class CfgMagazines
{
	class Default;
	class 30Rnd_120mm_APFSDS_shells;
	class 5Rnd_GAT_missiles;
	class 4Rnd_GAA_missiles;
	
	class TEI_20Rnd_ALIM_GAUSS_slugs: 30Rnd_120mm_APFSDS_shells
	{
		scope = 2;
		displayName="20 Rnd ALIM Gauss Slugs";
		displayNameShort="Gauss Slug";
		ammo="TEI_25x130mm_Slug";
		//nameSound = "missiles";
		//ammo = "Sh_120mm_APFSDS";
		initSpeed = 10000;
		count=20;
	};
	
	class 3Rnd_102mm_rockets: 5Rnd_GAT_missiles
	{
		scope = 2;
		displayName = "3Rnd 102mm Guided AT Rockets";
		displayNameShort = "AT";
		count = 3;
		ammo = "M_Titan_AT";
		initSpeed = 40;
		maxLeadSpeed = 40;
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect = "DefaultRifle";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] = {"",1.25893,1,1};
		reloadSound[] = {"",0.000316228,1,20};
		nameSound = "missiles";
	};
	class 6Rnd_65mm_rockets: 4Rnd_GAA_missiles
	{
		scope = 2;
		displayName = "6Rnd 65mm Guided AA Rockets";
		displayNameShort = "AA";
		count = 6;
		ammo = "M_Zephyr";
		initSpeed = 40;
		maxLeadSpeed = 320;
		sound[] = {"A3\Sounds_F\weapons\Rockets\titan_2",1.25893,1,1000};
		weaponSoundEffect = "DefaultRifle";
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",0.501187,1.3,400};
		soundHit[] = {"",1.25893,1,1};
		reloadSound[] = {"",0.000316228,1,20};
		nameSound = "missiles";
	};
};

class CfgWeapons
{
	class HMG_127;
	class MGun;
	class autocannon_35mm;
	class cannon_120mm;
	class RCWSOptics;
	class missiles_titan;
	
	class TEI_M41_LAAG: HMG_127
	{
		class GunParticles
        {
            class effect1
        {
			positionName = "konec hlavne";
			directionName = "Usti hlavne";
            effectName = "MachineGunCloud";
            };
            class effect2
            {
            positionName = "machinegun_eject_pos";
            directionName = "machinegun_eject_dir";
            effectName = "MachineGunEject";
            };
            class effect3
            {
            positionName = "machinegun_eject_pos";
            directionName = "machinegun_eject_dir";
            effectName = "MachineGunCartridge2";
            };
        };
		selectionFireAnim = "muzzleFlash";						/// what selection is hidden when machinegun doesn't shoot
		displayName="M41 Light Anti-Aircraft Gun";
		aiDispersionCoefY = 15.0;
        aiDispersionCoefX = 20.0;
		class manual:MGun
		{
			displayName="M41 Light Anti-Aircraft Gun";
			reloadTime=0.0667;
			dispersion=0.00087;
			sounds[]={"StandardSound"};
		};
	};
	
	class TEI_102R_Turret: missiles_titan
	{
		//selectionFireAnim = "muzzleFlash";						/// what selection is hidden when machinegun doesn't shoot
		displayName="102mm SC-HE Turret";
		magazines[] = {"3Rnd_102mm_rockets"};
		aiDispersionCoefY = 15.0;
        aiDispersionCoefX = 20.0;
		class manual:MGun
		{
			displayName="102mm SC-HE Turret";
			reloadTime=0.0667;
			dispersion=0.00087;
			sounds[]={"StandardSound"};
		};
	};
	
	class TEI_M79_MLRS: missiles_titan
	{
		//selectionFireAnim = "muzzleFlash";						/// what selection is hidden when machinegun doesn't shoot
		displayName="M79 MLRS";
		magazines[] = {"6Rnd_65mm_rockets"};
		aiDispersionCoefY = 15.0;
        aiDispersionCoefX = 20.0;
		class manual:MGun
		{
			displayName="M79 MLRS";
			reloadTime=0.0667;
			dispersion=0.00087;
			sounds[]={"StandardSound"};
		};
	};
	
	class TEI_M68_GAUSS: cannon_120mm
	{
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",31.622776,1,10};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 6;
		autoReload = 1;
		ballisticsComputer = 1;
		canLock = 2;
		autoFire = 0;
		selectionFireAnim = "muzzleFlash";						/// what selection is hidden when machinegun doesn't shoot
		displayName = "M68 ALIM Gauss Cannon";
		magazines[] = {"TEI_20Rnd_ALIM_GAUSS_slugs"};
		class GunParticles
		{
			class effect1
        {
			positionName = "konec hlavne";
			directionName = "Usti hlavne";
            effectName = "MachineGunCloud";
            };
            class effect2
            {
            positionName = "machinegun_eject_pos";
            directionName = "machinegun_eject_dir";
            effectName = "MachineGunEject";
            };
            class effect3
            {
            positionName = "machinegun_eject_pos";
            directionName = "machinegun_eject_dir";
            effectName = "MachineGunCartridge2";
            };
		};
		
	};
};

class cfgRecoils
{
	recoil_recoiless_weapon[] = {0.5,0,0.04};
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
	class TEI_M12_base:Car_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]={"veh_vehicle_MRAP_s"};
				speechPlural[]={"veh_vehicle_MRAP_p"};
			};
		};
		author="Eridanus Insurrection Team";
		displayName="";
		class Library
		{
			libTextDesc="The M12 FAV Warthog is the UNSC's primary ground vehicle, used for its scouting and reconnaissance capacity, or as an integral part of a mechanized infantry unit; the M12 has been a part of the UNSC's armored vehicle fleet for fifty years, and is the most recognizable vehicle in their arsenal. It is a highly mobile, all-wheel-drive, all-wheel-steering, ICE-powered (Internal combustion engine) vehicle equipped with a contuously-variable transmission.";
		};
		model="TEI_Vehicles\Warthog\Warthog.p3d";
		picture="TEI_Vehicles\Warthog\Data\picture.paa";
		Icon="TEI_Vehicles\Warthog\Data\icon.paa";
		mapSize = 4;
		transportMaxBackpacks=5;
		slingLoadCargoMemoryPoints[]={"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		vehicleClass="Car";
		transportSoldier=0;
		crewVulnerable=1;
		nameSound = car;
		//attenuationEffectType = "CarAttenuation";
		crewCrashProtection=0.015;
		armor=120;
		cost=500000;
		canFloat=0;
		threat[]={0.8,0.6,0.3};
		camouflage=4;
		destrType="DestructBuilding";
		ejectDeadGunner=1;
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadL02:LightCarHeadL01
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				FlareSize=0.5;
			};
			class LightCarHeadL03:LightCarHeadL01
			{
				position="LightCarHeadL03";
				direction="LightCarHeadL03_end";
			};
			class LightCarHeadR01:LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class LightCarHeadR02:LightCarHeadR01
			{
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				FlareSize=0.5;
			};
			class LightCarHeadR03:LightCarHeadR01
			{
				position="LightCarHeadR03";
				direction="LightCarHeadR03_end";
			};
		};
		aggregateReflectors[]={{"LightCarHeadL01","LightCarHeadL02"},{"LightCarHeadR01","LightCarHeadR02"}};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
		};
		class AnimationSources:AnimationSources
		{
			class Gatling
			{
				source="revolving";
				weapon="TEI_M41_LAAG";
			};
			class Gatling_flash
			{
				source="reload";
				weapon="TEI_M41_LAAG";
			};
		};
		class HitPoints:HitPoints
		{
			class HitLFWheel:HitLFWheel
			{
				armor=500;
				explosionShielding=0.8;
				radius=0.25;
				passThrough=0;
			};
			class HitLBWheel:HitLBWheel
			{
				armor=1000;
				explosionShielding=0.8;
				radius=0.25;
				passThrough=0;
			};
			class HitRFWheel:HitRFWheel
			{
				armor=500;
				explosionShielding=0.8;
				radius=0.25;
				passThrough=0;
			};
			class HitRBWheel:HitRBWheel
			{
				armor=1000;
				explosionShielding=0.8;
				radius=0.25;
				passThrough=0;
			};
			class HitFuel:HitFuel
			{
				armor=0.75;
				name="palivo";
				material=-1;
				visual="";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitEngine:HitEngine
			{
				armor=0.75;
				name="motor";
				material=-1;
				visual="";
				passThrough=0.75;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.45;
			};
			class HitBody:HitBody
			{
				name="karoserie";
				visual="body";
				passThrough=0.95;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.33;
			};
			class HitGlass1:HitGlass1
			{
				armor=2.5;
				explosionShielding=0.25;
				visual="glass1";
				radius=0.25;
				name="glass1";
				passThrough=0;
			};
		};
		class Damage
		{
			tex[]={"TEI_Core\data\base\glass_ca.paa","TEI_Core\data\base\transparent.paa","TEI_Core\data\base\transparent.paa"};
			mat[]={"TEI_Vehicles\Warthog\data\warthog.rvmat","TEI_Vehicles\Warthog\data\warthog_damage.rvmat","TEI_Vehicles\Warthog\data\warthog_destruct.rvmat","TEI_Vehicles\Warthog\data\warthog_addons.rvmat","TEI_Vehicles\Warthog\data\warthog_addons_damage.rvmat","TEI_Vehicles\Warthog\data\warthog_addons_destruct.rvmat","TEI_Core\data\base\reflective_glass.rvmat","TEI_Core\data\base\null.rvmat","TEI_Core\data\base\null.rvmat"};
		};
		wheelDamageThreshold=0.9;
		wheelDestroyThreshold=0.99;
		wheelDamageRadiusCoef=0.95;
		wheelDestroyRadiusCoef=0.45;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		driverAction="Driver_low01";
		cargoAction[]={};
		hiddenSelections[]={"camo1"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_co.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class RearView
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class leftMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class rightMirror
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
		};
		showNVGCargo[]={0,1};
		soundAttenuationCargo[]={1,0};
		getInAction="GetInMRAP_01";
		getOutAction="GetOutMRAP_01";
		cargoGetInAction[]={"GetInMRAP_01_cargo"};
		cargoGetOutAction[]={"GetOutMRAP_01"};
		commanderCanSee=31;
		hideWeaponsDriver=1;
		hideWeaponsCargo=0;
		driverDoor="";
		cargoDoors[]={};
		terrainCoef=1.5;
		turnCoef = 5.5; //2.5
		precision=15;
		weapons[]={"TruckHorn2"};
		magazines[]={};
		attenuationEffectType="CarAttenuation";
		soundGetIn[]={"A3\Sounds_F\vehicles\soft\MRAP_01\getin",0.5623413,1};
		soundGetOut[]={"A3\Sounds_F\vehicles\soft\MRAP_01\getout",0.5623413,1,40};
		soundDammage[]={"",0.5623413,1};
		soundEngineOnInt[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",0.3548134,1};
		soundEngineOnExt[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",0.7079458,1,200};
		soundEngineOffInt[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",0.3548134,1};
		soundEngineOffExt[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",0.7079458,1,200};
		buildCrash0[]={"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,200};
		buildCrash1[]={"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,200};
		buildCrash2[]={"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,200};
		buildCrash3[]={"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,200};
		soundBuildingCrash[]={"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[]={"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,200};
		WoodCrash1[]={"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,200};
		WoodCrash2[]={"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,200};
		WoodCrash3[]={"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,200};
		WoodCrash4[]={"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,200};
		WoodCrash5[]={"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,200};
		soundWoodCrash[]={"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[]={"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,200};
		ArmorCrash1[]={"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,200};
		ArmorCrash2[]={"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,200};
		ArmorCrash3[]={"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,200};
		soundArmorCrash[]={"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.3981072,1,150};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.4466836,1,250};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_ext
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.5623413,1,300};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_ext
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.7079458,1,350};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*camPos*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_ext
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1,1,400};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*camPos*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.5623413,1,200};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.7079458,1,350};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.8912509,1,400};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.122018,1,425};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.258925,1,450};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class Idle_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.2511886,1};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class Engine_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.3162278,1};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.3981072,1};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.5011872,1};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.6309574,1};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class IdleThrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.3548134,1};
				frequency="0.95 + ((rpm/ 4500) factor[(800/ 4500),(1400/ 4500)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(600/ 4500),(1100/ 4500)]) * ((rpm/ 4500) factor[(1800/ 4500),(1300/ 4500)]))";
			};
			class EngineThrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.4466836,1};
				frequency="0.9 + ((rpm/ 4500) factor[(1400/ 4500),(2100/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1400/ 4500),(1800/ 4500)]) * ((rpm/ 4500) factor[(2300/ 4500),(2000/ 4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.5623413,1};
				frequency="0.9 +  ((rpm/ 4500) factor[(2100/ 4500),(2800/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(1900/ 4500),(2300/ 4500)]) * ((rpm/ 4500) factor[(3000/ 4500),(2500/ 4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.7079458,1};
				frequency="0.9 + ((rpm/ 4500) factor[(2800/ 4500),(3600/ 4500)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 4500) factor[(2500/ 4500),(3100/ 4500)]) * ((rpm/ 4500) factor[(4500/ 4500),(3700/ 4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]={"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.7943282,1};
				frequency="0.95 + ((rpm/ 4500) factor[(3600/ 4500),(4500/ 4500)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 4500) factor[(3800/ 4500),(4500/ 4500)])";
			};
			class TiresRockOut
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.412538,1,60};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.412538,1,60};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.258925,1,60};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.122018,1,60};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.258925,1,60};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.122018,1,60};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.122018,1,90};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.7079458,1};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.7079458,1};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.7079458,1};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.7079458,1};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.7079458,1};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]={"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.7079458,1};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5623413,1};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.7079458,1,80};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.7079458,1,80};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.7079458,1,60};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.7079458,1,60};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.7079458,1,60};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.3162278,1};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.3162278,1};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.3162278,1};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.3162278,1};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]={"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.3162278,1};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		maxSpeed=125;
		fuelCapacity=150;
		wheelCircumference=3.924;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		idleRpm=800;
		redRpm=4500;
		class complexGearbox
		{
			GearboxRatios[]={"R1",-3.182,"N",0,"D1",4.182,"D2",2.318,"D3",1.85,"D4",1.65,"D5",1.45};
			TransmissionRatios[]={"High",5.539};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=20;
		enginePower=276;
		maxOmega=471;
		peakTorque=1253;
		dampingRateFullThrottle=0.08;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.35;
		torqueCurve[]={{0,0},{0.178,0.5},{0.25,0.85},{0.4,0.9},{0.5,1},{0.725,0.95},{0.85,0.6},{1,0.3}};
		changeGearMinEffectivity[]={0.95,0.15,0.95,0.95,0.95,0.95,0.95};
		switchTime=0.31;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=30;
				MOI=2.8;
				dampingRate=0.1;
				maxBrakeTorque=2000; //2500
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.5;
				mMaxDroop=0.1;
				sprungMass=825;
				springStrength=51625;
				springDamperRate=8920;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]={{0,1},{0.5,1},{1,1}};
			};
			class LR:LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=2750; //3500
				side="left";
			};
			class RF:LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class RR:RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=2750; //3500
				side="right";
			};
		};
		supplyRadius=5;
		transportMaxMagazines=90;
		class TransportMagazines
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
		class TransportWeapons
		{
		};
	};
	class TEI_M12_FAV:TEI_M12_base
	{
		displayName="M12 FAV Warthog (Unarmed)";
		scope=2;
		author="Eridanus Insurrection Team";
		faction="TEI_UNSC";
		side=1;
		transportSoldier=0;
		crew="TEI_UNSC_Army_W_Rifleman_AR";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_co.paa"};
		vehicleClass="TEI_UNSC_Vehicle_class";
		class CargoTurret;
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				maxElev=10;
				minElev=-40;
				maxTurn=95;
				minTurn=-95;
				isPersonTurret=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
			};
			class CargoTurret_02:CargoTurret_01
			{
				gunnerAction="passenger_flatground_2";
				gunnerName="Rear R Passenger";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=3;
				gunnerCompartments="Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
				};
			};
			class CargoTurret_03:CargoTurret_02
			{
				gunnerAction="passenger_flatground_1";
				gunnerName="Rear L Passenger";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=2;
				gunnerCompartments="Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
					CargoTurret_02[]={-65,95};
				};
			};
		};
	};
	class TEI_M12_FAV_black:TEI_M12_FAV
	{
		displayName="M12 FAV Warthog (Unarmed) [Black]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_black_co.paa"};
	};
	class TEI_M12_FAV_tan:TEI_M12_FAV
	{
		displayName="M12 FAV Warthog (Unarmed) [Tan]";
		crew="TEI_UNSC_Army_D_Rifleman_AR";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_tan_co.paa"};
	};
	class TEI_M12_FAV_snow:TEI_M12_FAV
	{
		displayName="M12 FAV Warthog (Unarmed) [Snow]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_snow_co.paa"};
	};
	class TEI_M12_FAV_ins:TEI_M12_FAV
	{
		displayName="M12 FAV Warthog (Unarmed) [Innie]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_ins_co.paa"};
		vehicleClass="TEI_Ins_Vehicle_class";
		side=0;
		crew="TEI_Ins_URF_Rifleman_AR";
		faction="TEI_Ins";
	};
	
	///troop hog
	
	class TEI_M813_TT:TEI_M12_base
	{
		displayName="M831 TT Warthog (Transport)";
		scope=2;
		model="TEI_Vehicles\Warthog\Warthog_TT.p3d";
		author="Eridanus Insurrection Team";
		faction="TEI_UNSC";
		side=1;
		transportSoldier=0;
		crew="TEI_UNSC_Army_W_Rifleman_AR";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_co.paa"};
		vehicleClass="TEI_UNSC_Vehicle_class";
		class CargoTurret;
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				maxElev=10;
				minElev=-40;
				maxTurn=95;
				minTurn=-95;
				isPersonTurret=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
			};
			class CargoTurret_02:CargoTurret_01
			{
				gunnerAction="passenger_bench_1";
				gunnerName="Rear R Passenger";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				proxyIndex=4;
				gunnerCompartments="Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
				};
			};
			class CargoTurret_03:CargoTurret_02
			{
				gunnerAction="passenger_bench_1";
				gunnerName="Rear L Passenger";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=5;
				gunnerCompartments="Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
					CargoTurret_02[]={-65,95};
				};
			};
			class CargoTurret_04:CargoTurret_02
			{
				gunnerAction="passenger_inside_2";
				gunnerName="Left Passenger 2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=6;
				gunnerCompartments="Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
					CargoTurret_02[]={-65,95};
				};
			};
			class CargoTurret_05:CargoTurret_02
			{
				gunnerAction="passenger_inside_2";
				gunnerName="Right Passenger 2";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=7;
				gunnerCompartments="Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
					CargoTurret_02[]={-65,95};
				};
			};
			class CargoTurret_06:CargoTurret_02
			{
				gunnerAction="passenger_inside_2";
				gunnerName="Left Passenger 1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=8;
				gunnerCompartments="Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
					CargoTurret_02[]={-65,95};
				};
			};
			class CargoTurret_07:CargoTurret_02
			{
				gunnerAction="passenger_inside_2";
				gunnerName="Right Passenger 1";
				memoryPointsGetInGunner="pos gunner";
				memoryPointsGetInGunnerDir="pos gunner dir";
				proxyIndex=9;
				gunnerCompartments="Compartment2";
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
					CargoTurret_02[]={-65,95};
				};
			};
		};
	};
	class TEI_M813_TT_black:TEI_M813_TT
	{
		displayName="M831 TT Warthog (Transport) [Black]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_black_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class TEI_M813_TT_tan:TEI_M813_TT
	{
		displayName="M831 TT Warthog (Transport) [Tan]";
		crew="TEI_UNSC_Army_D_Rifleman_AR";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_tan_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class TEI_M813_TT_snow:TEI_M813_TT
	{
		displayName="M831 TT Warthog (Transport) [Snow]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_mg","attach_antenna"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_snow_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};
	
	
	/// MG hog
	
	
	class TEI_M12_LRV:TEI_M12_FAV
	{
		displayName="M12 LRV Warthog (MG)";
		author="Eridanus Insurrection Team";
		faction="TEI_UNSC";
		model="TEI_Vehicles\Warthog\Warthog_MG.p3d";
		transportSoldier=0;
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_co.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class RearView
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class leftMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class rightMirror
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class GunScreen
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.5;
				};
			};
		};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				maxElev=10;
				minElev=-40;
				maxTurn=95;
				minTurn=-95;
				isPersonTurret=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				minElev=-8;
				maxElev=16;
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
				hideWeaponsGunner=0;
				soundServo[]={"",0.01,1};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				turretInfoType="RscWeaponZeroing";
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="trigger";
				gunnerRightHandAnimName="trigger";
				memoryPointGun="machinegun";
				weapons[]={"TEI_M41_LAAG"};
				magazines[]={"500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow","500Rnd_127x99_mag_Tracer_Yellow"};
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsShowCursor=1;
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerForceOptics=0;
				class ViewGunner:ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					initFov=0.9;
					minFov=0.42;
					maxFov=0.9;
					visionMode[]={};
				};
			};
		};
	};
	class TEI_M12_LRV_black:TEI_M12_LRV
	{
		displayName="M12 LRV Warthog (MG) [Black]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_black_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class TEI_M12_LRV_tan:TEI_M12_LRV
	{
		displayName="M12 LRV Warthog (MG) [Tan]";
		crew="TEI_UNSC_Army_D_Rifleman_AR";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_tan_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class TEI_M12_LRV_snow:TEI_M12_LRV
	{
		displayName="M12 LRV Warthog (MG) [Snow]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_snow_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};
	class TEI_M12_LRV_ins:TEI_M12_LRV
	{
		displayName="M12 LRV Warthog (MG) [Innie]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_ins_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_ins_CO.paa"};
		vehicleClass="TEI_Ins_Vehicle_class";
		side=0;
		crew="TEI_Ins_URF_Rifleman_BR";
		faction="TEI_Ins";
	};
	
	/// gauss hog
	

	class TEI_M12G1_LRV:TEI_M12_LRV
	{
		model="TEI_Vehicles\Warthog\Warthog_G.p3d";
		displayName="M12G1 Warthog (Gauss)";
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_CO.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class RearView
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class leftMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class rightMirror
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			//class GunScreen
			class Gunner_display
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.5;
				};
			};
		};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				maxElev=10;
				minElev=-40;
				maxTurn=95;
				minTurn=-95;
				isPersonTurret=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				minElev=-8;
				maxElev=16;
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
				hideWeaponsGunner=0;
				soundServo[]={"",0.01,1};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="trigger";
				gunnerRightHandAnimName="trigger";
				memoryPointGun="machinegun";
				weapons[]={"TEI_M68_GAUSS"};
				magazines[] = {"TEI_20Rnd_ALIM_GAUSS_slugs","TEI_20Rnd_ALIM_GAUSS_slugs"};
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				//gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				//gunnerOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerOpticsShowCursor=1;
				turretInfoType="RscWeaponZeroing";
				//turretInfoType="RscOptics_crows";
				class Viewoptics: ViewOptics
				{
					/*initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 1;
					minFov = 0.3;
					maxFov = 1.2;*/
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;

				gunnerForceOptics=0;
				class ViewGunner:ViewOptics
				{
					initFov=0.7;
					minFov=0.002;
					maxFov=1.1;
				};
			};
		};
	};
	class TEI_M12G1_LRV_black:TEI_M12G1_LRV
	{
		displayName="M12G1 Warthog (Gauss) [Black]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_black_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_black_co.paa"};
	};
	class TEI_M12G1_LRV_tan:TEI_M12G1_LRV
	{
		displayName="M12G1 Warthog (Gauss) [Tan]";
		crew="TEI_UNSC_Army_D_Rifleman_AR";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_tan_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_tan_co.paa"};
	};
	class TEI_M12G1_LRV_snow:TEI_M12G1_LRV
	{
		displayName="M12G1 Warthog (Gauss) [Snow]";
		author="Eridanus Insurrection Team";
		hiddenSelections[]={"camo1","camo2","attach_apc","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_snow_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_snow_co.paa"};
	};
	class TEI_M12A1_LRV:TEI_M12_LRV
	{
		model="TEI_Vehicles\Warthog\warthog_AT.p3d";
		displayName="M12A1 Warthog (Rocket)";
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_CO.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class RearView
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class leftMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class rightMirror
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			//class GunScreen
			class Gunner_display
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.5;
				};
			};
		};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				maxElev=10;
				minElev=-40;
				maxTurn=95;
				minTurn=-95;
				isPersonTurret=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				minElev=-8;
				maxElev=16;
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
				hideWeaponsGunner=0;
				soundServo[]={"",0.01,1};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="trigger";
				gunnerRightHandAnimName="trigger";
				memoryPointGun="machinegun";
				weapons[]={"TEI_102R_Turret"};
				magazines[] = {"3Rnd_102mm_rockets","3Rnd_102mm_rockets"};
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				//gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				//gunnerOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerOpticsShowCursor=1;
				turretInfoType="RscWeaponZeroing";
				//turretInfoType="RscOptics_crows";
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {2};
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;

				gunnerForceOptics=0;
				class ViewGunner:ViewOptics
				{
					initFov=0.7;
					minFov=0.05;
					maxFov=1.1;
				};
			};
		};
	};
	class TEI_M12R_AA:TEI_M12_LRV
	{
		model="TEI_Vehicles\Warthog\warthog_AA.p3d";
		displayName="M12R Warthog (AA)";
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_CO.paa"};
		class RenderTargets
		{
			class FrontView
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class RearView
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class leftMirror
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			class rightMirror
			{
				renderTarget="rendertarget3";
				class CameraView1
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.7;
				};
			};
			//class GunScreen
			class Gunner_display
			{
				renderTarget="rendertarget4";
				class CameraView1
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderQuality=2;
					renderVisionMode=2;
					fov=0.5;
				};
			};
		};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=1;
				maxElev=10;
				minElev=-40;
				maxTurn=95;
				minTurn=-95;
				isPersonTurret=1;
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
			};
			class MainTurret:MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				minElev=-8;
				maxElev=16;
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
				hideWeaponsGunner=0;
				soundServo[]={"",0.01,1};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="trigger";
				gunnerRightHandAnimName="trigger";
				//memoryPointGun="machinegun";
				weapons[]={"TEI_M79_MLRS"};
				magazines[] = {"6Rnd_65mm_rockets"};
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				//gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				//gunnerOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerOpticsShowCursor=1;
				turretInfoType="RscWeaponZeroing";
				//turretInfoType="RscOptics_crows";
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {2};
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;

				gunnerForceOptics=0;
				class ViewGunner:ViewOptics
				{
					initFov=0.7;
					minFov=0.05;
					maxFov=1.1;
				};
			};
		};
	};
	
	/// apc hog
	
	class TEI_M12_FAV_APC:TEI_M12_FAV
	{
		displayName="M12 FAV Warthog (APC)";
		author="Eridanus Insurrection Team";
		model="TEI_Vehicles\Warthog\Warthog_APC.p3d";
		hiddenSelections[]={"camo1","camo2","attach_mg","attach_troop"};
		hiddenSelectionsTextures[]={"TEI_Vehicles\Warthog\data\warthog_ins_co.paa","TEI_Vehicles\Warthog\data\warthog_addons_ins_CO.paa"};
		vehicleClass="TEI_Ins_Vehicle_class";
		side=0;
		crew="TEI_Ins_URF_Rifleman_AR";
		faction="TEI_Ins";
		transportSoldier=4;
		cargoAction[]={"passenger_apc_narrow_generic01","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02","passenger_generic01_leanright"};
		cargoIsCoDriver[]={0,0};
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		hideWeaponsCargo=1;
		cargoProxyIndexes[]={6,7,8,9};
		class Turrets:Turrets
		{
			class CargoTurret_01:CargoTurret
			{
				gunnerAction="vehicle_turnout_1";
				gunnerCompartments="Compartment2";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				memoryPointGunnerOptics="";
				gunnerName="Hatch Gunner";
				proxyIndex=10;
				maxElev=25;
				minElev=-20;
				maxTurn=65;
				minTurn=-65;
				isPersonTurret=1;
			};
			class CargoTurret_02:CargoTurret
			{
				gunnerAction="passenger_inside_2";
				gunnerCompartments="Compartment3";
				memoryPointsGetInGunner="pos pas";
				memoryPointsGetInGunnerDir="pos pas dir";
				memoryPointGunnerOptics="";
				gunnerName="Front Passenger";
				proxyIndex=11;
				maxElev=10;
				minElev=-5;
				maxTurn=-15;
				minTurn=-55;
				isPersonTurret=1;
			};
		};
	};
};
