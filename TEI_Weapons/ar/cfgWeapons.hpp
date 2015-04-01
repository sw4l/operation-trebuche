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
     
            class TEI_MA5B_AmmoCounter: ItemCore
            {
                    scope                                                                   = 2;
                    displayName                                                             = "MA5B Ammo Counter";
					picture = "\TEI_weapons\ar\icons\scope_a.paa";
                    model                                                                   = "\TEI_Weapons\AR\AR_AmmoCount.p3d";
                    descriptionShort                                                        = "MA5B Ammunition Counter and Direction Finder";
                    weaponInfoType                                                          = "RscWeaponZeroing";
                    class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\TEI_Weapons\AR\AR_AmmoCount.p3d";
                            class OpticsModes
                            {
                                    class MA5B_BUIS
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
                                            cameraDir                                       = "";
                                    };
                                    class MA5B_AC_IS_Scope: MA5B_BUIS
                                    {
                                            opticsID                                                = 2;
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
			class TEI_MA5B_AmmoCounter_NoIS: ItemCore
			{
				scope = 2;
				displayName                                                             = "MA5B Ammo Counter (No IS)";
				picture = "\TEI_weapons\ar\icons\scope_b.paa";
				model                                                                   = "\TEI_Weapons\AR\AR_AmmoCount_NoIS.p3d";
				class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\TEI_Weapons\AR\AR_AmmoCount_NoIS.p3d";
                            class OpticsModes
                            {
                                    class MA5B_Top
                                    {
                                            opticsID                                                = 1;
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
                                            cameraDir                                       = "";
                                    };
                                    class MA5B_AC_Scope: MA5B_Top
                                    {
                                            opticsID                                                = 2;
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
			class TEI_MA5B_Flashlight: ItemCore
			{
			scope 										= 2;
			displayName 									= "MA5B Flashlight";
			picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
			descriptionShort 								= "Flashlight for the MA5B Assault Rifle";
			model 										= "\TEI_Weapons\AR\AR_flashlight.p3d";
			class ItemInfo: InventoryFlashLightItem_Base_F
			{
				mass 									= 4;
				class FlashLight
				{
					color[] 							= {180,156,120};
					ambient[] 							= {0.9,0.78,0.6};
					intensity 							= 5;
					size 								= 1;
					innerAngle 							= 20;
					outerAngle 							= 80;
					coneFadeCoef 							= 5;
					position 							= "flash dir";
					direction 							= "flash";
					useFlare 							= 1;
					flareSize 							= 1.4;
					flareMaxDistance 						= "100.0f";
					dayLight 							= 0;
					class Attenuation
					{
						start 							= 0.5;
						constant 						= 0;
						linear 							= 0;
						quadratic 						= 1.1;
						hardLimitStart 						= 20;
						hardLimitEnd 						= 30;
					};
					scale[] 							= {0};
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
            class  UGL_F;
            class TEI_MA5B: EBR_Base_F
            {
                    scope                                                                   = 2;
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\TEI_Weapons\AR\data\anim\hand_anim_ma5c.rtm"};
                    model                                                                   = "\TEI_Weapons\AR\AR.p3d";
                    displayName                                                             = "MA5B ICWS Assault Rifle";
                    descriptionShort                                                        = "UNSC Assault Rifle";
                    picture = "\TEI_weapons\ar\icons\ar_a.paa";
					drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
                    magazines[]                                                             = {"TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer"};
                    modelOptics                                                             = "-";
                    dexterity                                                               = 3.25;
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadTRG";
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
     
                                    begin1[] = {"\TEI_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1.0,1,2000};
                                    begin2[] = {"\TEI_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1.0,1,2000}; 
                                    soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.092; 			//was 0.065
                            dispersion = 0.00075;
                            recoil = "recoil_single_mx";
							recoilProne = "recoil_single_prone_mx";
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
                                    begin1[] = {"\TEI_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1.0,1,2000};
                                    begin2[] = {"\TEI_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1.0,1,2000};
                                    soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.092; 			//was 0.065
                            dispersion = 0.00085;
                            recoil = "recoil_single_mx";
							recoilProne = "recoil_single_prone_mx";
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
							multiplier = 1;
							autoFire = 0;
							aiRateOfFire = 1e-006;
							aiRateOfFireDistance = 100;
							showToPlayer = 1;
							artilleryDispersion = 0;
							artilleryCharge = 0;
							useAction = "";
							useActionTitle = "";
                    };
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
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
                                    compatibleitems[]                                       = {"TEI_MA5B_AmmoCounter", "TEI_MA5B_AmmoCounter_NoIS", "optic_Holosight", "optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
                                    displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"acc_pointer_IR", "acc_flashlight", "TEI_MA5B_Flashlight"};
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
							mass = 75;
                    };
            };
			
		class TEI_MA5B_AC: TEI_MA5B
		{
			picture = "\TEI_weapons\ar\icons\ar_b.paa";
			class LinkedItems
			{
				class LinkedItemsOptic
				{
				slot = "CowsSlot";
				item = "TEI_MA5B_AmmoCounter";
				};			
				class LinkedItemsAcc
				{
				slot = "PointerSlot";
				item = "TEI_MA5B_Flashlight";
				};
			};
		};
			
        class TEI_MA5BGL: TEI_MA5B
        {
                    scope                                                                   = 2;
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\TEI_Weapons\AR\data\anim\hand_anim_ma5c.rtm"};
                    model                                                                   = "\TEI_Weapons\AR\ARGL.p3d";
                    displayName                                                             = "MA5B + M309 Assault Rifle";
                    descriptionShort                                                        = "UNSC Assault Rifle + GL";
                    picture = "\TEI_weapons\ar\icons\argl_a.paa";
                    //magazines[]                                                             = {"TEI_60Rnd_762x51_Mag","TEI_60Rnd_762x51_Mag_Tracer","TEI_32Rnd_762x51_Mag","TEI_32Rnd_762x51_Mag_Tracer"};
                    //modelOptics                                                             = "-";
                    //dexterity                                                               = 3.25;
                    //muzzlePos                                                               = "usti hlavne";
                    //muzzleEnd                                                               = "konec hlavne";
                    //reloadAction                                                            = "GestureReloadTRG";
                    muzzles[]                                                           = {"this", "M309GL"}; // this was the missing
                    inertia                                                                 = 0.6;
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
                                    begin1[] = {"\TEI_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1.0,1,2000};
                                    begin2[] = {"\TEI_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1.0,1,2000};
                                    soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.065;
                            dispersion = 0.00075;
                            recoil = "recoil_single_mx";
							recoilProne = "recoil_single_prone_mx";
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
                                    begin1[] = {"\TEI_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1.0,1,2000};
                                    begin2[] = {"\TEI_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1.0,1,2000};
                                    soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.065;
                            dispersion = 0.00085;
                            recoil = "recoil_single_mx";
							recoilProne = "recoil_single_prone_mx";
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
                    class M309GL: UGL_F /// Some grenade launcher to have some more fun
                    {
                            displayName = "M309 Grenade Launcher";
                            descriptionShort = "M309 GL";
                            useModelOptics = false;
                            useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
                            magazines[] = {"1Rnd_HE_Grenade_shell", "UGL_FlareWhite_F", "UGL_FlareGreen_F", "UGL_FlareRed_F", "UGL_FlareYellow_F", "UGL_FlareCIR_F", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell"};
                            cameraDir = "OP_look";
                            discreteDistance[] = {100, 200, 300, 400};
                            discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
                            discreteDistanceInitIndex = 1; /// 200 is the default zero
                    };
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
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
                                    compatibleitems[]                                       = {"TEI_MA5B_AmmoCounter", "TEI_MA5B_AmmoCounter_NoIS", "optic_Holosight", "optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
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
			
	class TEI_MA5BGL_AC: TEI_MA5BGL
	{
		picture = "\TEI_weapons\ar\icons\argl_b.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "TEI_MA5B_AmmoCounter";
			};
		};
	};
};
