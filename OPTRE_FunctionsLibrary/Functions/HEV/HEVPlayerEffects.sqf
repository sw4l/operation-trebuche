hint str _this; 

_logic = _this select 0; 

_frigateLaunchClass = _logic getVariable "FrigateClassName"; 
_frigateAngle = _logic getVariable "FrigateAngle"; 

_Start = _logic getVariable "Start"; 
_Atmosphere = _logic getVariable "Atmosphere"; 
_ReEntryEnd = _logic getVariable "ReEntryEnd"; 
_ChuteHeight = if (_logic getVariable "Chute" < 800) then {800} else {_logic getVariable "Chute"}; 

_StartPos = getPos player; 
_frigate = createVehicle [_frigateLaunchClass,[_StartPos select 0, (_StartPos select 1) - 300, _Start + 400], [], 0, "FLY"]; 
_frigate setDir _frigateAngle;
_frigate enableSimulation false;

addCamShake [1,9999,20];

While {((getPos vehicle player) select 2) > _Atmosphere} do {  

	sleep 0.1;   
	playsound ["WindBig", true]; 

};
resetCamShake; 
addCamShake [6,9999,20];
_RC = player addAction ["Manual Control",{createDialog "OPTRE_Control_HEV";}];

While {((getPos vehicle player) select 2) > _ReEntryEnd} do {  

	sleep 0.1;   
	playsound ["OPTRE_Sounds_HEV_Wind1", true]; 

};

resetCamShake; 
addCamShake [3,9999,10];

While {((getPos vehicle player) select 2) > _ChuteHeight} do {  

	   
	playsound ["OPTRE_Sounds_HEV_Wind1", true]; 
sleep 0.1;

};

//playsound ["OPTRE_Sounds_HEV_Chute", true];
resetCamShake; 
addCamShake [1,9999,100];

While {((getPos vehicle player) select 2) > (_ChuteHeight / 2) } do {  

	sleep 0.1;   
	playsound ["OPTRE_Sounds_HEV_Wind1", true]; 

};

//playsound ["OPTRE_Sounds_HEV_Pop", true];
player removeAction _RC;
closeDialog 0; 

While {((getPos vehicle player) select 2) > 1} do {  

	sleep 0.1;   
	playsound ["OPTRE_Sounds_HEV_Wind1", true];

};

addCamShake [20,9999,100];
sleep 1; 
resetCamShake; 