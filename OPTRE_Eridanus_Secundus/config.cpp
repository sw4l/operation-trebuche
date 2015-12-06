#define _ARMA_

//Class config.bin{
class CfgPatches
{
 class Eridanus_secundus
 {
  units[] = {"Eridanus_secundus"};
  weapons[] = {};
  requiredVersion = 1.0;
  requiredaddons[]={"A3_Map_Stratis","A3_Data_F","A3_Roads_F","A3_Structures_F","A3_Map_Data","A3_Rocks_F"};
  version = "18/04/2015";
  fileName = "OPTRE_Eridanus_secundus.pbo";
  author = "Article 2 Studios/ Bushlurker";
 };
};

class CfgWorlds
{
 class CAWorld;
 class Lighting;
 class DayLightingBrightAlmost;
 class DayLightingRainy;
 class weather;
 class defaultlighting;
 class Stratis: CAWorld
 	{
		class Grid;
		class DefaultClutter;
	};
 class Eridanus_Secundus: Stratis
 {
	class DefaultLighting;
	  #include "lighting.hpp"
  cutscenes[] = {};
  author = "Article 2 Studios/ Bushlurker";
  description = "Eridanus Secundus Asteroid Field";
  pictureMap = "A3\map_Stratis\data\pictureMap_ca.paa"; 
  worldName = "OPTRE_Eridanus_Secundus\Eridanus_Secundus.wrp";
  startTime = "11:00";
  startDate = "05/03/2001";
  startWeather = 0.2;
  startFog = 0.0;
  forecastWeather = 0.6;
  forecastFog = 0.0;
  centerPosition[] = {1024,1024,500};
  seagullPos[] = {1024,1024,500};
  longitude = 65;
  latitude = -34;
  elevationOffset = 5;
  envTexture = "A3\Data_f\env_land_ca.tga";
  minTreesInForestSquare = 2;
  minRocksInRockSquare = 2;
  newRoadsShape = "";
  ilsPosition[] = {1024,1024};
  ilsDirection[] = {0.5075,0.08,-0.8616};
  ilsTaxiIn[] = {};
  ilsTaxiOff[] = {};
  drawTaxiway = 0;
 class SecondaryAirports {};
class Sea
  {
   seaTexture = "a3\data_f\seatexture_co.paa";
   seaMaterial = "#water";
   shoreMaterial = "#shore";
   shoreFoamMaterial = "#shorefoam";
   shoreWetMaterial = "#shorewet";
   WaterMapScale = 20;
   WaterGrid = 50;
   MaxTide = 0;
   MaxWave = 0;
   SeaWaveXScale = "2.0/50";
   SeaWaveZScale = "1.0/50";
   SeaWaveHScale = 2.0;
   SeaWaveXDuration = 5000;
   SeaWaveZDuration = 10000;
  };
  class Grid: Grid
  {
   offsetX = 0;
   offsetY = 10240;
   class Zoom1
   {
    zoomMax = 0.15;
    format = "XY";
    formatX = "000";
    formatY = "000";
    stepX = 100;
    stepY = -100;
   };
   class Zoom2
   {
    zoomMax = 0.85;
    format = "XY";
    formatX = "00";
    formatY = "00";
    stepX = 1000;
    stepY = -1000;
   };
   class Zoom3
   {
    zoomMax = 1e+030.0;
    format = "XY";
    formatX = "0";
    formatY = "0";
    stepX = 10000;
    stepY = -10000;
   };
  };
#include "cfgClutter.hpp"
		class Names
		{
			#include "eridanus_secundus.hpp"
		};
 };
};
class CfgWorldList
{
 class Eridanus_secundus{};
};
class CfgMissions
{
 class Cutscenes
 {
 
 };
};


//SURFACES
#include "cfgSurfaces.hpp"

