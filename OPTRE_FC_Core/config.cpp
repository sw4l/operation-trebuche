class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_FC_Core
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.1;
		requiredAddons[] 																		= {"Extended_EventHandlers", "cba_main", "A3_Map_Stratis", "OPTRE_Core"};
		author[] 																				= {"Drakedaeron & Article 2 Studios"};
		fileName 																				= "OPTRE_FC_Core.pbo";
	};
};

class CfgMods
{
	class Mod_Base;
	class OPTRE_FC: Mod_Base
	{
		logo = "OPTRE_FC_Core\Data\logo_ca.paa";
		dir = "@OPTRE_FC";
		picture = "OPTRE_FC_Core\Data\logo_ca.paa";
		name = "Operation: TREBUCHET First Contact";
	};
};

class CfgEditorCategories
{
	class OPTRE_FC_EditorCategory_Objects // Category class, you point to it in editorCategory property
	{
		displayName = "OPTRE FC Objects"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class OPTRE_FC_EditorSubcategory_Sangheili // Category class, you point to it in editorCategory property
	{
		displayName = "Sangheili"; // Name visible in the list
	};
	class OPTRE_FC_EditorSubcategory_Marines // Category class, you point to it in editorCategory property
	{
		displayName = "Men (Marines `31)"; // Name visible in the list
	};
	class OPTRE_FC_EditorSubcategory_Misc // Category class, you point to it in editorCategory property
	{
		displayName = "Misc"; // Name visible in the list
	};
};

class CfgFactionClasses //This configures the in-game factions
{
	class OPTRE_FC_Covenant
	{
		displayName 																			= "Covenant";
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 0;
		icon 																					= "OPTRE_FC_Core\data\icon_cov_ca.paa";
		//flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
	};
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class OPTRE_FC_GroundVehicles_class
	{
		displayName 																			= "Ground Vehicles";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_AirVehicles_class
	{
		displayName 																			= "Air Vehicles";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_Infantry_class
	{
		displayName 																			= "Infantry";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_StaticWeapons_class
	{
		displayName 																			= "Static Weapons";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_Objects_class
	{
		displayName 																			= "Objects (Covenant)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_Ammo_class
	{
		displayName 																			= "Ammo (Covenant)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
};