enum {
DESTRUCTENGINE 																					= 2,
DESTRUCTDEFAULT 																				= 6,
DESTRUCTWRECK 																					= 7,
DESTRUCTTREE 																					= 3,
DESTRUCTTENT 																					= 4,
STABILIZEDINAXISX 																				= 1,
STABILIZEDINAXESXYZ 																			= 4,
STABILIZEDINAXISY 																				= 2,
STABILIZEDINAXESBOTH 																			= 3,
DESTRUCTNO 																						= 0,
STABILIZEDINAXESNONE 																			= 0,
DESTRUCTMAN 																					= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches
{
	class OPTRE_Ins_Object_class
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","OPTRE_Weapons","OPTRE_UNSC_Units","OPTRE_Ins_Units"};
	};
};

class CfgVehicles
{
	class All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class TargetTraining: NonStrategic {};
	class TargetGrenade: TargetTraining {};
	
	
	class OPTRE_compass_mark: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark";
		model = "\OPTRE_Hud\compass_mark.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_1: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 1";
		model = "\OPTRE_Hud\compass_mark_1.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_2: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 2";
		model = "\OPTRE_Hud\compass_mark_2.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_3: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 3";
		model = "\OPTRE_Hud\compass_mark_3.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_blu: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark Blue";
		model = "\OPTRE_Hud\compass_mark_blu.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_1_blu: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 1 Blue";
		model = "\OPTRE_Hud\compass_mark_1_blu.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_2_blu: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 2 Blue";
		model = "\OPTRE_Hud\compass_mark_2_blu.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_3_blu: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 3 Blue";
		model = "\OPTRE_Hud\compass_mark_3_blu.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_org: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark Orange";
		model = "\OPTRE_Hud\compass_mark_org.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_1_org: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 1 Orange";
		model = "\OPTRE_Hud\compass_mark_1_org.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_2_org: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 2 Orange";
		model = "\OPTRE_Hud\compass_mark_2_org.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_compass_mark_3_org: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 3 Orange";
		model = "\OPTRE_Hud\compass_mark_3_org.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
};

