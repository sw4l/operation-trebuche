class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Music
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.1;
		requiredAddons[] 																		= {"OPTRE_Core"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_Music.pbo";
	};
};

class CfgMusicClasses
{
	class OPTRE_OST
	{
		displayName = "OPTRE (Original Soundtrack)";
		author	= "Article 2 Studios";
	};
	class OPTRE_Remixes
	{
		displayName = "OPTRE (Remixes)";
		author	= "Microsoft, Bungie, and Martin O'Donnell (Edited by McChaffee)";
	};
	class OPTRE_Homefront
	{
		displayName = "OPTRE (Homefront OST)";
		author	= "McChaffee";
	};
	class OPTRE_Ambient
	{
		displayName = "OPTRE (Ambient)";
		author	= "Microsoft, Bungie, and Martin O'Donnell (Edited by McChaffee)";
	};
};

class CfgMusic
{
	// Original Soundtrack START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_Music_ABattleBegins
	{
		name	="[OPTRE OST] A Battle Begins";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_abattlebegins.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 66;
	};
	class OPTRE_Music_AMarchThroughTheWoods
	{
		name	="[OPTRE OST] A March Through The Woods";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_amarchthroughthewoods.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 108;
	};
	class OPTRE_Music_BattleTanks
	{
		name	="[OPTRE OST] Battle Tanks";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_battletanks.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 78;
	};
	class OPTRE_Music_CallToArms
	{
		name	="[OPTRE OST] Call To Arms";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_calltoarms.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 68;
	};
	class OPTRE_Music_DrumRun
	{
		name	="[OPTRE OST] Drum Run";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_drumrun.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 67;
	};
	class OPTRE_Music_Engaged
	{
		name	="[OPTRE OST] Engaged";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_engaged.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 92;
	};
	class OPTRE_Music_EveOfBattle
	{
		name	="[OPTRE OST] Eve of Battle";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_eveofbattle.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 68;
	};
	class OPTRE_Music_FinalDawn
	{
		name	="[OPTRE OST] Final Dawn";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_finaldawn.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 108;
	};
	class OPTRE_Music_Firefight
	{
		name	="[OPTRE OST] Firefight";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_firefight.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 104;
	};
	class OPTRE_Music_GreatPeril
	{
		name	="[OPTRE OST] Great Peril";
		sound[]	={"\OPTRE_Music\OPTRE_OriginalSoundtrackMusic_greatperil.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 144;
	};
	class OPTRE_Music_Theme
	{
		name	="[OPTRE OST] Theme";
		sound[]	={"\OPTRE_Music\OPTRE_OriginalSoundtrackMusic_halotheme.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 146;
	};
	class OPTRE_Music_Impend
	{
		name	="[OPTRE OST] Impend";
		sound[]	={"\OPTRE_Music\OPTRE_OriginalSoundtrackMusic_impend.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 30;
	};
	class OPTRE_Music_InnieDance
	{
		name	="[OPTRE OST] Innie Dance";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_inniedance.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 236;
	};
	class OPTRE_Music_Jeopardy
	{
		name	="[OPTRE OST] Jeopardy";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_Jeopardy.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 186;
	};
	class OPTRE_Music_Life
	{
		name	="[OPTRE OST] Life";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_life.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 88;
	};
	class OPTRE_Music_MissionGo
	{
		name	="[OPTRE OST] Mission Go";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_missiongo.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 48;
	};
	class OPTRE_Music_NightOps
	{
		name	="[OPTRE OST] Night Ops";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_nightops.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 168;
	};
	class OPTRE_Music_PrepareToDrop
	{
		name	="[OPTRE OST] Prepare To Drop";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_preparetodrop.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 216;
	};
	class OPTRE_Music_Recon
	{
		name	="[OPTRE OST] Recon";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_recon.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 60;
	};
	class OPTRE_Music_Shotgun
	{
		name	="[OPTRE OST] Shotgun";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_shotgun.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 132;
	};
	class OPTRE_Music_Unforgotten
	{
		name	="[OPTRE OST] Unforgotten";
		sound[]	={"\OPTRE_Music\OST\OPTRE_OriginalSoundtrackMusic_unforgotten.ogg",1,1};
		musicClass = "OPTRE_OST";
		duration = 60;
	};
	// Original Soundtrack END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// Remixes START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_Music_AlwaysRemember
	{
		name	="[OPTRE Remixes] Always Remember";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_alwaysremember.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 156;
	};
	class OPTRE_Music_AndOverTheHills
	{
		name	="[OPTRE Remixes] And Over The Hills";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_andoverthehills.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 115;
	};
	class OPTRE_Music_APromise
	{
		name	="[OPTRE Remixes] A Promise";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_apromise.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 129;
	};
	class OPTRE_Music_BlowMeAway
	{
		name	="[OPTRE Remixes] Blow Me Away";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_blowmeaway.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 234;
	};
	class OPTRE_Music_Brave
	{
		name	="[OPTRE Remixes] Brave";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_brave.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 83;
	};
	class OPTRE_Music_ChoseWisely
	{
		name	="[OPTRE Remixes] Chose Wisely";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_chosewisely.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 75;
	};
	class OPTRE_Music_CloseQuarters
	{
		name	="[OPTRE Remixes] Close Quarters";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_closequarters.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 70;
	};
	class OPTRE_Music_DesperateMeasures
	{
		name	="[OPTRE Remixes] Desperate Measures";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_desperatemeasures.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 147;
	};
	class OPTRE_Music_EarthCity
	{
		name	="[OPTRE Remixes] Earth City";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_earthcity.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 206;
	};
	class OPTRE_Music_Guess
	{
		name	="[OPTRE Remixes] Guess";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_guess.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 176;
	};
	class OPTRE_Music_HighCharity
	{
		name	="[OPTRE Remixes] High Charity";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_highcharity.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 54;
	};
	class OPTRE_Music_IconSuite
	{
		name	="[OPTRE Remixes] Icon Suite";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_iconsuite.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 102;
	};
	class OPTRE_Music_ImpendThis
	{
		name	="[OPTRE Remixes] Impend This";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_impendthis.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 203;
	};
	class OPTRE_Music_Introductions
	{
		name	="[OPTRE Remixes] Introductions";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_introductions.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 210;
	};
	class OPTRE_Music_JeopardyRedux
	{
		name	="[OPTRE Remixes] Jeopardy Redux";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_jeopardyredux.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 187;
	};
	class OPTRE_Music_LeadTrackRedux
	{
		name	="[OPTRE Remixes] Lead Track Redux";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_leadtrackredux.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 162;
	};
	class OPTRE_Music_LiveAction
	{
		name	="[OPTRE Remixes] Live Action";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_liveaction.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 53;
	};
	class OPTRE_Music_Midnight
	{
		name	="[OPTRE Remixes] Midnight";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_midnight.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 148;
	};
	class OPTRE_Music_Movement1
	{
		name	="[OPTRE Remixes] Movement 1";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_movement.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 27;
	};
	class OPTRE_Music_Movement2
	{
		name	="[OPTRE Remixes] Movement 2";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_movement2.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 34;
	};
	class OPTRE_Music_Movement3
	{
		name	="[OPTRE Remixes] Movement 3";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_movement3.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 36;
	};
	class OPTRE_Music_NeverForgotten
	{
		name	="[OPTRE Remixes] Never Forgotten";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_neverforgotten.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 147;
	};
	class OPTRE_Music_PerilousJourney
	{
		name	="[OPTRE Remixes] ";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_perilousjourney.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 146;
	};
	class OPTRE_Music_RescueMission
	{
		name	="[OPTRE Remixes] Rescue Mission";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_rescuemission.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 76;
	};
	class OPTRE_Music_RockAnthemToSaveTheWorld
	{
		name	="[OPTRE Remixes] Rock Anthem To The Save The World";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_rockanthemtosavetheworld.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 187;
	};
	class OPTRE_Music_ScorpionMix
	{
		name	="[OPTRE Remixes] Scorpion Mix";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_scorpionmix.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 186;
	};
	class OPTRE_Music_SwordsInTheSky
	{
		name	="[OPTRE Remixes] Swords In The Sky";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_swordsinthesky.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 169;
	};
	class OPTRE_Music_ThroughTheWoods
	{
		name	="[OPTRE Remixes] Through The Woods";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_throughthewoods.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 89;
	};
	class OPTRE_Music_UnderCoverOfMoonlight
	{
		name	="[OPTRE Remixes] Under Cover of Moonlight";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_undercoverofmoonlight.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 68;
	};
	class OPTRE_Music_Wandering
	{
		name	="[OPTRE Remixes] Wandering";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_wandering.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 46;
	};
	class OPTRE_Music_WarsTribute
	{
		name	="[OPTRE Remixes] Wars Tribute";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_MusicRemix_warstribute.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 65;
	};
	class OPTRE_Music_CloseQuartersLoop
	{
		name	="[OPTRE Remixes] Close Quarters (Loop)";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_Loop_closequarters.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 42;
	};
	class OPTRE_Music_NightRunLoop
	{
		name	="[OPTRE Remixes] Night Run (Loop)";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_Loop_nightrun.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 42;
	};
	class OPTRE_Music_SneakingLoop
	{
		name	="[OPTRE Remixes] Sneaking (Loop)";
		sound[]	={"\OPTRE_Music\Remixes\OPTRE_Loop_sneaking.ogg",1,1};
		musicClass = "OPTRE_Remixes";
		duration = 91;
	};
	// Remixes END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// Ambient START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_Music_Creeping
	{
		name	="[OPTRE Ambient] Creeping 1";
		sound[]	={"\OPTRE_Music\Ambient\OPTRE_Ambient_creeping.ogg",1,1};
		musicClass = "OPTRE_Ambient";
		duration = 34;
	};
	class OPTRE_Music_Creeping2
	{
		name	="[OPTRE Ambient] Creeping 2";
		sound[]	={"\OPTRE_Music\Ambient\OPTRE_Ambient_creeping2.ogg",1,1};
		musicClass = "OPTRE_Ambient";
		duration = 16;
	};
	class OPTRE_Music_Luck
	{
		name	="[OPTRE Ambient] Luck";
		sound[]	={"\OPTRE_Music\Ambient\OPTRE_Ambient_luck.ogg",1,1};
		musicClass = "OPTRE_Ambient";
		duration = 42;
	};
	// Ambient END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// Homefront START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_Music_CovenantVictory
	{
		name	="[Homefront OST] Covenant Victory";
		sound[]	={"\OPTRE_Music\Homefront\OPTRE_HomefrontSoundtrackMusic_covenantvictory.ogg",1,1};
		musicClass = "OPTRE_Homefront";
		duration = 120;
	};
	class OPTRE_Music_FleetOps
	{
		name	="[Homefront OST] Fleet Ops";
		sound[]	={"\OPTRE_Music\Homefront\OPTRE_HomefrontSoundtrackMusic_fleetops.ogg",1,1};
		musicClass = "OPTRE_Homefront";
		duration = 213;
	};
	// Homefront END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};