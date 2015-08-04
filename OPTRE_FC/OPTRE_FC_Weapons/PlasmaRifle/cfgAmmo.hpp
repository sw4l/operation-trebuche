class CfgAmmo
{
	class B_762x51_Ball;
	class OPTRE_FC_Plasma_Rifle_Bolt: B_762x51_Ball
	{
		hit 							= 15;
		indirectHit 					= 1;
		indirectHitRange 				= 0.25;
		cartridge 						= "FxCartridge_65_caseless";
		caliber 						= 0.1;
		coefGravity 					= 0.0;
		deflecting 						= 0;
		typicalSpeed 					= 125;
		maxSpeed 						= 125;
		explosive 						= 0;
		airFriction 					= 0;
		sideairFriction 				= 0;
		timeToLive 						= 10;
		model 							= "\OPTRE_FC_Weapons\data\bolt_blue.p3d";
		tracerScale 					= 1;
		tracerStartTime 				= 0;
		tracerEndTime 					= 10;
	};
};