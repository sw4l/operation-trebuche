enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches
{
	class TEI_Crates
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core","TEI_Weapons","TEI_UNSC_Units","TEI_Ins_Units"};
	};
};

class CfgVehicles
{
	class ReammoBox;
	class NATO_Box_Base;
	class Box_NATO_Wps_F;
	class Box_NATO_Ammo_F;
	class Box_NATO_WpsSpecial_F;
	class Box_NATO_AmmoOrd_F;
	class Box_NATO_Grenades_F;
	class Box_NATO_Support_F;
	class Box_NATO_WpsLaunch_F;
	class Box_NATO_AmmoVeh_F;
	
	
	class TEI_Magic_Box: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "TEI_Ammo_class";
		displayName = "TEI Magic Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		transportMaxWeapons = 50000;
		transportMaxMagazines = 5000000;
		class TransportMagazines
		{
			class xx_TEI_60Rnd_762x51_Mag
			{
				magazine = "TEI_60Rnd_762x51_Mag";
				count = 99;
			};
			class xx_TEI_60Rnd_762x51_Mag_Tracer
			{
				magazine = "TEI_60Rnd_762x51_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_32Rnd_762x51_Mag
			{
				magazine = "TEI_32Rnd_762x51_Mag";
				count = 99;
			};
			class xx_TEI_32Rnd_762x51_Mag_Tracer
			{
				magazine = "TEI_32Rnd_762x51_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_36Rnd_95x40_Mag
			{
				magazine = "TEI_36Rnd_95x40_Mag";
				count = 99;
			};
			class xx_TEI_36Rnd_95x40_Mag_Tracer
			{
				magazine = "TEI_36Rnd_95x40_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_6Rnd_8Gauge_Pellets
			{
				magazine = "TEI_6Rnd_8Gauge_Pellets";
				count = 99;
			};
			class xx_TEI_6Rnd_8Gauge_Slugs
			{
				magazine = "TEI_6Rnd_8Gauge_Slugs";
				count = 99;
			};
			class xx_TEI_8Rnd_127x40_Mag
			{
				magazine = "TEI_8Rnd_127x40_Mag";
				count = 99;
			};
			class xx_TEI_8Rnd_127x40_Mag_Tracer
			{
				magazine = "TEI_8Rnd_127x40_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_M41_Twin_HEAT
			{
				magazine = "TEI_M41_Twin_HEAT";
				count = 99;
			};
			class xx_TEI_M41_Twin_HEAT_G
			{
				magazine = "TEI_M41_Twin_HEAT_G";
				count = 99;
			};
			class xx_TEI_M41_Twin_HEAP
			{
				magazine = "TEI_M41_Twin_HEAP";
				count = 99;
			};
			class xx_TEI_M41_Twin_HEAA
			{
				magazine = "TEI_M41_Twin_HEAA";
				count = 99;
			};
			class xx_TEI_60Rnd_5x23mm_Mag
			{
				magazine = "TEI_60Rnd_5x23mm_Mag";
				count = 99;
			};
			class xx_TEI_60Rnd_5x23mm_Mag_Tracer
			{
				magazine = "TEI_60Rnd_5x23mm_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_48Rnd_5x23mm_Mag
			{
				magazine = "TEI_48Rnd_5x23mm_Mag";
				count = 99;
			};
			class xx_TEI_48Rnd_5x23mm_Mag_Tracer
			{
				magazine = "TEI_48Rnd_5x23mm_Mag_Tracer";
				count = 99;
			};
		};
		class TransportWeapons
		{
			class xx_TEI_MA5B
			{
				weapon = "TEI_MA5B";
				count = 50;
			};
			class xx_TEI_MA5BGL
			{
				weapon = "TEI_MA5BGL";
				count = 50;
			};
			class xx_TEI_BR55HB
			{
				weapon = "TEI_BR55HB";
				count = 50;
			};
			class xx_TEI_M45
			{
				weapon = "TEI_M45";
				count = 50;
			};
			class xx_TEI_M45_tan
			{
				weapon = "TEI_M45_tan";
				count = 50;
			};
			class xx_TEI_M45_olive
			{
				weapon = "TEI_M45_olive";
				count = 50;
			};
			class xx_TEI_M6G
			{
				weapon = "TEI_M6G";
				count = 50;
			};
			class xx_TEI_M41_SSR
			{
				weapon = "TEI_M41_SSR";
				count = 50;
			};
			class xx_TEI_M7
			{
				weapon = "TEI_M7";
				count = 50;
			};
		};
		class TransportItems
		{
			class xx_TEI_MA5B_AmmoCounter
			{
				name = "TEI_MA5B_AmmoCounter";
				count = 50;
			};
			class xx_TEI_MA5B_AmmoCounter_NoIS
			{
				name = "TEI_MA5B_AmmoCounter_NoIS";
				count = 50;
			};
			class xx_TEI_BR55HB_Scope
			{
				name = "TEI_BR55HB_Scope";
				count = 50;
			};
			class xx_TEI_M45_Flashlight
			{
				name = "TEI_M45_Flashlight";
				count = 50;
			};
			class xx_TEI_M45_Flashlight_red
			{
				name = "TEI_M45_Flashlight_red";
				count = 50;
			};
			class xx_TEI_M6G_Flashlight
			{
				name = "TEI_M6G_Flashlight";
				count = 50;
			};
			class xx_TEI_M6G_Scope
			{
				name = "TEI_M6G_Scope";
				count = 50;
			};
			class xx_TEI_M7_silencer
			{
				name = "TEI_M7_silencer";
				count = 50;
			};
			class xx_TEI_M7_Sight
			{
				name = "TEI_M7_Sight";
				count = 50;
			};
			class xx_TEI_M7_Laser
			{
				name = "TEI_M7_Laser";
				count = 50;
			};
			class xx_TEI_M7_Flashlight
			{
				name = "TEI_M7_Flashlight";
				count = 50;
			};
			class xx_TEI_Biofoam
			{
				name = "TEI_Biofoam";
				count = 50;
			};
			class xx_TEI_MedKit
			{
				name = "TEI_MedKit";
				count = 50;
			};
			class xx_TEI_NVG
			{
				name = "TEI_NVG";
				count = 50;
			};
			class xx_TEI_Como_pack_1
			{
				name = "TEI_Como_pack_1";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_Black
			{
				name = "TEI_ILCS_Rucksack_Black";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_Black2
			{
				name = "TEI_ILCS_Rucksack_Black2";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_Medical
			{
				name = "TEI_ILCS_Rucksack_Medical";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_green
			{
				name = "TEI_ILCS_Rucksack_green";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_green2
			{
				name = "TEI_ILCS_Rucksack_green2";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_tan
			{
				name = "TEI_ILCS_Rucksack_tan";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_tan2
			{
				name = "TEI_ILCS_Rucksack_tan2";
				count = 50;
			};
			class xx_TEI_Cigarette
			{
				name = "TEI_Cigarette";
				count = 50;
			};
			class xx_TEI_Cigar
			{
				name = "TEI_Cigar";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet
			{
				name = "TEI_UNSC_ODST_helmet";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet_recon
			{
				name = "TEI_UNSC_ODST_helmet_recon";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet_sniper
			{
				name = "TEI_UNSC_ODST_helmet_sniper";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet_com
			{
				name = "TEI_UNSC_ODST_helmet_com";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet_Medic
			{
				name = "TEI_UNSC_ODST_helmet_Medic";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_InstructorHat
			{
				name = "TEI_UNSC_ODST_InstructorHat";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet_WDL
			{
				name = "TEI_UNSC_CH252_Helmet_WDL";
				count = 50;
			};
			class xx_TEI_UNSC_CH252V_Helmet_WDL
			{
				name = "TEI_UNSC_CH252V_Helmet_WDL";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet_DES
			{
				name = "TEI_UNSC_CH252_Helmet_DES";
				count = 50;
			};
			class xx_TEI_UNSC_CH252V_Helmet_DES
			{
				name = "TEI_UNSC_CH252V_Helmet_DES";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet_Medic
			{
				name = "TEI_UNSC_CH252_Helmet_Medic";
				count = 50;
			};
			class xx_TEI_UNSC_CH252V_Helmet_Medic
			{
				name = "TEI_UNSC_CH252V_Helmet_Medic";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet2_WDL
			{
				name = "TEI_UNSC_CH252_Helmet2_WDL";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet2b_WDL
			{
				name = "TEI_UNSC_CH252_Helmet2b_WDL";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet2_DES
			{
				name = "TEI_UNSC_CH252_Helmet2_DES";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet2b_DES
			{
				name = "TEI_UNSC_CH252_Helmet2b_DES";
				count = 50;
			};
			class xx_TEI_UNSC_Marine_helmet
			{
				name = "TEI_UNSC_Marine_helmet";
				count = 50;
			};
			class xx_TEI_UNSC_Marine_helmet_vacuum
			{
				name = "TEI_UNSC_Marine_helmet_vacuum";
				count = 50;
			};
			class xx_TEI_h_Jarhead_cap_Marine
			{
				name = "TEI_h_Jarhead_cap_Marine";
				count = 50;
			};
			class xx_TEI_h_Ins_beret_od
			{
				name = "TEI_h_Ins_beret_od";
				count = 50;
			};
			class xx_TEI_h_Booniehat_Grey
			{
				name = "TEI_h_Booniehat_Grey";
				count = 50;
			};
			class xx_TEI_h_Booniehat_Green
			{
				name = "TEI_h_Booniehat_Green";
				count = 50;
			};
			class xx_TEI_h_PatrolCap_Green
			{
				name = "TEI_h_PatrolCap_Green";
				count = 50;
			};
			class xx_TEI_h_PatrolCap_Brown
			{
				name = "TEI_h_PatrolCap_Brown";
				count = 50;
			};
			class xx_TEI_h_MICH_OD
			{
				name = "TEI_h_MICH_OD";
				count = 50;
			};
			/*class xx_
			{
				name = "";
				count = 50;
			};*/	
		};
	};
	class TEI_weapon_rack: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Weapons Rack";
		model = "\tei_misc\crates\weaponcrate.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		transportMaxWeapons = 50;
		transportMaxMagazines = 500;
		class TransportWeapons
		{
			class xx_TEI_MA5B
			{
				weapon = "TEI_MA5B";
				count = 50;
			};
			class xx_TEI_MA5BGL
			{
				weapon = "TEI_MA5BGL";
				count = 50;
			};
			class xx_TEI_BR55HB
			{
				weapon = "TEI_BR55HB";
				count = 50;
			};
			class xx_TEI_M45
			{
				weapon = "TEI_M45";
				count = 50;
			};
			class xx_TEI_M45_tan
			{
				weapon = "TEI_M45_tan";
				count = 50;
			};
			class xx_TEI_M45_olive
			{
				weapon = "TEI_M45_olive";
				count = 50;
			};
			class xx_TEI_M6G
			{
				weapon = "TEI_M6G";
				count = 50;
			};
			class xx_TEI_M41_SSR
			{
				weapon = "TEI_M41_SSR";
				count = 50;
			};
			class xx_TEI_M7
			{
				weapon = "TEI_M7";
				count = 50;
			};
		};
		class TransportItems
		{
			class xx_TEI_MA5B_AmmoCounter
			{
				name = "TEI_MA5B_AmmoCounter";
				count = 50;
			};
			class xx_TEI_MA5B_AmmoCounter_NoIS
			{
				name = "TEI_MA5B_AmmoCounter_NoIS";
				count = 50;
			};
			class xx_TEI_BR55HB_Scope
			{
				name = "TEI_BR55HB_Scope";
				count = 50;
			};
			class xx_TEI_M45_Flashlight
			{
				name = "TEI_M45_Flashlight";
				count = 50;
			};
			class xx_TEI_M45_Flashlight_red
			{
				name = "TEI_M45_Flashlight_red";
				count = 50;
			};
			class xx_TEI_M6G_Flashlight
			{
				name = "TEI_M6G_Flashlight";
				count = 50;
			};
			class xx_TEI_M6G_Scope
			{
				name = "TEI_M6G_Scope";
				count = 50;
			};
			class xx_TEI_M7_silencer
			{
				name = "TEI_M7_silencer";
				count = 50;
			};
			class xx_TEI_M7_Sight
			{
				name = "TEI_M7_Sight";
				count = 50;
			};
			class xx_TEI_M7_Laser
			{
				name = "TEI_M7_Laser";
				count = 50;
			};
			class xx_TEI_M7_Flashlight
			{
				name = "TEI_M7_Flashlight";
				count = 50;
			};
		};
	};
	class TEI_ammo_rack: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Ammo Rack";
		model = "\tei_misc\crates\ammocrate.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		transportMaxWeapons = 10;
		transportMaxMagazines = 1000;
		class TransportMagazines
		{
			class xx_TEI_60Rnd_762x51_Mag
			{
				magazine = "TEI_60Rnd_762x51_Mag";
				count = 99;
			};
			class xx_TEI_60Rnd_762x51_Mag_Tracer
			{
				magazine = "TEI_60Rnd_762x51_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_32Rnd_762x51_Mag
			{
				magazine = "TEI_32Rnd_762x51_Mag";
				count = 99;
			};
			class xx_TEI_32Rnd_762x51_Mag_Tracer
			{
				magazine = "TEI_32Rnd_762x51_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_36Rnd_95x40_Mag
			{
				magazine = "TEI_36Rnd_95x40_Mag";
				count = 99;
			};
			class xx_TEI_36Rnd_95x40_Mag_Tracer
			{
				magazine = "TEI_36Rnd_95x40_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_6Rnd_8Gauge_Pellets
			{
				magazine = "TEI_6Rnd_8Gauge_Pellets";
				count = 99;
			};
			class xx_TEI_6Rnd_8Gauge_Slugs
			{
				magazine = "TEI_6Rnd_8Gauge_Slugs";
				count = 99;
			};
			class xx_TEI_8Rnd_127x40_Mag
			{
				magazine = "TEI_8Rnd_127x40_Mag";
				count = 99;
			};
			class xx_TEI_8Rnd_127x40_Mag_Tracer
			{
				magazine = "TEI_8Rnd_127x40_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_M41_Twin_HEAT
			{
				magazine = "TEI_M41_Twin_HEAT";
				count = 99;
			};
			class xx_TEI_M41_Twin_HEAT_G
			{
				magazine = "TEI_M41_Twin_HEAT_G";
				count = 99;
			};
			class xx_TEI_M41_Twin_HEAP
			{
				magazine = "TEI_M41_Twin_HEAP";
				count = 99;
			};
			class xx_TEI_M41_Twin_HEAA
			{
				magazine = "TEI_M41_Twin_HEAA";
				count = 99;
			};
			class xx_TEI_60Rnd_5x23mm_Mag
			{
				magazine = "TEI_60Rnd_5x23mm_Mag";
				count = 99;
			};
			class xx_TEI_60Rnd_5x23mm_Mag_Tracer
			{
				magazine = "TEI_60Rnd_5x23mm_Mag_Tracer";
				count = 99;
			};
			class xx_TEI_48Rnd_5x23mm_Mag
			{
				magazine = "TEI_48Rnd_5x23mm_Mag";
				count = 99;
			};
			class xx_TEI_48Rnd_5x23mm_Mag_Tracer
			{
				magazine = "TEI_48Rnd_5x23mm_Mag_Tracer";
				count = 99;
			};
		};
		class TransportItems
		{
			class xx_TEI_MA5B_AmmoCounter
			{
				name = "TEI_MA5B_AmmoCounter";
				count = 50;
			};
			class xx_TEI_MA5B_AmmoCounter_NoIS
			{
				name = "TEI_MA5B_AmmoCounter_NoIS";
				count = 50;
			};
			class xx_TEI_BR55HB_Scope
			{
				name = "TEI_BR55HB_Scope";
				count = 50;
			};
			class xx_TEI_M45_Flashlight
			{
				name = "TEI_M45_Flashlight";
				count = 50;
			};
			class xx_TEI_M45_Flashlight_red
			{
				name = "TEI_M45_Flashlight_red";
				count = 50;
			};
			class xx_TEI_M6G_Flashlight
			{
				name = "TEI_M6G_Flashlight";
				count = 50;
			};
			class xx_TEI_M6G_Scope
			{
				name = "TEI_M6G_Scope";
				count = 50;
			};
			class xx_TEI_M7_silencer
			{
				name = "TEI_M7_silencer";
				count = 50;
			};
			class xx_TEI_M7_Sight
			{
				name = "TEI_M7_Sight";
				count = 50;
			};
			class xx_TEI_M7_Laser
			{
				name = "TEI_M7_Laser";
				count = 50;
			};
			class xx_TEI_M7_Flashlight
			{
				name = "TEI_M7_Flashlight";
				count = 50;
			};
		};
	};
	class TEI_item_rack: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Item Rack";
		model = "\tei_misc\crates\weaponcrate.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		transportMaxWeapons = 50;
		transportMaxMagazines = 500;
		class TransportItems
		{
			class xx_TEI_MA5B_AmmoCounter
			{
				name = "TEI_MA5B_AmmoCounter";
				count = 50;
			};
			class xx_TEI_MA5B_AmmoCounter_NoIS
			{
				name = "TEI_MA5B_AmmoCounter_NoIS";
				count = 50;
			};
			class xx_TEI_BR55HB_Scope
			{
				name = "TEI_BR55HB_Scope";
				count = 50;
			};
			class xx_TEI_M45_Flashlight
			{
				name = "TEI_M45_Flashlight";
				count = 50;
			};
			class xx_TEI_M45_Flashlight_red
			{
				name = "TEI_M45_Flashlight_red";
				count = 50;
			};
			class xx_TEI_M6G_Flashlight
			{
				name = "TEI_M6G_Flashlight";
				count = 50;
			};
			class xx_TEI_M6G_Scope
			{
				name = "TEI_M6G_Scope";
				count = 50;
			};
			class xx_TEI_M7_silencer
			{
				name = "TEI_M7_silencer";
				count = 50;
			};
			class xx_TEI_M7_Sight
			{
				name = "TEI_M7_Sight";
				count = 50;
			};
			class xx_TEI_M7_Laser
			{
				name = "TEI_M7_Laser";
				count = 50;
			};
			class xx_TEI_M7_Flashlight
			{
				name = "TEI_M7_Flashlight";
				count = 50;
			};
			class xx_TEI_Biofoam
			{
				name = "TEI_Biofoam";
				count = 50;
			};
			class xx_TEI_MedKit
			{
				name = "TEI_MedKit";
				count = 50;
			};
			class xx_TEI_NVG
			{
				name = "TEI_NVG";
				count = 50;
			};
			class xx_TEI_Como_pack_1
			{
				name = "TEI_Como_pack_1";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_Black
			{
				name = "TEI_ILCS_Rucksack_Black";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_Black2
			{
				name = "TEI_ILCS_Rucksack_Black2";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_Medical
			{
				name = "TEI_ILCS_Rucksack_Medical";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_green
			{
				name = "TEI_ILCS_Rucksack_green";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_green2
			{
				name = "TEI_ILCS_Rucksack_green2";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_tan
			{
				name = "TEI_ILCS_Rucksack_tan";
				count = 50;
			};
			class xx_TEI_ILCS_Rucksack_tan2
			{
				name = "TEI_ILCS_Rucksack_tan2";
				count = 50;
			};
			class xx_TEI_Cigarette
			{
				name = "TEI_Cigarette";
				count = 50;
			};
			class xx_TEI_Cigar
			{
				name = "TEI_Cigar";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet
			{
				name = "TEI_UNSC_ODST_helmet";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet_recon
			{
				name = "TEI_UNSC_ODST_helmet_recon";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet_sniper
			{
				name = "TEI_UNSC_ODST_helmet_sniper";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet_com
			{
				name = "TEI_UNSC_ODST_helmet_com";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_helmet_Medic
			{
				name = "TEI_UNSC_ODST_helmet_Medic";
				count = 50;
			};
			class xx_TEI_UNSC_ODST_InstructorHat
			{
				name = "TEI_UNSC_ODST_InstructorHat";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet_WDL
			{
				name = "TEI_UNSC_CH252_Helmet_WDL";
				count = 50;
			};
			class xx_TEI_UNSC_CH252V_Helmet_WDL
			{
				name = "TEI_UNSC_CH252V_Helmet_WDL";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet_DES
			{
				name = "TEI_UNSC_CH252_Helmet_DES";
				count = 50;
			};
			class xx_TEI_UNSC_CH252V_Helmet_DES
			{
				name = "TEI_UNSC_CH252V_Helmet_DES";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet_Medic
			{
				name = "TEI_UNSC_CH252_Helmet_Medic";
				count = 50;
			};
			class xx_TEI_UNSC_CH252V_Helmet_Medic
			{
				name = "TEI_UNSC_CH252V_Helmet_Medic";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet2_WDL
			{
				name = "TEI_UNSC_CH252_Helmet2_WDL";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet2b_WDL
			{
				name = "TEI_UNSC_CH252_Helmet2b_WDL";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet2_DES
			{
				name = "TEI_UNSC_CH252_Helmet2_DES";
				count = 50;
			};
			class xx_TEI_UNSC_CH252_Helmet2b_DES
			{
				name = "TEI_UNSC_CH252_Helmet2b_DES";
				count = 50;
			};
			class xx_TEI_UNSC_Marine_helmet
			{
				name = "TEI_UNSC_Marine_helmet";
				count = 50;
			};
			class xx_TEI_UNSC_Marine_helmet_vacuum
			{
				name = "TEI_UNSC_Marine_helmet_vacuum";
				count = 50;
			};
			class xx_TEI_h_Jarhead_cap_Marine
			{
				name = "TEI_h_Jarhead_cap_Marine";
				count = 50;
			};
			class xx_TEI_h_Ins_beret_od
			{
				name = "TEI_h_Ins_beret_od";
				count = 50;
			};
			class xx_TEI_h_Booniehat_Grey
			{
				name = "TEI_h_Booniehat_Grey";
				count = 50;
			};
			class xx_TEI_h_Booniehat_Green
			{
				name = "TEI_h_Booniehat_Green";
				count = 50;
			};
			class xx_TEI_h_PatrolCap_Green
			{
				name = "TEI_h_PatrolCap_Green";
				count = 50;
			};
			class xx_TEI_h_PatrolCap_Brown
			{
				name = "TEI_h_PatrolCap_Brown";
				count = 50;
			};
			class xx_TEI_h_MICH_OD
			{
				name = "TEI_h_MICH_OD";
				count = 50;
			};
			/*class xx_
			{
				name = "";
				count = 50;
			};*/	
		};
	};
	class TEI_supply_pod: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Supply Pod";
		model = "\tei_misc\crates\Supply_pod.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		transportMaxWeapons = 15;
		transportMaxMagazines = 20;
		class TransportWeapons
		{
			class xx_TEI_MA5B
			{
				weapon = "TEI_MA5B";
				count = 2;
			};
			class xx_TEI_MA5BGL
			{
				weapon = "TEI_MA5BGL";
				count = 1;
			};
			class xx_TEI_BR55HB
			{
				weapon = "TEI_BR55HB";
				count = 2;
			};
			class xx_TEI_M45
			{
				weapon = "TEI_M45";
				count = 1;
			};
			class xx_TEI_M6G
			{
				weapon = "TEI_M6G";
				count = 5;
			};
			class xx_TEI_M41_SSR
			{
				weapon = "TEI_M41_SSR";
				count = 1;
			};
			class xx_TEI_M7
			{
				weapon = "TEI_M7";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class xx_TEI_60Rnd_762x51_Mag
			{
				magazine = "TEI_60Rnd_762x51_Mag";
				count = 2;
			};
			class xx_TEI_32Rnd_762x51_Mag
			{
				magazine = "TEI_32Rnd_762x51_Mag";
				count = 5;
			};
			class xx_TEI_36Rnd_95x40_Mag
			{
				magazine = "TEI_36Rnd_95x40_Mag";
				count = 5;
			};
			class xx_TEI_6Rnd_8Gauge_Pellets
			{
				magazine = "TEI_6Rnd_8Gauge_Pellets";
				count = 10;
			};
			class xx_TEI_6Rnd_8Gauge_Slugs
			{
				magazine = "TEI_6Rnd_8Gauge_Slugs";
				count = 10;
			};
			class xx_TEI_8Rnd_127x40_Mag
			{
				magazine = "TEI_8Rnd_127x40_Mag";
				count = 10;
			};
			class xx_TEI_M41_Twin_HEAT
			{
				magazine = "TEI_M41_Twin_HEAT";
				count = 1;
			};
			class xx_TEI_M41_Twin_HEAP
			{
				magazine = "TEI_M41_Twin_HEAP";
				count = 1;
			};
			class xx_TEI_60Rnd_5x23mm_Mag
			{
				magazine = "TEI_60Rnd_5x23mm_Mag";
				count = 10;
			};
		};
	};
	
	
	
	
	
	
	class TEI_UNSC_ammobox: Box_NATO_Ammo_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Ammo Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","TEI_Misc\Crates\data\TEI_UNSC_ammobox_ca.paa"};
		//icon = "iconCrateWpns";
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
	class TEI_UNSC_weaponsbox: Box_NATO_Wps_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Weapons Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","TEI_Misc\Crates\data\TEI_UNSC_ammobox_ca.paa"};
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
	class TEI_UNSC_specialbox: Box_NATO_WpsSpecial_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Special Weapons Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","TEI_Misc\Crates\data\TEI_UNSC_ammobox_ca.paa"};
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
	class TEI_UNSC_ordbox: Box_NATO_AmmoOrd_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Explosives Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","TEI_Misc\Crates\data\TEI_UNSC_ammobox_ca.paa"};
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
	class TEI_UNSC_grenadebox: Box_NATO_Grenades_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Grenades Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","TEI_Misc\Crates\data\TEI_UNSC_ammobox_ca.paa"};
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
	class TEI_UNSC_supportbox: Box_NATO_Support_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Support Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","TEI_Misc\Crates\data\TEI_UNSC_ammobox_ca.paa"};
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
	class TEI_UNSC_itembox: Box_NATO_Support_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Item Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","TEI_Misc\Crates\data\TEI_UNSC_ammobox_ca.paa"};
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
	class TEI_UNSC_launcherbox: Box_NATO_WpsLaunch_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Launchers Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","TEI_Misc\Crates\data\TEI_UNSC_ammobox_ca.paa"};
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
	class TEI_UNSC_vehammobox: Box_NATO_AmmoVeh_F
	{
		scope = 1;
		vehicleClass = "TEI_Ammo_class";
		displayName = "[UNSC] Vehicle Ammo Box";
		author = "Eridanus Insurrection Team";
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"TEI_Misc\Crates\data\TEI_UNSC_ammobox_signs_ca.paa","A3\Weapons_F\Ammoboxes\data\AmmoVeh_CO.paa"};
		//transportMaxWeapons = 5;
		//transportMaxMagazines = 500;
	};
};