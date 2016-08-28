class CfgAmmo
{
	class B_762x51_Ball;
	class OPTRE_FC_Fuel_Rod: B_762x51_Ball
	{
		hit 							= 400;
		indirectHit 					= 50;
		indirectHitRange 				= 3;
		cartridge 						= "FxCartridge_65_caseless";
		caliber 						= 0.1;
		coefGravity 					= 0.0;
		deflecting 						= 0;
		typicalSpeed 					= 100;
		maxSpeed 						= 100;
		explosive 						= 1;
		airFriction 					= 0;
		sideairFriction 				= 0;
		timeToLive 						= 10;
		model 							= "\OPTRE_FC_Weapons\data\rod_green.p3d";
		tracerScale 					= 1;
		tracerStartTime 				= 0;
		tracerEndTime 					= 10;
	};
};