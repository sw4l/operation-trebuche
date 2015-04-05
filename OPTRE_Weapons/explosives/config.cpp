#define private         0
#define protected               1
#define public          2
 
#define true    1
#define false   0
 
class CfgPatches {
        class OPTRE_Weapons_Explosives {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
				requiredAddons[] = { "A3_Weapons_F", "OPTRE_Core" };
				author = "Eridanus Insurrection Team";
        };
};

class cfgWeapons
{
	class Default;
	class GrenadeLauncher;
	
	class Throw: GrenadeLauncher
	{
		class ThrowMuzzle;
		 muzzles[] += {"OPTRE_M9FragMuzzle","OPTRE_M2_SmokeMuzzle", "OPTRE_M2_BSmokeMuzzle", "OPTRE_M2_YSmokeMuzzle", "OPTRE_M2_RSmokeMuzzle", "OPTRE_M2_GSmokeMuzzle", "OPTRE_M2_OSmokeMuzzle", "OPTRE_M2_PSmokeMuzzle"};	
			
		class OPTRE_M9FragMuzzle: ThrowMuzzle
		{
			magazines[] = {"OPTRE_M9_Frag"};
		};
		class OPTRE_M2_SmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"OPTRE_M2_Smoke"};
		};
		class OPTRE_M2_BSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"OPTRE_M2_Smoke_Blue"};
		};
		class OPTRE_M2_YSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"OPTRE_M2_Smoke_Yellow"};
		};
		class OPTRE_M2_RSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"OPTRE_M2_Smoke_Red"};
		};
		class OPTRE_M2_GSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"OPTRE_M2_Smoke_Green"};
		};
		class OPTRE_M2_OSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"OPTRE_M2_Smoke_Orange"};
		};
		class OPTRE_M2_PSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"OPTRE_M2_Smoke_Purple"};
		};
	};
};