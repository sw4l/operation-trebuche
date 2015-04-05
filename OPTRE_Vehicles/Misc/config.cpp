class CfgPatches
{
	class OPTRE_Vehicles_Misc
	{
		units[]={"OPTRE_m1087_stallion_base","OPTRE_m1087_stallion_unsc","OPTRE_m1015_mule_base","OPTRE_m1015_mule_unsc","OPTRE_m1015_mule_ins","OPTRE_mako_drone_base","OPTRE_mako_drone_ins"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"OPTRE_Core"};
		magazines[]={};
		ammo[]={};
	};
};

class CfgVehicles
{
	//ammo 
	//fuel
	//medical
	//repair
	//box
	//transport 
		//model = "\A3\soft_f_beta\Truck_01\Truck_01_transport_F.p3d";
	//transport (covered) 
		//model = "\A3\soft_f_beta\Truck_01\Truck_01_covered_F.p3d";
	
	class Truck_01_base_F;
	class Truck_02_base_F;
	class B_Truck_01_transport_F;
	class O_Truck_02_transport_F;
	class UAV_02_base_F;
	class O_UAV_02_F;
	
	class OPTRE_m1087_stallion_base: Truck_01_base_F
	{
		author="Eridanus Insurrection Team";
		scope = 0;
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F"};
		side = 1;
		faction = "OPTRE_UNSC";
		displayName = "HEMTT Transport";
		model = "\A3\soft_f_beta\Truck_01\Truck_01_transport_F.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
		Icon = "\a3\soft_f_beta\Truck_01\Data\UI\map_truck_01_CA.paa";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};
	};
	class OPTRE_m1015_mule_base: Truck_02_base_F
	{
		author="Eridanus Insurrection Team";
		side = 0;
		faction = "OPTRE_Ins";
		crew = "O_soldier_F";
		scope = 0;
		displayName = "Zamak Transport";
		model = "\A3\soft_f_beta\Truck_02\Truck_02_transport_F";
		picture = "\A3\soft_f_beta\Truck_02\data\UI\Truck_02_transport_CA.paa";
		Icon = "\A3\soft_f_beta\Truck_02\data\UI\Map_Truck_02_dump_CA.paa";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_co.paa","\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_co.paa"};
	};
	class OPTRE_mako_drone_base: UAV_02_base_F
	{
		author="Eridanus Insurrection Team";
		_generalMacro = "UAV_02_base_F";
		displayName = "MAKO Drone";
		icon = "\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\Map_UAV_02_CA.paa";
		picture = "\A3\Drones_F\Air_F_Gamma\UAV_02\Data\UI\UAV_02_base_F.paa";
		scope = 0;
		side = 0;
		faction = "OPTRE_Ins";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 1;
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\MAKO_INS_CO.paa"};
	};
	class OPTRE_mako_drone_CAS_base: OPTRE_mako_drone_base
	{
		displayName = "MQ4A Greyhawk (CAS)";
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
	};
	
	class OPTRE_mako_drone_CAS_ins: OPTRE_mako_drone_CAS_base
	{
		author="Eridanus Insurrection Team";
		displayName = "MAKO Drone";
		vehicleClass = "OPTRE_Ins_Auto_class";
		scope = 2;
		side = 0;
		faction = "OPTRE_Ins";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 1;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"240Rnd_CMFlare_Chaff_Magazine"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\MAKO_INS_CO.paa"};
	};
	
	class OPTRE_m1087_stallion_unsc: OPTRE_m1087_stallion_base
	{
		author="Eridanus Insurrection Team";
		displayName = "M1087 Stallion";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_W_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Army_W_Rifleman_AR"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\HEMTT_UNSC_01_CO.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};
	};
	
	class OPTRE_m1015_mule_unsc: OPTRE_m1015_mule_base
	{
		author="Eridanus Insurrection Team";
		displayName = "M1015 Mule";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_W_Rifleman_AR";
		typicalCargo[] = {"OPTRE_UNSC_Army_W_Rifleman_AR"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\KAMAZ_UNSC_01_CO.paa","\OPTRE_Vehicles\Misc\data\KAMAZ_UNSC_02_CO.paa"};
	};
	
	class OPTRE_m1015_mule_ins: OPTRE_m1015_mule_base
	{
		author="Eridanus Insurrection Team";
		displayName = "M1015 Mule (Ins)";
		vehicleClass = "OPTRE_Ins_Vehicle_class";
		scope = 2;
		side = 0;
		faction = "OPTRE_Ins";
		crew = "OPTRE_Ins_URF_Rifleman_AR";
		typicalCargo[] = {"OPTRE_Ins_URF_Rifleman_AR"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\KAMAZ_INS_01_CO.paa","\OPTRE_Vehicles\Misc\data\KAMAZ_INS_02_CO.paa"};
	};
	
};
