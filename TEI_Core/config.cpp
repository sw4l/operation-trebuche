class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_Core
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.1;
		requiredAddons[] 																		= {"Extended_EventHandlers", "cba_main"};
		author[] 																				= {"Eridanus Insurrection Team"};
		fileName 																				= "TEI_Core.pbo";
	};
};

class CfgFactionClasses //This configures the in-game factions
{
	class TEI_UNSC
	{
		displayName 																			= "UNSCDF";
		priority 																				= 1;
		side 																					= 1;
		icon 																					= "\TEI_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\TEI_Core\Data\flag_UNSC_ca.paa";
	};
	class TEI_Ins
	{
		displayName 																			= "Insurrectionists";
		priority 																				= 1;
		side 																					= 0;
		icon 																					= "\TEI_Core\data\icon_Ins_ca.paa";
		flag 																					= "\TEI_Core\Data\flag_Ins_ca.paa";
	};
	class TEI_CAA
	{
		displayName 																			= "Colonial Military Admin";
		priority 																				= 1;
		side 																					= 2;
		icon 																					= "\TEI_Core\data\icon_Caa_ca.paa";
		flag 																					= "\TEI_Core\Data\flag_Caa_ca.paa";
	};
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class TEI_UNSC_Backpack_class
	{
		displayName 																			= "UNSC (Backpacks)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Vehicle_class
	{
		displayName 																			= "UNSC (Cars)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Armored_class
	{
		displayName 																			= "UNSC (Armored)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Air_class
	{
		displayName 																			= "UNSC (Air)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Auto_class
	{
		displayName 																			= "UNSC (Autonomous)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Man_Army_class
	{
		displayName 																			= "Men (Army)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Man_Marines_class
	{
		displayName 																			= "Men (Marines)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Man_ODST_class
	{
		displayName 																			= "Men (ODSTs)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Object_class
	{
		displayName 																			= "UNSC (Objects)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Structure_class
	{
		displayName 																			= "UNSC (Structures)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Fortification_class
	{
		displayName 																			= "UNSC (Fortifications)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Ammo_class
	{
		displayName 																			= "UNSC (Ammo)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_HEV_class 
	{
		displayName 																			= "UNSC (HEVs)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Backpack_class
	{
		displayName 																			= "Insurrection (Backpacks)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Vehicle_class
	{
		displayName 																			= "Insurrection (Cars)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Armored_class
	{
		displayName 																			= "Insurrection (Armored)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Air_class
	{
		displayName 																			= "Insurrection (Air)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Auto_class
	{
		displayName 																			= "Insurrection (Autonomous)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Man_ER_class
	{
		displayName 																			= "Men (Eridanus Rebels)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Man_URF_class
	{
		displayName 																			= "Men (United Rebel Front)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Object_class
	{
		displayName 																			= "Insurrection (Objects)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Structure_class
	{
		displayName 																			= "Insurrection (Structures)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Fortification_class
	{
		displayName 																			= "Insurrection (Fortifications)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Ammo_class
	{
		displayName 																			= "Insurrection (Ammo)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Object_class 
	{
		displayName 																			= "TEI (Objects)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Structure_class 
	{
		displayName 																			= "TEI (Structures)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Item_class 
	{
		displayName 																			= "TEI (Items)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Weapon_class 
	{
		displayName 																			= "TEI (Weapons)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ammo_class 
	{
		displayName 																			= "TEI (Ammo)";
		author																					= "Eridanus Insurrection Team";
	};
};