class CfgPatches
{
	class OPTRE_Misc_Crates
	{
		units[]										= {"OPTRE_Ammo_Magic_Box","OPTRE_Ammo_Rack_Weapons","OPTRE_Ammo_Rack_Ammo","OPTRE_Ammo_RackItems","OPTRE_Ammo_SupplyPod_Empty","OPTRE_Ammo_SupplyPod_AR","OPTRE_Ammo_SupplyPod_BR","OPTRE_Ammo_SupplyPod_Launcher","OPTRE_Ammo_SupplyPod_LMG","OPTRE_Ammo_SupplyPod_Medical","OPTRE_Ammo_SupplyPod_Pistol","OPTRE_Ammo_SupplyPod_Shotgun","OPTRE_Ammo_SupplyPod_SMG","OPTRE_Ammo_SupplyPod_Sniper"};
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
		vehicleClass = "OPTRE_UNSC_Ammo_class";
		displayName = "[OPTRE] Magic Box";
		model = "\A3\weapons_F\AmmoBoxes\Supplydrop";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 999999999999;
		transportMaxMagazines = 999999999999;
		maximumLoad = 999999999999;
		transportMaxBackpacks = 999999999999;
		transportAmmo = 1;
		transportRepair = 1;
		transportFuel = 1;
		supplyRadius = 2.5;
		armor = 99999;
		class TransportMagazines
		{
			class xx_OPTRE_60Rnd_762x51_Mag
			{
				magazine = "OPTRE_60Rnd_762x51_Mag";
				count = 999;
			};
			class xx_OPTRE_60Rnd_762x51_Mag_Tracer
			{
				magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
				count = 999;
			};
			class xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine = "OPTRE_32Rnd_762x51_Mag";
				count = 999;
			};
			class xx_OPTRE_32Rnd_762x51_Mag_Tracer
			{
				magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
				count = 999;
			};
			class xx_OPTRE_100Rnd_762x51_Box
			{
				magazine = "OPTRE_100Rnd_762x51_Box";
				count = 999;
			};
			class xx_OPTRE_100Rnd_762x51_Box_Tracer
			{
				magazine = "OPTRE_100Rnd_762x51_Box_Tracer";
				count = 999;
			};
			class xx_OPTRE_36Rnd_95x40_Mag
			{
				magazine = "OPTRE_36Rnd_95x40_Mag";
				count = 999;
			};
			class xx_OPTRE_36Rnd_95x40_Mag_Tracer
			{
				magazine = "OPTRE_36Rnd_95x40_Mag_Tracer";
				count = 999;
			};
			class xx_OPTRE_15Rnd_762x51_Mag
			{
				magazine = "OPTRE_15Rnd_762x51_Mag";
				count = 999;
			};
			class xx_OPTRE_100Rnd_95x40_Box
			{
				magazine = "OPTRE_100Rnd_95x40_Box";
				count = 999;
			};
			class xx_OPTRE_100Rnd_95x40_Box_Tracer
			{
				magazine = "OPTRE_100Rnd_95x40_Box_Tracer";
				count = 999;
			};
			class xx_OPTRE_200Rnd_95x40_Box
			{
				magazine = "OPTRE_200Rnd_95x40_Box";
				count = 999;
			};
			class xx_OPTRE_200Rnd_95x40_Box_Tracer
			{
				magazine = "OPTRE_200Rnd_95x40_Box_Tracer";
				count = 999;
			};
			class xx_OPTRE_8Rnd_127x40_Mag
			{
				magazine = "OPTRE_8Rnd_127x40_Mag";
				count = 999;
			};
			class xx_OPTRE_8Rnd_127x40_AP_Mag
			{
				magazine = "OPTRE_8Rnd_127x40_AP_Mag";
				count = 999;
			};
			class xx_OPTRE_8Rnd_127x40_Mag_Tracer
			{
				magazine = "OPTRE_8Rnd_127x40_Mag_Tracer";
				count = 999;
			};
			class xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				magazine = "OPTRE_6Rnd_8Gauge_Pellets";
				count = 999;
			};
			class xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				magazine = "OPTRE_6Rnd_8Gauge_Slugs";
				count = 999;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag";
				count = 999;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag_tracer
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag_tracer";
				count = 999;
			};
			class xx_OPTRE_48Rnd_5x23mm_Mag
			{
				magazine = "OPTRE_48Rnd_5x23mm_Mag";
				count = 999;
			};
			class xx_OPTRE_48Rnd_5x23mm_JHP_Mag
			{
				magazine = "OPTRE_48Rnd_5x23mm_JHP_Mag";
				count = 999;
			};
			class xx_OPTRE_48Rnd_5x23mm_FMJ_Mag
			{
				magazine = "OPTRE_48Rnd_5x23mm_FMJ_Mag";
				count = 999;
			};
			class xx_OPTRE_48Rnd_5x23mm_Mag_tracer
			{
				magazine = "OPTRE_48Rnd_5x23mm_Mag_tracer";
				count = 999;
			};
			class xx_OPTRE_4Rnd_145x114_APFSDS_Mag
			{
				magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
				count = 999;
			};
			class xx_OPTRE_4Rnd_145x114_HVAP_Mag
			{
				magazine = "OPTRE_4Rnd_145x114_HVAP_Mag";
				count = 999;
			};
			class xx_OPTRE_4Rnd_145x114_HEDP_Mag
			{
				magazine = "OPTRE_4Rnd_145x114_HEDP_Mag";
				count = 999;
			};
			class xx_OPTRE_M41_Twin_HEAT
			{
				magazine = "OPTRE_M41_Twin_HEAT";
				count = 999;
			};
			class xx_OPTRE_M41_Twin_HEAT_G
			{
				magazine = "OPTRE_M41_Twin_HEAT_G";
				count = 999;
			};
			class xx_OPTRE_M41_Twin_HEAP
			{
				magazine = "OPTRE_M41_Twin_HEAP";
				count = 999;
			};
			class xx_OPTRE_M9_Frag
			{
				magazine = "OPTRE_M9_Frag";
				count = 999;
			};
			class xx_OPTRE_M2_Smoke
			{
				magazine = "OPTRE_M2_Smoke";
				count = 999;
			};
			class xx_OPTRE_M2_Smoke_Blue
			{
				magazine = "OPTRE_M2_Smoke_Blue";
				count = 999;
			};
			class xx_OPTRE_M2_Smoke_Yellow
			{
				magazine = "OPTRE_M2_Smoke_Yellow";
				count = 999;
			};
			class xx_OPTRE_M2_Smoke_Red
			{
				magazine = "OPTRE_M2_Smoke_Red";
				count = 999;
			};
			class xx_OPTRE_M2_Smoke_Green
			{
				magazine = "OPTRE_M2_Smoke_Green";
				count = 999;
			};
			class xx_OPTRE_M2_Smoke_Orange
			{
				magazine = "OPTRE_M2_Smoke_Orange";
				count = 999;
			};
			class xx_OPTRE_M2_Smoke_Purple
			{
				magazine = "OPTRE_M2_Smoke_Purple";
				count = 999;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_MA5B
			{
				weapon = "OPTRE_MA5B";
				count = 999;
			};
			class xx_OPTRE_MA5BGL
			{
				weapon = "OPTRE_MA5BGL";
				count = 999;
			};
			class xx_OPTRE_BR55HB
			{
				weapon = "OPTRE_BR55HB";
				count = 999;
			};
			class xx_OPTRE_M392_DMR_ScopedRifle
			{
				weapon = "OPTRE_M392_DMR_ScopedRifle";
				count = 999;
			};
			class xx_OPTRE_M73
			{
				weapon = "OPTRE_M73";
				count = 999;
			};
			class xx_OPTRE_M73_CQC
			{
				weapon = "OPTRE_M73_CQC";
				count = 999;
			};
			class xx_OPTRE_M6G
			{
				weapon = "OPTRE_M6G";
				count = 999;
			};
			class xx_OPTRE_M41_SSR
			{
				weapon = "OPTRE_M41_SSR";
				count = 999;
			};
			class xx_OPTRE_M41_SSR_G
			{
				weapon = "OPTRE_M41_SSR_G";
				count = 999;
			};
			class xx_OPTRE_M45
			{
				weapon = "OPTRE_M45";
				count = 999;
			};
			class xx_OPTRE_M7
			{
				weapon = "OPTRE_M7";
				count = 999;
			};
			class xx_OPTRE_M7_Folded
			{
				weapon = "OPTRE_M7_Folded";
				count = 999;
			};
			class xx_OPTRE_SRS99D
			{
				weapon = "OPTRE_SRS99D";
				count = 999;
			};
		};
		class TransportItems
		{
			class xx_OPTRE_Biofoam
			{
				name = "OPTRE_Biofoam";
				count = 999;
			};
			class xx_OPTRE_MedKit
			{
				name = "OPTRE_MedKit";
				count = 999;
			};
			class xx_OPTRE_MA5B_AmmoCounter
			{
				name = "OPTRE_MA5B_AmmoCounter";
				count = 999;
			};
			class xx_OPTRE_MA5B_AmmoCounter_NoIS
			{
				name = "OPTRE_MA5B_AmmoCounter_NoIS";
				count = 999;
			};
			class xx_OPTRE_MA5B_Flashlight
			{
				name = "OPTRE_MA5B_Flashlight";
				count = 999;
			};
			class xx_OPTRE_BR55HB_Scope
			{
				name = "OPTRE_BR55HB_Scope";
				count = 999;
			};
			class xx_OPTRE_M73_SmartLink
			{
				name = "OPTRE_M73_SmartLink";
				count = 999;
			};
			class xx_OPTRE_M6G_Flashlight
			{
				name = "OPTRE_M6G_Flashlight";
				count = 999;
			};
			class xx_OPTRE_M6G_Scope
			{
				name = "OPTRE_M6G_Scope";
				count = 999;
			};
			class xx_OPTRE_M45_Flashlight
			{
				name = "OPTRE_M45_Flashlight";
				count = 999;
			};
			class xx_OPTRE_M45_Flashlight_red
			{
				name = "OPTRE_M45_Flashlight_red";
				count = 999;
			};
			class xx_OPTRE_M7_silencer
			{
				name = "OPTRE_M7_silencer";
				count = 999;
			};
			class xx_OPTRE_M7_Flashlight
			{
				name = "OPTRE_M7_Flashlight";
				count = 999;
			};
			class xx_OPTRE_M7_Sight
			{
				name = "";
				count = 999;
			};
			class xx_OPTRE_M7_Laser
			{
				name = "OPTRE_M7_Laser";
				count = 999;
			};
			class xx_OPTRE_SRS99_Scope
			{
				name = "OPTRE_SRS99_Scope";
				count = 999;
			};
			class xx_OPTRE_SRS99_Laser
			{
				name = "OPTRE_SRS99_Laser";
				count = 999;
			};
			class xx_OPTRE_SRS99_Bipod
			{
				name = "OPTRE_SRS99_Bipod";
				count = 999;
			};
		};
	};
	class OPTRE_Ammo_Rack_Weapons: OPTRE_Ammo_Magic_Box
	{
		displayName = "[UNSC] Weapons Rack";
		hiddenSelections[] = {"attach_Cover"};
		model = "\OPTRE_misc\crates\weaponcrate.p3d";
		author = "Article 2 Studios";
		transportMaxWeapons = 50;
		transportMaxMagazines = 1000;
		maximumLoad = 500000;
		transportMaxBackpacks = 5;
		transportAmmo = 1;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 2.5;
		armor = 500;
			class TransportMagazines
			{
				class xx_OPTRE_60Rnd_762x51_Mag
				{
					magazine = "OPTRE_60Rnd_762x51_Mag";
					count = 100;
				};
				class xx_OPTRE_60Rnd_762x51_Mag_Tracer
				{
					magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
					count = 25;
				};
				class xx_OPTRE_32Rnd_762x51_Mag
				{
					magazine = "OPTRE_32Rnd_762x51_Mag";
					count = 50;
				};
				class xx_OPTRE_32Rnd_762x51_Mag_Tracer
				{
					magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
					count = 25;
				};
				class xx_OPTRE_36Rnd_95x40_Mag
				{
					magazine = "OPTRE_36Rnd_95x40_Mag";
					count = 30;
				};
				class xx_OPTRE_36Rnd_95x40_Mag_Tracer
				{
					magazine = "OPTRE_36Rnd_95x40_Mag_Tracer";
					count = 15;
				};
				class xx_OPTRE_15Rnd_762x51_Mag
				{
					magazine = "OPTRE_15Rnd_762x51_Mag";
					count = 40;
				};
				class xx_OPTRE_100Rnd_95x40_Box
				{
					magazine = "OPTRE_100Rnd_95x40_Box";
					count = 10;
				};
				class xx_OPTRE_100Rnd_95x40_Box_Tracer
				{
					magazine = "OPTRE_100Rnd_95x40_Box_Tracer";
					count = 5;
				};
				class xx_OPTRE_200Rnd_95x40_Box
				{
					magazine = "OPTRE_200Rnd_95x40_Box";
					count = 10;
				};
				class xx_OPTRE_200Rnd_95x40_Box_Tracer
				{
					magazine = "OPTRE_200Rnd_95x40_Box_Tracer";
					count = 5;
				};
				class xx_OPTRE_8Rnd_127x40_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_Mag";
					count = 25;
				};
				class xx_OPTRE_8Rnd_127x40_AP_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_AP_Mag";
					count = 5;
				};
				class xx_OPTRE_8Rnd_127x40_Mag_Tracer
				{
					magazine = "OPTRE_8Rnd_127x40_Mag_Tracer";
					count = 10;
				};
				class xx_OPTRE_6Rnd_8Gauge_Pellets
				{
					magazine = "OPTRE_6Rnd_8Gauge_Pellets";
					count = 25;
				};
				class xx_OPTRE_6Rnd_8Gauge_Slugs
				{
					magazine = "OPTRE_6Rnd_8Gauge_Slugs";
					count = 25;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag";
					count = 30;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag_tracer
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag_tracer";
					count = 15;
				};
				class xx_OPTRE_4Rnd_145x114_APFSDS_Mag
				{
					magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
					count = 8;
				};
				class xx_OPTRE_M41_Twin_HEAT
				{
					magazine = "OPTRE_M41_Twin_HEAT";
					count = 6;
				};
				class xx_OPTRE_M41_Twin_HEAT_G
				{
					magazine = "OPTRE_M41_Twin_HEAT_G";
					count = 2;
				};
				class xx_OPTRE_M41_Twin_HEAP
				{
					magazine = "OPTRE_M41_Twin_HEAP";
					count = 6;
				};
				class xx_OPTRE_M9_Frag
				{
					magazine = "OPTRE_M9_Frag";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke
				{
					magazine = "OPTRE_M2_Smoke";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke_Blue
				{
					magazine = "OPTRE_M2_Smoke_Blue";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Yellow
				{
					magazine = "OPTRE_M2_Smoke_Yellow";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Red
				{
					magazine = "OPTRE_M2_Smoke_Red";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Green
				{
					magazine = "OPTRE_M2_Smoke_Green";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Orange
				{
					magazine = "OPTRE_M2_Smoke_Orange";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Purple
				{
					magazine = "OPTRE_M2_Smoke_Purple";
					count = 10;
				};
			};
			class TransportWeapons
			{
				class xx_OPTRE_MA5B
				{
					weapon = "OPTRE_MA5B";
					count = 10;
				};
				class xx_OPTRE_MA5BGL
				{
					weapon = "OPTRE_MA5BGL";
					count = 5;
				};
				class xx_OPTRE_BR55HB
				{
					weapon = "OPTRE_BR55HB";
					count = 3;
				};
				class xx_OPTRE_M392_DMR_ScopedRifle
				{
					weapon = "OPTRE_M392_DMR_ScopedRifle";
					count = 5;
				};
				class xx_OPTRE_M73
				{
					weapon = "OPTRE_M73";
					count = 3;
				};
				class xx_OPTRE_M6G
				{
					weapon = "OPTRE_M6G";
					count = 10;
				};
				class xx_OPTRE_M41_SSR
				{
					weapon = "OPTRE_M41_SSR";
					count = 3;
				};
				class xx_OPTRE_M41_SSR_G
				{
					weapon = "OPTRE_M41_SSR_G";
					count = 1;
				};
				class xx_OPTRE_M45
				{
					weapon = "OPTRE_M45";
					count = 5;
				};
				class xx_OPTRE_M7
				{
					weapon = "OPTRE_M7";
					count = 3;
				};
				class xx_OPTRE_SRS99D
				{
					weapon = "OPTRE_SRS99D";
					count = 1;
				};
			};
			class TransportItems
			{
				class xx_OPTRE_Biofoam
				{
					name = "OPTRE_Biofoam";
					count = 25;
				};
				class xx_OPTRE_MedKit
				{
					name = "OPTRE_MedKit";
					count = 1;
				};
				class xx_OPTRE_MA5B_AmmoCounter
				{
					name = "OPTRE_MA5B_AmmoCounter";
					count = 10;
				};
				class xx_OPTRE_MA5B_AmmoCounter_NoIS
				{
					name = "OPTRE_MA5B_AmmoCounter_NoIS";
					count = 10;
				};
				class xx_OPTRE_MA5B_Flashlight
				{
					name = "OPTRE_MA5B_Flashlight";
					count = 20;
				};
				class xx_OPTRE_BR55HB_Scope
				{
					name = "OPTRE_BR55HB_Scope";
					count = 3;
				};
				class xx_OPTRE_M73_SmartLink
				{
					name = "OPTRE_M73_SmartLink";
					count = 3;
				};
				class xx_OPTRE_M6G_Flashlight
				{
					name = "OPTRE_M6G_Flashlight";
					count = 10;
				};
				class xx_OPTRE_M6G_Scope
				{
					name = "OPTRE_M6G_Scope";
					count = 10;
				};
				class xx_OPTRE_M45_Flashlight
				{
					name = "OPTRE_M45_Flashlight";
					count = 5;
				};
				class xx_OPTRE_M45_Flashlight_red
				{
					name = "OPTRE_M45_Flashlight_red";
					count = 1;
				};
				class xx_OPTRE_M7_silencer
				{
					name = "OPTRE_M7_silencer";
					count = 3;
				};
				class xx_OPTRE_M7_Flashlight
				{
					name = "OPTRE_M7_Flashlight";
					count = 3;
				};
				class xx_OPTRE_M7_Sight
				{
					name = "";
					count = 3;
				};
				class xx_OPTRE_M7_Laser
				{
					name = "OPTRE_M7_Laser";
					count = 3;
				};
				class xx_OPTRE_SRS99_Scope
				{
					name = "OPTRE_SRS99_Scope";
					count = 1;
				};
				class xx_OPTRE_SRS99_Laser
				{
					name = "OPTRE_SRS99_Laser";
					count = 1;
				};
				class xx_OPTRE_SRS99_Bipod
				{
					name = "OPTRE_SRS99_Bipod";
					count = 1;
				};
			};
	};
	class OPTRE_INS_Cache_Open: OPTRE_Ammo_Rack_Weapons
	{
		vehicleClass = "OPTRE_INS_Ammo_class";
		displayName = "[INS] Weapons Cache (Ground)";
		model = "\OPTRE_misc\crates\ins_cache.p3d";
		author = "Article 2 Studios";
		transportMaxWeapons = 50;
		transportMaxMagazines = 1000;
		maximumLoad = 500000;
		transportMaxBackpacks = 5;
		transportAmmo = 1;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 2.5;
		armor = 500;
			class TransportMagazines
			{
				class xx_OPTRE_60Rnd_762x51_Mag
				{
					magazine = "OPTRE_60Rnd_762x51_Mag";
					count = 100;
				};
				class xx_OPTRE_60Rnd_762x51_Mag_Tracer
				{
					magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
					count = 25;
				};
				class xx_OPTRE_32Rnd_762x51_Mag
				{
					magazine = "OPTRE_32Rnd_762x51_Mag";
					count = 50;
				};
				class xx_OPTRE_32Rnd_762x51_Mag_Tracer
				{
					magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
					count = 25;
				};
				class xx_OPTRE_15Rnd_762x51_Mag
				{
					magazine = "OPTRE_15Rnd_762x51_Mag";
					count = 40;
				};
				class xx_OPTRE_100Rnd_95x40_Box
				{
					magazine = "OPTRE_100Rnd_95x40_Box";
					count = 10;
				};
				class xx_OPTRE_100Rnd_95x40_Box_Tracer
				{
					magazine = "OPTRE_100Rnd_95x40_Box_Tracer";
					count = 5;
				};
				class xx_OPTRE_200Rnd_95x40_Box
				{
					magazine = "OPTRE_200Rnd_95x40_Box";
					count = 10;
				};
				class xx_OPTRE_200Rnd_95x40_Box_Tracer
				{
					magazine = "OPTRE_200Rnd_95x40_Box_Tracer";
					count = 5;
				};
				class xx_OPTRE_8Rnd_127x40_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_Mag";
					count = 25;
				};
				class xx_OPTRE_8Rnd_127x40_AP_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_AP_Mag";
					count = 5;
				};
				class xx_OPTRE_8Rnd_127x40_Mag_Tracer
				{
					magazine = "OPTRE_8Rnd_127x40_Mag_Tracer";
					count = 10;
				};
				class xx_OPTRE_6Rnd_8Gauge_Pellets
				{
					magazine = "OPTRE_6Rnd_8Gauge_Pellets";
					count = 25;
				};
				class xx_OPTRE_6Rnd_8Gauge_Slugs
				{
					magazine = "OPTRE_6Rnd_8Gauge_Slugs";
					count = 25;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag";
					count = 30;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag_tracer
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag_tracer";
					count = 15;
				};
				class xx_OPTRE_4Rnd_145x114_APFSDS_Mag
				{
					magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
					count = 8;
				};
				class xx_OPTRE_M41_Twin_HEAT
				{
					magazine = "OPTRE_M41_Twin_HEAT";
					count = 6;
				};
				class xx_OPTRE_M41_Twin_HEAT_G
				{
					magazine = "OPTRE_M41_Twin_HEAT_G";
					count = 2;
				};
				class xx_OPTRE_M41_Twin_HEAP
				{
					magazine = "OPTRE_M41_Twin_HEAP";
					count = 6;
				};
				class xx_OPTRE_M9_Frag
				{
					magazine = "OPTRE_M9_Frag";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke
				{
					magazine = "OPTRE_M2_Smoke";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke_Blue
				{
					magazine = "OPTRE_M2_Smoke_Blue";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Yellow
				{
					magazine = "OPTRE_M2_Smoke_Yellow";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Red
				{
					magazine = "OPTRE_M2_Smoke_Red";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Green
				{
					magazine = "OPTRE_M2_Smoke_Green";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Orange
				{
					magazine = "OPTRE_M2_Smoke_Orange";
					count = 10;
				};
				class xx_OPTRE_M2_Smoke_Purple
				{
					magazine = "OPTRE_M2_Smoke_Purple";
					count = 10;
				};
				class _xx_ATMine_Range_Mag
				{
				magazine = "ATMine_Range_Mag";
				count = 5;
				};
				class _xx_APERSMine_Range_Mag
				{
				magazine = "APERSMine_Range_Mag";
				count = 5;
				};
				class _xx_APERSBoundingMine_Range_Mag
				{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 5;
				};
				class _xx_SLAMDirectionalMine_Wire_Mag
				{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 5;
				};
				class _xx_APERSTripMine_Wire_Mag
				{
				magazine = "APERSTripMine_Wire_Mag";
				count = 5;
				};
				class _xx_ClaymoreDirectionalMine_Remote_Mag
				{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 5;
				};
				class _xx_SatchelCharge_Remote_Mag
				{
				magazine = "SatchelCharge_Remote_Mag";
				count = 3;
				};
				class _xx_DemoCharge_Remote_Mag
				{
				magazine = "DemoCharge_Remote_Mag";
				count = 7;
				};
				class _xx_IEDUrbanBig_Remote_Mag
				{
				magazine = "IEDUrbanBig_Remote_Mag";
				count = 2;
				};
				class _xx_IEDLandBig_Remote_Mag
				{
				magazine = "IEDLandBig_Remote_Mag";
				count = 2;
				};
				class _xx_IEDUrbanSmall_Remote_Mag
				{
				magazine = "SatchelCharge_Remote_Mag";
				count = 5;
				};
				class _xx_IEDLandSmall_Remote_Mag
				{
				magazine = "DemoCharge_Remote_Mag";
				count = 5;
				};
			};
			class TransportWeapons
			{
				class xx_OPTRE_MA5B
				{
					weapon = "OPTRE_MA5B";
					count = 10;
				};
				class xx_OPTRE_MA5BGL
				{
					weapon = "OPTRE_MA5BGL";
					count = 5;
				};
				class xx_OPTRE_M392_DMR_ScopedRifle
				{
					weapon = "OPTRE_M392_DMR_ScopedRifle";
					count = 5;
				};
				class xx_OPTRE_M73
				{
					weapon = "OPTRE_M73";
					count = 3;
				};
				class xx_OPTRE_M6G
				{
					weapon = "OPTRE_M6G";
					count = 10;
				};
				class xx_OPTRE_M41_SSR
				{
					weapon = "OPTRE_M41_SSR";
					count = 3;
				};
				class xx_OPTRE_M41_SSR_G
				{
					weapon = "OPTRE_M41_SSR_G";
					count = 1;
				};
				class xx_OPTRE_M45
				{
					weapon = "OPTRE_M45";
					count = 5;
				};
				class xx_OPTRE_M7
				{
					weapon = "OPTRE_M7";
					count = 3;
				};
				class xx_OPTRE_SRS99D
				{
					weapon = "OPTRE_SRS99D";
					count = 1;
				};
			};
			class TransportItems
			{
				class xx_OPTRE_Biofoam
				{
					name = "OPTRE_Biofoam";
					count = 25;
				};
				class xx_OPTRE_MedKit
				{
					name = "OPTRE_MedKit";
					count = 1;
				};
				class xx_OPTRE_MA5B_AmmoCounter
				{
					name = "OPTRE_MA5B_AmmoCounter";
					count = 10;
				};
				class xx_OPTRE_MA5B_AmmoCounter_NoIS
				{
					name = "OPTRE_MA5B_AmmoCounter_NoIS";
					count = 10;
				};
				class xx_OPTRE_MA5B_Flashlight
				{
					name = "OPTRE_MA5B_Flashlight";
					count = 20;
				};
				class xx_OPTRE_BR55HB_Scope
				{
					name = "OPTRE_BR55HB_Scope";
					count = 3;
				};
				class xx_OPTRE_M73_SmartLink
				{
					name = "OPTRE_M73_SmartLink";
					count = 3;
				};
				class xx_OPTRE_M6G_Flashlight
				{
					name = "OPTRE_M6G_Flashlight";
					count = 10;
				};
				class xx_OPTRE_M6G_Scope
				{
					name = "OPTRE_M6G_Scope";
					count = 10;
				};
				class xx_OPTRE_M45_Flashlight
				{
					name = "OPTRE_M45_Flashlight";
					count = 5;
				};
				class xx_OPTRE_M45_Flashlight_red
				{
					name = "OPTRE_M45_Flashlight_red";
					count = 1;
				};
				class xx_OPTRE_M7_silencer
				{
					name = "OPTRE_M7_silencer";
					count = 3;
				};
				class xx_OPTRE_M7_Flashlight
				{
					name = "OPTRE_M7_Flashlight";
					count = 3;
				};
				class xx_OPTRE_M7_Sight
				{
					name = "";
					count = 3;
				};
				class xx_OPTRE_M7_Laser
				{
					name = "OPTRE_M7_Laser";
					count = 3;
				};
				class xx_OPTRE_SRS99_Scope
				{
					name = "OPTRE_SRS99_Scope";
					count = 1;
				};
				class xx_OPTRE_SRS99_Laser
				{
					name = "OPTRE_SRS99_Laser";
					count = 1;
				};
				class xx_OPTRE_SRS99_Bipod
				{
					name = "OPTRE_SRS99_Bipod";
					count = 1;
				};
			};
	};
	class OPTRE_INS_Cache_Empty: OPTRE_INS_Cache_Open
	{
		vehicleClass = "OPTRE_INS_Ammo_class";
		displayName = "[INS] Weapons Cache (Empty)";
		model = "\OPTRE_misc\crates\ins_cache.p3d";
		author = "Article 2 Studios";
		transportMaxWeapons = 50;
		transportMaxMagazines = 1000;
		maximumLoad = 500000;
		transportMaxBackpacks = 5;
		transportAmmo = 1;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 2.5;
		armor = 500;
			class TransportMagazines
			{};
			class TransportWeapons
			{};
			class TransportItems
			{};
	};
	class OPTRE_Ammo_Rack_Ammo: OPTRE_Ammo_Rack_Weapons
	{
		displayName = "[UNSC] Ammunition Rack";
		hiddenSelections[] = {};
		model = "\OPTRE_misc\crates\ammocrate.p3d";
		author = "Article 2 Studios";
		transportMaxWeapons = 10;
		transportMaxMagazines = 5000;
			class TransportMagazines
			{
				class xx_OPTRE_60Rnd_762x51_Mag
				{
					magazine = "OPTRE_60Rnd_762x51_Mag";
					count = 250;
				};
				class xx_OPTRE_60Rnd_762x51_Mag_Tracer
				{
					magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
					count = 50;
				};
				class xx_OPTRE_32Rnd_762x51_Mag
				{
					magazine = "OPTRE_32Rnd_762x51_Mag";
					count = 100;
				};
				class xx_OPTRE_32Rnd_762x51_Mag_Tracer
				{
					magazine = "OPTRE_32Rnd_762x51_Mag_Tracer";
					count = 50;
				};
				class xx_OPTRE_15Rnd_762x51_Mag
				{
					magazine = "OPTRE_15Rnd_762x51_Mag";
					count = 50;
				};
				class xx_OPTRE_36Rnd_95x40_Mag
				{
					magazine = "OPTRE_36Rnd_95x40_Mag";
					count = 50;
				};
				class xx_OPTRE_36Rnd_95x40_Mag_Tracer
				{
					magazine = "OPTRE_36Rnd_95x40_Mag_Tracer";
					count = 25;
				};
				class xx_OPTRE_100Rnd_95x40_Box
				{
					magazine = "OPTRE_100Rnd_95x40_Box";
					count = 25;
				};
				class xx_OPTRE_100Rnd_95x40_Box_Tracer
				{
					magazine = "OPTRE_100Rnd_95x40_Box_Tracer";
					count = 10;
				};
				class xx_OPTRE_200Rnd_95x40_Box
				{
					magazine = "OPTRE_200Rnd_95x40_Box";
					count = 25;
				};
				class xx_OPTRE_200Rnd_95x40_Box_Tracer
				{
					magazine = "OPTRE_200Rnd_95x40_Box_Tracer";
					count = 10;
				};
				class xx_OPTRE_8Rnd_127x40_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_Mag";
					count = 50;
				};
				class xx_OPTRE_8Rnd_127x40_AP_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_AP_Mag";
					count = 10;
				};
				class xx_OPTRE_8Rnd_127x40_Mag_Tracer
				{
					magazine = "OPTRE_8Rnd_127x40_Mag_Tracer";
					count = 25;
				};
				class xx_OPTRE_6Rnd_8Gauge_Pellets
				{
					magazine = "OPTRE_6Rnd_8Gauge_Pellets";
					count = 50;
				};
				class xx_OPTRE_6Rnd_8Gauge_Slugs
				{
					magazine = "OPTRE_6Rnd_8Gauge_Slugs";
					count = 50;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag";
					count = 50;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag_tracer
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag_tracer";
					count = 25;
				};
				class xx_OPTRE_48Rnd_5x23mm_Mag
				{
					magazine = "OPTRE_48Rnd_5x23mm_Mag";
					count = 25;
				};
				class xx_OPTRE_48Rnd_5x23mm_JHP_Mag
				{
					magazine = "OPTRE_48Rnd_5x23mm_JHP_Mag";
					count = 25;
				};
				class xx_OPTRE_48Rnd_5x23mm_FMJ_Mag
				{
					magazine = "OPTRE_48Rnd_5x23mm_FMJ_Mag";
					count = 25;
				};
				class xx_OPTRE_48Rnd_5x23mm_Mag_tracer
				{
					magazine = "OPTRE_48Rnd_5x23mm_Mag_tracer";
					count = 25;
				};
				class xx_OPTRE_4Rnd_145x114_APFSDS_Mag
				{
					magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
					count = 25;
				};
				class xx_OPTRE_4Rnd_145x114_HVAP_Mag
				{
					magazine = "OPTRE_4Rnd_145x114_HVAP_Mag";
					count = 10;
				};
				class xx_OPTRE_4Rnd_145x114_HEDP_Mag
				{
					magazine = "OPTRE_4Rnd_145x114_HEDP_Mag";
					count = 10;
				};
				class xx_OPTRE_M41_Twin_HEAT
				{
					magazine = "OPTRE_M41_Twin_HEAT";
					count = 10;
				};
				class xx_OPTRE_M41_Twin_HEAT_G
				{
					magazine = "OPTRE_M41_Twin_HEAT_G";
					count = 5;
				};
				class xx_OPTRE_M41_Twin_HEAP
				{
					magazine = "OPTRE_M41_Twin_HEAP";
					count = 10;
				};
				class xx_OPTRE_M9_Frag
				{
					magazine = "OPTRE_M9_Frag";
					count = 50;
				};
				class xx_OPTRE_M2_Smoke
				{
					magazine = "OPTRE_M2_Smoke";
					count = 50;
				};
				class xx_OPTRE_M2_Smoke_Blue
				{
					magazine = "OPTRE_M2_Smoke_Blue";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke_Yellow
				{
					magazine = "OPTRE_M2_Smoke_Yellow";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke_Red
				{
					magazine = "OPTRE_M2_Smoke_Red";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke_Green
				{
					magazine = "OPTRE_M2_Smoke_Green";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke_Orange
				{
					magazine = "OPTRE_M2_Smoke_Orange";
					count = 25;
				};
				class xx_OPTRE_M2_Smoke_Purple
				{
					magazine = "OPTRE_M2_Smoke_Purple";
					count = 25;
				};
			};
			class TransportWeapons
			{
				class xx_OPTRE_MA5B_AC
				{
					weapon = "OPTRE_MA5B_AC";
					count = 5;
				};
			};
			class TransportItems
			{
				class xx_OPTRE_Biofoam
				{
					name = "OPTRE_Biofoam";
					count = 10;
				};
			};
	};
	class OPTRE_Ammo_SupplyPod_Empty: OPTRE_Ammo_Rack_Weapons
	{
		displayName = "[UNSC] Supply Pod (Empty)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 2;
		transportMaxMagazines = 20;
		maximumLoad = 1000;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.5;
		armor = 10000;
		class TransportMagazines
		{};
		class TransportWeapons
		{};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_AR: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (MA5B)";
		hiddenSelections[] = {"camo1","camo2","attach_BRs","attach_LMGs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		author = "Article 2 Studios";
		class TransportMagazines
		{
			class xx_OPTRE_60Rnd_762x51_Mag
			{
				magazine = "OPTRE_60Rnd_762x51_Mag";
				count = 10;
			};
			class xx_OPTRE_60Rnd_762x51_Mag_tracer
			{
				magazine = "OPTRE_60Rnd_762x51_Mag_tracer";
				count = 5;
			};
			class xx_OPTRE_32Rnd_762x51_Mag
			{
				magazine = "OPTRE_60Rnd_762x51_Mag";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_MA5B_AC
			{
				weapon = "OPTRE_MA5B_AC";
				count = 1;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_BR: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (BR55)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{
			class xx_OPTRE_36Rnd_95x40_Mag
			{
				magazine = "OPTRE_36Rnd_95x40_Mag";
				count = 15;
			};
			class xx_OPTRE_36Rnd_95x40_Mag_tracer
			{
				magazine = "OPTRE_36Rnd_95x40_Mag_tracer";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_BR55HB_ScopedRifle
			{
				weapon = "OPTRE_BR55HB_ScopedRifle";
				count = 1;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_DMR: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (M392)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{
			class xx_OPTRE_15Rnd_762x51_Mag
			{
				magazine = "OPTRE_15Rnd_762x51_Mag";
				count = 25;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M392_DMR_ScopedRifle
			{
				weapon = "OPTRE_M392_DMR_ScopedRifle";
				count = 1;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_Launcher: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (M41)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{
			class xx_OPTRE_M41_Twin_HEAT
			{
				magazine = "OPTRE_M41_Twin_HEAT";
				count = 6;
			};
			class xx_OPTRE_M41_Twin_HEAP
			{
				magazine = "OPTRE_M41_Twin_HEAP";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M41_SSR
			{
				weapon = "OPTRE_M41_SSR";
				count = 1;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_LMG: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (M73)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_Launcher","attach_BRs","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{
			class xx_OPTRE_200Rnd_95x40_Box
			{
				magazine = "OPTRE_200Rnd_95x40_Box";
				count = 5;
			};
			class xx_OPTRE_200Rnd_95x40_Box_tracer
			{
				magazine = "OPTRE_200Rnd_95x40_Box_tracer";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M73
			{
				weapon = "OPTRE_M73";
				count = 1;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_Medical: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (Medical)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{};
		class TransportWeapons
		{};
		class TransportItems
		{
			class xx_OPTRE_Biofoam
			{
				name = "OPTRE_Biofoam";
				count = 10;
			};
			class xx_OPTRE_MedKit
			{
				name = "OPTRE_MedKit";
				count = 1;
			};
		};
	};
	class OPTRE_Ammo_SupplyPod_Pistol: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (M6G)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Shotguns","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{
			class xx_OPTRE_8Rnd_127x40_Mag
			{
				magazine = "OPTRE_8Rnd_127x40_Mag";
				count = 16;
			};
			class xx_OPTRE_8Rnd_127x40_Mag_tracer
			{
				magazine = "OPTRE_8Rnd_127x40_Mag_tracer";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M6G_SF
			{
				weapon = "OPTRE_M6G_SF";
				count = 2;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_Shotgun: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (M45)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_SMGs","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{
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
		};
		class TransportWeapons
		{
			class xx_OPTRE_M45
			{
				weapon = "OPTRE_M45";
				count = 1;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_SMG: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (M7)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_Snipers"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{
			class xx_OPTRE_60Rnd_5x23mm_Mag
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag";
				count = 15;
			};
			class xx_OPTRE_60Rnd_5x23mm_Mag_tracer
			{
				magazine = "OPTRE_60Rnd_5x23mm_Mag_tracer";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M7
			{
				weapon = "OPTRE_M7";
				count = 1;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SupplyPod_Sniper: OPTRE_Ammo_SupplyPod_Empty
	{
		displayName = "[UNSC] Supply Pod (SRS99D)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs"};
		hiddenSelectionsTextures[] = {"optre_misc\crates\data\resupplypod_co.paa","optre_misc\crates\data\resupplypod_co.paa"};
		model = "\OPTRE_misc\crates\Supply_pod.p3d";
		author = "Article 2 Studios";
		class TransportMagazines
		{
			class xx_OPTRE_4Rnd_145x114_APFSDS_Mag
			{
				magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
				count = 12;
			};
			class xx_OPTRE_4Rnd_145x114_HVAP_Mag
			{
				magazine = "OPTRE_4Rnd_145x114_HVAP_Mag";
				count = 4;
			};
			class xx_OPTRE_4Rnd_145x114_HEDP_Mag
			{
				magazine = "OPTRE_4Rnd_145x114_HEDP_Mag";
				count = 4;
			};
		};
		class TransportWeapons
		{
			class xx_OPTRE_SRS99D_SC_LS
			{
				weapon = "OPTRE_SRS99D_SC_LS";
				count = 1;
			};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_Empty: OPTRE_Ammo_SupplyPod_Empty
	{
		vehicleClass = "OPTRE_INS_Ammo_class";
		displayName = "[INS] Small Buried Cache (Empty)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		model = "\OPTRE_misc\crates\ins_cache_small.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 3;
		transportMaxMagazines = 40;
		maximumLoad = 1000;
		transportMaxBackpacks = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.5;
		armor = 10000;
		class TransportMagazines
		{};
		class TransportWeapons
		{};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_AR: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (Rifles)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class TransportMagazines
		{
			class xx_OPTRE_60Rnd_762x51_Mag
				{
					magazine = "OPTRE_60Rnd_762x51_Mag";
					count = 9;
				};
			class xx_OPTRE_M9_Frag
				{
					magazine = "OPTRE_M9_Frag";
					count = 2;
				};
		};
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
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_CQB: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (CQB)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxWeapons = 5;
		class TransportMagazines
		{
			class xx_OPTRE_6Rnd_8Gauge_Pellets
				{
					magazine = "OPTRE_6Rnd_8Gauge_Pellets";
					count = 8;
				};
				class xx_OPTRE_6Rnd_8Gauge_Slugs
				{
					magazine = "OPTRE_6Rnd_8Gauge_Slugs";
					count = 5;
				};
				class xx_OPTRE_8Rnd_127x40_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_Mag";
					count = 8;
				};
				class xx_OPTRE_8Rnd_127x40_AP_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_AP_Mag";
					count = 3;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag";
					count = 10;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag_tracer
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag_tracer";
					count = 4;
				};
				class xx_OPTRE_M9_Frag
				{
					magazine = "OPTRE_M9_Frag";
					count = 2;
				};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M6G
				{
					weapon = "OPTRE_M6G";
					count = 2;
				};
			class xx_OPTRE_M7
				{
					weapon = "OPTRE_M7";
					count = 2;
				};
			class xx_OPTRE_M45
				{
					weapon = "OPTRE_M45";
					count = 1;
				};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_Ammo: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (Ammo)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		transportMaxMagazines = 60;
		class TransportMagazines
		{
				class xx_OPTRE_60Rnd_762x51_Mag
				{
					magazine = "OPTRE_60Rnd_762x51_Mag";
					count = 10;
				};
				class xx_OPTRE_60Rnd_762x51_Mag_Tracer
				{
					magazine = "OPTRE_60Rnd_762x51_Mag_Tracer";
					count = 2;
				};
				class xx_OPTRE_15Rnd_762x51_Mag
				{
					magazine = "OPTRE_15Rnd_762x51_Mag";
					count = 6;
				};
				class xx_OPTRE_100Rnd_95x40_Box
				{
					magazine = "OPTRE_100Rnd_95x40_Box";
					count = 3;
				};
				class xx_OPTRE_100Rnd_95x40_Box_Tracer
				{
					magazine = "OPTRE_100Rnd_95x40_Box_Tracer";
					count = 1;
				};
				class xx_OPTRE_6Rnd_8Gauge_Pellets
				{
					magazine = "OPTRE_6Rnd_8Gauge_Pellets";
					count = 7;
				};
				class xx_OPTRE_6Rnd_8Gauge_Slugs
				{
					magazine = "OPTRE_6Rnd_8Gauge_Slugs";
					count = 3;
				};
				class xx_OPTRE_60Rnd_5x23mm_Mag
				{
					magazine = "OPTRE_60Rnd_5x23mm_Mag";
					count = 10;
				};
				class xx_OPTRE_8Rnd_127x40_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_Mag";
					count = 10;
				};
				class xx_OPTRE_M9_Frag
				{
					magazine = "OPTRE_M9_Frag";
					count = 5;
				};
				class xx_OPTRE_M2_Smoke
				{
					magazine = "OPTRE_M2_Smoke";
					count = 5;
				};
		};
		class TransportWeapons
		{};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_Exp: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (Explosives)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class TransportMagazines
		{
				class xx_OPTRE_M9_Frag
				{
					magazine = "OPTRE_M9_Frag";
					count = 15;
				};
				class xx_OPTRE_M2_Smoke
				{
					magazine = "OPTRE_M2_Smoke";
					count = 5;
				};
				class _xx_SatchelCharge_Remote_Mag
				{
				magazine = "SatchelCharge_Remote_Mag";
				count = 3;
				};
				class _xx_DemoCharge_Remote_Mag
				{
				magazine = "DemoCharge_Remote_Mag";
				count = 7;
				};
		};
		class TransportWeapons
		{};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_IED: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (IEDs)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class TransportMagazines
		{
				class _xx_ATMine_Range_Mag
				{
				magazine = "ATMine_Range_Mag";
				count = 4;
				};
				class _xx_APERSMine_Range_Mag
				{
				magazine = "APERSMine_Range_Mag";
				count = 4;
				};
				class _xx_APERSBoundingMine_Range_Mag
				{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 2;
				};
				class _xx_SLAMDirectionalMine_Wire_Mag
				{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
				};
				class _xx_APERSTripMine_Wire_Mag
				{
				magazine = "APERSTripMine_Wire_Mag";
				count = 2;
				};
				class _xx_ClaymoreDirectionalMine_Remote_Mag
				{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
				};
				class _xx_SatchelCharge_Remote_Mag
				{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
				};
				class _xx_DemoCharge_Remote_Mag
				{
				magazine = "DemoCharge_Remote_Mag";
				count = 3;
				};
				class _xx_IEDUrbanBig_Remote_Mag
				{
				magazine = "IEDUrbanBig_Remote_Mag";
				count = 2;
				};
				class _xx_IEDLandBig_Remote_Mag
				{
				magazine = "IEDLandBig_Remote_Mag";
				count = 2;
				};
				class _xx_IEDUrbanSmall_Remote_Mag
				{
				magazine = "SatchelCharge_Remote_Mag";
				count = 5;
				};
				class _xx_IEDLandSmall_Remote_Mag
				{
				magazine = "DemoCharge_Remote_Mag";
				count = 5;
				};
		};
		class TransportWeapons
		{};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_AT: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (AT)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class TransportMagazines
		{
				class _xx_ATMine_Range_Mag
				{
				magazine = "ATMine_Range_Mag";
				count = 4;
				};
				class _xx_SLAMDirectionalMine_Wire_Mag
				{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
				};
				class xx_OPTRE_M41_Twin_HEAT
				{
					magazine = "OPTRE_M41_Twin_HEAT";
					count = 2;
				};
				class xx_OPTRE_M41_Twin_HEAP
				{
					magazine = "OPTRE_M41_Twin_HEAP";
					count = 1;
				};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M41_SSR
				{
					weapon = "OPTRE_M41_SSR";
					count = 1;
				};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_AA: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (AA)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class TransportMagazines
		{
				class xx_OPTRE_M41_Twin_HEAT_G
				{
					magazine = "OPTRE_M41_Twin_HEAT_G";
					count = 4;
				};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M41_SSR_G
				{
					weapon = "OPTRE_M41_SSR_G";
					count = 1;
				};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_Sniper: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (Sniper)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class TransportMagazines
		{
				class xx_OPTRE_4Rnd_145x114_APFSDS_Mag
				{
					magazine = "OPTRE_4Rnd_145x114_APFSDS_Mag";
					count = 10;
				};
				class xx_OPTRE_8Rnd_127x40_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_Mag";
					count = 5;
				};
				class xx_OPTRE_8Rnd_127x40_AP_Mag
				{
					magazine = "OPTRE_8Rnd_127x40_AP_Mag";
					count = 2;
				};
		};
		class TransportWeapons
		{
			class xx_OPTRE_M6G
				{
					weapon = "OPTRE_M6G";
					count = 1;
				};
			class xx_OPTRE_SRS99D
				{
					weapon = "OPTRE_SRS99D";
					count = 1;
				};
		};
		class TransportItems
		{};
	};
	class OPTRE_Ammo_SmallCache_Medical: OPTRE_Ammo_SmallCache_Empty
	{
		displayName = "[INS] Small Buried Cache (Medical)";
		hiddenSelections[] = {"camo1","camo2","attach_ARs","attach_LMGs","attach_BRs","attach_Launcher","attach_Meds","attach_Pistols","attach_Shotguns","attach_SMGs","attach_Snipers"};
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		class TransportMagazines
		{};
		class TransportWeapons
		{};
		class TransportItems
		{
			class xx_OPTRE_Biofoam
			{
				name = "OPTRE_Biofoam";
				count = 10;
			};
			class xx_OPTRE_MedKit
			{
				name = "OPTRE_MedKit";
				count = 1;
			};
		};
	};
};