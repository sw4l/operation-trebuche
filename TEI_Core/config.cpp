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
		
		backpack_tf_faction_radio_api = "TEI_Como_pack_2";
        /*personal_tf_faction_radio_api = "some_personal_radio_class";
        rifleman_tf_faction_radio_api = "some_rifleman_radio_class";
        airborne_tf_faction_radio_api = "some_airborne_radio_class";*/
	};
	class TEI_Ins
	{
		displayName 																			= "Insurrectionists";
		priority 																				= 1;
		side 																					= 0;
		icon 																					= "\TEI_Core\data\icon_Ins_ca.paa";
		flag 																					= "\TEI_Core\Data\flag_Ins_ca.paa";
		primaryLanguage 																		= "EN";
		
		backpack_tf_faction_radio_api = "TEI_Como_pack_2";
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
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Vehicle_class
	{
		displayName 																			= "Cars (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Armored_class
	{
		displayName 																			= "Armored (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Air_class
	{
		displayName 																			= "Air (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Auto_class
	{
		displayName 																			= "Autonomous (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Man_Army_class
	{
		displayName 																			= "Men (Army)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Woman_Army_class
	{
		displayName 																			= "Women (Army)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Man_Army_W_class
	{
		displayName 																			= "Men (Army/Woodland)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Man_Army_D_class
	{
		displayName 																			= "Men (Army/Desert)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Man_Marines_class
	{
		displayName 																			= "Men (Marines)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Man_ODST_class
	{
		displayName 																			= "Men (ODST)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Man_Special_class
	{
		displayName																				= "Men (Special)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Object_class
	{
		displayName 																			= "Objects (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Structure_class
	{
		displayName 																			= "Structures (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Fortification_class
	{
		displayName 																			= "Fortifications (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_Ammo_class
	{
		displayName 																			= "Ammo (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_HEV_class 
	{
		displayName 																			= "HEVs (UNSC)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Backpack_class
	{
		displayName 																			= "Backpacks (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Vehicle_class
	{
		displayName 																			= "Cars (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Armored_class
	{
		displayName 																			= "Armored (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Air_class
	{
		displayName 																			= "Air (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Auto_class
	{
		displayName 																			= "Autonomous (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Man_ER_class
	{
		displayName 																			= "Men (Eridanus Rebels)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Man_URF_class
	{
		displayName 																			= "Men (United Rebel Front)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Man_Special_class
	{
		displayName																				= "Men (Special)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Object_class
	{
		displayName 																			= "Objects (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Structure_class
	{
		displayName 																			= "Structures (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Fortification_class
	{
		displayName 																			= "Fortifications (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ins_Ammo_class
	{
		displayName 																			= "Ammo (Insurrection)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_NMPD_Man_class
	{
		displayName 																			= "Men (NMPD)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_UNSC_civ_Man_class
	{
		displayName 																			= "Men";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Object_class 
	{
		displayName 																			= "Objects (TEI)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Structure_class 
	{
		displayName 																			= "Structures (TEI)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Item_class 
	{
		displayName 																			= "Items (TEI)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Weapon_class 
	{
		displayName 																			= "Weapons (TEI)";
		author																					= "Eridanus Insurrection Team";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class TEI_Ammo_class 
	{
		displayName 																			= "Ammo (TEI)";
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
			directory = "TEI_Core\scenes\TEI_Intro.Stratis";
		};
	};
};

class CfgMusicClasses
{
	class TEI_OST
	{
		displayName = "TEI Soundtrack";
	};
};
class CfgMusic
{
	class TEI_Music_Innie_Dance
	{
		name	="[TEI] Innie Dance";
		sound[]	={"\TEI_Core\Music\Innie_Dance.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Call_to_Arms
	{
		name="[TEI] Call to Arms";
		sound[]={"\TEI_Core\Music\Call_to_Arms.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Engaged
	{
		name="[TEI] Engaged";
		sound[]={"\TEI_Core\Music\Engaged.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Eve_of_Battle
	{
		name="[TEI] Eve of Battle";
		sound[]={"\TEI_Core\Music\Eve_of_Battle.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Firefight
	{
		name="[TEI] Firefight";
		sound[]={"\TEI_Core\Music\Firefight.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Going_Loud
	{
		name="[TEI] Going Loud";
		sound[]={"\TEI_Core\Music\Going_Loud.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Prepare_to_Drop
	{
		name="[TEI] Prepare to Drop";
		sound[]={"\TEI_Core\Music\Prepare_to_Drop.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Unforgotten
	{
		name="[TEI] Unforgotten";
		sound[]={"\TEI_Core\Music\Unforgotten.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Warthogs
	{
		name="[TEI] Warthogs";
		sound[]={"\TEI_Core\Music\Warthogs.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Shotgun
	{
		name="[TEI] Shotgun";
		sound[]={"\TEI_Core\Music\shotgun.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Drum_Run
	{
		name="[TEI] Drum Run";
		sound[]={"\TEI_Core\Music\drum_run.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Impend
	{
		name="[TEI] Impend";
		sound[]={"\TEI_Core\Music\impend.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Amber_Clad
	{
		name="[TEI] Amber Clad";
		sound[]={"\TEI_Core\Music\amber_clad.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Armor_Battle
	{
		name="[TEI] Armor Battle";
		sound[]={"\TEI_Core\Music\armor_battle.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Axios
	{
		name="[TEI] Axios";
		sound[]={"\TEI_Core\Music\axios.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Brave
	{
		name="[TEI] Brave";
		sound[]={"\TEI_Core\Music\brave.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Choose_Wisely
	{
		name="[TEI] Choose Wisely";
		sound[]={"\TEI_Core\Music\choose_wisely.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Covenant_Dance
	{
		name="[TEI] Covenant Dance";
		sound[]={"\TEI_Core\Music\covenant_dance.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Creeping
	{
		name="[TEI] Creeping";
		sound[]={"\TEI_Core\Music\creeping.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Creeping_2
	{
		name="[TEI] Creeping 2";
		sound[]={"\TEI_Core\Music\creeping_2.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Desperate_Measures
	{
		name="[TEI] Desperate Measures";
		sound[]={"\TEI_Core\Music\desperate_measures.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Follow_Our_Brothers
	{
		name="[TEI] Follow our Brothers";
		sound[]={"\TEI_Core\Music\follow_our_brothers.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Lead_Redux
	{
		name="[TEI] Lead Redux";
		sound[]={"\TEI_Core\Music\lead_redux.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Life
	{
		name="[TEI] Life";
		sound[]={"\TEI_Core\Music\life.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Live_Action
	{
		name="[TEI] Live Action";
		sound[]={"\TEI_Core\Music\live_action.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Mjolnir_Remastered
	{
		name="[TEI] Mjolnir Remastered";
		sound[]={"\TEI_Core\Music\Mjolnir_Remastered.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Movement
	{
		name="[TEI] Movement";
		sound[]={"\TEI_Core\Music\movement.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Movement_2
	{
		name="[TEI] Movement 2";
		sound[]={"\TEI_Core\Music\movement_2.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Movement_3
	{
		name="[TEI] Movement 3";
		sound[]={"\TEI_Core\Music\movement_3.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Night_Ops
	{
		name="[TEI] Night Ops";
		sound[]={"\TEI_Core\Music\night_ops.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Our_Brothers
	{
		name="[TEI] Our Brothers";
		sound[]={"\TEI_Core\Music\our_brothers.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Peril_and_Jeopardy
	{
		name="[TEI] Peril and Jeopardy";
		sound[]={"\TEI_Core\Music\peril_and_jeopardy.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Rescue_Mission
	{
		name="[TEI] Rescue Mission";
		sound[]={"\TEI_Core\Music\rescue_mission.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Scorpion_Mix
	{
		name="[TEI] Scorpion Mix";
		sound[]={"\TEI_Core\Music\scorpion_mix.ogg",1,1};
		musicClass = "TEI_OST";
	};
	class TEI_Music_Under_Cover_of_Moonlight
	{
		name="[TEI] Under cover of Moonlight";
		sound[]={"\TEI_Core\Music\under_cover_of_moonlight.ogg",1,1};
		musicClass = "TEI_OST";
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