class CfgSurfaces 
{
	class Default {};
	class yourtag_yourproject_dirt_Surface : Default
	{	
		 files = "yourtag_yourproject_dirt_*";
		 rough = 0.09;
		 maxSpeedCoef = 0.9;
		 dust = 0.5;
		 soundEnviron = "dirt";
		 character = "Empty";
		 soundHit = "soft_ground";
		 lucidity = 1;
		 grassCover = 0.03;
	};
	class yourtag_yourproject_dry_grass_Surface : Default
	{	
		 files = "yourtag_yourproject_dry_grass_*";
		 rough = 0.08;
		 maxSpeedCoef = 0.9;
		 dust = 0.75;
		 soundEnviron = "drygrass";
		 character = "yourtag_yourproject_dry_grass_Character";
		 soundHit = "soft_ground";
		 lucidity = 2;
		 grassCover = 0.1;
	};
	class yourtag_yourproject_forest_pine_Surface : Default
	{	
		 files = "yourtag_yourproject_forest_pine_*";
		 rough = 0.12;
		 maxSpeedCoef = 0.8;
		 dust = 0.4;
		 soundEnviron = "drygrass";
		 character = "yourtag_yourproject_forest_pine_Character";
		 soundHit = "soft_ground";
		 lucidity = 3.5;
		 grassCover = 0.04;
	};
	class yourtag_yourproject_grass_green_Surface : Default
	{	
		 files = "yourtag_yourproject_grass_green_*";
		 rough = 0.08;
		 maxSpeedCoef = 0.9;
		 dust = 0.15;
		 soundEnviron = "grass";
		 character = "yourtag_yourproject_green_grass_Character";
		 soundHit = "soft_ground";
		 lucidity = 4;
		 grassCover = 0.05;
	};
	class yourtag_yourproject_soil_Surface : Default
	{	
		 files = "yourtag_yourproject_soil_*";
		 rough = 0.09;
		 maxSpeedCoef = 0.9;
		 dust = 0.5;
		 soundEnviron = "dirt";
		 character = "Empty";
		 soundHit = "hard_ground";
		 lucidity = 1;
		 grassCover = 0.0;
	};
};

class CfgSurfaceCharacters
{
        class yourtag_yourproject_forest_pine_Character
	{
		probability[] = {0.05,0.012,0.01,0.1,0.05};
		names[] = {"yourtag_yourproject_BigFallenBranches_pine","yourtag_yourproject_BigFallenBranches_pine02","yourtag_yourproject_BigFallenBranches_pine03","yourtag_yourproject_GrassDryGroup","yourtag_yourproject_GrassGreenGroup"};
	};
	class yourtag_yourproject_green_grass_Character
  	{
		probability[] = {0.92,0.07};
		names[] = {"yourtag_yourproject_GrassGreenGroup","yourtag_yourproject_FlowerLowYellow2"};
  	};
	class yourtag_yourproject_dry_grass_Character
  	{
		probability[] = {0.21,0.35,0.21,0.09,0.06,0.02};
		names[] = {"yourtag_yourproject_GrassDryGroup","yourtag_yourproject_GrassDryMediumgroup","yourtag_yourproject_WeedBrownTallGroup","yourtag_yourproject_WeedGreenTall","yourtag_yourproject_ThistleYellowShrub","yourtag_yourproject_PlantMullein"};
  	};
};