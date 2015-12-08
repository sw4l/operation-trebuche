class CfgGlasses 
{
	class G_Tactical_Clear;
	class G_Goggles_VR;
	
	class OPTRE_Tactical_EyeDummy : G_Tactical_Clear
	{
		optreVarietys[] = {"","",""};
		optreHUDStyle = "EYE";
		displayname = "UNSC Tactical Eye Piece";
	};
	class OPTRE_Tactical_VR : G_Goggles_VR
	{
		optreVarietys[] = {"","",""};
		optreHUDStyle = "Glasses";		
		displayname = "UNSC Tactical Glasses";
	};	

}