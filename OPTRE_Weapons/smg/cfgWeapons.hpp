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
	class InventoryMuzzleItem_Base_F;
	class InventoryFlashLightItem_Base_F;
     
        //ATTACHMENTS
		class muzzle_snds_acp;
        class OPTRE_M7_silencer: muzzle_snds_acp
       {
		dlc = "OPTRE";
           scope                                                                   = 2;
           displayName                                                             = "M7 SS-M 49 Suppressor";
           picture = "\OPTRE_weapons\smg\icons\silencer.paa";
           model                                                                   = "\OPTRE_Weapons\SMG\m7_silencer.p3d";
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
					dispersionCoef			= 1;
					artilleryDispersionCoef	= 1;
	
					fireLightCoef			= 0.1f;

					recoilCoef				= 0.8f;
					recoilProneCoef			= 0.8f;

					minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
					midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
					maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
				};			
			};
	   };
		class acc_flashlight;
		class OPTRE_M7_Flashlight: ItemCore
		{
		dlc = "OPTRE";
			scope 										= 2;
			displayName 								= "M7 Flashlight";
			picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
			descriptionShort 								= "Flashlight for the M7 SMG";
			model 										= "\OPTRE_Weapons\SMG\m7_flashlight.p3d";
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
		class optic_Aco;
		class OPTRE_M7_Sight: optic_Aco
		{
		dlc = "OPTRE";
			scope 										= 2;
			displayName 								= "M7 SLS/V 5B Reflex";
			picture = "\OPTRE_weapons\smg\icons\scope.paa";
			descriptionShort 							= "Smart Link Scope Reflex Sight for the M7 SMG";
			model 										= "\OPTRE_Weapons\SMG\m7_sights.p3d";
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
		class OPTRE_M7_Laser: acc_pointer_IR
		{
		dlc = "OPTRE";
			scope 										= 2;
			displayName 								= "M7 Laser Aiming Module";
			picture = "\OPTRE_weapons\smg\icons\laser.paa";
			descriptionShort 							= "IR Laser for the M7 SMG";
			model 										= "\OPTRE_Weapons\SMG\m7_laser.p3d";
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
            class OPTRE_M7: SMG_01_F
            {
		dlc = "OPTRE";
                    scope                                                                   = 2;
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_Weapons\smg\data\anim\smg_handanim2.rtm"};
					model                                                                   = "\OPTRE_Weapons\SMG\SMG.p3d";
                    displayName                                                             = "M7/Caseless SMG";
                    descriptionShort                                                        = "UNSC M7 SMG";
                    picture = "\OPTRE_weapons\smg\icons\smg.paa";
                    magazines[]                                                             = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag_tracer","OPTRE_48Rnd_5x23mm_Mag","OPTRE_48Rnd_5x23mm_Mag_tracer","OPTRE_48Rnd_5x23mm_JHP_Mag","OPTRE_48Rnd_5x23mm_FMJ_Mag"};
                    modelOptics                                                             = "-";
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadSMG_03";
					changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",0.17782794,1,5};
					inertia = 0.25;
					dexterity = 1.8;
					drySound[] = {"A3\sounds_f\weapons\other\dry1",0.1,1,20};
					maxRecoilSway = 0.0075;
					swayDecaySpeed = 1;
					deployedPivot    														= "bipod";
					maxZeroing 																= 300;
					discreteDistance[] 														= {100,200,300};
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
                                    begin1[] = {"\OPTRE_Weapons\SMG\Data\sounds\SMG_1.ogg",1.5,1,2000};
                                    soundBegin[] = {"begin1",1};
									class SoundTails
									{
										class TailInterior
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
											frequency = 1;
											volume = "interior";
										};
										class TailTrees
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*trees";
										};
										class TailForest
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*forest";
										};
										class TailMeadows
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
										};
										class TailHouses
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*houses";
										};
									};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",1.0,1,600};
                                    begin2[] = {"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
									class SoundTails
									{
										class TailInterior
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",1.0,1,400};
											frequency = 1;
											volume = "interior";
										};
										class TailTrees
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",1.0,1,400};
											frequency = 1;
											volume = "(1-interior/1.4)*trees";
										};
										class TailForest
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",1.0,1,400};
											frequency = 1;
											volume = "(1-interior/1.4)*forest";
										};
										class TailMeadows
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",1.0,1,400};
											frequency = 1;
											volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
										};
										class TailHouses
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",1.0,1,400};
											frequency = 1;
											volume = "(1-interior/1.4)*houses";
										};
									};
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
                                    begin1[] = {"\OPTRE_Weapons\SMG\Data\sounds\SMG_1.ogg",1.0,1,2000};
                                    soundBegin[] = {"begin1",1};
									class SoundTails
									{
										class TailInterior
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_interior",1.5848932,1,1200};
											frequency = 1;
											volume = "interior";
										};
										class TailTrees
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_trees",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*trees";
										};
										class TailForest
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_forest",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*forest";
										};
										class TailMeadows
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_meadows",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
										};
										class TailHouses
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tail_houses",1.0,1,1200};
											frequency = 1;
											volume = "(1-interior/1.4)*houses";
										};
									};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",1.0,1,600};
                                    begin2[] = {"\OPTRE_Weapons\SMG\Data\sounds\Silenced_1.wss",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
									class SoundTails
									{
										class TailInterior
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_tail_interior",1.0,1,400};
											frequency = 1;
											volume = "interior";
										};
										class TailTrees
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_trees",1.0,1,400};
											frequency = 1;
											volume = "(1-interior/1.4)*trees";
										};
										class TailForest
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\silencer_Vermin_tail_forest",1.0,1,400};
											frequency = 1;
											volume = "(1-interior/1.4)*forest";
										};
										class TailMeadows
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_meadows",1.0,1,400};
											frequency = 1;
											volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
										};
										class TailHouses
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Silencer_Vermin_Tail_houses",1.0,1,400};
											frequency = 1;
											volume = "(1-interior/1.4)*houses";
										};
									};
                            };
                            reloadTime = 0.05; 
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
							displayName = "$STR_DN_MODE_FULLAUTO";
							textureType = "fullAuto";
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
                                    compatibleitems[]                                       = {"OPTRE_M7_Silencer"};
                                    displayname                                             = "Muzzle Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                                    scope                                                   = 2;
                            };
                            class CowsSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope", "OPTRE_M6C_RDS"};
									displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"OPTRE_M7_flashlight","OPTRE_M7_Laser"};
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
							mass = 35;
                    };
					
            };
            class OPTRE_M7_Folded: OPTRE_M7
            {
		dlc = "OPTRE";
                    handAnim[]                                                            	= {"OFP2_ManSkeleton"};
					reloadAction 															= "GestureReloadPistol";
					model                                                                   = "\OPTRE_Weapons\SMG\SMG_folded.p3d";
                    displayName                                                             = "M7/Caseless SMG (Folded)";
                    descriptionShort                                                        = "UNSC M7 SMG (Folded)";
					type 																	= 2;
            };
			class OPTRE_M7S: OPTRE_M7
			{
		dlc = "OPTRE";
				class LinkedItems
				{
					class LinkedItemsOptic
					{
					slot = "CowsSlot";
					item = "OPTRE_M7_Sight";
					};
					class LinkedItemsAcc
					{
					slot = "PointerSlot";
					item = "OPTRE_M7_Laser";
					};
					class LinkedItemsMuzzle
					{
					slot = "MuzzleSlot";
					item = "OPTRE_M7_Silencer";
					};	
				};
			};
};