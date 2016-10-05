class Man;
class Custom;
class Default;
class CfgFaces
{
 class Default;
 class Man_A3: Default
 {
  class Default;
  class ice123_female_bare: Default
  {
   name = "Female (no hair)";
   displayname = "Female (no hair)";
   //texture = "\ice123_swat\face_mask_co.paa";
   identityTypes[] = {"ice123_female1","ice123_female2"};
   head = "ice123_female1";
   material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
   disabled = 0;
	textureHL = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
	materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
	textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
	materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
  };
  class ice123_female_hair: Default
  {
   name = "Female (hair)";
   displayname = "Female (hair)";
   //texture = "\ice123_swat\face_mask_co.paa";
   identityTypes[] = {"ice123_female1","ice123_female2"};
   head = "ice123_female2";
   material = "\A3\Characters_F\Heads\Data\m_White_01.rvmat";
   disabled = 0;
	textureHL = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
	materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
	textureHL2 = "\A3\Characters_F\Heads\Data\hl_white_bald_co.paa";
	materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
  };   
 };
};


class CfgHeads
{
	class Default_A3;
	
	class ice123_female1: Default_A3
	{
		model = "\ice_a3_woman\head_bare.p3d";
	};
	class ice123_female2: Default_A3
	{
		model = "\ice_a3_woman\head_with_hair.p3d";
	};
};


class CfgIdentities
{
 class ice123_female1
 {
  name = "Hut";
  face = "ice123_female_bare";
  speaker = "Male08ENG";
  pitch = 2;
  glasses = "none";
 };
  class ice123_female2
 {
  name = "Hut";
  face = "ice123_female_hair";
  speaker = "Male08ENG";
  pitch = 2;
  glasses = "none";
 };
 };