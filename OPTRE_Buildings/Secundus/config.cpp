class CfgPatches
{
	
	class OPTRE_UNSC_Structure_Highway
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3_structures_f","OPTRE_Core"};
    };
};

class CfgVehicles
{
	class House_F;
	class secundus_cliff_wall_a: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Cliff Wall (Blunt)";
		model = "\OPTRE_buildings\secundus\cliff_wall.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
	};
	class secundus_hallway_long: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Long)";
		model = "\OPTRE_buildings\secundus\hallway_long.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";

		aggregateReflectors[] =
		{
			{"Light_1", "Light_2","Light_3", "Light_4"}
		};

		class Reflectors
		{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
		};

	};
	class secundus_hallway_short: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Short)";
		model = "\OPTRE_buildings\secundus\hallway_short.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
		
		aggregateReflectors[] =
		{
			{"Light_1", "Light_2"}
		};

		class Reflectors
				{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
		};
		
	};
	class secundus_hallway_decomp_exit: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Decompression Exit)";
		model = "\OPTRE_buildings\secundus\hallway_decomp_exit.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";


		aggregateReflectors[] =
		{
			{"Light_1", "Light_2","Light_3","Light_4", "Light_5","Light_6"}
		};

		class Reflectors
				{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
			class Light_5: Light_1
			{
				position			= "Light_5_pos";
				direction			= "Light_5_dir";
				hitpoint			= "Light_5_hitpoint";
				selection			= "Light_5_hide";
			};
			class Light_6: Light_1
			{
				position			= "Light_6_pos";
				direction			= "Light_6_dir";
				hitpoint			= "Light_6_hitpoint";
				selection			= "Light_6_hide";
			};
		};
	};
class secundus_hallway_decomp: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Decompression)";
		model = "\OPTRE_buildings\secundus\hallway_decomp.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";


		aggregateReflectors[] =
		{
			{"Light_1", "Light_2","Light_3","Light_4"}
		};

		class Reflectors
				{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
		};
	};
	class secundus_hallway_stairs: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Stairs)";
		model = "\OPTRE_buildings\secundus\hallway_stairs.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";

		aggregateReflectors[] =
		{
			{"Light_1", "Light_2"}
		};

		class Reflectors
				{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
		};
	};
	class secundus_hallway_turn: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Turn)";
		model = "\OPTRE_buildings\secundus\hallway_turn.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";

	aggregateReflectors[] =
		{
			{"Light_1", "Light_2"}
		};

		class Reflectors
				{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
		};
	};
	class secundus_hallway_turn_exterior: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Turn Exterior)";
		model = "\OPTRE_buildings\secundus\hallway_turn_exterior.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";

	aggregateReflectors[] =
		{
			{"Light_1", "Light_2"}
		};

		class Reflectors
				{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
		};
	};
	class secundus_hallway_t_intersection: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (T Intersection)";
		model = "\OPTRE_buildings\secundus\hallway_t_intersection.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
	};
	class secundus_hallway_x_intersection: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (X Intersection)";
		model = "\OPTRE_buildings\secundus\hallway_x_intersection.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
	};
	class secundus_hangar_1: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hangar 1";
		model = "\OPTRE_buildings\secundus\hangar_1.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
	};
	class secundus_hangar_2: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hangar 2";
		model = "\OPTRE_buildings\secundus\hangar_2.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
	};
	class secundus_hangar_3: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hangar 3";
		model = "\OPTRE_buildings\secundus\hangar_3.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
	};
	class secundus_hangar_4: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hangar 4";
		model = "\OPTRE_buildings\secundus\hangar_4.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
	};
	class secundus_hallway_window_v1: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Window V1)";
		model = "\OPTRE_buildings\secundus\hallway_window_v1.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";

		aggregateReflectors[] =
		{
			{"Light_1", "Light_2","Light_3", "Light_4"}
		};

		class Reflectors
		{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
		};
	};
	class secundus_hallway_window_v2: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway (Window V2)";
		model = "\OPTRE_buildings\secundus\hallway_window_v2.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
		aggregateReflectors[] =
		{
			{"Light_1", "Light_2","Light_3","Light_4", "Light_5","Light_6"}
		};

		class Reflectors
				{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
			class Light_5: Light_1
			{
				position			= "Light_5_pos";
				direction			= "Light_5_dir";
				hitpoint			= "Light_5_hitpoint";
				selection			= "Light_5_hide";
			};
			class Light_6: Light_1
			{
				position			= "Light_6_pos";
				direction			= "Light_6_dir";
				hitpoint			= "Light_6_hitpoint";
				selection			= "Light_6_hide";
			};
		};
	};
	class secundus_room_small: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Room (Small)";
		model = "\OPTRE_buildings\secundus\room_small.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";

		aggregateReflectors[] =
		{
			{"Light_1", "Light_2","Light_3", "Light_4"}
		};

		class Reflectors
		{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
		};
	};
	class secundus_room_medium: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Room (Medium)";
		model = "\OPTRE_buildings\secundus\room_medium.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";

		aggregateReflectors[] =
		{
			{"Light_1", "Light_2","Light_3", "Light_4"}
		};

		class Reflectors
		{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
		};
	};
	class secundus_room_large: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Room (Large)";
		model = "\OPTRE_buildings\secundus\room_large.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";


		aggregateReflectors[] =
		{
			{"Light_1", "Light_2","Light_3","Light_4", "Light_5","Light_6"}
		};

		class Reflectors
				{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position			= "Light_2_pos";
				direction			= "Light_2_dir";
				hitpoint			= "Light_2_hitpoint";
				selection			= "Light_2_hide";
			};
			class Light_3: Light_1
			{
				position			= "Light_3_pos";
				direction			= "Light_3_dir";
				hitpoint			= "Light_3_hitpoint";
				selection			= "Light_3_hide";
			};
			class Light_4: Light_1
			{
				position			= "Light_4_pos";
				direction			= "Light_4_dir";
				hitpoint			= "Light_4_hitpoint";
				selection			= "Light_4_hide";
			};
			class Light_5: Light_1
			{
				position			= "Light_5_pos";
				direction			= "Light_5_dir";
				hitpoint			= "Light_5_hitpoint";
				selection			= "Light_5_hide";
			};
			class Light_6: Light_1
			{
				position			= "Light_6_pos";
				direction			= "Light_6_dir";
				hitpoint			= "Light_6_hitpoint";
				selection			= "Light_6_hide";
			};
		};
	};
	class secundus_hallway_door: House_F
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		armor = 999999;
		armorStructural = 999;
		vehicleClass = "OPTRE_Trans_Building_class";
		displayName = "Hallway Door";
		model = "\OPTRE_buildings\secundus\hallway_door.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Buildings";
		editorSubcategory = "OPTRE_EditorSubcategory_Buildings_Highway";
		ladders[] =		
		{	
		};
		class AnimationSources
		{
			class source_door_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 2;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};;
		};
		class UserActions
		{
			class door_1_open
			{
				userActionID = 66;	
				displayName = "Open Door";
				displayNameDefault = "Open Door";
				textToolTip = "Open Door";
				position = "door_1switch";
				radius = 3;
				priority = 2;
				onlyForPlayer = false;
				condition = "((this animationPhase ""Door_1_a_rot"" < 0.5) AND (this animationPhase ""Door_1_b_rot"" < 0.5))";
				statement = "this animate [""Door_1_a_rot"",1]; this animate [""Door_1_b_rot"",1];";
				animPeriod = 1;
            };
            class door_1_close: door_1_open
            {
				userActionID = 67;
				displayName = "Close Door";
				displayNameDefault = "Close Door";
				textToolTip = "Close Door";
				priority = 2;
				condition = "((this animationPhase ""Door_1_a_rot"" > 0.5) AND (this animationPhase ""Door_1_b_rot"" > 0.5))";
				statement = "this animate [""Door_1_a_rot"",0]; this animate [""Door_1_b_rot"",0];";
				animPeriod = 1;
            };
		};
	};
};
	
	
