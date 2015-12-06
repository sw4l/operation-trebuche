class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_UNSC_Units_Airforce
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","A3_Weapons_F"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Airforce_Soldier: CAManBase
	{
		scope															= 1;
		scopeCurator													= 0;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_UNSC_Man_Airforce_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Airforce_Uniform";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		identityTypes[] 												= {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO", "G_IRAN_default"}; //G_IRAN_Default removes those pesky wacky glasses.  Everything else here serves to keep the UNSC diverse.  
		genericNames 													= "NATOMen";
		backpack 														= "";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		linkedItems[] 													= {"OPTRE_UNSC_Airforce_Vest","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Airforce_Vest","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftknee2","attach_leftshin","attach_leftshoulder","attach_leftshoulder2","attach_pant2","attach_rightknee2","attach_rightshin","attach_rightshoulder","attach_rightshoulder2","attach_rightthigh"};
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_UNSC_Units\Air\data\uniform_airforce_co.paa"};
		class HitPoints: HitPoints
		{
			class HitFace: HitHead
			{
				armor               = 1; // Keep constant so that the hit point armor remains on the same scale
				material            = -1;
				name                = "face_hub"; // Selection name
				passThrough         = 0.1; // Damage resistance
				radius              = 0.08;
				explosionShielding  = 0.1; // Protection against explosive damage
				minimalHit          = 0.01; // Minimal damage value that can be applied
			};
			class HitNeck: HitFace
			{
				armor               = 1;
				material            = -1;
				name                = "neck";
				passThrough         = 0.1;
				radius              = 0.1;
				explosionShielding  = 0.5;
				minimalHit          = 0.01;
			};
			class HitHead: HitNeck
			{
				armor               = 1;
				material            = -1;
				name                = "head";
				passThrough         = 0.1;
				radius              = 0.2;
				explosionShielding  = 0.5;
				minimalHit          = 0.01;
				depends             = "HitFace max HitNeck"; // Returns the greater of HitFace and HitNeck.
			};
			class HitPelvis: HitBody
			{
				armor               = 1;
				material            = -1;
				name                = "pelvis";
				passThrough         = 0.1;
				radius              = 0.2;
				explosionShielding  = 1;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor               = 1;
				material            = -1;
				name                = "spine1";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 1;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor               = 1;
				material            = -1;
				name                = "spine2";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 6;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor               = 1;
				material            = -1;
				name                = "spine3";
				passThrough         = 0.1;
				radius              = 0.15;
				explosionShielding  = 6;
				visual              = "injury_body";
				minimalHit          = 0.01;
			};
			class HitBody: HitChest
			{
				armor               = 1000; //not supposed to take damage directly
				material            = -1;
				name                = "body";
				passThrough         = 0.1;
				radius              = 0.16;
				explosionShielding  = 6;
				visual              = "injury_body";
				minimalHit          = 0.01;
				depends             = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitHands
			{
				armor               = 1;
				material            = -1;
				name                = "arms";
				passThrough         = 1;
				radius              = 0.1;
				explosionShielding  = 1;
				visual              = "injury_hands";
				minimalHit          = 0.01;
			};
			class HitHands: HitArms
			{
				armor               = 1;
				material            = -1;
				name                = "hands";
				passThrough         = 1;
				radius              = 0.1;
				explosionShielding  = 1;
				visual              = "injury_hands";
				minimalHit          = 0.01;
				depends             = "HitArms";
			};
			class HitLegs: HitLegs
			{
				armor               = 1;
				material            = -1;
				name                = "legs";
				passThrough         = 1;
				radius              = 0.12;
				explosionShielding  = 1;
				visual              = "injury_legs";
				minimalHit          = 0.01;
			};
		};
		armor= 2;//keep constant so that the hit point armor remains on the same scale
		armorStructural= 0.4;// [*] must be adjusted for each model to achieve consistent total damage results
		explosionShielding = 0.04;// [*] for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold = 0.001;//minimalHit for total damage
		impactDamageMultiplier= 0.5;//multiplier for falling damage
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Airforce_Soldier_Airman: OPTRE_UNSC_Airforce_Soldier
	{
		scope															= 2;
		scopeCurator													= 2;
		author															= "Article 2 Studios";
		displayName														= "Airman";
	};
	// UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};

class cfgWeapons
{
	class ItemCore;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	
	
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Airforce_Uniform: U_B_CombatUniform_mcam
	{
		scope															= 2;
		author															= "Article 2 Studios";
		displayName														= "[UNSC] Air Force BDU";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel												= "-";
			uniformClass												= "OPTRE_UNSC_Airforce_Soldier";
			containerClass												= "Supply40";
			mass														= 35;
			modelSides[] 												= {6};
		};
	};
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// VESTS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Airforce_Vest_Base: V_PlateCarrier1_rgr
	{	
		scope 															= 0;
		author															= "Article 2 Studios";
		displayName  													= "-";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_vest.paa";
		model   														= "\OPTRE_UNSC_Units\Army\vest.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel 												= "\OPTRE_UNSC_Units\Army\vest.p3d";
			//armor 														= 40;
			containerClass 												= "Supply160";
			mass 														= 80;
			passThrough 												= 0.15;
			modelSides[] 												= {6};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck"; // Defined in the man base class
					armor		= 8; // Armor value of this hitpoint
					passThrough	= 0.5; // Penetration resistance of the hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.5;
				};
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 24; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 24;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 24;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_Airforce_Vest: OPTRE_UNSC_Airforce_Vest_Base
	{	
		scope 															= 2;
		author															= "Article 2 Studios";
		displayName  													= "[UNSC] M52[V] Body Armor [Air Force]";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_vest_vac.paa";
		hiddenSelections[]   											= {"camo1","camo2","camo3","attach_knife","attach_pouches","attach_ghillie"};
		hiddenSelectionsTextures[]   									= {"OPTRE_UNSC_Units\Air\data\vest_airforce_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   										= {"camo1","camo2","camo3","attach_knife","attach_pouches","attach_ghillie"};
			hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Air\data\vest_airforce_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		};
	};
	// VESTS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// HELMETS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class H_MilCap_Blue;
	class H_Booniehat_khk;
	class OPTRE_PatrolCap_Airforce: H_MilCap_blue 
	{
		displayname 									= "[UNSC] Patrol Cap [Air Force]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Air\data\cappatrol_airforce_co.paa"};
	};
	class OPTRE_BoonieHat_Airforce: H_Booniehat_khk 
	{
		displayname 									= "[UNSC] Boonie Hat [Air Force]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Air\data\booniehat_airforce_co.paa"};
	};
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};