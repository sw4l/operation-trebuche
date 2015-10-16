class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
	
class CfgWeapons
{
	class Pistol; // External class reference
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class GunParticles;
	class Pistol_Base_F;
	
	//ATTACHMENTS
	
	class OPTRE_M6G_Flashlight: ItemCore
	{
		dlc = "OPTRE";
 		scope 										= 2;
 		displayName 								= "M6G Flashlight";
 		picture = "\OPTRE_weapons\pistol\icons\flashlight.paa";
		descriptionShort 							= "Flashlight for the M6G Handgun";
 		model 										= "\OPTRE_Weapons\Pistol\flashlight.p3d";
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
		inertia 									= 0.1;
 	};
	class OPTRE_M6G_Scope: ItemCore
	{
		dlc = "OPTRE";
		scope 										= 2;
		displayName 								= "M6G KFA-2 SmartLink Scope";
		picture = "\OPTRE_weapons\pistol\icons\scope.paa";
		model 										= "\OPTRE_Weapons\Pistol\scope.p3d";
		descriptionShort 							= "KFA-2 2x SmartLink Scope for M6G Magnum";
		weaponInfoType 								= "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass 									= 4;
			opticType		 						= 1;
			optics 									= 1;
			modelOptics 							= "\OPTRE_Weapons\Pistol\scope.p3d";
			class OpticsModes
			{
			class OPTRE_M6G_BUIS
				{
					opticsID  						= 1; //1
					useModelOptics  				= 0; //0
					opticsPPEffects[]  				= {""};
					opticsFlare  					= 0;
					opticsDisablePeripherialVision 	= 0;
					opticsZoomMin  					= 0.375;
					opticsZoomMax  					= 0.375;
					opticsZoomInit  				= 0.375;
					memoryPointCamera  				= "opticView2";
					visionMode[]  					= {};
					distanceZoomMin  				= 300;
					distanceZoomMax 				= 300;
					cameraDir  						= "";
				};
				class OPTRE_M6G_Scope: OPTRE_M6G_BUIS
				{
					opticsID  						= 2; //2
					useModelOptics  				= 1; //1
					opticsZoomMin  					= 0.0623;
					opticsZoomMax 					= 0.0623;
					opticsZoomInit 					= 0.0623;
					memoryPointCamera 				= "opticView";
					modelOptics 					= "\A3\Weapons_F\acc\reticle_MRCO_F";
					visionMode[] 					= {"Normal"};
					distanceZoomMin  				= 300;
					distanceZoomMax 				= 300;
					cameraDir  						= "";
					opticsPPEffects[]  				= {""};
					opticsFlare  					= 0;
					opticsDisablePeripherialVision 	= 0;
				};
			};
		};
		inertia 									= 0.1;
	};
     
        //ATTACHMENTS
		class muzzle_snds_acp;
        class OPTRE_M6_silencer: muzzle_snds_acp
       {
			dlc = "OPTRE";
           scope                                                                   = 2;
           displayName                                                             = "M6 Series Suppressor";
           model                                                                   = "\OPTRE_Weapons\Pistol\m6c_silencer.p3d";
           descriptionShort                                                        = "M6 Series Suppressor";
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
        class OPTRE_M6C_compensator: muzzle_snds_acp
       {
			dlc = "OPTRE";
           scope                                                                   = 2;
           displayName                                                             = "M6C Compensator";
           model                                                                   = "\OPTRE_Weapons\Pistol\m6c_comp.p3d";
           descriptionShort                                                        = "M6C Compensator";
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
					airFriction		= 0.8;
				
					// AI modifiers
					visibleFire		= 0.75;
					audibleFire		= 0.75;
					visibleFireTime	= 0.5;
					audibleFireTime	= 0.5;
					cost			= 1;
				}; 
				muzzleEnd 			= "zaslehPoint"; // memory point in muzzle supressor's model
				alternativeFire 	= "Zasleh2";  // class in cfgWeapons with model of muzzle flash	
				soundTypeIndex		= 2; /// defines the position in sound[] array in the rifle
				class MuzzleCoef
				{
					dispersionCoef			= 0.8;
					artilleryDispersionCoef	= 1;
	
					fireLightCoef			= 0.1f;

					recoilCoef				= 0.5;
					recoilProneCoef			= 0.5;

					minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
					midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
					maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
				};			
			};
	   };
		class optic_Aco;
		class OPTRE_M6C_RDS: optic_Aco
		{
			dlc = "OPTRE";
			scope 										= 2;
			displayName 								= "M6C RDS";
			descriptionShort 							= "Red Dot Sight for the M6C Handgun";
			model 										= "\OPTRE_Weapons\pistol\m6c_rds.p3d";
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
		class OPTRE_M6C_Laser: acc_pointer_IR
		{
			dlc = "OPTRE";
			scope 										= 2;
			displayName 								= "M6C Laser Aiming Module";
			descriptionShort 							= "IR Laser for the M6C Handgun";
			model 										= "\OPTRE_Weapons\pistol\m6c_lam.p3d";
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
	
	class OPTRE_M6G : Pistol_Base_F
	{
		dlc = "OPTRE";
		scope 										= 2;
		model										= "\OPTRE_Weapons\Pistol\pistol.p3d";
		displayName 								= "M6G Magnum";
		descriptionShort 							= "12.7x40mm Magnum Pistol";
		picture = "\OPTRE_weapons\pistol\icons\pistol_a.paa";
		magazines[] 								= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_AP_Mag"};
		modelOptics 								= "-";
		modes[] 									= {"Single"};
		dexterity 									= 1.5;
		muzzlePos									= "usti hlavne";
       	muzzleEnd									= "konec hlavne";
		reloadAction 								= "GestureReloadPistol";
		maxRecoilSway 								= 0.002;
		swayDecaySpeed 								= 1.20;
		drySound[] 									= {"A3\Sounds_F\weapons\Other\dry6.wss",0.1,1};
		reloadMagazineSound[] 						= {"\OPTRE_Weapons\Pistol\data\sounds\reload.ogg",1.3,1,30};
		fireSpreadAngle								= 0.85;
		dispersion 									= 0.00005;
		deployedPivot    							= "bipod";
		maxZeroing 																= 300;
		discreteDistance[] 														= {100,200,300};
		inertia										= 0.25;
		class GunParticles: GunParticles
		{
		   class SecondEffect
		   {
			positionName 							= "Nabojnicestart";
			directionName 							= "Nabojniceend";
			effectName 								= "CaselessAmmoCloud";
		   };
		};
		bullet1[] 									= {"a3\sounds_f\weapons\shells\5_56\metal_556_01.wss",0.1,1,15};
		bullet2[] 									= {"A3\sounds_f\weapons\shells\5_56\metal_556_02.wss",0.1,1,15};
		bullet3[] 									= {"A3\sounds_f\weapons\shells\5_56\metal_556_03.wss",0.17782794,1,15};
		bullet4[] 									= {"A3\sounds_f\weapons\shells\5_56\metal_556_04.wss",0.17782794,1,15};
		bullet5[] 									= {"A3\sounds_f\weapons\shells\5_56\asphlat_556_01.wss",0.1,1,15};
		bullet6[] 									= {"A3\sounds_f\weapons\shells\5_56\asphlat_556_02.wss",0.1,1,15};
		bullet7[] 									= {"A3\sounds_f\weapons\shells\5_56\asphlat_556_03.wss",0.1,1,15};
		bullet8[] 									= {"A3\sounds_f\weapons\shells\5_56\asphlat_556_04.wss",0.1,1,15};
		bullet9[] 									= {"A3\sounds_f\weapons\shells\5_56\grass_556_01.wss",0.01,1,15};
		bullet10[] 									= {"A3\sounds_f\weapons\shells\5_56\grass_556_02.wss",0.01,1,15};
		bullet11[] 									= {"A3\sounds_f\weapons\shells\5_56\grass_556_03.wss",0.01,1,15};
		bullet12[] 									= {"A3\sounds_f\weapons\shells\5_56\grass_556_04.wss",0.01,1,15};
		soundBullet[] 								= {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Single : Mode_SemiAuto
		{
			sounds[] 								= {"StandardSound","SilencedSound"}; //Defines weapon sounds
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] 							= {"",1.0,1,200};
				closure2[] 							= {"",1.0,1,200};
				soundClosure[] 						= {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] 							= {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				begin2[] 							= {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_2.wss",1.3,1,200};
				soundBegin[] 						= {"begin1",1,"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
            class SilencedSound: BaseSoundModeType
            {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
            };
			reloadTime 								= 0.24; //0.3
			dispersion 								= 0.00005;
			minRange 								= 2;
			minRangeProbab 							= 0.20;
			midRange 								= 75;
			midRangeProbab 							= 0.35;
			maxRange 								= 200;
			maxRangeProbab 							= 0.45;
			distanceZoomMin 						= 60;
			distanceZoomMax 						= 60;
			recoil 									= "m6g_recoil";
			recoilProne 							= "m6g_recoilProne";
			
		};
		class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
 		{
 			class MuzzleSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"OPTRE_M6_silencer"};
				displayname 						= "Muzzle Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope 								= 2;
			};
			class CowsSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"OPTRE_M6G_Scope"};
				displayname 						= "Optics Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\TOP";
				scope 								= 2;
			};
			class PointerSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"OPTRE_M6G_Flashlight"};
				displayname 						= "Pointer Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\SIDE";
				scope 								= 2;
			};
			mass = 25;
 		};
	};
	class OPTRE_M6C : OPTRE_M6G
	{
		dlc = "OPTRE";
		model										= "\OPTRE_Weapons\Pistol\m6c.p3d";
		displayName 								= "M6C Handgun";
		descriptionShort 							= "12.7x40mm Handgun";
		picture 									= "\OPTRE_weapons\pistol\icons\pistol_a.paa";
		magazines[] 								= {"OPTRE_12Rnd_127x40_Mag","OPTRE_16Rnd_127x40_Mag"};
		class Single : Mode_SemiAuto
		{
			sounds[] 								= {"StandardSound","SilencedSound","CompSound"}; //Defines weapon sounds
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] 							= {"",1.0,1,200};
				closure2[] 							= {"",1.0,1,200};
				soundClosure[] 						= {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] 							= {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				soundBegin[] 						= {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\4-Five_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
            class SilencedSound: BaseSoundModeType
            {
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_01",1.0,1,600};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_02",1.0,1,600};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_short_03",1.0,1,600};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_interior",1.0,1,600};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_trees",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_forest",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_meadows",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\Silencer_4-Five_tail_houses",1.0,1,600};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
            };
			class CompSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_01",2.5118864,1,1400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_02",2.5118864,1,1400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_short_03",2.5118864,1,1400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_interior",1.4125376,1,1400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_trees",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_forest",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_meadows",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Acpc2\acpc2_tail_houses",1.0,1,1400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime 								= 0.075;
			dispersion 								= 0.00005;
			minRange 								= 2;
			minRangeProbab 							= 0.20;
			midRange 								= 75;
			midRangeProbab 							= 0.35;
			maxRange 								= 200;
			maxRangeProbab 							= 0.45;
			distanceZoomMin 						= 60;
			distanceZoomMax 						= 60;
			recoil 									= "recoil_pistol_light";
			recoilProne 							= "recoil_prone_pistol_light";
			
		};
		class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
 		{
 			class MuzzleSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"OPTRE_M6C_compensator","OPTRE_M6_silencer"};
				displayname 						= "Muzzle Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope 								= 2;
			};
			class CowsSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"OPTRE_M6C_RDS"};
				displayname 						= "Optics Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\TOP";
				scope 								= 2;
			};
			class PointerSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"OPTRE_M6C_Laser"};
				displayname 						= "Pointer Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\SIDE";
				scope 								= 2;
			};
			mass = 15;
 		};
	};
	class OPTRE_M6G_SF: OPTRE_M6G /// standard issue variant with holo optics and laser pointer
	{
		dlc = "OPTRE";
		picture = "\OPTRE_weapons\pistol\icons\pistol_b.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M6G_Scope";
			};	
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "OPTRE_M6G_Flashlight";
			};			
		};
	};
};