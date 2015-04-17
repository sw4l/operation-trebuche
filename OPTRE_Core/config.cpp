class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Core
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.1;
		requiredAddons[] 																		= {"Extended_EventHandlers", "cba_main", "A3_Map_Stratis"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_Core.pbo";
	};
};

#include "cfgFunctions.hpp"

class CfgFactionClasses //This configures the in-game factions
{
	class OPTRE_UNSC
	{
		displayName 																			= "UNSCDF";
		author																					= "Article 2 Studios";
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
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 0;
		icon 																					= "\OPTRE_Core\data\icon_Ins_ca.paa";
		flag 																					= "\OPTRE_Core\Data\flag_Ins_ca.paa";
		primaryLanguage 																		= "EN";
		backpack_tf_faction_radio_api = "OPTRE_Como_pack_2";
	};
	class OPTRE_CAA
	{
		displayName 																			= "CAA";
		author																					= "Article 2 Studios";
		priority 																				= 1;
		side 																					= 2;
		//icon 																					= "\OPTRE_Core\data\icon_Caa_ca.paa";
		//flag 																					= "\OPTRE_Core\Data\flag_Caa_ca.paa";
		primaryLanguage 																		= "EN";
	};
	class OPTRE_UEG_Civ
	{
		displayName 																			= "Civilians (UEG)";
		author																					= "Article 2 Studios";
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
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Vehicle_class
	{
		displayName 																			= "Cars (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Armored_class
	{
		displayName 																			= "Armored (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Air_class
	{
		displayName 																			= "Air (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Auto_class
	{
		displayName 																			= "Autonomous (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_class
	{
		displayName 																			= "Men (Army)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Woman_Army_class
	{
		displayName 																			= "Women (Army)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_W_class
	{
		displayName 																			= "Men (Army/Woodland)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Army_D_class
	{
		displayName 																			= "Men (Army/Desert)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Marines_class
	{
		displayName 																			= "Men (Marines)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_ODST_class
	{
		displayName 																			= "Men (ODST)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Special_class
	{
		displayName																				= "Men (Special)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Man_Navy_class
	{
		displayName																				= "Men (Navy)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Object_class
	{
		displayName 																			= "Objects (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Structure_class
	{
		displayName 																			= "Structures (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Fortification_class
	{
		displayName 																			= "Fortifications (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_Ammo_class
	{
		displayName 																			= "Ammo (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_HEV_class 
	{
		displayName 																			= "HEVs (UNSC)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Backpack_class
	{
		displayName 																			= "Backpacks (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Vehicle_class
	{
		displayName 																			= "Cars (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Armored_class
	{
		displayName 																			= "Armored (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Air_class
	{
		displayName 																			= "Air (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Auto_class
	{
		displayName 																			= "Autonomous (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_ER_class
	{
		displayName 																			= "Men (Eridanus Rebels)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_URF_class
	{
		displayName 																			= "Men (United Rebel Front)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Man_Special_class
	{
		displayName																				= "Men (Special)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Object_class
	{
		displayName 																			= "Objects (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Structure_class
	{
		displayName 																			= "Structures (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Fortification_class
	{
		displayName 																			= "Fortifications (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ins_Ammo_class
	{
		displayName 																			= "Ammo (Insurrection)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_NMPD_Man_class
	{
		displayName 																			= "Men (NMPD)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_UNSC_civ_Man_class
	{
		displayName 																			= "Men";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Object_class 
	{
		displayName 																			= "Objects (OPTRE)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Structure_class 
	{
		displayName 																			= "Structures (OPTRE)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Item_class 
	{
		displayName 																			= "Items (OPTRE)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Weapon_class 
	{
		displayName 																			= "Weapons (OPTRE)";
		author																					= "Article 2 Studios";
		scope																					= 2;
		scopeArsenal																			= 2;
		scopeCurator																			= 2;
	};
	class OPTRE_Ammo_class 
	{
		displayName 																			= "Ammo (OPTRE)";
		author																					= "Article 2 Studios";
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
		author	= "Article 2 Studios";
	};
};

class CfgSounds
{
	sounds[] = {"OPTRE_Sounds_HEV_Wind1","OPTRE_Sounds_HEV_Wind2","OPTRE_Sounds_HEV_Pop","OPTRE_Sounds_HEV_Door","OPTRE_Sounds_HEV_Chute","OPTRE_Sounds_HUD_Visor","OPTRE_Sounds_Alarm"};
	class OPTRE_Sounds_HEV_Wind1
	{
		name = "[OPTRE] HEV Wind 1";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Wind1.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Wind2
	{
		name = "[OPTRE] HEV Wind 2";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Wind2.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Pop
	{
		name = "[OPTRE] HEV Pop";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Pop.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Door
	{
		name = "[OPTRE] HEV Door";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Door.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_Sounds_HEV_Chute
	{
		name = "[OPTRE] HEV Chute";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HEV_Chute.ogg", 1, 1};
		titles[] = {};
	};
	class OPTRE_Sounds_HUD_Visor
	{
		name = "[OPTRE] HUD Visor";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_HUD_Visor.ogg", 0.25, 1};
		titles[] = {};
	};
	class OPTRE_Sounds_Alarm
	{
		name = "[OPTRE] Alarm";
		sound[] = {"\OPTRE_core\data\sounds\OPTRE_Sounds_Alarm.ogg", 1, 1};
		titles[] = {};
	};
};

class CfgMusic
{
	class OPTRE_Music_Axios
	{
		name	="[OPTRE] Axios";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Axios.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 162;
	};
	class OPTRE_Music_Bound
	{
		name	="[OPTRE] Bound";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Bound.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 36;
	};
	class OPTRE_Music_Brave
	{
		name	="[OPTRE] Brave";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Brave.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 90;
	};
	class OPTRE_Music_CallToArms
	{
		name	="[OPTRE] Call To Arms";
		sound[]	={"\OPTRE_Core\Music\OPTRE_CallToArms.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 83;
	};
	class OPTRE_Music_ChooseWisely
	{
		name	="[OPTRE] Choose Wisely";
		sound[]	={"\OPTRE_Core\Music\OPTRE_ChooseWisely.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 76;
	};
	class OPTRE_Music_CloseQuarters
	{
		name	="[OPTRE] Close Quarters";
		sound[]	={"\OPTRE_Core\Music\OPTRE_CloseQuarters.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 70;
	};
	class OPTRE_Music_LoopCloseQuarters
	{
		name	="[OPTRE] Close Quarters (Loop)";
		sound[]	={"\OPTRE_Core\Music\OPTRE_LoopCloseQuarters.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 42;
	};
	class OPTRE_Music_CovenantDance
	{
		name	="[OPTRE] Covenant Dance";
		sound[]	={"\OPTRE_Core\Music\OPTRE_CovenantDance.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 119;
	};
	class OPTRE_Music_LoopDefense
	{
		name	="[OPTRE] Defense (Loop)";
		sound[]	={"\OPTRE_Core\Music\OPTRE_LoopDefense.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 58;
	};
	class OPTRE_Music_DesperateMeasures
	{
		name	="[OPTRE] Desperate Measures";
		sound[]	={"\OPTRE_Core\Music\OPTRE_DesperateMeasures.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 147;
	};
	class OPTRE_Music_DrumRun
	{
		name	="[OPTRE] Drum Run";
		sound[]	={"\OPTRE_Core\Music\OPTRE_DrumRun.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 67;
	};
	class OPTRE_Music_Engaged
	{
		name	="[OPTRE] Engaged";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Engaged.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 92;
	};
	class OPTRE_Music_EveOfBattle
	{
		name	="[OPTRE] Eve Of Battle";
		sound[]	={"\OPTRE_Core\Music\OPTRE_EveOfBattle.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 68;
	};
	class OPTRE_Music_Firefight
	{
		name	="[OPTRE] Firefight";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Firefight.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 104;
	};
	class OPTRE_Music_GoingLoud
	{
		name	="[OPTRE] Going Loud";
		sound[]	={"\OPTRE_Core\Music\OPTRE_GoingLoud.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 191;
	};
	class OPTRE_Music_Guess
	{
		name	="[OPTRE] Guess";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Guess.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 177;
	};
	class OPTRE_Music_Impend
	{
		name	="[OPTRE] Impend";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Impend.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 30;
	};
	class OPTRE_Music_InAmberClad
	{
		name	="[OPTRE] In Amber Clad";
		sound[]	={"\OPTRE_Core\Music\OPTRE_InAmberClad.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 203;
	};
	class OPTRE_Music_InnieDance
	{
		name	="[OPTRE] Innie Dance";
		sound[]	={"\OPTRE_Core\Music\OPTRE_InnieDance.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 236;
	};
	class OPTRE_Music_Introductions
	{
		name	="[OPTRE] Introductions";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Introductions.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 210;
	};
	class OPTRE_Music_LeadTrackRedux
	{
		name	="[OPTRE] Lead Track Redux";
		sound[]	={"\OPTRE_Core\Music\OPTRE_LeadTrackRedux.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 163;
	};
	class OPTRE_Music_Life
	{
		name	="[OPTRE] Life";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Life.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 88;
	};
	class OPTRE_Music_LiveAction
	{
		name	="[OPTRE] Live Action";
		sound[]	={"\OPTRE_Core\Music\OPTRE_LiveAction.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 53;
	};
	class OPTRE_Music_MjolnirRemastered
	{
		name	="[OPTRE] Mjolnir Mix (Remastered)";
		sound[]	={"\OPTRE_Core\Music\OPTRE_MjolnirRemastered.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 251;
	};
	class OPTRE_Music_MoonsOverEridanus
	{
		name	="[OPTRE] Moons Over Eridanus";
		sound[]	={"\OPTRE_Core\Music\OPTRE_MoonsOverEridanus.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 68;
	};
	class OPTRE_Music_Movement
	{
		name	="[OPTRE] Movement";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Movement.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 27;
	};
	class OPTRE_Music_LoopNeverForget
	{
		name	="[OPTRE] Never Forget (Loop)";
		sound[]	={"\OPTRE_Core\Music\OPTRE_LoopNeverForget.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 59;
	};
	class OPTRE_Music_NightOps
	{
		name	="[OPTRE] Night Ops";
		sound[]	={"\OPTRE_Core\Music\OPTRE_NightOps.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 168;
	};
	class OPTRE_Music_LoopNightRun
	{
		name	="[OPTRE] Night Run (Loop)";
		sound[]	={"\OPTRE_Core\Music\OPTRE_NightOps.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 42;
	};
	class OPTRE_Music_OurBrothers
	{
		name	="[OPTRE] Our Brothers";
		sound[]	={"\OPTRE_Core\Music\OPTRE_OurBrothers.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 64;
	};
	class OPTRE_Music_PerilAndJeopardy
	{
		name	="[OPTRE] Peril And Jeopardy";
		sound[]	={"\OPTRE_Core\Music\OPTRE_PerilAndJeopardy.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 167;
	};
	class OPTRE_Music_PerilousJourney
	{
		name	="[OPTRE] Perilous Journey";
		sound[]	={"\OPTRE_Core\Music\OPTRE_PerilousJourney.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 146;
	};
	class OPTRE_Music_PrepareToDrop
	{
		name	="[OPTRE] Prepare To Drop";
		sound[]	={"\OPTRE_Core\Music\OPTRE_PrepareToDrop.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 216;
	};
	class OPTRE_Music_Recon
	{
		name	="[OPTRE] Recon";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Recon.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 60;
	};
	class OPTRE_Music_RescueMission
	{
		name	="[OPTRE] Rescue Mission";
		sound[]	={"\OPTRE_Core\Music\OPTRE_RescueMission.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 137;
	};
	class OPTRE_Music_RollingOut
	{
		name	="[OPTRE] Rolling Out";
		sound[]	={"\OPTRE_Core\Music\OPTRE_RollingOut.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 34;
	};
	class OPTRE_Music_Run
	{
		name	="[OPTRE] Run";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Run.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 34;
	};
	class OPTRE_Music_ScorpionMix
	{
		name	="[OPTRE] Scorpion Mix";
		sound[]	={"\OPTRE_Core\Music\OPTRE_ScorpionMix.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 188;
	};
	class OPTRE_Music_SignalLost
	{
		name	="[OPTRE] Signal Lost";
		sound[]	={"\OPTRE_Core\Music\OPTRE_SignalLost.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 16;
	};
	class OPTRE_Music_Shotgun
	{
		name	="[OPTRE] Shotgun";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Shotgun.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 132;
	};
	class OPTRE_Music_ThroughTheWoods
	{
		name	="[OPTRE] Through The Woods";
		sound[]	={"\OPTRE_Core\Music\OPTRE_ThroughTheWoods.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 89;
	};
	class OPTRE_Music_ToGalaxy
	{
		name	="[OPTRE] To Galaxy";
		sound[]	={"\OPTRE_Core\Music\OPTRE_ToGalaxy.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 239;
	};
	class OPTRE_Music_UnderCoverOfMoonlight
	{
		name	="[OPTRE] Under Cover Of Moonlight";
		sound[]	={"\OPTRE_Core\Music\OPTRE_UnderCoverOfMoonlight.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 68;
	};
	class OPTRE_Music_Unforgotten
	{
		name	="[OPTRE] Unforgotten";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Unforgotten.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 60;
	};
	class OPTRE_Music_Wandering
	{
		name	="[OPTRE] Wandering";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Wandering.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 46;
	};
	class OPTRE_Music_WarsTribute
	{
		name	="[OPTRE] Wars Tribute";
		sound[]	={"\OPTRE_Core\Music\OPTRE_WarsTribute.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 65;
	};
	class OPTRE_Music_Warthogs
	{
		name	="[OPTRE] Warthogs";
		sound[]	={"\OPTRE_Core\Music\OPTRE_Wandering.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 130;
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