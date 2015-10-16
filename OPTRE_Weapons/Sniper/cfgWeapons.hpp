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
			class UnderBarrelSlot;
			class InventoryUnderItem_Base_F; /// base class for #bipodz
     
            //ATTACHMENTS
     
            class OPTRE_SRS99_Scope: ItemCore
            {
		dlc = "OPTRE";
                    scope                                                                   = 2;
                    displayName                                                             = "Oracle N-variant SRS99 Scope";
					picture 																= "\OPTRE_weapons\sniper\icons\scope.paa";
                    model                                                                   = "\OPTRE_Weapons\Sniper\SRS99_Scope.p3d";
                    descriptionShort                                                        = "Oracle N-variant SRS99 Sniper Rifle 5-10x56 Scope";
                    weaponInfoType                                                          = "RscWeaponZeroing";
                    modelOptics                                                     		= "\OPTRE_Weapons\Sniper\SRS99_Scope.p3d";
                    class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\OPTRE_Weapons\Sniper\SRS99_Scope.p3d";
                            class OpticsModes
                            {
                                    class SRS99_Scope_View
                                    {
											opticsID = 1;
											useModelOptics = 1;
                                            opticsZoomMin                                   = 0.025;
                                            opticsZoomMax                                   = 0.05;
                                            opticsZoomInit                                  = 0.05;
											discretefov[] 									= {0.05,0.025};
											discreteinitIndex 								= 0;
											discreteDistance[] 								= {100,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
											discreteDistanceInitIndex 						= 1;
											distanceZoomMin 								= 100;
											distanceZoomMax 								= 2000;
                                            memoryPointCamera                               = "opticView";
                                            modelOptics[]                                   = {"\OPTRE_Weapons\Sniper\Sniper_Oracle5_Optic","\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic"};
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
		dlc = "OPTRE";
			scope 																			= 2;
			displayName 																	= "SRS99 IR Laser";
			picture																			="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
			descriptionShort 																= "SRS99 Sniper IR Laser Pointer";
			model 																			= "\OPTRE_Weapons\Sniper\SRS99_Laser.p3d";
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
		class OPTRE_SRS99_Bipod: ItemCore
		{
		dlc = "OPTRE";
			scope 																			= 2;
			displayName																		= "SRS-99 Bipod";
			model 																			= "\OPTRE_Weapons\Sniper\SRS99_Bipod.p3d";
			picture																			= "\A3\Weapons_F\Data\placeholder_co.paa";
			class ItemInfo: InventoryUnderItem_Base_F
			{
				deployedPivot																= "bipod";
				hasBipod																	= true;	
				mass																		= 10;
				model 																		= "\OPTRE_Weapons\Sniper\SRS99_Bipod.p3d";	
			};
			inertia = 0.2;
		};
            //WEAPONS
			
            class LMG_Mk200_F;
            class OPTRE_SRS99D: LMG_Mk200_F
            {
		dlc = "OPTRE";
                    scope                                                                   = 2;
                    model                                                                   = "\OPTRE_Weapons\Sniper\Sniper.p3d";
                    displayName                                                             = "SRS99D-S2 Sniper Rifle";
                    descriptionShort                                                        = "UNSC Sniper Rifle";
                    picture 																= "\OPTRE_weapons\sniper\icons\sniper.paa";
                    magazines[]                                                             = {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_HVAP_Mag","OPTRE_4Rnd_145x114_HEDP_Mag"};
                    modelOptics                                                             = "-";
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
					reloadAction 															= "GestureReloadLRR";
					maxZeroing 																= 2000;
					discreteDistance[] 														= {1};
					cursor 																	= "srifle";
					handAnim[] 																= {"OFP2_ManSkeleton","\OPTRE_Weapons\Sniper\data\anim\sniper_handanim.rtm"};
					opticsPPEffects[] 														= {};
					opticsDisablePeripherialVision 											= 1;
					opticsFlare 															= 1;
                    inertia                                                                 = 1.25;
                    dexterity                                                               = 1.25;
					maxRecoilSway 															= 0.01;
					swayDecaySpeed 															= 1;
					deployedPivot    														= "bipod";
					drySound[] 																= {"A3\Sounds_F\weapons\Other\dry6.wss",1.0,1,20};
					reloadMagazineSound[] 													= {"A3\Sounds_F\weapons\M320\M320_reload.wss",1.0,1,10};
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
                            sounds[] = {"StandardSound"};
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
									class SoundTails
									{
										class TailForest
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",1.0,1,2200};
											frequency = 1;
											volume = "(1-interior/1.4)*forest";
										};
										class TailHouses
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",1.0,1,2200};
											frequency = 1;
											volume = "(1-interior/1.4)*houses";
										};
										class TailInterior
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",1.9952624,1,2200};
											frequency = 1;
											volume = "interior";
										};
										class TailMeadows
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",1.0,1,2200};
											frequency = 1;
											volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
										};
										class TailTrees
										{
											sound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",1.0,1,2200};
											frequency = 1;
											volume = "(1-interior/1.4)*trees";
										};
									};
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
                                    compatibleitems[]                                       = {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope", "OPTRE_M6C_RDS"};
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
							class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
							{
								iconPosition[] = {0.2, 0.7};
								iconScale = 0.2;
								compatibleItems[] = {"OPTRE_SRS99_Bipod"};		
							};	
							mass = 200;
							inertia = 1.25;
							dexterity = 1.25;
                    };
            };
			
		class OPTRE_SRS99D_SC_LS: OPTRE_SRS99D
		{
		dlc = "OPTRE";
			scope = 1;
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
				class LinkedItemsMuzzle
				{
				slot = "UnderBarrelSlot";
				item = "OPTRE_SRS99_Bipod";
				};	
			};
		};
};
