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
	class Land_Castle_01_step_F;
	
	
	class OPTRE_sidewalk_narrow_short_: Land_Castle_01_step_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Sidewalk Narrow Straight";
		model = "\OPTRE_buildings\streetobjects\sidewalk_narrow_short.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_sidewalk_wide_short_: Land_Castle_01_step_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Sidewalk Wide Straight";
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_short.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
};

