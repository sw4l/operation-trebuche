class CfgPatches
{
	class optre_UNSC_naval_units
	{
		requiredaddons[] = {"OPTRE_Core","A3_Weapons_F"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};
class CfgVehicles
{
	class B_Helipilot_F;
	class OPTRE_UNSC_Navy_Base_F : B_Helipilot_F {
        _generalMacro = "B_Soldier_F"; 
        scope = 0;
		author	= "Article 2 Studios";
        displayName = "UNSC_Crewman_Base";
        uniformAccessories[] = {};
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GEN";
		faction = "OPTRE_UNSC";	
		vehicleClass = "OPTRE_UNSC_Man_Navy_class";		
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_gen.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Crew_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Crewman";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GEN";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_gen.paa"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Crew_Armed_F: OPTRE_UNSC_Navy_Crew_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Crewman (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GEN";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Bridge_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Bridge Crew";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GRY";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_gry.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Bridge2_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Bridge Officer";
		icon = "iconManOfficer";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GRY2";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_gry2.paa"};
		linkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Bridge_Armed_F: OPTRE_UNSC_Navy_Bridge_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Bridge Crew (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GRY";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Bridge2_Armed_F: OPTRE_UNSC_Navy_Bridge2_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Bridge Officer (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GRY2";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_ONI_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "ONI Officer";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_ONI";
		icon = "iconManOfficer";		
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_ONI.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_ONI2_F: OPTRE_UNSC_Navy_Base_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Classified";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_ONI2";	
		icon = "iconManOfficer";
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_oni2.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Fire_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Firefighter";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_RED";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_red.paa"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Fire2_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Firefighter";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_RED";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_red.paa"};
		linkedItems[] = {"OPTRE_UNSC_Marine_helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_UNSC_Marine_helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    };
	class OPTRE_UNSC_Navy_Security_F: OPTRE_UNSC_Navy_Fire_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Security";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_RED";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_SecurityLT_F: OPTRE_UNSC_Navy_Security_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Security (Light)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_RED";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_UNSC_Marine_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_UNSC_Marine_helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_SecurityMD_F: OPTRE_UNSC_Navy_Security_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Security (SMG)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_RED";	
		weapons[] = {"OPTRE_M7","Throw","Put"};
		magazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
		respawnweapons[] = {"OPTRE_M7","Throw","Put"};
		respawnmagazines[] = {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag"};
		linkedItems[] = {"OPTRE_UNSC_Marine_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_UNSC_Marine_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_SecuritySG_F: OPTRE_UNSC_Navy_Security_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Security (Shotgun)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_RED";
		weapons[] = {"OPTRE_M45","Throw","Put"};
		magazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnweapons[] = {"OPTRE_M45","Throw","Put"};
		respawnmagazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","OPTRE_UNSC_Marine_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","OPTRE_UNSC_Marine_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_SecurityHVY_F: OPTRE_UNSC_Navy_Security_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Security (Heavy)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_RED";	
		weapons[] = {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		respawnweapons[] = {"OPTRE_MA5B_AC","Throw","Put"};
		respawnmagazines[] = {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag"};
		linkedItems[] = {"OPTRE_UNSC_Marine_helmet","OPTRE_UNSC_Marine_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_UNSC_Marine_helmet","OPTRE_UNSC_Marine_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Engineer_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Engineering Crew";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_ORN";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_orn.paa"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Engineer_Armed_F: OPTRE_UNSC_Navy_Engineer_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Engineering Crew (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_ORN";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Ops_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Operations Crew";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_YLW";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_ylw.paa"};
		linkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Ops_Armed_F: OPTRE_UNSC_Navy_Ops_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Operations Crew (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_YLW";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Gunner_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Fire Controlman";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GRN";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_grn.paa"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Gunner_Armed_F: OPTRE_UNSC_Navy_Gunner_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Fire Controlman (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GRN";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_AITech_F: OPTRE_UNSC_Navy_Base_F {
        scope = 0;
		author	= "Article 2 Studios";
        displayName = "AI Technician";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_CYN";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_cyn.paa"};
		linkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Tech_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Technician";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_BLU";	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_blu.paa"};
		linkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Tech_Armed_F: OPTRE_UNSC_Navy_Tech_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Technician (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_BLU";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Mech_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Flight Mechanic";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_PRP";
		engineer = 1;
		icon = "iconManEngineer";
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_prp.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Mech_Armed_F: OPTRE_UNSC_Navy_Mech_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Flight Mechanic (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_PRP";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Final_Dawn_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Ordinance_F: OPTRE_UNSC_Navy_Base_F {
        scope = 0;
		author	= "Article 2 Studios";
        displayName = "Flight Loader";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_BRN";
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_BRN.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Ordinance_Armed_F: OPTRE_UNSC_Navy_Ordinance_F { 
        scope = 0;
		author	= "Article 2 Studios";
        displayName = "Flight Loader (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_BRN";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Medical_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Fleet Corpsman";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_WHT";
		attendant = 1;
		icon = "iconManMedic";		
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_wht.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Medical_Armed_F: OPTRE_UNSC_Navy_Medical_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Fleet Corpsman (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_WHT";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_CB_F: OPTRE_UNSC_Navy_Base_F {
        scope = 0;
		author	= "Article 2 Studios";
        displayName = "Naval Engineer";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_CB";
		engineer = 1;		
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_cb.paa"};
		linkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Navy_Cap","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Pilot_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Pilot";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_PLT";
		attendant = 1;	
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_plt.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Pilot_Armed_F: OPTRE_UNSC_Navy_Pilot_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Pilot (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_PLT";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_UNSC_Marine_helmet_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] = {"OPTRE_UNSC_Marine_helmet_vacuum","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    }; 
	class OPTRE_UNSC_Navy_Pilot_Combat_F: OPTRE_UNSC_Navy_Pilot_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Combat Pilot";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_PLT";	
		weapons[] 										= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 								= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] = {"OPTRE_UNSC_Marine_helmet_vacuum","OPTRE_UNSC_Marine_Vest_vacuum","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] = {"OPTRE_UNSC_Marine_helmet_vacuum","OPTRE_UNSC_Marine_Vest_vacuum","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
    }; 
	class OPTRE_UNSC_Navy_Scientist_F: OPTRE_UNSC_Navy_Base_F {
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Scientist";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_SCI";
		weapons[]={"Throw","Put"};
		magazines[]={};
		respawnweapons[]={"Throw","Put"};
		respawnmagazines[]={};
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Coveralls_SCI.paa"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_Scientist_Armed_F: OPTRE_UNSC_Navy_Scientist_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Scientist (Armed)";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_SCI";	
		weapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
	class OPTRE_UNSC_Navy_SCPO_F: OPTRE_UNSC_Navy_Bridge_F { 
        scope = 2;
		author	= "Article 2 Studios";
        displayName = "Senior Chief";
        nakedUniform = "U_BasicBody"; 
        uniformClass = "OPTRE_UNSC_NWU_GRY";
		icon = "iconManOfficer";		
		weapons[] = {"OPTRE_M45","OPTRE_M6G_SF","Throw","Put"};
		magazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		respawnweapons[] = {"OPTRE_M45","OPTRE_M6G_SF","Throw","Put"};
		respawnmagazines[] = {"OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag"};
		linkedItems[] = {"OPTRE_H_Final_Dawn_Cap","OPTRE_UNSC_Marine_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"OPTRE_H_Final_Dawn_Cap","OPTRE_UNSC_Marine_Vest","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    }; 
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class HeadgearItem;
	class H_MilCap_Blue;
	class H_Cap_oli;
	class OPTRE_UNSC_NWU_GEN : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Base_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_GRY : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Bridge]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Bridge_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_GRY2 : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Bridge Officer]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Bridge2_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_ONI : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [ONI]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_ONI_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_ONI2 : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Classified Uniform [Classified]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_ONI2_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_RED : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Security]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Fire_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_ORN : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Engineering]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Engineer_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_YLW : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Gunnery]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Ops_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_GRN : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Gunnery]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Gunner_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_CYN : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Automation]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_AITech_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_BLU : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Technician]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Tech_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_PRP : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Flight Mech]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Mech_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_BRN : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Flight Ordinance]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Ordinance_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_WHT : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Medical]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Medical_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_CB : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [CB]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_CB_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_PLT : Uniform_Base {
        scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Pilot]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Pilot_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_UNSC_NWU_SCI : Uniform_Base {
         scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\marines\icons\marine_uniform.paa"; //Need a picture
		displayName										= "[UNSC] Naval Uniform [Science]";
		class ItemInfo: UniformItem
		{
			uniformModel									= "-";
			uniformClass									= "OPTRE_UNSC_Navy_Scientist_F";
			containerClass									= "Supply40";
			mass											= 25;
			modelSides[] 									= {6};
		};
    };
	class OPTRE_H_Navy_Cap: H_MilCap_blue {
		scope = 2;
		displayname = "[UNSC] Duty Cap [Navy]";
		hiddenselectionstextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Navy_Patrolcap.paa"};
	};
	class OPTRE_H_Final_Dawn_Cap: H_Cap_oli {
		scope = 2;
		displayname = "[UNSC] Final Dawn Ballcap";
		hiddenselectionstextures[] = {"OPTRE_UNSC_Units\Navy\data\UNSC_Final_Dawn_Cap.paa"};
	};
};