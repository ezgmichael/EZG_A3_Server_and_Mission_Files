
if (isDedicated || isServer) exitWith {};

ThermalAllowed = true;

private ['_code', '_function', '_file'];

{
    _code = '';
    _function = _x select 0;
    _file = _x select 1;

    _code = compileFinal (preprocessFileLineNumbers _file);

    missionNamespace setVariable [_function, _code];
}
forEach
[

		['ExileSecurity_Territory', 'xm8Apps\ExileSecurity\ExileSecurity_Territory.sqf'],
		['ExileSecurity_onTerritoryDropDownChanged', 'xm8Apps\ExileSecurity\ExileSecurity_onTerritoryDropDownChanged.sqf'],
		['ExileSecurity_baseTerritory_event_onLoad', 'xm8Apps\ExileSecurity\ExileSecurity_baseTerritory_event_onLoad.sqf'],
		['ExileSecurity_handleTerritorySelection', 'xm8Apps\ExileSecurity\ExileSecurity_handleTerritorySelection.sqf'],
		['ExileSecurity_VisionMode', 'xm8Apps\ExileSecurity\ExileSecurity_VisionMode.sqf'],
		['ExileSecurity_Alarm', 'xm8Apps\ExileSecurity\ExileSecurity_Alarm.sqf'],
		['ExileSecurity_AlarmSound', 'xm8Apps\ExileSecurity\ExileSecurity_AlarmSound.sqf'],
		['ExileSecurity_AlarmLights', 'xm8Apps\ExileSecurity\ExileSecurity_AlarmLights.sqf'],
		['ExileSecurity_AlarmTimer', 'xm8Apps\ExileSecurity\ExileSecurity_AlarmTimer.sqf'],
		['ExileSecurity_baseCameras_onCameraDropDownChanged', 'xm8Apps\ExileSecurity\ExileSecurity_baseCameras_onCameraDropDownChanged.sqf'],
		['ExileSecurity_baseCamera_event_onLoad', 'xm8Apps\ExileSecurity\ExileSecurity_baseCamera_event_onLoad.sqf'],
		['ExileSecurity_onMouseMoving', 'xm8Apps\ExileSecurity\ExileSecurity_onMouseMoving.sqf'],
		['ExileSecurity_onMouseButtonDown', 'xm8Apps\ExileSecurity\ExileSecurity_onMouseButtonDown.sqf'],
		['ExileSecurity_onMouseButtonUp', 'xm8Apps\ExileSecurity\ExileSecurity_onMouseButtonUp.sqf'],
		['ExileSecurity_onConnectButtonClick', 'xm8Apps\ExileSecurity\ExileSecurity_onConnectButtonClick.sqf'],
		['ExileSecurity_onConnectLoad', 'xm8Apps\ExileSecurity\ExileSecurity_onConnectLoad.sqf'],
		['ExileSecurity_onUnload', 'xm8Apps\ExileSecurity\ExileSecurity_onUnload.sqf'],
		['ExileSecurity_togglePower', 'xm8Apps\ExileSecurity\ExileSecurity_togglePower.sqf'],
		['ExileSecurity_ExitApp', 'xm8Apps\ExileSecurity\ExileSecurity_ExitApp.sqf'],
		['ExileSecurity_MenuSlide', 'xm8Apps\ExileSecurity\ExileSecurity_MenuSlide.sqf'],
		['ExileSecurity_SettingsCreate', 'xm8Apps\ExileSecurity\ExileSecurity_SettingsCreate.sqf'],
		['ExileSecurity_CloseSettings', 'xm8Apps\ExileSecurity\ExileSecurity_CloseSettings.sqf'],
		['ExileSecurity_mouseControl_buildlimits', 'xm8Apps\ExileSecurity\ExileSecurity_mouseControl_buildlimits.sqf']

	];
