	

    class Mode_SemiAuto;    // External class reference
    class Mode_Burst;       // External class reference
    class Mode_FullAuto;    // External class reference
    class asdg_FrontSideRail;
    class asdg_OpticRail1913;
     
    class CfgWeapons
    {
            class WeaponSlotsInfo;
            class SlotInfo;
            class ItemCore;
            class InventoryOpticsItem_Base_F;
            class GunParticles;
			class InventoryMuzzleItem_Base_F;
			class InventoryFlashLightItem_Base_F;
     
            //ATTACHMENTS
     
            class TEI_M7_silencer: ItemCore
            {
                    scope                                                                   = 2;
                    displayName                                                             = "M7 Silencer";
                    picture                                                                 = "\A3\weapons_F\Data\UI\gear_acco_Sniper_CA.paa";
                    model                                                                   = "\TEI_Weapons\SMG\m7_silencer.p3d";
                    descriptionShort                                                        = "M7 Silencer";
                    inertia                                                                 = 0.1;
					class ItemInfo: InventoryMuzzleItem_Base_F
			{
				mass = 5;
				class MagazineCoef
				{
					initSpeed 		= 0.6;
				};
			
				class AmmoCoef
				{
					// bullet ballistic modifiers
					hit				= 1;
					typicalSpeed	= 1;
					airFriction		= 1;
				
					// AI modifiers
					visibleFire		= 0.5;
					audibleFire		= 0.3;
					visibleFireTime	= 0.5;
					audibleFireTime	= 0.5;
					cost			= 1;
				}; 

				muzzleEnd 			= "zaslehPoint"; // memory point in muzzle supressor's model
				alternativeFire 	= "Zasleh2";  // class in cfgWeapons with model of muzzle flash	

				soundTypeIndex		= 1; /// defines the position in sound[] array in the rifle

				class MuzzleCoef
				{
					dispersionCoef			= 0.8f;
					artilleryDispersionCoef	= 1.0f;
	
					fireLightCoef			= 0.1f;

					recoilCoef				= 1.0f;
					recoilProneCoef			= 1.0f;

					minRangeCoef = 1.0f; minRangeProbabCoef = 1.0f;
					midRangeCoef = 1.0f; midRangeProbabCoef = 1.0f;
					maxRangeCoef = 1.0f; maxRangeProbabCoef = 1.0f;
				};			
			};
			class TEI_M7_Flashlight: ItemCore
			{
				scope 										= 2;
				displayName 								= "M7 Flashlight";
				picture										="\a3\weapons_f\data\ui\gear_accv_flashlight_ca.paa";
				descriptionShort 							= "Flashlight for the M7 SMG";
				model 										= "\TEI_Weapons\SMG\m7_flashlight.p3d";
				class ItemInfo: InventoryFlashLightItem_Base_F
					{
						mass 									= 4;
						class FlashLight
						{
							color[] 							= {180,156,120};
							ambient[] 							= {0.9,0.78,0.6};
							intensity 							= 5;
							size 								= 1;
							innerAngle 							= 20;
							outerAngle 							= 80;
							coneFadeCoef 						= 5;
							position 							= "flash dir";
							direction 							= "flash";
							useFlare 							= 1;
							flareSize 							= 1.4;
							flareMaxDistance 					= "100.0f";
							dayLight 							= 0;
								class Attenuation
									{
									start 							= 0.5;
									constant 						= 0;
									linear 							= 0;
									quadratic 						= 1.1;
									hardLimitStart 					= 20;
									hardLimitEnd 					= 30;
									};
								scale[] 							= {0};
							};
						};
					inertia 									= 0.1;
			};
		};
     
            //WEAPONS
     
            class SMG_01_F;
            class TEI_M7: SMG_01_F
            {
                    scope                                                                   = 2;
            /*		handAnim[]                                                              = {"OFP2_ManSkeleton", "\TEI_Weapons\AR\data\anim\hand_anim_ma5c.rtm"};		*/
                    model                                                                   = "\TEI_Weapons\SMG\SMG.p3d";
                    displayName                                                             = "M7 SMG";
                    descriptionShort                                                        = "UNSC Sub Machine Gun";
                    picture                                                                 = "";
                    magazines[]                                                             = {"TEI_60Rnd_5x23mm_Mag","TEI_60Rnd_5x23mm_Mag_tracer","TEI_48Rnd_5x23mm_Mag","TEI_48Rnd_5x23mm_Mag_tracer"};
                    modelOptics                                                             = "-";
                    dexterity                                                               = 3.25;
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadKatiba";
                    inertia                                                                 = 0.6;
                    class GunParticles: GunParticles
                    {
                       class SecondEffect
                       {
                            positionName                                                    = "Nabojnicestart";
                            directionName                                                   = "Nabojniceend";
                            effectName                                                      = "CaselessAmmoCloud";
                       };
                    };
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
                            class MuzzleSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"TEI_M7_Silencer"};
                                    displayname                                             = "Muzzle Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                                    scope                                                   = 2;
                            };
                            class CowsSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"TEI_M7_sights", "optic_Holosight", "optic_Hamr", "optic_Aco", "optic_Aco_grn", "optic_Arco", "optic_mrco", "optic_nightstalker", "optic_tws", "optic_mrd"};
                                    displayname                                             = "Optics Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\TOP";
                                    scope                                                   = 2;
                            };
                            class PointerSlot: SlotInfo
                            {
                                    access                                                  = 1;
                                    compatibleitems[]                                       = {"TEI_M7_flashlight","TEI_M7_laser" };
                                    displayname                                             = "Pointer Slot";
                                    linkproxy                                               = "\A3\data_f\proxies\weapon_slots\SIDE";
                                    scope                                                   = 2;
                            };
                    };
					
            };
        };
