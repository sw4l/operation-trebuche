(_this select 0) removeaction (_this select 2);

openmap true;
hint "Mark position for friendly reinforcements";
onMapSingleClick "openmap false; hint 'Standby for reinforcements'; _drop = createMarker ['AIDrop', _pos]; 'AIDrop' setmarkertype 'mil_triangle'; 'AIDrop' setMarkerText 'ODST Inbound'; 'AIDrop' setMarkerColor 'ColorBLUFOR'; [_this select 0] call TEI_HEV_fnc_podPrepareAI; onmapsingleclick '';";