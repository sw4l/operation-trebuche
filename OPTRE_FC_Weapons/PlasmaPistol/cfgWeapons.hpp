class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
    class WeaponSlotsInfo;
    class SlotInfo;
    class ItemCore;
    class GunParticles;
     
    //WEAPONS
     
    class EBR_Base_F;
    class OPTRE_FC_Plasma_Pistol: EBR_Base_F
    {
        scope                                                                   = 2;
        scopeArsenal                                                            = 2;
		type																	= 2;
        handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_FC_Weapons\PlasmaRifle\data\anim\handanim.rtm"};
        model                                                                   = "\OPTRE_FC_Weapons\PlasmaPistol\PlasmaPistol.p3d";
        displayName                                                             = "[Covenant] Type-25 Directed Energy Pistol";
        descriptionShort                                                        = "Covenant Plasma Pistol";
        //picture 																= "\OPTRE_FC_Weapons\PlasmaPistol\icons\PlasmaRifle_ca.paa";
		//drySound[] 															= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
		reloadMagazineSound[] 													= {"\OPTRE_FC_Weapons\PlasmaRifle\data\sounds\reload.wss",1,1,50};
        magazines[]                                                             = {"OPTRE_FC_Plasma_Pistol_Battery"};
        modelOptics                                                             = "-";
        dexterity                                                               = 3.25;
        muzzlePos                                                               = "usti hlavne";
        muzzleEnd                                                               = "konec hlavne";
        reloadAction                                                            = "GestureReloadTRG";
        inertia                                                                 = 0.25;
		maxRecoilSway 															= 0.01;
		swayDecaySpeed 															= 1;
		initspeed																= 175;
		distanceZoomMin 														= 100;
		distanceZoomMax 														= 100;
		discreteDistance[] 														= {100};
		maxZeroing 																= 100;
        class GunParticles: GunParticles
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
            reloadTime 															= 0.1;
            dispersion 															= 0.001;
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
        class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
        {
			class MuzzleSlot: SlotInfo
			{
                access                                                  		= 1;
                compatibleitems[]                                      			= {};
                displayname                                             		= "Muzzle Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\MUZZLE";
                scope                                                   		= 2;
            };
            class CowsSlot: SlotInfo
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {};
                displayname                                             		= "Optics Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\TOP";
                scope                                                   		= 2;
            };
            class PointerSlot: SlotInfo
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {};
                displayname                                             		= "Pointer Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\SIDE";
                scope                                                   		= 2;
            };
			mass 																= 50;
        };
    };
};