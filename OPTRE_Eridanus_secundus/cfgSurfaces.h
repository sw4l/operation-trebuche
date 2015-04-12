class CfgSurfaces 
{
	class Default {};
	class OPTRE_strdirt_surface : Default
	{	
		files = "OPTRE_strdirt";
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
		class OPTRE_strdirt2_surface : Default
	{	
		files = "OPTRE_strdirt2";
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
		class OPTRE_strdirt3_surface : Default
	{	
		files = "OPTRE_strdirt3";
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
	class OPTRE_strdirt_Character
  	{
			probability[]={0.9, 0.2};
			names[]={};
  	};
		class OPTRE_strdirt2_Character
  	{
			probability[]={0.9, 0.2};
			names[]={};
  	};
		class OPTRE_strdirt3_Character
  	{
			probability[]={0.9, 0.2};
			names[]={};
  	};
};