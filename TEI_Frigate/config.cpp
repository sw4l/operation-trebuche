
class CfgPatches
{
	class TEI_Ins_Object_class
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
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
	
	
	class TEI_testbox: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "test box";
		model = "\TEI_frigate\testbox.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_final_dawn: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Final Dawn";
		model = "\TEI_frigate\finaldawn_empty.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
};
