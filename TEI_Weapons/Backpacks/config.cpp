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
		class B_Kitbag_cbr;
		class B_Kitbag_rgr;
        	       
        class TEI_ILCS_Rucksack_Black : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				picture = "\TEI_weapons\backpacks\icons\rucksack_black.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 13;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack (Black)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
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
				picture = "\TEI_weapons\backpacks\icons\rucksack_black_po.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack+ (Black)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_black_CO.paa"};
        };
		class TEI_ILCS_Rucksack_Medical : B_Bergen_Base 
		{
				scope = 2;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				picture = "\TEI_weapons\backpacks\icons\rucksack_med.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Medical Backpack";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
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
				picture = "\TEI_weapons\backpacks\icons\rucksack_green.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 13;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack (Green)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
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
				picture = "\TEI_weapons\backpacks\icons\rucksack_green_po.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack+ (Green)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
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
				picture = "\TEI_weapons\backpacks\icons\rucksack_tan.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 13;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack (Tan)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
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
				picture = "\TEI_weapons\backpacks\icons\rucksack_tan_po.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 16;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack+ (Tan)";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
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
				picture = "\TEI_weapons\backpacks\icons\como_pack.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 4;
				class DestructionEffects{};
                		displayName = "[UNSC] Communications Pack";
                		model = "\TEI_weapons\backpacks\como_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\como_pack_co.paa"};
        };
		class TEI_Kitbag_cbr_Rockets: B_Kitbag_cbr
		{
			scope = 1;
			
			class TransportMagazines
			{
				class TEI_M41_Twin_HEAT
				{
				magazine = "TEI_M41_Twin_HEAT";
				count = 1;
				};
				/*class TEI_M41_Twin_HEAT_G
				{
				magazine = "TEI_M41_Twin_HEAT_G";
				count = 2;
				};*/
			};
			/*class TransportItems
			{
				class _xx_ToolKit
				{
				};
				class _xx_MineDetector
				{
				};
			};*/
		};
		class TEI_Kitbag_rgr_Rockets: B_Kitbag_rgr
		{
			scope = 1;
			vehicleClass = "TEI_UNSC_Backpack_class";
			class TransportMagazines
			{
				class TEI_M41_Twin_HEAT
				{
				magazine = "TEI_M41_Twin_HEAT";
				count = 2;
				};
				/*class TEI_M41_Twin_HEAT_G
				{
				magazine = "TEI_M41_Twin_HEAT_G";
				count = 2;
				};*/
			};
			/*class TransportItems
			{
				class _xx_ToolKit
				{
				};
				class _xx_MineDetector
				{
				};
			};*/
		};
		class TEI_ILCS_Black_Rockets: TEI_ILCS_Rucksack_Black2
		{
			vehicleClass = "TEI_UNSC_Backpack_class";
			scope = 1;
			class TransportMagazines
			{
				class TEI_M41_Twin_HEAT
				{
				magazine = "TEI_M41_Twin_HEAT";
				count = 1;
				};
				/*class TEI_M41_Twin_HEAT_G
				{
				magazine = "TEI_M41_Twin_HEAT_G";
				count = 2;
				};*/
			};
			/*class TransportItems
			{
				class _xx_ToolKit
				{
				};
				class _xx_MineDetector
				{
				};
			};*/
		};
		class TEI_ILCS_Rucksack_Medical1: B_AssaultPack_rgr_Medic
		{
				scope = 1;
                displayName = "[UNSC] ILCS Medical Backpack";
                model = "\TEI_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "TEI_UNSC_Backpack_class";
				picture = "\TEI_Weapons\Backpacks\icons\rucksack_med.paa";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1"};
				hiddenSelectionsTextures[] 							= {"TEI_Weapons\Backpacks\data\ruck_med_CO.paa"};
				class TransportMagazines{};
				class TransportWeapons{};
				class TransportItems
				{
					class _xx_TEI_MedKit
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
		
		class TEI_Kitbag_rgr_Exp: B_Kitbag_rgr
		{
			scope = 1;
			class TransportMagazines
			{
				class _xx_APERSBoundingMine_Range_Mag
				{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
				};
				class _xx_ClaymoreDirectionalMine_Remote_Mag
				{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
				};
				class _xx_SLAMDirectionalMine_Wire_Mag
				{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
				};
				class _xx_DemoCharge_Remote_Mag
				{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
				};
			};
			class TransportItems
			{
				class _xx_ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
				class _xx_MineDetector
				{
					name = "MineDetector";
					count = 1;
				};
			};
		};
		class TEI_Kitbag_cbr_Exp: B_Kitbag_cbr
		{
			scope = 1;
			class TransportMagazines
			{
				class _xx_APERSBoundingMine_Range_Mag
				{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
				};
				class _xx_ClaymoreDirectionalMine_Remote_Mag
				{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
				};
				class _xx_SLAMDirectionalMine_Wire_Mag
				{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
				};
				class _xx_DemoCharge_Remote_Mag
				{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
				};
			};
			class TransportItems
			{
				class _xx_ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
				class _xx_MineDetector
				{
					name = "MineDetector";
					count = 1;
				};
			};
		};
		class TEI_ILCS_Black_Exp: TEI_ILCS_Rucksack_Black2
		{
			scope = 1;
			class TransportMagazines
			{
				class _xx_APERSBoundingMine_Range_Mag
				{
				magazine = "APERSBoundingMine_Range_Mag";
				count = 3;
				};
				class _xx_ClaymoreDirectionalMine_Remote_Mag
				{
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
				};
				class _xx_SLAMDirectionalMine_Wire_Mag
				{
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
				};
				class _xx_DemoCharge_Remote_Mag
				{
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
				};
			};
			class TransportItems
			{
				class _xx_ToolKit
				{
					name = "ToolKit";
					count = 1;
				};
				class _xx_MineDetector
				{
					name = "MineDetector";
					count = 1;
				};
			};
		};
};