	class Module_OPTRE_NoShipODSTRoom: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "HEV No Ship ODST Room"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_HEV";
		function = "OPTRE_fnc_ModuleHEVFakeODSTRoom";// Name of function triggered once conditions are met
		functionPriority = 99;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 0;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		author = "Article 2 Studios";
		is3DEN = 1;
		
		// Module arguments
		class Arguments
		{		
			class name
  			{
				displayName = "Variable Name"; // Argument label
				description = "This name must be unique or the HEVs wont be assigned variable names and the system wont work.";// Tooltip description
				defaultValue = "OPTRE_HEV"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};			
			class Column
  			{
				displayName = "Number Of Extra Columns"; // Argument label
				description = "Number of Columns of HEVs. Number should always be positive. 12 HEVs are spawned as standard, adding more HEV may decrease performance.";// Tooltip description
				defaultValue = "0"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};		
			class Row
  			{
				displayName = "Number Of HEVs In Columns"; // Argument label
				description = "Number of HEVs In A Column, there are two rows in each column. 12 HEVs are spawned as standard, adding more HEV may decrease performance.";// Tooltip description
				defaultValue = "12"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
		};	
		
		// Module description. Must inherit from base class, otherwise pre-defined entities won't be available
		class ModuleDescription: ModuleDescription
		{
			description = "Short module description"; // Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)
	 
			class LocationArea_F
			{
				description[] = { // Multi-line descriptions are supported
					"First line",
					"Second line"
				};
				position = 1; // Position is taken into effect
				direction = 1; // Direction is taken into effect
				optional = 1; // Synced entity is optional
				duplicate = 1; // Multiple entities of this type can be synced
				synced[] = {"BLUFORunit","AnyBrain"}; // Pre-define entities like "AnyBrain" can be used. See the list below
			};
			class BLUFORunit
			{
				description = "Short description";
				displayName = "Any BLUFOR unit"; // Custom name
				icon = "iconMan"; // Custom icon (can be file path or CfgVehicleIcons entry)
				side = 1; // Custom side (will determine icon color)
			};
		};
		
	};