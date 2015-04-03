#define private         0
#define protected               1
#define public          2
 
#define true    1
#define false   0
 
class CfgPatches {
        class TEI_Weapons_Explosives {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
				requiredAddons[] = { "A3_Weapons_F", "TEI_Core" };
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
		 muzzles[] += {"TEI_M9FragMuzzle","TEI_M2_SmokeMuzzle", "TEI_M2_BSmokeMuzzle", "TEI_M2_YSmokeMuzzle", "TEI_M2_RSmokeMuzzle", "TEI_M2_GSmokeMuzzle", "TEI_M2_OSmokeMuzzle", "TEI_M2_PSmokeMuzzle"};	
			
		class TEI_M9FragMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M9_Frag"};
		};
		class TEI_M2_SmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke"};
		};
		class TEI_M2_BSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Blue"};
		};
		class TEI_M2_YSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Yellow"};
		};
		class TEI_M2_RSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Red"};
		};
		class TEI_M2_GSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Green"};
		};
		class TEI_M2_OSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Orange"};
		};
		class TEI_M2_PSmokeMuzzle: ThrowMuzzle
		{
			magazines[] = {"TEI_M2_Smoke_Purple"};
		};
	};
};