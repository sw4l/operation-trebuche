class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_FC_Units_Elite
	{
		units[]											= {};
		weapons[]										= {};
		requiredVersion									= 0.1;
		requiredAddons[]								= {"OPTRE_FC_Core","A3_Characters_F","A3_Characters_F_Common","A3_Weapons_F"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class O_Soldier_F;
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_FC_Elite_Minor_Base: O_Soldier_F
	{
		scope															= 1;
		scopeCurator													= 0;
		faction															= "OPTRE_FC_Covenant";
		author															= "Drakedaeron & Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_FC_Infantry_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "OPTRE_FC_Elite_Undersuit";
		uniformClass													= "OPTRE_FC_Elite_Uniform_Minor";
		model															= "\OPTRE_FC_Units\Elite\Elite.p3d";
		identityTypes[] 												= {"LanguageENG_F","Head_NATO"};
		genericNames 													= "NATOMen";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"FirstAidKit"};
		RespawnItems[]													= {"FirstAidKit"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] 											= {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] 										= {"optre_fc_units\elite\data\armor_arms_blue_co.paa","optre_fc_units\elite\data\armor_head_blue_co.paa","optre_fc_units\elite\data\armor_legs_blue_co.paa","optre_fc_units\elite\data\armor_torso_blue_co.paa"};
		armor															= 20;
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
	class OPTRE_FC_Elite_Major_Base: OPTRE_FC_Elite_Minor_Base
	{
		scope															= 1;
		scopeCurator													= 0;
		author															= "Drakedaeron & Article 2 Studios";
		uniformClass													= "OPTRE_FC_Elite_Uniform_Major";
		hiddenSelections[] 												= {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] 										= {"optre_fc_units\elite\data\armor_arms_red_co.paa","optre_fc_units\elite\data\armor_head_red_co.paa","optre_fc_units\elite\data\armor_legs_red_co.paa","optre_fc_units\elite\data\armor_torso_red_co.paa"};
		armor															= 30;
		armorStructural													= 5;
	};
	class OPTRE_FC_Elite_Ultra_Base: OPTRE_FC_Elite_Minor_Base
	{
		scope															= 1;
		scopeCurator													= 0;
		author															= "Drakedaeron & Article 2 Studios";
		uniformClass													= "OPTRE_FC_Elite_Uniform_Ultra";
		hiddenSelections[] 												= {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] 										= {"optre_fc_units\elite\data\armor_arms_white_co.paa","optre_fc_units\elite\data\armor_head_white_co.paa","optre_fc_units\elite\data\armor_legs_white_co.paa","optre_fc_units\elite\data\armor_torso_white_co.paa"};
		armor															= 40;
		armorStructural													= 5;
	};
	class OPTRE_FC_Elite_Zealot_Base: OPTRE_FC_Elite_Minor_Base
	{
		scope															= 1;
		scopeCurator													= 0;
		author															= "Drakedaeron & Article 2 Studios";
		uniformClass													= "OPTRE_FC_Elite_Uniform_Zealot";
		hiddenSelections[] 												= {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] 										= {"optre_fc_units\elite\data\armor_arms_yellow_co.paa","optre_fc_units\elite\data\armor_head_yellow_co.paa","optre_fc_units\elite\data\armor_legs_yellow_co.paa","optre_fc_units\elite\data\armor_torso_yellow_co.paa"};
		armor															= 50;
		armorStructural													= 5;
	};
	class OPTRE_FC_Elite_Unarmed_Base: OPTRE_FC_Elite_Minor_Base
	{
		scope															= 1;
		scopeCurator													= 0;
		author															= "Drakedaeron & Article 2 Studios";
		uniformClass													= "OPTRE_FC_Elite_Undersuit";
		hiddenSelections[] 												= {"camo1","camo2","camo3","camo4","elite_armor_arms","elite_armor_legs","elite_armor_helmet","elite_armor_torso"};
		hiddenSelectionsTextures[] 										= {"optre_fc_units\elite\data\armor_arms_blue_co.paa","optre_fc_units\elite\data\armor_head_blue_co.paa","optre_fc_units\elite\data\armor_legs_blue_co.paa","optre_fc_units\elite\data\armor_torso_blue_co.paa"};
		armor															= 5;
		armorStructural													= 5;
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_FC_Elite_Minor: OPTRE_FC_Elite_Minor_Base
	{
		scope 															= 2;
		scopeCurator													= 2;
		author															= "Drakedaeron & Article 2 Studios";
		displayName														= "Sangheili Minor";
		vehicleClass													= "OPTRE_FC_Infantry_class";
		weapons[] 														= {"OPTRE_FC_Plasma_Rifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_FC_Plasma_Rifle","Throw","Put"};
		magazines[] 													= {"OPTRE_FC_Plasma_Rifle_Battery","OPTRE_FC_Plasma_Rifle_Battery"};
		respawnMagazines[] 												= {"OPTRE_FC_Plasma_Rifle_Battery","OPTRE_FC_Plasma_Rifle_Battery"};
	};
	class OPTRE_FC_Elite_Major: OPTRE_FC_Elite_Major_Base
	{
		scope 															= 2;
		scopeCurator													= 2;
		author															= "Drakedaeron & Article 2 Studios";
		displayName														= "Sangheili Major";
		vehicleClass													= "OPTRE_FC_Infantry_class";
		weapons[] 														= {"OPTRE_FC_Plasma_Rifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_FC_Plasma_Rifle","Throw","Put"};
		magazines[] 													= {"OPTRE_FC_Plasma_Rifle_Battery","OPTRE_FC_Plasma_Rifle_Battery"};
		respawnMagazines[] 												= {"OPTRE_FC_Plasma_Rifle_Battery","OPTRE_FC_Plasma_Rifle_Battery"};
	};
	class OPTRE_FC_Elite_Ultra: OPTRE_FC_Elite_Ultra_Base
	{
		scope 															= 2;
		scopeCurator													= 2;
		author															= "Drakedaeron & Article 2 Studios";
		displayName														= "Sangheili Ultra";
		vehicleClass													= "OPTRE_FC_Infantry_class";
		weapons[] 														= {"OPTRE_FC_Plasma_Rifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_FC_Plasma_Rifle","Throw","Put"};
		magazines[] 													= {"OPTRE_FC_Plasma_Rifle_Battery","OPTRE_FC_Plasma_Rifle_Battery"};
		respawnMagazines[] 												= {"OPTRE_FC_Plasma_Rifle_Battery","OPTRE_FC_Plasma_Rifle_Battery"};
	};
	class OPTRE_FC_Elite_Zealot: OPTRE_FC_Elite_Zealot_Base
	{
		scope 															= 2;
		scopeCurator													= 2;
		author															= "Drakedaeron & Article 2 Studios";
		displayName														= "Sangheili Zealot";
		vehicleClass													= "OPTRE_FC_Infantry_class";
		weapons[] 														= {"OPTRE_FC_Plasma_Rifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_FC_Plasma_Rifle","Throw","Put"};
		magazines[] 													= {"OPTRE_FC_Plasma_Rifle_Battery","OPTRE_FC_Plasma_Rifle_Battery"};
		respawnMagazines[] 												= {"OPTRE_FC_Plasma_Rifle_Battery","OPTRE_FC_Plasma_Rifle_Battery"};
	};
	class OPTRE_FC_Elite_Unarmed: OPTRE_FC_Elite_Unarmed_Base
	{
		scope 															= 2;
		scopeCurator													= 2;
		author															= "Drakedaeron & Article 2 Studios";
		displayName														= "Sangheili (Unarmed)";
		vehicleClass													= "OPTRE_FC_Infantry_class";
		weapons[] 														= {"Throw","Put"};
		respawnWeapons[] 												= {"Throw","Put"};
		magazines[] 													= {};
		respawnMagazines[] 												= {};
	};
	// UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};



class cfgWeapons
{
	class ItemCore;
	class ItemInfo;
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class NVGoggles;
	
	class OPTRE_FC_NVG: NVGoggles
	{
		author											= "Drakedaeron & Article 2 Studios";
		displayName										= "Type-13 Visual Interface";
		modelOptics 									= "";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "";
			modelOff = "";
			mass = 1;
		};
	};
		
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_FC_Elite_Uniform_Minor: U_B_CombatUniform_mcam
	{
		scope											= 2;
		scopeArsenal									= 1;
		author											= "Drakedaeron & Article 2 Studios";
		displayName										= "Sangheili Armor [Minor]";
		//picture   									= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_FC_Elite_Minor_Base";
			containerClass								= "Supply200";
			mass										= 100;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_FC_Elite_Uniform_Major: OPTRE_FC_Elite_Uniform_Minor
	{
		author											= "Drakedaeron & Article 2 Studios";
		displayName										= "Sangheili Armor [Major]";
		//picture   									= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_FC_Elite_Major_Base";
			containerClass								= "Supply250";
		};
	};
	class OPTRE_FC_Elite_Uniform_Ultra: OPTRE_FC_Elite_Uniform_Minor
	{
		author											= "Drakedaeron & Article 2 Studios";
		displayName										= "Sangheili Armor [Ultra]";
		//picture   									= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_FC_Elite_Ultra_Base";
			containerClass								= "Supply300";
		};
	};
	class OPTRE_FC_Elite_Uniform_Zealot: OPTRE_FC_Elite_Uniform_Minor
	{
		author											= "Drakedaeron & Article 2 Studios";
		displayName										= "Sangheili Armor [Zealot]";
		//picture   									= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_FC_Elite_Zealot_Base";
			containerClass								= "Supply400";
		};
	};
	class OPTRE_FC_Elite_Undersuit: OPTRE_FC_Elite_Uniform_Minor
	{
		author											= "Drakedaeron & Article 2 Studios";
		displayName										= "Sangheili Undersuit";
		//picture   									= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_FC_Elite_Unarmed_Base";
			containerClass								= "Supply50";
		};
	};
	// UNIFORMS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};