class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_Core
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.1;
		requiredAddons[] 																		= {"Extended_EventHandlers", "cba_main", "A3_Map_Stratis"};
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
		primaryLanguage 																		= "EN";
	};
	class TEI_CAA
	{
		displayName 																			= "Colonial Military Admin";
		priority 																				= 1;
		side 																					= 2;
		icon 																					= "\TEI_Core\data\icon_Caa_ca.paa";
		flag 																					= "\TEI_Core\Data\flag_Caa_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class TEI_NMPD
	{
		displayName 																			= "New Mombasa PD";
		priority 																				= 1;
		side 																					= 2;
		//icon 																					= "\TEI_Core\data\icon_UNSC_ca.paa";
		//flag 																					= "\TEI_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class TEI_UNSC_Civ
	{
		displayName 																			= "Civilians (UNSC)";
		priority 																				= 1;
		side 																					= 3;
		//icon 																					= "\TEI_Core\data\icon_UNSC_ca.paa";
		//flag 																					= "\TEI_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
	};
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class TEI_UNSC_Backpack_class
	{
		displayName 																			= "Backpacks (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Vehicle_class
	{
		displayName 																			= "Cars (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Armored_class
	{
		displayName 																			= "Armored (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Air_class
	{
		displayName 																			= "Air (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Auto_class
	{
		displayName 																			= "Autonomous (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Man_Army_class
	{
		displayName 																			= "Men (Army)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Man_Army_W_class
	{
		displayName 																			= "Men (Army/Woodland)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Man_Army_D_class
	{
		displayName 																			= "Men (Army/Desert)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Man_Marines_class
	{
		displayName 																			= "Men (Marines)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Man_ODST_class
	{
		displayName 																			= "Men (ODST)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Object_class
	{
		displayName 																			= "Objects (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Structure_class
	{
		displayName 																			= "Structures (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Fortification_class
	{
		displayName 																			= "Fortifications (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_Ammo_class
	{
		displayName 																			= "Ammo (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_HEV_class 
	{
		displayName 																			= "HEVs (UNSC)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Backpack_class
	{
		displayName 																			= "Backpacks (Insurrection)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Vehicle_class
	{
		displayName 																			= "Cars (Insurrection)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Armored_class
	{
		displayName 																			= "Armored (Insurrection)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Air_class
	{
		displayName 																			= "Air (Insurrection)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Auto_class
	{
		displayName 																			= "Autonomous (Insurrection)";
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
		displayName 																			= "Objects (Insurrection)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Structure_class
	{
		displayName 																			= "Structures (Insurrection)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Fortification_class
	{
		displayName 																			= "Fortifications (Insurrection)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ins_Ammo_class
	{
		displayName 																			= "Ammo (Insurrection)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_NMPD_Man_class
	{
		displayName 																			= "Men (NMPD)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_UNSC_civ_Man_class
	{
		displayName 																			= "Men";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Object_class 
	{
		displayName 																			= "Objects (TEI)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Structure_class 
	{
		displayName 																			= "Structures (TEI)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Item_class 
	{
		displayName 																			= "Items (TEI)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Weapon_class 
	{
		displayName 																			= "Weapons (TEI)";
		author																					= "Eridanus Insurrection Team";
	};
	class TEI_Ammo_class 
	{
		displayName 																			= "Ammo (TEI)";
		author																					= "Eridanus Insurrection Team";
	};
};

	class CfgMissions
{
	class Cutscenes
	{
		class Stratis_intro1  //magic happens here
		{
			directory = "TEI_Core\scenes\TEI_Intro.Stratis";
		};
	};
};

class CfgMusic
{
	tracks[]={"inniedance"};
	class TEI_InnieDance
	{
		name="TEI Innie Dance";
		sound[]={"\TEI_Core\Music\Inniedance.ogg",1,1};
	};
};

class CfgWorlds
{
	class GenericNames
	{
		class TEI_Names_UNSC
		{
			class FirstNames
			{
				FName = "FName";
			};
			
			class LastNames
			{
				LName = "LName";
			};
		};
	};
};

class CfgGroups
{
	class West
	{
		class TEI_UNSC //TEI_Ins
		{
			name = "UNSCDF";
			class Infantry //Air, Mechanized, Motorized, Armored, SpecOps, Support
			{
				name = "Infantry";
				class UNSC_Army_W_InfSentry
				{
					name = "Army Sentry (W)";
					side = 1;
					faction = "TEI_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_Rifleman_WDL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "TEI_UNSC_Army_Rifleman_WDL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};
};