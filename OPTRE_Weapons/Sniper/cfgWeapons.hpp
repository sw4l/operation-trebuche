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
			class MuzzleSlot;
			class CowsSlot;
			class PointerSlot;
			class UnderBarrelSlot;
			class InventoryUnderItem_Base_F; /// base class for #bipodz
     
            //ATTACHMENTS
     
			class muzzle_snds_acp;
			class OPTRE_SRS99D_Suppressor: muzzle_snds_acp
			{
				dlc = "OPTRE";
			   scope                                                                   = 2;
			   displayName                                                             = "[UNSC] SRS99D Suppressor";
			   picture = "\OPTRE_weapons\smg\icons\silencer.paa";
			   model                                                                   = "\OPTRE_Weapons\Sniper\suppressor.p3d";
			   descriptionShort                                                        = "SRS99D Suppressor";
			   inertia                                                                 = 0.1;
				class ItemInfo: InventoryMuzzleItem_Base_F
				{
					mass = 5;
					class MagazineCoef
					{
						initSpeed 		= 0.65;
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
            class OPTRE_SRS99_Scope: ItemCore
            {
					dlc = "OPTRE";
                    scope                                                                   = 2;
                    displayName                                                             = "[UNSC] Oracle N-variant SRS99 Scope";
					picture 																= "\OPTRE_weapons\sniper\icons\scope.paa";
                    model                                                                   = "\OPTRE_Weapons\Sniper\scope.p3d";
                    descriptionShort                                                        = "Oracle N-variant SRS99 Sniper Rifle 5-10x56 Scope";
                    weaponInfoType                                                          = "RscOptics_nightstalker";
                    modelOptics                                                     		= "\OPTRE_Weapons\Sniper\scope.p3d";
                    class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\OPTRE_Weapons\Sniper\scope.p3d";
                            class OpticsModes
                            {
                                    class SRS99_Scope_View
                                    {
											opticsID = 1;
											useModelOptics = 1;
                                            opticsZoomMin                                   = 0.01;
                                            opticsZoomMax                                   = 0.25;
                                            opticsZoomInit                                  = 0.25;
											discretefov[] 									= {0.25,0.05,0.025,0.01};
											discreteinitIndex 								= 0;
											discreteDistance[] 								= {100,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
											discreteDistanceInitIndex 						= 1;
											distanceZoomMin 								= 100;
											distanceZoomMax 								= 2000;
                                            memoryPointCamera                               = "opticView";
                                            modelOptics[]                                   = {"\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic"};
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
            //WEAPONS
			
        class EBR_Base_F;
        class OPTRE_SRS99D: EBR_Base_F
        {
					dlc = "OPTRE";
                    scope                                                                   = 2;
                    model                                                                   = "\OPTRE_Weapons\Sniper\sniper.p3d";
                    displayName                                                             = "[UNSC] SRS99D-S2 Sniper Rifle";
                    descriptionShort                                                        = "UNSC Sniper Rifle";
                    picture 																= "\OPTRE_weapons\sniper\icons\sniper.paa";
					pictureWire 															= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\Sniper\SNIPER.paa";
					ODST_1																	= "OPTRE_ODST_HUD_AmmoCount_Snipor";
					Glasses																	= "OPTRE_GLASS_HUD_AmmoCount_Snipor"; 
					Eye																		= "OPTRE_ODST_EYE_AmmoCount_Snipor";
					HUD_BulletInARows														= 4;
					HUD_TotalPosibleBullet													= 4;
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
					recoil = "recoil_gm6";
                    inertia                                                                 = 1.25;
                    dexterity                                                               = 1.25;
					maxRecoilSway 															= 0.01;
					swayDecaySpeed 															= 1;
					deployedPivot															= "bipod";
					hasBipod																= true;	
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
							class SilencedSound: BaseSoundModeType
							{
								begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1.0,1,300};
								begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1.0,1,300};
								begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1.0,1,300};
								soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
								class SoundTails
								{
									class TailInterior
									{
										sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1.0,1,300};
										frequency = 1;
										volume = "interior";
									};
									class TailTrees
									{
										sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1.0,1,300};
										frequency = 1;
										volume = "(1-interior/1.4)*trees";
									};
									class TailForest
									{
										sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1.0,1,300};
										frequency = 1;
										volume = "(1-interior/1.4)*forest";
									};
									class TailMeadows
									{
										sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1.0,1,300};
										frequency = 1;
										volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
									};
									class TailHouses
									{
										sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1.0,1,300};
										frequency = 1;
										volume = "(1-interior/1.4)*houses";
									};
								};
							};
                            reloadTime = 0.35; 			//0.6
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
                            class MuzzleSlot: MuzzleSlot
                            {
                                compatibleitems[]        	                               = {"OPTRE_SRS99D_Suppressor"};
                            };
							class PointerSlot: PointerSlot
							{
								compatibleitems[] 											= {};
							};
                            class CowsSlot: CowsSlot
                            {
                                compatibleitems[]        	                               = {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope"};
                            };
							class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
							{
								compatibleItems[] 											= {};		
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
			};
		};
};
