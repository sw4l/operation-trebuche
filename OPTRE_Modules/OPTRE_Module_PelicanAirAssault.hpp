	class Module_OPTRE_PelicanAirAssault: Module_F
	{
		// Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
		displayName = "Pelican Air Assault Event"; // Name displayed in the menu
		icon = "\OPTRE_Modules\data\picture\Icon_OPTRE.paa"; // Map icon. Delete this entry to use the default icon
		category = "OPTRE_EditorSupport";
		function = "OPTRE_fnc_ModulePelicanAirAssault";// Name of function triggered once conditions are met
		functionPriority = 99;// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;// 0 for server only execution, 1 for remote execution on all clients upon mission start, 2 for persistent execution
		isTriggerActivated = 1;// 1 for module waiting until all synced triggers are activated
		//isDisposable = 1;// 1 if modules is to be disabled once it's activated (i.e., repeated trigger activation won't work) // CAUSEING ERROR?? // 
		//curatorInfoType = "RscDisplayAttributeModuleNuke";// Menu displayed when the module is placed or double-clicked on by Zeus
		author = "Article 2 Studios";
		
		// Module arguments
		class Arguments
		{
			class Pelican_Unarmed_Colour
  			{
				displayName = "D77H-TCI Stock Paint";
				description = "[Pelican Unarmed] The D77H-TCI is an unarmed variant of the Pelican Drop Ship, this option determines what kind of camouflage pattern the spawned pelican will have.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Paint Scheme: Black"; value = "black"; }; 
					class n2	{name = "Paint Scheme: Green"; value = "green";}; 
					class n3	{name = "Paint Scheme: Green Marine"; value = "marine"; default = 1;}; 
					class n4	{name = "Paint Scheme: Tan"; value = "tan";}; 
					class n5 	{name = "Paint Scheme: Insurrection"; value = "insurrection";};
				};
			};	
			class spawnDir
  			{
				displayName = "Spawn Direction"; // Argument label
				description = "A number that determines the direction from the module the Pelican will spawn.";// Tooltip description
				defaultValue = "360"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class exitDir
  			{
				displayName = "Exit Direction"; // Argument label
				description = "A number that determines the direction from the module the Pelican will spawn.";// Tooltip description
				defaultValue = "180"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};			
			class distance
  			{
				displayName = "Spawn / De-spawn Distance"; // Argument label
				description = "A number that determines the distance the Pelican will be spawned in the direction of Exit and Spawn.";// Tooltip description
				defaultValue = "3000"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
			class flyInHeight
  			{
				displayName = "Fly In Height"; // Argument label
				description = "A number that determines the height the Pelican will fly at.";// Tooltip description
				defaultValue = "100"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};

			class side
  			{
				displayName = "Side Of Pelican / Groups";
				description = "Side Of Pelican, WEST or EAST";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Side: EAST"; value = "EAST"; }; 
					class n2	{name = "Side: WEST"; value = "WEST"; default = 1;}; 
					class n3    {name = "Side: Independent"; value = "INDEPENDENT ";};		
					class n4    {name = "Side: civilian"; value = "CIVILIAN";};						
				};
			};

			class vehicle
  			{
				displayName = "Vehicle To Drop";
				description = "Type of vehicle required. A driver and a gunner will be added to the vehicles.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Don't Drop A Vehicles"; value = "";}; 

					class a	{name = "Insurrectionist Warthog APC"; value = "OPTRE_M12_FAV_APC";}; 
					class b	{name = "Insurrectionist Warthog Unarmed"; value = "PTRE_M12_FAV_ins";}; 
					class c	{name = "Insurrectionist Warthog MG"; value = "OPTRE_M12_LRV_ins";}; 
					class d	{name = "Insurrectionist Warthog Rocket"; value = "OPTRE_M12A1_LRV_ins";}; 
					class e	{name = "Insurrectionist Warthog AA"; value = "PTRE_M12R_AA_ins";}; 
					class f	{name = "Insurrectionist Mongoose"; value = "OPTRE_Mongoose_Ins_F";}; 
					class g	{name = "Insurrectionist Mule"; value = "OPTRE_m1015_mule_ins";}; 
					
					class n2	{name = "Warthog Unarmed Green"; value = "OPTRE_M12_FAV";}; 
					class n3	{name = "Warthog Unarmed Black"; value = "OPTRE_M12_FAV_black";}; 
					class n4	{name = "Warthog Unarmed Marine"; value = "OPTRE_M12_FAV_marine"; default = 1;}; 
					class n5	{name = "Warthog Unarmed Snow"; value = "OPTRE_M12_FAV_snow";}; 
					class n6	{name = "Warthog Unarmed Tan"; value = "OPTRE_M12_FAV_tan";}; 
					
					class n7	{name = "Warthog HMG Green"; value = "OPTRE_M12_LRV";}; 
					class n8	{name = "Warthog HMG Black"; value = "OPTRE_M12_LRV_black";}; 
					class n9	{name = "Warthog HMG Marine"; value = "OPTRE_M12_LRV_marine";}; 
					class n10	{name = "Warthog HMG Snow"; value = "OPTRE_M12_LRV_snow";}; 
					class n11	{name = "Warthog HMG Tan"; value = "OPTRE_M12_LRV_tan";}; 

					class n12	{name = "Warthog Rocket Green"; value = "OPTRE_M12A1_LRV";}; 
					class n13	{name = "Warthog Rocket Black"; value = "OPTRE_M12A1_LRV_black";}; 
					class n14	{name = "Warthog Rocket Marine"; value = "OPTRE_M12A1_LRV_marine";}; 
					class n15	{name = "Warthog Rocket Snow"; value = "OPTRE_M12A1_LRV_snow";}; 
					class n16	{name = "Warthog Rocket Tan"; value = "OPTRE_M12A1_LRV_tan";}; 
					
					class n17	{name = "Warthog Gauss Green"; value = "OPTRE_M12G1_LRV";}; 
					class n18	{name = "Warthog Gauss Black"; value = "OPTRE_M12G1_LRV_black";}; 
					class n19	{name = "Warthog Gauss Marine"; value = "OPTRE_M12G1_LRV_marine";}; 
					class n20	{name = "Warthog Gauss Snow"; value = "OPTRE_M12G1_LRV_snow";}; 
					class n21	{name = "Warthog Gauss Tan"; value = "OPTRE_M12G1_LRV_tan";}; 

					class n22	{name = "Warthog AA Green"; value = "OPTRE_M12R_AA";}; 
					class n23	{name = "Warthog AA Black"; value = "OPTRE_M12R_AA_black";}; 
					class n24	{name = "Warthog AA Marine"; value = "OPTRE_M12R_AA_marine";}; 
					class n25	{name = "Warthog AA Snow"; value = "OPTRE_M12R_AA_snow";}; 
					class n26	{name = "Warthog AA Tan"; value = "OPTRE_M12R_AA_tan";}; 

					class n27	{name = "Warthog Transport Green"; value = "OPTRE_M813_TT";}; 
					class n28	{name = "Warthog Transport Black"; value = "OPTRE_M813_TT_black";}; 
					class n29	{name = "Warthog Transport Marine"; value = "OPTRE_M813_TT_marine";}; 
					class n30	{name = "Warthog Transport Snow"; value = "OPTRE_M813_TT_snow";}; 
					class n31	{name = "Warthog Transport Tan"; value = "OPTRE_M813_TT_tan";}; 

					class n32	{name = "Falcon Black"; value = "OPTRE_UNSC_falcon_black";}; 
					class n33	{name = "Falcon Green"; value = "OPTRE_UNSC_falcon_green";}; 
					class n34	{name = "Falcon Snow"; value = "OPTRE_UNSC_falcon_snow";}; 
					class n35	{name = "Falcon Tan"; value = "OPTRE_UNSC_falcon_tan";}; 
					
					class n36	{name = "Stallion Tan"; value = "OPTRE_m1087_stallion_unsc";}; 
					class n37	{name = "Mule Tan"; value = "OPTRE_m1015_mule_unsc";}; 
					
				};
			};
			
			class box1
  			{
				displayName = "Branch Of Military";
				description = "Type of units to be spawned, ODST, Army..";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "ODST"; value = "ODST"; }; 					
					class n9 	{name = "Marines"; value = "Marines"; default = 1;};
					class n2	{name = "Army Arid"; value = "Army Arid";}; 
					class n3	{name = "Army Desert"; value = "Army Desert";}; 
					class n4	{name = "Army Snow"; value = "Army Snow";}; 
					class n5	{name = "Army Tropic"; value = "Army Tropic";}; 
					class n6	{name = "Army Woodland"; value = "Army Woodland";}; 					
					class n7	{name = "Eridanus Rebels"; value = "Eridanus Rebels";}; 
					class n8	{name = "United Rebel Front"; value = "United Rebel Front";}; 

				};
			};
			class box2
  			{
				displayName = "Squad Sizes";
				description = "The number of units in both squads spawned. 2 squads will always be spawned.";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "NUMBER"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					/* class n1	{name = "none"; value = 1; }; 
					class n2	{name = "Random Supply Pod"; value = 2; }; 
					class n3	{name = "Sniper Supply Pod"; value = 3;}; 
					class n4	{name = "Medical Supply Pod"; value = 4;}; 
					class n5	{name = "AR Supply Pod"; value = 5;}; */
					class n6	{name = "Six"; value = 6; default = 1;}; 
				};
			};	
 			class box3
  			{
				displayName = "WayPoints"; // Argument label
				description = "An array or marker position that the groups spawned will follow once on the ground.";// Tooltip description
				defaultValue = "MapMarkerName1,MapMarkerName2,Map_Marker_Name_Three";
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};

			class finalWaypoint 
  			{
				displayName = "Final Waypoint Task";
				description = "Side Of Pelican, WEST or EAST";
				defaultValue = "NONE"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
				class values
				{
					class n1	{name = "Cycle Back To First Waypoint"; value = "cycle"; default = 1; }; 
					class n2	{name = "Garrison Near Final Waypoint"; value = "garrison";}; 
					class n3    {name = "Patrol Around Final Waypoint"; value = "patrol ";};						
				};
			};
			
			class code
  			{
				displayName = "Custom Box Code"; // Argument label
				description = "A script that will be run on any pod assigned as CUSTOM. _This refers to the pod that is spawned.";// Tooltip description
				defaultValue = "_this addMagazineCargoGlobal ['OPTRE_60Rnd_5x23mm_Mag',4]; _this addWeaponCargoGlobal ['OPTRE_M7',1];"; // Default text filled in the input box
				typeName = "STRING"; // Value type, can be "NUMBER", "STRING" or "BOOL"
			};
					   
				
		};	
		
		class ModuleDescription
		{
			description = "This module will spawn a Pelican drop ship that can deliver 2 squads and / or a vehicle the spawned groups can be controlled by zeus. Place the module where you would like the supplies to be dropped on the map. Note that if a Landing Pad is nearby the pelican will always try to land on that position when delivering vehicles as this module uses the LAND command, this may cause a problem if more than one Pelican try to land on a pad at once (This apply s to Landing Pads native to the map as well a spawned / placed pads.).";
			sync[] = {"EmptyDetector"};
			position = 1;
			direction = 0;
						
			class EmptyDetector {
				duplicate = 1;
				position = 0;
				direction = 0;
				optional = 1;
			};
			
		};
	};