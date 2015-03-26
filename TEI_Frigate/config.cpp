
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
	class LandVehicle;
	class StaticWeapon:LandVehicle
	{
		class NewTurret;
	};
	
	
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
	class TEI_1_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "1_box";
		model = "\TEI_frigate\1_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_2_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "2_box";
		model = "\TEI_frigate\2_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_3_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "3_box";
		model = "\TEI_frigate\3_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_4_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "4_box";
		model = "\TEI_frigate\4_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_5_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "5_box";
		model = "\TEI_frigate\5_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_6_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "6_box";
		model = "\TEI_frigate\6_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_7_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "7_box";
		model = "\TEI_frigate\7_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_8_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "8_box";
		model = "\TEI_frigate\8_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_9_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "9_box";
		model = "\TEI_frigate\9_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_10_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "10_box";
		model = "\TEI_frigate\10_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_11_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "11_box";
		model = "\TEI_frigate\11_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_12_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "12_box";
		model = "\TEI_frigate\12_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_13_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "13_box";
		model = "\TEI_frigate\13_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_14_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "14_box";
		model = "\TEI_frigate\14_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_15_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "15_box";
		model = "\TEI_frigate\15_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_16_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "16_box";
		model = "\TEI_frigate\16_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_17_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "17_box";
		model = "\TEI_frigate\17_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_19_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "19_box";
		model = "\TEI_frigate\19_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_20_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "20_box";
		model = "\TEI_frigate\20_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_21_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "21_box";
		model = "\TEI_frigate\21_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_22_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "22_box";
		model = "\TEI_frigate\22_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_23_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "23_box";
		model = "\TEI_frigate\23_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_24_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "24_box";
		model = "\TEI_frigate\24_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_25_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "25_box";
		model = "\TEI_frigate\25_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_26_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "26_box";
		model = "\TEI_frigate\26_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_27_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "27_box";
		model = "\TEI_frigate\27_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_28_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "28_box";
		model = "\TEI_frigate\28_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_29_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "29_box";
		model = "\TEI_frigate\29_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_30_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "30_box";
		model = "\TEI_frigate\30_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_31_box: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "31_box";
		model = "\TEI_frigate\31_box.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_interior: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Interior";
		model = "\TEI_frigate\interior.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_console: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Console";
		model = "\TEI_frigate\console.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_spawn_door: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Spawn Door";
		model = "\TEI_frigate\spawn_door.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_liftarm: static
	{
		scope = 2;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Lift Arm";
		model = "\TEI_frigate\liftarm.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
	};
	class TEI_frigate_gun: StaticWeapon
	{
		scope = 2;
		armor = 450;
		vehicleClass = "TEI_UNSC_Object_class";
		displayName = "Frigate Gun";
		model = "\TEI_frigate\turret2.p3d";
		author = "Eridanus Insurrection Team";
		icon = "iconCrateWpns";
		class Turrets: Turrets
		{
			class MainTurret:MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="Osa Hlavne";
				gunBeg="Usti hlavne";
				gunEnd="konec hlavne";
				minElev=-8;
				maxElev=16;
				minTurn=-360;
				maxTurn=360;
				initTurn=0;
				turretAxis="OsaVeze";
				maxHorizontalRotSpeed=1.2;
				maxVerticalRotSpeed=1.2;
				gunnerAction="driver_boat01";
				gunnerInAction="driver_boat01";
				gunnerGetInAction="GetInMRAP_01";
				gunnerGetOutAction="GetOutMRAP_01";
				gunnerName="Gunner";
				hideWeaponsGunner=0;
				soundServo[]={"",0.01,1};
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos Gunner";
				memoryPointsGetInGunnerDir="Pos Gunner dir";
				gunnerLeftHandAnimName="trigger";
				gunnerRightHandAnimName="trigger";
				memoryPointGun="machinegun";
				weapons[]={"TEI_102R_Turret"};
				magazines[] = {"3Rnd_102mm_rockets","3Rnd_102mm_rockets"};
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
				//gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
				//gunnerOpticsModel="a3\weapons_f\Reticle\optics_empty";
				gunnerOpticsShowCursor=1;
				turretInfoType="RscWeaponZeroing";
				//turretInfoType="RscOptics_crows";
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {2};
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;

				gunnerForceOptics=0;
				class ViewGunner:ViewOptics
				{
					initFov=0.7;
					minFov=0.05;
					maxFov=1.1;
				};
			};
		};
	
};
