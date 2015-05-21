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
	class OPTRE_UNSC_Army_Medic;
	
	// SOLDIERS
	
	class OPTRE_UNSC_Airforce_Soldier_Base: B_Soldier_F //Configures the unit part of the Units Uniform
	{
		scope															= 0;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_UNSC_Man_Airforce_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Airforce_uniform_base";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		backpack 														= "";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_cam3_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
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
				armor = 3;
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
	
	class OPTRE_UNSC_Airforce_Airman: OPTRE_UNSC_Airforce_Soldier_Base //Configures the unit part of the Units Uniform
	{
		scope															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "Airman";
		vehicleClass													= "OPTRE_UNSC_Man_Airforce_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Airforce_Uniform";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Purple","OPTRE_M2_Smoke_Purple"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke_Purple","OPTRE_M2_Smoke_Purple"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		linkedItems[] 													= {"OPTRE_UNSC_Airforce_Vest","OPTRE_UNSC_Marine_helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Airforce_Vest","OPTRE_UNSC_Marine_helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_cam3_co.paa","OPTRE_UNSC_Units\Air\data\uniform_airforce_co.paa","OPTRE_UNSC_Units\Marines\data\addons_cam3_Ca.paa"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody
			{
				armor = 4;
			};
			class HitHands: HitHands
			{
				armor = 3;
			};
			class HitLegs: HitLegs
			{
				armor = 2;
			};
		};
	};
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
	
	// UNIFORMS
	
	class OPTRE_UNSC_Airforce_uniform_base: U_B_CombatUniform_mcam //This is the other part of configuring the uniform, the actual uniform item
	{
		scope															= 0;
		author															= "Article 2 Studios";
		displayName														= "-";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_uniform_des.paa";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel													= "-";
			uniformClass													= "OPTRE_UNSC_Airforce_Soldier";
			containerClass													= "Supply20";
			mass															= 40; //The weight and storage capacity of the uniform
			modelSides[] 													= {6};
		};
	};
	class OPTRE_UNSC_Airforce_uniform: OPTRE_UNSC_Airforce_uniform_base
	{
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform_hvy.paa";
		displayName										= "[UNSC] Air Force BDU";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Airforce_base";
			containerClass									= "Supply50";
			mass											= 35;
			modelSides[] 									= {6};
		};
	};



///VEST
	class OPTRE_UNSC_Airforce_vest_base: V_PlateCarrier1_rgr //The vest base class
	{	
		scope 											= 0; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName  									= "-"; /// how would the stuff be displayed in inventory and on ground
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_vest.paa";
		model   										= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			armor 										= 40; /// what protection does the vest provide
			containerClass 								= "Supply160";
			mass 										= 80;
			passThrough 								= 0.25; /// coef of damage passed to total damage
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Airforce_vest: OPTRE_UNSC_Airforce_vest_base
	{	
		scope 											= 2; /// scope needs to be 2 to have a visible class
		author											= "Article 2 Studios";
		displayName  									= "[UNSC] M52[V/S] Body Armor (Air Force)"; /// how would the stuff be displayed in inventory and on ground
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_vest_vac.paa";
		model     										= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
		hiddenSelections[]   							= {"camo1","camo2","camo3","attach_knife"}; /// what selection in model could have different textures
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_airforce_co.paa","OPTRE_UNSC_Units\Airforce\data\addons_cam3_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
		class ItemInfo: ItemInfo
		{
			uniformModel   								= "\OPTRE_UNSC_Units\Army\vest.p3d"; /// what model does the vest use
			hiddenSelections[]   						= {"camo1","camo2","camo3","attach_knife"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_airforce_co.paa","OPTRE_UNSC_Units\Airforce\data\addons_cam3_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"}; /// what texture is going to be used
			passThrough 								= 0.15; /// coef of damage passed to total damage
		};
	};
};