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
	class OPTRE_Buildings_Street_Objects
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

class CfgVehicles
{
	
	class Land_Castle_01_step_F;
	
	
	class Land_sidewalk_narrow_short: Land_Castle_01_step_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		displayName = "Sidewalk (Narrow Straight)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_narrow_short.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		destrType = "DestructNo"; //All structures should have this setting until appropriate destruct models can be made.  Complex multipart models should probably stay this way permanently.  
	};
	class Land_sidewalk_wide_short: Land_Castle_01_step_F
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		displayName = "Sidewalk (Wide Straight)";
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_short.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		keepInEPESceneAfterDeath = 1;
		destrType = "DestructNo"; //All structures should have this setting until appropriate destruct models can be made.  Complex multipart models should probably stay this way permanently.  
		class DestructionEffects;
	};
	class Land_sidewalk_wide_curve: Land_sidewalk_wide_short
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Sidewalk (Wide Short Curve)";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_curve.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		destrType = "DestructNo"; //All structures should have this setting until appropriate destruct models can be made.  Complex multipart models should probably stay this way permanently.  
	};
	class Land_sidewalk_wide_curve3: Land_sidewalk_wide_short
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Sidewalk (Wide Long Curve)";
		vehicleClass = "OPTRE_City_Objects_class";
		armor = 999999;
		armorStructural = 999;
		model = "\OPTRE_buildings\streetobjects\sidewalk_wide_curve3.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		destrType = "DestructNo"; //All structures should have this setting until appropriate destruct models can be made.  Complex multipart models should probably stay this way permanently.  
	};
};

