/*
	Used by Radar and other maps to determine what % of 1 is 50m on arma maps... no solution yet just listed them all manually. 
*/

_scale = switch worldName do {
	case "Altis": {0.011};
	case "gridlock_OPTRE": {0.33};
	case "Iribus_OPTRE": {0.094};
	case "Stratis": {0.045};
	case "Tanoa": {0.024};
	default {0.024}; 
};

_scale