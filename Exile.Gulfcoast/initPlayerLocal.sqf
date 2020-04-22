/**
 * Created with Exile Mod 3DEN Plugin
 * www.exilemod.com
 */
// Load Status Bar
[] execVM "Custom\StatusBar\statusBar_init.sqf";

[] execVM "ClaimVehicles_Client\ClaimVehicles_Client_init.sqf";
if (!hasInterface || isServer) exitWith {};

// 41 NPCs
private _npcs = [
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_18", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","rhs_googles_yellow",[],["","","","","",""]], [3170.77, 7515.93, 1.72144], [0.97964, -0.200761, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "GreekHead_A3_05", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","rhs_googles_orange",[],["","","","","",""]], [3173.4, 7526.07, 1.72144], [0.977811, -0.209487, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_02", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Tactical_Clear",[],["","","","","",""]], [3168.95, 7526.95, 2.74901], [-0.945252, 0.32634, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_12", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","rhs_googles_yellow",[],["","","","","",""]], [3154.58, 7536.01, 2.74901], [0.986002, -0.166734, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_19", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [3157.34, 7546.96, 2.74765], [0.956309, -0.292359, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "AfricanHead_02", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","rhs_googles_orange",[],["","","","","",""]], [3170.42, 7560.34, 2.74901], [-0.251373, -0.96789, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_21", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","rhs_googles_yellow",[],["","","","","",""]], [3175.49, 7546.76, 2.74901], [-0.98217, 0.187994, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_10", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Tactical_Black",[],["","","","","",""]], [3179.02, 7567.33, 1.72144], [0.941933, -0.335801, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_15", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","G_Combat",[],["","","","","",""]], [3181.03, 7574.15, 1.72144], [0.905888, -0.423517, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "Sturrock", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Tactical_Clear",[],["","","","","",""]], [3166.77, 7504.97, 1.72144], [0.845816, 0.533474, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_05", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [10946.9, 4300.58, 19.9914], [-0.981806, -0.189888, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_15", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","rhs_googles_orange",[],["","","","","",""]], [12810.9, 12973.7, 9.26854], [0.990029, 0.140862, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_02", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","rhs_googles_yellow",[],["","","","","",""]], [12812.2, 12979.5, 9.26419], [0.783693, -0.621149, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "WhiteHead_17", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","G_Combat",[],["","","","","",""]], [12844.1, 12925.8, 8.44816], [-0.952787, -0.303641, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_01", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","G_Combat",[],["","","","","",""]], [12842.9, 12929.8, 8.61988], [-0.939908, -0.341428, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_11", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Combat",[],["","","","","",""]], [12863.3, 12947.1, 8.7739], [-0.521568, 0.85321, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_04", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [12850.2, 12925.2, 9.32068], [-0.335619, 0.941998, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "WhiteHead_06", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","rhs_googles_orange",[],["","","","","",""]], [12853.8, 12926.3, 9.30427], [-0.379438, 0.925217, 0], [0, 0, 1]],
["Exile_Trader_Office", [], "Exile_Trader_Office", "WhiteHead_02", [[],[],[],["U_I_G_resistanceLeader_F",[]],["V_Rangemaster_belt",[]],[],"H_Hat_brown","rhs_googles_orange",[],["","","","","",""]], [12857.1, 12927.7, 9.28551], [-0.374149, 0.927369, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "AfricanHead_03", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Combat",[],["","","","","",""]], [12843.9, 12935.5, 9.27818], [0.983965, 0.178362, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "Barklem", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","rhs_googles_yellow",[],["","","","","",""]], [12854, 12943.4, 8.65269], [-0.272058, 0.962281, 0], [0, 0, 1]],
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "WhiteHead_13", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","G_Tactical_Clear",[],["","","","","",""]], [3357.81, 11379.2, 5.74619], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_21", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","rhs_googles_orange",[],["","","","","",""]], [3346.57, 11379.6, 5.77442], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "WhiteHead_05", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","rhs_googles_orange",[],["","","","","",""]], [14744, 4388.23, 2.39978], [-0.379401, -0.925232, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_01", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","rhs_googles_yellow",[],["","","","","",""]], [14744.1, 4382.87, 2.39094], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_VehicleCustoms", [], "Exile_Trader_VehicleCustoms", "GreekHead_A3_07", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","rhs_googles_orange",[],["","","","","",""]], [12287.3, 1884.84, 54.3976], [0.314537, 0.949245, 0], [0, 0, 1]],
["Exile_Trader_Vehicle", [], "Exile_Trader_Vehicle", "WhiteHead_08", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"H_RacingHelmet_4_F","rhs_googles_yellow",[],["","","","","",""]], [12291, 1882.21, 54.3707], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_17", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","rhs_googles_orange",[],["","","","","",""]], [12282.5, 1921.09, 54.4236], [0.506927, 0.861989, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_Aircraft", "WhiteHead_19", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","G_Tactical_Clear",[],["","","","","",""]], [12277.9, 1924, 54.4365], [0.482455, 0.875921, 0], [0, 0, 1]],
["Exile_Trader_Armory", [], "Exile_Trader_Armory", "WhiteHead_07", [["srifle_DMR_06_olive_F","","","",[],[],""],[],[],["U_Rangemaster",[]],["V_Rangemaster_belt",[]],[],"H_Cap_headphones","G_Shades_Black",[],["","","","","",""]], [12250.4, 1916.28, 54.7877], [0.51522, 0.857058, 0], [0, 0, 1]],
["Exile_Trader_Equipment", [], "Exile_Trader_Equipment", "Sturrock", [["arifle_MX_GL_Black_F","","","",[],[],""],[],[],["U_BG_Guerrilla_6_1",[]],["V_I_G_resistanceLeader_F",[]],[],"H_Watchcap_khk","G_Tactical_Clear",[],["","","","","",""]], [12245.1, 1919.13, 54.7653], [0.451445, 0.892299, 0], [0, 0, 1]],
["Exile_Trader_Hardware", [], "Exile_Trader_Hardware", "WhiteHead_10", [[],[],[],["U_C_WorkerCoveralls",[]],["V_BandollierB_rgr",[]],["B_UAV_01_backpack_F",[]],"H_Booniehat_khk_hs","G_Tactical_Black",[],["","","","","",""]], [12263.9, 1920.44, 54.803], [-0.886624, 0.46249, 0], [0, 0, 1]],
["Exile_Trader_Food", [], "Exile_Trader_Food", "WhiteHead_02", [[],[],[],["U_C_Poloshirt_blue",[]],[],[],"H_Cap_tan","",[],["","","","","",""]], [12259.1, 1931.86, 54.8043], [-0.417799, -0.90854, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "WhiteHead_14", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","",[],["","","","","",""]], [12264.1, 1972.66, 55.4302], [0.648676, -0.761064, 0], [0, 0, 1]],
["Exile_Trader_BoatCustoms", [], "Exile_Trader_BoatCustoms", "WhiteHead_06", [[],[],[],["Exile_Uniform_ExileCustoms",[]],[],[],"","",[],["","","","","",""]], [7822.1, 2627.58, 0.664958], [0.612504, 0.790468, 0], [0, 0, 1]],
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "AfricanHead_03", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","G_Combat",[],["","","","","",""]], [7828.48, 2621.51, 0.633356], [0, 1, 0], [0, 0, 1]],
["Exile_Trader_WasteDump", [], "Exile_Trader_WasteDump", "GreekHead_A3_06", [[],[],[],["U_I_G_Story_Protagonist_F",[]],["V_Rangemaster_belt",[]],[],"H_MilCap_gry","G_Aviator",[],["","","","","",""]], [7817.59, 2632.48, 0.623593], [0.928499, 0.371335, 0], [0, 0, 1]],
["Exile_Trader_Aircraft", [], "Exile_Trader_CommunityCustoms", "Sturrock", [[],[],[],["U_I_pilotCoveralls",[]],[],[],"H_PilotHelmetHeli_O","",[],["","","","","",""]], [3829.6, 3092.47, 13.6914], [-0.221681, -0.975119, 0], [0, 0, 1]],
["Exile_Trader_AircraftCustoms", [], "Exile_Trader_AircraftCustoms", "WhiteHead_07", [[],[],[],["Exile_Uniform_ExileCustoms",[]],["V_RebreatherB",[]],[],"H_PilotHelmetFighter_B","rhs_googles_yellow",[],["","","","","",""]], [3839.1, 3083.4, 13.6914], [-0.640647, -0.767836, 0], [0, 0, 1]],
["Exile_Trader_Boat", [], "Exile_Trader_Boat", "WhiteHead_03", [[],[],[],["U_OrestesBody",[]],[],[],"H_Cap_surfer","G_Tactical_Clear",[],["","","","","",""]], [12597.6, 14891.7, 4.97826], [0.0711843, 0.997463, 0], [0, 0, 1]],
["Exile_Trader_SpecialOperations", [], "Exile_Trader_SpecialOperations", "WhiteHead_13", [["arifle_MX_Black_F","","","",[],[],""],[],[],["U_B_CTRG_1",[]],["V_PlateCarrierGL_blk",[]],["B_Parachute",[]],"H_HelmetB_light_black","G_Balaclava_lowprofile",[],["","","","","","NVGoggles_OPFOR"]], [13087, 14542.4, 2.96366], [-0.873764, -0.48635, 0], [0, 0, 1]]
];

{
    private _logic = "Logic" createVehicleLocal [0, 0, 0];
    private _trader = (_x select 0) createVehicleLocal [0, 0, 0];
    private _animations = _x select 1;
    
    _logic setPosWorld (_x select 5);
    _logic setVectorDirAndUp [_x select 6, _x select 7];
    
    _trader setVariable ["BIS_enableRandomization", false];
    _trader setVariable ["BIS_fnc_animalBehaviour_disable", true];
    _trader setVariable ["ExileAnimations", _animations];
    _trader setVariable ["ExileTraderType", _x select 2];
    _trader disableAI "ANIM";
    _trader disableAI "MOVE";
    _trader disableAI "FSM";
    _trader disableAI "AUTOTARGET";
    _trader disableAI "TARGET";
    _trader disableAI "CHECKVISIBLE";
    _trader allowDamage false;
    _trader setFace (_x select 3);
    _trader setUnitLoadOut (_x select 4);
    _trader setPosWorld (_x select 5);
    _trader setVectorDirAndUp [_x select 6, _x select 7];
    _trader reveal _logic;
    _trader attachTo [_logic, [0, 0, 0]];
    _trader switchMove (_animations select 0);
    _trader addEventHandler ["AnimDone", {_this call ExileClient_object_trader_event_onAnimationDone}];
}
forEach _npcs;
ExileClientXM8IsPowerOn = true;
ExileClientSafeZoneESPEventHandler = addMissionEventHandler ["Draw3D", {20 call ExileClient_gui_safezone_safeESP}];


/////////////////////////////////////////////////////////////**************************
private["_code"];
waitUntil {!isNull (findDisplay 46)};
{
    _x params [["_function",""],["_file",""]];
    _code = compileFinal (preprocessFileLineNumbers _file);
    missionNamespace setVariable [_function,_code];
}
forEach
[
    ["Config",'addons\PayCheck\Config.sqf'],
    ["PayCheck",'addons\PayCheck\PayCheck.sqf']
];

call Config;

systemChat "Loading: PayCheck ";

if (usePayCheckMoney) then
{
    [usePayCheckMoneyTime,PayCheck,[],true] call ExileClient_system_thread_addtask;
};

/************************************************************************************************************************************************************/

true
call compile preprocessfilelinenumbers "zcp.sqf";