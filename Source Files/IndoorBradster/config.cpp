class CfgPatches
{
	class StrongHold
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};

	class MainBuilding
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class MainLink
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class NMBuilding01
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class NMBuilding02
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class NMBuilding03
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class SmallCrate
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class WeaponRack
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class NMBuilding04
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class MilBase
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class NMBuilding05
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	class ScytheAA
	{
		units[] = {orbital};
		weapons[] = {};
		requiredVersion = 1.0;
	};
	
};
class CfgVehicles
{
	class All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class TargetTraining: NonStrategic {};
	class TargetGrenade: TargetTraining {};
	
	class StrongHold: TargetGrenade
	{
		model="\TEI_Env_Assets\models\StrongpointBuilding";
		armor=20000;
		scope=2;
		displayName="Building";
	}
	class MainBuilding: TargetGrenade
	{
		model="\TEI_Env_Assets\models\Base";
		armor=20000;
		scope=2;
		displayName="Orbital Base";
	}
	class MainLink: TargetGrenade
	{
		model="\TEI_Env_Assets\models\MainLink";
		armor=20000;
		scope=2;
		displayName="Main Link";
	}
	class NMBuilding01: TargetGrenade
	{
		model="\TEI_Env_Assets\models\building01";
		armor=20000;
		scope=2;
		displayName="NMBuilding01";
	}	
	class NMBuilding02: TargetGrenade
	{
		model="\TEI_Env_Assets\models\building02";
		armor=20000;
		scope=2;
		displayName="NMBuilding02";
	}
	class NMBuilding03: TargetGrenade
	{
		model="\TEI_Env_Assets\models\building03";
		armor=20000;
		scope=2;
		displayName="NMBuilding03";
	}
	class SmallCrate: TargetGrenade
	{
		model="\TEI_Env_Assets\models\crate";
		armor=20000;
		scope=2;
		displayName="SmallCrate";
	}
	class WeaponRack: TargetGrenade
	{
		model="\TEI_Env_Assets\models\weaponrackempty";
		armor=20000;
		scope=2;
		displayName="WeaponRack";
	}
	class NMBuilding04: TargetGrenade
	{
		model="\TEI_Env_Assets\models\building04";
		armor=20000;
		scope=2;
		displayName="NMBuilding04";
	}
	class MilBase: TargetGrenade
	{
		model="\TEI_Env_Assets\models\MilBase";
		armor=20000;
		scope=2;
		displayName="MilitaryBase";
	}
	class NMBuilding05: TargetGrenade
	{
		model="\TEI_Env_Assets\models\building05";
		armor=20000;
		scope=2;
		displayName="NMBuilding05";
	}
	class ScytheAA: TargetGrenade
	{
		model="\TEI_Env_Assets\models\ScytheAA";
		armor=20000;
		scope=2;
		displayName="ScytheAA";
	}
}

