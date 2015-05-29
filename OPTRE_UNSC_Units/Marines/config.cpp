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
	class B_Soldier_F;
	class OPTRE_UNSC_Army_Soldier_Medic;
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Marine_Soldier: B_Soldier_F
	{
		scope															= 1;
		faction															= "OPTRE_UNSC";
		author															= "Article 2 Studios";
		displayName														= "-";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","OPTRE_UNSC_Marine_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder","attach_rightshoulder","attach_pant1"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Marines\data\armor_marines_co.paa","OPTRE_UNSC_Units\Marines\data\uniform_marines_co.paa"};
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
	class OPTRE_UNSC_Marine_Soldier_Vacuum: OPTRE_UNSC_Marine_Soldier
	{
		scope															= 1;
		author															= "Article 2 Studios";
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest_Vacuum","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest_Vacuum","OPTRE_UNSC_Marine_Helmet_Vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Marine_Soldier_M: OPTRE_UNSC_Marine_Soldier
	{
		scope															= 1;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_M";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_pant2"};
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
				armor = 3;
			};
		};
	};
	class OPTRE_UNSC_Marine_Soldier_L: OPTRE_UNSC_Marine_Soldier
	{
		scope															= 1;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Marine_Uniform_L";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_pant2"};
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
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Marine_Soldier_Corpsman: OPTRE_UNSC_Army_Soldier_Medic
	{
		scope 															= 2;
		displayName														= "Corpsman";
		attendant 														= 1;
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_Vacuum_MED","OPTRE_UNSC_CH252_Helmet_Vacuum_MED","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_Vacuum_MED","OPTRE_UNSC_CH252_Helmet_Vacuum_MED","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Marine_Soldier_Radioman: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope 															= 2;
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
		displayName														= "Rifleman (MA5)";
		vehicleClass													= "OPTRE_UNSC_Man_Marines_class";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_Rifleman_BR: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
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
		displayName														= "Rifleman (AT)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Marine_Soldier_Rifleman_Light: OPTRE_UNSC_Marine_Soldier_L
	{
		scope															= 2;
		displayName														= "Rifleman (Light)";
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","H_Booniehat_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_AT_Specialist: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		displayName														= "AT Specialist";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Marine_Soldier_AA_Specialist: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		displayName														= "AA Specialist";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Marine_Soldier_Engineer: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		displayName														= "Engineer";
		engineer 														= 1;
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon 															= "iconManEngineer";
	};
	class OPTRE_UNSC_Marine_Soldier_Breacher: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
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
		displayName														= "Team Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","OPTRE_32Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Marine_Soldier_SquadLead: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
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
		displayName														= "Grenadier";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Marine_Soldier_Autorifleman: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
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
		displayName														= "Assistant Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		respawnMagazines[] 												= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Marine_Soldier_Marksman: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		displayName														= "Designated Marksman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"srifle_EBR_MRCO_pointer_F","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_Sniper: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
		displayName														= "Sniper";
		weapons[] 														= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Marine_Soldier_ForwardObserver: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
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
		displayName														= "Demolitions Expert";
		engineer 														= 1;
		backpack														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon 															= "iconManExplosive";
	};
	class OPTRE_UNSC_Marine_Soldier_UAV_Op: OPTRE_UNSC_Marine_Soldier_Vacuum
	{
		scope															= 2;
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
		displayName														= "Unarmed";
		weapons[] 														= {"Throw","Put"};
		respawnWeapons[] 												= {"Throw","Put"};
		magazines[] 													= {};
		respawnMagazines[] 												= {};
	};
	class OPTRE_UNSC_Marine_Soldier_Officer: OPTRE_UNSC_Marine_Soldier_L
	{
		scope															= 2;
		displayName														= "Officer";
		linkedItems[] 													= {"OPTRE_UNSC_Marine_Vest","OPTRE_PatrolCap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_Marine_Vest","OPTRE_PatrolCap_Marine","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 														= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManOfficer";
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
			armor 														= 40;
			containerClass 												= "Supply160";
			mass 														= 80;
			passThrough 												= 0.15;
			modelSides[] 												= {6};
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
			passThrough 												= 0.1;
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
			armor   									= 8;
			mass   										= 40;
			modelSides[]   								= {6};
			passThrough   								= 0.15;
			hiddenSelections[]   						= {"camo1","camo2","attach_face"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Marines\data\helmet_marines_co.paa","OPTRE_UNSC_Units\Marines\data\addons_marines_ca.paa"};
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
			armor   									= 10;
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
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Marines\data\patrolcap_marines_co.paa"};
	};
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};