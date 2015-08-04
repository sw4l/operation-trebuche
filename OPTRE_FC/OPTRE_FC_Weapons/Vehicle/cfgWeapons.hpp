class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class HMG_127;
	class OPTRE_FC_PlasmaCannons: HMG_127
	{
		class GunParticles
        {
			class effect1
			{
				positionName 				= "konec hlavne";
				directionName 				= "Usti hlavne";
				effectName 					= "MachineGunCloud";
            };
        };
		selectionFireAnim 					= "zasleh";
		displayName							= "Class-2 Energy Guns";
		ammo								= "OPTRE_FC_PlasmaCannons_Ammo";
		magazines[]                         = {"OPTRE_FC_PlasmaCannons_Battery"};
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		showAimCursorInternal 				= 0;
		magazineReloadTime 					= 5;
		initFov 							= 0.75;
		minFov 								= 0.375;
		maxFov 								= 1.1;
        modes[] 							= {"FullAuto"};
        class FullAuto: Mode_FullAuto
        {
            sounds[] 						= {"StandardSound"};
            reloadTime 						= 0.1;
            dispersion 						= 0.001;
            minRange 						= 2;
            minRangeProbab 					= 0.3;
            midRange 						= 300;
            midRangeProbab 					= 0.7;
            maxRange 						= 800;
            maxRangeProbab 					= 0.05;
            class BaseSoundModeType
            {
                weaponSoundEffect 			= "DefaultRifle";
                closure1[] 					= {};
                closure2[] 					= {};
                soundClosure[] 				= {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] 					= {"\OPTRE_FC_Weapons\PlasmaRifle\Data\sounds\fire.wss",1.0,1,2000};
                soundBegin[] 				= {"begin1",2.0};
            };
        };
	};
};