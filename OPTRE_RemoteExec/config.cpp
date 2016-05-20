class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_RemoteExec
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.14;
		requiredAddons[] 																		= {"Extended_EventHandlers", "cba_main", "A3_Map_Stratis"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_RemoteExec.pbo";
	};
};

class CfgRemoteExec
{
    class Commands
    {
            mode = 2;
    };
    class Functions
    {
            mode = 2;
    };
};