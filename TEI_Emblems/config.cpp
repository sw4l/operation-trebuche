class CfgPatches //This configures the identification of the pbo to the game
{
	class TEI_Emblems
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"TEI_Core"};
	};
};

// INSIGNIAS

class CfgUnitInsignia //Unit Insignias to show on players' shoulders
{
	class TEI_Insignia_foxgaming
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[TEI] Fox Gaming"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\foxgaming.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\foxgaming.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_ins
	{
		displayName = "[TEI] Insurrection"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\insurrection.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\insurrection.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_medic : TEI_Insignia_foxgaming
	{
		displayName = "[TEI] Medic"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\medic.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\medic.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_odst_7th : TEI_Insignia_foxgaming
	{
		displayName = "[TEI] ODST (7th STB)"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\odst_7th.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\odst_7th.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_odst_13th : TEI_Insignia_foxgaming
	{
		displayName = "[TEI] ODST (13th STB)"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\odst_13th.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\odst_13th.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_odst_19th : TEI_Insignia_foxgaming
	{
		displayName = "[TEI] ODST (19th STB)"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\odst_19th.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\odst_19th.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_oni : TEI_Insignia_foxgaming
	{
		displayName = "[TEI] ONI"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\oni.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\oni.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_unsc_9th : TEI_Insignia_foxgaming
	{
		displayName = "[TEI] UNSC (9th MEU)"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\unsc_9th.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\unsc_9th.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_unsc_1st : TEI_Insignia_foxgaming
	{
		displayName = "[TEI] UNSC (1st Cav)"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\unsc_1st.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\unsc_1st.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_emblems_blackwidow
	{
		scope = 2;
		scopeArsenal = 2;
		displayName = "[TEI] (Emblems) Black Widow"; // Name displayed in Arsenal
		author = "Eridanus Insurrection Team"; // Author displayed in Arsenal
		texture = "\TEI_Emblems\data\blackwidow.paa"; // Image path
		textureVehicle = "\TEI_Emblems\data\blackwidow.paa"; // Does nothing currently, reserved for future use
	};
	class TEI_Insignia_emblems_bull : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Bull";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\bull.paa";
		textureVehicle = "\TEI_Emblems\data\bull.paa";
	};
	class TEI_Insignia_emblems_cartridges : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Cartridges";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\cartridges.paa";
		textureVehicle = "\TEI_Emblems\data\cartridges.paa";
	};
	class TEI_Insignia_emblems_cone : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Cone";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\cone.paa";
		textureVehicle = "\TEI_Emblems\data\cone.paa";
	};
	class TEI_Insignia_emblems_crosshairs : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Crosshairs";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\crosshairs.paa";
		textureVehicle = "\TEI_Emblems\data\crosshairs.paa";
	};
	class TEI_Insignia_emblems_fox : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Fox";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\fox.paa";
		textureVehicle = "\TEI_Emblems\data\fox.paa";
	};
	class TEI_Insignia_emblems_hazmat : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Hazmat";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\hazmat.paa";
		textureVehicle = "\TEI_Emblems\data\hazmat.paa";
	};
	class TEI_Insignia_emblems_hornet : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Hornet";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\hornet.paa";
		textureVehicle = "\TEI_Emblems\data\hornet.paa";
	};
	class TEI_Insignia_emblems_jollyroger : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Jolly Roger";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\jollyroger.paa";
		textureVehicle = "\TEI_Emblems\data\jollyroger.paa";
	};
	class TEI_Insignia_emblems_keepitclean : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Keep It Clean";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\keepitclean.paa";
		textureVehicle = "\TEI_Emblems\data\keepitclean.paa";
	};
	class TEI_Insignia_emblems_king : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) King";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\king.paa";
		textureVehicle = "\TEI_Emblems\data\king.paa";
	};
	class TEI_Insignia_emblems_lightning : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Lightning";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\lightning.paa";
		textureVehicle = "\TEI_Emblems\data\lightning.paa";
	};
	class TEI_Insignia_emblems_radioactive : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Radioactive";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\radioactive.paa";
		textureVehicle = "\TEI_Emblems\data\radioactive.paa";
	};
	class TEI_Insignia_emblems_rooster : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Rooster";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\rooster.paa";
		textureVehicle = "\TEI_Emblems\data\rooster.paa";
	};
	class TEI_Insignia_emblems_skull : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Skull";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\skull.paa";
		textureVehicle = "\TEI_Emblems\data\skull.paa";
	};
	class TEI_Insignia_emblems_stallion : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Stallion";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\stallion.paa";
		textureVehicle = "\TEI_Emblems\data\stallion.paa";
	};
	class TEI_Insignia_emblems_stare : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) The Stare";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\stare.paa";
		textureVehicle = "\TEI_Emblems\data\stare.paa";
	};
	class TEI_Insignia_emblems_thehand : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) The Hand";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\thehand.paa";
		textureVehicle = "\TEI_Emblems\data\thehand.paa";
	};
	class TEI_Insignia_emblems_unicorn : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Unicorn";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\unicorn.paa";
		textureVehicle = "\TEI_Emblems\data\unicorn.paa";
	};
	class TEI_Insignia_emblems_uprising : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Uprising";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\uprising.paa";
		textureVehicle = "\TEI_Emblems\data\uprising.paa";
	};
	class TEI_Insignia_emblems_valkyrie : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Valkyrie";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\valkyrie.paa";
		textureVehicle = "\TEI_Emblems\data\valkyrie.paa";
	};
	class TEI_Insignia_emblems_wolf : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Wolf";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\wolf.paa";
		textureVehicle = "\TEI_Emblems\data\wolf.paa";
	};
	class TEI_Insignia_emblems_yinyang : TEI_Insignia_emblems_blackwidow
	{
		displayName = "[TEI] (Emblems) Yin Yang";
		author = "Eridanus Insurrection Team";
		texture = "\TEI_Emblems\data\yinyang.paa";
		textureVehicle = "\TEI_Emblems\data\yinyang.paa";
	};
};