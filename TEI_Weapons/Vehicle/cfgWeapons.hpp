class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
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
				positionName 				= "konec hlavne";
				directionName 				= "Usti hlavne";
				effectName 					= "MachineGunCloud";
            };
            class effect2
            {
				positionName 				= "machinegun_eject_pos";
				directionName 				= "machinegun_eject_dir";
				effectName 					= "MachineGunEject";
            };
            class effect3
            {
				positionName 				= "machinegun_eject_pos";
				directionName 				= "machinegun_eject_dir";
				effectName 					= "MachineGunCartridge2";
            };
        };
		selectionFireAnim 					= "zasleh";
		displayName							= "M41 LAAG";
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		class manual:MGun
		{
			displayName						= "M41 LAAG";
			reloadTime 						= 0.0667;
			dispersion						= 0.00087;
			sounds[]						= {"StandardSound"};
		};
	};
	class TEI_102R_Turret: missiles_titan
	{
		displayName							= "102mm SC-HE Launcher";
		magazines[] 						= {"TEI_3Rnd_102mm_rockets"};
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		class manual:MGun
		{
			displayName						= "102mm SC-HE Launcher";
			reloadTime						= 0.0667;
			dispersion						= 0.00087;
			sounds[]						= {"StandardSound"};
		};
	};
	class TEI_M79_MLRS: missiles_titan
	{
		displayName							= "M79 MLRS";
		magazines[] 						= {"TEI_6Rnd_65mm_rockets"};
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		class manual:MGun
		{
			displayName						= "M79 MLRS";
			reloadTime						= 0.0667;
			dispersion						= 0.00087;
			sounds[]						= {"StandardSound"};
		};
	};
	class TEI_M68_GAUSS: cannon_120mm
	{
		cursor 								= "EmptyCursor";
		cursorAim 							= "cannon";
		nameSound  							= "cannon";
		reloadSound[] 						= {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",31.622776,1,10};
		minRange 							= 5;
		minRangeProbab 						= 0.7;
		midRange 							= 1200;
		midRangeProbab 						= 0.7;
		maxRange 							= 2500;
		maxRangeProbab 						= 0.1;
		reloadTime 							= 6;
		magazineReloadTime 					= 6;
		autoReload 							= 1;
		ballisticsComputer					= 1;
		canLock 							= 0;
		autoFire 							= 0;
		displayName 						= "M68 ALIM";
		magazines[] 						= {"TEI_20Rnd_ALIM_Gauss_slugs"};
		class GunParticles
		{
			class effect1
			{
				positionName 				= "konec hlavne";
				directionName				= "Usti hlavne";
				effectName			 		= "MachineGunCloud";
            };
            class effect2
            {
				positionName 				= "machinegun_eject_pos";
				directionName 				= "machinegun_eject_dir";
				effectName 					= "MachineGunEject";
            };
            class effect3
            {
				positionName 				= "machinegun_eject_pos";
				directionName 				= "machinegun_eject_dir";
				effectName 					= "MachineGunCartridge2";
            };
		};
	};
};
