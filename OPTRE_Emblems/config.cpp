class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Emblems
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core"};
	};
};

// INSIGNIAS

class CfgUnitInsignia //Unit Insignias to show on players' shoulders
{
	class OPTRE_Insignia_foxgaming
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[OPTRE] Fox Gaming"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\foxgaming.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\foxgaming.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_ins
	{
		displayName = "[OPTRE] Insurrection"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\insurrection.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\insurrection.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_medic : OPTRE_Insignia_foxgaming
	{
		displayName = "[OPTRE] Medic"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\medic.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\medic.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_odst_7th : OPTRE_Insignia_foxgaming
	{
		displayName = "[OPTRE] ODST (7th STB)"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\odst_7th.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\odst_7th.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_odst_13th : OPTRE_Insignia_foxgaming
	{
		displayName = "[OPTRE] ODST (13th STB)"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\odst_13th.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\odst_13th.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_odst_19th : OPTRE_Insignia_foxgaming
	{
		displayName = "[OPTRE] ODST (19th STB)"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\odst_19th.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\odst_19th.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_oni : OPTRE_Insignia_foxgaming
	{
		displayName = "[OPTRE] ONI"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\oni.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\oni.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_unsc_1st : OPTRE_Insignia_foxgaming
	{
		displayName = "[OPTRE] UNSC (1st Cav)"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\unsc_1st.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\unsc_1st.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_unsc_5th : OPTRE_Insignia_foxgaming
	{
		displayName = "[OPTRE] UNSC (5th Fleet)"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\unsc_5th.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\unsc_5th.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_unsc_77th : OPTRE_Insignia_foxgaming
	{
		displayName = "[OPTRE] UNSC (77th MD)"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\unsc_77th.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\unsc_77th.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_emblems_blackwidow
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[OPTRE] (Emblems) Black Widow"; // Name displayed in Arsenal
		author = "Article 2 Studios"; // Author displayed in Arsenal
		texture = "\OPTRE_Emblems\data\blackwidow.paa"; // Image path
		textureVehicle = "\OPTRE_Emblems\data\blackwidow.paa"; // Does nothing currently, reserved for future use
	};
	class OPTRE_Insignia_emblems_bull : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Bull";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\bull.paa";
		textureVehicle = "\OPTRE_Emblems\data\bull.paa";
	};
	class OPTRE_Insignia_emblems_cartridges : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Cartridges";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\cartridges.paa";
		textureVehicle = "\OPTRE_Emblems\data\cartridges.paa";
	};
	class OPTRE_Insignia_emblems_cone : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Cone";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\cone.paa";
		textureVehicle = "\OPTRE_Emblems\data\cone.paa";
	};
	class OPTRE_Insignia_emblems_crosshairs : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Crosshairs";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\crosshairs.paa";
		textureVehicle = "\OPTRE_Emblems\data\crosshairs.paa";
	};
	class OPTRE_Insignia_emblems_fox : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Fox";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\fox.paa";
		textureVehicle = "\OPTRE_Emblems\data\fox.paa";
	};
	class OPTRE_Insignia_emblems_hazmat : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Hazmat";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\hazmat.paa";
		textureVehicle = "\OPTRE_Emblems\data\hazmat.paa";
	};
	class OPTRE_Insignia_emblems_hornet : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Hornet";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\hornet.paa";
		textureVehicle = "\OPTRE_Emblems\data\hornet.paa";
	};
	class OPTRE_Insignia_emblems_jollyroger : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Jolly Roger";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\jollyroger.paa";
		textureVehicle = "\OPTRE_Emblems\data\jollyroger.paa";
	};
	class OPTRE_Insignia_emblems_keepitclean : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Keep It Clean";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\keepitclean.paa";
		textureVehicle = "\OPTRE_Emblems\data\keepitclean.paa";
	};
	class OPTRE_Insignia_emblems_king : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) King";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\king.paa";
		textureVehicle = "\OPTRE_Emblems\data\king.paa";
	};
	class OPTRE_Insignia_emblems_lightning : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Lightning";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\lightning.paa";
		textureVehicle = "\OPTRE_Emblems\data\lightning.paa";
	};
	class OPTRE_Insignia_emblems_radioactive : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Radioactive";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\radioactive.paa";
		textureVehicle = "\OPTRE_Emblems\data\radioactive.paa";
	};
	class OPTRE_Insignia_emblems_rooster : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Rooster";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\rooster.paa";
		textureVehicle = "\OPTRE_Emblems\data\rooster.paa";
	};
	class OPTRE_Insignia_emblems_skull : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Skull";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\skull.paa";
		textureVehicle = "\OPTRE_Emblems\data\skull.paa";
	};
	class OPTRE_Insignia_emblems_stallion : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Stallion";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\stallion.paa";
		textureVehicle = "\OPTRE_Emblems\data\stallion.paa";
	};
	class OPTRE_Insignia_emblems_stare : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) The Stare";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\stare.paa";
		textureVehicle = "\OPTRE_Emblems\data\stare.paa";
	};
	class OPTRE_Insignia_emblems_thehand : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) The Hand";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\thehand.paa";
		textureVehicle = "\OPTRE_Emblems\data\thehand.paa";
	};
	class OPTRE_Insignia_emblems_unicorn : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Unicorn";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\unicorn.paa";
		textureVehicle = "\OPTRE_Emblems\data\unicorn.paa";
	};
	class OPTRE_Insignia_emblems_uprising : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Uprising";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\uprising.paa";
		textureVehicle = "\OPTRE_Emblems\data\uprising.paa";
	};
	class OPTRE_Insignia_emblems_valkyrie : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Valkyrie";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\valkyrie.paa";
		textureVehicle = "\OPTRE_Emblems\data\valkyrie.paa";
	};
	class OPTRE_Insignia_emblems_wolf : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Wolf";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\wolf.paa";
		textureVehicle = "\OPTRE_Emblems\data\wolf.paa";
	};
	class OPTRE_Insignia_emblems_yinyang : OPTRE_Insignia_emblems_blackwidow
	{
		displayName = "[OPTRE] (Emblems) Yin Yang";
		author = "Article 2 Studios";
		texture = "\OPTRE_Emblems\data\yinyang.paa";
		textureVehicle = "\OPTRE_Emblems\data\yinyang.paa";
	};
};