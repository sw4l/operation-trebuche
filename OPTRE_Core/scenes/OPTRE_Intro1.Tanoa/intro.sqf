enablesentences false;
setacctime .75;
playMusic "OPTRE_Music_BandofBravery";

titleCut ["", "BLACK IN", 5];
_camera = "camera" camCreate [0,0,0];
_camera cameraEffect ["Internal","BACK"];
_camera camPrepareTarget [85769.86,70932.40,-19012.02];
_camera camPreparePos [9584.36,9115.74,5.31];
_camera camPrepareFOV 0.700;
_camera camCommitPrepared 0;
showCinemaBorder false;

["<img size='8' image='logo\OPTRE_logo.paa'/>",.7,.7,180,5,0,2] spawn bis_fnc_dynamicText;  