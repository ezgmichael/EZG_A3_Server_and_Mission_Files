
_gotoxm8apps = _this select 0;

disableSerialization;

_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
_AppsArray = [
5007,
7000,
7001,
6000,
6001,
6002,
6003,
6004,
6005,
6006,
6007,
6008,
6009,
6010,
6011,
6012,
6013,
6014,
6015,
6016,
6017,
6018,
6019,
6020,
6021,
6022,
6023,
6024,
6025,
6026,
6027,
6028,
6029
];
  {
      _ctrl = (_display displayCtrl _x);
      _ctrl ctrlSetFade 1;
      _ctrl ctrlCommit 0.5;
      ctrlEnable [_x, true];
  } forEach _AppsArray;

{
ctrlDelete ((findDisplay 24015) displayCtrl _x);
} forEach _AppsArray;

uisleep 0.5;

[] spawn ExileSecurity_onUnload;

if !(isNil "_gotoxm8apps") then {
execVM'xm8Apps\XM8Apps_Init.sqf';
};
