class CfgPatches
{
	class OPTRE_UNSC_Units_Marines
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgVehicles
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
	class OPTRE_UNSC_Army_Soldier_Medic;
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Marine_Soldier: CAManBase
	{
		scope															= 1;
		scopeCurator													= 0;
		side 															= 1;
		portrait 														= "";
		picture 														= "";
		icon 															= "iconMan";
		accuracy 														= 2.3;
		sensitivity 													= 3;
		threat[] 														= {1,0.1,0.1};
		camouflage 														= 1.4;
		minFireTime 													= 7;
		cost 															= 100000;
		canCarryBackPack 												= 1;
		oxygenCapacity 													= 80;
		class EventHandlers;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		identityTypes[] 												= {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO", "G_IRAN_default"}; //G_IRAN_Default removes those pesky wacky glasses.  Everything else here serves to keep the UNSC diverse.  
		genericNames 													= "NATOMen";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_marines_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
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
				passThrough         = 0.35;
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
				passThrough         = 0.35;
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
				passThrough         = 0.35;
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
	class OPTRE_UNSC_Marine_Soldier_Vacuum: OPTRE_UNSC_Marine_Soldier
	{
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_Vacuum","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_Vacuum","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Marine_Soldier_M: OPTRE_UNSC_Marine_Soldier
	{
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_M";
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_pant2"};
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
				passThrough         = 0.35;
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
				passThrough         = 0.35;
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
				passThrough         = 0.65;
				radius              = 0.12;
				explosionShielding  = 1;
				visual              = "injury_legs";
				minimalHit          = 0.01;
			};
		};
	};
	class OPTRE_UNSC_Marine_Soldier_L: OPTRE_UNSC_Marine_Soldier
	{
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_L";
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_pant2"};
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
				passThrough         = 0.85;
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
				passThrough         = 0.85;
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
				passThrough         = 0.65;
				radius              = 0.12;
				explosionShielding  = 1;
				visual              = "injury_legs";
				minimalHit          = 0.01;
			};
		};
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Marine_Soldier_Corpsman: OPTRE_UNSC_Army_Soldier_Medic
	{
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Corpsman";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_Vacuum_MED","OPTRE_UNSC_CH252_Helmet_Vacuum_MED","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_Vacuum_MED","OPTRE_UNSC_CH252_Helmet_Vacuum_MED","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Marine_Soldier_Radioman: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Radio Operator";
		backpack 														= "OPTRE_ANPRC_521_Black";
		weapons[] 														= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_Rifleman_AR: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (MA5)";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_Rifleman_BR: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (BR55)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_Rifleman_AT: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (AT)";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Marine_Soldier_Rifleman_Light: OPTRE_UNSC_Marine_Soldier_L
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (Light)";
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","OPTRE_BoonieHat_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","OPTRE_BoonieHat_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_AT_Specialist: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AT Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Marine_Soldier_AA_Specialist: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AA Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AA";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Marine_Soldier_Engineer: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Engineer";
		engineer 														= 1;
		backpack 														= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon 															= "iconManEngineer";
	};
	class OPTRE_UNSC_Marine_Soldier_Breacher: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Breacher";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Marine_Soldier_TeamLead: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Team Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Marine_Soldier_SquadLead: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Squad Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Marine_Soldier_Grenadier: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Grenadier";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Marine_Soldier_Autorifleman: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M73","Throw","Put"};
		magazines[] 													= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon				 											= "iconManMG";
	};
	class OPTRE_UNSC_Marine_Soldier_Assist_Autorifleman: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Assistant Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Marine_Soldier_Marksman: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Designated Marksman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_Sniper: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Sniper";
		weapons[] 														= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_ForwardObserver: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Forward Observer";
		backpack 														= "B_Kitbag_rgr";
		Items[]															= {"OPTRE_Biofoam","Item_Laserdesignator"};
		RespawnItems[]													= {"OPTRE_Biofoam","Item_Laserdesignator"};
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Marine_Soldier_Crewman: OPTRE_UNSC_Marine_Soldier
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Crewman";
		weapons[] 														= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_Vacuum","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_Vacuum","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_Demolitions: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Demolitions Expert";
		engineer 														= 1;
		backpack														= "OPTRE_Kitbag_rgr_EXP";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon 															= "iconManExplosive";
	};
	class OPTRE_UNSC_Marine_Soldier_UAV_Op: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "UAV Operator";
		backpack 														= "B_UAV_01_backpack_F";
		uavHacker 														= 1;
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_Vacuum","OPTRE_UNSC_Marine_helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_Vacuum","OPTRE_UNSC_Marine_helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_UNSC_Marine_Soldier_Unarmed: OPTRE_UNSC_Marine_Soldier_M
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[] 														= {"Throw","Put"};
		respawnWeapons[] 												= {"Throw","Put"};
		magazines[] 													= {};
		respawnMagazines[] 												= {};
	};
	class OPTRE_UNSC_Marine_Soldier_Officer: OPTRE_UNSC_Marine_Soldier_L
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Officer";
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","OPTRE_PatrolCap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","OPTRE_PatrolCap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 														= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManOfficer";
	};
	class OPTRE_UNSC_Marine_Pilot: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Marine Pilot";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_pilot";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[] 										= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 									= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 							= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_vacuum","OPTRE_UNSC_Marine_Helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","camo3","insignia","clan","attach_leftknee","attach_rightknee","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftthigh","attach_rightthigh","attach_rightknee2","attach_leftknee2","attach_pant2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_marines_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
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
				passThrough         = 0.85;
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
				passThrough         = 0.85;
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
				passThrough         = 0.85;
				radius              = 0.12;
				explosionShielding  = 1;
				visual              = "injury_legs";
				minimalHit          = 0.01;
			};
		};
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
	class H_MilCap_Blue;
	class H_Booniehat_khk;
	
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Marine_Uniform: U_B_CombatUniform_mcam
	{
		scope															= 2;
		author															= "Article 2 Studios";
		displayName														= "[UNSC] Marine BDU";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_uniform_hvy.paa";
		model															= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel												= "-";
			uniformClass												= "OPTRE_UNSC_Marine_Soldier";
			containerClass												= "Supply40";
			mass														= 50;
			modelSides[] 												= {6};
		};
	};
	class OPTRE_UNSC_Marine_Uniform_M: OPTRE_UNSC_Marine_Uniform
	{
		author															= "Article 2 Studios";
		displayName														= "[UNSC] Marine BDU (Medium)";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_UNSC_Marine_Soldier_M";
			mass														= 40;
		};
	};
	class OPTRE_UNSC_Marine_Uniform_L: OPTRE_UNSC_Marine_Uniform
	{
		author															= "Article 2 Studios";
		displayName														= "[UNSC] Marine BDU (Light)";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_UNSC_Marine_Soldier_L";
			mass														= 30;
		};
	};
	class OPTRE_UNSC_Marine_Uniform_Pilot: OPTRE_UNSC_Marine_Uniform
	{
		author															= "Article 2 Studios";
		displayName														= "[UNSC] Marine BDU (Pilot)";
		class ItemInfo: ItemInfo
		{
			uniformClass												= "OPTRE_UNSC_Marine_Pilot";
			mass														= 25;
		};
	};
	// UNIFORMS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// VESTS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Marine_Vest_Base: V_PlateCarrier1_rgr
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
				class Chest
				{
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_Marine_Vest: OPTRE_UNSC_Marine_Vest_Base
	{	
		scope 															= 2;
		author															= "Article 2 Studios";
		displayName  													= "[UNSC] M52 Body Armor [Marine]";
		hiddenSelections[]   											= {"camo1","camo2","camo3","attach_knife","attach_neck","attach_ghillie"};
		hiddenSelectionsTextures[]   									= {"OPTRE_UNSC_Units\Marines\data\vest_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_khaki_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   										= {"camo1","camo2","camo3","attach_knife","attach_neck","attach_ghillie"};
			hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Marines\data\vest_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_khaki_co.paa"};
		};
	};
	class OPTRE_UNSC_Marine_Vest_Vacuum: OPTRE_UNSC_Marine_Vest
	{	
		author															= "Article 2 Studios";
		displayName  													= "[UNSC] M52[V] Body Armor [Marine]";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_vest_vac.paa";
		hiddenSelections[]   											= {"camo1","camo2","camo3","attach_knife","attach_ghillie"};
		hiddenSelectionsTextures[]   									= {"OPTRE_UNSC_Units\Marines\data\vest_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_khaki_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   										= {"camo1","camo2","camo3","attach_knife","attach_ghillie"};
			hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Marines\data\vest_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_khaki_co.paa"};
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
	class OPTRE_UNSC_Marine_Vest_Sniper: OPTRE_UNSC_Marine_Vest
	{	
		author															= "Article 2 Studios";
		displayName  													= "[UNSC] M52[S] Body Armor [Marine]";
		picture   														= "\OPTRE_UNSC_Units\marines\icons\marine_vest_vac.paa";
		hiddenSelections[]   											= {"camo1","camo2","camo3","attach_neck"};
		hiddenSelectionsTextures[]   									= {"OPTRE_UNSC_Units\Marines\data\vest_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_khaki_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   										= {"camo1","camo2","camo3","attach_neck"};
			hiddenSelectionsTextures[]   								= {"OPTRE_UNSC_Units\Marines\data\vest_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa","OPTRE_UNSC_Units\Army\data\pouches_khaki_co.paa"};
		};
	};
	// VESTS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Marine_Helmet_Base: H_HelmetB
	{	
		scope   														= 0;
		author											= "Article 2 Studios";
		displayName    									= "-";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_helmet.paa";
		model     										= "\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]   							= {"camo1","camo2","attach_face"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\OPTRE_UNSC_Units\Army\helmet.p3d";
			//armor   									= 8;
			mass   										= 40;
			modelSides[]   								= {6};
			passThrough   								= 0.15;
			hiddenSelections[]   						= {"camo1","camo2","attach_face"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class OPTRE_UNSC_Marine_Helmet: OPTRE_UNSC_Marine_Helmet_Base
	{	
		scope   										= 2;
		author											= "Article 2 Studios";
		displayName    									= "[UNSC] CH252 Helmet [Marine]";
		hiddenSelections[]   							= {"camo1","camo2","attach_face","attach_rangefinder","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_face","attach_rangefinder","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
		};
	};
	class OPTRE_UNSC_Marine_Helmet_Vacuum: OPTRE_UNSC_Marine_Helmet
	{	
		author											= "Article 2 Studios";
		displayName    									= "[UNSC] CH252[V] Helmet [Marine]";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_helmet_vac.paa";
		hiddenSelections[]   							= {"camo1","camo2","attach_rangefinder","attach_ghillie"}; 
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_rangefinder","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
		};
	};
	class OPTRE_UNSC_Marine_Helmet_Sniper: OPTRE_UNSC_Marine_Helmet
	{	
		author											= "Article 2 Studios";
		displayName    									= "[UNSC] CH252[S] Helmet [Marine]";
		picture   										= "\OPTRE_UNSC_Units\army\icons\army_helmet_des_gil.paa";
		hiddenSelections[]   							= {"camo1","camo2","attach_face"}; 
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_face"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
		};
	};
	class OPTRE_PatrolCap_Marine: H_MilCap_blue 
	{
		displayname 									= "[UNSC] Patrol Cap [Marines]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Marines\data\cappatrol_marine_co.paa"};
	};
	class OPTRE_BoonieHat_Marine: H_Booniehat_khk 
	{
		displayname 									= "[UNSC] Boonie Hat [Marines]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Marines\data\booniehat_marine_co.paa"};
	};
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};