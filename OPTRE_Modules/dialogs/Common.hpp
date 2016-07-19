
// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C
#define ST_GROUP_BOX       96
#define ST_GROUP_BOX2      112
#define ST_ROUNDED_CORNER  ST_GROUP_BOX + ST_CENTER
#define ST_ROUNDED_CORNER2 ST_GROUP_BOX2 + ST_CENTER

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4

////////////////
//Base Classes//
////////////////

class OPTRE_Zeus_RscCombo {

idc = -1;
type = 4;
style = 0 + 0x10;

x = 0;
y = 0;
w = 0.3;
h = 0.035;
wholeHeight = 0.45;

font = "puristaMedium";
sizeEx = 0.03;
maxHistoryDelay = 1.0;

arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";

colorActive[] = {0,0,0,0.9};
colorBackground[] = {0,0,0,0.9};
colorDisabled[] = {0.1,0.81,1,0.4};
colorPicture[] = {0.1,0.81,1,1};
colorPictureDisabled[] = {0.1,0.81,1,0.4};
colorPictureRight[] = {0.1,0.81,1,0.4};
colorPictureRightDisabled[] = {0.1,0.81,1,0.4};
colorPictureRightSelected[] = {0.1,0.81,1,0.4};
colorPictureSelected[] = {0.1,0.81,1,1};
colorScrollbar[] = {0.1,0.81,1,0.4};
colorSelect2Right[] = {0,0,0,0};
colorSelect[] = {0.1,0.81,1,1};
colorSelectBackground[] = {0.1,0.81,1,0.4};
olorSelectBackground2[] = {0.1,0.81,1,0.4};
colorSelectRight[] = {0,0,0,0.8};

colorText[] = {0.1,0.81,1,1};
colorTextRight[] = {0.1,0.81,1,0.4};

soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};

tooltipColorBox[] = {1,1,1,1};
tooltipColorShade[] = {0,0,0,0.65};
tooltipColorText[] = {1,1,1,1};

	class ComboScrollBar  {
	
		color[] = {0.1,0.81,1,1};
		colorActive[] = {0.1,0.81,1,1};
		colorDisabled[] = {0.1,0.81,1,1};
		
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		
		autoScrollDelay = 5;
		autoScrollEnabled = 1;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		
		height = 0.1;
		scrollSpeed = 0.06;
		shadow = 0;
		width = 0;
		
	};
};

class OPTRE_ZEUS_RscCheckBox {

checked = 0;
color[] = {1,1,1,0.7};
colorBackground[] = {0,0,0,0};
colorBackgroundDisabled[] = {0,0,0,0};
colorBackgroundFocused[] = {0,0,0,0};
colorBackgroundHover[] = {0,0,0,0};
colorBackgroundPressed[] = {0,0,0,0};
colorDisabled[] = {1,1,1,0.2};
colorFocused[] = {1,1,1,1};
colorHover[] = {1,1,1,1};
colorPressed[] = {1,1,1,1};
idc = -1;
soundClick[] = {"",0.1,1};
soundEnter[] = {"",0.1,1};
soundEscape[] = {"",0.1,1};
soundPush[] = {"",0.1,1};
style = 0;
textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
tooltipColorBox[] = {1,1,1,1};
tooltipColorShade[] = {0,0,0,0.65};
tooltipColorText[] = {1,1,1,1};
type = 77;
w = "0.025 * safezoneW";
x = "0.375 * safezoneW + safezoneX";
y = "0.36 * safezoneH + safezoneY";
};

class OPTRE_ZEUS_RscProgress
{
	type = 8;
	style = 0;
	colorFrame[] = {0,0,0,0};
	colorBar[] = {1,0,0,1};//{0.81,0.7,0,0.7};
	colorBackground[] = {0,0,0,0};
	texture = "stamina_ca.paa";//"\A3\ui_f\data\GUI\RscCommon\OPTRE_HUD_RscProgress\progressbar_ca.paa";
	//textureBackground = "stamina_ca.paa";
	text = "180";
	w = 1;
	h = 0.03;
};

class OPTRE_ZEUS_SructuredText {

  idc = -1; 
  type = CT_STRUCTURED_TEXT;  // defined constant
  style = ST_LEFT;            // defined constant
  colorBackground[] = { 0,0,0,0 }; 
  x = 0.1; 
  y = 0.1; 
  w = 0.3; 
  h = 0.1; 
  size = 0.030;
  text = "";
  
  class Attributes {
  
    align = "left";
	color = "#1ad1ff"; 
	
  };
};
class OPTRE_ZEUS_RscEdit
{
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.95,0.95,0.95,1};
	colorSelection[] = {0.8784,0.8471,0.651,1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
};

class OPTRE_ZEUS_RscText
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = ST_LEFT;
    linespacing = 1;
    colorBackground[] = {1,0,0,1};
    colorText[] = {1,1,1,1};
    text = "";
    shadow = 2;
    font = "PuristaMedium";
    SizeEx = 0.04000;
    fixedWidth = 0;
    x = 0;
    y = 0;
    h = 0;
    w = 0;
   
};

class OPTRE_HUD_RscText1
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = ST_LEFT;
    linespacing = 1;
    colorBackground[] = {0,0,0,0};
    colorText[] = {0,0,0,0.2};
    text = "";
    shadow = 0;
    font = "PuristaSemiBold";
    SizeEx = 0.04000;
    fixedWidth = 0;
    x = 0;
    y = 0;
    h = 0;
    w = 0;
   
};

class OPTRE_HUD_RscSlider {
	style = SL_HORZ; // SL_HORZ
	type = 43; 
	shadow = false;
    x = 0.4; 
    y = 0.2; 
    w = 0.3; 
    h = 0.025; 
	color[] = {1, 1, 1, 0.6};
	colorActive[] = {1, 1, 1, 1};
	colorDisabled[] = {1, 1, 1, 0.6};
	arrowEmpty = "";
	arrowFull = "";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	tooltipColorText[] = {1, 1, 1, 1};
	tooltipColorBox[] = {1, 1, 1, 1};
	tooltipColorShade[] = {0, 0, 0, 0.65};
};

class OPTRE_ZEUS_RscPicture
{
    access = 0;
    idc = -1;
    type = CT_STATIC;
    style = ST_PICTURE;
    colorBackground[] = {0,0,0,0};
	text = "#(argb,8,8,3)color(0,0,0,0.9)";
    colorText[] = {1,1,1,0.9};
    font = "PuristaMedium";
    sizeEx = 0;
    lineSpacing = 0;
    fixedWidth = 0;
    shadow = 0;
    x = 0;
    y = 0;
    w = 0.2;
    h = 0.15;
};

class OPTRE_ZEUS_RscButton
{
    
    access = 0;
    idc = -1;
    type = CT_BUTTON;
    text = "";
    colorText[] = {1, 1, 1, 1};
    colorDisabled[] = {0.4, 0.4, 0.4, 1};
    colorBackground[] = {1, 0, 0, 1};
    colorBackgroundDisabled[] = {1, 0.5, 0, 1};
    colorBackgroundActive[] = {1, 0.5, 0, 1};
    colorFocused[] = {0.75,0.75,0.75,.5};
    colorShadow[] = {0.023529,0,0.0313725,1};
    colorBorder[] = {0.023529,0,0.0313725,1};
    soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
    soundPush[] = {"\ca\ui\data\sound\new1",0,0};
    soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
    soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
    style = 2;
    x = 0;
    y = 0;
    w = 0.055589;
    h = 0.039216;
    shadow = 2;
    font = "PuristaMedium";
    sizeEx = 0.02921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
};

class OPTRE_ZEUS_RscButton_Invisible
{
    
    access = 0;
    idc = -1;
    type = CT_BUTTON;
    text = "";
    colorText[] = {0,0,0,0};
    colorDisabled[] = {0,0,0,0};
    colorBackground[] = {0,0,0,0};
    colorBackgroundDisabled[] = {0,0.0,0};
    colorBackgroundActive[] = {0.15,0.35,0.55,0.7};
    colorFocused[] = {0,0,0,0};
    colorShadow[] = {0,0,0,0};
    colorBorder[] = {0,0,0,0};
    soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
    soundPush[] = {"\ca\ui\data\sound\new1",0,0};
    soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
    soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
    style = 2;
    x = 0;
    y = 0;
    w = 0.055589;
    h = 0.039216;
    shadow = 2;
    font = "PuristaMedium";
    sizeEx = 0.02921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
};

class OPTRE_ZEUS_RscListBox {

	idc = -1;
	type = 5;
	style = 0 + 0x10;
	font = "PuristaMedium";
	sizeEx = 0.03221; //0.04221;
	shadow = 0;
	colorShadow[] = {0,0,0,0};
    rowHeight = 0.03;
	colorDisabled[] = {1, 1, 1, 1};
	color[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 0.75};
	colorScrollbar[] = {0.95, 0.95, 0.95, 1};
	colorSelect[] = {0.95, 0.95, 0.95, 1};
	colorSelect2[] = {0.95, 0.95, 0.95, 1};
	colorSelectBackground[] = {0.35,0.55,0.15,0.9};
	colorSelectBackground2[] = {0.35,0.55,0.15,0.9};
	columns[] = {0.1, 0.7, 0.1, 0.1};
	period = 0;
	colorBackground[] = {0.4, 0.4, 0.4, 0.60};
	maxHistoryDelay = 1.0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	
	class ListScrollBar  {
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 1;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,0.5,1,0.5};
		colorActive[] = {1,0.5,1,0.5};
		colorDisabled[] = {1,0.5,1,0.5};
		colorBackground[] = {1,0.5,1,0.5};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};