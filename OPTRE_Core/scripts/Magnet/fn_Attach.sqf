_pelican = _this select 0;
_OffSet = [0,-5,-2];
_target = OPTRE_Magnet_AttachTarget;
OPTRE_Magnet_DetachTarget = _target;

switch (typeOf _target) do
{			
	case "OPTRE_M12_FAV":
	{
		_OffSet = [0,-4.5,-1.4];
	};
	case "OPTRE_M12_LRV":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12A1_LRV":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12G1_LRV":
	{
		_OffSet = [0,-4.5,-1.95];
	};
	case "OPTRE_M12R_AA":
	{
		_OffSet = [0,-4.5,-2];
	};
	case "OPTRE_M813_TT":
	{
		_OffSet = [0,-4.5,-1.85];
	};	
	case "OPTRE_M12_FAV_tan":
	{
		_OffSet = [0,-4.5,-1.4];
	};
	case "OPTRE_M12_LRV_tan":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12A1_LRV_tan":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12G1_LRV_tan":
	{
		_OffSet = [0,-4.5,-1.95];
	};
	case "OPTRE_M12R_AA_tan":
	{
		_OffSet = [0,-4.5,-2];
	};
	case "OPTRE_M813_TT_tan":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12_FAV_black":
	{
		_OffSet = [0,-4.5,-1.4];
	};
	case "OPTRE_M12_LRV_black":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12A1_LRV_black":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12G1_LRV_black":
	{
		_OffSet = [0,-4.5,-1.95];
	};
	case "OPTRE_M12R_AA_black":
	{
		_OffSet = [0,-4.5,-2];
	};
	case "OPTRE_M813_TT_black":
	{
		_OffSet = [0,-4.5,-1.85];
	};	
	case "OPTRE_M12_FAV_snow":
	{
		_OffSet = [0,-4.5,-1.4];
	};
	case "OPTRE_M12_LRV_snow":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12A1_LRV_snow":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12G1_LRV_snow":
	{
		_OffSet = [0,-4.5,-1.95];
	};
	case "OPTRE_M12R_AA_snow":
	{
		_OffSet = [0,-4.5,-2];
	};
	case "OPTRE_M813_TT_snow":
	{
		_OffSet = [0,-4.5,-1.85];
	};	
	case "OPTRE_M12_FAV_ins":
	{
		_OffSet = [0,-4.5,-1.4];
	};
	case "OPTRE_M12_LRV_ins":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12A1_LRV_ins":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12R_AA_ins":
	{
		_OffSet = [0,-4.5,-2];
	};
	case "OPTRE_M12_FAV_APC":
	{
		_OffSet = [0,-4.5,-1.85];
	};
	case "OPTRE_M12_CIV":
	{
		_OffSet = [0,-4.5,-1.4];
	};
	case "OPTRE_M12_CIV2":
	{
		_OffSet = [0,-4.5,-1.4];
	};
	case "OPTRE_Genet":
	{
		_OffSet = [0,-4.5,-1.3];
	};
};

_target attachTo [_pelican, _offset];
_pelican vehicleChat format ["%1 ATTACHED", typeof _target]; 
OPTRE_Magnet_TargetAttached = true;
 