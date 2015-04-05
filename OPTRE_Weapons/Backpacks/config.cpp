#define private         0
#define protected               1
#define public          2
 
#define true    1
#define false   0
 
class CfgPatches {
        class OPTRE_Weapons_Backpacks {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
				requiredAddons[] = { "A3_Weapons_F", "OPTRE_Core" };
				author = "Article 2 Studios";
        };
};
 
class cfgVehicles 
	{
		class ContainerSupply;
		class Bag_Base;
		class B_AssaultPack_rgr_Medic;
        class B_Bergen_Base;    // External class reference
		class B_Kitbag_cbr;
		class B_Kitbag_rgr;
        	       
        class OPTRE_ILCS_Rucksack_Black : B_Bergen_Base 
		{
				scope = public;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				picture = "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
				transportMaxWeapons = 5;
				transportMaxMagazines = 50;
				class DestructionEffects{};
                displayName = "[UNSC] ILCS Rucksack (Black)";
                model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "OPTRE_UNSC_Backpack_class";
				allowedSlots[] = {901};
				maximumLoad = 300;
				mass = 40;
				hiddenSelections[] 								= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_Black2 : OPTRE_ILCS_Rucksack_Black
		{
				picture = "\OPTRE_weapons\backpacks\icons\rucksack_black_po.paa";
                displayName = "[UNSC] ILCS Rucksack+ (Black)";
				maximumLoad = 350;
				mass = 45;
				hiddenSelections[] 								= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_Medical : OPTRE_ILCS_Rucksack_Black 
		{
				picture = "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
                displayName = "[UNSC] ILCS Medical Backpack";
				maximumLoad = 360;
				mass = 50;
				hiddenSelections[] 								= {"camo1"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_med_CO.paa"};
        };
				
		class OPTRE_ILCS_Rucksack_green : OPTRE_ILCS_Rucksack_Black
		{
				picture = "\OPTRE_weapons\backpacks\icons\rucksack_green.paa";
                displayName = "[UNSC] ILCS Rucksack (Green)";
				hiddenSelections[] 								= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_Green_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_green2 : OPTRE_ILCS_Rucksack_Black2 
		{
				picture = "\OPTRE_weapons\backpacks\icons\rucksack_green_po.paa";
                displayName = "[UNSC] ILCS Rucksack+ (Green)";
				hiddenSelections[] 								= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_Green_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_tan : OPTRE_ILCS_Rucksack_Black
		{
				picture = "\OPTRE_weapons\backpacks\icons\rucksack_tan.paa";
                displayName = "[UNSC] ILCS Rucksack (Tan)";
				hiddenSelections[] 								= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_tan_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_tan2 : OPTRE_ILCS_Rucksack_Black2
		{
				picture = "\OPTRE_weapons\backpacks\icons\rucksack_tan_po.paa";
                displayName = "[UNSC] ILCS Rucksack+ (Tan)";
				hiddenSelections[] 								= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_tan_CO.paa"};
        };
		class OPTRE_Como_pack_1 : B_Bergen_Base 
		{
				scope = 2;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				picture = "\OPTRE_weapons\backpacks\icons\como_pack.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 10;
				class DestructionEffects{};
                displayName = "[UNSC] AN/PRC-515";
				descriptionShort = "UNSC/PRC-515 ODST long range radio 25km";
                model = "\OPTRE_weapons\backpacks\como_ruck.p3d";
				maximumLoad = 120;
				mass = 25;
				vehicleClass = "OPTRE_UNSC_Backpack_class";
				allowedSlots[] = {901};
				tf_encryptionCode = "tf_west_radio_code";
				tf_dialog = "rt1523g_radio_dialog";
				tf_subtype = "digital_lr";
				tf_range = 25000;
				tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio = 1; 
				hiddenSelections[] 								= {"camo1"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\como_pack_co.paa"};
        };
		
		
		class OPTRE_Kitbag_cbr_Rockets: B_Kitbag_cbr
		{
			scope = 1;
			
			class TransportMagazines
			{
				class OPTRE_M41_Twin_HEAT
				{
				magazine = "OPTRE_M41_Twin_HEAT";
				count = 1;
				};
				/*class OPTRE_M41_Twin_HEAT_G
				{
				magazine = "OPTRE_M41_Twin_HEAT_G";
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
		class OPTRE_Kitbag_rgr_Rockets: B_Kitbag_rgr
		{
			scope = 1;
			vehicleClass = "OPTRE_UNSC_Backpack_class";
			class TransportMagazines
			{
				class OPTRE_M41_Twin_HEAT
				{
				magazine = "OPTRE_M41_Twin_HEAT";
				count = 2;
				};
				/*class OPTRE_M41_Twin_HEAT_G
				{
				magazine = "OPTRE_M41_Twin_HEAT_G";
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
		class OPTRE_ILCS_Black_Rockets: OPTRE_ILCS_Rucksack_Black2
		{
			vehicleClass = "OPTRE_UNSC_Backpack_class";
			scope = 1;
			class TransportMagazines
			{
				class OPTRE_M41_Twin_HEAT
				{
				magazine = "OPTRE_M41_Twin_HEAT";
				count = 1;
				};
				/*class OPTRE_M41_Twin_HEAT_G
				{
				magazine = "OPTRE_M41_Twin_HEAT_G";
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
		class OPTRE_ILCS_Rucksack_Medical1: B_AssaultPack_rgr_Medic
		{
				scope = 1;
                displayName = "[UNSC] ILCS Medical Backpack";
                model = "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass = "OPTRE_UNSC_Backpack_class";
				picture = "\OPTRE_Weapons\Backpacks\icons\rucksack_med.paa";
				allowedSlots[] = {901};
				hiddenSelections[] 								= {"camo1"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_med_CO.paa"};
				class TransportMagazines{};
				class TransportWeapons{};
				class TransportItems
				{
					class _xx_OPTRE_MedKit
					{
					name = "OPTRE_Medkit";
					count = 1;
					};
					class _xx_OPTRE_Biofoam
					{
					name = "OPTRE_Biofoam";
					count = 10;
					};
				};
		};
		
		class OPTRE_Kitbag_rgr_Exp: B_Kitbag_rgr
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
		class OPTRE_Kitbag_cbr_Exp: B_Kitbag_cbr
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
		class OPTRE_ILCS_Black_Exp: OPTRE_ILCS_Rucksack_Black2
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
		class OPTRE_Radio_pack_521 : B_Bergen_Base
		{
				scope = 2;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack = 1;
				picture = "\OPTRE_weapons\backpacks\icons\como_pack.paa";
				transportMaxWeapons = 1;
				transportMaxMagazines = 10;
				class DestructionEffects{};
                displayName = "[UNSC] AN/PRC-521";
				descriptionShort = "AN/PRC-521 long range radio 50km";
                model = "\OPTRE_weapons\backpacks\radio_pack1.p3d";
				maximumLoad = 120;
				mass = 25;
				vehicleClass = "OPTRE_UNSC_Backpack_class";
				allowedSlots[] = {901};
				tf_encryptionCode = "tf_west_radio_code";
				tf_dialog = "rt1523g_radio_dialog";
				tf_subtype = "digital_lr";
				tf_range = 50000;
				tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio = 1; 
				hiddenSelections[] 	= {"camo1"};
				hiddenSelectionsTextures[] = {"OPTRE_Weapons\Backpacks\data\RadioPack1_CO.paa"};
        };
	};