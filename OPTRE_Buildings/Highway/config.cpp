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
	
	
	class OPTRE_Highway_Straight: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Straight";
		model = "\OPTRE_buildings\Highway\Highway_straight.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_bridge: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Bridge";
		model = "\OPTRE_buildings\Highway\Highway_bridge.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_ramp_a: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Ramp A";
		model = "\OPTRE_buildings\Highway\Highway_ramp_a.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_turnlane_a: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Turnlane A";
		model = "\OPTRE_buildings\Highway\Highway_turnlane_a.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_Highway_ramp_b: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Ramp B";
		model = "\OPTRE_buildings\Highway\Highway_ramp_b.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_turnlane_b: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Turnlane B";
		model = "\OPTRE_buildings\Highway\Highway_turnlane_b.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_turn_left: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Turn Left";
		model = "\OPTRE_buildings\Highway\Highway_turn_left.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_Highway_turn_right: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Turn Right";
		model = "\OPTRE_buildings\Highway\Highway_turn_Right.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_Highway_gate_A: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Gate A";
		model = "\OPTRE_buildings\Highway\Highway_gate_a.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
		class OPTRE_Highway_gate_house_a: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Highway Gate House A";
		model = "\OPTRE_buildings\Highway\Highway_gate_house_a.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
};

