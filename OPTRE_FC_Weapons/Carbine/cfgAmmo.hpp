class CfgAmmo
{
	class B_762x51_Ball;
	class OPTRE_FC_Carbine_Bolt: B_762x51_Ball
	{
		hit 							= 10;
		indirectHit 					= 0;
		indirectHitRange 				= 0;
		cartridge 						= "FxCartridge_65_caseless";
		coefGravity 					= 0.0;
		deflecting 						= 0;
		typicalSpeed 					= 700;
		maxSpeed 						= 700;
		explosive 						= 0;
		airFriction 					= 0;
		sideairFriction 				= 0;
		timeToLive 						= 10;
		model 							= "\OPTRE_FC_Weapons\data\carbine_vapor.p3d";
		tracerScale 					= 1;
		tracerStartTime 				= 0;
		tracerEndTime 					= 10;
	};
};