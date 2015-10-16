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
			class UnderBarrelSlot;
			class InventoryUnderItem_Base_F; /// base class for #bipodz
            //ATTACHMENTS
     
            class OPTRE_M73_SmartLink: ItemCore
            {
					dlc = "OPTRE";
                    scope                                                                   = 2;
                    displayName                                                             = "M73 Smart-Link Scope";
					picture = "\OPTRE_weapons\MG\icons\scope.paa";
                    model                                                                   = "\OPTRE_Weapons\MG\M73_SmartLink.p3d";
                    descriptionShort                                                        = "M73 Smart-Linked Neural Interface Scope";
                    weaponInfoType                                                          = "RscWeaponZeroing";
                    inertia                                                                 = 0.1;
                    class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\OPTRE_Weapons\MG\M73_SmartLink.p3d";
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
            };
		
			
     
            //WEAPONS
            class LMG_Mk200_F;
            class OPTRE_M73_base: LMG_Mk200_F
            {
					dlc = "OPTRE";		
                    scope                                                                   = 1;
					scopeArsenal = 2;
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_Weapons\MG\data\anim\M73_1.rtm"};
                    model                                                                   = "\OPTRE_Weapons\MG\M73.p3d";
                    displayName                                                             = "M73 Light Machine Gun";
                    descriptionShort                                                        = "UNSC Light Machine Gun";
					picture = "\OPTRE_weapons\MG\icons\M73_1.paa";
                    magazines[]                                                             = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box_Tracer"};
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadM200";
					drySound[] 																= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
                    inertia                                                                 = 0.95;
					maxRecoilSway 															= 0.0125;
					swayDecaySpeed 															= 1.25;
					deployedPivot    														= "bipod";
					maxZeroing 																= 1000;
					changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",0.17782794,1,5};
					discreteDistance[] 														= {100,200,300,400,500,600,700,800,900,1000};
                    modes[] 																= {"FullAuto","Single"};
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
                                    begin1[] 												= {"\OPTRE_Weapons\MG\data\sounds\M73_1.wss",1.0,1,2000};
									begin2[] 												= {"\OPTRE_Weapons\MG\data\sounds\M73_2.wss",1.0,1,2000};
									soundBegin[] 											= {"begin1",0.34,"begin2",0.33};
									class SoundTails
									{
										class TailTrees
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*trees";
										};
										class TailForest
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*forest";
										};
										class TailInterior
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",1.9952624,1,1200};
											frequency = 1;
											volume = "interior";
										};
										class TailMeadows
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
										};
										class TailHouses
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*houses";
										};
									};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
								begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.8912509,1,200};
								begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.8912509,1,200};
								begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.8912509,1,200};
								soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
								class SoundTails
								{
									class TailTrees
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*trees";
									};
									class TailForest
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*forest";
									};
									class TailInterior
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.9952624,1,1200};
										frequency = 1;
										volume = "interior";
									};
									class TailMeadows
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
									};
									class TailHouses
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*houses";
									};
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
                                    begin1[] 												= {"\OPTRE_Weapons\MG\data\sounds\M73_1.wss",1.0,1,2000};
									begin2[] 												= {"\OPTRE_Weapons\MG\data\sounds\M73_2.wss",1.0,1,2000};
									soundBegin[] 											= {"begin1",0.34,"begin2",0.33};
									class SoundTails
									{
										class TailTrees
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*trees";
										};
										class TailForest
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*forest";
										};
										class TailInterior
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",1.9952624,1,1200};
											frequency = 1;
											volume = "interior";
										};
										class TailMeadows
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
										};
										class TailHouses
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*houses";
										};
									};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
								begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.8912509,1,200};
								begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.8912509,1,200};
								begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.8912509,1,200};
								soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
								class SoundTails
								{
									class TailTrees
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*trees";
									};
									class TailForest
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*forest";
									};
									class TailInterior
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.9952624,1,1200};
										frequency = 1;
										volume = "interior";
									};
									class TailMeadows
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
									};
									class TailHouses
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*houses";
									};
								};
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
                                    compatibleitems[]                                       = {"OPTRE_M73_SmartLink", "OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope", "OPTRE_M6C_RDS"};
                                    displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {};
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
							class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
							{
								compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};		
							};	
                    };
            };
         class OPTRE_M73: OPTRE_M73_base
            {
					dlc = "OPTRE";
                    model                                                                   = "\OPTRE_Weapons\MG\M73.p3d";
                    displayName                                                             = "M73 Light Machine Gun";
                    descriptionShort                                                        = "UNSC Light Machine Gun";
                    inertia                                                                 = 0.75;
					scope																	= 2;
					scopeArsenal = 2;
					maxRecoilSway 															= 0.0115;
					swayDecaySpeed 															= 1.15;
                    modes[] 																= {"Single","FullAuto"};
                    class Single: Single {};
                    class FullAuto: FullAuto {};
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
							mass = 140;
                    };
									class LinkedItems
					{
					class LinkedItemsOptic
					{
					slot = "CowsSlot";
					item = "OPTRE_M73_SmartLink";
					};
					class LinkedItemsMuzzle
					{
					slot = "UnderBarrelSlot";
					item = "bipod_01_F_blk";
					};	
				};
            };
		class OPTRE_M73_CQC: OPTRE_M73
            {
					dlc = "OPTRE";
                    model                                                                   = "\OPTRE_Weapons\MG\M73_rail.p3d";
                    displayName                                                             = "M73 CQC Light Machine Gun (WIP)";
					handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_Weapons\MG\data\anim\M73_2.rtm"};
                    descriptionShort                                                        = "UNSC Light Machine Gun (CQC Variant)";
                    inertia                                                                 = 0.75;
					scope																	= 1;
					scopeArsenal 															= 1;
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
	};
		/*
		class OPTRE_M247: MMG_01_base_F
        {
					scope                                                                   = 1;
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\A3\weapons_f\Machineguns\M200\data\Anim\M200.rtm"};
                    model                                                                   = "\OPTRE_Weapons\MG\M247.p3d";
                    displayName                                                             = "M247 Medium Machine Gun";
                    descriptionShort                                                        = "UNSC Medium Machine Gun";
                    picture 																= "";
                    magazines[]                                                             = {"OPTRE_100Rnd_762x51_Box","OPTRE_100Rnd_762x51_Box_Tracer"};
                    modelOptics                                                             = "-";
                    dexterity                                                               = 3.25;
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadM200";
					drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
                    inertia                                                                 = 0.95;
					maxRecoilSway = 0.0125;
					swayDecaySpeed = 1.25;
                    reloadTime = 0.0789; 		
                    dispersion = 0.00085;
					maxZeroing 																= 1000;
					discreteDistance[] 														= {100,200,300,400,500,600,700,800,900,1000};
                    recoil = "recoil_single_ebr";
                    recoilProne = "recoil_single_prone_ebr";
                    minRange = 2;
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
							class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
							{
								iconPosition[] = {0.2, 0.7};
								iconScale = 0.2;
								compatibleItems[] = {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};		
							};	
		};
			
*/

