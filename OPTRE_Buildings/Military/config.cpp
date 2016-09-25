class CfgPatches
{
	
	class OPTRE_UNSC_Structure_Military
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_structures_f","OPTRE_Core"};
    };
};

class CfgVehicles
{
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Strategic;
	class ThingX;
	class Items_base_F: ThingX
	{
		class DestructionEffects;
	};
	class Ruins_F;
	class B_Slingload_01_fuel_F;

	class Land_OPTRE_catwalk_end: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_catwalk_end";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (End)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_catwalk_helipad: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_catwalk_helipad";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (Helipad)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_catwalk_long: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_catwalk_long";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (Long)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_catwalk_short: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_catwalk_short";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (Short)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_catwalk_supported: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_catwalk_supported";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Catwalk (Supported)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	class Land_OPTRE_ODST_Grave: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "ODST Grave";
		model = "\OPTRE_Buildings\Military\OPTRE_odst_grave.p3d";
		author = "Article 2 Studios";
		armor = 999999;
		armorStructural = 999;
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	class Land_OPTRE_Soldier_Grave: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Soldier Grave";
		model = "\OPTRE_Buildings\Military\OPTRE_soldier_grave.p3d";
		author = "Article 2 Studios";
		armor = 999999;
		armorStructural = 999;
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	class Land_OPTRE_Monument: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Monument";
		model = "\OPTRE_Buildings\Military\OPTRE_monument.p3d";
		author = "Article 2 Studios";
		armor = 999999;
		armorStructural = 999;
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	class Land_OPTRE_Holotable: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Holo Table";
		model = "\OPTRE_Buildings\Military\OPTRE_holotable.p3d";
		author = "Article 2 Studios";
		armor = 999999;
		armorStructural = 999;
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	/*class Land_OPTRE_Holotable_Stratis: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Holo Table (Stratis)";
		author = "Article 2 Studios";
		model = "\OPTRE_Buildings\Military\OPTRE_holotable.p3d";
		hiddenSelections[]= {"map_altis"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {};
		armor = 999999;
		armorStructural = 999;
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	class Land_OPTRE_Holotable_Altis: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Holo Table (Altis)";
		author = "Article 2 Studios";
		model = "\OPTRE_Buildings\Military\OPTRE_holotable.p3d";
		hiddenSelections[]= {"map_stratis"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[]= {};
		armor = 999999;
		armorStructural = 999;
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};*/
	class Land_OPTRE_generator: Items_base_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		displayName = "Portable Generator";
		model = "\OPTRE_Buildings\Military\OPTRE_generator.p3d";
		author = "Article 2 Studios";
		armor = 999999;
		armorStructural = 999;
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_corner: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_corner";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Corner)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_damage: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_damage";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Damaged)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_gate: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_gate";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Gate)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_hub: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_hub";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Hub)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_optre_milwall_segment: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\optre_milwall_segment";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Military Wall (Segment)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	
	class Land_OPTRE_barrel_hydrogen: Items_Base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_barrel_hydrogen";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 55;
		armorStructural = 4;
		scope=2;
		displayName="Barrel (HydrogenEXP1)";
		destrType="DestructBuilding";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		class EventHandlers
		{
			Killed = "(_this select 0) spawn {sleep (random 0.5); _pos = getPosATL _this; _this setVelocity [0,0,2]; sleep (random 0.3); _explo = ""OPTRE_Exp_Hydrogen_Small"" createVehicle _pos; };";
		};
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "DestructionFire";
				intensity = 0.001;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelFire1
			{
				simulation = "particles";
				type = "BarelDestructionFire";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelDestr
			{
				simulation = "destroy";
				type = "FuelStationDestr";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class Land_OPTRE_fusion_coil: Items_Base_F
	{
		//SERIOUSLY DO NOT INCLUDE THIS IN THE FINAL BUILD UNLESS THE PROPER MODEL IS MADE. SET IT TO SCOPE 1 or 0. THIS IS JUST TO TEST THE PHYSICS/SCRIPTS OF IT
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_fusion_coil";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 75;
		armorStructural = 4;
		scope=1;
		displayName="Fusion Coil (PLACEHOLDER!)";
		destrType="DestructBuilding";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		class EventHandlers
		{
			Killed = "(_this select 0) spawn {sleep (random 0.5); _pos = getPosATL _this; _this setVelocity [0,0,2]; sleep (random 0.2); _explo = ""OPTRE_Exp_Fusion_Coil"" createVehicle _pos; };";
		};
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "DestructionFire";
				intensity = 0.001;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelFire1
			{
				simulation = "particles";
				type = "FireBallBrightSmall";
				position = "DestructionFire";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelDestr
			{
				simulation = "destroy";
				type = "FuelStationDestr";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};	
	
	class Land_OPTRE_barrel_unmarked: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_barrel_unmarked";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 5;
		armorStructural = 1;
		scope=2;
		displayName="Barrel";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_barrel_water: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_barrel_water";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 5;
		armorStructural = 1;
		scope=2;
		displayName="Barrel (Water)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_warthog_tire: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_warthog_tire";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 55;
		armorStructural = 5;
		scope=2;
		displayName="Warthog Tire";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	
	class Land_OPTRE_field_bunk_closed: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_field_bunk_closed";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 555;
		armorStructural = 5;
		scope=2;
		displayName="Field Bunk (Closed)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	
	class Land_OPTRE_field_bunk_open: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_field_bunk_open";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 555;
		armorStructural = 5;
		scope=2;
		displayName="Field Bunk (Open)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	
	class Land_OPTRE_field_bunk_double: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_field_bunk_double";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 1055;
		armorStructural = 5;
		scope=2;
		displayName="Field Bunk (Double)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};
	
	class Land_OPTRE_IV_Drip: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_IV_Drip";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 5;
		armorStructural = 1;
		scope=2;
		displayName="IV Drip";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_blast_barrier_dest: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_blast_barrier_dest";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Blast Barrier (Destroyed)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_blast_barrier_dam: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_blast_barrier_dam";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 500;
		armorStructural = 4;
		scope=2;
		displayName="Blast Barrier (Damaged)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		destrType="DestructBuilding";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\OPTRE_Buildings\Military\OPTRE_blast_barrier_dest.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	
	class Land_OPTRE_blast_barrier: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_blast_barrier";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 500;
		armorStructural = 4;
		scope=2;
		destrType="DestructBuilding";
		displayName="Blast Barrier";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		class Reflectors
		{
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "";
				selection = "";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 220;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
			class Light_2: Light_1
			{
				position = "Light_2_pos";
				direction = "Light_2_dir";
			};
			class Light_3: Light_1
			{
				position = "Light_3_pos";
				direction = "Light_3_dir";
			};
			class Light_4: Light_1
			{
				position = "Light_4_pos";
				direction = "Light_4_dir";
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\OPTRE_Buildings\Military\OPTRE_blast_barrier_dam.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};

	
	class Land_OPTRE_fury_static: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_fury_static";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Fury Nuke";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_hard_tent_des: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_hard_tent_des";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Hard Tent (Desert)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_hard_tent_grn: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_hard_tent_grn";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Hard Tent (Green)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_hard_tent_urban: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_hard_tent_urban";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Hard Tent (Urban)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_medical_tent_tan: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_medical_tent_tan";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Medical Hard Tent (Desert)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_medical_tent_grn: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_medical_tent_grn";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Medical Hard Tent (Green)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_medical_tent_gry: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_medical_tent_gry";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Medical Hard Tent (Urban)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_ONI_barrier: Items_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_ONI_barrier";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="ONI Barrier";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
	};

	class Land_OPTRE_watchtower_desert: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_watchtower_desert";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Watchtower (Desert)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		ladders[] =
		{
			{
				"start1",
				"end1"
			}
		};
	};

	class Land_OPTRE_watchtower_jungle: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_watchtower_jungle";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Watchtower (Jungle)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		ladders[] =
		{
			{
				"start1",
				"end1"
			}
		};
	};

	class Land_OPTRE_watchtower_snow: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_watchtower_snow";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Watchtower (Snow)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		ladders[] =
		{
			{
				"start1",
				"end1"
			}
		};
	};

	class Land_OPTRE_watchtower_urban: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_watchtower_urban";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Watchtower (Urban)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		ladders[] =
		{
			{
				"start1",
				"end1"
			}
		};
	};

	class Land_OPTRE_watchtower_woodland: House_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Military\OPTRE_watchtower_woodland";
		vehicleClass = "OPTRE_City_Building_class";
		armor = 999999;
		armorStructural = 999;
		scope=2;
		displayName="Watchtower (Woodland)";
		editorCategory = "OPTRE_EditorCategory_Objects";
		editorSubcategory = "OPTRE_EditorSubcategory_Objects_Military";
		ladders[] =
		{
			{
				"start1",
				"end1"
			}
		};
	};
};
