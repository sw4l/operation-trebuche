class CfgSounds 
{
	//sounds[] = {"OPTRE_Sounds_Detach","OPTRE_Sounds_DetachAmbient","OPTRE_Sounds_DetachOLD","OPTRE_Sounds_ReEntryBuildUp","OPTRE_Sounds_ReEntryLoop","OPTRE_Sounds_WindLoopNewLong","OPTRE_Sounds_Engine"};
	class OPTRE_Sounds_Jetpack_LoopShort
	{
		name = "OPTRE Jetpack ";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\JetpackLoopShort.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_Jetpack_StartUp
	{
		name = "OPTRE Jetpack Start Up";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\JetpackStartup.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_Jetpack_End
	{
		name = "OPTRE Jetpack Off";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\JetpackEnd.ogg", 1, 1};
		titles[] = {0,""};
	};

	class OPTRE_Sounds_Detach
	{
		dlc = "OPTRE";
		author	= "Article 2 Studios";
		name = "OPTRE Detach";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\PodDetach.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_DetachAmbient
	{
		dlc = "OPTRE";
		author	= "Article 2 Studios";
		name = "OPTRE Detach Ambient";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\PodsDetaching.ogg", 1, 1};
		titles[] = {0,""};
	};	
	class OPTRE_Sounds_DetachOLD // uses bis sound, dont edit path. 
	{
		dlc = "OPTRE";
		author	= "Article 2 Studios";
		name = "OPTRE Detach Old";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\30mm40mm_shell_explosion_01.wss", 0.8, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_ReEntryBuildUp
	{
		dlc = "OPTRE";
		author	= "Article 2 Studios";
		name = "OPTRE Re-Entry Build Up";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\ReEntryBuildUp.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_ReEntryLoop
	{
		dlc = "OPTRE";
		author	= "Article 2 Studios";
		name = "OPTRE Re-Entry Loop";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\ReEntryBuildUpLoop.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_WindLoopNewLong
	{
		dlc = "OPTRE";
		author	= "Article 2 Studios";
		name = "OPTRE Re-Entry Build Up";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\WindBackgroundLoop.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_Engine
	{
		dlc = "OPTRE";
		author	= "Article 2 Studios";
		name = "OPTRE Engine";
		sound[] = {"\OPTRE_FunctionsLibrary\sound\EngineBurn.ogg", 1, 1};
		titles[] = {0,""};
	};
};