class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
    class CfgWeapons
    {
            class WeaponSlotsInfo;
            class SlotInfo;
            class ItemCore;
            class InventoryOpticsItem_Base_F;
			class InventoryFlashLightItem_Base_F;
			class InventoryMuzzleItem_Base_F;
            class GunParticles;
     
            //ATTACHMENTS
     
            class TEI_SRS99_Scope: ItemCore
            {
                    scope                                                                   = 2;
                    displayName                                                             = "Oracle N-varint SRS99 Scope";
					//picture = "\TEI_weapons\ar\icons\scope_a.paa";
                    model                                                                   = "\TEI_Weapons\Sniper\SRS99-Scope.p3d";
                    descriptionShort                                                        = "Oracle N-varint SRS99 Sniper Rifle 5-20x56 Scope";
                    weaponInfoType                                                          = "RscWeaponZeroing";
                    class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\TEI_Weapons\Sniper\SRS99-Scope.p3d";
                            class OpticsModes
                            {
                                    class SRS99_Scope_View
                                    {
                                            opticsID                                                = 2;
                                            useModelOptics                                  = 1;
                                            opticsZoomMin                                   = 0.0078; //~20x
                                            opticsZoomMax                                   = 0.0503; //~5x
                                            opticsZoomInit                                  = 0.0523;
                                            memoryPointCamera                               = "opticView";
                                            modelOptics[]                                   = {"\A3\Weapons_F\acc\reticle_sniper_F"};
                                            visionMode[]                                    = {};
                                    };
                            };
                    };
                    inertia                                                                 = 0.1;
            };
			class TEI_SRS99_Laser: ItemCore
			{
			scope 										= 2;
			displayName 									= "SRS99 IR Laser";
			picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
			descriptionShort 								= "SRS99 Sniper IR Laser Pointer";
			model 										= "\TEI_Weapons\Sniper\SRS99-Laser.p3d";
			class ItemInfo: InventoryFlashLightItem_Base_F
			{
				mass = 4;
				class Pointer
				{
					irLaserPos = "laser dir";
					irLaserEnd = "laser";
					irDistance = 5;
				};
			};
			inertia 									= 0.1;
		};
     
            //WEAPONS
     
            class Rifle_Long_Base_F;
            class EBR_Base_F: Rifle_Long_Base_F
            {
                    class WeaponSlotsInfo
                    {
                            class SlotInfo;
                    };
                    class GunParticles;
            };
            class TEI_SRS99D: EBR_Base_F
            {
                    scope                                                                   = 2;
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"};
                    model                                                                   = "\TEI_Weapons\Sniper\SRS99D-S2.p3d";
                    displayName                                                             = "SRS99D-S2 Sniper Rifle";
                    descriptionShort                                                        = "UNSC Sniper Rifle";
                    //picture = "\TEI_weapons\ar\icons\ar_a.paa";
					drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
                    magazines[]                                                             = {"TEI_4Rnd_145x114_APFSDS_Mag","TEI_4Rnd_145x114_HVAP_Mag"};
                    modelOptics                                                             = "-";
                    dexterity                                                               = 3.25;
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "ReloadGM6";
                    inertia                                                                 = 0.6;
					maxRecoilSway = 0.01;
					swayDecaySpeed = 1;
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
                            sounds[] = {"StandardSound","SilencedSound"};
                            class BaseSoundModeType
                            {
                                    weaponSoundEffect = "DefaultRifle";
                                    closure1[] = {};
                                    closure2[] = {};
                                    soundClosure[] = {"closure1",0.5,"closure2",0.5};
                            };
                            class StandardSound: BaseSoundModeType
                            {
                                    /*begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4",1.0,1,2000};
                                    begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5",1.0,1,2000};
                                    begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6",1.0,1,2000};*/
     
                                    begin1[] = {"\TEI_Weapons\Sniper\Data\sounds\SRS99_1.wss",1.0,1,4000};
                                    begin2[] = {"\TEI_Weapons\Sniper\Data\sounds\SRS99_2.wss",1.0,1,4000}; 
                                    soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.6; 			//was 0.065
                            dispersion = 0.00075;
                            recoil = "recoil_single_gm6";
							recoilProne = "recoil_single_gm6";
                            minRange = 2;
                            minRangeProbab = 0.3;
                            midRange = 300;
                            midRangeProbab = 0.7;
                            maxRange = 600;
                            maxRangeProbab = 0.05;
                    };
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
                            class MuzzleSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    //compatibleitems[]                                       = {"muzzle_snds_B"};
									compatibleitems[]                                       = {""};
                                    displayname                                             = "Muzzle Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                                    scope                                                   = 2;
                            };
                            class CowsSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"TEI_SRS99_Scope", "optic_Holosight", "optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
                                    displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"acc_pointer_IR", "acc_flashlight", "TEI_SRS99_Laser"};
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
							mass = 75;
                    };
            };
			
		class TEI_SRS99D_SC_LS: TEI_SRS99D
		{
			scope = 1;
			//picture = "\TEI_weapons\ar\icons\ar_b.paa";
			class LinkedItems
			{
				class LinkedItemsOptic
				{
				slot = "CowsSlot";
				item = "TEI_SRS99_Scope";
				};			
				class LinkedItemsAcc
				{
				slot = "PointerSlot";
				item = "TEI_SRS99_Laser";
				};
			};
		};
};
