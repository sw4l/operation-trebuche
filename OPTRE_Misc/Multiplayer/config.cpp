class CfgPatches
{
	
	class OPTRE_Multiplayer_Objects
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_structures_f","OPTRE_Core"};
    };
};

class CfgVehicles
{
	class Flagpole_F;
	class Sign_F;
	
	class OPTRE_CTF_Flag_Base: Flagpole_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Misc\Multiplayer\CTF_flag_pole";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=1;
		scopeCurator=1;
		displayName="CTF Flag (Base)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_whiteunsc_co.paa"};
		hiddenSelectionsMaterials[] = {"optre_misc\multiplayer\data\CTF_flag.rvmat"};
	};
	class OPTRE_CTF_Flag_Stand: Sign_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Misc\Multiplayer\CTF_flag_stand";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (Base)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	class OPTRE_CTF_Flag_UNSCWhite: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (UNSC White)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_whiteUNSC_co.paa"};
	};
	class OPTRE_CTF_Flag_UNSCRed: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (UNSC Red)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_redUNSC_co.paa"};
	};
	class OPTRE_CTF_Flag_RedTeam: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (Red Team)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_redteam_co.paa"};
	};
	class OPTRE_CTF_Flag_ODSTRed: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (ODST Red)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_redODST_co.paa"};
	};
	class OPTRE_CTF_Flag_UNSCBlue: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (UNSC Blue)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_blueUNSC_co.paa"};
	};
	class OPTRE_CTF_Flag_BlueTeam: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (Blue Team)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_blueteam_co.paa"};
	};
	class OPTRE_CTF_Flag_ODSTBlue: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (ODST Blue)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_blueODST_co.paa"};
	};
	class OPTRE_CTF_Flag_GreenArmy: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (UNSC Army)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_greenArmy_co.paa"};
	};
	class OPTRE_CTF_Flag_GreenCMA: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (CMA)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_greenCMA_co.paa"};
	};
	class OPTRE_CTF_Flag_BlackUEG: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (UEG)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_blackUEG_co.paa"};
	};
	class OPTRE_CTF_Flag_BlackONI: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (ONI)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_blackONI_co.paa"};
	};
	class OPTRE_CTF_Flag_GreenINS: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (Rebel Green)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_GreenINS_co.paa"};
	};
	class OPTRE_CTF_Flag_RedINS: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (Rebel Red)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_RedINS_co.paa"};
	};
	class OPTRE_CTF_Flag_PurpleCOV: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (Covenant)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_PurpleCOV_co.paa"};
	};
	class OPTRE_CTF_Flag_1stCav: OPTRE_CTF_Flag_Base
	{
		scope=2;
		scopeCurator=2;
		displayName="CTF Flag (1st Cavalry)";
		hiddenSelections[]				= {"camo1"};
		hiddenSelectionsTextures[]		= {"optre_misc\multiplayer\data\flag_guidon_1stCAV_co.paa"};
	};
};
