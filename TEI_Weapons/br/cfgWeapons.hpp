class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
class asdg_FrontSideRail;
class asdg_OpticRail1913;
	
class CfgWeapons
{
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class GunParticles;
	
	//ATTACHMENTS
	
	class TEI_BR55HB_Scope: ItemCore
	{
		scope 										= 2;
		displayName 								= "BR55 A2 Scope";
		picture 									= "\TEI_weapons\br\icons\scope.paa";
		model 										= "\TEI_Weapons\BR\BR_Scope.p3d";
		descriptionShort 							= "2-4x Scope for BR55HB Service Rifle";
		weaponInfoType 								= "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass 									= 6;
			opticType		 						= 1;
			optics 									= 1;
			modelOptics 							= "\TEI_Weapons\BR\BR_Scope.p3d";
			class OpticsModes
			{
				class BR55HB_BUIS
				{
					opticsID  						= 1;
					useModelOptics  				= 0;
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
				class BR55HB_Scope: BR55HB_BUIS
				{
					opticsID  						= 2;
					useModelOptics  				= 1;
					opticsZoomMin  					= 0.0623;
					opticsZoomMax 					= 0.0623;
					opticsZoomInit 					= 0.0623;
					memoryPointCamera 				= "opticView";
					modelOptics[] 					= {"\A3\Weapons_F\acc\reticle_HAMR"};
					visionMode[] 					= {};
				};
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
	class TEI_BR55HB: EBR_Base_F
	{
		scope 										= 2;
		handAnim[] 									= {"OFP2_ManSkeleton", "\TEI_Weapons\BR\data\anim\BR.rtm"};
		model										= "\TEI_Weapons\BR\BR.p3d";
		displayName 								= "BR55HB Battle Rifle";
		descriptionShort 							= "UNSC Battle Rifle";
		picture = "\TEI_weapons\br\icons\br.paa";
		magazines[] 								= {"TEI_36Rnd_95x40_Mag","TEI_36Rnd_95x40_Mag_Tracer"};
		modelOptics 								= "-";
		dexterity 									= 3.25;
		muzzlePos									= "usti hlavne";
       	muzzleEnd									= "konec hlavne";
		reloadAction 								= "GestureReloadTRG";
		inertia										= 0.6;
		class GunParticles: GunParticles
		{
		   class SecondEffect
		   {
			positionName 							= "Nabojnicestart";
			directionName 							= "Nabojniceend";
			effectName 								= "CaselessAmmoCloud";
		   };
		};
		modes[] = {"Single","Burst"};
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
				begin1[] = {"\TEI_Weapons\BR\Data\sounds\BattleRifle_1.wss",1.0,1,2000};
                begin2[] = {"\TEI_Weapons\BR\Data\sounds\BattleRifle_2.wss",1.0,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.066;
			dispersion = 0.00075;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
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
				begin1[] = {"\TEI_Weapons\BR\Data\sounds\BattleRifle_1.wss",1.0,1,2000};
                begin2[] = {"\TEI_Weapons\BR\Data\sounds\BattleRifle_2.wss",1.0,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",1.0,1,600};
				begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",1.0,1,600};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadTime = 0.06;
			dispersion = 0.00085;
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			soundBurst = 0;
			burst = 3;
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
				compatibleitems[] 					= {"TEI_BR55HB_Scope", "optic_Holosight", "optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
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
 		};
	};
	class TEI_BR55HB_ScopedRifle: TEI_BR55HB /// standard issue variant with holo optics and laser pointer
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "TEI_BR55HB_Scope";
			};			
		};
	};
};
