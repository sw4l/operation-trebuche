class CargoTurret;
		class Turrets:Turrets
		{	
			class MainTurret:MainTurret
			{
				isCopilot=1;
				CanEject=0;
				startEngine=0;
				minElev=-51;
				maxElev=+30;
				initElev=11;
				minTurn=-170;
				maxTurn=170;
				initTurn=0;
                 		maxHorizontalRotSpeed= 1.2;
                  		maxVerticalRotSpeed= 1.2;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName="W";
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.466;
						minFov=0.466;
						maxFov=0.466;
						visionMode[]={"Normal","NVG","Ti"};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium:Wide
					{
						opticsDisplayName="M";
						initFov=0.093;
						minFov=0.093;
						maxFov=0.093;
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow:Wide
					{
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
						initFov=0.029;
						minFov=0.029;
						maxFov=0.029;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=1.1;
						minFov=0.133;
						maxFov=1.1;
						visionMode[]={"Normal","NVG"};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				soundServo[]={"",0.01,1};
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				memoryPointsGetInGunner="Pos_Gunner";
				memoryPointsGetInGunnerDir="Pos_Gunner_dir";
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				memoryPointGun="machinegun";
               			gunAxis="gun_vert_axis";
                		gun = "gun";
				gunBeg="machinegun_beg";
				gunEnd="machinegun_end";
				animationSourceBody= "mainTurret";
				animationSourceGun= "mainGun";
				body = "gun";
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="muzzleFlash";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				gunnerAction="pilot_Heli_Light_02";
				gunnerInAction= "pilot_Heli_Light_02";
				gunnerGetInAction="pilot_Heli_Light_02_Enter";
				gunnerGetOutAction="pilot_Heli_Light_02_Exit";
				precisegetinout=1;
				gunnerOpticsModel="";
				gunnerOpticsEffect[]={"TankCommanderOptics1","BWTV"};
				gunnerForceOptics=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[] = {};	/// array of various vehicle weapons mounted on the heli;
				magazines[] = {}; /// array of corresponding magazines;
				
			class CargoTurret_01: CargoTurret 						/// position for Firing from Vehicles
			{
				gunnerAction 			= "passenger_inside_1";			/// generic animation for sitting inside with rifle ready
				gunnerCompartments 		= "Compartment1";			/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos cargo";				/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos cargo dir";			/// direction of get in action
				memoryPointGunnerOptics		= "";
				gunnerName 			= "Passenger Gunner (Left)";		/// name of the position in the Action menu
				proxyIndex 			= 1;					/// what cargo proxy is used according to index in the model
				maxElev 			= 15;					/// what is the highest possible elevation of the turret
				minElev 			= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 			= 45;					/// what is the left-most possible turn of the turret
				minTurn 			= -15;					/// what is the right-most possible turn of the turret
				isPersonTurret 			= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 		= 0;					/// seatbelts included
				enabledByAnimationSource 	= "cargodoors";				/// doesn't work unless the said animation source is 1
				class dynamicViewLimits
				{
					CargoTurret_02[]={-65,95};
				};
			};		
            			class CargoTurret_02: CargoTurret 					/// position for Firing from Vehicles
			{
				gunnerAction 			= "passenger_inside_1";			/// generic animation for sitting inside with rifle ready
				gunnerCompartments 		= "Compartment1";			/// gunner is not able to switch seats
				memoryPointsGetInGunner 	= "pos cargo";				/// specific memory points to allow choice of position
				memoryPointsGetInGunnerDir 	= "pos cargo dir";			/// direction of get in action
				memoryPointGunnerOptics		= "";
				gunnerName 			= "Passenger Gunner (Right)";		/// name of the position in the Action menu
				proxyIndex 			= 2;					/// what cargo proxy is used according to index in the model
				maxElev 			= 15;					/// what is the highest possible elevation of the turret
				minElev 			= -25;					/// what is the lowest possible elevation of the turret
				maxTurn 			= 45;					/// what is the left-most possible turn of the turret
				minTurn 			= -15;					/// what is the right-most possible turn of the turret
				isPersonTurret 			= 1;					/// enables firing from vehicle functionality
				ejectDeadGunner 		= 0;					/// seatbelts included
				enabledByAnimationSource 	= "cargodoors";				/// doesn't work unless the said animation source is 1
				class dynamicViewLimits
				{
					CargoTurret_01[]={-95,65};
				};
			};	

