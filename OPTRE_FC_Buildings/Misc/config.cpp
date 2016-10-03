class CfgPatches
{
	class OPTRE_FC_Objects_EnergyShield
	{
		units[]										= {"OPTRE_FC_Energy_shield","OPTRE_FC_Barricade"};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_FC_Core", "OPTRE_Core"};
	};
};

class CfgVehicles
{
	class OPTRE_Objects_Base;
	class OPTRE_FC_Energy_shield: OPTRE_Objects_Base
	{
		dlc = "OPTRE_FC";
		scope = 2;
		scopeCurator = 2;
		displayName = "Energy Shield";
		model = "\OPTRE_FC_Buildings\misc\Energy_shield.p3d";
		author = "Article 2 Studios";
		editorCategory = "OPTRE_FC_EditorCategory_Objects";
		editorSubcategory = "OPTRE_FC_EditorSubcategory_Misc";
	};
	class OPTRE_FC_Barricade: OPTRE_Objects_Base
	{
		dlc = "OPTRE_FC";
		scope = 2;
		scopeCurator = 2;
		displayName = "Barricade";
		model = "\OPTRE_FC_Buildings\misc\Barricade.p3d";
		author = "Article 2 Studios";
		editorCategory = "OPTRE_FC_EditorCategory_Objects";
		editorSubcategory = "OPTRE_FC_EditorSubcategory_Misc";
	};
};