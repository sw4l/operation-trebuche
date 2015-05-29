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
	class B_Soldier_F;
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Airforce_Soldier: B_Soldier_F
	{
		scope															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_UNSC_Man_Airforce_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Airforce_Uniform";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		backpack 														= "";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		linkedItems[] 													= {"OPTRE_UNSC_Airforce_Vest","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Airforce_Vest","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftknee2","attach_leftshin","attach_leftshoulder","attach_leftshoulder2","attach_pant2","attach_rightknee2","attach_rightshin","attach_rightshoulder","attach_rightshoulder2","attach_rightthigh"};
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_UNSC_Units\Air\data\uniform_airforce_co.paa"};
		armor															= 2;
		armorStructural													= 5;
		class HitPoints
		{
			class HitHead
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0;
			};
			class HitBody
			{
				armor = 4;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0.15;
				explosionShielding = 5;
				visual = "injury_body";
				minimalHit = 0;
			};
			class HitHands
			{
				armor = 3;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.08;
				explosionShielding = 0.5;
				visual = "injury_hands";
				minimalHit = 0;
			};
			class HitLegs
			{
				armor = 2;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 0.5;
				visual = "injury_legs";
				minimalHit = 0;
			};
		};
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Airforce_Soldier_Airman: OPTRE_UNSC_Airforce_Soldier
	{
		scope															= 2;
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
			armor 														= 40;
			containerClass 												= "Supply160";
			mass 														= 80;
			passThrough 												= 0.15;
			modelSides[] 												= {6};
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
			passThrough 												= 0.1;
		};
	};
	// VESTS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};