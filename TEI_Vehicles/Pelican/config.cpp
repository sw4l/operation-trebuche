class CfgPatches
{
	class TEI_Vehicles_Pelican
	{
		units[] = {"TEI_Pelican_unarmed"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F","A3_Weapons_F","TEI_Core"};
	};
};

class CfgVehicles
{
	class helicopter;
	class Helicopter_Base_F: helicopter
	{
		class Turrets;
         	class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
        class HitPoints:HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Turrets: Turrets
		{
			class mainTurret;
              		class cargoTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class Reflectors
		{
			class Right;
		};
	};



	class TEI_Pelican_F: Helicopter_Base_H
	{
         	armor = 40;						        /// just some protection against missiles, collisions and explosions
		destrType = DestructWreck;
		gearRetracting=1;		
		accuracy = 0.5;							/// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		displayName = "Pelican"; 					/// how is the heli displayed in editor
		model = "TEI_Vehicles\Pelican\Pelican_base.p3d"; 		/// path to model of the heli
		icon = "TEI_Vehicles\Pelican\Data\icon.paa";			/// icon in map/editor
		picture = "TEI_Vehicles\Pelican\Data\icon2.paa";		/// small picture in command menu
		driveOnComponent[] = {"wheel_1_1", "wheel_2_1", "wheel_2_2"};

	///HANDLING
		altFullForce = 3000;					 	/// in what height do the engines still have full thrust
		altNoForce = 12000;					 	/// thrust of the engines interpolates to zero between altFullForce and altNoForce
		maxSpeed = 700;						 	/// what is the maximum speed of the vehicle
		maxFordingDepth = 0.55;		   			 	/// how deep could the vehicle be in water without getting some damage
		mainBladeRadius = 7.0;						/// describes the radius of main rotor - used for collision detection
		liftForceCoef = 20;						///multiplier of lift force	
		bodyFrictionCoef = 3;						///multiplier of body friction
		cyclicAsideForceCoef = 1.0;		   			///multiplier of bank force
        	cyclicForwardForceCoef = 1.0;	   				///multiplier of dive force
		simulation = helicopterX;
		frontRotorForceCoef = 10;         				///front rotor(strenth of lift)
		backRotorForceCoef = 10;          				///tailrotor(strength of horzontal movement=)
        ///HANDLING END

        ///ACTIONS AND CARGO
		driverAction = pilot_Heli_Light_02;			/// what is the standard pose for the pilot, defined as animation state
		driverInAction = pilot_Heli_Light_02;			/// what is the standard pose for the pilot, defined as animation state
		precisegetinout = 1;					/// describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
		GetInAction = pilot_Heli_Light_02_Enter;		/// what action uses the pilot to get in the heli, it uses "switchAction" script command on the proxy
		GetOutAction = pilot_Heli_Light_02_Exit;		/// what action uses the pilot to get out of heli
		cargoGetInAction[] = {"GetInHelicopterCargo"};		/// actions for the cargo, the last one in array is used for the rest
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};	/// that means every cargo position could use different action to get in
		transportSoldier = 11;					/// how many cargo positions are available
		cargoCanEject = 1;					/// cargo should be able to grab a chute and drop out of the vehicle
		driverCanEject = 0;					/// pilot shouldn't be able to do so as he doesn't have eject seat
		ejectDeadGunner = "false";
		cargoAction[] = 					/// the same array as getIn/getOut actions for actions to switch to for cargo while inside the heli
						{
							"passenger_apc_narrow_generic01",
							"passenger_apc_generic04",
							"passenger_apc_narrow_generic02",
							"passenger_generic01_leanright",
							"passenger_apc_narrow_generic02",
							"passenger_apc_narrow_generic03",
							"passenger_generic01_leanleft",
							"passenger_generic01_foldhands",
							"passenger_apc_generic04",
							"passenger_generic01_foldhands",
							"passenger_apc_generic02"
						};
		cargoIsCoDriver[] = {0, 0}; 				/// the cargo don't utilize some special memory points to get in
		memoryPointsGetInCargo = "pos cargo";		/// on what memory points should the cargo get in the heli
		memoryPointsGetInCargoDir = "pos cargo dir";/// what is the direction of the cargo facing during get in animation (and opposite for get out)
		hideWeaponsCargo = 1;						/// this makes the poses easier and adds some performance gain because the proxies don't need to be drawn

///transport items		
		class TransportBackpacks	/// adds various backpacks to cargo hold of the heli
		{};
		class TransportItems		/// adds various items to cargo hold of the heli
		{};		
		maximumLoad = 2000;			/// capacity of cargo inventory for backpacks and various other item
///transport items	 end  
  
        #include "sounds.hpp" /// sounds are included in separate file
        #include "reflectors.hpp" 
        #include "turrets.hpp" 
	#include "exhausts.hpp" 	
		
        class hitpoints
                 {
					class HitTurret
					{
						armor=1;
						material=-1;
						name="main_turret_hit";
						visual="gun1";
						passThrough=0.3;
						radius=0.2;
					};
					class HitGun
					{
						armor=1;
						material=-1;
						name="main_gun_hit";
						visual="gun2";
						passThrough=0.3;
						radius=0.2;};
				};
			};
		};

        ///HITPOINTS         
         class HitPoints:Hitpoints
		{
			class HitHull:HitHull
			{
				armor=3;
                  		name = "Body";
				visual="zbytek";
				minimalHit=0.05;
			};
			class HitFuel:HitFuel
			{
				armor=1;
                 		name="fueltank";
				radius=0.25;
				minimalHit=0.05;
			};
			class HitAvionics:HitAvionics
			{
				armor=2;
                  		name="avionics";
				radius=0.4;
				minimalHit=0.05;
			};
			class HitMissiles:HitMissiles
			{
				armor=1;
				radius=0.15;
				minimalHit=0.05;
			};
			class HitEngine:HitEngine
			{
				armor=1.4;
				radius=0.4;
				minimalHit=0.05;
				explosionShielding=3;
			};
			class HitEngine1:HitEngine
			{
				armor=0.7;
				minimalHit=0.1;
				name="engine_1_hit";
				convexComponent="engine_1_hit";
			};
			class HitEngine2:HitEngine
			{
				armor=0.7;
				minimalHit=0.1;
				name="engine_2_hit";
				convexComponent="engine_2_hit";
			};
			class HitHRotor:HitHRotor
			{
				armor=4;
                  		name="mrotor";
				radius=0.4;
				minimalHit=0.09;
				explosionShielding=2.5;
			};
			class HitVRotor:HitVRotor
			{
				armor=3;
                 		name="trotor";
				radius=0.06;
				minimalHit=0.05;
				explosionShielding=6;
			};
		};

        ///HITPOINTS END
        ///WEAPONS
		weapons[] = {"CMFlareLauncher"};	
		magazines[] = {"60Rnd_CMFlare_Chaff_Magazine"}; 
		LockDetectionSystem = CM_Lock_Radar + CM_Lock_Laser;		/// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Missile;			/// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
        ///WEAPONS END
         class ViewPilot: ViewPilot 	/// describes what does the pilot see using bare eyes
		{
			initFov = 0.75; 		/// this is the standard field of view angle for soldier, bit more narrow than a real-life one
			minFov = 0.375; 		/// this is how much can people "zoom" their view via focusing on something
			maxFov = 1.1;			/// this is how wide can the field of view be
		};
		class Viewoptics: Viewoptics 	/// pilot doesn't use optics in this vehicle
		{
			initAngleX = 0; 			/// initial horizontal angle of the optics view relative to proxy position of pilot
			minAngleX = 0; 				/// maximum turn to the left relative to proxy position of pilot
			maxAngleX = 0;				/// maximum turn to the right relative to proxy position of pilot
			initAngleY = 0; 			/// initial vertical angle of the optics view relative to proxy position of pilot
			minAngleY = 0; 				/// maximum elevation down relative to proxy position of pilot
			maxAngleY = 0;				/// maximum elevation up relative to proxy position of pilot
			initFov = 0.1; 				/// the same functionality as in ViewPilot
			minFov = 0.1;  				/// the same functionality as in ViewPilot
			maxFov = 1.2; 				/// the same functionality as in ViewPilot
		};
		class Damage	/// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] = 
			{
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext.rvmat",			/// material mapped in model
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_damage.rvmat",	/// changes to this one once damage of the part reaches 0.5
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_destruct.rvmat",	/// changes to this one once damage of the part reaches 1

				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_damage.rvmat",
				"A3\Air_F\Heli_Light_02\Data\Heli_Light_02_glass_destruct.rvmat",

				"A3\data_F\default.rvmat",
				"A3\data_F\default.rvmat",
				"A3\data_F\default_destruct.rvmat"
			};
		};

		class AnimationSources: AnimationSources	/// custom made animation sources
		{
			class cargoDoors				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 5;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
			};
			class wingControl				/// the class name is later used in model.cfg
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;		/// what value does it have while creating the vehicle
			};
			class gunVert
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;

			};
			class gunHorz
			{
				source = "user";	/// user source means it is waiting on some scripting input
				animPeriod = 1;		/// how long does it take to change value from 0 to 1 (or vice versa)
				initPhase = 0;

			};
			class HideWeapon
			{
				source = "user";
				animPeriod = 0.00001;
				initPhase = 0;
			};
			class Gatling
			{
				source = "revolving";			/// returns bullets left in magazine of said weapon
				weapon = "LMG_Minigun_heli";	/// this is the said weapon
			};
			class Gatling_flash
			{
				source = "ammorandom";			/// this source returns some random value changine each time ammo is spent from this weapon - used for muzzle flashes
				weapon = "LMG_Minigun_heli";	/// this is the said weapon
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "missiles_DAGR";
			};
			class Proxy
			{
				source		 = "user";
				animPeriod	 = 1;
				initPhase	 = 0;
			};					
		};	
		class UserACtions
		{
	
		                        class RampOpen
                        {
                                displayName="Open ramp";
                                displayNameDefault="Open ramp";
                                position=cargo_door_handle;
                                radius=6;
                                onlyForPlayer=true;
                                condition="alive(this)";//this animationPhase ""ramp"" < 0.5 && alive(this) && driver == player
                                statement="this animate [""cargoDoor_1"",1];this animate [""cargoDoor_2"",1]";
				animPeriod = 10;
                        };
                        class RampClose
                        {
                                displayName="Close ramp";
                                displayNameDefault="Close ramp";
                                position=cargo_door_handle;
                                radius=6;
                                onlyForPlayer=true;
                                condition="alive(this)";//this animationPhase ""ramp"" < 0.5 && alive(this) && driver == player
                                statement="this animate [""cargoDoor_1"",0];this animate [""cargoDoor_2"",0]";
				animPeriod = 10;
                        };

                        class wingPos
                        {
                        	displayName="TestWings";
                            displayNameDefault="TestWings";
                            position=cargo_door_handle;
                            radius=6;
                            onlyForPlayer=true;
                            condition="alive(this)";//this animationPhase ""ramp"" < 0.5 && alive(this) && driver == player
                            statement="this animate [""fWingRot"",1]";

                        };

		};
		hiddenSelections[] = //// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"camo1"
		};
	};

	class TEI_Pelican_unarmed: TEI_Pelican_F
	{
		displayName = "D77-TC Pelican";
		scope 	= 2;						/// scope 2 means it is available in editor, this is one of the macros in basicdefines_a3.hpp
		side = 1;						/// 3 stands for civilians, 0 is OPFOR, 1 is BLUFOR, 2 means guerrillas
		faction	= "TEI_UNSC";					/// defines the faction inside of the side
		crew = "B_Pilot_F";					/// lets use the sample soldier we have as default captain of the boat
		accuracy = 1.50; 					/// harder to distinguish side than vehicle type
	   	availableForSupportTypes[] = {"Drop", "Transport"};	/// use any number of expressions from "Artillery", "CAS_Heli", "CAS_Bombing", "Drop", "Transport"
	 	cost = 900000;						/// we need some high cost for such vehicles to be prioritized by AA defences
		vehicleClass = "TEI_UNSC_Air_class";
	};
};