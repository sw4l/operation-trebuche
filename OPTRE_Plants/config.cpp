
class CfgPatches {

	class OPTRE_Trees {
		units[] = {"OPTRE_Trees"};
		weapons[] = {};
		worlds[] = {""};
		requiredVersion = 0.100000;
		requiredAddons[] = {"A3_data_f", "A3_plants_f"};
	};
};

class cfgVehicleClasses {

	class OPTRE_Trees {
		displayName = "OPTRE Trees";
	};
};

class CfgVehicles {
	/*extern*/ class Thing;
	/*extern*/ class Building;
	/*extern*/ class Strategic;

	class NonStrategic: Building {
		/*extern*/ class DestructionEffects;
	};
	/*extern*/ class Fence;
	/*extern*/ class Land_VASICore;

	class Fence_Ind: Fence {
		/*extern*/ class DestructionEffects;
	};

	class OPTRE_tree_Purp_1: Fence_Ind {
		scope = 2;
		model = "optre_plants\t_quercus2f.p3d";
		icon = "";
		displayName = "Purple Tree 1";
		accuracy = 0.300000;
		vehicleclass = "OPTRE_Trees";
	};

	class OPTRE_tree_Purp_2: Fence_Ind {
		scope = 2;
		model = "optre_plants\t_quercus2s.p3d";
		icon = "";
		displayName = "Purple Tree 2";
		accuracy = 0.300000;
		vehicleclass = "OPTRE_Trees";
	};
};

