class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Core
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.1;
		requiredAddons[] 																		= {"Extended_EventHandlers", "cba_main", "A3_Map_Stratis"};
		author[] 																				= {"Eridanus Insurrection Team"};
		fileName 																				= "OPTRE_Core.pbo";
	};
};

#include "cfgFunctions.hpp"

class CfgFactionClasses //This configures the in-game factions
{
	class OPTRE_UNSC
	{
		displayName 																			= "UNSCDF";
		priority 																				= 1;
		side 																					= 1;
		icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
		
		backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
        /*personal_tf_faction_radio_api = "some_personal_radio_class";
        rifleman_tf_faction_radio_api = "some_rifleman_radio_class";
        airborne_tf_faction_radio_api = "some_airborne_radio_class";*/
	};
	class OPTRE_Ins
	{
		displayName 																			= "Insurrectionists";
		priority 																				= 1;
		side 																					= 0;
		icon 																					= "\OPTRE_Core\data\icon_Ins_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_Ins_ca.paa";
		primaryLanguage 																		= "EN";
		
		backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
	};
	class OPTRE_CAA
	{
		displayName 																			= "Colonial Military Admin";
		priority 																				= 1;
		side 																					= 2;
		//icon 																					= "\OPTRE_Core\data\icon_Caa_ca.paa";
		//flag 																					= "\OPTRE_Core\Data\flag_Caa_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class OPTRE_NMPD
	{
		displayName 																			= "New Mombasa PD";
		priority 																				= 1;
		side 																					= 2;
		//icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		//flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class OPTRE_UNSC_Civ
	{
		displayName 																			= "Civilians (UNSC)";
		priority 																				= 1;
		side 																					= 3;
		//icon 																					= "\OPTRE_Core\data\icon_UNSC_ca.paa";
		//flag 																					= "\OPTRE_Core\Data\flag_UNSC_ca.paa";
		primaryLanguage 																		= "EN";
	};
};

class CfgVehicleClasses //This configures vehicle classes such as "Men", "Armor", etc.
{
	class OPTRE_UNSC_Backpack_class
	{
		displayName 																			= "Backpacks (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Vehicle_class
	{
		displayName 																			= "Cars (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Armored_class
	{
		displayName 																			= "Armored (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Air_class
	{
		displayName 																			= "Air (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Auto_class
	{
		displayName 																			= "Autonomous (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_class
	{
		displayName 																			= "Men (Army)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Woman_Army_class
	{
		displayName 																			= "Women (Army)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_W_class
	{
		displayName 																			= "Men (Army/Woodland)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_D_class
	{
		displayName 																			= "Men (Army/Desert)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Marines_class
	{
		displayName 																			= "Men (Marines)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_ODST_class
	{
		displayName 																			= "Men (ODST)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Special_class
	{
		displayName																				= "Men (Special)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Object_class
	{
		displayName 																			= "Objects (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Structure_class
	{
		displayName 																			= "Structures (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Fortification_class
	{
		displayName 																			= "Fortifications (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Ammo_class
	{
		displayName 																			= "Ammo (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_HEV_class 
	{
		displayName 																			= "HEVs (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Backpack_class
	{
		displayName 																			= "Backpacks (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Vehicle_class
	{
		displayName 																			= "Cars (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Armored_class
	{
		displayName 																			= "Armored (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Air_class
	{
		displayName 																			= "Air (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Auto_class
	{
		displayName 																			= "Autonomous (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_ER_class
	{
		displayName 																			= "Men (Eridanus Rebels)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_URF_class
	{
		displayName 																			= "Men (United Rebel Front)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_Special_class
	{
		displayName																				= "Men (Special)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Object_class
	{
		displayName 																			= "Objects (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Structure_class
	{
		displayName 																			= "Structures (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Fortification_class
	{
		displayName 																			= "Fortifications (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Ammo_class
	{
		displayName 																			= "Ammo (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_NMPD_Man_class
	{
		displayName 																			= "Men (NMPD)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_civ_Man_class
	{
		displayName 																			= "Men";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Object_class 
	{
		displayName 																			= "Objects (OPTRE)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Structure_class 
	{
		displayName 																			= "Structures (OPTRE)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Item_class 
	{
		displayName 																			= "Items (OPTRE)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Weapon_class 
	{
		displayName 																			= "Weapons (OPTRE)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ammo_class 
	{
		displayName 																			= "Ammo (OPTRE)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class Stratis_intro1  //magic happens here
		{
			directory = "OPTRE_Core\scenes\OPTRE_Intro.Stratis";
		};
	};
};

class CfgMusicClasses
{
	class OPTRE_OST
	{
		displayName = "OPTRE Soundtrack";
	};
};
class CfgMusic
{
	class OPTRE_Music_Innie_Dance
	{
		name	="[OPTRE] Innie Dance";
		sound[]	={"\OPTRE_Core\Music\Innie_Dance.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Call_to_Arms
	{
		name="[OPTRE] Call to Arms";
		sound[]={"\OPTRE_Core\Music\Call_to_Arms.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Engaged
	{
		name="[OPTRE] Engaged";
		sound[]={"\OPTRE_Core\Music\Engaged.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Eve_of_Battle
	{
		name="[OPTRE] Eve of Battle";
		sound[]={"\OPTRE_Core\Music\Eve_of_Battle.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Firefight
	{
		name="[OPTRE] Firefight";
		sound[]={"\OPTRE_Core\Music\Firefight.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Going_Loud
	{
		name="[OPTRE] Going Loud";
		sound[]={"\OPTRE_Core\Music\Going_Loud.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Prepare_to_Drop
	{
		name="[OPTRE] Prepare to Drop";
		sound[]={"\OPTRE_Core\Music\Prepare_to_Drop.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Unforgotten
	{
		name="[OPTRE] Unforgotten";
		sound[]={"\OPTRE_Core\Music\Unforgotten.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Warthogs
	{
		name="[OPTRE] Warthogs";
		sound[]={"\OPTRE_Core\Music\Warthogs.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Shotgun
	{
		name="[OPTRE] Shotgun";
		sound[]={"\OPTRE_Core\Music\shotgun.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Drum_Run
	{
		name="[OPTRE] Drum Run";
		sound[]={"\OPTRE_Core\Music\drum_run.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Impend
	{
		name="[OPTRE] Impend";
		sound[]={"\OPTRE_Core\Music\impend.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Amber_Clad
	{
		name="[OPTRE] Amber Clad";
		sound[]={"\OPTRE_Core\Music\amber_clad.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Armor_Battle
	{
		name="[OPTRE] Armor Battle";
		sound[]={"\OPTRE_Core\Music\armor_battle.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Axios
	{
		name="[OPTRE] Axios";
		sound[]={"\OPTRE_Core\Music\axios.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Brave
	{
		name="[OPTRE] Brave";
		sound[]={"\OPTRE_Core\Music\brave.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Choose_Wisely
	{
		name="[OPTRE] Choose Wisely";
		sound[]={"\OPTRE_Core\Music\choose_wisely.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Covenant_Dance
	{
		name="[OPTRE] Covenant Dance";
		sound[]={"\OPTRE_Core\Music\covenant_dance.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Creeping
	{
		name="[OPTRE] Creeping";
		sound[]={"\OPTRE_Core\Music\creeping.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Creeping_2
	{
		name="[OPTRE] Creeping 2";
		sound[]={"\OPTRE_Core\Music\creeping_2.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Desperate_Measures
	{
		name="[OPTRE] Desperate Measures";
		sound[]={"\OPTRE_Core\Music\desperate_measures.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Follow_Our_Brothers
	{
		name="[OPTRE] Follow our Brothers";
		sound[]={"\OPTRE_Core\Music\follow_our_brothers.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Lead_Redux
	{
		name="[OPTRE] Lead Redux";
		sound[]={"\OPTRE_Core\Music\lead_redux.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Life
	{
		name="[OPTRE] Life";
		sound[]={"\OPTRE_Core\Music\life.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Live_Action
	{
		name="[OPTRE] Live Action";
		sound[]={"\OPTRE_Core\Music\live_action.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Mjolnir_Remastered
	{
		name="[OPTRE] Mjolnir Remastered";
		sound[]={"\OPTRE_Core\Music\Mjolnir_Remastered.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Movement
	{
		name="[OPTRE] Movement";
		sound[]={"\OPTRE_Core\Music\movement.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Movement_2
	{
		name="[OPTRE] Movement 2";
		sound[]={"\OPTRE_Core\Music\movement_2.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Movement_3
	{
		name="[OPTRE] Movement 3";
		sound[]={"\OPTRE_Core\Music\movement_3.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Night_Ops
	{
		name="[OPTRE] Night Ops";
		sound[]={"\OPTRE_Core\Music\night_ops.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Our_Brothers
	{
		name="[OPTRE] Our Brothers";
		sound[]={"\OPTRE_Core\Music\our_brothers.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Peril_and_Jeopardy
	{
		name="[OPTRE] Peril and Jeopardy";
		sound[]={"\OPTRE_Core\Music\peril_and_jeopardy.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Rescue_Mission
	{
		name="[OPTRE] Rescue Mission";
		sound[]={"\OPTRE_Core\Music\rescue_mission.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Scorpion_Mix
	{
		name="[OPTRE] Scorpion Mix";
		sound[]={"\OPTRE_Core\Music\scorpion_mix.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
	class OPTRE_Music_Under_Cover_of_Moonlight
	{
		name="[OPTRE] Under cover of Moonlight";
		sound[]={"\OPTRE_Core\Music\under_cover_of_moonlight.ogg",1,1};
		musicClass = "OPTRE_OST";
	};
};


class CfgWorlds
{
	class GenericNames
	{
		class OPTRE_Names_UNSC
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