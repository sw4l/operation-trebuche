	class Module_OPTRE_CAS: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "CAS Air Strike Event"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_EditorSupport";
		function = "OPTRE_fnc_ModuleCAS";// Name of function triggered once conditions are met
		functionPriority = 99;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 1;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		author = "Article 2 Studios";
		is3DEN = 0;
				
		// Module arguments
		class Arguments
		{
			class vehicle
  			{
				displayName = "CAS Vehicle";
				description = "Chose what aircraft to strike at heart of the enemy!";
				defaultValue = "OPTRE_Pelican_armed_black"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "UNSC D77H-TCI [Black]"; 			value = "OPTRE_Pelican_armed_black"; 	default = 0;	}; 
					class n2	{name = "UNSC D77H-TCI [Green]"; 			value = "OPTRE_Pelican_armed_green";					}; 
					class n3	{name = "UNSC D77H-TCI [Marine]"; 			value = "OPTRE_Pelican_armed_marine";					}; 
					class n4	{name = "UNSC D77H-TCI [Tan]"; 				value = "OPTRE_Pelican_armed_tan";						}; 
					class n5 	{name = "URF D77H-TCI [Insurrection]"; 		value = "OPTRE_Pelican_armed_ins";						};
					class n6	{name = "UNSC UH-144 Falcon [Black]"; 		value = "OPTRE_UNSC_falcon_black";						}; 
					class n7	{name = "UNSC UH-144 Falcon [Green]"; 		value = "OPTRE_UNSC_falcon_green";						}; 
					class n8	{name = "UNSC UH-144 Falcon [Snow]"; 		value = "OPTRE_UNSC_falcon_snow";						}; 
					class n9	{name = "UNSC UH-144 Falcon [Tan]"; 		value = "OPTRE_UNSC_falcon_tan";						}; 
					class n10	{name = "UNSC GA-TL1/A Longsword [CAS]"; 	value = "OPTRE_Longsword_CAS_F";						}; 
					class n11	{name = "UNSC GA-TL1/A Longsword [Cannon]"; value = "OPTRE_Longsword_CANNON_F";						}; 					
				};
			};	
			class flyOutHeight
  			{
				displayName = "Fly Out Height"; // Argument label
				description = "A number that determines the height the Pelican will fly away from the target at.";// Tooltip description
				defaultValue = "40"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			/*class side
  			{
				displayName = "Side Of CAS";
				description = "Side Of CASE, WEST or EAST, GUR, CIV";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Side: EAST"; value = "EAST"; }; 
					class n2	{name = "Side: WEST"; value = "WEST"; default = 1;}; 
					class n3    {name = "Side: Independent"; value = "INDEPENDENT ";};		
					class n4    {name = "Side: civilian"; value = "CIVILIAN";};						
				};
			};*/
					   			
		};	
		
		class ModuleDescription
		{
			description = "This module will spawn a CAS asset that will perform a air strike at the location the module is placed. The direction of this module determines from which direction the CAS asset will approach the target from.";
			sync[] = {"EmptyDetector"};
			position = 1;
			direction = 1;
						
			class EmptyDetector {
				duplicate = 1;
				position = 0;
				direction = 0;
				optional = 1;
			};
			
		};
	};