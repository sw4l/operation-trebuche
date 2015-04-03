enum
{
    DESTRUCTENGINE = 2,
    DESTRUCTDEFAULT = 6,
    DESTRUCTWRECK = 7,
    DESTRUCTTREE = 3,
    DESTRUCTTENT = 4,
    STABILIZEDINAXISX = 1,
    STABILIZEDINAXESXYZ = 4,
    STABILIZEDINAXISY = 2,
    STABILIZEDINAXESBOTH = 3,
    DESTRUCTNO = 0,
    STABILIZEDINAXESNONE = 0,
    DESTRUCTMAN = 5,
    DESTRUCTBUILDING = 1,
}; 
class CfgPatches
{
	class TEI_Weapons_Pistol
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

class CfgRecoils
{
	access = 1;
	M6G_recoil[] = {0,0,0,0.03,"0.036943*(2)","0.0134348*(4)",0.09,"0.019755*(2)","0.003056*(4)",0.12,0,0,0.18,"-0.003138*(2)","-0.0005*(4)",0.12,"-0.001177*(2)","-0.000188*(4)",0.12,0,0};
	M6G_recoilProne[] = {0,0,0,0.03,"0.036943*(1.5)","0.0134348*(2)",0.09,"0.019755*(1.5)","0.003056*(2)",0.12,0,0,0.18,"-0.003138*(1.5)","-0.0005*(2)",0.12,"-0.001177*(1.5)","-0.000188*(2)",0.12,0,0};
};

#include "cfgWeapons.hpp"