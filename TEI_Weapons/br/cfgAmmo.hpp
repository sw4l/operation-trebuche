class CfgAmmo
{
	class B_762x51_Ball;
	/*
	class B_762x51_Ball: BulletBase
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 6;
		audibleFire = 9;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 800;
		caliber = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = "(8^0.5)";
			duration = "((round (8^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	*/
	class TEI_B_95x40_Ball: B_762x51_Ball
	{
		hit = 10;
		caliber = 2;
		typicalSpeed = 600;
	};
	class TEI_B_95x40_Tracer: TEI_B_95x40_Ball
	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
};