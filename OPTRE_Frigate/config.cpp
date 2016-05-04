class CfgPatches
{
	class OPTRE_Frigate
	{
		units[]										= {"OPTRE_Frigate_Final_Dawn","OPTRE_Frigate_Console","OPTRE_Frigate_M910_Turret"};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","A3_static_f"};
	};
};

class CfgVehicles
{
	class OPTRE_Objects_Base;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class HitPoints
				{
					class HitGun;
					class HitTurret: HitGun
					{
						class DestructionEffects
						{
							class Smoke;
						};
					};
				};
			};
		};
		class Wounds;
		class HitPoints
		{
			class HitEngine;
			class HitHull;
			class HitTurret;
			class HitGun;
			class HitLTrack;
			class HitRTrack;
			class HitBody;
		};
		class ViewPilot;
		class CargoLight;
		class Reflectors;
		class UserActions;
	};
	
	class OPTRE_Frigate_Final_Dawn: OPTRE_Objects_Base
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "FFG-437 Final Dawn (Decoration)";
		model = "\OPTRE_frigate\finaldawn_complex.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		mapSize = 450;
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Deco";
	};
	/*class OPTRE_Frigate_Experimental: Static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "Experimental Frigate";
		model = "\OPTRE_frigate\finaldawn_0.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		class Eventhandlers {
			init = "_scr = _this execVM ""\OPTRE_Frigate\build.sqf"";";
		};
	};*/
	class OPTRE_Frigate_Console: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		displayName = "Console [Frigate]";
		model = "\OPTRE_frigate\console.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		mapSize = .4;
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Objects";
	};
	class OPTRE_Frigate_LiftArm: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Lift Arm [Frigate]";
		model = "\OPTRE_frigate\liftarm.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		mapSize = .4;
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Objects";
	};
	class OPTRE_Frigate_M910_Turret: StaticWeapon
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction	= "OPTRE_UNSC";					/// defines the faction inside of the side
		crew = "B_UAV_AI";					/// lets use the sample soldier we have as default captain of the boat
		armor = 450;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "M910 Point Defense Gun";
		model = "\OPTRE_Frigate\turret.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		mapSize = .4;
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Objects";
		memoryPointGun[] = {"muzzle_1","muzzle_2"};
		gunBeg[] = {"muzzle_1","muzzle_2"};
		gunEnd[] = {"chamber_1","chamber_2"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body="mainturret";
				gun="maingun";
				animationsourcebody="mainturret";
				animationSourceGun="maingun";
				gunAxis="OsaHlavne";
				minElev=-4;
				maxElev=50;
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
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				commanding=1;
				primaryGunner=1;
				soundServo[] = { "", 0.01, 2.000000 };
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "trigger";
				gunnerRightHandAnimName = "trigger";
				weapons[] = {"OPTRE_M910_cannon"};
				magazines[] = {"OPTRE_M910_5000Rnd_50mm","OPTRE_M910_5000Rnd_50mm"};
				memoryPointGunnerOptics = "gunnerview";
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerOpticsShowCursor=1;
				turretInfoType="RscWeaponZeroing";
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {2};
				castGunnerShadow=1;
				startEngine=0;
				enableManualFire=0;
				gunnerForceOptics = 1;
				gunnerForceOutOptics = 1;
				hideWeaponsGunner = 1;
				class ViewGunner:ViewOptics
				{
					initFov=0.7;
					minFov=0.05;
					maxFov=1.1;
				};
			};
		};
	};
	/*class OPTRE_Frigate_doorbuild: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Side Doors [Frigate]";
		model = "\OPTRE_frigate\doorbuild.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};*/
	class OPTRE_Frigate_interiorbuild: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Interior [Frigate]";
		model = "\OPTRE_frigate\interior_build.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_1: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 1 [Frigate]";
		model = "\OPTRE_frigate\frigate_part_1.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_2_a: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 2 A[Frigate]";
		model = "\OPTRE_frigate\frigate_part_2_a.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_2_b: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 2 B[Frigate]";
		model = "\OPTRE_frigate\frigate_part_2_B.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_2_c: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 2 C[Frigate]";
		model = "\OPTRE_frigate\frigate_part_2_c.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_3_a: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 3 A[Frigate]";
		model = "\OPTRE_frigate\frigate_part_3_a.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_3_B: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 3 B[Frigate]";
		model = "\OPTRE_frigate\frigate_part_3_B.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_3_C: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 3 C[Frigate]";
		model = "\OPTRE_frigate\frigate_part_3_C.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_4_a: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 4 A[Frigate]";
		model = "\OPTRE_frigate\frigate_part_4_a.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_4_B: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 4 B[Frigate]";
		model = "\OPTRE_frigate\frigate_part_4_B.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_4_C: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 4 C[Frigate]";
		model = "\OPTRE_frigate\frigate_part_4_C.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_5_a: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 5 A[Frigate]";
		model = "\OPTRE_frigate\frigate_part_5_a.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_5_B: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 5 B[Frigate]";
		model = "\OPTRE_frigate\frigate_part_5_B.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_5_C: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 5 C[Frigate]";
		model = "\OPTRE_frigate\frigate_part_5_C.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_6_a: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 6 A[Frigate]";
		model = "\OPTRE_frigate\frigate_part_6_a.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_6_B: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 6 B[Frigate]";
		model = "\OPTRE_frigate\frigate_part_6_B.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_6_C: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 6 C[Frigate]";
		model = "\OPTRE_frigate\frigate_part_6_C.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_7_a: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 7 A[Frigate]";
		model = "\OPTRE_frigate\frigate_part_7_a.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_7_B1: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 7 B1[Frigate]";
		model = "\OPTRE_frigate\frigate_part_7_B1.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_7_B2: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 7 B2[Frigate]";
		model = "\OPTRE_frigate\frigate_part_7_B2.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_7_C: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 7 C[Frigate]";
		model = "\OPTRE_frigate\frigate_part_7_C.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_8_a: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 8 A[Frigate]";
		model = "\OPTRE_frigate\frigate_part_8_a.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_8_B: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 8 B[Frigate]";
		model = "\OPTRE_frigate\frigate_part_8_B.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_part_8_C: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Part 8 C[Frigate]";
		model = "\OPTRE_frigate\frigate_part_8_C.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_vehicle_lift: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Vehicle Lift[Frigate]";
		model = "\OPTRE_frigate\vehicle_lift_PH.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
		class AnimationSources
		{
			class Lift_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 6;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
		};
		//This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class RampOpen
			{
				userActionID = 64;	
				displayName = "Raise Lift";
				displayNameDefault = "Raise Lift";
				textToolTip = "Raise Lift";
				position = "switches";
				radius = 10;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""Door_1_rot"" < 0.5) )";
				statement = "this animate [""Door_1_rot"",1];";
				animPeriod = 1;
            };
            class RampClose: RampOpen
            {
				userActionID = 65;
				displayName = "Lower Lift";
				displayNameDefault = "Lower Lift";
				textToolTip = "Lower Lift";
				priority = 2;
				condition = "((this animationPhase ""Door_1_rot"" > 0.5))";
				statement = "this animate [""Door_1_rot"",0]";
				animPeriod = 1;
            };
		};
	};
	class OPTRE_Frigate_hangar_ground_doors: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar Ground Doors[Frigate]";
		model = "\OPTRE_frigate\hangar_ground_doors.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_hangar_A: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar A[Frigate]";
		model = "\OPTRE_frigate\frigate_hangar_A.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_hangar_B1: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar B1[Frigate]";
		model = "\OPTRE_frigate\frigate_hangar_B1.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_hangar_B2: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar B2[Frigate]";
		model = "\OPTRE_frigate\frigate_hangar_B2.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_hangar_C: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar C[Frigate]";
		model = "\OPTRE_frigate\frigate_hangar_C.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_hangar_D: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar D[Frigate]";
		model = "\OPTRE_frigate\frigate_hangar_D.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_hangar_D2: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar D2[Frigate]";
		model = "\OPTRE_frigate\frigate_hangar_D2.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
	};
	class OPTRE_Frigate_hangar_door: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar Door[Frigate]";
		model = "\OPTRE_frigate\hangar_door.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
		numberOfDoors = 2;
		class AnimationSources
		{
			class HangarDoor_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 8;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class HangarDoor_2				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 8;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
		};
		//This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class RampOpen
			{
				userActionID = 60;	
				displayName = "Open Bay";
				displayNameDefault = "Open Bay";
				textToolTip = "Open Bay";
				position = "switches";
				radius = 2;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""Door_1_rot"" < 0.5) AND (this animationPhase ""Door_2_rot"" < 0.5))";
				statement = "this animate [""Door_1_rot"",1]; this animate [""Door_2_rot"",1]";
				animPeriod = 1;
            };
            class RampClose: RampOpen
            {
				userActionID = 61;
				displayName = "Close Bay";
				displayNameDefault = "Close Bay";
				textToolTip = "Close Bay";
				priority = 2;
				condition = "((this animationPhase ""Door_1_rot"" > 0.5) AND (this animationPhase ""Door_2_rot"" > 0.5))";
				statement = "this animate [""Door_1_rot"",0]; this animate [""Door_2_rot"",0]";
				animPeriod = 1;
            };
		};
	};
	class OPTRE_Frigate_sidedoors1: OPTRE_Frigate_hangar_door
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Side Doors 1 [Frigate]";
		model = "\OPTRE_frigate\sidedoors1.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_Frigate_sidedoors2: OPTRE_Frigate_hangar_door
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Side Doors 2 [Frigate]";
		model = "\OPTRE_frigate\sidedoors2.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_Frigate_sidedoors3: OPTRE_Frigate_hangar_door
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Side Doors 3 [Frigate]";
		model = "\OPTRE_frigate\sidedoors3.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_Frigate_sidedoors4: OPTRE_Frigate_hangar_door
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Side Doors 4 [Frigate]";
		model = "\OPTRE_frigate\sidedoors4.p3d";
		author = "Article 2 Studios";
	};
	class OPTRE_Frigate_hangar_lift_door: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Hangar Lift Door[Frigate]";
		model = "\OPTRE_frigate\frigate_hangar_lift_doors.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
		numberOfDoors = 2;
		class AnimationSources
		{
			class LiftDoor_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 6;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class LiftDoor_2				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 6;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
		};
		//This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class RampOpen
			{
				userActionID = 62;	
				displayName = "Open Lift";
				displayNameDefault = "Open Lift";
				textToolTip = "Open Lift";
				position = "switches";
				radius = 2;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""Door_1_rot"" < 0.5) AND (this animationPhase ""Door_2_rot"" < 0.5))";
				statement = "this animate [""Door_1_rot"",1]; this animate [""Door_2_rot"",1]";
				animPeriod = 1;
            };
            class RampClose: RampOpen
            {
				userActionID = 63;
				displayName = "Close Lift";
				displayNameDefault = "Close Lift";
				textToolTip = "Close Lift";
				priority = 2;
				condition = "((this animationPhase ""Door_1_rot"" > 0.5) AND (this animationPhase ""Door_2_rot"" > 0.5))";
				statement = "this animate [""Door_1_rot"",0]; this animate [""Door_2_rot"",0]";
				animPeriod = 1;
            };
		};
	};
	class OPTRE_Frigate_vehicle_lift2: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Vehicle Lift 2[Frigate]";
		model = "\OPTRE_frigate\vehicle_lift_PH2.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
		class AnimationSources
		{
			class Lift_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 20;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
		};
		//This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class RampOpen
			{
				userActionID = 66;	
				displayName = "Raise Lift";
				displayNameDefault = "Raise Lift";
				textToolTip = "Raise Lift";
				position = "switches";
				radius = 20;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""Door_1_rot"" < 0.5) )";
				statement = "this animate [""Door_1_rot"",1];";
				animPeriod = 1;
            };
            class RampClose: RampOpen
            {
				userActionID = 67;
				displayName = "Lower Lift";
				displayNameDefault = "Lower Lift";
				textToolTip = "Lower Lift";
				priority = 2;
				condition = "((this animationPhase ""Door_1_rot"" > 0.5))";
				statement = "this animate [""Door_1_rot"",0]";
				animPeriod = 1;
            };
		};
	};
	class OPTRE_Frigate_lift_gate: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Lift Gate[Frigate]";
		model = "\OPTRE_frigate\lift_gate.p3d";
		author = "Article 2 Studios";
		icon = "\OPTRE_frigate\data\frigate_icon.paa";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
		class AnimationSources
		{
			class liftgate_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 8;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class liftgate_2				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 8;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
		};
		//This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class RampOpen
			{
				userActionID = 68;	
				displayName = "Lower Gate";
				displayNameDefault = "Lower Gate";
				textToolTip = "Lower Gate";
				position = "switches";
				radius = 10;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""part_1_rot"" < 0.5) AND (this animationPhase ""part_2_rot"" < 0.5))";
				statement = "this animate [""part_1_rot"",1]; this animate [""part_2_rot"",1]";
				animPeriod = 1;
            };
            class RampClose: RampOpen
            {
				userActionID = 69;
				displayName = "Raise Gate";
				displayNameDefault = "Raise Gate";
				textToolTip = "Raise Gate";
				priority = 2;
				condition = "((this animationPhase ""part_1_rot"" > 0.5) AND (this animationPhase ""part_2_rot"" > 0.5))";
				statement = "this animate [""part_1_rot"",0]; this animate [""part_2_rot"",0]";
				animPeriod = 1;
            };
		};
	};
	class OPTRE_Frigate_cargo_door: OPTRE_Frigate_Final_Dawn
	{
		dlc = "OPTRE";
		scope = 2;
		scopeCurator = 0;
		displayName = "Cargo Door[Frigate]";
		model = "\OPTRE_frigate\cargo_door.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
		editorCategory = "OPTRE_EditorCategory_Frigate";
		editorSubcategory = "OPTRE_EditorSubcategory_Frigate_Pieces";
		numberOfDoors = 2;
		mapSize = .4;
		class AnimationSources
		{
			class cargo_Door_1				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 8;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
			class cargo_Door_2				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 8;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
				sound = "ServoRampSound_2";
			};
		};
		//This section defined custom actions for action menu. Each class defined here represent one action. Here we have Open+Close pairs of action for each door (1-5)
		class UserActions
		{
			class RampOpen
			{
				userActionID = 60;	
				displayName = "Open Bay";
				displayNameDefault = "Open Bay";
				textToolTip = "Open Bay";
				position = "switches";
				radius = 2;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""Door_1_rot"" < 0.5) AND (this animationPhase ""Door_2_rot"" < 0.5))";
				statement = "this animate [""Door_1_rot"",1]; this animate [""Door_2_rot"",1]";
				animPeriod = 1;
            };
            class RampClose: RampOpen
            {
				userActionID = 61;
				displayName = "Close Bay";
				displayNameDefault = "Close Bay";
				textToolTip = "Close Bay";
				priority = 2;
				condition = "((this animationPhase ""Door_1_rot"" > 0.5) AND (this animationPhase ""Door_2_rot"" > 0.5))";
				statement = "this animate [""Door_1_rot"",0]; this animate [""Door_2_rot"",0]";
				animPeriod = 1;
            };
		};
	};
};