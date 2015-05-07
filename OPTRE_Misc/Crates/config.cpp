class CfgPatches
{
	class OPTRE_Misc_Crates
	{
		units[]										= {"OPTRE_Ammo_Magic_Box","OPTRE_Ammo_RackWeapons","OPTRE_Ammo_RackAmmo","OPTRE_Ammo_RackItems","OPTRE_Ammo_Pod"};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","OPTRE_Weapons","OPTRE_UNSC_Units","OPTRE_Ins_Units"};
	};
};

class CfgVehicles
{
	class NATO_Box_Base;
	
	class OPTRE_Ammo_Magic_Box: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "OPTRE_Ammo_class";
		displayName = "OPTRE Magic Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 50000;
		transportMaxMagazines = 5000000;
		class TransportMagazines
		{
			class xx_OPTRE_60Rnd_762x51_Mag
			{
				magazine = "OPTRE_60Rnd_762x51_Mag";
				count = 99;
			};
			class xx_OPTRE_60Rnd_762x51_Mag_Tracer
			{
				magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine = "OPTRE_32Rnd_762x51_Mag";
				count = 99;
			};
			class xx_OPTRE_32Rnd_762x51_Mag_Tracer
			{
				magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_36Rnd_95x40_Mag
			{
				magazine = "OPTRE_36Rnd_95x40_Mag";
				count = 99;
			};
			class xx_OPTRE_36Rnd_95x40_Mag_Tracer
			{
				magazine = "OPTRE_36Rnd_95x40_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				magazine = "OPTRE_6Rnd_8Gauge_Pellets";
				count = 99;
			};
			class xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				magazine = "OPTRE_6Rnd_8Gauge_Slugs";
				count = 99;
			};
			class xx_OPTRE_8Rnd_127x40_Mag
			{
				magazine = "OPTRE_8Rnd_127x40_Mag";
				count = 99;
			};
			class xx_OPTRE_8Rnd_127x40_Mag_Tracer
			{
				magazine = "OPTRE_8Rnd_127x40_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_M41_Twin_HEAT
			{
				magazine = "OPTRE_M41_Twin_HEAT";
				count = 99;
			};
			class xx_OPTRE_M41_Twin_HEAT_G
			{
				magazine = "OPTRE_M41_Twin_HEAT_G";
				count = 99;
			};
			class xx_OPTRE_M41_Twin_HEAP
			{
				magazine = "OPTRE_M41_Twin_HEAP";
				count = 99;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag";
				count = 99;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag_Tracer
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_48Rnd_5x23mm_Mag
			{
				magazine = "OPTRE_48Rnd_5x23mm_Mag";
				count = 99;
			};
			class xx_OPTRE_48Rnd_5x23mm_Mag_Tracer
			{
				magazine = "OPTRE_48Rnd_5x23mm_Mag_Tracer";
				count = 99;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_MA5B
			{
				weapon = "OPTRE_MA5B";
				count = 50;
			};
			class xx_OPTRE_MA5BGL
			{
				weapon = "OPTRE_MA5BGL";
				count = 50;
			};
			class xx_OPTRE_BR55HB
			{
				weapon = "OPTRE_BR55HB";
				count = 50;
			};
			class xx_OPTRE_M45
			{
				weapon = "OPTRE_M45";
				count = 50;
			};
			class xx_OPTRE_M45_tan
			{
				weapon = "OPTRE_M45_tan";
				count = 50;
			};
			class xx_OPTRE_M45_olive
			{
				weapon = "OPTRE_M45_olive";
				count = 50;
			};
			class xx_OPTRE_M6G
			{
				weapon = "OPTRE_M6G";
				count = 50;
			};
			class xx_OPTRE_M41_SSR
			{
				weapon = "OPTRE_M41_SSR";
				count = 50;
			};
			class xx_OPTRE_M7
			{
				weapon = "OPTRE_M7";
				count = 50;
			};
		};
		class TransportItems
		{
			class xx_OPTRE_MA5B_AmmoCounter
			{
				name = "OPTRE_MA5B_AmmoCounter";
				count = 50;
			};
			class xx_OPTRE_MA5B_AmmoCounter_NoIS
			{
				name = "OPTRE_MA5B_AmmoCounter_NoIS";
				count = 50;
			};
			class xx_OPTRE_BR55HB_Scope
			{
				name = "OPTRE_BR55HB_Scope";
				count = 50;
			};
			class xx_OPTRE_M45_Flashlight
			{
				name = "OPTRE_M45_Flashlight";
				count = 50;
			};
			class xx_OPTRE_M45_Flashlight_red
			{
				name = "OPTRE_M45_Flashlight_red";
				count = 50;
			};
			class xx_OPTRE_M6G_Flashlight
			{
				name = "OPTRE_M6G_Flashlight";
				count = 50;
			};
			class xx_OPTRE_M6G_Scope
			{
				name = "OPTRE_M6G_Scope";
				count = 50;
			};
			class xx_OPTRE_M7_silencer
			{
				name = "OPTRE_M7_silencer";
				count = 50;
			};
			class xx_OPTRE_M7_Sight
			{
				name = "OPTRE_M7_Sight";
				count = 50;
			};
			class xx_OPTRE_M7_Laser
			{
				name = "OPTRE_M7_Laser";
				count = 50;
			};
			class xx_OPTRE_M7_Flashlight
			{
				name = "OPTRE_M7_Flashlight";
				count = 50;
			};
			class xx_OPTRE_Biofoam
			{
				name = "OPTRE_Biofoam";
				count = 50;
			};
			class xx_OPTRE_MedKit
			{
				name = "OPTRE_MedKit";
				count = 50;
			};
			class xx_OPTRE_NVG
			{
				name = "OPTRE_NVG";
				count = 50;
			};
			class xx_OPTRE_Como_pack_1
			{
				name = "OPTRE_Como_pack_1";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_Black
			{
				name = "OPTRE_ILCS_Rucksack_Black";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_Black2
			{
				name = "OPTRE_ILCS_Rucksack_Black2";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_Medical
			{
				name = "OPTRE_ILCS_Rucksack_Medical";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_green
			{
				name = "OPTRE_ILCS_Rucksack_green";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_green2
			{
				name = "OPTRE_ILCS_Rucksack_green2";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_tan
			{
				name = "OPTRE_ILCS_Rucksack_tan";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_tan2
			{
				name = "OPTRE_ILCS_Rucksack_tan2";
				count = 50;
			};
			class xx_OPTRE_Cigarette
			{
				name = "OPTRE_Cigarette";
				count = 50;
			};
			class xx_OPTRE_Cigar
			{
				name = "OPTRE_Cigar";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet
			{
				name = "OPTRE_UNSC_ODST_helmet";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet_recon
			{
				name = "OPTRE_UNSC_ODST_helmet_recon";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet_sniper
			{
				name = "OPTRE_UNSC_ODST_helmet_sniper";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet_com
			{
				name = "OPTRE_UNSC_ODST_helmet_com";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet_Medic
			{
				name = "OPTRE_UNSC_ODST_helmet_Medic";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_InstructorHat
			{
				name = "OPTRE_UNSC_ODST_InstructorHat";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet_WDL
			{
				name = "OPTRE_UNSC_CH252_Helmet_WDL";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252V_Helmet_WDL
			{
				name = "OPTRE_UNSC_CH252V_Helmet_WDL";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet_DES
			{
				name = "OPTRE_UNSC_CH252_Helmet_DES";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252V_Helmet_DES
			{
				name = "OPTRE_UNSC_CH252V_Helmet_DES";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet_Medic
			{
				name = "OPTRE_UNSC_CH252_Helmet_Medic";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252V_Helmet_Medic
			{
				name = "OPTRE_UNSC_CH252V_Helmet_Medic";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet2_WDL
			{
				name = "OPTRE_UNSC_CH252_Helmet2_WDL";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet2b_WDL
			{
				name = "OPTRE_UNSC_CH252_Helmet2b_WDL";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet2_DES
			{
				name = "OPTRE_UNSC_CH252_Helmet2_DES";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet2b_DES
			{
				name = "OPTRE_UNSC_CH252_Helmet2b_DES";
				count = 50;
			};
			class xx_OPTRE_UNSC_Marine_helmet
			{
				name = "OPTRE_UNSC_Marine_helmet";
				count = 50;
			};
			class xx_OPTRE_UNSC_Marine_helmet_vacuum
			{
				name = "OPTRE_UNSC_Marine_helmet_vacuum";
				count = 50;
			};
			class xx_OPTRE_h_Jarhead_cap_Marine
			{
				name = "OPTRE_h_Jarhead_cap_Marine";
				count = 50;
			};
			class xx_OPTRE_h_Ins_beret_od
			{
				name = "OPTRE_h_Ins_beret_od";
				count = 50;
			};
			class xx_OPTRE_h_Booniehat_Grey
			{
				name = "OPTRE_h_Booniehat_Grey";
				count = 50;
			};
			class xx_OPTRE_h_Booniehat_Green
			{
				name = "OPTRE_h_Booniehat_Green";
				count = 50;
			};
			class xx_OPTRE_h_PatrolCap_Green
			{
				name = "OPTRE_h_PatrolCap_Green";
				count = 50;
			};
			class xx_OPTRE_h_PatrolCap_Brown
			{
				name = "OPTRE_h_PatrolCap_Brown";
				count = 50;
			};
			class xx_OPTRE_h_MICH_OD
			{
				name = "OPTRE_h_MICH_OD";
				count = 50;
			};
			/*class xx_
			{
				name = "";
				count = 50;
			};*/	
		};
	};
	class OPTRE_Ammo_RackWeapons: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "OPTRE_Ammo_class";
		displayName = "[UNSC] Weapons Rack";
		model = "\OPTRE_misc\crates\weaponcrate.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 50;
		transportMaxMagazines = 500;
		class TransportWeapons
		{
			class xx_OPTRE_MA5B
			{
				weapon = "OPTRE_MA5B";
				count = 50;
			};
			class xx_OPTRE_MA5BGL
			{
				weapon = "OPTRE_MA5BGL";
				count = 50;
			};
			class xx_OPTRE_BR55HB
			{
				weapon = "OPTRE_BR55HB";
				count = 50;
			};
			class xx_OPTRE_M45
			{
				weapon = "OPTRE_M45";
				count = 50;
			};
			class xx_OPTRE_M45_tan
			{
				weapon = "OPTRE_M45_tan";
				count = 50;
			};
			class xx_OPTRE_M45_olive
			{
				weapon = "OPTRE_M45_olive";
				count = 50;
			};
			class xx_OPTRE_M6G
			{
				weapon = "OPTRE_M6G";
				count = 50;
			};
			class xx_OPTRE_M41_SSR
			{
				weapon = "OPTRE_M41_SSR";
				count = 50;
			};
			class xx_OPTRE_M7
			{
				weapon = "OPTRE_M7";
				count = 50;
			};
		};
		class TransportItems
		{
			class xx_OPTRE_MA5B_AmmoCounter
			{
				name = "OPTRE_MA5B_AmmoCounter";
				count = 50;
			};
			class xx_OPTRE_MA5B_AmmoCounter_NoIS
			{
				name = "OPTRE_MA5B_AmmoCounter_NoIS";
				count = 50;
			};
			class xx_OPTRE_BR55HB_Scope
			{
				name = "OPTRE_BR55HB_Scope";
				count = 50;
			};
			class xx_OPTRE_M45_Flashlight
			{
				name = "OPTRE_M45_Flashlight";
				count = 50;
			};
			class xx_OPTRE_M45_Flashlight_red
			{
				name = "OPTRE_M45_Flashlight_red";
				count = 50;
			};
			class xx_OPTRE_M6G_Flashlight
			{
				name = "OPTRE_M6G_Flashlight";
				count = 50;
			};
			class xx_OPTRE_M6G_Scope
			{
				name = "OPTRE_M6G_Scope";
				count = 50;
			};
			class xx_OPTRE_M7_silencer
			{
				name = "OPTRE_M7_silencer";
				count = 50;
			};
			class xx_OPTRE_M7_Sight
			{
				name = "OPTRE_M7_Sight";
				count = 50;
			};
			class xx_OPTRE_M7_Laser
			{
				name = "OPTRE_M7_Laser";
				count = 50;
			};
			class xx_OPTRE_M7_Flashlight
			{
				name = "OPTRE_M7_Flashlight";
				count = 50;
			};
		};
	};
	class OPTRE_Ammo_RackAmmo: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "OPTRE_Ammo_class";
		displayName = "[UNSC] Ammo Rack";
		model = "\OPTRE_misc\crates\ammocrate.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 10;
		transportMaxMagazines = 1000;
		class TransportMagazines
		{
			class xx_OPTRE_60Rnd_762x51_Mag
			{
				magazine = "OPTRE_60Rnd_762x51_Mag";
				count = 99;
			};
			class xx_OPTRE_60Rnd_762x51_Mag_Tracer
			{
				magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine = "OPTRE_32Rnd_762x51_Mag";
				count = 99;
			};
			class xx_OPTRE_32Rnd_762x51_Mag_Tracer
			{
				magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_36Rnd_95x40_Mag
			{
				magazine = "OPTRE_36Rnd_95x40_Mag";
				count = 99;
			};
			class xx_OPTRE_36Rnd_95x40_Mag_Tracer
			{
				magazine = "OPTRE_36Rnd_95x40_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				magazine = "OPTRE_6Rnd_8Gauge_Pellets";
				count = 99;
			};
			class xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				magazine = "OPTRE_6Rnd_8Gauge_Slugs";
				count = 99;
			};
			class xx_OPTRE_8Rnd_127x40_Mag
			{
				magazine = "OPTRE_8Rnd_127x40_Mag";
				count = 99;
			};
			class xx_OPTRE_8Rnd_127x40_Mag_Tracer
			{
				magazine = "OPTRE_8Rnd_127x40_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_M41_Twin_HEAT
			{
				magazine = "OPTRE_M41_Twin_HEAT";
				count = 99;
			};
			class xx_OPTRE_M41_Twin_HEAT_G
			{
				magazine = "OPTRE_M41_Twin_HEAT_G";
				count = 99;
			};
			class xx_OPTRE_M41_Twin_HEAP
			{
				magazine = "OPTRE_M41_Twin_HEAP";
				count = 99;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag";
				count = 99;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag_Tracer
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag_Tracer";
				count = 99;
			};
			class xx_OPTRE_48Rnd_5x23mm_Mag
			{
				magazine = "OPTRE_48Rnd_5x23mm_Mag";
				count = 99;
			};
			class xx_OPTRE_48Rnd_5x23mm_Mag_Tracer
			{
				magazine = "OPTRE_48Rnd_5x23mm_Mag_Tracer";
				count = 99;
			};
		};
		class TransportItems
		{
			class xx_OPTRE_MA5B_AmmoCounter
			{
				name = "OPTRE_MA5B_AmmoCounter";
				count = 50;
			};
			class xx_OPTRE_MA5B_AmmoCounter_NoIS
			{
				name = "OPTRE_MA5B_AmmoCounter_NoIS";
				count = 50;
			};
			class xx_OPTRE_BR55HB_Scope
			{
				name = "OPTRE_BR55HB_Scope";
				count = 50;
			};
			class xx_OPTRE_M45_Flashlight
			{
				name = "OPTRE_M45_Flashlight";
				count = 50;
			};
			class xx_OPTRE_M45_Flashlight_red
			{
				name = "OPTRE_M45_Flashlight_red";
				count = 50;
			};
			class xx_OPTRE_M6G_Flashlight
			{
				name = "OPTRE_M6G_Flashlight";
				count = 50;
			};
			class xx_OPTRE_M6G_Scope
			{
				name = "OPTRE_M6G_Scope";
				count = 50;
			};
			class xx_OPTRE_M7_silencer
			{
				name = "OPTRE_M7_silencer";
				count = 50;
			};
			class xx_OPTRE_M7_Sight
			{
				name = "OPTRE_M7_Sight";
				count = 50;
			};
			class xx_OPTRE_M7_Laser
			{
				name = "OPTRE_M7_Laser";
				count = 50;
			};
			class xx_OPTRE_M7_Flashlight
			{
				name = "OPTRE_M7_Flashlight";
				count = 50;
			};
		};
	};
	class OPTRE_Ammo_RackItems: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "OPTRE_Ammo_class";
		displayName = "[UNSC] Item Rack";
		model = "\OPTRE_misc\crates\weaponcrate.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 50;
		transportMaxMagazines = 500;
		class TransportItems
		{
			class xx_OPTRE_MA5B_AmmoCounter
			{
				name = "OPTRE_MA5B_AmmoCounter";
				count = 50;
			};
			class xx_OPTRE_MA5B_AmmoCounter_NoIS
			{
				name = "OPTRE_MA5B_AmmoCounter_NoIS";
				count = 50;
			};
			class xx_OPTRE_BR55HB_Scope
			{
				name = "OPTRE_BR55HB_Scope";
				count = 50;
			};
			class xx_OPTRE_M45_Flashlight
			{
				name = "OPTRE_M45_Flashlight";
				count = 50;
			};
			class xx_OPTRE_M45_Flashlight_red
			{
				name = "OPTRE_M45_Flashlight_red";
				count = 50;
			};
			class xx_OPTRE_M6G_Flashlight
			{
				name = "OPTRE_M6G_Flashlight";
				count = 50;
			};
			class xx_OPTRE_M6G_Scope
			{
				name = "OPTRE_M6G_Scope";
				count = 50;
			};
			class xx_OPTRE_M7_silencer
			{
				name = "OPTRE_M7_silencer";
				count = 50;
			};
			class xx_OPTRE_M7_Sight
			{
				name = "OPTRE_M7_Sight";
				count = 50;
			};
			class xx_OPTRE_M7_Laser
			{
				name = "OPTRE_M7_Laser";
				count = 50;
			};
			class xx_OPTRE_M7_Flashlight
			{
				name = "OPTRE_M7_Flashlight";
				count = 50;
			};
			class xx_OPTRE_Biofoam
			{
				name = "OPTRE_Biofoam";
				count = 50;
			};
			class xx_OPTRE_MedKit
			{
				name = "OPTRE_MedKit";
				count = 50;
			};
			class xx_OPTRE_NVG
			{
				name = "OPTRE_NVG";
				count = 50;
			};
			class xx_OPTRE_Como_pack_1
			{
				name = "OPTRE_Como_pack_1";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_Black
			{
				name = "OPTRE_ILCS_Rucksack_Black";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_Black2
			{
				name = "OPTRE_ILCS_Rucksack_Black2";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_Medical
			{
				name = "OPTRE_ILCS_Rucksack_Medical";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_green
			{
				name = "OPTRE_ILCS_Rucksack_green";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_green2
			{
				name = "OPTRE_ILCS_Rucksack_green2";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_tan
			{
				name = "OPTRE_ILCS_Rucksack_tan";
				count = 50;
			};
			class xx_OPTRE_ILCS_Rucksack_tan2
			{
				name = "OPTRE_ILCS_Rucksack_tan2";
				count = 50;
			};
			class xx_OPTRE_Cigarette
			{
				name = "OPTRE_Cigarette";
				count = 50;
			};
			class xx_OPTRE_Cigar
			{
				name = "OPTRE_Cigar";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet
			{
				name = "OPTRE_UNSC_ODST_helmet";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet_recon
			{
				name = "OPTRE_UNSC_ODST_helmet_recon";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet_sniper
			{
				name = "OPTRE_UNSC_ODST_helmet_sniper";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet_com
			{
				name = "OPTRE_UNSC_ODST_helmet_com";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_helmet_Medic
			{
				name = "OPTRE_UNSC_ODST_helmet_Medic";
				count = 50;
			};
			class xx_OPTRE_UNSC_ODST_InstructorHat
			{
				name = "OPTRE_UNSC_ODST_InstructorHat";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet_WDL
			{
				name = "OPTRE_UNSC_CH252_Helmet_WDL";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252V_Helmet_WDL
			{
				name = "OPTRE_UNSC_CH252V_Helmet_WDL";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet_DES
			{
				name = "OPTRE_UNSC_CH252_Helmet_DES";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252V_Helmet_DES
			{
				name = "OPTRE_UNSC_CH252V_Helmet_DES";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet_Medic
			{
				name = "OPTRE_UNSC_CH252_Helmet_Medic";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252V_Helmet_Medic
			{
				name = "OPTRE_UNSC_CH252V_Helmet_Medic";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet2_WDL
			{
				name = "OPTRE_UNSC_CH252_Helmet2_WDL";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet2b_WDL
			{
				name = "OPTRE_UNSC_CH252_Helmet2b_WDL";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet2_DES
			{
				name = "OPTRE_UNSC_CH252_Helmet2_DES";
				count = 50;
			};
			class xx_OPTRE_UNSC_CH252_Helmet2b_DES
			{
				name = "OPTRE_UNSC_CH252_Helmet2b_DES";
				count = 50;
			};
			class xx_OPTRE_UNSC_Marine_helmet
			{
				name = "OPTRE_UNSC_Marine_helmet";
				count = 50;
			};
			class xx_OPTRE_UNSC_Marine_helmet_vacuum
			{
				name = "OPTRE_UNSC_Marine_helmet_vacuum";
				count = 50;
			};
			class xx_OPTRE_h_Jarhead_cap_Marine
			{
				name = "OPTRE_h_Jarhead_cap_Marine";
				count = 50;
			};
			class xx_OPTRE_h_Ins_beret_od
			{
				name = "OPTRE_h_Ins_beret_od";
				count = 50;
			};
			class xx_OPTRE_h_Booniehat_Grey
			{
				name = "OPTRE_h_Booniehat_Grey";
				count = 50;
			};
			class xx_OPTRE_h_Booniehat_Green
			{
				name = "OPTRE_h_Booniehat_Green";
				count = 50;
			};
			class xx_OPTRE_h_PatrolCap_Green
			{
				name = "OPTRE_h_PatrolCap_Green";
				count = 50;
			};
			class xx_OPTRE_h_PatrolCap_Brown
			{
				name = "OPTRE_h_PatrolCap_Brown";
				count = 50;
			};
			class xx_OPTRE_h_MICH_OD
			{
				name = "OPTRE_h_MICH_OD";
				count = 50;
			};
			/*class xx_
			{
				name = "";
				count = 50;
			};*/	
		};
	};
	class OPTRE_Ammo_Pod: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "OPTRE_Ammo_class";
		displayName = "[UNSC] Supply Pod";
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 15;
		transportMaxMagazines = 20;
		class TransportWeapons
		{
			class xx_OPTRE_MA5B
			{
				weapon = "OPTRE_MA5B";
				count = 2;
			};
			class xx_OPTRE_MA5BGL
			{
				weapon = "OPTRE_MA5BGL";
				count = 1;
			};
			class xx_OPTRE_BR55HB
			{
				weapon = "OPTRE_BR55HB";
				count = 2;
			};
			class xx_OPTRE_M45
			{
				weapon = "OPTRE_M45";
				count = 1;
			};
			class xx_OPTRE_M6G
			{
				weapon = "OPTRE_M6G";
				count = 5;
			};
			class xx_OPTRE_M41_SSR
			{
				weapon = "OPTRE_M41_SSR";
				count = 1;
			};
			class xx_OPTRE_M7
			{
				weapon = "OPTRE_M7";
				count = 2;
			};
		};
		class TransportMagazines
		{
			class xx_OPTRE_60Rnd_762x51_Mag
			{
				magazine = "OPTRE_60Rnd_762x51_Mag";
				count = 2;
			};
			class xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine = "OPTRE_32Rnd_762x51_Mag";
				count = 5;
			};
			class xx_OPTRE_36Rnd_95x40_Mag
			{
				magazine = "OPTRE_36Rnd_95x40_Mag";
				count = 5;
			};
			class xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				magazine = "OPTRE_6Rnd_8Gauge_Pellets";
				count = 10;
			};
			class xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				magazine = "OPTRE_6Rnd_8Gauge_Slugs";
				count = 10;
			};
			class xx_OPTRE_8Rnd_127x40_Mag
			{
				magazine = "OPTRE_8Rnd_127x40_Mag";
				count = 10;
			};
			class xx_OPTRE_M41_Twin_HEAT
			{
				magazine = "OPTRE_M41_Twin_HEAT";
				count = 1;
			};
			class xx_OPTRE_M41_Twin_HEAP
			{
				magazine = "OPTRE_M41_Twin_HEAP";
				count = 1;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag";
				count = 10;
			};
		};
	};
};