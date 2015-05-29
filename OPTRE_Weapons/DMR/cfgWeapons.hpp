class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
	
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class GunParticles;
	class UnderBarrelSlot;
	
	//ATTACHMENTS
	
	class OPTRE_M392_Scope: ItemCore
	{
		scope 										= 1;
		scopeArsenal 								= 0;
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
		scope 										= 1;
		scopeArsenal 								= 0;
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
				begin1[] = {"\OPTRE_Weapons\BR\Data\sounds\BattleRifle_1.wss",1.0,1,2000};
                begin2[] = {"\OPTRE_Weapons\BR\Data\sounds\BattleRifle_2.wss",1.0,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
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
 			class MuzzleSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"muzzle_snds_B"};
				displayname 						= "Muzzle Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope 								= 2;
			};
			class CowsSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"OPTRE_M392_Scope", "optic_Hamr", "optic_Aco", "optic_mrd"};
				displayname 						= "Optics Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\TOP";
				scope 								= 2;
			};
			class PointerSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"acc_pointer_IR", "acc_flashlight"};
				displayname 						= "Pointer Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\SIDE";
				scope 								= 2;
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