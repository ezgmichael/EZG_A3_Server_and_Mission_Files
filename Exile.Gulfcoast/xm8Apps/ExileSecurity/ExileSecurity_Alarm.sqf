
Private ["_alarmactive","_lightsource","_range"];

if (Alarmspamprotection) exitWith {};
Alarmspamprotection = true;

_lightsource = [];
_range = ExileCameraSystemBase getVariable ["ExileTerritorySize",""];
_lightsource = ExileCameraSystemBase nearObjects ["Exile_Construction_BaseCamera_Static",_range];
alarmlightson = true;

if (isNil "ExileClientCameraParentObject") exitWith {};

{
if !(isNil {_x getVariable "AlarmActivated"}) then{
    _alarmactive = _x getVariable "AlarmActivated";
   if (_alarmactive) exitWith {alarmlightson = false};
};

}forEach _lightsource;

if !(alarmlightson) exitWith {

    [_range,_lightsource,player,alarmlightson] remoteExec ["ExileSecurity_AlarmLights", -2];
};

[_range,_lightsource,player,alarmlightson] remoteExec ["ExileSecurity_AlarmLights", -2];

if (alarmlightson) then {
_soundsource = _lightsource select 0;
[_soundsource] spawn ExileSecurity_AlarmSound;
};

uisleep 2;

Alarmspamprotection = false;
