class CfgPatches 
{
	class OPTRE_Plants 
	{
		units[] = {"OPTRE_tree_Purp_1","OPTRE_tree_Purp_2"};
		weapons[] = {};
		worlds[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core","A3_data_f"};
	};
};

class cfgVehicleClasses {

	class OPTRE_Plants {
		displayName = "Plants (OPTRE)";
	};
};

class CfgVehicles 
{
	class Fence;
	class Fence_Ind: Fence 
	{
		class DestructionEffects;
	};
	class OPTRE_tree_Purp_1: Fence_Ind 
	{
		scope = 2;
		model = "optre_plants\t_quercus2f.p3d";
		icon = "IconCrateWpns";
		displayName = "Tree 1 (Purple)";
		accuracy = 0.300000;
		vehicleclass = "OPTRE_Plants";
	};
	class OPTRE_tree_Purp_2: OPTRE_tree_Purp_1 
	{
		model = "optre_plants\t_quercus3s.p3d";
		icon = "IconCrateWpns";
		displayName = "Tree 2 (Purple)";
	};
};