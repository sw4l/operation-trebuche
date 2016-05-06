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
	class B_Soldier_base_F;
	class OPTRE_UNSC_Soldier_Base: B_Soldier_base_F
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
	class OPTRE_UNSC_Airforce_Soldier: OPTRE_UNSC_Soldier_Base
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		side 															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		vehicleClass													= "OPTRE_UNSC_Man_Airforce_class";
		uniformClass													= "OPTRE_UNSC_Airforce_Uniform";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_60rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		linkedItems[] 													= {"OPTRE_UNSC_Airforce_Vest","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Airforce_Vest","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftknee2","attach_leftshin","attach_leftshoulder","attach_leftshoulder2","attach_pant2","attach_rightknee2","attach_rightshin","attach_rightshoulder","attach_rightshoulder2","attach_rightthigh","attach_shirt2"};
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_UNSC_Units\Air\data\uniform_airforce_co.paa"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody
			{
				armor = 7;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 6;
			};
		};
		editorSubcategory = "OPTRE_EditorSubcategory_MenAF";
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Airforce_Soldier_Airman: OPTRE_UNSC_Airforce_Soldier
	{
		dlc = "OPTRE";
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
		dlc = "OPTRE";
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
		dlc = "OPTRE";
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
					armor = 28;
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor = 28;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor = 28;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					armor = 28;
					passThrough	= 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_Airforce_Vest: OPTRE_UNSC_Airforce_Vest_Base
	{	
		dlc = "OPTRE";
		scope 															= 2;
		author															= "Article 2 Studios";
		displayName  													= "[UNSC] M52[V] Body Armor [Air Force]";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_vest_vac.paa";
		hiddenSelections[]   											= {"camo1","camo2","camo3","attach_knife","attach_pouches","attach_ghillie"};
		hiddenSelectionsTextures[]   									= {"OPTRE_UNSC_Units\Air\data\vest_airforce_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   										= {"camo1","camo2","camo3","attach_knife","attach_pouches","attach_ghillie"};
			hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Air\data\vest_airforce_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
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
		dlc = "OPTRE";
		displayname 									= "[UNSC] Patrol Cap [Air Force]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Air\data\cappatrol_airforce_co.paa"};
	};
	class OPTRE_BoonieHat_Airforce: H_Booniehat_khk 
	{
		dlc = "OPTRE";
		displayname 									= "[UNSC] Boonie Hat [Air Force]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Air\data\booniehat_airforce_co.paa"};
	};
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};