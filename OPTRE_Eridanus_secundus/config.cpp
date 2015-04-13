////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.88
//Wed Dec 31 20:29:17 2014 : Source 'file' date Wed Dec 31 20:29:17 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_ //IMPORTANT!!

//Class map_stratis : config.bin{
class CfgPatches
{
	class optre_Eridanus_secundus //Look it up here: https://sites.google.com/site/islandconfigs/home
	{
		units[] = {"optre_Eridanus_secundus"}; //not sure if it must be filled, as Stratis didn't, but A2 Maps did...
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Roads_F","A3_Structures_F","A3_Map_Data","A3_Rocks_F"};
		author = "Article 2 studios"; //Author Name (this entry exists twice!)
		mail = "";
	};
};
class CfgVehicles{}; //I think useless in ArmA3
class CfgWorlds
{
	class DefaultWorld
	{
		cutscenes[] = {""}; //plays in main menu (this entry exists twice!)
		class Weather
		{
			class Overcast;
		};
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class Weather: Weather
		{
			class Lighting;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	
	class DefaultLighting;
	class optre_Eridanus_secundus: CAWorld
	{
		dynLightMinBrightnessAmbientCoef = 0.5;
		dynLightMinBrightnessAbsolute = 0.05;
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
			MaxWave = 0.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1.0;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater
		{
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 200;
			waterFogDistanceNear = 10;
			waterFogDistance = 40;
			waterColor[] = {0.04,0.16,0.22};
			deepWaterColor[] = {0.0,0.001,0.009};
			surfaceColor[] = {0.04,0.16,0.22};
			deepSurfaceColor[] = {0.0,0.001,0.009};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0.0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		startWeather = 0.0; //sets weather when opening map in editor
		startFog = 0.0; //sets fog value when opening map in editor | same as fog slider in editor (probably)
		forecastWeather = 0.0; //sets forecast when opening map in editor
		forecastFog = 0.0;//~
		startFogBase = 0.0;//~
		forecastFogBase = 0.0;//~
		startFogDecay = 0.00;//~
		forecastFogDecay = 0.00;//~
		fogBeta0Min = 0.0;//~
		fogBeta0Max = 0.0;//~
		
		class Lighting: DefaultLighting //Too much D: (https://sites.google.com/site/islandconfigs/cfgworlds-overview/cfgworlds-lighting-weather)
		{
			groundReflection[] = {0.132,0.133,0.122};
			moonObjectColorFull[] = {550,500,450,1.0};
			moonHaloObjectColorFull[] = {20,20,20,0.5};
			moonsetObjectColor[] = {275,250,225,1.0};
			moonsetHaloObjectColor[] = {10,10,10,0.25};
			class ThunderBoltLight
			{
				diffuse[] = {2120,2170,8550};
				ambient[] = {0.001,0.001,0.001};
				intensity = 120000;
				class Attenuation
				{
					start = 0.0;
					constant = 0.0;
					linear = 0.0;
					quadratic = 1.0;
				};
			};
			starEmissivity = 30.0;
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost //as above
		{
			deepNight[] = {-15,{ 0.005,0.01,0.01 },{ 0.0,0.002,0.003 },{ 0.0,0.0,0.0 },{ 0.0,0.0,0.0 },{ 0.0,0.002,0.003 },{ 0.0,0.002,0.003 },0};
			fullNight[] = {-5,{ 0.182,0.213,0.25 },{ 0.05,0.111,0.221 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.082,0.128,0.185 },{ 0.283,0.35,0.431 },0};
			sunMoon[] = {-3.75,{ 0.377,0.441,0.518 },{ 0.103,0.227,0.453 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.174,0.274,0.395 },{ 0.582,0.72,0.887 },0.5};
			earlySun[] = {-2.5,{ 0.675,0.69,0.784 },{ 0.22,0.322,0.471 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.424,0.549,0.745 },{ 0.698,0.753,0.894 },1};
			sunrise[] = {0,{ 0.675,0.69,0.784 },{ 0.478,0.51,0.659 },{ 0.2,0.19,0.07 },{ 0.124,0.161,0.236 },{ { 0.847,0.855,0.965 },0.2 },{ { 0.933,0.949,0.996 },2 },1};
			earlyMorning[] = {3,{ { 0.844,0.61,0.469 },0.8 },{ 0.424,0.557,0.651 },{ { 1,0.45,0.2 },1 },{ 0.12,0.26,0.38 },{ { 0.428,0.579,0.743 },2 },{ { 0.844,0.61,0.469 },2.7 },1};
			midMorning[] = {8,{ { 0.822,0.75,0.646 },3.8 },{ { 0.383,0.58,0.858 },1.3 },{ { 1.3,0.9,0.61 },2.8 },{ { 0.12,0.18,0.28 },0.5 },{ { 0.322,0.478,0.675 },3.5 },{ { 1.0,0.929,0.815 },4.7 },1};
			morning[] = {16,{ { 1,0.95,0.91 },12.2 },{ { 0.12,0.18,0.28 },9.2 },{ { 1,0.95,0.91 },11.2 },{ { 0.12,0.18,0.28 },8.5 },{ { 0.14,0.18,0.24 },11.0 },{ { 0.5,0.6,0.9 },13.2 },1};
			noon[] = {45,{ { 0.98,0.94,0.94 },13.8 },{ { 0.2,0.27,0.35 },10.8 },{ { 0.98,0.94,0.94 },13.8 },{ { 0.2,0.27,0.35 },10.8 },{ { 0.5,0.64,1.0 },12.0 },{ { 0.5,0.5,0.5 },14.8 },1,0.5,0.4,0.5,0.4};
		};
		class DayLightingRainy: DayLightingRainy //as above
		{
			deepNight[] = {-15,{ 0.005,0.01,0.01 },{ 0.0,0.002,0.003 },{ 0.0,0.0,0.0 },{ 0.0,0.0,0.0 },{ 0.0,0.002,0.003 },{ 0.0,0.002,0.003 },0};
			fullNight[] = {-5,{ 0.023,0.023,0.023 },{ 0.02,0.02,0.02 },{ 0.023,0.023,0.023 },{ 0.02,0.02,0.02 },{ 0.01,0.01,0.02 },{ 0.08,0.06,0.06 },0};
			sunMoon[] = {-3.75,{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.035,0.04 },{ 0.11,0.08,0.09 },0.5};
			earlySun[] = {-2.5,{ 0.0689,0.0689,0.0804 },{ 0.06,0.06,0.07 },{ 0.0689,0.0689,0.0804 },{ 0.06,0.06,0.07 },{ 0.08,0.07,0.08 },{ 0.14,0.1,0.12 },0.5};
			earlyMorning[] = {3,{ { 1,1,1 },"(-4)+3.95" },{ { 1,1,1 },"(-4)+3.0" },{ { 1,1,1 },"(-4)+3.95" },{ { 1,1,1 },"(-4)+3.0" },{ { 1,1,1 },"(-4)+4" },{ { 1,1,1 },"(-4)+5.5" },1};
			morning[] = {16,{ { 1,1,1 },"(-4)+5.7" },{ { 1,1,1 },"(-4)+4.5" },{ { 1,1,1 },"(-4)+5.7" },{ { 1,1,1 },"(-4)+4.5" },{ { 1,1,1 },"(-4)+7" },{ { 1,1,1 },"(-4)+8" },1};
			lateMorning[] = {25,{ { 1,1,1 },"(-4)+10.45" },{ { 1,1,1 },"(-4)+9.75" },{ { 1,1,1 },"(-4)+10.45" },{ { 1,1,1 },"(-4)+9.75" },{ { 1,1,1 },"(-4)+12" },{ { 1,1,1 },"(-4)+12.75" },1};
			noon[] = {45,{ { 1,1,1 },10.0 },{ { 1,1,1 },9.0 },{ { 1,1,1 },9.0 },{ { 1,1,1 },8.0 },{ { 0.5,0.64,1 },12.0 },{ { 0.5,0.5,0.5 },14.8 },1};
		};
		class Weather: Weather //WAY too much Dx (https://sites.google.com/site/islandconfigs/cfgworlds-overview/cfgworlds-weather)
		{
			class LightingNew
			{
				
			};
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0.0;
				};
				class Rainy: DayLightingRainy
				{
					overcast = 0.0;
				};
			};
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "optre_Eridanus_secundus\data\spacebox.paa";
					skyR = "optre_Eridanus_secundus\data\sky_space_lco.paa";
					horizon = "optre_Eridanus_secundus\data\horizon.paa";
					overcast=0;
					alpha=0;
					bright=0.05;
					speed=0;
					through=1;
					diffuse=1;
					cloudDiffuse=0.95;
					waves=0.2;
					lightingOvercast=0;
				};
				class Weather7: Weather1
				{
					sky = "optre_Eridanus_secundus\data\spacebox.paa";
					skyR = "optre_Eridanus_secundus\data\sky_space_lco.paa";
					horizon = "optre_Eridanus_secundus\data\horizon.paa";
					overcast=0;
					alpha=0;
					bright=0.05;
					speed=0;
					through=1;
					diffuse=1;
					cloudDiffuse=0.95;
					waves=0.2;
					lightingOvercast=0;
				};
				class Weather2: Weather2
				{
					sky = "optre_Eridanus_secundus\data\spacebox.paa";
					skyR = "optre_Eridanus_secundus\data\sky_space_lco.paa";
					horizon = "optre_Eridanus_secundus\data\horizon.paa";
					overcast=0;
					alpha=0;
					bright=0.05;
					speed=0;
					through=1;
					diffuse=1;
					cloudDiffuse=0.95;
					waves=0.2;
					lightingOvercast=0;
				};
				class Weather3: Weather3
				{
					sky = "optre_Eridanus_secundus\data\spacebox.paa";
					skyR = "optre_Eridanus_secundus\data\sky_space_lco.paa";
					horizon = "optre_Eridanus_secundus\data\horizon.paa";
					overcast=0;
					alpha=0;
					bright=0.05;
					speed=0;
					through=1;
					diffuse=1;
					cloudDiffuse=0.95;
					waves=0.2;
					lightingOvercast=0;
				};
				class Weather4: Weather4
				{
					sky = "optre_Eridanus_secundus\data\spacebox.paa";
					skyR = "optre_Eridanus_secundus\data\sky_space_lco.paa";
					horizon = "optre_Eridanus_secundus\data\horizon.paa";
					overcast=0;
					alpha=0;
					bright=0.05;
					speed=0;
					through=1;
					diffuse=1;
					cloudDiffuse=0.95;
					waves=0.2;
					lightingOvercast=0;
				};
				class Weather5: Weather5
				{
					sky = "optre_Eridanus_secundus\data\spacebox.paa";
					skyR = "optre_Eridanus_secundus\data\sky_space_lco.paa";
					horizon = "optre_Eridanus_secundus\data\horizon.paa";
					overcast=0;
					alpha=0;
					bright=0.05;
					speed=0;
					through=1;
					diffuse=1;
					cloudDiffuse=0.95;
					waves=0.2;
					lightingOvercast=0;
				};
				class Weather6: Weather6
				{
					sky = "optre_Eridanus_secundus\data\spacebox.paa";
					skyR = "optre_Eridanus_secundus\data\sky_space_lco.paa";
					horizon = "optre_Eridanus_secundus\data\horizon.paa";
					overcast=0;
					alpha=0;
					bright=0.05;
					speed=0;
					through=1;
					diffuse=1;
					cloudDiffuse=0.95;
					waves=0.2;
					lightingOvercast=0;
				};
			};
		};
		
		humidityUpCoef = 0.1;
		humidityDownCoef = 0.05;
		
		class SimulWeather
		{
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000.0;
			fadeMaxAltitudeKm = 15.0;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 0;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 64;
			cloudGridLength = 64;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 160000;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 10;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4.0;
			opticalDensity = 1.5;
			alphaSharpness = 0.5;
			selfShadowScale = 0.05;
			mieAsymmetry = 0.87;
			minimumLightElevationDegrees = 1.0;
			directLightCoef = 0.25;
			indirectLightCoef = 0.025;
			fogStart = 0;
			fogEnd = 2000;
			fogHeight = 2000;
			class DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 30;
				hazeBaseKm = 5.0;
				hazeScaleKm = 1.0;
				hazeEccentricity = 1;
				brightnessAdjustment = 1.0;
				cloudiness = 0.6;
				cloudBaseKm = 0.85;
				cloudHeightKm = 8.0;
				directLight = 0.4;
				indirectLight = 1.0;
				ambientLight = 3.0;
				noiseOctaves = 5;
				noisePersistence = 1.0;
				fractalAmplitude = 2.8;
				fractalWavelength = 190.0;
				extinction = 5.0;
				diffusivity = 0.001;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0.0;
					cloudiness = 0.0;
					seqFileKeyframe = 0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
					cloudiness = 0.3;
					diffusivity = 0.5;
					seqFileKeyframe = 0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					cloudiness = 0.3;
					seqFileKeyframe = 3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.5;
					cloudiness = 0.4;
					seqFileKeyframe = 4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					cloudiness = 0.9;
					seqFileKeyframe = 5;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1.0;
					cloudiness = 1.0;
					seqFileKeyframe = 7;
				};
			};
		};
		
		hazeDistCoef = 0.1; //??
		hazeFogCoef = 0.98; //??
		hazeBaseHeight = 150; //??
		hazeBaseBeta0 = 6e-005; //??
		hazeDensityDecay = 0.0006; //??
		horizonParallaxCoef = 0.045; //??
		horizonFogColorationStart = "0.8f"; //??
		skyFogColorationStart = "0.7f"; //??
		soundMapSizeCoef = 4; //??
		satelliteNormalBlendStart = 10; //?when satellite and HD texture blend?
		satelliteNormalBlendEnd = 100; //?when satellite and HD texture blend?
		skyObject = "A3\Map_Stratis\data\obloha.p3d"; //skybox object, don't touch
		horizontObject = "A3\Map_Stratis\data\horizont.p3d"; //??
		skyTexture = "optre_Eridanus_secundus\data\spacebox.paa"; //Not sure, because ArmA uses Simulweather, which brings it's own, dynamic sky stuff...
		skyTextureR = "optre_Eridanus_secundus\data\sky_space_lco.paa"; //~
		access = 3; //unknown, leave 3 set
		worldId = 1337; //unknown, change to any number you like
		cutscenes[] = {""}; //plays in main menu
		description = "Eridanus Secundus Asteroid"; //Shown as name when choosing Island
		icon = ""; //Icon in front of Island Name
		worldName = "\optre_Eridanus_secundus\optre_Eridanus_secundus.wrp"; //path to your WRP file
		pictureMap = "\optre_Eridanus_secundus\data\pictureMap_ca.paa"; //Editor Picture
		pictureShot = "A3\map_Stratis\data\ui_Stratis_ca.paa"; //Loadingscreen Picture
		plateFormat = "AS$-####"; //unknown
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ"; //unknown
		author = "Article 2 Studios"; //Author
		mapSize = 2048; //probably the same number as your terrain image size
		mapZone = 35; //unknown
		longitude = 18.28; //west is negative!!
		latitude = -57.29; //south is positive!!
		elevationOffset = 50;//raise the whole map? not sure if waterlevel changes (heightmap 23m above sea ; IRL 123m above sea ; offset 100m)
		envTexture = "A3\Data_f\env_land_ca.tga"; //reflection image, you probably want to change this, so it's not greece anymore...
		newRoadsShape = ""; //roads file!
		class OutsideTerrain //so-called "Debug" area of ArmA
		{
			satellite = "A3\map_Stratis\data\s_satout_co.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "\optre_Eridanus_secundus\data\optre_strdirt_nopx.paa";
					texture = "\optre_Eridanus_secundus\data\optre_strdirt_co.paa";
				};
			};
			colorOutside[] = {0.294118,0.333333,0.372549,1};
		};
		class Grid: Grid 
		{
			offsetX = 0; //grid offset from maps edges
			offsetY = 8192;
			class Zoom1 //Different Grid When Zooming in/out
			{
				zoomMax = 0.2; //Very Zoomed In
				format = "XY";
				formatX = "000"; //Shown on border of map, to determine grid (can also be Aaa)
				formatY = "000"; //Shown on border of map, to determine grid (can also be Aaa)
				stepX = 100; //100m Grid?
				stepY = -100; //100m grid?
			};
			class Zoom2
			{
				zoomMax = 0.95; //Zoomed in a little
				format = "XY";
				formatX = "00"; //Shown on border of map, to determine grid (can also be Aa)
				formatY = "00"; //Shown on border of map, to determine grid (can also be Aa)
				stepX = 1000; //1km grid?
				stepY = -1000; //1km grid?
			};
			class Zoom3
			{
				zoomMax = 1e+030; //completely zoomed out
				format = "XY";
				formatX = "0"; //Shown on border of map, to determine grid (can also be A)
				formatY = "0"; //Shown on border of map, to determine grid (can also be A)
				stepX = 10000; //10km grid?
				stepY = -10000; //10km grid?
			};
		};
		startTime = "12:00"; //Time set when you load this Island in Editor
		startDate = "6/7/2513"; //Date set when you load this Island in Editor
		centerPosition[] = {0,0,0}; //where the editor focuses on when you start the map (probably)
		seagullPos[] = {0,0,0}; //if player respawns as seagull??
		class ReplaceObjects{};//??
		class Sounds//??
		{
			sounds[] = {};
		};
		class Animation//??
		{
			vehicles[] = {};
		};
		clutterGrid = 1.5; //not sure, I think lower number needs better pc, just don't touch
		clutterDist = 125; //Max Distance to see grass (in meters)
		noDetailDist = 65; //not quite sure
		fullDetailDist = 15; //probably how far you see HD ground textures
		midDetailTexture = "A3\Map_Data\middle_mco.paa"; //I'd just leave it 
		minTreesInForestSquare = 4;//??
		minRocksInRockSquare = 4;//??
		
		class Subdivision //Subdivision of Terrain Mesh (https://sites.google.com/site/islandconfigs/cfgworlds-overview/cfgworlds-subdivision-ambient)
		{
			class Fractal
			{
				rougness = 5; //texture roughness factor
				maxRoad = 0.02; //max. value for squares containing road
				maxTrack = 0.5; //max. value for squares containing track
				maxSlopeFactor = 0.05;//max. coeficient depending on slope
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = -0.0;//do not divide surfaces that are under given limit
			minSlope = 0.02;//do not divide flat surfaces
		};
		
		class Ambient{}; //useless in A3 I guess, leave in just in case
		class AmbientA3 //basically where animals etc. show up (https://sites.google.com/site/islandconfigs/cfgworlds-overview/cfgworlds-subdivision-ambient)
		{
			maxCost = 500;
			class Radius440_500
			{
				areaSpawnRadius = 440.0;
				areaMaxRadius = 500.0;
				spawnCircleRadius = 30.0;
				spawnInterval = 4.7;
				class Species
				{
				};
			};
			class Radius40_60
			{
				areaSpawnRadius = 50.0;
				areaMaxRadius = 83.0;
				spawnCircleRadius = 10.0;
				spawnInterval = 1.5;
				class Species
				{
				};
			};
			class Radius30_40
			{
				areaSpawnRadius = 30.0;
				areaMaxRadius = 40.0;
				spawnCircleRadius = 3.0;
				spawnInterval = 3.75;
				class Species
				{
				};
			};
			class Radius15_20
			{
				areaSpawnRadius = 15.0;
				areaMaxRadius = 20.0;
				spawnCircleRadius = 2.0;
				spawnInterval = 2.85;
				class Species
				{
					class FxWindGrass1
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass2
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf1
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf2
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf3
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPollen1
					{
						maxCircleCount = "(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPaper1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPlastic1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius6_10
			{
				areaSpawnRadius = 6.0;
				areaMaxRadius = 10.0;
				spawnCircleRadius = 1.0;
				spawnInterval = 0.1;
				class Species
				{
				};
			};
		};
		
		class Clutter	
		{
		};

		
		class Names //City Names
		{

		};
		
		safePositionAnchor[] = {3874.47,4093.64}; //??
		safePositionRadius = 1900; //??
		loadingTexts[] = {"Eridanus Secundus became the stronghold for the insurrection", "Spartan II's visitied this place twice.","The Asteroid was presumed destroyed by Covenant afte the Gettysburg-Ascendant Justice jumped out of the system"}; //Loading Texts
	};
	initWorld = "optre_Eridanus_secundus";//??
	demoWorld = "optre_Eridanus_secundus";//??
};
class CfgWorldList//??
{
	class optre_Eridanus_secundus{};
};
//};
#include "cfgSurfaces.h"
