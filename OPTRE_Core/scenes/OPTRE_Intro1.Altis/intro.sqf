enablesentences false;
setacctime .75;
playMusic "OPTRE_Music_InnieDance";

titleCut ["", "BLACK IN", 5];
_camera = "camera" camCreate [0,0,0];
_camera cameraEffect ["Internal","BACK"];
_camera camPrepareTarget [79333.42,86588.72,-25001.94];
_camera camPreparePos [16648.70,12804.94,18.80];
_camera camPrepareFOV 0.700;
_camera camCommitPrepared 0;
showCinemaBorder false;

["<img size='8' image='logo\OPTRE_logo.paa'/>",.7,.7,180,5,0,2] spawn bis_fnc_dynamicText;  