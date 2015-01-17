class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
class asdg_FrontSideRail;
class asdg_OpticRail1913;
	
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
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};
	
	//ATTACHMENTS
	
	class TEI_M6G_Flashlight: ItemCore
	{
 		scope 										= 2;
 		displayName 								= "M6G Flashlight";
 		picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
		descriptionShort 							= "Flashlight for the M6G Handgun";
 		model 										= "\TEI_Weapons\Pistol\flashlight.p3d";
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
	
	class TEI_M6G_Scope: ItemCore
	{
		scope 										= 2;
		displayName 								= "M6G KFA-2 SmartLink Scope";
		picture 									= "\A3\weapons_F\Data\UI\gear_acco_Sniper_CA.paa";
		model 										= "\TEI_Weapons\Pistol\scope.p3d";
		descriptionShort 							= "KFA-2 2x SmartLink Scope for M6G Magnum";
		weaponInfoType 								= "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass 									= 4;
			opticType 								= 2;
			weaponInfoType 							= "RscWeaponRangeZeroingFOV";
			optics 									= 1;
			modelOptics 							= "\A3\Weapons_F\acc\reticle_MRCO_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID 						= 1;
					opticsDisplayName 				= "WFOV";
					useModelOptics 					= 1;
					opticsPPEffects[]	 			= {""};
					opticsZoomMin 					= 0.083;
					opticsZoomMax 					= 0.083;
					opticsZoomInit 					= 0.083;
					distanceZoomMin 				= 100;
					distanceZoomMax 				= 100;
					memoryPointCamera 				= "opticView";
					modelOptics[] 					= {"\A3\Weapons_F\acc\reticle_nightstalker_F"};
					visionMode[] 					= {"Normal"};
					opticsFlare 					= 0;
					opticsDisablePeripherialVision 	= 0;
					cameraDir 						= "";
				};
		};
		inertia 									= 0.1;
		};
	};
	
	//WEAPONS
	
	class TEI_M6G : Pistol_Base_F
	{
		scope 										= 2;
		model										= "\TEI_Weapons\Pistol\pistol.p3d";
		displayName 								= "M6G Magnum";
		descriptionShort 							= "12.7x40mm Magnum Pistol";
		picture 									= "\TEI_Weapons\Pistol\data\pistol.paa";
		magazines[] 								= {"TEI_8Rnd_127x40_Mag"};
		modelOptics 								= "-";
		modes[] 									= {"Single"};
		dexterity 									= 1.5;
		muzzlePos									= "usti hlavne";
       	muzzleEnd									= "konec hlavne";
		reloadAction 								= "GestureReloadPistol";
		maxRecoilSway 								= 0.002;
		swayDecaySpeed 								= 1.20;
		drySound[] 									= {"A3\Sounds_F\weapons\Other\dry6.wss",0.1,1};
		reloadMagazineSound[] 						= {"\TEI_Weapons\Pistol\data\sounds\reload.ogg",1.3,1,30};
		fireSpreadAngle								= 0.85;
		dispersion 									= 0.00005;
		discreteDistance[] 							= {50,100,200};
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
				begin1[] 							= {"\TEI_Weapons\Pistol\data\sounds\fire1.ogg",1.3,1,200};
				soundBegin[] 						= {"begin1",1};
			};
			reloadTime 								= 0.15;
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
				compatibleitems[] 					= {};
				displayname 						= "Muzzle Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope 								= 2;
			};
			class CowsSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"TEI_M6G_Scope"};
				displayname 						= "Optics Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\TOP";
				scope 								= 2;
			};
			class PointerSlot: SlotInfo
			{
				access 								= 1;
				compatibleitems[] 					= {"TEI_M6G_Flashlight"};
				displayname 						= "Pointer Slot";
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\SIDE";
				scope 								= 2;
			};
 		};
	};
};