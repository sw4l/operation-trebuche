enum {
DESTRUCTENGINE 												= 2,
DESTRUCTDEFAULT 											= 6,
DESTRUCTWRECK 												= 7,
DESTRUCTTREE 												= 3,
DESTRUCTTENT 												= 4,
STABILIZEDINAXISX 											= 1,
STABILIZEDINAXESXYZ 											= 4,
STABILIZEDINAXISY 											= 2,
STABILIZEDINAXESBOTH 											= 3,
DESTRUCTNO 												= 0,
STABILIZEDINAXESNONE 											= 0,
DESTRUCTMAN 												= 5,
DESTRUCTBUILDING 																				= 1,
};

class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Vehicles
	{
		units[] 										= {""};
		weapons[] 										= {""};																								
		requiredVersion 									= 0.1;
		requiredAddons[] 									= {"OPTRE_Core"};
		author[] 										= {"Eridanus Insurrection Team"};
		fileName 										= "OPTRE_Vehicles.pbo";
	};
};