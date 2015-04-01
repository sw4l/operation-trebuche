class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
	
class CfgWeapons
{
	class Rifle; // External class reference
	class WeaponSlotsInfo;
	class SlotInfo;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class GunParticles;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	
	//ATTACHMENTS
	
	class TEI_M45_Flashlight: ItemCore
	{
 		scope 										= 2;
 		displayName 									= "M45 Flashlight";
 		picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
		descriptionShort 								= "Flashlight for the M45 Tactical Shotgun";
 		model 										= "\TEI_Weapons\Shotgun\flashlight.p3d";
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
	class TEI_M45_Flashlight_red: TEI_M45_Flashlight
	{
 		scope 										= 2;
 		displayName 								= "M45 Flashlight [Red]";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				color[] 							= {255,0,0};
				ambient[] 							= {255,0,0};
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
 	};
	
	//WEAPONS
	
	class TEI_M45 : Rifle_Base_F
	{
		scope 										= 2;
		handAnim[] 									= {"OFP2_ManSkeleton", "\TEI_Weapons\Shotgun\data\anim\benelli.rtm"};
		model										= "\TEI_Weapons\Shotgun\shotgun.p3d";
		displayName 									= "M45 Tactical Shotgun";
		descriptionShort 								= "8 Gauge Shotgun";
		picture = "\TEI_weapons\shotgun\icons\shotgun_black.paa";
		magazines[] 									= {"TEI_6Rnd_8Gauge_Pellets","TEI_6Rnd_8Gauge_Slugs"};
		modelOptics 									= "-";
		modes[] 									= {"Single"};
		dexterity 									= 1.5;
		muzzlePos									= "usti hlavne";
       	muzzleEnd									= "konec hlavne";
		//reloadAction 									= "GestureReloadM4SSAS";
		reloadAction 									= "ReloadGM6";
		maxRecoilSway 									= 0.0120;
		swayDecaySpeed 									= 1.20;
		drySound[] 									= {"A3\Sounds_F\weapons\Other\dry6.wss",0.1,1};
		reloadMagazineSound[] 								= {"\TEI_Weapons\Shotgun\data\sounds\reload.ogg",1.3,1,30};
		fireSpreadAngle									= 0.85;
		dispersion 									= 0.00005;
		discreteDistance[] 								= {50,100,200};
		inertia										= 0.75;
		maxZeroing = 300;
		class GunParticles: GunParticles
		{
		   class SecondEffect
		   {
			positionName 								= "Nabojnicestart";
			directionName 								= "Nabojniceend";
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
			sounds[] 								= {"StandardSound"}; //Defines weapon sounds
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] 							= {"",1.0,1,200};
				closure2[] 							= {"",1.0,1,200};
				soundClosure[] 						= {"closure1",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] 							= {"\TEI_Weapons\Shotgun\data\sounds\fire1.ogg",1.3,1,200};
				soundBegin[] 						= {"begin1",1};
			};
			reloadTime 								= 1.11; //0.75
			dispersion 								= 0.00005;
			minRange 								= 2;
			minRangeProbab 								= 0.20;
			midRange 								= 75;
			midRangeProbab 								= 0.35;
			maxRange 								= 200;
			maxRangeProbab 								= 0.45;
			distanceZoomMin 							= 60;
			distanceZoomMax 							= 60;
			recoil 									= "M45_recoil";
			recoilProne 								= "M45_recoilProne";
			
		};
		class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
 		{
 			class MuzzleSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 						= {};
				displayname 							= "Muzzle Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope 								= 2;
			};
			class CowsSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 						= {"optic_Holosight", "optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
				displayname 							= "Optics Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\TOP";
				scope 								= 2;
			};
			class PointerSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 						= {"TEI_M45_FLASHLIGHT", "TEI_M45_FLASHLIGHT_red","acc_pointer_IR", "acc_flashlight"};
				displayname 							= "Pointer Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\SIDE";
				scope 								= 2;
			};
			mass = 75;
 		};
	};
	
	class TEI_M45_tan : TEI_M45
	{
	model										= "\TEI_Weapons\Shotgun\shotgun_tan.p3d";
	displayName 									= "M45 Tactical Shotgun [Tan]";
	picture = "\TEI_weapons\shotgun\icons\shotgun_tan.paa";
	};	
	
	class TEI_M45_olive : TEI_M45
	{
	model										= "\TEI_Weapons\Shotgun\shotgun_olive.p3d";
	displayName 									= "M45 Tactical Shotgun [Olive]";
	picture = "\TEI_weapons\shotgun\icons\shotgun_green.paa";
	};
};