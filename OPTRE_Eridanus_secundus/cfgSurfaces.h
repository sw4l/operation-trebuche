class CfgSurfaces 
{
	class Default {};
	class optre_strdirt_surface : Default
	{	
		files = "optre_strdirt_co";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		grassCover = 0.0;
		impact = "hitConcrete";
	};
		class optre_strdirt2_surface : Default
	{	
		files = "optre_strdirt2_co";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		grassCover = 0.0;
		impact = "hitConcrete";
	};
		class optre_strdirt3_surface : Default
	{	
		files = "optre_strdirt3_co";
		character = "Empty";
		soundEnviron = "concrete";
		soundHit = "concrete";
		rough = 0.05;
		maxSpeedCoef = 1;
		dust = 0.15;
		lucidity = 0.3;
		grassCover = 0.0;
		impact = "hitConcrete";
	};
};

class CfgSurfaceCharacters
{
	class optre_strdirt_Character
  	{
			probability[]={0.9, 0.2};
			names[]={};
  	};
		class optre_strdirt2_Character
  	{
			probability[]={0.9, 0.2};
			names[]={};
  	};
		class optre_strdirt3_Character
  	{
			probability[]={0.9, 0.2};
			names[]={};
  	};
};