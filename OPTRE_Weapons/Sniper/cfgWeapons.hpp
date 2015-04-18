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
     
            class OPTRE_SRS99_Scope: ItemCore
            {
                    scope                                                                   = 2;
                    displayName                                                             = "Oracle N-varint SRS99 Scope";
					//picture = "\OPTRE_weapons\ar\icons\scope_a.paa";
                    model                                                                   = "\OPTRE_Weapons\Sniper\SRS99-Scope.p3d";
                    descriptionShort                                                        = "Oracle N-varint SRS99 Sniper Rifle 5-20x56 Scope";
                    weaponInfoType                                                          = "RscWeaponZeroing";
                    modelOptics                                                     		= "\OPTRE_Weapons\Sniper\SRS99-Scope.p3d";
                    class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\OPTRE_Weapons\Sniper\SRS99-Scope.p3d";
                            class OpticsModes
                            {
                                    class SRS99_Scope_View
                                    {
											opticsID = 1;
											useModelOptics = 1;
                                            opticsZoomMin                                   = 0.005;
                                            opticsZoomMax                                   = 0.05;
                                            opticsZoomInit                                  = 0.05;
											discretefov[] 									= {0.05,0.025,0.01,0.0075,0.005};
											discreteinitIndex 							= 0;
											discreteDistance[] 								= {100,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
											discreteDistanceInitIndex 						= 1;
											distanceZoomMin 								= 100;
											distanceZoomMax 								= 2000;
                                            memoryPointCamera                               = "opticView";
                                            modelOptics[]                                   = {"\A3\Weapons_F\acc\reticle_sniper_F"};
											opticsPPEffects[] 								= {"OpticsCHAbera1","OpticsBlur1"};
                                            visionMode[]                                    = {"Normal","NVG","TI"};
											thermalMode[] 									= {5,6};
											opticsFlare 									= 1;
											opticsDisablePeripherialVision 					= 1;
                                    };
                            };
                    };
                    inertia                                                                 = 0;
            };
			class OPTRE_SRS99_Laser: ItemCore
			{
			scope 																			= 2;
			displayName 																	= "SRS99 IR Laser";
			picture																			="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
			descriptionShort 																= "SRS99 Sniper IR Laser Pointer";
			model 																			= "\OPTRE_Weapons\Sniper\SRS99-Laser.p3d";
			class ItemInfo: InventoryFlashLightItem_Base_F
			{
				mass 																		= 4;
				class Pointer
				{
					irLaserPos 																= "laser dir";
					irLaserEnd 																= "laser";
					irDistance 																= 5;
				};
			};
			inertia 																		= 0;
		};
     
            //WEAPONS
			
            class EBR_Base_F;
            class OPTRE_SRS99D: EBR_Base_F
            {
                    scope                                                                   = 2;
                    model                                                                   = "\OPTRE_Weapons\Sniper\Sniper.p3d";
                    displayName                                                             = "SRS99D-S2 Sniper Rifle";
                    descriptionShort                                                        = "UNSC Sniper Rifle";
                    //picture = "\OPTRE_weapons\ar\icons\ar_a.paa";
                    magazines[]                                                             = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_HVAP_Mag"};
                    modelOptics                                                             = "-";
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
					reloadAction 															= "GestureReloadLRR";
					maxZeroing 																= 2000;
					cursor 																	= "srifle";
					handAnim[] 																= {"OFP2_ManSkeleton","\OPTRE_Weapons\Sniper\data\anim\sniper_handanim.rtm"};
					opticsPPEffects[] 														= {};
					opticsDisablePeripherialVision 											= 1;
					opticsFlare 															= 1;
                    inertia                                                                 = 1.25;
                    dexterity                                                               = 1.25;
					maxRecoilSway 															= 0.01;
					swayDecaySpeed 															= 1;
					drySound[] 																= {"A3\Sounds_F\arsenal\weapons\LongRange\M320\dry_M320",0.5011872,1,20};
					reloadMagazineSound[] 													= {"A3\Sounds_F\arsenal\weapons\LongRange\M320\reload_M320",1.0,1,10};
					class GunParticles: GunParticles
                    {
						class FirstEffect
						{
							effectName 														= "SniperCloud";
							positionName 													= "Usti hlavne";
							directionName 													= "Konec hlavne";
						};
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
                                    begin1[] = {"\OPTRE_Weapons\Sniper\Data\sounds\SRS99_1.wss",5.0,1,3000};
                                    begin2[] = {"\OPTRE_Weapons\Sniper\Data\sounds\SRS99_2.wss",5.0,1,3000}; 
                                    soundBegin[] = {"begin1",0.34,"begin2",0.33};
                            };
                            class SilencedSound: BaseSoundModeType
                            {
                                    begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
                                    begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
                                    soundBegin[] = {"begin1",0.5,"begin2",0.5};
                            };
                            reloadTime = 0.4; 			//0.6
                            dispersion = 0.00015;
                            recoil = "recoil_single_gm6";
							recoilProne = "recoil_single_gm6";
                            minRange = 2;
                            minRangeProbab = 0.25;
                            midRange = 800;
                            midRangeProbab = 0.75;
                            maxRange = 2000;
                            maxRangeProbab = 0.25;
                    };
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
                            class MuzzleSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {};
                                    displayname                                             = "Muzzle Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                                    scope                                                   = 2;
                            };
                            class CowsSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"OPTRE_SRS99_Scope"};
                                    displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"OPTRE_SRS99_Laser"};
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
							mass = 200;
							inertia = 1.25;
							dexterity = 1.25;
                    };
            };
			
		class OPTRE_SRS99D_SC_LS: OPTRE_SRS99D
		{
			scope = 1;
			//picture = "\OPTRE_weapons\ar\icons\ar_b.paa";
			class LinkedItems
			{
				class LinkedItemsOptic
				{
				slot = "CowsSlot";
				item = "OPTRE_SRS99_Scope";
				};			
				class LinkedItemsAcc
				{
				slot = "PointerSlot";
				item = "OPTRE_SRS99_Laser";
				};
			};
		};
};
