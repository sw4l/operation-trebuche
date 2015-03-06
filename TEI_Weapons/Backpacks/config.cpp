#define private         0
#define protected               1
#define public          2
 
#define true    1
#define false   0
 
class CfgPatches {
        class TEI_Weapons_Backpacks {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
				requiredAddons[] = { "A3_Weapons_F", "TEI_Core" };
				author = "Eridanus Insurrection Team";
        };
};
 
class cfgVehicles {
		class ContainerSupply;
		class Bag_Base;
		class B_AssaultPack_rgr_Medic;
        class B_Bergen_Base;    // External class reference
        	       
        class TEI_ILCS_Rucksack_Black : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 13;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack (Black)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_black_CO.paa"};
        };
		class TEI_ILCS_Rucksack_Black2 : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack+ (Black)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_black_CO.paa"};
        };
		class TEI_ILCS_Rucksack_Medical : B_Bergen_Base 
		{
				scope = protected;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Medical Base";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_med_CO.paa"};
        };
		
		class TEI_ILCS_Rucksack_Medical1: B_AssaultPack_rgr_Medic
		{
				scope = public;
				
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack+ (Medical)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_med_CO.paa"};
				class TransportMagazines{};
				class TransportWeapons{};
				class TransportItems
				{
					class _xx_TEI_Medkit
					{
					name = "TEI_Medkit";
					count = 1;
					};
					class _xx_TEI_Biofoam
					{
					name = "TEI_Biofoam";
					count = 10;
					};
				};
		};
				
		        class TEI_ILCS_Rucksack_green : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 13;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack (Green)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_Green_CO.paa"};
        };
		class TEI_ILCS_Rucksack_green2 : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack+ (Green)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_Green_CO.paa"};
        };
		class TEI_ILCS_Rucksack_tan : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 13;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack (Tan)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_tan_CO.paa"};
        };
		class TEI_ILCS_Rucksack_tan2 : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack+ (Tan)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_tan_CO.paa"};
        };
		class TEI_Como_pack_1 : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				transportMaxWeapons = 1;
				transportMaxMagazines = 4;
				class DestructionEffects{};
                		displayName = "[UNSC] Communications Pack";
                		model = "\TEI_weapons\backpacks\como_ruck.p3d";
				vehicleClass = "Backpacks";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\como_pack_co.paa"};
        };
		class TEI_Kitbag_COLOR_Rockets: B_Carryall_oli
		{
			scope = 1;
			class TransportMagazines
			{
				class TEI_M41_Twin_HEAT
				{
				magazine = "TEI_M41_Twin_HEAT";
				count = 1;
				};
				class TEI_M41_Twin_HEAT_G
				{
				magazine = "TEI_M41_Twin_HEAT_G";
				count = 2;
				};
			};
			class TransportItems
			{
				class _xx_ToolKit
				{
				};
				class _xx_MineDetector
				{
				};
			};
		};.

};