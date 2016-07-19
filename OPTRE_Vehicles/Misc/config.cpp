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
	class B_Quadbike_01_F;
	class O_Quadbike_01_F;
	
	class OPTRE_m1087_stallion_base: Truck_01_base_F
	{
		dlc = "OPTRE";
		author="Article 2 Studios";
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
		dlc = "OPTRE";
		author="Article 2 Studios";
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
		dlc = "OPTRE";
		author="Article 2 Studios";
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
		author="Article 2 Studios";
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
		author="Article 2 Studios";
		displayName = "M1087 Stallion";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL"};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\HEMTT_UNSC_01_CO.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"};
	};
	class OPTRE_m1087_stallion_unsc_mover: OPTRE_m1087_stallion_base
	{
		author="Article 2 Studios";
		displayName = "M1087 Stallion (Empty)";
		transportSoldier = 1;
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_mover_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_mover_F_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_Truck_01_mover_F_CA.paa";
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\HEMTT_UNSC_01_CO.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_mprimer_CO.paa"};
	};
	class OPTRE_m1087_stallion_unsc_box: OPTRE_m1087_stallion_base
	{
		author="Article 2 Studios";
		displayName = "M1087 Stallion (Box)";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		transportSoldier = 1;
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL"};
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_box_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_box_F_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_Truck_01_box_F_CA.paa";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\HEMTT_UNSC_01_CO.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"};
	};
	class OPTRE_m1087_stallion_unsc_repair: OPTRE_m1087_stallion_base
	{
		author="Article 2 Studios";
		displayName = "M1087 Stallion (Repair)";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		transportSoldier = 1;
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL"};
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_box_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_box_F_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_Truck_01_box_F_CA.paa";
		transportRepair = 200000000;
		supplyRadius = 10;
		forceInGarage = 1;
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\HEMTT_UNSC_01_CO.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"};
	};
	class OPTRE_m1087_stallion_unsc_resupply: OPTRE_m1087_stallion_base
	{
		author="Article 2 Studios";
		displayName = "M1087 Stallion (Resupply)";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		transportSoldier = 1;
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL"};
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_ammo_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_Ammo_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_truck_01_ammo_CA.paa";
		supplyRadius = 10;
		transportAmmo = 30000;
		fuelExplosionPower = 1;
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\HEMTT_UNSC_01_CO.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"};
	};
	class OPTRE_m1087_stallion_unsc_refuel: OPTRE_m1087_stallion_base
	{
		author="Article 2 Studios";
		displayName = "M1087 Stallion (Refuel)";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		transportSoldier = 1;
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL"};
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_fuel_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_Fuel_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_truck_01_fuel_CA.paa";
		supplyRadius = 10;
		transportFuel = 3000;
		fuelExplosionPower = 10;
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\HEMTT_UNSC_01_CO.paa","\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa","\A3\Soft_F_Gamma\Truck_01\Data\truck_01_Fuel_CO.paa"};
	};
	class OPTRE_m1087_stallion_unsc_medical: OPTRE_m1087_stallion_base
	{
		author="Article 2 Studios";
		displayName = "M1087 Stallion (Medical)";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		transportSoldier = 16;
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_Soldier_Medic";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Medic"};
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_medevac_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_box_F_CA.paa";
		Icon = "\a3\soft_f_gamma\Truck_01\Data\UI\map_Truck_01_box_F_CA.paa";
		attendant = 1;
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
		cargoAction[] = {"passenger_generic01_foldhands","passenger_injured_medevac_truck01","passenger_injured_medevac_truck02","passenger_injured_medevac_truck01","passenger_injured_medevac_truck02","passenger_injured_medevac_truck03","passenger_injured_medevac_truck01","passenger_injured_medevac_truck02","passenger_generic01_leanleft","passenger_apc_generic04","passenger_apc_narrow_generic01","passenger_apc_generic03","passenger_apc_narrow_generic03","passenger_generic01_foldhands","passenger_apc_generic02","passenger_apc_generic01"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		threat[] = {0.0,0.0,0.0};
		class Turrets{};
	};
	
	class OPTRE_m1015_mule_ins: OPTRE_m1015_mule_base
	{
		author="Article 2 Studios";
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
	
	/*class OPTRE_Mongoose_Green_F: B_Quadbike_01_F
	{
		dlc = "OPTRE";
		author = "Article 2 Studios";
		_generalMacro = "B_Quadbike_01_F";
		displayName = "M274 Mongoose ULATV (Green)";
		vehicleClass = "OPTRE_UNSC_Vehicle_class";
		scope = 2;
		side = 1;
		faction = "OPTRE_UNSC";
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\OPTRE_Quadbike01_green_CO.paa","\A3\soft_f_beta\Quadbike_01\data\Quadbike_01_wheel_civblack_co.paa"};
	};

	class OPTRE_Mongoose_Tan_F: OPTRE_Mongoose_Green_F
	{
		author = "Article 2 Studios";
		displayName = "M274 Mongoose ULATV (Tan)";
		scope = 2;
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\OPTRE_Quadbike01_tan_CO.paa","\A3\soft_f_beta\Quadbike_01\data\Quadbike_01_wheel_civblack_co.paa"};
	};
	
	class OPTRE_Mongoose_Black_F: OPTRE_Mongoose_Green_F
	{
		author = "Article 2 Studios";
		displayName = "M274 Mongoose ULATV (Black)";
		scope = 2;
		crew = "OPTRE_UNSC_ODST_Soldier_Scout";
		typicalCargo[] = {"OPTRE_UNSC_ODST_Soldier_Scout"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\OPTRE_Quadbike01_black_CO.paa","\A3\soft_f_beta\Quadbike_01\data\Quadbike_01_wheel_civblack_co.paa"};
	};
	
	class OPTRE_Mongoose_Snow_F: OPTRE_Mongoose_Green_F
	{
		author = "Article 2 Studios";
		displayName = "M274 Mongoose ULATV (Snow)";
		scope = 2;
		crew = "OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO";
		typicalCargo[] = {"OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\OPTRE_Quadbike01_white_CO.paa","\A3\soft_f_beta\Quadbike_01\data\Quadbike_01_wheel_civwhite_co.paa"};
	};
	
	class OPTRE_Mongoose_Marine_F: OPTRE_Mongoose_Green_F
	{
		author = "Article 2 Studios";
		displayName = "M274 Mongoose ULATV (Marine)";
		scope = 2;
		crew = "OPTRE_UNSC_Marine_Soldier_Rifleman_AR";
		hiddenSelections[] = {"camo1","camo2"};
		typicalCargo[] = {"OPTRE_UNSC_Marine_Soldier_Rifleman_AR"};
	};
	
	class OPTRE_Mongoose_Ins_F: O_Quadbike_01_F
	{
		author = "Article 2 Studios";
		_generalMacro = "O_Quadbike_01_F";
		displayName = "M274 Mongoose ULATV (Ins)";
		vehicleClass = "OPTRE_Ins_Vehicle_class";
		scope = 2;
		side = 0;
		faction = "OPTRE_Ins";
		crew = "OPTRE_Ins_URF_Rifleman_AR";
		typicalCargo[] = {"OPTRE_Ins_URF_Rifleman_AR"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\OPTRE_Vehicles\Misc\data\OPTRE_Quadbike01_ins_CO.paa","\A3\soft_f_beta\Quadbike_01\data\Quadbike_01_wheel_civblack_co.paa"};
	};*/

};
