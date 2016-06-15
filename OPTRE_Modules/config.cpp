#include "CfgPatches.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
#include "CfgSounds.hpp"

#include "Dialogs\Common.hpp"
#include "Dialogs\OPTRE_PelicanSupDrop.hpp"
#include "Dialogs\OPTRE_PelicanAirAssault.hpp"
#include "Dialogs\OPTRE_ODST_Drop.hpp"
#include "Dialogs\OPTRE_CAS.hpp"

class CfgSounds 
{
	sounds[] = {};
	class OPTRE_Sounds_Detach
	{
		name = "OPTRE Detach";
		sound[] = {"\OPTRE_Modules\data\sounds\PodDetach.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_DetachAmbient
	{
		name = "OPTRE Detach Ambient";
		sound[] = {"\OPTRE_Modules\data\sounds\PodsDetaching.ogg", 1, 1};
		titles[] = {0,""};
	};	
	class OPTRE_Sounds_DetachOLD // uses bis sound, dont edit path. 
	{
		name = "OPTRE Detach Old";
		sound[] = {"@A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01", 0.8, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_ReEntryBuildUp
	{
		name = "OPTRE Re-Entry Build Up";
		sound[] = {"\OPTRE_Modules\data\sounds\ReEntryBuildUp.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_ReEntryLoop
	{
		name = "OPTRE Re-Entry Loop";
		sound[] = {"\OPTRE_Modules\data\sounds\ReEntryBuildUpLoop.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_WindLoopNewLong
	{
		name = "OPTRE Re-Entry Build Up";
		sound[] = {"\OPTRE_Modules\data\sounds\WindBackgroundLoop.ogg", 1, 1};
		titles[] = {0,""};
	};
	class OPTRE_Sounds_Engine
	{
		name = "OPTRE Engine";
		sound[] = {"\OPTRE_Modules\data\sounds\EngineBurn.ogg", 1, 1};
		titles[] = {0,""};
	};
};