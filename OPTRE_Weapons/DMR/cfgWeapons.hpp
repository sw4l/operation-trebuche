class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
	
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class MuzzleSlot;
	class CowsSlot;
	class PointerSlot;
	class UnderBarrelSlot;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class GunParticles;
	
	//ATTACHMENTS
	
	class OPTRE_M392_Scope: ItemCore
	{
		dlc = "OPTRE";
		scope 										= 2;
		scopeArsenal 								= 2;
		displayName 								= "M392 Scope";
		picture 									= "\OPTRE_weapons\br\icons\scope.paa";
		model 										= "\OPTRE_Weapons\DMR\DMR_Scope.p3d";
		descriptionShort 							= "4x Scope for M392 Marksman Rifle";
		weaponInfoType 								= "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass 									= 5;
			opticType		 						= 1;
			optics 									= 1;
			modelOptics 							= "\OPTRE_Weapons\DMR\DMR_Scope.p3d";
			class OpticsModes
			{
				class DMR_Scope
				{
					opticsID  						= 1;
					useModelOptics  				= 1;
					opticsZoomMin  					= 0.0623;
					opticsZoomMax 					= 0.0623;
					opticsZoomInit 					= 0.0623;
					opticsPPEffects[]  				= {""};
					opticsFlare  					= 0;
					opticsDisablePeripherialVision 	= 0;
					memoryPointCamera 				= "opticView";
					modelOptics[] 					= {"\A3\Weapons_F\acc\reticle_HAMR"};
					visionMode[]  					= {};
					distanceZoomMin  				= 300;
					distanceZoomMax 				= 300;
					cameraDir  						= "";
				};
			};
		};
		inertia 									= 0.1;
	};
	
		
	//WEAPONS
	
	class LMG_Mk200_F;
	class OPTRE_M392_DMR: LMG_Mk200_F
	{
		dlc = "OPTRE";
		scope 										= 2;
		scopeArsenal 								= 2;
		handAnim[] 									= {"OFP2_ManSkeleton", "\OPTRE_Weapons\BR\data\anim\BR.rtm"};
		model										= "\OPTRE_Weapons\DMR\DMR.p3d";
		displayName 								= "M392 DMR";
		descriptionShort 							= "UNSC Marksman Rifle";
		picture 									= "\OPTRE_weapons\br\icons\br.paa";
		magazines[] 								= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag_Tracer"};
		drySound[] 									= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
		modelOptics 								= "-";
		dexterity 									= 3.25;
		muzzlePos									= "usti hlavne";
       	muzzleEnd									= "konec hlavne";
		reloadAction 								= "GestureReloadTRG";
		inertia										= 0.6;
		maxZeroing 									= 1000;
		discreteDistance[] 							= {100,200,300,400,500,600,700,800,900,1000};
		maxRecoilSway 								= 0.0125;
		swayDecaySpeed 								= 1.25;
		deployedPivot    							= "bipod";
		class GunParticles: GunParticles
		{
		   class SecondEffect
		   {
			positionName 							= "Nabojnicestart";
			directionName 							= "Nabojniceend";
			effectName 								= "CaselessAmmoCloud";
		   };
		};
		modes[] 									= {"Single"};
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
				begin1[] = {"\OPTRE_Weapons\DMR\Data\sounds\DMR_1.ogg",2.5,1,1500};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.2387211,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.7943282,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.7943282,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.7943282,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.041;
			dispersion = 0.00005;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
 		{
 			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] 					= {"muzzle_snds_B"};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] 					= {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope", "OPTRE_M6C_RDS"};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[] 					= {"acc_pointer_IR", "acc_flashlight"};
			};
			class UnderBarrelSlot: UnderBarrelSlot /// using test bipod
			{
				compatibleItems[] 					= {"bipod_01_F_blk","bipod_02_F_blk","bipod_03_F_blk"};	
			};	
			mass = 75;
 		};
	};
	class OPTRE_M392_DMR_ScopedRifle: OPTRE_M392_DMR /// standard issue variant with holo optics and laser pointer
	{
		dlc = "OPTRE";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M392_Scope";
			};			
		};
	};
};