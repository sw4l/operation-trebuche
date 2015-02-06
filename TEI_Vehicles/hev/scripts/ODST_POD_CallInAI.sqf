ODST_POD_CallerAI = _this select 0;
_action = _this select 2;
ODST_POD_CallerAI removeaction _action;

openmap true;
hint "Mark position for friendly reinforcements";
onMapSingleClick "openmap false; hint 'Standby for reinforcements'; _drop = createMarker ['AIDrop', _pos]; 'AIDrop' setmarkertype 'mil_triangle'; 'AIDrop' setMarkerText 'ODST Inbound'; 'AIDrop' setMarkerColor 'ColorBLUFOR'; execVM '\tei_vehicles\hev\scripts\ODST_POD_PrepareAI.sqf'; onmapsingleclick '';";