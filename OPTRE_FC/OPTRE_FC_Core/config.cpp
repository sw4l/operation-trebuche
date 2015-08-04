class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_FC_Core
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.1;
		requiredAddons[] 																		= {"Extended_EventHandlers", "cba_main", "A3_Map_Stratis"};
		author[] 																				= {"Drakedaeron & Article 2 Studios"};
		fileName 																				= "OPTRE_FC_Core.pbo";
	};
};

class CfgFactionClasses //This configures the in-game factions
{
	class OPTRE_FC_Covenant
	{
		displayName 																			= "Covenant";
		author																					= "Drakedaeron & Article 2 Studios";
		priority 																				= 1;
		side 																					= 0;
		icon 																					= "\OPTRE_FC_Core\data\icon_cov_ca.paa";
		//flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
	};
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class OPTRE_FC_GroundVehicles_class
	{
		displayName 																			= "Ground Vehicles";
		author																					= "Drakedaeron & Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_AirVehicles_class
	{
		displayName 																			= "Air Vehicles";
		author																					= "Drakedaeron & Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_Infantry_class
	{
		displayName 																			= "Infantry";
		author																					= "Drakedaeron & Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_StaticWeapons_class
	{
		displayName 																			= "Static Weapons";
		author																					= "Drakedaeron & Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_Objects_class
	{
		displayName 																			= "Objects (Covenant)";
		author																					= "Drakedaeron & Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_FC_Ammo_class
	{
		displayName 																			= "Ammo (Covenant)";
		author																					= "Drakedaeron & Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
};