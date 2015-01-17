class CfgPatches
{
	class TEI_music
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
	};
};
class CfgMusic
{
	tracks[]={"inniedance"};
	class inniedance
	{
		name="TEI Innie Dance";
		sound[]={"\TEI_base\TEI_music\Inniedance.ogg",1,1};
	};
};