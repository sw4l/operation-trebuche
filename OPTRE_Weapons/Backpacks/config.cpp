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
					dlc = "OPTRE";
				scope 												= 2;
				class TransportMagazines{};
				class TransportWeapons{};
				isbackpack 											= 1;
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
				transportMaxWeapons 								= 10;
				transportMaxMagazines 								= 100;
				class DestructionEffects{};
                displayName 										= "[UNSC] ILCS Rucksack [Black]";
                model 												= "\OPTRE_weapons\backpacks\ODST_ruck.p3d";
				vehicleClass 										= "OPTRE_UNSC_Backpack_class";
				allowedSlots[] 										= {901};
				maximumLoad 										= 300;
				mass 												= 40;
				hiddenSelections[] 									= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        };
        class OPTRE_S12_SOLA_Jetpack : OPTRE_ILCS_Rucksack_Black 
		{
				dlc = "OPTRE";
				scope 												= 2;
				isbackpack 											= 1;
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
				transportMaxWeapons 								= 0;
				transportMaxMagazines 								= 0;
                displayName 										= "[UNSC] S12 SOLA Jetpack";
                model 												= "\OPTRE_weapons\backpacks\jetpack.p3d";
				vehicleClass 										= "OPTRE_UNSC_Backpack_class";
				allowedSlots[] 										= {901};
				maximumLoad 										= 0;
				mass 												= 60;
		};
        class OPTRE_S12_SOLA_Jetpack_On : OPTRE_S12_SOLA_Jetpack 
		{
				dlc = "OPTRE";
				scope 												= 1;
                model 												= "\OPTRE_weapons\backpacks\jetpack_on.p3d";
				hiddenSelections[]= {"camo1"}; //Determines what hiddenselections are enabled
				hiddenSelectionsTextures[]= {""};
		};
        class OPTRE_Fury_Backpack_Nuke : OPTRE_ILCS_Rucksack_Black 
		{
				dlc = "OPTRE";
				scope 												= 2;
				isbackpack 											= 1;
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_black.paa";
				transportMaxWeapons 								= 0;
				transportMaxMagazines 								= 0;
				class DestructionEffects{};
                displayName 										= "[UNSC] Fury Portable Nuclear Device";
                model 												= "\OPTRE_weapons\backpacks\fury.p3d";
				vehicleClass 										= "OPTRE_UNSC_Backpack_class";
				allowedSlots[] 										= {901};
				maximumLoad 										= 0;
				mass 												= 100;
        };
		class OPTRE_ILCS_Rucksack_Black_Pouches : OPTRE_ILCS_Rucksack_Black
		{
					dlc = "OPTRE";
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_black_po.paa";
                displayName 										= "[UNSC] ILCS Rucksack+ [Black]";
				maximumLoad 										= 350;
				mass 												= 45;
				hiddenSelections[] 									= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_Medical : OPTRE_ILCS_Rucksack_Black_Pouches
		{
					dlc = "OPTRE";
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
                displayName 										= "[UNSC] ILCS Backpack [Medic]";
				hiddenSelections[] 									= {"camo1"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_med_CO.paa"};
        };
				
		class OPTRE_ILCS_Rucksack_green : OPTRE_ILCS_Rucksack_Black
		{
					dlc = "OPTRE";
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_green.paa";
                displayName 										= "[UNSC] ILCS Rucksack [Green]";
				hiddenSelections[] 									= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_Green_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_green_Pouches : OPTRE_ILCS_Rucksack_Black_Pouches
		{
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_green_po.paa";
                displayName 										= "[UNSC] ILCS Rucksack+ [Green]";
				hiddenSelections[] 									= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_Green_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_tan : OPTRE_ILCS_Rucksack_Black
		{
					dlc = "OPTRE";
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_tan.paa";
                displayName 										= "[UNSC] ILCS Rucksack [Tan]";
				hiddenSelections[] 									= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_tan_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_tan_Pouches : OPTRE_ILCS_Rucksack_Black_Pouches
		{
					dlc = "OPTRE";
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_tan_po.paa";
                displayName 										= "[UNSC] ILCS Rucksack+ [Tan]";
				hiddenSelections[] 									= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_tan_CO.paa"};
        };
		class OPTRE_ANPRC_515 : OPTRE_ILCS_Rucksack_Black
		{
					dlc = "OPTRE";
				picture 											= "\OPTRE_weapons\backpacks\icons\como_pack.paa";
				transportMaxWeapons 								= 1;
				transportMaxMagazines 								= 10;
                displayName 										= "[UNSC] AN/PRC-515";
				descriptionShort 									= "AN/PRC-515<br>ODST Long Range Radio<br>25km Effective Range";
                model 												= "\OPTRE_weapons\backpacks\como_ruck.p3d";
				maximumLoad 										= 100;
				mass 												= 40;
				hiddenSelections[] 									= {"camo1"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\como_pack_co.paa"};
				// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1; 
        };
		class OPTRE_ANPRC_521_Green : OPTRE_ANPRC_515
		{
					dlc = "OPTRE";
				picture 											= "\OPTRE_weapons\backpacks\icons\como_pack.paa";
				transportMaxWeapons 								= 2;
				transportMaxMagazines 								= 25;
                displayName 										= "[UNSC] AN/PRC-521 [Green]";
				descriptionShort 									= "AN/PRC-521<br>UNSC Long Range Radio<br>25km Effective Range";
                model 												= "\OPTRE_weapons\backpacks\radio_pack1.p3d";
				maximumLoad 										= 150;
				mass 												= 50;
				hiddenSelections[] 									= {"camo1"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\RadioPack1_CO.paa"};
				// TFAR Config
				tf_encryptionCode 									= "tf_west_radio_code";
				tf_dialog 											= "rt1523g_radio_dialog";
				tf_subtype 											= "digital_lr";
				tf_range 											= 25000;
				tf_dialogUpdate 									= "call TFAR_fnc_updateLRDialogToChannel;";
				tf_hasLRradio	 									= 1; 
        };
		class OPTRE_ANPRC_521_Black : OPTRE_ANPRC_521_Green
		{
					dlc = "OPTRE";
                displayName 										= "[UNSC] AN/PRC-521 [Black]";
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\RadioPack1_Black_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_Black_AT : OPTRE_ILCS_Rucksack_Black_Pouches
		{
					dlc = "OPTRE";
				scopeArsenal 										= 1;
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_black_po.paa";
                displayName 										= "[UNSC] ILCS Rucksack+ [Black + AT Rockets]";
				maximumLoad 										= 350;
				mass 												= 45;
				hiddenSelections[] 									= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
				class TransportMagazines
					{
						class OPTRE_M41_Twin_HEAT
						{
						magazine = "OPTRE_M41_Twin_HEAT";
						count = 2;
						};
					};
        };
		class OPTRE_ILCS_Rucksack_Black_EXP : OPTRE_ILCS_Rucksack_Black_Pouches
		{
					dlc = "OPTRE";
				scopeArsenal 										= 1;
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_black_po.paa";
                displayName 										= "[UNSC] ILCS Rucksack+ [Black + Explosives]";
				maximumLoad 										= 350;
				mass 												= 45;
				hiddenSelections[] 									= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
				class TransportMagazines
				{
					class _xx_APERSBoundingMine_Range_Mag
					{
					magazine = "APERSBoundingMine_Range_Mag";
					count = 2;
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
					count = 3;
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
		class OPTRE_kitbag_rgr_AT : B_Kitbag_rgr {
			displayname = "[UNSC] AT Rocket Pack";
			scopeArsenal 										= 1;
			class TransportMagazines
				{
					class OPTRE_M41_Twin_HEAT
					{
					magazine = "OPTRE_M41_Twin_HEAT";
					count = 2;
					};
				};
		};
		class OPTRE_kitbag_rgr_AA : B_Kitbag_rgr {
			displayname = "[UNSC] AA Rocket Pack";
			scopeArsenal 										= 1;
			class TransportMagazines
			{
				class OPTRE_M41_Twin_HEAT
				{
					magazine = "OPTRE_M41_Twin_HEAT_G";
					count = 2;
				};
			};
		};
		class OPTRE_kitbag_rgr_EXP : B_Kitbag_rgr {
		displayname = "[UNSC] Demolitions Pack";
		scopeArsenal 										= 1;
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
		class OPTRE_kitbag_rgr_ENG : B_Kitbag_rgr {
		displayname = "[UNSC] Engineer Pack";
		scopeArsenal 										= 1;
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