    class Mode_SemiAuto;    // External class reference
    class Mode_Burst;       // External class reference
    class Mode_FullAuto;    // External class reference
     
    class CfgWeapons
    {
            class WeaponSlotsInfo;
            class SlotInfo;
            class ItemCore;
            class InventoryOpticsItem_Base_F;
            class GunParticles;
     
            //ATTACHMENTS
     
            class TEI_M73_SmartLink: ItemCore
            {
                    scope                                                                   = 2;
                    displayName                                                             = "M73 Smart-Link Scope";
					picture = "\TEI_weapons\ar\icons\scope_a.paa";
                    model                                                                   = "\TEI_Weapons\MG\M73_SmartLink.p3d";
                    descriptionShort                                                        = "M73 Smart-Linked Neural Interface Scope";
                    weaponInfoType                                                          = "RscWeaponZeroing";
                    class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\TEI_Weapons\MG\M73_SmartLink.p3d";
                            class OpticsModes
                            {
                                    class M73_IS
                                    {
                                            opticsID                                        = 1;
                                            useModelOptics                                  = 0;
                                            opticsPPEffects[]                               = {""};
                                            opticsFlare                                     = 0;
                                            opticsDisablePeripherialVision  = 0;
                                            opticsZoomMin                                   = 0.375;
                                            opticsZoomMax                                   = 0.55;
                                            opticsZoomInit                                  = 0.55;
                                            memoryPointCamera                               = "opticView";
                                            visionMode[]                                    = {};
                                            distanceZoomMin                                 = 300;
                                            distanceZoomMax                                 = 300;
                                            //cameraDir                                       = "";
                                    };
                                    class M73_Scope: M73_IS
                                    {
                                            opticsID                                        = 2;
                                            useModelOptics                                  = 1;
                                            opticsZoomMin                                   = 0.075;
                                            opticsZoomMax                                   = 0.0523;
                                            opticsZoomInit                                  = 0.0523;
                                            memoryPointCamera                               = "opticView2";
                                            modelOptics[]                                   = {"\A3\Weapons_F\acc\reticle_HAMR"/*,"\A3\Weapons_F\acc\reticle_arco_F"*/};
                                            visionMode[]                                    = {};
                                    };
                            };
                    };
                    inertia                                                                 = 0.1;
            };
			
     
            //WEAPONS
     
            class EBR_Base_F;
            class TEI_M73: EBR_Base_F
            {
                    scope                                                                   = 2;
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"};
                    model                                                                   = "\TEI_Weapons\MG\M73.p3d";
                    displayName                                                             = "M73 Light Machine Gun";
                    descriptionShort                                                        = "UNSC Light Machine Gun";
                    picture 																= "";
                    magazines[]                                                             = {"TEI_100Rnd_95x40_Box","TEI_100Rnd_95x40_Box_Tracer","TEI_200Rnd_95x40_Box","TEI_200Rnd_95x40_Box_Tracer"};
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadM200";
					drySound[] 																= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
                    inertia                                                                 = 0.95;
					maxRecoilSway 															= 0.0125;
					swayDecaySpeed 															= 1.25;
                    class GunParticles: GunParticles
                    {
                       class SecondEffect
                       {
                            positionName                                                    = "Nabojnicestart";
                            directionName                                                   = "Nabojniceend";
                            effectName                                                      = "CaselessAmmoCloud";
                       };
                    };
                    modes[] 																= {"Single","FullAuto"};
                    class Single: Mode_SemiAuto
                    {
                            sounds[] 														= {"StandardSound","SilencedSound"};
                            class BaseSoundModeType
                            {
                                    weaponSoundEffect 										= "DefaultRifle";
                                    closure1[] 												= {};
                                    closure2[] 												= {};
                                    soundClosure[] 											= {"closure1",0.5,"closure2",0.5};
                            };
                            class StandardSound: BaseSoundModeType
                            {
                                    begin1[] 												= {"\TEI_Weapons\MG\data\sounds\M73_1.wss",1.0,1,2000};
									begin2[] 												= {"\TEI_Weapons\MG\data\sounds\M73_2.wss",1.0,1,2000};
									soundBegin[] 											= {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] 												= {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] 												= {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] 											= {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime 														= 0.0789; 		
                            dispersion 														= 0.00075;
                            recoil 															= "recoil_single_mx";
							recoilProne 													= "recoil_single_prone_mx";
                            minRange 														= 2;
                            minRangeProbab 													= 0.3;
                            midRange 														= 300;
                            midRangeProbab 													= 0.7;
                            maxRange 														= 600;
                            maxRangeProbab 													= 0.05;
                    };
                    class FullAuto: Mode_FullAuto
                    {
                            sounds[] 														= {"StandardSound","SilencedSound"};
                            class BaseSoundModeType
                            {
                                    weaponSoundEffect 										= "DefaultRifle";
                                    closure1[] 												= {};
                                    closure2[] 												= {};
                                    soundClosure[] 											= {"closure1",0.5,"closure2",0.5};
                            };
                            class StandardSound: BaseSoundModeType
                            {
                                    begin1[] 												= {"\TEI_Weapons\MG\data\sounds\M73_1.wss",1.0,1,2000};
									begin2[] 												= {"\TEI_Weapons\MG\data\sounds\M73_2.wss",1.0,1,2000};
									soundBegin[] 											= {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] 												= {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] 												= {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] 											= {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime 														= 0.0789; 		
                            dispersion 														= 0.00075;
                            recoil 															= "recoil_single_mx";
							recoilProne  													= "recoil_single_prone_mx";
                            minRange  														= 2;
                            minRangeProbab  												= 0.3;
                            midRange = 300;
                            midRangeProbab = 0.7;
                            maxRange = 600;
                            maxRangeProbab = 0.05;
                            soundBurst = 0;
                            burst = 1;
							displayName = "$STR_DN_MODE_FULLAUTO";
							textureType = "fullAuto";
                    };
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
							mass = 160;
                            class MuzzleSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"muzzle_snds_B"};
                                    displayname                                             = "Muzzle Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                                    scope                                                   = 2;
                            };
                            class CowsSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"TEI_M73_SmartLink", "optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
                                    displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"acc_pointer_IR", "acc_flashlight"};
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
                    };
            };
            class TEI_M73_CQC: TEI_M73
            {
                    model                                                                   = "\TEI_Weapons\MG\M73_rail.p3d";
                    displayName                                                             = "M73 CQC Light Machine Gun";
                    descriptionShort                                                        = "UNSC Light Machine Gun (CQC Variant)";
                    inertia                                                                 = 0.75;
					scope																	= 1;
					maxRecoilSway 															= 0.0115;
					swayDecaySpeed 															= 1.15;
                    modes[] 																= {"Single","FullAuto"};
                    class Single: Single {};
                    class FullAuto: FullAuto {};
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
							mass = 140;
                    };
            };
			
		class TEI_M73_SL: TEI_M73
		{
			picture = "";
			class LinkedItems
			{
				class LinkedItemsOptic
				{
				slot = "CowsSlot";
				item = "TEI_M73_SmartLink";
				};			
			};
		};
		
		class TEI_M247: EBR_Base_F
            {
                    scope                                                                   = 1;
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"};
                    model                                                                   = "\TEI_Weapons\MG\M247.p3d";
                    displayName                                                             = "M247 Medium Machine Gun";
                    descriptionShort                                                        = "UNSC Medium Machine Gun";
                    picture 																= "";
                    magazines[]                                                             = {"TEI_100Rnd_762x51_Box","TEI_100Rnd_762x51_Box_Tracer"};
                    modelOptics                                                             = "-";
                    dexterity                                                               = 3.25;
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadM200";
					drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
                    inertia                                                                 = 0.95;
					maxRecoilSway = 0.0125;
					swayDecaySpeed = 1.25;
                    class GunParticles: GunParticles
                    {
                       class SecondEffect
                       {
                            positionName                                                    = "Nabojnicestart";
                            directionName                                                   = "Nabojniceend";
                            effectName                                                      = "CaselessAmmoCloud";
                       };
                    };
                    modes[] = {"Single","FullAuto"};
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
     
                                    begin1[] = {"\TEI_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
									begin2[] = {"\TEI_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
									soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.0789; 		
                            dispersion = 0.00075;
                            recoil = "recoil_single_ebr";
							recoilProne = "recoil_single_prone_ebr";
                            minRange = 2;
                            minRangeProbab = 0.3;
                            midRange = 300;
                            midRangeProbab = 0.7;
                            maxRange = 600;
                            maxRangeProbab = 0.05;
                    };
                    class FullAuto: Mode_FullAuto
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
                                    begin1[] = {"\TEI_Weapons\MG\data\sounds\M247_1.wss",1.0,1,2000};
									begin2[] = {"\TEI_Weapons\MG\data\sounds\M247_2.wss",1.0,1,2000};
									soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.0789; 		
                            dispersion = 0.00085;
                            recoil = "recoil_single_ebr";
                            recoilProne = "recoil_single_prone_ebr";
                            minRange = 2;
                            minRangeProbab = 0.3;
                            midRange = 300;
                            midRangeProbab = 0.7;
                            maxRange = 600;
                            maxRangeProbab = 0.05;
                            soundBurst = 0;
                            burst = 1;
							displayName = "$STR_DN_MODE_FULLAUTO";
							textureType = "fullAuto";
                    };
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
							mass = 180;
                            class MuzzleSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"muzzle_snds_B"};
                                    displayname                                             = "Muzzle Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                                    scope                                                   = 2;
                            };
                            class CowsSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
                                    displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"acc_pointer_IR", "acc_flashlight"};
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
                    };
            };
	};
