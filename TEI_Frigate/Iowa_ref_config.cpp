////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.88
//Wed Mar 25 23:49:13 2015 : Source 'file' date Wed Mar 25 23:49:13 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class F:\Program Files (x86)\Steam\steamapps\common\Arma 3\@338\Addons\Ships\338\Ships\config.bin{
class CfgPatches
{
	class Iowa_Battleship
	{
		requiredVersion = 0.1;
		units[] = {"USS_Iowa_Battleship"};
		weapons[] = {};
	};
};
class IowaMainCannonFired
{
	class IowaCannonFired1
	{
		intensity = 1;
		lifeTime = 0.05;
		position[] = {0,0,0};
		simulation = "particles";
		type = "IowaCannonFired1";
	};
	class IowaCannonFired2
	{
		intensity = 1;
		lifeTime = 0.18;
		position[] = {0,0,0};
		simulation = "particles";
		type = "IowaCannonFired2";
	};
	class IowaCannonFired3
	{
		intensity = 1;
		interval = 1;
		lifeTime = 5;
		position[] = {0,0,0};
		qualityLevel = 2;
		simulation = "particles";
		type = "IowaCannonFired3";
	};
	class CannonFired3Med
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		qualityLevel = 1;
		simulation = "particles";
		type = "CannonFired3";
	};
	class Light1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.16;
		position[] = {0,0,0};
		simulation = "light";
		type = "IowaFiredLightCanon";
	};
};
class Iowa406mmShellExplosion
{
	class IowaLightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,1.5,0};
		intensity = 0.005;
		interval = 1;
		lifeTime = 0.5;
	};
	class IowaExp1
	{
		simulation = "particles";
		type = "IowaExp1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.35;
	};
	class IowaSmoke1
	{
		simulation = "particles";
		type = "BombSmk1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class IowaSmoke2
	{
		simulation = "particles";
		type = "BombSmk2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class IowaSmoke3
	{
		simulation = "particles";
		type = "BombSmk3";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class IowaDust
	{
		simulation = "particles";
		type = "BombDust";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class CfgCloudlets
{
	class Default;
	class IowaCannonFired1: Default
	{
		interval = 0.02;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Explosion_4x4";
		particleFSNtieth = 4;
		particleFSIndex = 0;
		particleFSFrameCount = 16;
		particleFSLoop = 1;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.14;
		moveVelocity[] = {"80*directionX","80*directionY","80*directionZ"};
		rotationVelocity = 2;
		weight = 1.275;
		volume = 1;
		rubbing = 0;
		size[] = {10,24,60,15};
		color[] = {{ 1,1,1,-8 },{ 1,1,1,-20 },{ 1,1,1,-20 },{ 1,1,1,-20 },{ 1,1,1,-8 }};
		animationSpeed[] = {5};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		animationSpeedCoef = 1;
		colorCoef[] = {1,1,1,1};
		sizeCoef = 1;
		position[] = {"positionX + (directionLocalX * 1.3)","positionY + (directionLocalY * 1.3)","positionZ + (directionLocalZ * 1.3)"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 1;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0.0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		blockAIVisibility = 0;
		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = -0.1;
		emissiveColor[] = {{ 50,30,30,0 },{ 0,0,0,0 }};
	};
	class IowaCannonFired2: Default
	{
		interval = 0.0035;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 4;
		moveVelocity[] = {"85*directionX","85*directionY","85*directionZ"};
		rotationVelocity = 1;
		weight = 1.6;
		volume = 1;
		rubbing = 0.1;
		size[] = {9,30,42,48};
		color[] = {{ 0.0,0.0,0.0,0.15 },{ 0.1,0.1,0.1,0.1 },{ 0.1,0.1,0.1,0.05 },{ 0.5,0.5,0.5,0.008 },{ 0.8,0.8,0.8,0.001 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.03;
		onTimerScript = "";
		beforeDestroyScript = "";
		animationSpeedCoef = 1;
		colorCoef[] = {1,1,1,1.6};
		sizeCoef = 2.0;
		position[] = {"positionX + (directionLocalX * 1.3)","positionY + (directionLocalY * 1.3)","positionZ + (directionLocalZ * 1.3)"};
		lifeTimeVar = 0.6;
		positionVar[] = {2.2,2.2,2.2};
		MoveVelocityVar[] = {24,24,24};
		rotationVelocityVar = 14;
		sizeVar = 0.6;
		colorVar[] = {0,0,0,0.2};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		blockAIVisibility = 0;
		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = -0.1;
	};
	class IowaCannonFired3: Default
	{
		interval = 0.01;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2.1;
		moveVelocity[] = {"directionX * 2.2","directionY * 2.2","directionZ * 2.2"};
		rotationVelocity = 1;
		weight = 0.1285;
		volume = 0.1;
		rubbing = 0.8;
		size[] = {0.25,0.6,1.1};
		sizeCoef = "2.5 * (vehicleSpeedSize interpolate [1.5,18,1,2])";
		color[] = {{ 0.8,0.8,0.8,0.4 },{ 0.8,0.8,0.8,0.3 },{ 0.8,0.8,0.8,0.05 },{ 0.8,0.8,0.8,0.01 }};
		colorCoef[] = {1,1,1,"0.3 * (vehicleSpeedSize interpolate [1.5,18,2,1])"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.05;
		randomDirectionIntensity = 0.15;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 0;
		destroyOnWaterSurfaceOffset = -0.1;
		lifeTimeVar = 0.2;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.05,0.05,0.05};
		MoveVelocityVar[] = {0.05,0.05,0.05};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class IowaExp1: Default
	{
		interval = 0.007;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 2;
		particleFSFrameCount = 80;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 1.3;
		moveVelocity[] = {0,5.5,0};
		rotationVelocity = 0;
		weight = 2;
		volume = 1;
		rubbing = 0.07;
		size[] = {7,10};
		color[] = {{ 1,1,1,-20 },{ 1,1,1,-15 },{ 1,1,1,-10 },{ 1,1,1,-6 },{ 1,1,1,-2 }};
		animationSpeed[] = {0.25};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.3;
		positionVar[] = {5,6,5};
		MoveVelocityVar[] = {2,2,2};
		rotationVelocityVar = 25;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.05;
	};
};
class cfgLights
{
	class FiredLightCannon;
	class IowaFiredLightCanon: FiredLightCannon
	{
		intensity = 300000;
		position[] = {"positionX + (directionLocalX * 3.0)","positionY + (directionLocalY * 3.0)","positionZ + (directionLocalZ * 3.0)"};
		class Attenuation
		{
			hardLimitEnd = 1200;
			hardLimitStart = 800;
		};
	};
};
class cfgAmmo
{
	class Sh_120mm_HE;
	class Sh_155mm_AMOS;
	class Sh_406mm_HE: Sh_120mm_HE
	{
		class CamShakeFire
		{
			power = 15;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 0.07;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 400;
			duration = 1;
			frequency = 20;
		};
		ExplosionEffects = "Iowa406mmShellExplosion";
		fuseDistance = 100;
		hit = 1200;
		indirectHit = 300;
		indirectHitRange = 60;
		timeToLive = 60;
	};
	class Sh_406mm_HE_Mo: Sh_155mm_AMOS
	{
		hit = 1200;
		indirectHit = 300;
		indirectHitRange = 60;
		explosive = 0.8;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "Iowa406mmShellExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		timeToLive = 180;
		class CamShakeFire
		{
			power = 15;
			duration = 0.5;
			frequency = 20;
			distance = 30;
		};
		class CamShakePlayerFire
		{
			power = 0.07;
			duration = 0.1;
			frequency = 20;
		};
		class CamShakeHit
		{
			power = 400;
			duration = 1;
			frequency = 20;
		};
	};
};
class CfgMagazines
{
	class 16Rnd_120mm_HE_shells;
	class 32Rnd_120mm_APFSDS_shells;
	class 32Rnd_155mm_Mo_shells;
	class 16Rnd_127mm_HE_shells: 16Rnd_120mm_HE_shells
	{
		count = 16;
		displayName = "HE Shells";
		displayNameShort = "HE";
		mass = 9;
	};
	class 16Rnd_127mm_AP_shells: 32Rnd_120mm_APFSDS_shells
	{
		count = 16;
		displayName = "AP Shells";
		displayNameShort = "AP";
		mass = 7;
	};
	class 32Rnd_406mm_HE_shells: 16Rnd_120mm_HE_shells
	{
		ammo = "Sh_406mm_HE";
		count = 32;
		displayName = "HE Shells";
		displayNameShort = "HE";
		mass = 900;
	};
	class 32Rnd_406mm_AP_shells: 32Rnd_120mm_APFSDS_shells
	{
		count = 32;
		displayName = "AP Shells";
		displayNameShort = "AP";
		initSpeed = 1980;
		mass = 900;
	};
	class 32Rnd_406mm_HE_Mo_shells: 32Rnd_155mm_Mo_shells
	{
		ammo = "Sh_406mm_HE_Mo";
		count = 32;
		displayName = "HE Shells";
		displayNameShort = "HE";
		mass = 900;
	};
};
class CfgFactionClasses
{
	access = 1;
	class USNavy
	{
		displayName = "NATO";
		priority = 2;
		side = 1;
	};
};
class CfgWeapons
{
	class Default;
	class MGun;
	class MGunCore;
	class cannon_120mm
	{
		class close;
		class short;
		class medium;
		class far;
		class player;
	};
	class gatling_20mm
	{
		class close;
		class short;
		class medium;
		class far;
		class manual;
	};
	class mortar_155mm_AMOS
	{
		class Single1;
		class Burst1;
	};
	class Iowa_PhalanxGun_1: gatling_20mm
	{
		displayName = "Gatling 20mm";
		magazines[] = {"2000Rnd_20mm_shells"};
		magazineReloadTime = 15;
		modes[] = {"closeb","shortb","mediumb","farb","player"};
		class closeb: close
		{
			displayName = "Auto";
			textureType = "fullAuto";
			reloadTime = 0.03;
			autofire = 1;
			burst = 35;
		};
		class shortb: short
		{
			displayName = "Auto";
			textureType = "fullAuto";
			reloadTime = 0.03;
			autofire = 1;
			burst = 30;
		};
		class mediumb: medium
		{
			displayName = "Auto";
			textureType = "fullAuto";
			reloadTime = 0.03;
			autofire = 1;
			burst = 25;
		};
		class farb: far
		{
			displayName = "Auto";
			textureType = "fullAuto";
			reloadTime = 0.03;
			autofire = 1;
			burst = 20;
		};
		class player: manual
		{
			displayName = "Auto";
			textureType = "fullAuto";
			reloadTime = 0.03;
			autofire = 1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "phalanx_1_barrelEnd";
				directionName = "phalanx_1_muzzle";
				effectName = "MachineGunCloud";
			};
		};
	};
	class Iowa_PhalanxGun_2: Iowa_PhalanxGun_1
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "phalanx_2_barrelEnd";
				directionName = "phalanx_2_muzzle";
				effectName = "MachineGunCloud";
			};
		};
	};
	class Iowa_PhalanxGun_3: Iowa_PhalanxGun_1
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "phalanx_3_barrelEnd";
				directionName = "phalanx_3_muzzle";
				effectName = "MachineGunCloud";
			};
		};
	};
	class Iowa_PhalanxGun_4: Iowa_PhalanxGun_1
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "phalanx_4_barrelEnd";
				directionName = "phalanx_4_muzzle";
				effectName = "MachineGunCloud";
			};
		};
	};
	class Iowa_406mmGun_A_Single: cannon_120mm
	{
		displayName = "Cannon 16 Inch";
		magazines[] = {"32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells"};
		magazineReloadTime = 35;
		modes[] = {"farb","semi"};
		class farb: far
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 5.0;
			autofire = 0;
			burst = 1;
		};
		class semi: player
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 2.0;
			autofire = 0;
			burst = 10;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_a_muzzle_l";
				directionName = "turretpri_a_barrelEnd_l";
				effectName = "CannonFired";
			};
			class effect2
			{
				positionName = "turretpri_a_muzzle_c";
				directionName = "turretpri_a_barrelEnd_c";
				effectName = "CannonFired";
			};
			class effect3
			{
				positionName = "turretpri_a_muzzle_r";
				directionName = "turretpri_a_barrelEnd_r";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_406mmGun_A_Burst: cannon_120mm
	{
		displayName = "Cannon 16 Inch";
		magazines[] = {"32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells"};
		magazineReloadTime = 35;
		modes[] = {"farb","semi"};
		class farb: far
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 5.0;
			autofire = 0;
			burst = 1;
		};
		class semi: player
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 5.0;
			autofire = 0;
			burst = 1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_a_barrelStart_l";
				directionName = "turretpri_a_barrelEnd_l";
				effectName = "CannonFired";
			};
			class effect2
			{
				positionName = "turretpri_a_barrelStart_c";
				directionName = "turretpri_a_barrelEnd_c";
				effectName = "CannonFired";
			};
			class effect3
			{
				positionName = "turretpri_a_barrelStart_r";
				directionName = "turretpri_a_barrelEnd_r";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_406mmGun_A_l: cannon_120mm
	{
		displayName = "Cannon 16 Inch Gun 1";
		magazines[] = {"32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells"};
		magazineReloadTime = 35;
		gunBeg = "turretpri_a_barrelStart_l";
		gunEnd = "turretpri_a_barrelEnd_l";
		muzzleEnd = "turretpri_a_barrelStart_l";
		muzzlePos = "turretpri_a_barrelEnd_l";
		selectionfireanim = "turretpri_a_muzzle_l";
		modes[] = {"closeb","shortb","mediumb","farb","semi"};
		class closeb: close
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
			begin1[] = {"A3\Sounds_F\weapons\Cannons\cannon_1",3.1622777,1,2000};
			aiDispersionCoefX = 4;
			aiDispersionCoefY = 4;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 500;
			minRange = 150;
			midRange = 525;
			maxRange = 1000;
		};
		class shortb: short
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 4;
			aiDispersionCoefY = 4;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1200;
			minRange = 1000;
			midRange = 1250;
			maxRange = 1500;
		};
		class mediumb: medium
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
			aiRateOfFire = 20;
			aiRateOfFireDistance = 2000;
			minRange = 1500;
			midRange = 2250;
			maxRange = 3000;
		};
		class farb: far
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			aiRateOfFire = 30;
			aiRateOfFireDistance = 4000;
			minRange = 3000;
			midRange = 4500;
			maxRange = 6000;
		};
		class semi: player
		{
			begin1[] = {"A3\Sounds_F\weapons\Cannons\cannon_1",3.1622777,1,2000};
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_a_muzzle_l";
				directionName = "turretpri_a_barrelEnd_l";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mmGun_A_c: Iowa_406mmGun_A_l
	{
		displayName = "Cannon 16 Inch Gun 2";
		gunBeg = "turretpri_a_barrelStart_c";
		gunEnd = "turretpri_a_barrelEnd_c";
		muzzleEnd = "turretpri_a_barrelStart_c";
		muzzlePos = "turretpri_a_barrelEnd_c";
		selectionfireanim = "turretpri_a_muzzle_c";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_a_muzzle_c";
				directionName = "turretpri_a_barrelEnd_c";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mmGun_A_r: Iowa_406mmGun_A_l
	{
		displayName = "Cannon 16 Inch Gun 3";
		gunBeg = "turretpri_a_barrelStart_r";
		gunEnd = "turretpri_a_barrelEnd_r";
		muzzleEnd = "turretpri_a_barrelStart_r";
		muzzlePos = "turretpri_a_barrelEnd_r";
		selectionfireanim = "turretpri_a_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_a_muzzle_r";
				directionName = "turretpri_a_barrelEnd_r";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mmGun_B_l: Iowa_406mmGun_A_l
	{
		displayName = "Cannon 16 Inch Gun 1";
		gunBeg = "turretpri_b_barrelStart_l";
		gunEnd = "turretpri_b_barrelEnd_l";
		muzzleEnd = "turretpri_b_barrelStart_l";
		muzzlePos = "turretpri_b_barrelEnd_l";
		selectionfireanim = "turretpri_b_muzzle_l";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_b_muzzle_l";
				directionName = "turretpri_b_barrelEnd_l";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mmGun_B_c: Iowa_406mmGun_A_l
	{
		displayName = "Cannon 16 Inch Gun 2";
		gunBeg = "turretpri_b_barrelStart_c";
		gunEnd = "turretpri_b_barrelEnd_c";
		muzzleEnd = "turretpri_b_barrelStart_c";
		muzzlePos = "turretpri_b_barrelEnd_c";
		selectionfireanim = "turretpri_b_muzzle_c";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_b_muzzle_c";
				directionName = "turretpri_b_barrelEnd_c";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mmGun_B_r: Iowa_406mmGun_A_l
	{
		displayName = "Cannon 16 Inch Gun 3";
		gunBeg = "turretpri_b_barrelStart_r";
		gunEnd = "turretpri_b_barrelEnd_r";
		muzzleEnd = "turretpri_b_barrelStart_r";
		muzzlePos = "turretpri_b_barrelEnd_r";
		selectionfireanim = "turretpri_b_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_b_muzzle_r";
				directionName = "turretpri_b_barrelEnd_r";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mmGun_C_l: cannon_120mm
	{
		displayName = "Cannon 16 Inch Gun 1";
		gunBeg = "turretpri_c_barrelStart_l";
		gunEnd = "turretpri_c_barrelEnd_l";
		muzzleEnd = "turretpri_c_barrelStart_l";
		muzzlePos = "turretpri_c_barrelEnd_l";
		selectionfireanim = "turretpri_c_muzzle_l";
		magazines[] = {"32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells"};
		magazineReloadTime = 35;
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		ballisticsComputer = 2;
		modes[] = {"closeb","shortb","mediumb","farb","semi","burst1"};
		class closeb: close
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 4;
			aiDispersionCoefY = 4;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 500;
			minRange = 150;
			midRange = 525;
			maxRange = 1000;
		};
		class shortb: short
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 4;
			aiDispersionCoefY = 4;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1200;
			minRange = 1000;
			midRange = 1250;
			maxRange = 1500;
		};
		class mediumb: medium
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
			aiRateOfFire = 20;
			aiRateOfFireDistance = 2000;
			minRange = 1500;
			midRange = 2250;
			maxRange = 3000;
		};
		class farb: far
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			aiRateOfFire = 30;
			aiRateOfFireDistance = 4000;
			minRange = 3000;
			midRange = 4500;
			maxRange = 6000;
		};
		class semi: player
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 10.0;
			autofire = 0;
			burst = 1;
		};
		class burst1: far
		{
			showToPlayer = 0;
			displayName = "Burst";
			burst = 4;
			soundBurst = 0;
			reloadTime = 10.0;
			minRange = 540;
			minRangeProbab = 0.3;
			midRange = 2355;
			midRangeProbab = 0.4;
			maxRange = 5500;
			maxRangeProbab = 0.3;
			artilleryDispersion = 5.93;
			artilleryCharge = 0.35;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_c_muzzle_l";
				directionName = "turretpri_c_barrelEnd_l";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mmGun_C_c: Iowa_406mmGun_A_l
	{
		displayName = "Cannon 16 Inch Gun 2";
		gunBeg = "turretpri_c_barrelStart_c";
		gunEnd = "turretpri_c_barrelEnd_c";
		muzzleEnd = "turretpri_c_barrelStart_c";
		muzzlePos = "turretpri_c_barrelEnd_c";
		selectionfireanim = "turretpri_c_muzzle_c";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_c_muzzle_c";
				directionName = "turretpri_c_barrelEnd_c";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mmGun_C_r: Iowa_406mmGun_A_l
	{
		displayName = "Cannon 16 Inch Gun 3";
		gunBeg = "turretpri_c_barrelStart_r";
		gunEnd = "turretpri_c_barrelEnd_r";
		muzzleEnd = "turretpri_c_barrelStart_r";
		muzzlePos = "turretpri_c_barrelEnd_r";
		selectionfireanim = "turretpri_c_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_c_muzzle_r";
				directionName = "turretpri_c_barrelEnd_r";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_127mmGun_1_l: cannon_120mm
	{
		displayName = "Cannon 5 Inch Gun 1";
		gunBeg = "turretsec_1_barrelStart_l";
		gunEnd = "turretsec_1_barrelEnd_l";
		muzzleEnd = "turretsec_1_barrelStart_l";
		muzzlePos = "turretsec_1_barrelEnd_l";
		selectionfireanim = "turretsec_1_muzzle_l";
		magazines[] = {"16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells"};
		magazineReloadTime = 15;
		modes[] = {"closeb","shortb","mediumb","farb","semi"};
		class closeb: close
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 4.5;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 3;
			aiDispersionCoefY = 3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 800;
		};
		class shortb: short
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 4.5;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 4;
			aiDispersionCoefY = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1500;
		};
		class mediumb: medium
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 4.5;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 2000;
		};
		class farb: far
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 4.5;
			autofire = 0;
			burst = 1;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 2500;
			minRange = 1500;
			midRange = 3000;
			maxRange = 4000;
		};
		class semi: player
		{
			displayName = "Semi";
			textureType = "semi";
			reloadTime = 4.5;
			autofire = 0;
			burst = 1;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_1_barrelEnd_l";
				directionName = "turretsec_1_barrelStart_l";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_1_r: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 2";
		gunBeg = "turretsec_1_barrelStart_r";
		gunEnd = "turretsec_1_barrelEnd_r";
		muzzleEnd = "turretsec_1_barrelStart_r";
		muzzlePos = "turretsec_1_barrelEnd_r";
		selectionfireanim = "turretsec_1_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_1_barrelEnd_r";
				directionName = "turretsec_1_barrelStart_r";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_2_l: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 1";
		gunBeg = "turretsec_2_barrelStart_l";
		gunEnd = "turretsec_2_barrelEnd_l";
		muzzleEnd = "turretsec_2_barrelStart_l";
		muzzlePos = "turretsec_2_barrelEnd_l";
		selectionfireanim = "turretsec_2_muzzle_l";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_2_barrelEnd_l";
				directionName = "turretsec_2_barrelStart_l";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_2_r: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 2";
		gunBeg = "turretsec_2_barrelStart_r";
		gunEnd = "turretsec_2_barrelEnd_r";
		muzzleEnd = "turretsec_2_barrelStart_r";
		muzzlePos = "turretsec_2_barrelEnd_r";
		selectionfireanim = "turretsec_2_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_2_barrelEnd_r";
				directionName = "turretsec_2_barrelStart_r";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_3_l: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 1";
		gunBeg = "turretsec_3_barrelStart_l";
		gunEnd = "turretsec_3_barrelEnd_l";
		muzzleEnd = "turretsec_3_barrelStart_l";
		muzzlePos = "turretsec_3_barrelEnd_l";
		selectionfireanim = "turretsec_3_muzzle_l";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_3_barrelEnd_l";
				directionName = "turretsec_3_barrelStart_l";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_3_r: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 2";
		gunBeg = "turretsec_3_barrelStart_r";
		gunEnd = "turretsec_3_barrelEnd_r";
		muzzleEnd = "turretsec_3_barrelStart_r";
		muzzlePos = "turretsec_3_barrelEnd_r";
		selectionfireanim = "turretsec_3_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_3_barrelEnd_r";
				directionName = "turretsec_3_barrelStart_r";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_4_l: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 1";
		gunBeg = "turretsec_4_barrelStart_l";
		gunEnd = "turretsec_4_barrelEnd_l";
		muzzleEnd = "turretsec_4_barrelStart_l";
		muzzlePos = "turretsec_4_barrelEnd_l";
		selectionfireanim = "turretsec_4_muzzle_l";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_4_barrelEnd_l";
				directionName = "turretsec_4_barrelStart_l";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_4_r: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 2";
		gunBeg = "turretsec_4_barrelStart_r";
		gunEnd = "turretsec_4_barrelEnd_r";
		muzzleEnd = "turretsec_4_barrelStart_r";
		muzzlePos = "turretsec_4_barrelEnd_r";
		selectionfireanim = "turretsec_4_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_4_barrelEnd_r";
				directionName = "turretsec_4_barrelStart_r";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_5_l: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 1";
		gunBeg = "turretsec_5_barrelStart_l";
		gunEnd = "turretsec_5_barrelEnd_l";
		muzzleEnd = "turretsec_5_barrelStart_l";
		muzzlePos = "turretsec_5_barrelEnd_l";
		selectionfireanim = "turretsec_5_muzzle_l";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_5_barrelEnd_l";
				directionName = "turretsec_5_barrelStart_l";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_5_r: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 5 Inch Gun 2";
		gunBeg = "turretsec_5_barrelStart_r";
		gunEnd = "turretsec_5_barrelEnd_r";
		muzzleEnd = "turretsec_5_barrelStart_r";
		muzzlePos = "turretsec_5_barrelEnd_r";
		selectionfireanim = "turretsec_5_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_5_barrelEnd_r";
				directionName = "turretsec_5_barrelStart_r";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_6_l: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 6 Inch Gun 1";
		gunBeg = "turretsec_6_barrelStart_l";
		gunEnd = "turretsec_6_barrelEnd_l";
		muzzleEnd = "turretsec_6_barrelStart_l";
		muzzlePos = "turretsec_6_barrelEnd_l";
		selectionfireanim = "turretsec_6_muzzle_l";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_6_barrelEnd_l";
				directionName = "turretsec_6_barrelStart_l";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_127mmGun_6_r: Iowa_127mmGun_1_l
	{
		displayName = "Cannon 6 Inch Gun 2";
		gunBeg = "turretsec_6_barrelStart_r";
		gunEnd = "turretsec_6_barrelEnd_r";
		muzzleEnd = "turretsec_6_barrelStart_r";
		muzzlePos = "turretsec_6_barrelEnd_r";
		selectionfireanim = "turretsec_6_muzzle_r";
		class GunParticles
		{
			class effect1
			{
				positionName = "turretsec_6_barrelEnd_r";
				directionName = "turretsec_6_barrelStart_r";
				effectName = "CannonFired";
			};
		};
	};
	class Iowa_406mm_C_Arty: mortar_155mm_AMOS
	{
		scope = 1;
		displayName = "Cannon 16 Inch";
		nameSound = "cannon";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sound[] = {"A3\Sounds_F\weapons\Cannons\cannon_1",3.1622777,1,2500};
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_3",3.1622777,1,10};
		weaponSoundEffect = "DefaultRifle";
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 10;
		magazineReloadTime = 35;
		autoReload = 1;
		canLock = 0;
		magazines[] = {"32Rnd_406mm_HE_Mo_shells"};
		modes[] = {"SingleA","Single2","Single3","Single4","Single5","BurstA","Burst2","Burst3","Burst4","Burst5"};
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_c_muzzle_l";
				directionName = "turretpri_c_barrelEnd_l";
				effectName = "IowaMainCannonFired";
			};
			class effect2
			{
				positionName = "turretpri_c_muzzle_c";
				directionName = "turretpri_c_barrelEnd_c";
				effectName = "IowaMainCannonFired";
			};
			class effect3
			{
				positionName = "turretpri_c_muzzle_r";
				directionName = "turretpri_c_barrelEnd_r";
				effectName = "IowaMainCannonFired";
			};
		};
		class SingleA: Single1
		{
			displayName = "Close";
			sound[] = {"A3\Sounds_F\weapons\Cannons\cannon_1",3.1622777,1,2500};
			reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_3",3.1622777,1,10};
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 10;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 3.2;
			artilleryCharge = 0.19;
		};
		class Single2: SingleA
		{
			displayName = "Short";
			artilleryCharge = 0.3;
		};
		class Single3: SingleA
		{
			displayName = "Medium";
			artilleryCharge = 0.48;
		};
		class Single4: SingleA
		{
			displayName = "Far";
			artilleryCharge = 0.8;
		};
		class Single5: SingleA
		{
			displayName = "Extreme";
			artilleryCharge = 1;
		};
		class BurstA: Burst1
		{
			showToPlayer = 0;
			displayName = "Close";
			burst = 6;
			sound[] = {"A3\Sounds_F\weapons\Cannons\cannon_1",3.1622777,1,1500};
			reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_3",3.1622777,1,10};
			weaponSoundEffect = "DefaultRifle";
			soundBurst = 0;
			reloadTime = 10;
			minRange = 800;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 5.3;
			artilleryCharge = 0.19;
		};
		class Burst2: BurstA
		{
			showToPlayer = 0;
			displayName = "Short";
			minRange = 2000;
			minRangeProbab = 0.4;
			midRange = 3000;
			midRangeProbab = 0.6;
			maxRange = 5200;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.3;
		};
		class Burst3: BurstA
		{
			showToPlayer = 0;
			displayName = "Medium";
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.48;
		};
		class Burst4: BurstA
		{
			showToPlayer = 0;
			displayName = "Far";
			minRange = 14600;
			minRangeProbab = 0.2;
			midRange = 25000;
			midRangeProbab = 0.3;
			maxRange = 37000;
			maxRangeProbab = 0.2;
			artilleryCharge = 0.8;
		};
		class Burst5: BurstA
		{
			showToPlayer = 0;
			displayName = "Extreme";
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
	};
	class Iowa_406mm_B_Arty: Iowa_406mm_C_Arty
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_b_muzzle_l";
				directionName = "turretpri_b_barrelEnd_l";
				effectName = "IowaMainCannonFired";
			};
			class effect2
			{
				positionName = "turretpri_b_muzzle_c";
				directionName = "turretpri_b_barrelEnd_c";
				effectName = "IowaMainCannonFired";
			};
			class effect3
			{
				positionName = "turretpri_b_muzzle_r";
				directionName = "turretpri_b_barrelEnd_r";
				effectName = "IowaMainCannonFired";
			};
		};
	};
	class Iowa_406mm_A_Arty: Iowa_406mm_C_Arty
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "turretpri_a_muzzle_l";
				directionName = "turretpri_a_barrelEnd_l";
				effectName = "IowaMainCannonFired";
			};
			class effect2
			{
				positionName = "turretpri_a_muzzle_c";
				directionName = "turretpri_a_barrelEnd_c";
				effectName = "IowaMainCannonFired";
			};
			class effect3
			{
				positionName = "turretpri_a_muzzle_r";
				directionName = "turretpri_a_barrelEnd_r";
				effectName = "IowaMainCannonFired";
			};
		};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticCannon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class HouseBase;
	class BattleshipPart: HouseBase
	{
		reversed = 1;
		scope = 1;
		side = 1;
		simulation = "house";
		displayName = "USS Iowa";
		ladders[] = {};
		animated = 1;
		accuracy = 0.5;
		cost = 500000;
		armor = 30000;
		type = 1;
		featureSize = 1000;
		hideUnitInfo = 1;
		nameSound = "ship";
	};
	class Ship;
	class Ship_F: Ship{};
	class Battleship: Ship_F
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret;
		};
		class ViewOptics;
		class ViewPilot;
		class ViewCargo;
		class AnimationSources;
		class Eventhandlers;
	};
	class USS_Iowa_Battleship: Battleship
	{
		scope = 2;
		vehicleClass = "Ship";
		author = "AusSnipe73";
		displayName = "USS Iowa";
		model = "338\Ships\USS_Iowa_Battleship.p3d";
		picture = "\A3\boat_f\Boat_Armed_01\data\ui\Boat_Armed_01_base.paa";
		Icon = "\338\Ships\Data\map_uss_iowa.paa";
		cost = 500000;
		accuracy = 0.5;
		unitInfoType = "UnitInfoShip";
		faction = "BLU_F";
		side = 1;
		crew = "B_crew_F";
		mapsize = 270;
		type = 1;
		armor = 2500;
		canBeShot = 1;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_ship_attackBoat_s"};
				speechPlural[] = {"veh_ship_attackBoat_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_ship_attackBoat_s";
		textPlural = "$STR_A3_nameSound_veh_ship_attackBoat_p";
		nameSound = "veh_ship_attackBoat_s";
		damageResistance = 0.00882;
		class HitPoints
		{
			class HitEngine
			{
				armor = 1.2;
				material = 60;
				name = "engine";
				visual = "";
				passThrough = 1;
				radius = 2.0;
			};
			class HitHull
			{
				armor = 1;
				material = 50;
				name = "karoserie";
				visual = "";
				passThrough = 1;
				explosionShielding = 1;
			};
		};
		simulation = "shipx";
		maxSpeed = 61;
		overSpeedBrakeCoef = 0.8;
		enginePower = 1580000;
		engineShiftY = 0.0;
		waterLeakiness = 1000.0;
		turnCoef = 1000.0;
		thrustDelay = 20;
		waterLinearDampingCoefY = 2;
		waterLinearDampingCoefX = 200.0;
		waterAngularDampingCoef = 1.2;
		waterResistanceCoef = 0.2;
		rudderForceCoef = 1000.0;
		rudderForceCoefAtMaxSpeed = 400.0;
		idleRpm = 500;
		redRpm = 1200;
		brakeDistance = 3;
		supplyRadius = 3;
		precision = 15;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 0.8;
		predictTurnSimul = 0.6;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-0.782,"N",0,"D1",2.0,"D2",1.85,"D3",1.75};
			TransmissionRatios[] = {"High",1.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		getInRadius = 10;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		memoryPointsGetInDriver = "driver_pos";
		memoryPointsGetInDriverDir = "driver_dir";
		memoryPointsGetInCargo = "cargo_pos";
		memoryPointsGetInCargoDir = "cargo_dir";
		memoryPointsGetInGunner = "gunner_pos";
		memoryPointsGetInGunnerDir = "gunner_dir";
		memoryPointsGetInCommander = "comm_pos";
		memoryPointsGetInCommanderDir = "comm_dir";
		radarType = 4;
		LockDetectionSystem = "8 + 4";
		IncommingMisslieDetectionSystem = 16;
		irTarget = 1;
		irScanGround = 1;
		irScanRangeMin = 4000;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 7;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 75;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 360;
		weapons[] = {"SmokeLauncher","TruckHorn3","CMFlareLauncher"};
		magazines[] = {"SmokeLauncherMag_boat","SmokeLauncherMag_boat","SmokeLauncherMag_boat","SmokeLauncherMag_boat","SmokeLauncherMag_boat","300Rnd_CMFlare_Chaff_Magazine"};
		memoryPointCM[] = {"cm_left1","cm_left2","cm_right1","cm_right2"};
		memoryPointCMDir[] = {"cm_left1_dir","cm_left2_dir","cm_right1_dir","cm_right2_dir"};
		cargoAction[] = {"passenger_low01"};
		cargoIsCoDriver[] = {"false"};
		transportSoldier = 12;
		castCargoShadow = 0;
		memoryPointCargoOptics = "driverview";
		cargoForceOptics = 1;
		cargoOpticsModel = "\A3\weapons_f\reticle\Optics_Driver_01_F";
		gunnerHasFlares = 0;
		enableGPS = 1;
		driverAction = "gunner_standup01";
		driverisCommander = 0;
		driverCanSee = "1+2+8+16";
		hideWeaponsDriver = 1;
		castDriverShadow = 1;
		showNVGDriver = 0;
		driverLeftHandAnimName = "steeringwheel";
		driverRightHandAnimName = "steeringwheel";
		ejectDeadDriver = "false";
		driverForceOptics = 1;
		driverOpticsModel = "\A3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointDriverOptics = "driverview";
		hasCommander = 1;
		commanderAction = "gunner_standup01";
		commanderCanSee = "1+2+4+8+16";
		hideWeaponsCommander = 1;
		showNVGCommander = 0;
		hasGunner = 1;
		gunneriscommander = 0;
		gunnerCanSee = "1+2+4+8+16";
		hideWeaponsGunner = 1;
		showNVGGunner = 0;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 6;
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		insideSoundCoef = 1;
		soundEngineOnInt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_start",0.56234133,1.0};
		soundEngineOnExt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_start",0.56234133,1.0,300};
		soundEngineOffInt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_stop",0.56234133,1.0};
		soundEngineOffExt[] = {"a3\Sounds_F\vehicles\boat\Motor_Boat\engine_stop",0.56234133,1.0,300};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.0,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.0,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.0,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.0,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.0,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.0,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.0,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.0,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.0,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.0,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.0,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class IdleOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_idle",0.4466836,1.0,300};
				frequency = "0.95	+	((rpm/	1000) factor[(100/	1000),(250/	1000)])*0.15";
				volume = "engineOn*(((rpm/	1000) factor[(100/	1000),(150/	1000)])	*	((rpm/	1000) factor[(270/	1000),(200/	1000)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_1",0.63095737,1.0,350};
				frequency = "0.85	+	((rpm/	1000) factor[(200/	1000),(370/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(190/	1000),(250/	1000)])	*	((rpm/	1000) factor[(380/	1000),(280/	1000)]))";
			};
			class EngineMidOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_3",0.7943282,1.0,380};
				frequency = "0.85	+	((rpm/	1000) factor[(280/	1000),(480/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(250/	1000),(350/	1000)])	*	((rpm/	1000) factor[(480/	1000),(390/	1000)]))";
			};
			class EngineMaxOut2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_4",0.8912509,1.0,440};
				frequency = "0.86	+	((rpm/	1000) factor[(380/	1000),(580/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(370/	1000),(440/	1000)])	*	((rpm/	1000) factor[(585/	1000),(495/	1000)]))";
			};
			class EngineMaxOut3
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_5",1.0,1.0,500};
				frequency = "0.85	+	((rpm/	1000) factor[(490/	1000),(800/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(460/	1000),(550/	1000)])	*	((rpm/	1000) factor[(780/	1000),(620/	1000)]))";
			};
			class EngineMaxOut4
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Motor_Boat\engine_6",1.2589254,1.0,550};
				frequency = "0.85	+	((rpm/	1000) factor[(650/	1000),(1000/	1000)])*0.2";
				volume = "engineOn*((rpm/	1000) factor[(600/	1000),(800/	1000)])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",0.70794576,1.0,150};
				frequency = "1";
				volume = "(speed factor[4, 1])";
			};
			class WaternoiseOutW1
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",0.7943282,1.0,250};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,1.0,350};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
		};
		extCameraPosition[] = {0,20.0,-80.0};
		leftFastWaterEffect = "LFastWaterEffects";
		rightFastWaterEffect = "RFastWaterEffects";
		leftEngineEffect = "LEngEffects";
		rightEngineEffect = "REngEffects";
		waterEffectSpeed = 5;
		engineEffectSpeed = 5;
		waterFastEffectSpeed = 28;
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectBig";
			};
		};
		class Eventhandlers: Eventhandlers
		{
			init = "_run = compile preprocessFileLineNumbers ""338\Ships\initb.sqf""; _this call _run;";
		};
		class MarkerLights{};
		class Reflectors{};
		class AnimationSources: AnimationSources
		{
			class mL_pos_port_source
			{
				source = "markerLight";
				markerLight = "mL_pos_port";
			};
			class phalanx_muzzle_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_PhalanxGun_1";
			};
			class phalanx_1_muzzle_source
			{
				source = "reload";
				weapon = "Iowa_PhalanxGun_1";
			};
			class phalanx_2_muzzle_source
			{
				source = "reload";
				weapon = "Iowa_PhalanxGun_2";
			};
			class phalanx_3_muzzle_source
			{
				source = "reload";
				weapon = "Iowa_PhalanxGun_3";
			};
			class phalanx_4_muzzle_source
			{
				source = "reload";
				weapon = "Iowa_PhalanxGun_4";
			};
			class Revolving_MG
			{
				source = "revolving";
				weapon = "Iowa_PhalanxGun_1";
			};
			class Revolving_MG_2
			{
				source = "revolving";
				weapon = "Iowa_PhalanxGun_2";
			};
			class Revolving_MG_3
			{
				source = "revolving";
				weapon = "Iowa_PhalanxGun_3";
			};
			class Revolving_MG_4
			{
				source = "revolving";
				weapon = "Iowa_PhalanxGun_4";
			};
			class turretpri_a_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_A_l";
			};
			class turretpri_a_muzzle_c_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_A_c";
			};
			class turretpri_a_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_A_r";
			};
			class turretpri_a_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_A_l";
			};
			class turretpri_a_muzzle_c_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_A_c";
			};
			class turretpri_a_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_A_r";
			};
			class turretpri_a_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_A_l";
			};
			class turretpri_a_recoil_c_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_A_c";
			};
			class turretpri_a_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_A_r";
			};
			class turretpri_b_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_B_l";
			};
			class turretpri_b_muzzle_c_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_B_c";
			};
			class turretpri_b_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_B_r";
			};
			class turretpri_b_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_B_l";
			};
			class turretpri_b_muzzle_c_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_B_c";
			};
			class turretpri_b_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_B_r";
			};
			class turretpri_b_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_B_l";
			};
			class turretpri_b_recoil_c_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_B_c";
			};
			class turretpri_b_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_B_r";
			};
			class turretpri_c_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_C_l";
			};
			class turretpri_c_muzzle_c_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_C_c";
			};
			class turretpri_c_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_C_r";
			};
			class turretpri_c_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_C_l";
			};
			class turretpri_c_muzzle_c_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_C_c";
			};
			class turretpri_c_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_406mmGun_C_r";
			};
			class turretpri_c_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_C_l";
			};
			class turretpri_c_recoil_c_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_C_c";
			};
			class turretpri_c_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_406mmGun_C_r";
			};
			class turretsec_1_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_1_l";
			};
			class turretsec_1_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_1_l";
			};
			class turretsec_1_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_1_l";
			};
			class turretsec_1_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_1_r";
			};
			class turretsec_1_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_1_r";
			};
			class turretsec_1_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_1_r";
			};
			class turretsec_2_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_2_l";
			};
			class turretsec_2_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_2_l";
			};
			class turretsec_2_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_2_l";
			};
			class turretsec_2_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_2_r";
			};
			class turretsec_2_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_2_r";
			};
			class turretsec_2_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_2_r";
			};
			class turretsec_3_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_3_l";
			};
			class turretsec_3_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_3_l";
			};
			class turretsec_3_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_3_l";
			};
			class turretsec_3_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_3_r";
			};
			class turretsec_3_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_3_r";
			};
			class turretsec_3_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_3_r";
			};
			class turretsec_4_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_4_l";
			};
			class turretsec_4_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_4_l";
			};
			class turretsec_4_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_4_r";
			};
			class turretsec_4_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_4_r";
			};
			class turretsec_4_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_4_l";
			};
			class turretsec_4_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_4_r";
			};
			class turretsec_5_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_5_l";
			};
			class turretsec_5_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_5_l";
			};
			class turretsec_5_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_5_r";
			};
			class turretsec_5_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_5_r";
			};
			class turretsec_5_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_5_l";
			};
			class turretsec_5_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_5_r";
			};
			class turretsec_6_muzzle_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_6_l";
			};
			class turretsec_6_muzzle_l_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_6_l";
			};
			class turretsec_6_muzzle_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_6_r";
			};
			class turretsec_6_muzzle_r_source_rot
			{
				source = "ammorandom";
				weapon = "Iowa_127mmGun_6_r";
			};
			class turretsec_6_recoil_l_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_6_l";
			};
			class turretsec_6_recoil_r_source
			{
				source = "reload";
				weapon = "Iowa_127mmGun_6_r";
			};
			class door_1
			{
				source = "User";
				animPeriod = 1;
				initPhase = 1;
			};
			class lights
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				userActionID = 50;
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "door_1_handle";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door_1"" < 0.5";
				statement = "this animate [""door_1"", 1]";
			};
			class CloseDoors1
			{
				userActionID = 51;
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "door_1_handle";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "this animationPhase ""door_1"" >= 0.5";
				statement = "this animate [""door_1"", 0]";
			};
		};
		class Turrets: Turrets
		{
			class PhalanxTurret_1: NewTurret
			{
				stabilizedInAxes = 4;
				body = "phalanx_1_turret";
				gun = "phalanx_1_gun";
				animationSourceBody = "phalanx_1_turret";
				animationSourceGun = "phalanx_1_gun";
				gunnerAction = "gunner_static_low01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",0.01,1.0,50};
				gunBeg = "phalanx_1_barrelEnd";
				gunEnd = "phalanx_1_barrelStart";
				memoryPointGunnerOptics = "phalanx_1_gunnerview";
				selectionfireanim = "phalanx_1_muzzle";
				weapons[] = {"Iowa_PhalanxGun_1"};
				magazines[] = {"2000Rnd_20mm_shells","2000Rnd_20mm_shells"};
				gunnerName = "Phalanx 1 Gunner";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerForceOptics = 1;
				proxyType = "CPGunner";
				proxyIndex = 1;
				startEngine = 0;
				commanding = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				usePip = 0;
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				minElev = -20;
				maxElev = 65;
				initElev = 0;
				minTurn = -190;
				maxTurn = 10;
				initTurn = -90;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				maxHorizontalRotSpeed = 2.0;
				maxVerticalRotSpeed = 1.4;
			};
			class PhalanxTurret_2: PhalanxTurret_1
			{
				body = "phalanx_2_turret";
				gun = "phalanx_2_gun";
				animationSourceBody = "phalanx_2_turret";
				animationSourceGun = "phalanx_2_gun";
				gunBeg = "phalanx_2_barrelEnd";
				gunEnd = "phalanx_2_barrelStart";
				memoryPointGunnerOptics = "phalanx_2_gunnerview";
				selectionfireanim = "phalanx_2_muzzle";
				weapons[] = {"Iowa_PhalanxGun_2"};
				magazines[] = {"2000Rnd_20mm_shells","2000Rnd_20mm_shells"};
				gunnerName = "Phalanx 2 Gunner";
				commanding = 0;
				primaryGunner = 0;
				minTurn = -10;
				maxTurn = 190;
				initTurn = 90;
			};
			class PhalanxTurret_3: PhalanxTurret_1
			{
				body = "phalanx_3_turret";
				gun = "phalanx_3_gun";
				animationSourceBody = "phalanx_3_turret";
				animationSourceGun = "phalanx_3_gun";
				gunBeg = "phalanx_3_barrelEnd";
				gunEnd = "phalanx_3_barrelStart";
				memoryPointGunnerOptics = "phalanx_3_gunnerview";
				selectionfireanim = "phalanx_3_muzzle";
				weapons[] = {"Iowa_PhalanxGun_3"};
				magazines[] = {"2000Rnd_20mm_shells","2000Rnd_20mm_shells"};
				gunnerName = "Phalanx 3 Gunner";
				commanding = 0;
				primaryGunner = 0;
				minTurn = -200;
				maxTurn = 20;
				initTurn = -90;
			};
			class PhalanxTurret_4: PhalanxTurret_1
			{
				body = "phalanx_4_turret";
				gun = "phalanx_4_gun";
				animationSourceBody = "phalanx_4_turret";
				animationSourceGun = "phalanx_4_gun";
				gunBeg = "phalanx_4_barrelEnd";
				gunEnd = "phalanx_4_barrelStart";
				memoryPointGunnerOptics = "phalanx_4_gunnerview";
				selectionfireanim = "phalanx_4_muzzle";
				weapons[] = {"Iowa_PhalanxGun_4"};
				magazines[] = {"2000Rnd_20mm_shells","2000Rnd_20mm_shells"};
				gunnerName = "Phalanx 4 Gunner";
				commanding = 0;
				primaryGunner = 0;
				minTurn = -20;
				maxTurn = 200;
				initTurn = 90;
			};
			class TurretPri_A: NewTurret
			{
				stabilizedInAxes = 2;
				body = "turretpri_a_turret";
				gun = "turretpri_a_gun";
				animationSourceBody = "turretpri_a_turret";
				animationSourceGun = "turretpri_a_gun";
				gunnerAction = "gunner_standup01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",0.01,1.0,50};
				gunBeg = "turretpri_a_barrelEnd_c";
				gunEnd = "turretpri_a_barrelStart_c";
				memoryPointGunnerOptics = "turretpri_a_gunnerview";
				selectionfireanim = "turretpri_a_muzzle";
				weapons[] = {"Iowa_406mmGun_A_l","Iowa_406mmGun_A_c","Iowa_406mmGun_A_r"};
				magazines[] = {"32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells"};
				gunnerName = "Main Turret A Gunner";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerForceOptics = 1;
				forceHideGunner = 1;
				proxyType = "CPGunner";
				proxyIndex = 1;
				startEngine = 0;
				commanding = 0;
				primaryGunner = 1;
				primaryObserver = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				usePip = 0;
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				minElev = -1;
				maxElev = 50;
				initElev = 5;
				minTurn = -135;
				maxTurn = 135;
				initTurn = 0;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				maxHorizontalRotSpeed = 0.4;
				maxVerticalRotSpeed = 0.15;
			};
			class TurretPri_B: TurretPri_A
			{
				body = "turretpri_b_turret";
				gun = "turretpri_b_gun";
				animationSourceBody = "turretpri_b_turret";
				animationSourceGun = "turretpri_b_gun";
				gunBeg = "turretpri_b_barrelEnd_c";
				gunEnd = "turretpri_b_barrelStart_c";
				memoryPointGunnerOptics = "turretpri_b_gunnerview";
				selectionfireanim = "turretpri_b_muzzle";
				weapons[] = {"Iowa_406mmGun_B_l","Iowa_406mmGun_B_c","Iowa_406mmGun_B_r"};
				magazines[] = {"32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells"};
				gunnerName = "Main Turret B Gunner";
				commanding = 0;
				primaryGunner = 0;
				primaryObserver = 0;
			};
			class TurretPri_C: TurretPri_A
			{
				body = "turretpri_c_turret";
				gun = "turretpri_c_gun";
				animationSourceBody = "turretpri_c_turret";
				animationSourceGun = "turretpri_c_gun";
				gunBeg = "turretpri_c_barrelEnd_c";
				gunEnd = "turretpri_c_barrelStart_c";
				memoryPointGunnerOptics = "turretpri_c_gunnerview";
				weapons[] = {"Iowa_406mmGun_C_l","Iowa_406mmGun_C_c","Iowa_406mmGun_C_r"};
				magazines[] = {"32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_HE_shells","32Rnd_406mm_AP_shells"};
				gunnerName = "Main Turret C Gunner";
				commanding = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				minTurn = 45;
				maxTurn = 315;
				initTurn = 180;
			};
			class TurretSec_1: NewTurret
			{
				stabilizedInAxes = 2;
				body = "turretsec_1_turret";
				gun = "turretsec_1_gun";
				animationSourceBody = "turretsec_1_turret";
				animationSourceGun = "turretsec_1_gun";
				gunBeg = "turretsec_1_barrelEnd_l";
				gunEnd = "turretsec_1_barrelStart_l";
				gunnerAction = "gunner_standup01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",0.01,1.0,50};
				memoryPointGunnerOptics = "turretsec_1_gunnerview";
				selectionfireanim = "turretsec_1_muzzle";
				weapons[] = {"Iowa_127mmGun_1_l","Iowa_127mmGun_1_r"};
				magazines[] = {"16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells","16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells"};
				gunnerName = "Secondary Turret 1 Gunner";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				gunnerForceOptics = 1;
				proxyType = "CPGunner";
				proxyIndex = 1;
				startEngine = 0;
				commanding = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				usePip = 0;
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				minElev = -2;
				maxElev = 50;
				initElev = 5;
				minTurn = -180;
				maxTurn = 0;
				initTurn = -90;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				maxHorizontalRotSpeed = 1.0;
				maxVerticalRotSpeed = 0.6;
			};
			class TurretSec_2: TurretSec_1
			{
				body = "turretsec_2_turret";
				gun = "turretsec_2_gun";
				animationSourceBody = "turretsec_2_turret";
				animationSourceGun = "turretsec_2_gun";
				gunBeg = "turretsec_2_barrelEnd_l";
				gunEnd = "turretsec_2_barrelStart_l";
				memoryPointGunnerOptics = "turretsec_2_gunnerview";
				selectionfireanim = "turretsec_2_muzzle";
				weapons[] = {"Iowa_127mmGun_2_l","Iowa_127mmGun_2_r"};
				magazines[] = {"16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells","16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells"};
				gunnerName = "Secondary Turret 2 Gunner";
				minTurn = -180;
				maxTurn = 0;
				initTurn = -90;
			};
			class TurretSec_3: TurretSec_1
			{
				body = "turretsec_3_turret";
				gun = "turretsec_3_gun";
				animationSourceBody = "turretsec_3_turret";
				animationSourceGun = "turretsec_3_gun";
				gunBeg = "turretsec_3_barrelEnd_l";
				gunEnd = "turretsec_3_barrelStart_l";
				memoryPointGunnerOptics = "turretsec_3_gunnerview";
				selectionfireanim = "turretsec_3_muzzle";
				weapons[] = {"Iowa_127mmGun_3_l","Iowa_127mmGun_3_r"};
				magazines[] = {"16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells","16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells"};
				gunnerName = "Secondary Turret 3 Gunner";
				minTurn = -180;
				maxTurn = 0;
				initTurn = -90;
			};
			class TurretSec_4: TurretSec_1
			{
				body = "turretsec_4_turret";
				gun = "turretsec_4_gun";
				animationSourceBody = "turretsec_4_turret";
				animationSourceGun = "turretsec_4_gun";
				gunBeg = "turretsec_4_barrelEnd_l";
				gunEnd = "turretsec_4_barrelStart_l";
				memoryPointGunnerOptics = "turretsec_4_gunnerview";
				selectionfireanim = "turretsec_4_muzzle";
				weapons[] = {"Iowa_127mmGun_4_l","Iowa_127mmGun_4_r"};
				magazines[] = {"16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells","16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells"};
				gunnerName = "Secondary Turret 4 Gunner";
				minTurn = 0;
				maxTurn = 180;
				initTurn = 90;
			};
			class TurretSec_5: TurretSec_1
			{
				body = "turretsec_5_turret";
				gun = "turretsec_5_gun";
				animationSourceBody = "turretsec_5_turret";
				animationSourceGun = "turretsec_5_gun";
				gunBeg = "turretsec_5_barrelEnd_l";
				gunEnd = "turretsec_5_barrelStart_l";
				memoryPointGunnerOptics = "turretsec_5_gunnerview";
				selectionfireanim = "turretsec_5_muzzle";
				weapons[] = {"Iowa_127mmGun_5_l","Iowa_127mmGun_5_r"};
				magazines[] = {"16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells","16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells"};
				gunnerName = "Secondary Turret 5 Gunner";
				minTurn = 0;
				maxTurn = 180;
				initTurn = 90;
			};
			class TurretSec_6: TurretSec_1
			{
				body = "turretsec_6_turret";
				gun = "turretsec_6_gun";
				animationSourceBody = "turretsec_6_turret";
				animationSourceGun = "turretsec_6_gun";
				gunBeg = "turretsec_6_barrelEnd_l";
				gunEnd = "turretsec_6_barrelStart_l";
				memoryPointGunnerOptics = "turretsec_6_gunnerview";
				selectionfireanim = "turretsec_6_muzzle";
				weapons[] = {"Iowa_127mmGun_6_l","Iowa_127mmGun_6_r"};
				magazines[] = {"16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells","16Rnd_127mm_HE_shells","16Rnd_127mm_AP_shells"};
				gunnerName = "Secondary Turret 6 Gunner";
				minTurn = 0;
				maxTurn = 180;
				initTurn = 90;
			};
			class Periscope_commander: NewTurret
			{
				stabilizedInAxes = 4;
				proxyType = "CPCommander";
				proxyindex = 1;
				body = "periscope_commander_turret";
				gun = "periscope_commander_gun";
				animationSourceBody = "periscope_commander_Turret";
				animationSourceGun = "periscope_commander_gun";
				gunnerAction = "gunner_standup01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = 1;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best",0.01,1,50};
				gunBeg = "periscope_commander_dir";
				gunEnd = "periscope_commander_pos";
				memoryPointGunnerOptics = "periscope_commander_pos";
				memoryPointsGetInGunner = "comm_pos";
				memoryPointsGetInGunnerDir = "comm_dir";
				weapons[] = {"Laserdesignator_mounted"};
				magazines[] = {"Laserbatteries"};
				turretInfoType = "RscWeaponRangeZeroing";
				gunnerName = "Commander";
				gunnerOpticsModel = "\A3\weapons_f_beta\reticle\reticle_SDV";
				gunnerForceOptics = 1;
				startEngine = 0;
				commanding = 1;
				primaryGunner = 0;
				primaryObserver = 1;
				usePip = 0;
				laser = 1;
				minElev = -30;
				maxElev = 60;
				initElev = 0;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				class Periscope_commander_ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = -180;
					maxAngleY = 180;
					initFov = 0.14;
					minFov = 0.0175;
					maxFov = 0.14;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {2,3,4};
				};
				class Periscope_commander_ViewGunner: ViewOptics
				{
					initAngleX = -15;
					minAngleX = -45;
					maxAngleX = 45;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.9;
					minFov = 0.42;
					maxFov = 0.9;
					visionMode[] = {};
				};
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.2;
			};
		};
	};
	class Lamps_base_F;
	class USS_Iowa_Lights_1: Lamps_base_F
	{
		scope = 1;
		displayName = "USS Iowa";
		model = "\338\Ships\Details\battleship_detail_lights_1.p3d";
		aggregateReflectors[] = {{ "RLight_1","RLight_2","RLight_7","RLight_8" }};
		class Reflectors
		{
			class RLight_1
			{
				color[] = {1900,1900,1700};
				ambient[] = {5,5,5};
				intensity = 0.1;
				size = 2;
				innerAngle = 180;
				outerAngle = 210;
				coneFadeCoef = 4;
				dayLight = 0;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 100;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 75;
					hardLimitEnd = 100;
				};
			};
			class RLight_2: RLight_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				selection = "Light_2_hide";
			};
			class RLight_7: RLight_1
			{
				position = "Light_7_pos";
				direction = "Light_7_dir";
				hitpoint = "Light_7_hitpoint";
				selection = "Light_7_hide";
			};
			class RLight_8: RLight_1
			{
				position = "Light_8_pos";
				direction = "Light_8_dir";
				hitpoint = "Light_8_hitpoint";
				selection = "Light_8_hide";
			};
		};
		class MarkerLights
		{
			class Light_1
			{
				color[] = {1.0,1.0,0.8};
				ambient[] = {0.01,0.01,0.0};
				intensity = 800;
				name = "Light_1_pos";
				blinking = 0;
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 1000;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 10;
					quadratic = 20;
					hardLimitStart = 5;
					hardLimitEnd = 6;
				};
			};
			class Light_2: Light_1
			{
				name = "Light_2_pos";
			};
			class Light_3: Light_1
			{
				name = "Light_3_pos";
			};
			class Light_4: Light_1
			{
				name = "Light_4_pos";
			};
			class Light_5: Light_1
			{
				name = "Light_5_pos";
			};
			class Light_6: Light_1
			{
				name = "Light_6_pos";
			};
			class Light_7: Light_1
			{
				name = "Light_7_pos";
			};
			class Light_8: Light_1
			{
				name = "Light_8_pos";
			};
			class Light_9: Light_1
			{
				name = "Light_9_pos";
			};
			class Light_10: Light_1
			{
				name = "Light_10_pos";
			};
		};
	};
	class USS_Iowa_Lights_2: Lamps_base_F
	{
		scope = 1;
		displayName = "USS Iowa";
		model = "\338\Ships\Details\battleship_detail_lights_2.p3d";
		aggregateReflectors[] = {{ "RLight_11","RLight_12","RLight_13","RLight_14","RLight_19","RLight_20" }};
		class Reflectors{};
		class MarkerLights
		{
			class Light_11
			{
				color[] = {1.0,1.0,0.8};
				ambient[] = {0.01,0.01,0.0};
				intensity = 800;
				name = "Light_11_pos";
				blinking = 0;
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 1000;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 10;
					quadratic = 20;
					hardLimitStart = 5;
					hardLimitEnd = 6;
				};
			};
			class Light_12: Light_11
			{
				name = "Light_12_pos";
			};
			class Light_13: Light_11
			{
				name = "Light_13_pos";
			};
			class Light_14: Light_11
			{
				name = "Light_14_pos";
			};
			class Light_15: Light_11
			{
				name = "Light_15_pos";
			};
			class Light_16: Light_11
			{
				name = "Light_16_pos";
			};
			class Light_17: Light_11
			{
				name = "Light_17_pos";
			};
			class Light_18: Light_11
			{
				name = "Light_18_pos";
			};
			class Light_19: Light_11
			{
				name = "Light_19_pos";
			};
			class Light_20: Light_11
			{
				name = "Light_20_pos";
			};
		};
	};
	class USS_Iowa_Lights_3: Lamps_base_F
	{
		scope = 1;
		displayName = "USS Iowa";
		model = "\338\Ships\Details\battleship_detail_lights_3.p3d";
		aggregateReflectors[] = {{ "RLight_21" }};
		class Reflectors{};
		class MarkerLights
		{
			class Light_22
			{
				color[] = {1.0,1.0,0.8};
				ambient[] = {0.01,0.01,0.0};
				intensity = 800;
				name = "Light_22_pos";
				blinking = 0;
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 1000;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 10;
					quadratic = 20;
					hardLimitStart = 5;
					hardLimitEnd = 6;
				};
			};
			class Light_21: Light_22
			{
				name = "Light_21_pos";
			};
			class Light_23: Light_22
			{
				name = "Light_23_pos";
			};
			class Light_24: Light_22
			{
				name = "Light_24_pos";
			};
			class Light_25: Light_22
			{
				name = "Light_25_pos";
			};
			class Light_26: Light_22
			{
				name = "Light_26_pos";
			};
			class Light_27: Light_22
			{
				name = "Light_27_pos";
			};
			class Light_28: Light_22
			{
				name = "Light_28_pos";
			};
		};
	};
	class USS_Iowa_Lights_4: Lamps_base_F
	{
		scope = 1;
		displayName = "USS Iowa";
		model = "\338\Ships\Details\battleship_detail_lights_4.p3d";
		aggregateReflectors[] = {{ "RLight_29","RLight_50" }};
		class Reflectors
		{
			class RLight_50
			{
				color[] = {15000,100,100};
				ambient[] = {15,1,1};
				intensity = 1;
				size = 2;
				innerAngle = 120;
				outerAngle = 170;
				coneFadeCoef = 1;
				dayLight = 0;
				useFlare = 0;
				position = "RLight_50_pos";
				direction = "RLight_50_dir";
				hitpoint = "RLight_50_hitpoint";
				selection = "RLight_50_hide";
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 50;
					hardLimitStart = 0;
					hardLimitEnd = 4;
				};
			};
			class RLight_62
			{
				color[] = {1900,1900,1700};
				ambient[] = {5,5,5};
				intensity = 10;
				size = 2;
				innerAngle = 45;
				outerAngle = 60;
				coneFadeCoef = 2;
				dayLight = 0;
				position = "RLight_62_pos";
				direction = "RLight_62_dir";
				hitpoint = "RLight_62_hitpoint";
				selection = "RLight_62_hide";
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 150;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.0;
					hardLimitStart = 115;
					hardLimitEnd = 150;
				};
			};
			class RLight_63: RLight_62
			{
				position = "RLight_63_pos";
				direction = "RLight_63_dir";
				hitpoint = "RLight_63_hitpoint";
				selection = "RLight_63_hide";
			};
			class RLight_64: RLight_62
			{
				position = "RLight_64_pos";
				direction = "RLight_64_dir";
				hitpoint = "RLight_64_hitpoint";
				selection = "RLight_64_hide";
			};
		};
		class MarkerLights
		{
			class Light_29
			{
				color[] = {1.0,1.0,0.8};
				ambient[] = {0.01,0.01,0.0};
				intensity = 800;
				name = "Light_29_pos";
				blinking = 0;
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 1000;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 10;
					quadratic = 20;
					hardLimitStart = 5;
					hardLimitEnd = 6;
				};
			};
			class Light_30: Light_29
			{
				name = "Light_30_pos";
			};
			class Light_31: Light_29
			{
				name = "Light_31_pos";
			};
			class Light_32: Light_29
			{
				name = "Light_32_pos";
			};
			class Light_33: Light_29
			{
				name = "Light_33_pos";
			};
			class Light_34: Light_29
			{
				name = "Light_34_pos";
			};
			class Light_35: Light_29
			{
				name = "Light_35_pos";
			};
			class Light_36: Light_29
			{
				name = "Light_36_pos";
			};
			class Light_37: Light_29
			{
				name = "Light_37_pos";
			};
			class Light_38: Light_29
			{
				name = "Light_38_pos";
			};
			class Light_39: Light_29
			{
				name = "Light_39_pos";
			};
			class Light_40: Light_29
			{
				name = "Light_40_pos";
			};
			class Light_41: Light_29
			{
				name = "Light_41_pos";
			};
			class Light_42: Light_29
			{
				name = "Light_42_pos";
			};
			class Light_43: Light_29
			{
				name = "Light_43_pos";
			};
			class Light_44: Light_29
			{
				name = "Light_44_pos";
			};
			class Light_45: Light_29
			{
				name = "Light_45_pos";
			};
			class Light_46: Light_29
			{
				name = "Light_46_pos";
			};
			class Light_47: Light_29
			{
				name = "Light_47_pos";
			};
			class Light_48: Light_29
			{
				name = "Light_48_pos";
			};
			class Light_49: Light_29
			{
				name = "Light_49_pos";
			};
			class Light_51: Light_29
			{
				color[] = {0.2,0.2,0.8};
				ambient[] = {0.02,0.02,0.08};
				intensity = 800;
				name = "Light_51_pos";
				blinking = 1;
				blinkingPattern[] = {0.25,1.75};
				blinkingStartsOn = 1;
				blinkingPatternGuarantee = 1;
				useFlare = 1;
				flareSize = 1;
				flareMaxDistance = 1000;
				activeLight = 1;
				dayLight = 0;
				drawLight = 1;
				drawLightSize = 1.2;
				drawLightCenterSize = 0.1;
				class Attenuation
				{
					start = 0;
					constant = 2;
					linear = 10;
					quadratic = 20;
					hardLimitStart = 5;
					hardLimitEnd = 6;
				};
			};
			class Light_52: Light_51
			{
				color[] = {0.4,0,0};
				ambient[] = {0.04,0,0};
				blinkingPattern[] = {0.5,1.0};
				name = "Light_52_pos";
			};
			class Light_53: Light_51
			{
				color[] = {0,0.4,0};
				ambient[] = {0,0.04,0};
				blinkingPattern[] = {0.5,1.0};
				blinkingStartsOn = 0;
				name = "Light_53_pos";
			};
			class Light_54: Light_51
			{
				color[] = {0.4,0,0};
				ambient[] = {0.04,0,0};
				blinkingPattern[] = {0.5,1.0};
				name = "Light_54_pos";
			};
			class Light_55: Light_51
			{
				color[] = {0,0.4,0};
				ambient[] = {0,0.04,0};
				blinkingPattern[] = {0.5,1.0};
				blinkingStartsOn = 0;
				name = "Light_55_pos";
			};
			class Light_56: Light_51
			{
				color[] = {0.2,0.2,0.8};
				ambient[] = {0.02,0.02,0.08};
				blinkingPattern[] = {0.25,1.75};
				name = "Light_56_pos";
			};
			class Light_57: Light_51
			{
				color[] = {0.4,0,0};
				ambient[] = {0.04,0,0};
				blinkingPattern[] = {0.5,1.0};
				name = "Light_57_pos";
			};
			class Light_58: Light_51
			{
				color[] = {0,0.4,0};
				ambient[] = {0,0.04,0};
				blinkingPattern[] = {0.5,1.0};
				blinkingStartsOn = 0;
				name = "Light_58_pos";
			};
			class Light_59: Light_29
			{
				color[] = {0.6,0.6,0.6};
				ambient[] = {0.06,0.06,0.06};
				blinkingPattern[] = {0.5,1.5};
				blinkingStartsOn = 0;
				drawLight = 1;
				drawLightSize = 1.2;
				drawLightCenterSize = 0.1;
				name = "Light_59_pos";
			};
			class Light_60: Light_51
			{
				color[] = {0.8,0.4,0.4};
				ambient[] = {0.08,0.04,0.04};
				drawLight = 1;
				drawLightSize = 0.6;
				drawLightCenterSize = 0.05;
				name = "Light_60_pos";
			};
			class Light_61: Light_60
			{
				name = "Light_61_pos";
			};
		};
	};
	class Land_PierLadder_F;
	class USS_Iowa_Ladders: Land_PierLadder_F
	{
		reversed = 1;
		scope = 1;
		scopeCurator = 1;
		displayName = "USS Iowa";
		model = "\338\Ships\Details\battleship_detail_ladders.p3d";
		mapSize = 0.01;
		icon = "";
		armor = 15000;
		hideUnitInfo = 1;
		ladders[] = {{ "start1","end1" },{ "start2","end2" },{ "start3","end3" },{ "start4","end4" },{ "start5","end5" },{ "start6","end6" },{ "start7","end7" }};
		vehicleClass = "Misc";
	};
	class USS_Iowa_Turret_C: StaticCannon
	{
		model = "\338\Ships\USS_Iowa_Turret_C";
		displayName = "Cannon 16 Inch C Turret";
		hideUnitInfo = 1;
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		memoryPointsGetInGunner = "gunner_pos";
		memoryPointsGetInGunnerDir = "gunner_dir";
		artilleryScanner = 1;
		laserScanner = 1;
		availableForSupportTypes[] = {"Artillery"};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "Iowa_406mm_C_Arty";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "Iowa_406mm_C_Arty";
			};
			class reload_magazine
			{
				source = "reloadmagazine";
				weapon = "Iowa_406mm_C_Arty";
			};
		};
		class Eventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "_run = _this execVM '338\Ships\init_arty.sqf';";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				forceHideGunner = 1;
				gunBeg = "turretpri_c_barrelEnd_c2";
				gunEnd = "turretpri_c_barrelStart_c2";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				weapons[] = {"Iowa_406mm_C_Arty"};
				magazines[] = {"32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells"};
				soundServo[] = {"A3\sounds_f\dummysound",0.031622775,1.0,30};
				minElev = -5;
				maxElev = 80;
				initElev = 10;
				minTurn = 45;
				maxTurn = 315;
				initTurn = 180;
				elevationMode = 3;
				memoryPointGunnerOptics = "gunnerview";
				cameraDir = "look";
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] = {"Normal","NVG"};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
	};
	class USS_Iowa_Turret_B: StaticCannon
	{
		model = "\338\Ships\USS_Iowa_Turret_B";
		displayName = "Cannon 16 Inch B Turret";
		hideUnitInfo = 1;
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		memoryPointsGetInGunner = "gunner_pos";
		memoryPointsGetInGunnerDir = "gunner_dir";
		artilleryScanner = 1;
		laserScanner = 1;
		availableForSupportTypes[] = {"Artillery"};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "Iowa_406mm_B_Arty";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "Iowa_406mm_B_Arty";
			};
			class reload_magazine
			{
				source = "reloadmagazine";
				weapon = "Iowa_406mm_B_Arty";
			};
		};
		class Eventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "_run = _this execVM '338\Ships\init_arty_b.sqf';";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				forceHideGunner = 1;
				gunBeg = "turretpri_b_barrelEnd_c";
				gunEnd = "turretpri_b_barrelStart_c";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				weapons[] = {"Iowa_406mm_B_Arty"};
				magazines[] = {"32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells"};
				soundServo[] = {"A3\sounds_f\dummysound",0.031622775,1.0,30};
				minElev = -5;
				maxElev = 80;
				initElev = 10;
				minTurn = -135;
				maxTurn = 135;
				initTurn = 0;
				elevationMode = 3;
				memoryPointGunnerOptics = "gunnerview";
				cameraDir = "look";
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] = {"Normal","NVG"};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
	};
	class USS_Iowa_Turret_A: StaticCannon
	{
		model = "\338\Ships\USS_Iowa_Turret_A";
		displayName = "Cannon 16 Inch A Turret";
		hideUnitInfo = 1;
		scope = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_crew_F";
		typicalCargo[] = {"B_crew_F"};
		memoryPointsGetInGunner = "gunner_pos";
		memoryPointsGetInGunnerDir = "gunner_dir";
		artilleryScanner = 1;
		laserScanner = 1;
		availableForSupportTypes[] = {"Artillery"};
		class AnimationSources: AnimationSources
		{
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "Iowa_406mm_A_Arty";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "Iowa_406mm_A_Arty";
			};
			class reload_magazine
			{
				source = "reloadmagazine";
				weapon = "Iowa_406mm_A_Arty";
			};
		};
		class Eventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			init = "_run = _this execVM '338\Ships\init_arty_a.sqf';";
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				forceHideGunner = 1;
				gunBeg = "turretpri_a_barrelEnd_c";
				gunEnd = "turretpri_a_barrelStart_c";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				weapons[] = {"Iowa_406mm_A_Arty"};
				magazines[] = {"32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells","32Rnd_406mm_HE_Mo_shells"};
				soundServo[] = {"A3\sounds_f\dummysound",0.031622775,1.0,30};
				minElev = -5;
				maxElev = 80;
				initElev = 10;
				minTurn = -135;
				maxTurn = 135;
				initTurn = 0;
				elevationMode = 3;
				memoryPointGunnerOptics = "gunnerview";
				cameraDir = "look";
				turretInfoType = "RscWeaponRangeArtilleryAuto";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_mortar_01_f.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] = {"Normal","NVG"};
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
	};
	class USS_Iowa_0: BattleshipPart
	{
		model = "\338\Ships\Main\battleship_main_hull_a.p3d";
	};
	class USS_Iowa_1: BattleshipPart
	{
		model = "\338\Ships\Main\battleship_main_hull_b.p3d";
	};
	class USS_Iowa_2: BattleshipPart
	{
		model = "\338\Ships\Main\battleship_main_hull_c.p3d";
	};
	class USS_Iowa_3: BattleshipPart
	{
		model = "\338\Ships\Main\battleship_main_hull_d.p3d";
	};
	class USS_Iowa_4: BattleshipPart
	{
		model = "\338\Ships\Main\battleship_main_hull_e.p3d";
	};
	class USS_Iowa_5: BattleshipPart
	{
		model = "\338\Ships\battleship_main_superstructure.p3d";
	};
	class USS_Iowa_6: BattleshipPart
	{
		model = "\338\Ships\battleship_main_handrails.p3d";
	};
	class USS_Iowa_7: BattleshipPart
	{
		model = "\338\Ships\battleship_main_superstructure_details.p3d";
	};
	class USS_Iowa_8: BattleshipPart
	{
		model = "\338\Ships\battleship_main_reardeck.p3d";
	};
	class USS_Iowa_9: BattleshipPart
	{
		model = "\338\Ships\battleship_main_forwarddeck.p3d";
	};
	class USS_Iowa_10: BattleshipPart
	{
		model = "\338\Ships\Bridge\bridgeinterior_main.p3d";
	};
	class USS_Iowa_11: BattleshipPart
	{
		model = "\338\Ships\Main\battleship_main_handrails_forward.p3d";
	};
	class USS_Iowa_12: BattleshipPart
	{
		model = "\338\Ships\battleship_main_reardeck_2.p3d";
	};
	class USS_Iowa_geo_1: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_geo_1.p3d";
	};
	class USS_Iowa_geo_2: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_geo_2.p3d";
	};
	class USS_Iowa_geo_3: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_geo_3.p3d";
	};
	class USS_Iowa_geo_4: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_geo_4.p3d";
	};
	class USS_Iowa_geo_5: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_geo_5.p3d";
	};
	class USS_Iowa_geo_6: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_geo_6.p3d";
	};
	class USS_Iowa_geo_7: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_geo_7.p3d";
	};
	class USS_Iowa_geo_8: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_geo_8.p3d";
	};
	class USS_Iowa_geo_9: BattleshipPart
	{
		model = "\338\Ships\Geom\main_sup_geo_1.p3d";
	};
	class USS_Iowa_geo_10: BattleshipPart
	{
		model = "\338\Ships\Geom\main_superstructure_geo_2.p3d";
	};
	class USS_Iowa_geo_11: BattleshipPart
	{
		model = "\338\Ships\Geom\main_superstructure_geo_3.p3d";
	};
	class USS_Iowa_geo_12: BattleshipPart
	{
		model = "\338\Ships\Geom\main_superstructure_geo_4.p3d";
	};
	class USS_Iowa_geo_13: BattleshipPart
	{
		model = "\338\Ships\Geom\main_superstructure_geo_5.p3d";
	};
	class USS_Iowa_geo_14: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_roadway_6.p3d";
	};
	class USS_Iowa_geo_15: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_roadway_7.p3d";
	};
	class USS_Iowa_geo_16: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_roadway_8.p3d";
	};
	class USS_Iowa_geo_17: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_roadway_1.p3d";
	};
	class USS_Iowa_geo_18: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_roadway_2.p3d";
	};
	class USS_Iowa_geo_19: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_roadway_3.p3d";
	};
	class USS_Iowa_geo_20: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_roadway_4.p3d";
	};
	class USS_Iowa_geo_21: BattleshipPart
	{
		model = "\338\Ships\Geom\main_hull_roadway_5.p3d";
	};
	class USS_Iowa_geo_22: BattleshipPart
	{
		model = "\338\Ships\Geom\main_superstructure_roadway_1.p3d";
	};
	class USS_Iowa_geo_23: BattleshipPart
	{
		model = "\338\Ships\Geom\main_superstructure_roadway_2.p3d";
	};
	class USS_Iowa_geo_24: BattleshipPart
	{
		model = "\338\Ships\Geom\main_superstructure_roadway_3.p3d";
	};
	class USS_Iowa_geo_25: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_lowerdeck_p1a_geo.p3d";
	};
	class USS_Iowa_geo_26: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_lowerdeck_p1b_geo.p3d";
	};
	class USS_Iowa_geo_27: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_roadway_1a.p3d";
	};
	class USS_Iowa_geo_28: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_roadway_2a.p3d";
	};
	class USS_Iowa_geo_29: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_roadway_3a.p3d";
	};
	class USS_Iowa_geo_30: BattleshipPart
	{
		model = "\338\Ships\Details\battleship_detail_handrails_fronta.p3d";
	};
	class USS_Iowa_geo_31: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_frontb.p3d";
	};
	class USS_Iowa_geo_32: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_lowerdeck_p2a_geo.p3d";
	};
	class USS_Iowa_geo_33: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_lowerdeck_p2b_geo.p3d";
	};
	class USS_Iowa_geo_34: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_lowerdeck_p3_geo.p3d";
	};
	class USS_Iowa_geo_35: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_lowerdeck_p4a_geo.p3d";
	};
	class USS_Iowa_geo_36: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_lowerdeck_p4b_geo.p3d";
	};
	class USS_Iowa_geo_37: BattleshipPart
	{
		model = "\338\Ships\Geom\detail_handrails_lowerdeck_p5_geo.p3d";
	};
};
//};
