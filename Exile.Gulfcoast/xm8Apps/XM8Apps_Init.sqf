disableSerialization;

_app1Text = "Privat Chat";
_app1Logo = "\exile_assets\texture\item\Exile_Item_XM8.paa";
app1_action = { waitUntil {(findDisplay 24) closeDisplay 0;isNull findDisplay 24};
              if(!isNil'fnc_chat_send')then{if(isNull (findDisplay -1340))then{createdialog 'infiSTAR_CHAT';};};
};

_app2Text = "Paintshop";
_app2Logo = "xm8Apps\images\PaintShop.jpg";
app2_action = {
[] execVM "xm8apps\XM8Paintshop\XM8Paintshop.sqf";
};

_app3Text = "Base Camera";
_app3Logo = "\exile_assets\texture\item\Exile_Item_Laptop.paa";
app3_action = {[] spawn ExileSecurity_Territory 
};

_app4Text = "Territory Stats";
_app4Logo = "xm8Apps\images\terri.jpg";
app4_action = {
[] execVM "xm8apps\Apps\Territory\Territory.sqf";
};

_app5Text = "Player Scanner";
_app5Logo = "ExadClient\XM8\Apps\JX\logo.paa";
app5_action = {
[] execVM "xm8Apps\scan\playerscan.sqf";
};

_app6Text = "Vehicle Health";
_app6Logo = "\exile_assets\texture\item\Exile_Item_DuctTape.paa";
app6_action = {
[] execVM "xm8Apps\VehicleHealth\vehicle.sqf";
};

_app12Text = "Home";
_app12Logo = "xm8Apps\images\home.paa";
app12_action = {
[] execVM "ExAdClient\XM8\CustomCode\ExileClient_gui_xm8_show.sqf";
};

_display = uiNameSpace getVariable ["RscExileXM8", displayNull];
(_display displayCtrl 4004) ctrlSetStructuredText (parseText (format ["<t align='center' font='RobotoMedium'>XM8 Apps</t>"]));
ctrlShow [4092, false];
_esc = (findDisplay 24015) displayAddEventHandler ["KeyDown", "if(_this select 1 == 1)then{ExileClientXM8CurrentSlide = 'apps';};"];

_appsSlide = (_display displayCtrl 4040);
_appsSlide ctrlSetPosition [(-19 * 0.05), (0 * 0.05)];
_appsSlide ctrlCommit 0.25;
uiSleep 0.26;
_ctrlArray = [4007,4060,4040,4120,4080,4070,4090,4100,4110,4130,4030];
{
    _ctrl = (_display displayCtrl _x);
    _ctrl ctrlSetFade 1;
    _ctrl ctrlCommit 0;
    ctrlEnable [_x, false];
} forEach _ctrlArray;

_App1Icon = _display ctrlCreate ["RscPicture", 881];
_App1Icon ctrlSetPosition [(9.9 - 3) * (0.025), (6.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App1Icon ctrlSetFade 1;
_App1Icon ctrlCommit 0;
_App1Icon ctrlSetText _app1Logo;
_App1Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 991];
_App1Button ctrlSetPosition [(9 - 3) * (0.025), (6 - 2) * (0.04)];
_App1Button ctrlSetFade 1;
_App1Button ctrlCommit 0;
_App1Button ctrlSetEventHandler ["ButtonClick", "call app1_action;"];
_App1Button ctrlSetStructuredText (parseText (format ["%1",_app1Text]));

_App2Icon = _display ctrlCreate ["RscPicture", 882];
_App2Icon ctrlSetPosition [(16.9 - 3) * (0.025), (6.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App2Icon ctrlSetFade 1;
_App2Icon ctrlCommit 0;
_App2Icon ctrlSetText _app2Logo;
_App2Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 992];
_App2Button ctrlSetPosition [(16 - 3) * (0.025), (6 - 2) * (0.04)];
_App2Button ctrlSetFade 1;
_App2Button ctrlCommit 0;
_App2Button ctrlSetEventHandler ["ButtonClick", "call app2_action;"];
_App2Button ctrlSetStructuredText (parseText (format ["%1",_app2Text]));

_App3Icon = _display ctrlCreate ["RscPicture", 883];
_App3Icon ctrlSetPosition [(23.9 - 3) * (0.025), (6.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App3Icon ctrlSetFade 1;
_App3Icon ctrlCommit 0;
_App3Icon ctrlSetText _app3Logo;
_App3Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 993];
_App3Button ctrlSetPosition [(23 - 3) * (0.025), (6 - 2) * (0.04)];
_App3Button ctrlSetFade 1;
_App3Button ctrlCommit 0;
_App3Button ctrlSetEventHandler ["ButtonClick", "call app3_action;"];
_App3Button ctrlSetStructuredText (parseText (format ["%1",_app3Text]));

_App4Icon = _display ctrlCreate ["RscPicture", 884];
_App4Icon ctrlSetPosition [(30.9 - 3) * (0.025), (6.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App4Icon ctrlSetFade 1;
_App4Icon ctrlCommit 0;
_App4Icon ctrlSetText _app4Logo;
_App4Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 994];
_App4Button ctrlSetPosition [(30 - 3) * (0.025), (6 - 2) * (0.04)];
_App4Button ctrlSetFade 1;
_App4Button ctrlCommit 0;
_App4Button ctrlSetEventHandler ["ButtonClick", "call app4_action;"];
_App4Button ctrlSetStructuredText (parseText (format ["%1",_app4Text]));

_App5Icon = _display ctrlCreate ["RscPicture", 885];
_App5Icon ctrlSetPosition [(9.9 - 3) * (0.025), (12 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App5Icon ctrlSetFade 1;
_App5Icon ctrlCommit 0;
_App5Icon ctrlSetText _app5Logo;
_App5Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 995];
_App5Button ctrlSetPosition [(9 - 3) * (0.025), (11.5 - 2) * (0.04)];
_App5Button ctrlSetFade 1;
_App5Button ctrlCommit 0;
_App5Button ctrlSetEventHandler ["ButtonClick", "call app5_action;"];
_App5Button ctrlSetStructuredText (parseText (format ["%1",_app5Text]));

_App6Icon = _display ctrlCreate ["RscPicture", 886];
_App6Icon ctrlSetPosition [(16.9 - 3) * (0.025), (12 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App6Icon ctrlSetFade 1;
_App6Icon ctrlCommit 0;
_App6Icon ctrlSetText _app6Logo;
_App6Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 996];
_App6Button ctrlSetPosition [(16 - 3) * (0.025), (11.5 - 2) * (0.04)];
_App6Button ctrlSetFade 1;
_App6Button ctrlCommit 0;
_App6Button ctrlSetEventHandler ["ButtonClick", "call app6_action;"];
_App6Button ctrlSetStructuredText (parseText (format ["%1",_app6Text]));

_App7Icon = _display ctrlCreate ["RscPicture", 887];
_App7Icon ctrlSetPosition [(23.9 - 3) * (0.025), (12 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App7Icon ctrlSetFade 1;
_App7Icon ctrlCommit 0;
_App7Icon ctrlSetText _app7Logo;
_App7Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 997];
_App7Button ctrlSetPosition [(23 - 3) * (0.025), (11.5 - 2) * (0.04)];
_App7Button ctrlSetFade 1;
_App7Button ctrlCommit 0;
_App7Button ctrlSetEventHandler ["ButtonClick", "call app7_action;"];
_App7Button ctrlSetStructuredText (parseText (format ["%1",_app7Text]));

_App8Icon = _display ctrlCreate ["RscPicture", 888];
_App8Icon ctrlSetPosition [(30.9 - 3) * (0.025), (12 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App8Icon ctrlSetFade 1;
_App8Icon ctrlCommit 0;
_App8Icon ctrlSetText _app8Logo;
_App8Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 998];
_App8Button ctrlSetPosition [(30 - 3) * (0.025), (11.5 - 2) * (0.04)];
_App8Button ctrlSetFade 1;
_App8Button ctrlCommit 0;
_App8Button ctrlSetEventHandler ["ButtonClick","call app8_action;"];
_App8Button ctrlSetStructuredText (parseText (format ["%1",_app8Text]));

_App9Icon = _display ctrlCreate ["RscPicture", 889];
_App9Icon ctrlSetPosition [(9.9 - 3) * (0.025), (17.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App9Icon ctrlSetFade 1;
_App9Icon ctrlCommit 0;
_App9Icon ctrlSetText _app9Logo;
_App9Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 999];
_App9Button ctrlSetPosition [(9 - 3) * (0.025), (17 - 2) * (0.04)];
_App9Button ctrlSetFade 1;
_App9Button ctrlCommit 0;
_App9Button ctrlSetEventHandler ["ButtonClick", "call app9_action;"];
_App9Button ctrlSetStructuredText (parseText (format ["%1",_app9Text]));

_App10Icon = _display ctrlCreate ["RscPicture", 8810];
_App10Icon ctrlSetPosition [(16.9 - 3) * (0.025), (17.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App10Icon ctrlSetFade 1;
_App10Icon ctrlCommit 0;
_App10Icon ctrlSetText _app10Logo;
_App10Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 9910];
_App10Button ctrlSetPosition [(16 - 3) * (0.025), (17 - 2) * (0.04)];
_App10Button ctrlSetFade 1;
_App10Button ctrlCommit 0;
_App10Button ctrlSetEventHandler ["ButtonClick", "call app10_action;"];
_App10Button ctrlSetStructuredText (parseText (format ["%1",_app10Text]));

_App11Icon = _display ctrlCreate ["RscPicture", 8811];
_App11Icon ctrlSetPosition [(23.9 - 3) * (0.025), (17.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App11Icon ctrlSetFade 1;
_App11Icon ctrlCommit 0;
_App11Icon ctrlSetText _app11Logo;
_App11Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 9911];
_App11Button ctrlSetPosition [(23 - 3) * (0.025), (17 - 2) * (0.04)];
_App11Button ctrlSetFade 1;
_App11Button ctrlCommit 0;
_App11Button ctrlSetEventHandler ["ButtonClick", "call app11_action;"];
_App11Button ctrlSetStructuredText (parseText (format ["%1", _app11Text]));

_App12Icon = _display ctrlCreate ["RscPicture", 8812];
_App12Icon ctrlSetPosition [(30.9 - 3) * (0.025), (17.5 - 2) * (0.04), 2.75 * (0.04), 2.75 * (0.04)];
_App12Icon ctrlSetFade 1;
_App12Icon ctrlCommit 0;
_App12Icon ctrlSetText _app12Logo;
_App12Button = _display ctrlCreate ["RscExileXM8AppButton1x1", 9912];
_App12Button ctrlSetPosition [(30 - 3) * (0.025), (17 - 2) * (0.04)];
_App12Button ctrlSetFade 1;
_App12Button ctrlCommit 0;
_App12Button ctrlSetEventHandler ["ButtonClick", "call app12_action;"];
_App12Button ctrlSetStructuredText (parseText (format ["%1",_app12Text]));

_GoBackBtn = _display displayCtrl 4091;
_GoBackBtn ctrlSetPosition [0.65, 0.7];
_GoBackBtn ctrlSetFade 1;
_GoBackBtn ctrlCommit 0;

_AppsArray = [991,881,992,882,993,883,994,884,995,885,996,886,997,887,998,888,999,889,9910,8810,9911,8811,9912,8812];
{
    _ctrl = (_display displayCtrl _x);
    _ctrl ctrlSetFade 0;
    _ctrl ctrlCommit 0.25;
    ctrlEnable [_x, true];
} forEach _AppsArray;
