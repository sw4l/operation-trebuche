class Mode_SemiAuto;    // External class reference
class Mode_Burst;       // External class reference
class Mode_FullAuto;    // External class reference
class asdg_FrontSideRail;
class asdg_OpticRail1913;
     
class CfgWeapons
{
    class WeaponSlotsInfo;
    class SlotInfo;
    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class GunParticles;
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
     
        //ATTACHMENTS
		class muzzle_snds_acp;
        class TEI_M7_silencer: muzzle_snds_acp
       {
           scope                                                                   = 2;
           displayName                                                             = "M7 SS-M 49 Suppressor";
           picture                                                                 = "\A3\weapons_F\Data\UI\gear_acca_snds_l_CA.paa";
           model                                                                   = "\TEI_Weapons\SMG\m7_silencer.p3d";
           descriptionShort                                                        = "M7 Silencer";
           inertia                                                                 = 0.1;
			class ItemInfo: InventoryMuzzleItem_Base_F
			{
				mass = 5;
				class MagazineCoef
				{
					initSpeed 		= 1;
				};
				class AmmoCoef
				{
					// bullet ballistic modifiers
					hit				= 1;
					typicalSpeed	= 1;
					airFriction		= 1;
				
					// AI modifiers
					visibleFire		= 0.5;
					audibleFire		= 0.3;
					visibleFireTime	= 0.5;
					audibleFireTime	= 0.5;
					cost			= 1;
				}; 
				muzzleEnd 			= "zaslehPoint"; // memory point in muzzle supressor's model
				alternativeFire 	= "Zasleh2";  // class in cfgWeapons with model of muzzle flash	
				soundTypeIndex		= 1; /// defines the position in sound[] array in the rifle
				class MuzzleCoef
				{
					dispersionCoef			= 0.8f;
					artilleryDispersionCoef	= 1.0f;
	
					fireLightCoef			= 0.1f;

					recoilCoef				= 1.0f;
					recoilProneCoef			= 1.0f;

					minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
					midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
					maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
				};			
			};
	   };
		class acc_flashlight;
		class TEI_M7_Flashlight: acc_flashlight
			{
				scope 										= 2;
				displayName 								= "M7 Illumination Torch";
				picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
				descriptionShort 							= "Flashlight for the M7 SMG";
				model 										= "\TEI_Weapons\SMG\m7_flashlight.p3d";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass 									= 4;
			class flashlight
			{
				color[] 							= {180,156,120};
				ambient[] 							= {0.9,0.78,0.6};
				intensity 							= 5;
				size 								= 1;
				innerAngle 							= 20;
				outerAngle 							= 80;
				coneFadeCoef 						= 5;
				position 							= "flash dir";
				direction 							= "flash";
				useFlare 							= 1;
				flareSize 							= 1.4;
				flareMaxDistance 					= "100.0f";
				dayLight 							= 0;
				class Attenuation
				{
					start 							= 0.5;
					constant 						= 0;
					linear 							= 0;
					quadratic 						= 1.1;
					hardLimitStart 					= 20;
					hardLimitEnd 					= 30;
				};
				scale[] 							= {0};
			};
		};
		};
		class optic_Aco;
		class TEI_M7_Sight: optic_Aco
		{
			scope 										= 2;
			displayName 								= "M7 SLS/V 5B Reflex";
			picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
			descriptionShort 							= "Smart Link Scope Reflex Sight for the M7 SMG";
			model 										= "\TEI_Weapons\SMG\m7_sights.p3d";
			inertia 									= 0.1;
			class ItemInfo: InventoryOpticsItem_Base_F
			{
				mass = 4;
				modelOptics = "\A3\Weapons_F\empty";
				optics = 1;
				class OpticsModes
				{
					class RDS
					{
						opticsID = 1;
						useModelOptics = 0;
						opticsZoomMin = 0.375;
						opticsZoomMax = 1.1;
						opticsZoomInit = 0.75;
						memoryPointCamera = "eye";
						opticsFlare = 0;
						opticsDisablePeripherialVision = 0;
						distanceZoomMin = 100;
						distanceZoomMax = 100;
						cameraDir = "";
						visionMode[] = {};
						opticsPPEffects[] = {""};
					};
				};
			};
		};
		class acc_pointer_IR;
		class TEI_M7_Laser: acc_pointer_IR
		{
			scope 										= 2;
			displayName 								= "M7 Laser Aiming Module";
			picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
			descriptionShort 							= "IR Laser for the M7 SMG";
			model 										= "\TEI_Weapons\SMG\m7_laser.p3d";
			inertia 									= 0.1;
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
		};
     
       //WEAPONS
     
            class SMG_01_F;
            class TEI_M7: SMG_01_F
            {
                    scope                                                                   = 2;
            		handAnim[]                                                            = {"OFP2_ManSkeleton", "\TEI_Weapons\SMG\data\anim\smg_hand_anim.rtm"};
                    model                                                                   = "\TEI_Weapons\SMG\SMG.p3d";
                    displayName                                                             = "M7/Caseless SMG";
                    descriptionShort                                                        = "UNSC M7 SMG";
                    picture                                                                 = "";
                    magazines[]                                                             = {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag_tracer","TEI_48Rnd_5x23mm_Mag","TEI_48Rnd_5x23mm_Mag_tracer"};
                    modelOptics                                                             = "-";
                    dexterity                                                               = 3.25;
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadSMG_03";
                    inertia   																= 0.6;
					
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
                                    begin1[] = {"\TEI_Weapons\SMG\Data\sounds\SMG_1.wss",1.0,1,2000};
                                    begin2[] = {"\TEI_Weapons\SMG\Data\sounds\SMG_2.wss",1.0,1,2000}; 
                                    soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"\TEI_Weapons\SMG\Data\sounds\Silenced_1.wss",1.0,1,600};
                                    begin2[] = {"\TEI_Weapons\SMG\Data\sounds\Silenced_1.wss",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.066; 		
                            dispersion = 0.0013;
                            recoil = "recoil_auto_smg_01";
							recoilProne = "recoil_auto_prone_smg_01";
                            minRange = 2;
                            minRangeProbab = 0.3;
                            midRange = 50;
                            midRangeProbab = 0.7;
                            maxRange = 400;
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
                                    begin1[] = {"\TEI_Weapons\SMG\Data\sounds\SMG_1.wss",1.0,1,2000};
                                    begin2[] = {"\TEI_Weapons\SMG\Data\sounds\SMG_2.wss",1.0,1,2000}; 
                                    soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"\TEI_Weapons\SMG\Data\sounds\Silenced_1.wss",1.0,1,600};
                                    begin2[] = {"\TEI_Weapons\SMG\Data\sounds\Silenced_1.wss",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.066; 
                            dispersion = 0.0013;
                            recoil = "recoil_auto_smg_01";
							recoilProne = "recoil_auto_prone_smg_01";
                            minRange = 2;
                            minRangeProbab = 0.3;
                            midRange = 50;
                            midRangeProbab = 0.7;
                            maxRange = 400;
                            maxRangeProbab = 0.05;
                            soundBurst = 0;
                            burst = 1;
                    };
                    class GunParticles: GunParticles
                    {
                       class SecondEffect
                       {
                            positionName                                                    = "Nabojnicestart";
                            directionName                                                   = "Nabojniceend";
                            effectName                                                      = "CaselessAmmoCloud";
                       };
                    };
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
                            class MuzzleSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"TEI_M7_Silencer"};
                                    displayname                                             = "Muzzle Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                                    scope                                                   = 2;
                            };
                            class CowsSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"TEI_M7_Sight","optic_Holosight", "optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
									displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"TEI_M7_flashlight","TEI_M7_Laser"};\
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
                    };
					
            };
			class TEI_M7S: TEI_M7
			{
				class LinkedItems
				{
					class LinkedItemsOptic
					{
					slot = "CowsSlot";
					item = "TEI_M7_Sight";
					};
					class LinkedItemsAcc
					{
					slot = "PointerSlot";
					item = "TEI_M7_Laser";
					};
					class LinkedItemsMuzzle
					{
					slot = "MuzzleSlot";
					item = "TEI_M7_Silencer";
					};	
				};
			};
};