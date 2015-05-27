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
		class OPTRE_ILCS_Rucksack_Black_Pouches : OPTRE_ILCS_Rucksack_Black
		{
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_black_po.paa";
                displayName 										= "[UNSC] ILCS Rucksack+ [Black]";
				maximumLoad 										= 350;
				mass 												= 45;
				hiddenSelections[] 									= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_Medical : OPTRE_ILCS_Rucksack_Black_Pouches
		{
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_med.paa";
                displayName 										= "[UNSC] ILCS Backpack [Medic]";
				hiddenSelections[] 									= {"camo1"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_med_CO.paa"};
        };
				
		class OPTRE_ILCS_Rucksack_green : OPTRE_ILCS_Rucksack_Black
		{
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
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_tan.paa";
                displayName 										= "[UNSC] ILCS Rucksack [Tan]";
				hiddenSelections[] 									= {"camo1","pouches","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_tan_CO.paa"};
        };
		class OPTRE_ILCS_Rucksack_tan_Pouches : OPTRE_ILCS_Rucksack_Black_Pouches
		{
				picture 											= "\OPTRE_weapons\backpacks\icons\rucksack_tan_po.paa";
                displayName 										= "[UNSC] ILCS Rucksack+ [Tan]";
				hiddenSelections[] 									= {"camo1","biofoam"};
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\ruck_tan_CO.paa"};
        };
		class OPTRE_ANPRC_515 : OPTRE_ILCS_Rucksack_Black
		{
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
		class OPTRE_ANPRC_521_Tan : OPTRE_ANPRC_521_Green
		{
                displayName 										= "[UNSC] AN/PRC-521 [Tan]";
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\RadioPack1_tan_CO.paa"};
        };
		class OPTRE_ANPRC_521_Black : OPTRE_ANPRC_521_Green
		{
                displayName 										= "[UNSC] AN/PRC-521 [Black]";
				hiddenSelectionsTextures[] 							= {"OPTRE_Weapons\Backpacks\data\RadioPack1_Black_CO.paa"};
        };
	};