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

#include "cfgFunctions.hpp"

class CfgFactionClasses //This configures the in-game factions
{
	class TEI_UNSC
	{
		displayName 																			= "UNSCDF";
		priority 																				= 1;
		side 																					= 1;
		icon 																					= "\TEI_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\TEI_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
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
		//icon 																					= "\TEI_Core\data\icon_Caa_ca.paa";
		//flag 																					= "\TEI_Core\Data\flag_Caa_ca.paa";
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
	class TEI_UNSC_Woman_Army_class
	{
		displayName 																			= "Women (Army)";
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
	tracks[]={"TEI_Music_Innie_Dance","TEI_Music_Call_to_Arms","TEI_Music_Engaged","TEI_Music_Eve_of_Battle","TEI_Music_Firefight","TEI_Music_Going_Loud","TEI_Music_Prepare_to_Drop","TEI_Music_Unforgotten","TEI_Music_Warthogs"};
	class TEI_Music_Innie_Dance
	{
		name="[TEI] Innie Dance";
		sound[]={"\TEI_Core\Music\Innie_Dance.ogg",1,1};
	};
	class TEI_Music_Call_to_Arms
	{
		name="[TEI] Call to Arms";
		sound[]={"\TEI_Core\Music\Call_to_Arms.ogg",1,1};
	};
	class TEI_Music_Engaged
	{
		name="[TEI] Engaged";
		sound[]={"\TEI_Core\Music\Engaged.ogg",1,1};
	};
	class TEI_Music_Eve_of_Battle
	{
		name="[TEI] Eve of Battle";
		sound[]={"\TEI_Core\Music\Eve_of_Battle.ogg",1,1};
	};
	class TEI_Music_Firefight
	{
		name="[TEI] Firefight";
		sound[]={"\TEI_Core\Music\Firefight.ogg",1,1};
	};
	class TEI_Music_Going_Loud
	{
		name="[TEI] Going Loud";
		sound[]={"\TEI_Core\Music\Going_Loud.ogg",1,1};
	};
	class TEI_Music_Prepare_to_Drop
	{
		name="[TEI] Prepare to Drop";
		sound[]={"\TEI_Core\Music\Prepare_to_Drop.ogg",1,1};
	};
	class TEI_Music_Unforgotten
	{
		name="[TEI] Unforgotten";
		sound[]={"\TEI_Core\Music\Unforgotten.ogg",1,1};
	};
	class TEI_Music_Warthogs
	{
		name="[TEI] Warthogs";
		sound[]={"\TEI_Core\Music\Warthogs.ogg",1,1};
	};
	class TEI_Music_shotgun
	{
		name="[TEI] Shotgun";
		sound[]={"\TEI_Core\Music\shotgun.ogg",1,1};
	};
	class TEI_Music_drum_run
	{
		name="[TEI] Drum Run";
		sound[]={"\TEI_Core\Music\drum_run.ogg",1,1};
	};
	class TEI_Music_impend
	{
		name="[TEI] Impend";
		sound[]={"\TEI_Core\Music\impend.ogg",1,1};
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