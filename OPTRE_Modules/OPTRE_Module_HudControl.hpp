	class Module_OPTRE_HUDSystem: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		//scopeCurator = 2;
		displayName = "HUD Control Modules"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_HUD";
		function = "OPTRE_fnc_ModuleHUD";// Name of function triggered once conditions are met
		functionPriority = 1;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 1;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		
		// Module arguments
		class Arguments
		{
			class HUDRadarShowEn 
  			{
				displayName = "Limit HUD Radar";
				description = "Limits what the players HUD radar can show";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Radar can show, group, side & known by side";	value = 2; default = 1;}; 
					class n2	{name = "Radar can show, group & side";	value = 1;}; 
					class n3	{name = "Radar can show, group only";	value = 0;}; 
				};
			};
			/*
			class HUDHEVControl 
  			{
				displayName = "HEV Control Type";
				description = "Force the player into first person when controlling ";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Radar can show, group, side & known by side";	value = 1; default = 1;}; 
					class n3	{name = "Radar can show, group only";	value = 0;}; 
				};
			};*/
		};	
		
		class ModuleDescription
		{
			description[] = {
				"Placing this module will allow you to control some aspects of all players HUDs. This module can be synchronised to a trigger an deployed at any time in a mission to limit or expand a players HUD options.";
			};
		};
	};	