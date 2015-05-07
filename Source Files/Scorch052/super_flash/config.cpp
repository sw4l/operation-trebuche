class CfgPatches
{
	class SUP_flash
	{
		units[] = {};
		weapons[] = {"SUPER_arifle_MX_GL_F"};
		requiredAddons[] = {"A3_characters_F","A3_Data_F"};
	};
};
class CfgMusic
{
	class flashbang
	{
		name = "flashbang";
		sound[] = {"\SUPER_flash\music\flashbang.ogg",1.0,1.0};
		duration = 3;
	};
	class flashbang2
	{
		name = "flashbang2";
		sound[] = {"\SUPER_flash\sounds\flashbang2.wav",1.0,1.0};
		duration = 2;
	};
};
class CfgSounds
{
	class flashbang2
	{
		name = "flashbang2";
		sound[] = {"\SUPER_flash\sounds\flashbang2.wav",4.0,1.0};
		duration = 2;
	};
};
class CfgCloudlets
{
	class Default;
	class SUPER_flashExp: Default
	{
		interval = 0.0007;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal.p3d";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.05;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 1;
		volume = 0.8;
		rubbing = 0.3;
		size[] = {0.04,0.05};
		color[] = {{ 1,1,1,-1.6 },{ 1,1,1,-1.6 },{ 1,1,1,-1.6 },{ 1,1,1,0 }};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.001;
		randomDirectionIntensityVar = 1;
	};
	class SUPER_flashSmoke: Default
	{
		circleVelocity[] = {0,0,0};
		moveVelocity[] = {0,0,1};
		size[] = {0.5,1};
		color[] = {{ 0.1,0.1,0.1,0.8 },{ 0.25,0.25,0.25,0.5 },{ 0.5,0.5,0.5,0 },{ 0.9,1,0.83,0 }};
		animationSpeed[] = {0.02};
		positionVar[] = {1.2,0.6,1.2};
		MoveVelocityVar[] = {0,0,1};
		colorVar[] = {0,0,0,0.1};
		interval = 0.01;
		circleRadius = 0;
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 2;
		rotationVelocity = 0;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.15;
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		rotationVelocityVar = 0.1;
		sizeVar = 0.3;
		randomDirectionPeriodVar = 0.01;
		randomDirectionIntensityVar = 0.02;
	};
};
class CfgLights
{
	class SUPER_flashLight
	{
		color[] = {10,10,9.37};
		ambient[] = {0.35,0.35,0.35};
		brightness = 1;
		diffuse[] = {0,0,0};
		position[] = {0,0,0};
	};
};
class SUPER_flashExplosion
{
	class Light1
	{
		position[] = {0,0,0};
		simulation = "light";
		type = "SUPER_flashLight";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeExp1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "SUPER_flashExp";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeSmoke1
	{
		position[] = {0,0,0};
		simulation = "particles";
		type = "SUPER_flashExp";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
};
class CfgAmmo
{
	class GrenadeHand;
	class SUPER_flash_ammo: GrenadeHand
	{
		scope = 1;
		hit = 0.001;
		indirectHit = 0.001;
		indirectHitRange = 0.01;
		model = "\SUPER_flash\flash.p3d";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 5;
		ExplosionEffects = "SUPER_flashExplosion";
		soundHit1[] = {"\SUPER_flash\sounds\flashbang2.wav",1,1};
		soundHit2[] = {"\SUPER_flash\sounds\flashbang2.wav",1,1};
		soundHit3[] = {"\SUPER_flash\sounds\flashbang2.wav",1,1};
		soundHit4[] = {"\SUPER_flash\sounds\flashbang2.wav",1,1};
		soundHit5[] = {"\SUPER_flash\sounds\flashbang2.wav",1,1};
		soundHit6[] = {"\SUPER_flash\sounds\flashbang2.wav",1,1};
		soundHit[] = {"\SUPER_flash\sounds\flashbang2.wav",1,1};
		explosionSoundEffect = "flashbang2";
		explosionTime = 1.5;
	};
	class G_40mm_HE;
	class SUPER_GLflash_ammo: G_40mm_HE
	{
		scope = 1;
		hit = 0.001;
		indirectHit = 0.001;
		indirectHitRange = 0.01;
		model = "\A3\weapons_f\ammo\UGL_slug";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 5;
		ExplosionEffects = "SUPER_flashExplosion";
		soundHit[] = {"",0,1};
		explosionSoundEffect = "";
		explosionTime = 2.5;
	};
};
class cfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class HandGrenade: CA_Magazine{};
	class SUPER_flash: HandGrenade
	{
		model = "\SUPER_flash\flash.p3d";
		displayName = "Flashbang";
		picture = "\SUPER_flash\flash.paa";
		displayNameShort = "Flashbang";
		ammo = "SUPER_flash_ammo";
		mass = 5;
	};
	class 1Rnd_HE_Grenade_shell;
	class 1Rnd_SUPER_GLflash: 1Rnd_HE_Grenade_shell
	{
		displayName = "40mm GL_flashbang";
		displayNameShort = "GLflash";
		ammo = "SUPER_GLflash_ammo";
	};
};
class CfgWeapons
{
	class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"SUPER_flash_Muzzle"};
		class ThrowMuzzle;
		class SUPER_flash_Muzzle: ThrowMuzzle
		{
			magazines[] = {"SUPER_flash"};
		};
	};
	class arifle_MX_GL_F;
	class SUPER_arifle_MX_GL_F: arifle_MX_GL_F
	{
		displayName = "MX 3GL flash";
		muzzles[] = {"this","SUPER_GL_3GL_F"};
		class GL_3GL_F;
		class SUPER_GL_3GL_F: GL_3GL_F
		{
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell","1Rnd_SUPER_GLflash"};
		};
	};
};
class cfgVehicles
{
	class NATO_Box_Base;
	class SUPER_AmmoBox_Flash: NATO_Box_Base
	{
		scope = 2;
		accuracy = 1000;
		vehicleClass = "Ammo";
		displayName = "AmmoBox_Flashbang";
		hiddenSelectionsTextures[] = {"A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa","A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"};
		model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
		icon = "iconCrateWpns";
		maximumLoad = 99999;
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportMaxBackpacks = 50;
		class TransportMagazines
		{
			class _xx_SUPER_flash_ammo
			{
				magazine = "SUPER_flash";
				count = 1000;
			};
			class _xx_SUPER_GLflash_ammo
			{
				magazine = "1Rnd_SUPER_GLflash";
				count = 1000;
			};
		};
		class TransportWeapons
		{
			class _xx_SUPER_arifle_MX_GL_F
			{
				weapon = "SUPER_arifle_MX_GL_F";
				count = 100;
			};
		};
		class TransportItems{};
	};
};

class CfgFunctions
{
	class SUPER
	{
		class FlashBang
		{
			class InitFlashBang
			{
				file = "\SUPER_flash\init.sqf";
				postInit = 1;
			};
			class HandleWindows
			{
				file = "\SUPER_flash\scripts\window.sqf";
			};
			class EffectOnPlayerFull
			{
				file = "\SUPER_flash\scripts\effectonplayer_Full.sqf";
			};
			class EffectOnPlayerLight
			{
				file = "\SUPER_flash\scripts\effectonplayer_Light.sqf";
			};
			class EffectOnAI
			{
				file = "\SUPER_flash\scripts\effectonAI.sqf";
			};
			class FiredEH
			{
				file = "\SUPER_flash\flashbang.sqf";
			};
			class CheckForEffect
			{
				file = "\SUPER_flash\scripts\flashbang.sqf";
			};
		};
	};
};