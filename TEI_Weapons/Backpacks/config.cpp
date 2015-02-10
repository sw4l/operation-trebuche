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
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
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
};