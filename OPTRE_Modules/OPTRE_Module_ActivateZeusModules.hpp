	class Module_OPTRE_ActivateZeusModules: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		//scopeCurator = 2;
		displayName = "Activate Zeus Modules"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_Zeus";
		function = "OPTRE_fnc_ModuleZeus";// Name of function triggered once conditions are met
		functionPriority = 100;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		author = "Article 2 Studios";
		
		// Module arguments
		class Arguments
		{
		
		};	

		class ModuleDescription
		{
			description = "Placing this module will correctly load all OPTRE modules for curators. Placing any other OPTRE editor module will also have this effect.";
			sync[] = {"EmptyDetector"};
			position = 0;
			direction = 0;
		};
		
	};	