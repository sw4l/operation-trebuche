class CfgMagazines
{
	class 20Rnd_762x51_Mag;
	class OPTRE_FC_PlasmaCannons_Battery: 20Rnd_762x51_Mag
	{
		//model								= "\OPTRE_Weapons\AR\AR_Magazine.p3d";
		displayname							= "Class-2 Energy Battery";
		displaynameshort					= "Plasma";
		ammo								= "OPTRE_FC_PlasmaCannons_Ammo";
		count								= 500;
		initspeed							= 200;
		//picture 							= "\OPTRE_weapons\ar\icons\magazine.paa";
		descriptionshort					= "Battery for Class-2 Energy Guns";
		mass								= 100;
		tracersEvery 						= 1;
		lastRoundsTracer 					= 200;
	};
};