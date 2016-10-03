class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
    //WEAPONS
     
    class EBR_Base_F;
    class OPTRE_FC_Carbine: EBR_Base_F
    {
        scope                                                                   = 2;
        scopeArsenal                                                            = 2;
        handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_FC_Weapons\PlasmaRifle\data\anim\handanim.rtm"};
        model                                                                   = "\OPTRE_FC_Weapons\Carbine\Carbine.p3d";
        displayName                                                             = "[Covenant] Type-51 Carbine";
        descriptionShort                                                        = "Covenant Carbine";
        //picture 																= "\OPTRE_FC_Weapons\Carbine\icons\Carbine_ca.paa";
		//drySound[] 															= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
		reloadMagazineSound[] 													= {"\OPTRE_FC_Weapons\PlasmaRifle\data\sounds\reload.wss",1,1,50};
        magazines[]                                                             = {"OPTRE_FC_Carbine_Cartridge"};
        modelOptics                                                             = "-";
        dexterity                                                               = 3.25;
        muzzlePos                                                               = "usti hlavne";
        muzzleEnd                                                               = "konec hlavne";
        reloadAction                                                            = "GestureReloadTRG";
        inertia                                                                 = 0.25;
		maxRecoilSway 															= 0.01;
		swayDecaySpeed 															= 1;
		initspeed																= 700;
		distanceZoomMin 														= 100;
		distanceZoomMax 														= 60000;
		discreteDistance[] 														= {100,200,300,400,500,600};
		maxZeroing 																= 60000;
        class GunParticles
        {
            class SecondEffect
            {
                positionName                                                    = "Nabojnicestart";
                directionName                                                   = "Nabojniceend";
                effectName                                                      = "CaselessAmmoCloud";
            };
        };
        modes[] = {"Single"};
        class Single: Mode_SemiAuto
        {
            sounds[] 															= {"StandardSound"};
            reloadTime 															= 0.125;
            dispersion 															= 0;
            class BaseSoundModeType
            {
                weaponSoundEffect 												= "DefaultRifle";
                closure1[] 														= {};
                closure2[] 														= {};
                soundClosure[] 													= {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] 														= {"\OPTRE_FC_Weapons\PlasmaRifle\Data\sounds\fire.wss",1.0,1,2000};
                soundBegin[] 													= {"begin1",2.0};
            };
        };
        class WeaponSlotsInfo //Defines attachment slots
        {
			class MuzzleSlot
			{
                access                                                  		= 1;
                compatibleitems[]                                      			= {};
                displayname                                             		= "Muzzle Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\MUZZLE";
                scope                                                   		= 2;
            };
            class CowsSlot
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {};
                displayname                                             		= "Optics Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\TOP";
                scope                                                   		= 2;
            };
            class PointerSlot
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {};
                displayname                                             		= "Pointer Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\SIDE";
                scope                                                   		= 2;
            };
			mass 																= 80;
        };
    };
};