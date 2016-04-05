#define _ARMA_


enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};


class CfgPatches
{
	class OPTRE_Buildings_City_Lights
	{
		requiredAddons[] = {"A3_structures_f","OPTRE_Core"};
		requiredVersion = 0.1;
		units[] = {"Land_Light_Street_off","Land_Light_Street"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	
	class Lamps_base_F;
	class Land_Colony_Light_Street_off: Lamps_base_F
	{
		dlc = "OPTRE";
		mapSize = 3.77;
		author = "Article 2 Studios";
		scope = 2;
		scopeCurator = 2;
		displayName = "OPTRE Street Light (off)";
		model = "\OPTRE_Buildings\Citylights\Colony_Light_Street_off.p3d";
		armor = 500;
	};
	class Land_Colony_Light_Street: Lamps_base_F
	{
		dlc = "OPTRE";
		mapSize = 3.78;
		author = "Article 2 Studios";
		scope = 2;
		scopeCurator = 2;
		displayName = "OPTRE Street Light (on)";
		model = "\OPTRE_Buildings\Citylights\Colony_Light_Street.p3d";
		armor = 500;
		class Reflectors
		{
			class Light_1
			{
				color[]				= {2500,4000,6000};
				ambient[]			= {2.5,4,6};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 100;					/// angle of full light
				outerAngle			= 165;					/// angle of some light
				coneFadeCoef		= 4;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 2;
				flareMaxDistance = 220;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 0.3;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
		};
	};
	class Land_Small_Light_Column: Lamps_base_F
	{
		dlc = "OPTRE";
		model="\OPTRE_Buildings\Citylights\Small_Light_Column.p3d";
		armor=20000;
		scope=2;
		displayName="Column Light";
		class Reflectors
		{
			class Light_1
			{
				color[]				= {1000,650,400};
				ambient[]			= {10,6.5,4};
				intensity			= 2;
				size				= 1;					/// size of the light point seen from distance
				innerAngle			= 90;					/// angle of full light
				outerAngle			= 360;					/// angle of some light
				coneFadeCoef		= 1;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hitpoint";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 0.8;
				flareMaxDistance = 220;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 40;
					hardLimitEnd = 60;
				};
			};
		};
	};
};