/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


class CfgBuildings
{
#include "Gulfcoast.h"	
};
class CfgExileEscapeLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		CivillianLowerClass[] = {"Rangefinders", "ShittyUniforms", "ShittyScopes", "GoodMedical", "ShittyUniforms", "OkayHeadgear", "UsefulBackpacks", "ShittyMedical", "OkayUniforms", "ShittyHandGrenades", "OkayHeadgear", "GoodPistols", "UselessVests", "NiceWeapons", "OkayVests", "ShittyHandGrenades", "ShittyScopes", "GrenadeTube3Rnd", "ShittyScopes", "OkayBackpacks", "UselessUniforms", "ShittyBackpacks", "GoodPistols", "ShittyPistols", "OkayHeadgear", "GoodBackpacks", "UsefulWeapons", "ShittyPistols", "OkayWeapons", "UselessHeadgear", "ShittyVests", "UsefulBackpacks", "GoodMedical", "UsefulVests", "SmokeTube1Rnd", "UselessBackpacks", "UselessVests", "ShittyPistols", "UselessUniforms", "ShittyVests", "GrenadeTube1Rnd", "OkayScopes", "ShittyScopes", "NiceHeadgear", "UselessUniforms", "NiceMedical", "OkayWeapons", "ShittyWeapons", "Binoculars", "WeaponBipods", "OkayScopes", "UselessBackpacks", "ShittyPistols", "WeaponSupressors", "ShittyUniforms", "OkayWeapons", "UsefulScopes", "OkayBackpacks", "GoodWeapons", "GoodScopes", "ShittyPistols", "NightVisionGoggles", "ShittyPistols", "SmokeTube3Rnd", "UselessHeadgear", "UselessVests", "ShittyWeapons", "ShittyMedical", "SmokeGrenades", "ShittyPistols", "SmokeTube1Rnd", "UselessUniforms", "GoodHandGrenades", "ShittyHandGrenades", "UselessWeapons", "WeaponItems", "GoodPistols", "UselessWeapons", "ShittyBackpacks", "UsefulScopes", "UselessWeapons", "ShittyMedical", "GoodWeapons", "ShittyMedical", "GrenadeTube1Rnd", "GoodVests", "GoodHeadgear", "UselessHeadgear", "GoodPistols", "GoodHeadgear", "SmokeGrenades", "SmokeTube1Rnd", "OkayVests", "UselessHeadgear", "UselessBackpacks", "OkayUniforms", "UsefulScopes", "OkayScopes", "ShittyBackpacks", "UselessVests", "ShittyUniforms", "SmokeGrenades", "ShittyPistols", "GoodMedical", "NiceBackpacks", "UselessWeapons", "ShittyWeapons", "OkayScopes", "SmokeGrenades", "UsefulWeapons"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		CivillianUpperClass[] = {"ShittyHandGrenades", "Rangefinders", "OkayHeadgear", "ShittyScopes", "UselessWeapons", "UsefulScopes", "ShittyVests", "ShittyUniforms", "GoodPistols", "ShittyMedical", "ShittyBackpacks", "ShittyUniforms", "OkayScopes", "GoodPistols", "GoodHeadgear", "OkayUniforms", "GrenadeTube1Rnd", "UselessBackpacks", "GoodMedical", "UsefulWeapons", "GrenadeTube3Rnd", "ShittyPistols", "ShittyPistols", "UsefulVests", "OkayHeadgear", "SmokeTube1Rnd", "NiceWeapons", "GoodMedical", "UsefulBackpacks", "UselessHeadgear", "OkayVests", "ShittyScopes", "GoodWeapons", "ShittyPistols", "GoodMedical", "ShittyWeapons", "ShittyMedical", "NiceHeadgear", "UselessWeapons", "OkayWeapons", "UselessHeadgear", "WeaponSupressors", "ShittyPistols", "ShittyWeapons", "SmokeGrenades", "UselessUniforms", "UsefulBackpacks", "GoodScopes", "UselessVests", "GoodPistols", "ShittyPistols", "ShittyVests", "GrenadeTube1Rnd", "SmokeGrenades", "NiceMedical", "ShittyWeapons", "UselessBackpacks", "ShittyPistols", "UsefulScopes", "OkayBackpacks", "OkayWeapons", "Binoculars", "OkayVests", "UsefulWeapons", "ShittyMedical", "SmokeGrenades", "WeaponBipods", "OkayWeapons", "ShittyScopes", "OkayScopes", "UselessVests", "SmokeTube3Rnd", "GoodWeapons", "ShittyUniforms", "SmokeGrenades", "OkayScopes", "ShittyBackpacks", "ShittyPistols", "GoodPistols", "GoodBackpacks", "ShittyBackpacks", "GoodHeadgear", "OkayScopes", "OkayHeadgear", "ShittyUniforms", "GoodHandGrenades", "ShittyScopes", "UselessBackpacks", "UselessVests", "ShittyPistols", "UsefulScopes", "WeaponItems", "UselessVests", "UselessWeapons", "NiceBackpacks", "OkayUniforms", "UselessUniforms", "SmokeTube1Rnd", "UselessHeadgear", "SmokeTube1Rnd", "GoodVests", "ShittyMedical", "UselessUniforms", "UselessHeadgear", "ShittyHandGrenades", "NightVisionGoggles", "OkayBackpacks", "UselessWeapons", "UselessUniforms", "ShittyHandGrenades"};

		/*
			Percental Item Group Spawn Chances of Shop:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Shop[] = {"GoodWeapons", "GoodMedical", "UsefulScopes", "SmokeTube1Rnd", "UselessWeapons", "GoodBackpacks", "OkayHeadgear", "GoodMedical", "SmokeGrenades", "ShittyVests", "GrenadeTube1Rnd", "ShittyMedical", "UselessBackpacks", "UselessVests", "UselessHeadgear", "UselessVests", "UsefulScopes", "OkayBackpacks", "SmokeTube3Rnd", "ShittyPistols", "ShittyPistols", "GoodHeadgear", "GoodHeadgear", "UselessVests", "UselessWeapons", "Binoculars", "SmokeTube1Rnd", "OkayHeadgear", "WeaponItems", "ShittyPistols", "OkayScopes", "UselessWeapons", "NiceWeapons", "UselessBackpacks", "ShittyWeapons", "ShittyPistols", "NiceMedical", "ShittyPistols", "GoodPistols", "ShittyUniforms", "ShittyMedical", "UselessUniforms", "ShittyHandGrenades", "UselessWeapons", "OkayVests", "ShittyMedical", "GoodPistols", "GoodPistols", "OkayWeapons", "UselessUniforms", "ShittyPistols", "UsefulWeapons", "ShittyScopes", "GoodHandGrenades", "UsefulVests", "SmokeTube1Rnd", "ShittyVests", "ShittyMedical", "OkayScopes", "SmokeGrenades", "NiceBackpacks", "OkayUniforms", "ShittyWeapons", "ShittyBackpacks", "GoodVests", "UsefulScopes", "GrenadeTube3Rnd", "UselessHeadgear", "UselessUniforms", "NightVisionGoggles", "WeaponSupressors", "SmokeGrenades", "UselessHeadgear", "GoodScopes", "OkayScopes", "OkayVests", "GrenadeTube1Rnd", "OkayWeapons", "ShittyPistols", "UselessHeadgear", "ShittyUniforms", "GoodWeapons", "UsefulWeapons", "ShittyWeapons", "ShittyPistols", "UselessUniforms", "ShittyScopes", "OkayWeapons", "UselessBackpacks", "ShittyScopes", "WeaponBipods", "UsefulBackpacks", "ShittyScopes", "UsefulBackpacks", "ShittyUniforms", "ShittyBackpacks", "OkayBackpacks", "OkayHeadgear", "GoodMedical", "UselessVests", "OkayScopes", "OkayUniforms", "Rangefinders", "ShittyHandGrenades", "ShittyUniforms", "ShittyHandGrenades", "NiceHeadgear", "SmokeGrenades", "GoodPistols", "ShittyBackpacks"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Industrial[] = {"ShittyScopes", "ShittyPistols", "GoodMedical", "UselessHeadgear", "GoodPistols", "SmokeTube1Rnd", "SmokeGrenades", "NightVisionGoggles", "OkayUniforms", "OkayBackpacks", "OkayWeapons", "OkayScopes", "GrenadeTube3Rnd", "UselessWeapons", "UsefulBackpacks", "ShittyMedical", "ShittyWeapons", "UselessUniforms", "OkayVests", "Rangefinders", "NiceBackpacks", "GoodPistols", "UselessVests", "OkayScopes", "SmokeGrenades", "UselessVests", "GoodVests", "GoodWeapons", "UselessUniforms", "ShittyBackpacks", "ShittyPistols", "UselessUniforms", "UsefulScopes", "SmokeTube3Rnd", "ShittyScopes", "ShittyWeapons", "UselessHeadgear", "UsefulVests", "SmokeTube1Rnd", "OkayVests", "ShittyUniforms", "ShittyScopes", "OkayBackpacks", "ShittyPistols", "GoodMedical", "UselessHeadgear", "OkayScopes", "UselessBackpacks", "ShittyUniforms", "ShittyVests", "UselessBackpacks", "UsefulScopes", "WeaponBipods", "NiceMedical", "ShittyMedical", "SmokeGrenades", "ShittyWeapons", "ShittyUniforms", "GoodHeadgear", "UselessBackpacks", "UselessWeapons", "GoodPistols", "ShittyMedical", "NiceWeapons", "ShittyMedical", "GrenadeTube1Rnd", "OkayWeapons", "UsefulScopes", "WeaponSupressors", "OkayUniforms", "ShittyBackpacks", "UselessWeapons", "GoodBackpacks", "ShittyUniforms", "OkayWeapons", "UsefulWeapons", "GoodHandGrenades", "GoodMedical", "ShittyPistols", "UselessUniforms", "ShittyVests", "GoodHeadgear", "SmokeTube1Rnd", "UselessVests", "GoodPistols", "OkayHeadgear", "ShittyPistols", "ShittyHandGrenades", "GoodWeapons", "OkayHeadgear", "Binoculars", "ShittyBackpacks", "ShittyPistols", "GoodScopes", "UselessVests", "SmokeGrenades", "UsefulWeapons", "OkayHeadgear", "ShittyHandGrenades", "ShittyScopes", "OkayScopes", "NiceHeadgear", "ShittyPistols", "UselessHeadgear", "GrenadeTube1Rnd", "ShittyPistols", "ShittyHandGrenades", "WeaponItems", "UselessWeapons", "UsefulBackpacks"};

		/*
			Percental Item Group Spawn Chances of Factories:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Factories[] = {"OkayWeapons", "ShittyScopes", "SmokeGrenades", "OkayScopes", "ShittyPistols", "WeaponSupressors", "UselessHeadgear", "UsefulBackpacks", "UselessVests", "GrenadeTube3Rnd", "UselessWeapons", "SmokeGrenades", "UsefulWeapons", "ShittyScopes", "WeaponItems", "GrenadeTube1Rnd", "Rangefinders", "NiceWeapons", "UselessWeapons", "OkayScopes", "GoodWeapons", "ShittyMedical", "NiceBackpacks", "SmokeTube1Rnd", "OkayWeapons", "ShittyMedical", "ShittyMedical", "ShittyVests", "ShittyMedical", "OkayVests", "NiceMedical", "ShittyPistols", "NightVisionGoggles", "OkayBackpacks", "SmokeTube1Rnd", "ShittyHandGrenades", "UsefulBackpacks", "GoodScopes", "OkayUniforms", "ShittyBackpacks", "OkayBackpacks", "ShittyPistols", "UselessVests", "UsefulVests", "GrenadeTube1Rnd", "ShittyPistols", "ShittyPistols", "ShittyBackpacks", "ShittyHandGrenades", "GoodVests", "SmokeGrenades", "GoodPistols", "ShittyPistols", "GoodWeapons", "ShittyScopes", "ShittyUniforms", "UselessUniforms", "UselessUniforms", "GoodMedical", "GoodBackpacks", "UsefulWeapons", "UselessBackpacks", "OkayHeadgear", "UselessWeapons", "ShittyVests", "OkayUniforms", "ShittyScopes", "ShittyUniforms", "WeaponBipods", "SmokeTube3Rnd", "ShittyUniforms", "ShittyWeapons", "OkayWeapons", "GoodHeadgear", "GoodMedical", "GoodHandGrenades", "ShittyPistols", "UselessUniforms", "ShittyHandGrenades", "OkayScopes", "ShittyPistols", "UselessVests", "ShittyBackpacks", "ShittyUniforms", "UselessHeadgear", "UselessWeapons", "SmokeGrenades", "OkayHeadgear", "UselessUniforms", "GoodPistols", "OkayScopes", "GoodPistols", "SmokeTube1Rnd", "UselessHeadgear", "ShittyWeapons", "UselessBackpacks", "ShittyWeapons", "Binoculars", "GoodMedical", "NiceHeadgear", "UsefulScopes", "OkayHeadgear", "GoodPistols", "UsefulScopes", "GoodHeadgear", "UselessVests", "UsefulScopes", "UselessHeadgear", "UselessBackpacks", "OkayVests"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		VehicleService[] = {"ShittyPistols", "WeaponSupressors", "GoodHandGrenades", "UselessHeadgear", "OkayWeapons", "UselessUniforms", "ShittyPistols", "GoodHeadgear", "ShittyMedical", "UselessVests", "OkayUniforms", "ShittyUniforms", "UselessVests", "GoodScopes", "UsefulScopes", "SmokeTube1Rnd", "GoodVests", "UselessHeadgear", "OkayBackpacks", "OkayUniforms", "UselessUniforms", "ShittyHandGrenades", "UsefulBackpacks", "UselessUniforms", "ShittyBackpacks", "ShittyPistols", "GoodMedical", "ShittyHandGrenades", "UsefulScopes", "ShittyScopes", "ShittyBackpacks", "OkayHeadgear", "ShittyScopes", "GoodHeadgear", "OkayVests", "GoodBackpacks", "GoodMedical", "ShittyVests", "ShittyVests", "OkayWeapons", "UselessWeapons", "UsefulWeapons", "ShittyPistols", "WeaponItems", "ShittyUniforms", "GrenadeTube1Rnd", "NightVisionGoggles", "OkayScopes", "SmokeGrenades", "GrenadeTube3Rnd", "GoodPistols", "ShittyUniforms", "ShittyWeapons", "NiceHeadgear", "ShittyPistols", "ShittyPistols", "SmokeGrenades", "OkayBackpacks", "UselessWeapons", "ShittyMedical", "SmokeTube1Rnd", "NiceBackpacks", "UselessUniforms", "GoodPistols", "ShittyBackpacks", "UsefulWeapons", "OkayScopes", "OkayWeapons", "UsefulScopes", "OkayHeadgear", "ShittyUniforms", "ShittyWeapons", "Binoculars", "GoodPistols", "ShittyHandGrenades", "UselessHeadgear", "ShittyScopes", "SmokeGrenades", "UselessWeapons", "SmokeTube3Rnd", "ShittyMedical", "OkayVests", "WeaponBipods", "NiceWeapons", "GoodMedical", "ShittyPistols", "UsefulBackpacks", "GoodPistols", "NiceMedical", "ShittyWeapons", "GoodWeapons", "OkayScopes", "UselessWeapons", "SmokeGrenades", "Rangefinders", "UselessVests", "OkayHeadgear", "UsefulVests", "OkayScopes", "UselessBackpacks", "ShittyPistols", "UselessVests", "UselessBackpacks", "UselessHeadgear", "ShittyScopes", "UselessBackpacks", "GrenadeTube1Rnd", "SmokeTube1Rnd", "ShittyMedical", "GoodWeapons"};

		/*
			Percental Item Group Spawn Chances of Military:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Military[] = {"OkayUniforms", "OkayBackpacks", "OkayHeadgear", "SmokeGrenades", "UselessUniforms", "ShittyHandGrenades", "NiceWeapons", "GoodMedical", "OkayUniforms", "GoodPistols", "GoodScopes", "ShittyScopes", "UsefulBackpacks", "ShittyBackpacks", "GoodHandGrenades", "UselessBackpacks", "Rangefinders", "OkayWeapons", "SmokeGrenades", "ShittyScopes", "UsefulScopes", "SmokeTube1Rnd", "GoodWeapons", "OkayWeapons", "GrenadeTube1Rnd", "UsefulScopes", "ShittyScopes", "OkayVests", "GoodPistols", "ShittyHandGrenades", "UselessBackpacks", "UselessWeapons", "ShittyUniforms", "OkayScopes", "ShittyPistols", "SmokeTube1Rnd", "UselessVests", "UsefulBackpacks", "OkayBackpacks", "WeaponSupressors", "UselessVests", "UselessVests", "SmokeGrenades", "ShittyWeapons", "ShittyVests", "ShittyBackpacks", "ShittyPistols", "GrenadeTube3Rnd", "OkayHeadgear", "ShittyMedical", "SmokeTube3Rnd", "ShittyMedical", "UselessWeapons", "ShittyBackpacks", "UsefulWeapons", "ShittyWeapons", "ShittyPistols", "GoodBackpacks", "GoodMedical", "SmokeTube1Rnd", "WeaponBipods", "OkayScopes", "NiceMedical", "GoodPistols", "OkayScopes", "OkayScopes", "NightVisionGoggles", "GoodPistols", "UselessHeadgear", "UselessHeadgear", "UselessVests", "OkayWeapons", "ShittyMedical", "SmokeGrenades", "UselessHeadgear", "ShittyPistols", "ShittyWeapons", "ShittyPistols", "UsefulScopes", "GoodVests", "OkayHeadgear", "UselessWeapons", "ShittyVests", "ShittyScopes", "UselessUniforms", "UselessBackpacks", "UselessWeapons", "UselessUniforms", "Binoculars", "ShittyMedical", "UsefulVests", "ShittyPistols", "GoodMedical", "GrenadeTube1Rnd", "ShittyPistols", "GoodWeapons", "WeaponItems", "GoodHeadgear", "UselessHeadgear", "NiceHeadgear", "ShittyUniforms", "ShittyPistols", "ShittyUniforms", "ShittyHandGrenades", "NiceBackpacks", "UsefulWeapons", "GoodHeadgear", "OkayVests", "UselessUniforms", "ShittyUniforms"};

		/*
			Percental Item Group Spawn Chances of Medical:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Medical[] = {"ShittyScopes", "GoodHeadgear", "UsefulWeapons", "ShittyUniforms", "ShittyScopes", "OkayVests", "ShittyVests", "GrenadeTube3Rnd", "UselessHeadgear", "OkayUniforms", "ShittyPistols", "GoodMedical", "ShittyHandGrenades", "UselessUniforms", "ShittyVests", "UsefulScopes", "GoodMedical", "UsefulWeapons", "SmokeTube3Rnd", "SmokeTube1Rnd", "GrenadeTube1Rnd", "NiceBackpacks", "WeaponItems", "OkayHeadgear", "ShittyHandGrenades", "NiceMedical", "ShittyWeapons", "ShittyUniforms", "GoodMedical", "GoodHandGrenades", "GoodHeadgear", "GoodPistols", "OkayWeapons", "ShittyPistols", "OkayBackpacks", "WeaponSupressors", "OkayScopes", "UselessWeapons", "ShittyPistols", "UselessWeapons", "ShittyPistols", "ShittyScopes", "OkayHeadgear", "UselessHeadgear", "UselessVests", "OkayVests", "UselessVests", "OkayUniforms", "UselessVests", "ShittyBackpacks", "UselessVests", "NightVisionGoggles", "ShittyBackpacks", "GoodPistols", "UselessWeapons", "SmokeGrenades", "SmokeGrenades", "ShittyMedical", "ShittyPistols", "ShittyPistols", "UsefulScopes", "OkayWeapons", "OkayHeadgear", "ShittyUniforms", "OkayScopes", "UsefulBackpacks", "UselessBackpacks", "UsefulScopes", "UselessBackpacks", "NiceHeadgear", "GoodPistols", "ShittyWeapons", "ShittyPistols", "OkayScopes", "ShittyScopes", "OkayWeapons", "WeaponBipods", "UselessBackpacks", "OkayScopes", "ShittyWeapons", "SmokeGrenades", "Binoculars", "GoodBackpacks", "SmokeGrenades", "UselessWeapons", "UselessUniforms", "ShittyMedical", "ShittyUniforms", "UselessUniforms", "UselessUniforms", "UsefulBackpacks", "OkayBackpacks", "GrenadeTube1Rnd", "UsefulVests", "ShittyPistols", "SmokeTube1Rnd", "GoodWeapons", "NiceWeapons", "ShittyHandGrenades", "SmokeTube1Rnd", "ShittyBackpacks", "UselessHeadgear", "ShittyMedical", "GoodScopes", "ShittyMedical", "UselessHeadgear", "Rangefinders", "GoodVests", "GoodPistols", "GoodWeapons"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Tourist[] = {"GoodMedical", "NiceMedical", "ShittyPistols", "ShittyWeapons", "UselessVests", "GoodScopes", "GoodHandGrenades", "UsefulWeapons", "OkayVests", "ShittyMedical", "GoodPistols", "ShittyPistols", "SmokeTube3Rnd", "UselessWeapons", "ShittyWeapons", "Rangefinders", "UselessUniforms", "SmokeGrenades", "NightVisionGoggles", "ShittyBackpacks", "ShittyScopes", "ShittyMedical", "ShittyHandGrenades", "GrenadeTube1Rnd", "ShittyUniforms", "UselessWeapons", "GoodBackpacks", "UselessHeadgear", "UsefulScopes", "UselessHeadgear", "ShittyHandGrenades", "GrenadeTube3Rnd", "SmokeGrenades", "NiceHeadgear", "ShittyMedical", "OkayWeapons", "OkayWeapons", "ShittyUniforms", "ShittyPistols", "Binoculars", "ShittyUniforms", "UsefulScopes", "ShittyPistols", "UselessBackpacks", "UselessUniforms", "WeaponBipods", "SmokeTube1Rnd", "UselessHeadgear", "WeaponItems", "GoodVests", "ShittyScopes", "GoodHeadgear", "UsefulScopes", "UselessVests", "GoodMedical", "OkayVests", "SmokeGrenades", "ShittyScopes", "UsefulBackpacks", "OkayUniforms", "ShittyScopes", "ShittyMedical", "UsefulBackpacks", "OkayScopes", "GoodMedical", "ShittyPistols", "GrenadeTube1Rnd", "GoodWeapons", "UselessVests", "UselessWeapons", "GoodWeapons", "UsefulWeapons", "UsefulVests", "WeaponSupressors", "UselessBackpacks", "SmokeTube1Rnd", "GoodHeadgear", "UselessHeadgear", "ShittyWeapons", "ShittyBackpacks", "NiceWeapons", "ShittyHandGrenades", "SmokeTube1Rnd", "ShittyPistols", "UselessUniforms", "UselessBackpacks", "OkayHeadgear", "OkayScopes", "GoodPistols", "UselessUniforms", "OkayWeapons", "OkayBackpacks", "OkayUniforms", "OkayBackpacks", "ShittyUniforms", "ShittyVests", "ShittyVests", "UselessWeapons", "ShittyPistols", "OkayHeadgear", "SmokeGrenades", "UselessVests", "OkayScopes", "GoodPistols", "GoodPistols", "ShittyPistols", "OkayHeadgear", "NiceBackpacks", "ShittyBackpacks", "OkayScopes"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			ShittyMedical      = 3.64%
			GoodMedical        = 2.73%
			NiceMedical        = 0.91%
			SmokeGrenades      = 3.64%
			ShittyHandGrenades = 2.73%
			GoodHandGrenades   = 0.91%
			SmokeTube1Rnd      = 2.73%
			GrenadeTube1Rnd    = 1.82%
			SmokeTube3Rnd      = 0.91%
			GrenadeTube3Rnd    = 0.91%
			WeaponSupressors   = 0.91%
			WeaponBipods       = 0.91%
			WeaponItems        = 0.91%
			UselessWeapons     = 3.64%
			ShittyWeapons      = 2.73%
			OkayWeapons        = 2.73%
			UsefulWeapons      = 1.82%
			GoodWeapons        = 1.82%
			NiceWeapons        = 0.91%
			UselessBackpacks   = 2.73%
			ShittyBackpacks    = 2.73%
			OkayBackpacks      = 1.82%
			UsefulBackpacks    = 1.82%
			GoodBackpacks      = 0.91%
			NiceBackpacks      = 0.91%
			UselessHeadgear    = 3.64%
			OkayHeadgear       = 2.73%
			GoodHeadgear       = 1.82%
			NiceHeadgear       = 0.91%
			ShittyPistols      = 7.27%
			GoodPistols        = 3.64%
			UselessUniforms    = 3.64%
			ShittyUniforms     = 3.64%
			OkayUniforms       = 1.82%
			UselessVests       = 3.64%
			ShittyVests        = 1.82%
			OkayVests          = 1.82%
			UsefulVests        = 0.91%
			GoodVests          = 0.91%
			ShittyScopes       = 3.64%
			OkayScopes         = 3.64%
			UsefulScopes       = 2.73%
			GoodScopes         = 0.91%
			Binoculars         = 0.91%
			Rangefinders       = 0.91%
			NightVisionGoggles = 0.91%
		*/
		Radiation[] = {"ShittyUniforms", "UselessWeapons", "UselessBackpacks", "ShittyPistols", "ShittyPistols", "OkayBackpacks", "UselessUniforms", "UsefulScopes", "SmokeTube3Rnd", "ShittyHandGrenades", "UsefulScopes", "NiceMedical", "UselessVests", "ShittyScopes", "NightVisionGoggles", "ShittyPistols", "GoodVests", "ShittyMedical", "OkayWeapons", "ShittyScopes", "OkayScopes", "UselessBackpacks", "ShittyBackpacks", "ShittyUniforms", "ShittyHandGrenades", "UsefulVests", "OkayScopes", "OkayVests", "ShittyScopes", "SmokeTube1Rnd", "UselessHeadgear", "UsefulScopes", "OkayHeadgear", "ShittyPistols", "SmokeTube1Rnd", "UsefulBackpacks", "OkayScopes", "UselessUniforms", "WeaponSupressors", "UselessHeadgear", "OkayBackpacks", "GoodWeapons", "ShittyMedical", "SmokeGrenades", "OkayVests", "UselessHeadgear", "GoodMedical", "UselessHeadgear", "ShittyPistols", "SmokeTube1Rnd", "GrenadeTube1Rnd", "GoodScopes", "ShittyPistols", "UselessBackpacks", "ShittyUniforms", "NiceHeadgear", "UselessUniforms", "ShittyUniforms", "SmokeGrenades", "ShittyWeapons", "SmokeGrenades", "OkayWeapons", "ShittyVests", "Binoculars", "UselessWeapons", "GoodHeadgear", "GoodMedical", "GrenadeTube3Rnd", "UsefulWeapons", "OkayHeadgear", "GoodPistols", "ShittyPistols", "GoodPistols", "UselessWeapons", "OkayUniforms", "ShittyWeapons", "ShittyWeapons", "ShittyHandGrenades", "GrenadeTube1Rnd", "OkayHeadgear", "ShittyBackpacks", "OkayScopes", "UselessVests", "ShittyScopes", "WeaponBipods", "UselessUniforms", "UsefulBackpacks", "ShittyMedical", "UselessVests", "GoodMedical", "WeaponItems", "GoodHeadgear", "UselessWeapons", "ShittyMedical", "NiceBackpacks", "GoodBackpacks", "OkayWeapons", "NiceWeapons", "GoodWeapons", "OkayUniforms", "GoodHandGrenades", "ShittyPistols", "UsefulWeapons", "Rangefinders", "UselessVests", "GoodPistols", "SmokeGrenades", "ShittyBackpacks", "ShittyVests", "GoodPistols"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of UselessWeapons:

			Exile_Weapon_CZ550      = 33.33%
			Exile_Weapon_M1014      = 33.33%
			Exile_Weapon_LeeEnfield = 33.33%
		*/
		UselessWeapons[] = {"Exile_Weapon_LeeEnfield", "Exile_Weapon_CZ550", "Exile_Weapon_M1014"};

		/*
			Percental Item Spawn Chances of ShittyWeapons:

			hgun_PDW2000_F = 25.00%
			SMG_01_F       = 25.00%
			SMG_02_F       = 25.00%
			SMG_05_F       = 25.00%
		*/
		ShittyWeapons[] = {"SMG_02_F", "SMG_01_F", "hgun_PDW2000_F", "SMG_05_F"};

		/*
			Percental Item Spawn Chances of OkayWeapons:

			arifle_Mk20_F     = 14.29%
			arifle_Mk20_GL_F  = 14.29%
			arifle_Mk20C_F    = 14.29%
			arifle_SDAR_F     = 14.29%
			arifle_TRG20_F    = 14.29%
			arifle_TRG21_F    = 14.29%
			arifle_TRG21_GL_F = 14.29%
		*/
		OkayWeapons[] = {"arifle_SDAR_F", "arifle_Mk20_GL_F", "arifle_Mk20_F", "arifle_TRG20_F", "arifle_Mk20C_F", "arifle_TRG21_GL_F", "arifle_TRG21_F"};

		/*
			Percental Item Spawn Chances of GoodWeapons:

			arifle_SPAR_01_blk_F    = 16.67%
			arifle_SPAR_01_GL_blk_F = 16.67%
			arifle_SPAR_01_GL_khk_F = 16.67%
			arifle_SPAR_01_GL_snd_F = 16.67%
			arifle_SPAR_01_khk_F    = 16.67%
			arifle_SPAR_01_snd_F    = 16.67%
		*/
		GoodWeapons[] = {"arifle_SPAR_01_GL_snd_F", "arifle_SPAR_01_khk_F", "arifle_SPAR_01_snd_F", "arifle_SPAR_01_GL_khk_F", "arifle_SPAR_01_GL_blk_F", "arifle_SPAR_01_blk_F"};

		/*
			Percental Item Spawn Chances of UsefulWeapons:

			arifle_AKS_F          = 7.69%
			arifle_Katiba_F       = 7.69%
			arifle_Katiba_GL_F    = 7.69%
			arifle_MX_Black_F     = 7.69%
			arifle_MX_F           = 7.69%
			arifle_MX_GL_Black_F  = 7.69%
			arifle_MX_GL_F        = 7.69%
			arifle_MX_GL_khk_F    = 7.69%
			arifle_MX_khk_F       = 7.69%
			arifle_MXC_Black_F    = 7.69%
			arifle_MXC_F          = 7.69%
			arifle_MXC_khk_F      = 7.69%
			Exile_Weapon_AKS_Gold = 7.69%
		*/
		UsefulWeapons[] = {"arifle_MX_F", "arifle_MX_GL_F", "arifle_Katiba_GL_F", "arifle_AKS_F", "arifle_MX_khk_F", "arifle_MXC_F", "arifle_MX_Black_F", "Exile_Weapon_AKS_Gold", "arifle_MXC_khk_F", "arifle_Katiba_F", "arifle_MXC_Black_F", "arifle_MX_GL_Black_F", "arifle_MX_GL_khk_F"};

		/*
			Percental Item Spawn Chances of NiceWeapons:

			arifle_SPAR_02_blk_F  = 4.35%
			arifle_SPAR_02_khk_F  = 4.35%
			arifle_SPAR_02_snd_F  = 4.35%
			arifle_AK12_F         = 4.35%
			arifle_AK12_GL_F      = 4.35%
			arifle_CTAR_blk_F     = 4.35%
			arifle_CTAR_ghex_F    = 4.35%
			arifle_CTAR_GL_blk_F  = 4.35%
			arifle_CTAR_hex_F     = 4.35%
			arifle_CTARS_blk_F    = 4.35%
			arifle_CTARS_ghex_F   = 4.35%
			arifle_CTARS_hex_F    = 4.35%
			arifle_MXM_Black_F    = 4.35%
			arifle_MXM_F          = 4.35%
			arifle_MXM_khk_F      = 4.35%
			arifle_SPAR_03_blk_F  = 4.35%
			arifle_SPAR_03_khk_F  = 4.35%
			arifle_SPAR_03_snd_F  = 4.35%
			Exile_Weapon_AK107    = 4.35%
			Exile_Weapon_AK107_GL = 4.35%
			Exile_Weapon_AK47     = 4.35%
			Exile_Weapon_AK74     = 4.35%
			Exile_Weapon_AK74_GL  = 4.35%
		*/
		NiceWeapons[] = {"Exile_Weapon_AK107_GL", "arifle_MXM_khk_F", "arifle_CTARS_blk_F", "arifle_AK12_F", "arifle_AK12_GL_F", "Exile_Weapon_AK107", "arifle_MXM_Black_F", "arifle_SPAR_02_khk_F", "Exile_Weapon_AK74_GL", "Exile_Weapon_AK47", "Exile_Weapon_AK74", "arifle_CTAR_hex_F", "arifle_MXM_F", "arifle_CTAR_blk_F", "arifle_CTARS_ghex_F", "arifle_SPAR_03_khk_F", "arifle_CTARS_hex_F", "arifle_SPAR_03_snd_F", "arifle_CTAR_GL_blk_F", "arifle_SPAR_03_blk_F", "arifle_SPAR_02_snd_F", "arifle_CTAR_ghex_F", "arifle_SPAR_02_blk_F"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			arifle_MX_SW_Black_F     = 2.63%
			arifle_MX_SW_F           = 2.63%
			Exile_Weapon_DMR         = 2.63%
			Exile_Weapon_PK          = 2.63%
			Exile_Weapon_PKP         = 2.63%
			Exile_Weapon_RPK         = 2.63%
			Exile_Weapon_SVD         = 2.63%
			Exile_Weapon_SVDCamo     = 2.63%
			Exile_Weapon_VSSVintorez = 2.63%
			LMG_03_F                 = 2.63%
			LMG_Mk200_F              = 2.63%
			LMG_Zafir_F              = 2.63%
			srifle_DMR_01_F          = 2.63%
			srifle_DMR_02_camo_F     = 2.63%
			srifle_DMR_02_F          = 2.63%
			srifle_DMR_02_sniper_F   = 2.63%
			srifle_DMR_03_F          = 2.63%
			srifle_DMR_03_khaki_F    = 2.63%
			srifle_DMR_03_tan_F      = 2.63%
			srifle_DMR_03_woodland_F = 2.63%
			srifle_DMR_04_F          = 2.63%
			srifle_DMR_04_Tan_F      = 2.63%
			srifle_DMR_05_blk_F      = 2.63%
			srifle_DMR_05_hex_F      = 2.63%
			srifle_DMR_05_tan_F      = 2.63%
			srifle_DMR_06_camo_F     = 2.63%
			srifle_DMR_06_olive_F    = 2.63%
			srifle_DMR_07_blk_F      = 2.63%
			srifle_DMR_07_ghex_F     = 2.63%
			srifle_DMR_07_hex_F      = 2.63%
			srifle_EBR_F             = 2.63%
			srifle_GM6_F             = 2.63%
			srifle_GM6_ghex_F        = 2.63%
			srifle_LRR_F             = 2.63%
			srifle_LRR_tna_F         = 2.63%
			arifle_ARX_blk_F         = 2.63%
			arifle_ARX_ghex_F        = 2.63%
			arifle_ARX_hex_F         = 2.63%
		*/
		EpicWeapons[] = {"srifle_LRR_tna_F", "srifle_DMR_05_hex_F", "srifle_DMR_01_F", "srifle_DMR_02_camo_F", "srifle_LRR_F", "arifle_MX_SW_F", "Exile_Weapon_SVD", "LMG_Zafir_F", "srifle_DMR_06_olive_F", "Exile_Weapon_RPK", "srifle_DMR_07_ghex_F", "LMG_Mk200_F", "Exile_Weapon_PKP", "srifle_DMR_07_hex_F", "arifle_ARX_blk_F", "srifle_DMR_06_camo_F", "Exile_Weapon_PK", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "arifle_MX_SW_Black_F", "Exile_Weapon_VSSVintorez", "srifle_DMR_03_F", "Exile_Weapon_DMR", "srifle_DMR_05_blk_F", "Exile_Weapon_SVDCamo", "srifle_EBR_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_F", "srifle_DMR_07_blk_F", "arifle_ARX_hex_F", "arifle_ARX_ghex_F", "srifle_DMR_04_Tan_F", "LMG_03_F", "srifle_GM6_F", "srifle_GM6_ghex_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_sniper_F"};

		/*
			Percental Item Spawn Chances of ShittyScopes:

			optic_Holosight           = 20.00%
			optic_Holosight_blk_F     = 20.00%
			optic_Holosight_khk_F     = 20.00%
			optic_Holosight_smg       = 20.00%
			optic_Holosight_smg_blk_F = 20.00%
		*/
		ShittyScopes[] = {"optic_Holosight_blk_F", "optic_Holosight_smg", "optic_Holosight", "optic_Holosight_smg_blk_F", "optic_Holosight_khk_F"};

		/*
			Percental Item Spawn Chances of OkayScopes:

			optic_ACO         = 25.00%
			optic_ACO_grn     = 25.00%
			optic_ACO_grn_smg = 25.00%
			optic_Aco_smg     = 25.00%
		*/
		OkayScopes[] = {"optic_Aco_smg", "optic_ACO_grn_smg", "optic_ACO_grn", "optic_ACO"};

		/*
			Percental Item Spawn Chances of UsefulScopes:

			optic_Arco        = 14.29%
			optic_Arco_blk_F  = 14.29%
			optic_Arco_ghex_F = 14.29%
			optic_ERCO_blk_F  = 14.29%
			optic_ERCO_khk_F  = 14.29%
			optic_ERCO_snd_F  = 14.29%
			optic_MRCO        = 14.29%
		*/
		UsefulScopes[] = {"optic_ERCO_khk_F", "optic_Arco_blk_F", "optic_Arco", "optic_Arco_ghex_F", "optic_ERCO_blk_F", "optic_MRCO", "optic_ERCO_snd_F"};

		/*
			Percental Item Spawn Chances of GoodScopes:

			optic_DMS        = 25.00%
			optic_DMS_ghex_F = 25.00%
			optic_Hamr       = 25.00%
			optic_Hamr_khk_F = 25.00%
		*/
		GoodScopes[] = {"optic_DMS", "optic_Hamr", "optic_Hamr_khk_F", "optic_DMS_ghex_F"};

		/*
			Percental Item Spawn Chances of NiceScopes:

			optic_AMS       = 11.11%
			optic_AMS_khk   = 11.11%
			optic_AMS_snd   = 11.11%
			optic_KHS_blk   = 11.11%
			optic_KHS_hex   = 11.11%
			optic_KHS_old   = 11.11%
			optic_KHS_tan   = 11.11%
			optic_SOS       = 11.11%
			optic_SOS_khk_F = 11.11%
		*/
		NiceScopes[] = {"optic_AMS", "optic_SOS_khk_F", "optic_AMS_snd", "optic_KHS_tan", "optic_SOS", "optic_KHS_blk", "optic_AMS_khk", "optic_KHS_old", "optic_KHS_hex"};

		/*
			Percental Item Spawn Chances of WeaponSupressors:

			muzzle_snds_58_blk_F     = 5.00%
			muzzle_snds_58_wdm_F     = 5.00%
			muzzle_snds_65_TI_blk_F  = 5.00%
			muzzle_snds_65_TI_ghex_F = 5.00%
			muzzle_snds_65_TI_hex_F  = 5.00%
			muzzle_snds_93mmg        = 5.00%
			muzzle_snds_93mmg_tan    = 5.00%
			muzzle_snds_acp          = 5.00%
			muzzle_snds_B            = 5.00%
			muzzle_snds_B_khk_F      = 5.00%
			muzzle_snds_B_snd_F      = 5.00%
			muzzle_snds_H            = 5.00%
			muzzle_snds_H_khk_F      = 5.00%
			muzzle_snds_H_MG_blk_F   = 5.00%
			muzzle_snds_H_MG_khk_F   = 5.00%
			muzzle_snds_H_snd_F      = 5.00%
			muzzle_snds_L            = 5.00%
			muzzle_snds_M            = 5.00%
			muzzle_snds_m_khk_F      = 5.00%
			muzzle_snds_m_snd_F      = 5.00%
		*/
		WeaponSupressors[] = {"muzzle_snds_H_khk_F", "muzzle_snds_B", "muzzle_snds_L", "muzzle_snds_58_blk_F", "muzzle_snds_H", "muzzle_snds_m_snd_F", "muzzle_snds_B_khk_F", "muzzle_snds_acp", "muzzle_snds_m_khk_F", "muzzle_snds_B_snd_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H_MG_blk_F", "muzzle_snds_93mmg", "muzzle_snds_65_TI_ghex_F", "muzzle_snds_93mmg_tan", "muzzle_snds_H_MG_khk_F", "muzzle_snds_58_wdm_F", "muzzle_snds_H_snd_F", "muzzle_snds_M", "muzzle_snds_65_TI_hex_F"};

		/*
			Percental Item Spawn Chances of ZipTies:

			Exile_Item_ZipTie = 100.00%
		*/
		ZipTies[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of WeaponItems:

			acc_flashlight = 50.00%
			acc_pointer_IR = 50.00%
		*/
		WeaponItems[] = {"acc_flashlight", "acc_pointer_IR"};

		/*
			Percental Item Spawn Chances of WeaponBipods:

			bipod_01_F_blk = 11.11%
			bipod_01_F_khk = 11.11%
			bipod_01_F_mtp = 11.11%
			bipod_01_F_snd = 11.11%
			bipod_02_F_blk = 11.11%
			bipod_02_F_hex = 11.11%
			bipod_02_F_tan = 11.11%
			bipod_03_F_blk = 11.11%
			bipod_03_F_oli = 11.11%
		*/
		WeaponBipods[] = {"bipod_02_F_hex", "bipod_03_F_oli", "bipod_01_F_mtp", "bipod_03_F_blk", "bipod_02_F_blk", "bipod_01_F_snd", "bipod_02_F_tan", "bipod_01_F_blk", "bipod_01_F_khk"};

		/*
			Percental Item Spawn Chances of UselessVests:

			V_BandollierB_blk    = 4.55%
			V_BandollierB_cbr    = 4.55%
			V_BandollierB_ghex_F = 4.55%
			V_BandollierB_khk    = 4.55%
			V_BandollierB_oli    = 4.55%
			V_BandollierB_rgr    = 4.55%
			V_Chestrig_blk       = 4.55%
			V_Chestrig_khk       = 4.55%
			V_Chestrig_oli       = 4.55%
			V_Chestrig_rgr       = 4.55%
			V_HarnessO_brn       = 4.55%
			V_HarnessO_ghex_F    = 4.55%
			V_HarnessO_gry       = 4.55%
			V_HarnessOGL_brn     = 4.55%
			V_HarnessOGL_ghex_F  = 4.55%
			V_HarnessOGL_gry     = 4.55%
			V_HarnessOSpec_brn   = 4.55%
			V_HarnessOSpec_gry   = 4.55%
			V_Rangemaster_belt   = 4.55%
			V_TacChestrig_cbr_F  = 4.55%
			V_TacChestrig_grn_F  = 4.55%
			V_TacChestrig_oli_F  = 4.55%
		*/
		UselessVests[] = {"V_Chestrig_blk", "V_HarnessO_ghex_F", "V_BandollierB_blk", "V_Chestrig_rgr", "V_HarnessOGL_gry", "V_BandollierB_cbr", "V_HarnessOGL_brn", "V_Chestrig_khk", "V_Rangemaster_belt", "V_BandollierB_oli", "V_TacChestrig_oli_F", "V_HarnessOSpec_gry", "V_HarnessO_brn", "V_Chestrig_oli", "V_TacChestrig_cbr_F", "V_HarnessOGL_ghex_F", "V_BandollierB_rgr", "V_HarnessO_gry", "V_TacChestrig_grn_F", "V_BandollierB_khk", "V_BandollierB_ghex_F", "V_HarnessOSpec_brn"};

		/*
			Percental Item Spawn Chances of ShittyVests:

			V_I_G_resistanceLeader_F = 33.33%
			V_TacVest_blk_POLICE     = 33.33%
			V_TacVest_gen_F          = 33.33%
		*/
		ShittyVests[] = {"V_TacVest_gen_F", "V_I_G_resistanceLeader_F", "V_TacVest_blk_POLICE"};

		/*
			Percental Item Spawn Chances of OkayVests:

			V_PlateCarrier1_blk          = 14.29%
			V_PlateCarrier1_rgr          = 14.29%
			V_PlateCarrier1_rgr_noflag_F = 14.29%
			V_PlateCarrier1_tna_F        = 14.29%
			V_PlateCarrierIA1_dgtl       = 14.29%
			V_PlateCarrierL_CTRG         = 14.29%
			V_Press_F                    = 14.29%
		*/
		OkayVests[] = {"V_PlateCarrierL_CTRG", "V_PlateCarrier1_tna_F", "V_PlateCarrier1_blk", "V_PlateCarrier1_rgr_noflag_F", "V_Press_F", "V_PlateCarrierIA1_dgtl", "V_PlateCarrier1_rgr"};

		/*
			Percental Item Spawn Chances of UsefulVests:

			V_PlateCarrier2_rgr          = 16.67%
			V_PlateCarrier2_rgr_noflag_F = 16.67%
			V_PlateCarrier2_tna_F        = 16.67%
			V_PlateCarrier3_rgr          = 16.67%
			V_PlateCarrierH_CTRG         = 16.67%
			V_PlateCarrierIA2_dgtl       = 16.67%
		*/
		UsefulVests[] = {"V_PlateCarrierH_CTRG", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier2_tna_F", "V_PlateCarrier3_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier2_rgr_noflag_F"};

		/*
			Percental Item Spawn Chances of GoodVests:

			V_PlateCarrierSpec_blk   = 25.00%
			V_PlateCarrierSpec_mtp   = 25.00%
			V_PlateCarrierSpec_rgr   = 25.00%
			V_PlateCarrierSpec_tna_F = 25.00%
		*/
		GoodVests[] = {"V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_tna_F", "V_PlateCarrierSpec_blk", "V_PlateCarrierSpec_rgr"};

		/*
			Percental Item Spawn Chances of EpicVests:

			V_PlateCarrierGL_blk    = 16.67%
			V_PlateCarrierGL_mtp    = 16.67%
			V_PlateCarrierGL_rgr    = 16.67%
			V_PlateCarrierGL_tna_F  = 16.67%
			V_PlateCarrierIAGL_dgtl = 16.67%
			V_PlateCarrierIAGL_oli  = 16.67%
		*/
		EpicVests[] = {"V_PlateCarrierIAGL_oli", "V_PlateCarrierGL_tna_F", "V_PlateCarrierGL_mtp", "V_PlateCarrierGL_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_blk"};

		/*
			Percental Item Spawn Chances of UselessUniforms:

			U_C_HunterBody_grn      = 4.17%
			U_C_Journalist          = 4.17%
			U_C_Man_casual_1_F      = 4.17%
			U_C_Man_casual_2_F      = 4.17%
			U_C_Man_casual_3_F      = 4.17%
			U_C_Man_casual_4_F      = 4.17%
			U_C_Man_casual_5_F      = 4.17%
			U_C_Man_casual_6_F      = 4.17%
			U_C_man_sport_1_F       = 4.17%
			U_C_man_sport_2_F       = 4.17%
			U_C_man_sport_3_F       = 4.17%
			U_C_Poloshirt_blue      = 4.17%
			U_C_Poloshirt_burgundy  = 4.17%
			U_C_Poloshirt_salmon    = 4.17%
			U_C_Poloshirt_stripped  = 4.17%
			U_C_Poloshirt_tricolour = 4.17%
			U_C_Poor_1              = 4.17%
			U_C_Poor_2              = 4.17%
			U_C_Poor_shorts_1       = 4.17%
			U_C_Scientist           = 4.17%
			U_NikosAgedBody         = 4.17%
			U_NikosBody             = 4.17%
			U_OrestesBody           = 4.17%
			U_Rangemaster           = 4.17%
		*/
		UselessUniforms[] = {"U_NikosBody", "U_C_Poloshirt_salmon", "U_C_Poloshirt_tricolour", "U_C_HunterBody_grn", "U_C_Poloshirt_burgundy", "U_C_Poor_2", "U_C_Poloshirt_stripped", "U_C_man_sport_3_F", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_C_Scientist", "U_C_man_sport_2_F", "U_C_Man_casual_6_F", "U_C_Journalist", "U_C_Man_casual_1_F", "U_OrestesBody", "U_C_man_sport_1_F", "U_C_Man_casual_3_F", "U_C_Poor_1", "U_NikosAgedBody", "U_C_Man_casual_2_F", "U_C_Poloshirt_blue", "U_Rangemaster", "U_C_Man_casual_4_F"};

		/*
			Percental Item Spawn Chances of ShittyUniforms:

			U_B_GEN_Commander_F      = 4.76%
			U_B_GEN_Soldier_F        = 4.76%
			U_I_C_Soldier_Bandit_1_F = 4.76%
			U_I_C_Soldier_Bandit_2_F = 4.76%
			U_I_C_Soldier_Bandit_3_F = 4.76%
			U_I_C_Soldier_Bandit_4_F = 4.76%
			U_I_C_Soldier_Bandit_5_F = 4.76%
			U_I_C_Soldier_Camo_F     = 4.76%
			U_I_C_Soldier_Para_1_F   = 4.76%
			U_I_C_Soldier_Para_2_F   = 4.76%
			U_I_C_Soldier_Para_3_F   = 4.76%
			U_I_C_Soldier_Para_4_F   = 4.76%
			U_I_C_Soldier_Para_5_F   = 4.76%
			U_I_G_resistanceLeader_F = 4.76%
			U_IG_Guerilla1_1         = 4.76%
			U_IG_Guerilla2_1         = 4.76%
			U_IG_Guerilla2_2         = 4.76%
			U_IG_Guerilla2_3         = 4.76%
			U_IG_Guerilla3_1         = 4.76%
			U_IG_Guerilla3_2         = 4.76%
			U_IG_leader              = 4.76%
		*/
		ShittyUniforms[] = {"U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Bandit_5_F", "U_I_G_resistanceLeader_F", "U_B_GEN_Commander_F", "U_I_C_Soldier_Bandit_3_F", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_B_GEN_Soldier_F", "U_IG_Guerilla2_3", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Para_3_F", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla2_2", "U_IG_Guerilla2_1", "U_IG_leader"};

		/*
			Percental Item Spawn Chances of OkayUniforms:

			U_B_CombatUniform_mcam        = 4.35%
			U_B_CombatUniform_mcam_tshirt = 4.35%
			U_B_CombatUniform_mcam_vest   = 4.35%
			U_B_CombatUniform_mcam_worn   = 4.35%
			U_B_CTRG_1                    = 4.35%
			U_B_CTRG_2                    = 4.35%
			U_B_CTRG_3                    = 4.35%
			U_B_CTRG_Soldier_2_F          = 4.35%
			U_B_CTRG_Soldier_3_F          = 4.35%
			U_B_CTRG_Soldier_F            = 4.35%
			U_B_CTRG_Soldier_urb_1_F      = 4.35%
			U_B_CTRG_Soldier_urb_2_F      = 4.35%
			U_B_CTRG_Soldier_urb_3_F      = 4.35%
			U_B_SpecopsUniform_sgg        = 4.35%
			U_B_T_Soldier_AR_F            = 4.35%
			U_B_T_Soldier_SL_F            = 4.35%
			U_B_Wetsuit                   = 4.35%
			U_I_CombatUniform             = 4.35%
			U_I_CombatUniform_shortsleeve = 4.35%
			U_I_CombatUniform_tshirt      = 4.35%
			U_I_OfficerUniform            = 4.35%
			U_I_Wetsuit                   = 4.35%
			U_O_Wetsuit                   = 4.35%
		*/
		OkayUniforms[] = {"U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_3_F", "U_B_CTRG_Soldier_urb_3_F", "U_O_Wetsuit", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam_tshirt", "U_I_Wetsuit", "U_I_CombatUniform_tshirt", "U_B_CTRG_1", "U_B_CTRG_3", "U_I_CombatUniform", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_2_F", "U_B_SpecopsUniform_sgg", "U_B_CTRG_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_I_OfficerUniform", "U_B_CTRG_Soldier_urb_1_F", "U_B_CTRG_2", "U_B_T_Soldier_SL_F", "U_B_CombatUniform_mcam_vest", "U_B_Wetsuit", "U_B_CombatUniform_mcam"};

		/*
			Percental Item Spawn Chances of EpicUniforms:

			U_B_HeliPilotCoveralls    = 7.14%
			U_B_PilotCoveralls        = 7.14%
			U_I_HeliPilotCoveralls    = 7.14%
			U_I_pilotCoveralls        = 7.14%
			U_O_CombatUniform_ocamo   = 7.14%
			U_O_CombatUniform_oucamo  = 7.14%
			U_O_OfficerUniform_ocamo  = 7.14%
			U_O_PilotCoveralls        = 7.14%
			U_O_SpecopsUniform_blk    = 7.14%
			U_O_SpecopsUniform_ocamo  = 7.14%
			U_O_T_Officer_F           = 7.14%
			U_O_T_Soldier_F           = 7.14%
			U_O_V_Soldier_Viper_F     = 7.14%
			U_O_V_Soldier_Viper_hex_F = 7.14%
		*/
		EpicUniforms[] = {"U_O_V_Soldier_Viper_hex_F", "U_I_pilotCoveralls", "U_O_PilotCoveralls", "U_O_T_Officer_F", "U_O_V_Soldier_Viper_F", "U_B_HeliPilotCoveralls", "U_O_SpecopsUniform_blk", "U_O_OfficerUniform_ocamo", "U_B_PilotCoveralls", "U_O_CombatUniform_ocamo", "U_I_HeliPilotCoveralls", "U_O_CombatUniform_oucamo", "U_O_SpecopsUniform_ocamo", "U_O_T_Soldier_F"};

		/*
			Percental Item Spawn Chances of ShittyHandGrenades:

			MiniGrenade = 100.00%
		*/
		ShittyHandGrenades[] = {"MiniGrenade"};

		/*
			Percental Item Spawn Chances of GoodHandGrenades:

			HandGrenade = 100.00%
		*/
		GoodHandGrenades[] = {"HandGrenade"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShellBlue", "SmokeShellGreen", "SmokeShellPurple", "SmokeShellOrange", "SmokeShell", "SmokeShellYellow", "SmokeShellRed"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIA", "V_RebreatherB", "V_RebreatherIR"};

		/*
			Percental Item Spawn Chances of Rangefinders:

			Rangefinder = 100.00%
		*/
		Rangefinders[] = {"Rangefinder"};

		/*
			Percental Item Spawn Chances of ShittyPistols:

			hgun_Rook40_F         = 16.67%
			hgun_P07_F            = 16.67%
			hgun_P07_khk_F        = 16.67%
			hgun_Pistol_01_F      = 16.67%
			Exile_Weapon_Colt1911 = 16.67%
			Exile_Weapon_Makarov  = 16.67%
		*/
		ShittyPistols[] = {"Exile_Weapon_Makarov", "Exile_Weapon_Colt1911", "hgun_Pistol_01_F", "hgun_Rook40_F", "hgun_P07_F", "hgun_P07_khk_F"};

		/*
			Percental Item Spawn Chances of GoodPistols:

			hgun_Pistol_heavy_01_F  = 20.00%
			hgun_Pistol_heavy_02_F  = 20.00%
			Exile_Weapon_Taurus     = 20.00%
			Exile_Weapon_TaurusGold = 20.00%
			hgun_ACPC2_F            = 20.00%
		*/
		GoodPistols[] = {"Exile_Weapon_TaurusGold", "hgun_ACPC2_F", "Exile_Weapon_Taurus", "hgun_Pistol_heavy_01_F", "hgun_Pistol_heavy_02_F"};

		/*
			Percental Item Spawn Chances of PistolScopes:

			optic_Yorris = 50.00%
			optic_MRD    = 50.00%
		*/
		PistolScopes[] = {"optic_MRD", "optic_Yorris"};

		/*
			Percental Item Spawn Chances of SmokeTube1Rnd:

			1Rnd_Smoke_Grenade_shell       = 14.29%
			1Rnd_SmokeBlue_Grenade_shell   = 14.29%
			1Rnd_SmokeGreen_Grenade_shell  = 14.29%
			1Rnd_SmokeOrange_Grenade_shell = 14.29%
			1Rnd_SmokePurple_Grenade_shell = 14.29%
			1Rnd_SmokeRed_Grenade_shell    = 14.29%
			1Rnd_SmokeYellow_Grenade_shell = 14.29%
		*/
		SmokeTube1Rnd[] = {"1Rnd_SmokeYellow_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell"};

		/*
			Percental Item Spawn Chances of SmokeTube3Rnd:

			3Rnd_Smoke_Grenade_shell       = 14.29%
			3Rnd_SmokeBlue_Grenade_shell   = 14.29%
			3Rnd_SmokeGreen_Grenade_shell  = 14.29%
			3Rnd_SmokeOrange_Grenade_shell = 14.29%
			3Rnd_SmokePurple_Grenade_shell = 14.29%
			3Rnd_SmokeRed_Grenade_shell    = 14.29%
			3Rnd_SmokeYellow_Grenade_shell = 14.29%
		*/
		SmokeTube3Rnd[] = {"3Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "3Rnd_Smoke_Grenade_shell"};

		/*
			Percental Item Spawn Chances of GrenadeTube1Rnd:

			1Rnd_HE_Grenade_shell = 100.00%
		*/
		GrenadeTube1Rnd[] = {"1Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of GrenadeTube3Rnd:

			3Rnd_HE_Grenade_shell = 100.00%
		*/
		GrenadeTube3Rnd[] = {"3Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of NightVisionGoggles:

			NVGoggles          = 20.00%
			NVGoggles_tna_F    = 20.00%
			O_NVGoggles_ghex_F = 20.00%
			O_NVGoggles_hex_F  = 20.00%
			O_NVGoggles_urb_F  = 20.00%
		*/
		NightVisionGoggles[] = {"O_NVGoggles_urb_F", "NVGoggles", "NVGoggles_tna_F", "O_NVGoggles_ghex_F", "O_NVGoggles_hex_F"};

		/*
			Percental Item Spawn Chances of ShittyMedical:

			Exile_Item_Bandage = 100.00%
		*/
		ShittyMedical[] = {"Exile_Item_Bandage"};

		/*
			Percental Item Spawn Chances of GoodMedical:

			Exile_Item_Vishpirin = 100.00%
		*/
		GoodMedical[] = {"Exile_Item_Vishpirin"};

		/*
			Percental Item Spawn Chances of NiceMedical:

			Exile_Item_InstaDoc = 100.00%
		*/
		NiceMedical[] = {"Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of UselessHeadgear:

			H_Bandanna_camo           = 1.32%
			H_Bandanna_cbr            = 1.32%
			H_Bandanna_gry            = 1.32%
			H_Bandanna_khk            = 1.32%
			H_Bandanna_khk_hs         = 1.32%
			H_Bandanna_mcamo          = 1.32%
			H_Bandanna_sgg            = 1.32%
			H_Bandanna_surfer         = 1.32%
			H_Beret_02                = 1.32%
			H_Beret_blk               = 1.32%
			H_Beret_blk_POLICE        = 1.32%
			H_Beret_brn_SF            = 1.32%
			H_Beret_Colonel           = 1.32%
			H_Beret_grn               = 1.32%
			H_Beret_grn_SF            = 1.32%
			H_Beret_ocamo             = 1.32%
			H_Beret_red               = 1.32%
			H_Booniehat_tna_F         = 1.32%
			H_Cap_blk                 = 1.32%
			H_Cap_blk_Raven           = 1.32%
			H_Cap_blk_Syndikat_F      = 1.32%
			H_Cap_blu                 = 1.32%
			H_Cap_grn                 = 1.32%
			H_Cap_grn_Syndikat_F      = 1.32%
			H_Cap_headphones          = 1.32%
			H_Cap_oli                 = 1.32%
			H_Cap_oli_Syndikat_F      = 1.32%
			H_Cap_press               = 1.32%
			H_Cap_red                 = 1.32%
			H_Cap_tan                 = 1.32%
			H_Cap_tan_Syndikat_F      = 1.32%
			H_FakeHeadgear_Syndikat_F = 1.32%
			H_Hat_blue                = 1.32%
			H_Hat_brown               = 1.32%
			H_Hat_checker             = 1.32%
			H_Hat_grey                = 1.32%
			H_Hat_tan                 = 1.32%
			H_MilCap_gen_F            = 1.32%
			H_MilCap_ghex_F           = 1.32%
			H_MilCap_tna_F            = 1.32%
			H_Shemag_khk              = 1.32%
			H_Shemag_olive            = 1.32%
			H_Shemag_olive_hs         = 1.32%
			H_Shemag_tan              = 1.32%
			H_ShemagOpen_khk          = 1.32%
			H_ShemagOpen_tan          = 1.32%
			H_StrawHat                = 1.32%
			H_StrawHat_dark           = 1.32%
			H_TurbanO_blk             = 1.32%
			H_Watchcap_camo           = 1.32%
			H_Watchcap_sgg            = 1.32%
			H_BandMask_blk            = 1.32%
			H_Cap_brn_SPECOPS         = 1.32%
			H_Cap_khaki_specops_UK    = 1.32%
			H_Cap_tan_specops_US      = 1.32%
			H_Hat_camo                = 1.32%
			H_Watchcap_blk            = 1.32%
			H_Watchcap_khk            = 1.32%
			H_Booniehat_dgtl          = 1.32%
			H_Booniehat_dirty         = 1.32%
			H_Booniehat_grn           = 1.32%
			H_Booniehat_indp          = 1.32%
			H_Booniehat_khk           = 1.32%
			H_Booniehat_khk_hs        = 1.32%
			H_Booniehat_mcamo         = 1.32%
			H_Booniehat_tan           = 1.32%
			H_BandMask_demon          = 1.32%
			H_BandMask_khk            = 1.32%
			H_BandMask_reaper         = 1.32%
			H_Beret_gen_F             = 1.32%
			H_MilCap_blue             = 1.32%
			H_MilCap_dgtl             = 1.32%
			H_MilCap_mcamo            = 1.32%
			H_MilCap_ocamo            = 1.32%
			H_MilCap_oucamo           = 1.32%
			H_MilCap_rucamo           = 1.32%
		*/
		UselessHeadgear[] = {"H_Watchcap_blk", "H_Beret_ocamo", "H_Watchcap_camo", "H_Shemag_olive", "H_MilCap_oucamo", "H_Hat_blue", "H_MilCap_ocamo", "H_Booniehat_khk", "H_Booniehat_dgtl", "H_FakeHeadgear_Syndikat_F", "H_BandMask_reaper", "H_StrawHat", "H_TurbanO_blk", "H_Bandanna_sgg", "H_Cap_headphones", "H_BandMask_blk", "H_Beret_blk", "H_Cap_oli", "H_Shemag_khk", "H_Beret_02", "H_Booniehat_indp", "H_Watchcap_khk", "H_Bandanna_camo", "H_Bandanna_khk", "H_Bandanna_gry", "H_Beret_blk_POLICE", "H_ShemagOpen_tan", "H_Bandanna_mcamo", "H_Bandanna_cbr", "H_Beret_brn_SF", "H_Bandanna_khk_hs", "H_Beret_gen_F", "H_Booniehat_mcamo", "H_Beret_grn_SF", "H_Hat_tan", "H_BandMask_demon", "H_Beret_Colonel", "H_Cap_tan_Syndikat_F", "H_Shemag_tan", "H_ShemagOpen_khk", "H_Cap_blk_Raven", "H_MilCap_gen_F", "H_Cap_oli_Syndikat_F", "H_Cap_press", "H_Cap_blu", "H_MilCap_rucamo", "H_Cap_blk_Syndikat_F", "H_MilCap_ghex_F", "H_Booniehat_grn", "H_Bandanna_surfer", "H_StrawHat_dark", "H_Beret_grn", "H_Shemag_olive_hs", "H_Cap_tan_specops_US", "H_Beret_red", "H_Hat_camo", "H_Hat_brown", "H_Cap_grn", "H_BandMask_khk", "H_Booniehat_tan", "H_Cap_red", "H_MilCap_tna_F", "H_MilCap_mcamo", "H_Watchcap_sgg", "H_Booniehat_khk_hs", "H_Cap_tan", "H_MilCap_dgtl", "H_Hat_checker", "H_Booniehat_tna_F", "H_Cap_brn_SPECOPS", "H_MilCap_blue", "H_Hat_grey", "H_Booniehat_dirty", "H_Cap_blk", "H_Cap_khaki_specops_UK", "H_Cap_grn_Syndikat_F"};

		/*
			Percental Item Spawn Chances of OkayHeadgear:

			H_Helmet_Skate            = 12.50%
			H_HelmetB_light_black     = 12.50%
			H_HelmetB_light_desert    = 12.50%
			H_HelmetB_light_grass     = 12.50%
			H_HelmetB_light_sand      = 12.50%
			H_HelmetB_light_snakeskin = 12.50%
			H_HelmetB_Light_tna_F     = 12.50%
			H_HelmetB_light           = 12.50%
		*/
		OkayHeadgear[] = {"H_HelmetB_light", "H_HelmetB_light_grass", "H_HelmetB_light_black", "H_Helmet_Skate", "H_HelmetB_light_sand", "H_HelmetB_light_desert", "H_HelmetB_Light_tna_F", "H_HelmetB_light_snakeskin"};

		/*
			Percental Item Spawn Chances of GoodHeadgear:

			H_HelmetB_camo      = 6.25%
			H_PilotHelmetHeli_B = 6.25%
			H_PilotHelmetHeli_I = 6.25%
			H_PilotHelmetHeli_O = 6.25%
			H_HelmetB_black     = 6.25%
			H_HelmetB_desert    = 6.25%
			H_HelmetB_grass     = 6.25%
			H_HelmetB_sand      = 6.25%
			H_HelmetB_snakeskin = 6.25%
			H_HelmetB_tna_F     = 6.25%
			H_HelmetIA_camo     = 6.25%
			H_HelmetIA_net      = 6.25%
			H_HelmetB           = 6.25%
			H_HelmetB_paint     = 6.25%
			H_HelmetB_plain_blk = 6.25%
			H_HelmetIA          = 6.25%
		*/
		GoodHeadgear[] = {"H_HelmetB", "H_HelmetB_black", "H_HelmetIA_net", "H_PilotHelmetHeli_I", "H_PilotHelmetHeli_B", "H_HelmetB_tna_F", "H_HelmetB_sand", "H_HelmetB_paint", "H_HelmetB_snakeskin", "H_HelmetIA_camo", "H_HelmetIA", "H_PilotHelmetHeli_O", "H_HelmetB_desert", "H_HelmetB_camo", "H_HelmetB_plain_blk", "H_HelmetB_grass"};

		/*
			Percental Item Spawn Chances of NiceHeadgear:

			H_HelmetCrew_B        = 14.29%
			H_HelmetCrew_I        = 14.29%
			H_HelmetCrew_O        = 14.29%
			H_HelmetO_ocamo       = 14.29%
			H_HelmetO_oucamo      = 14.29%
			H_HelmetO_ghex_F      = 14.29%
			H_HelmetCrew_O_ghex_F = 14.29%
		*/
		NiceHeadgear[] = {"H_HelmetCrew_I", "H_HelmetCrew_O_ghex_F", "H_HelmetCrew_B", "H_HelmetO_ocamo", "H_HelmetO_ghex_F", "H_HelmetO_oucamo", "H_HelmetCrew_O"};

		/*
			Percental Item Spawn Chances of EpicHeadgear:

			H_CrewHelmetHeli_B     = 5.56%
			H_CrewHelmetHeli_I     = 5.56%
			H_CrewHelmetHeli_O     = 5.56%
			H_PilotHelmetFighter_B = 5.56%
			H_PilotHelmetFighter_I = 5.56%
			H_PilotHelmetFighter_O = 5.56%
			H_HelmetSpecO_ghex_F   = 5.56%
			H_HelmetSpecB          = 5.56%
			H_HelmetSpecB_blk      = 5.56%
			H_HelmetSpecB_paint1   = 5.56%
			H_HelmetSpecB_paint2   = 5.56%
			H_HelmetB_TI_tna_F     = 5.56%
			H_HelmetSpecO_blk      = 5.56%
			H_HelmetSpecO_ocamo    = 5.56%
			H_HelmetB_Enh_tna_F    = 5.56%
			H_HelmetLeaderO_ocamo  = 5.56%
			H_HelmetLeaderO_oucamo = 5.56%
			H_HelmetLeaderO_ghex_F = 5.56%
		*/
		EpicHeadgear[] = {"H_HelmetSpecO_blk", "H_HelmetLeaderO_oucamo", "H_HelmetSpecO_ghex_F", "H_CrewHelmetHeli_O", "H_HelmetSpecB", "H_HelmetSpecB_blk", "H_HelmetLeaderO_ghex_F", "H_PilotHelmetFighter_B", "H_HelmetB_TI_tna_F", "H_HelmetSpecB_paint1", "H_HelmetSpecO_ocamo", "H_PilotHelmetFighter_I", "H_HelmetB_Enh_tna_F", "H_CrewHelmetHeli_I", "H_PilotHelmetFighter_O", "H_HelmetSpecB_paint2", "H_HelmetLeaderO_ocamo", "H_CrewHelmetHeli_B"};

		/*
			Percental Item Spawn Chances of Explosives:

			APERSTripMine_Wire_Mag = 100.00%
		*/
		Explosives[] = {"APERSTripMine_Wire_Mag"};

		/*
			Percental Item Spawn Chances of Binoculars:

			Binocular = 100.00%
		*/
		Binoculars[] = {"Binocular"};

		/*
			Percental Item Spawn Chances of UselessBackpacks:

			B_HuntingBackpack = 25.00%
			B_OutdoorPack_blk = 25.00%
			B_OutdoorPack_blu = 25.00%
			B_OutdoorPack_tan = 25.00%
		*/
		UselessBackpacks[] = {"B_HuntingBackpack", "B_OutdoorPack_blk", "B_OutdoorPack_tan", "B_OutdoorPack_blu"};

		/*
			Percental Item Spawn Chances of ShittyBackpacks:

			B_AssaultPack_blk   = 12.50%
			B_AssaultPack_cbr   = 12.50%
			B_AssaultPack_dgtl  = 12.50%
			B_AssaultPack_khk   = 12.50%
			B_AssaultPack_mcamo = 12.50%
			B_AssaultPack_rgr   = 12.50%
			B_AssaultPack_sgg   = 12.50%
			B_AssaultPack_tna_F = 12.50%
		*/
		ShittyBackpacks[] = {"B_AssaultPack_sgg", "B_AssaultPack_mcamo", "B_AssaultPack_tna_F", "B_AssaultPack_dgtl", "B_AssaultPack_khk", "B_AssaultPack_rgr", "B_AssaultPack_blk", "B_AssaultPack_cbr"};

		/*
			Percental Item Spawn Chances of OkayBackpacks:

			B_FieldPack_blk    = 20.00%
			B_FieldPack_cbr    = 20.00%
			B_FieldPack_ghex_F = 20.00%
			B_FieldPack_ocamo  = 20.00%
			B_FieldPack_oucamo = 20.00%
		*/
		OkayBackpacks[] = {"B_FieldPack_oucamo", "B_FieldPack_blk", "B_FieldPack_cbr", "B_FieldPack_ghex_F", "B_FieldPack_ocamo"};

		/*
			Percental Item Spawn Chances of UsefulBackpacks:

			B_ViperLightHarness_blk_F  = 20.00%
			B_ViperLightHarness_ghex_F = 20.00%
			B_ViperLightHarness_hex_F  = 20.00%
			B_ViperLightHarness_khk_F  = 20.00%
			B_ViperLightHarness_oli_F  = 20.00%
		*/
		UsefulBackpacks[] = {"B_ViperLightHarness_khk_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_blk_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_ghex_F"};

		/*
			Percental Item Spawn Chances of GoodBackpacks:

			B_Bergen_blk          = 8.33%
			B_Bergen_mcamo        = 8.33%
			B_Bergen_rgr          = 8.33%
			B_Bergen_sgg          = 8.33%
			B_Kitbag_cbr          = 8.33%
			B_Kitbag_mcamo        = 8.33%
			B_Kitbag_sgg          = 8.33%
			B_ViperHarness_blk_F  = 8.33%
			B_ViperHarness_ghex_F = 8.33%
			B_ViperHarness_hex_F  = 8.33%
			B_ViperHarness_khk_F  = 8.33%
			B_ViperHarness_oli_F  = 8.33%
		*/
		GoodBackpacks[] = {"B_Kitbag_sgg", "B_Kitbag_mcamo", "B_Bergen_sgg", "B_Bergen_rgr", "B_ViperHarness_hex_F", "B_ViperHarness_khk_F", "B_ViperHarness_blk_F", "B_ViperHarness_ghex_F", "B_Bergen_mcamo", "B_ViperHarness_oli_F", "B_Kitbag_cbr", "B_Bergen_blk"};

		/*
			Percental Item Spawn Chances of NiceBackpacks:

			B_Carryall_cbr    = 14.29%
			B_Carryall_ghex_F = 14.29%
			B_Carryall_khk    = 14.29%
			B_Carryall_mcamo  = 14.29%
			B_Carryall_ocamo  = 14.29%
			B_Carryall_oli    = 14.29%
			B_Carryall_oucamo = 14.29%
		*/
		NiceBackpacks[] = {"B_Carryall_mcamo", "B_Carryall_ocamo", "B_Carryall_oucamo", "B_Carryall_ghex_F", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_oli"};

		/*
			Percental Item Spawn Chances of EpicBackpacks:

			B_Bergen_dgtl_F  = 25.00%
			B_Bergen_hex_F   = 25.00%
			B_Bergen_mcamo_F = 25.00%
			B_Bergen_tna_F   = 25.00%
		*/
		EpicBackpacks[] = {"B_Bergen_tna_F", "B_Bergen_mcamo_F", "B_Bergen_hex_F", "B_Bergen_dgtl_F"};
	};
};
class CfgExileLootServer
{
	class LootTables
	{

		/*
			Percental Item Group Spawn Chances of CivillianLowerClass:

			Restraints        = 0.95%
			PistolAttachments = 2.86%
			ShotgunAmmo       = 2.86%
			SMGAmmo           = 2.86%
			SMGAttachments    = 2.86%
			Shotguns          = 3.81%
			SMG               = 3.81%
			RifleAmmo         = 5.71%
			RifleAttachments  = 5.71%
			Rifles            = 5.71%
			CivilianVests     = 4.76%
			PistolAmmo        = 4.76%
			Pistols           = 7.62%
			Chemlights        = 0.95%
			CivilianItems     = 4.76%
			Drinks            = 3.81%
			RoadFlares        = 0.95%
			CivilianBackpacks = 4.76%
			CivilianClothing  = 4.76%
			CivilianHeadgear  = 1.90%
			Food              = 5.71%
			Trash             = 0.95%
			MilitaryBackpacks = 5.71%
			MilitaryHeadgear  = 5.71%
			MilitaryVests     = 5.71%
		*/
		CivillianLowerClass[] = {"MilitaryVests", "CivilianClothing", "Food", "CivilianVests", "Chemlights", "MilitaryBackpacks", "Restraints", "CivilianItems", "PistolAmmo", "Drinks", "PistolAttachments", "Rifles", "MilitaryBackpacks", "RifleAttachments", "RoadFlares", "SMGAmmo", "Pistols", "CivilianItems", "CivilianBackpacks", "Pistols", "SMG", "PistolAmmo", "Rifles", "Rifles", "CivilianBackpacks", "RifleAttachments", "PistolAttachments", "Rifles", "Shotguns", "Pistols", "SMG", "PistolAttachments", "MilitaryBackpacks", "RifleAmmo", "Pistols", "MilitaryBackpacks", "CivilianHeadgear", "ShotgunAmmo", "Pistols", "ShotgunAmmo", "CivilianBackpacks", "Food", "MilitaryHeadgear", "CivilianBackpacks", "MilitaryBackpacks", "RifleAmmo", "MilitaryVests", "RifleAttachments", "RifleAmmo", "MilitaryVests", "PistolAmmo", "MilitaryVests", "SMGAttachments", "Food", "CivilianClothing", "ShotgunAmmo", "Pistols", "CivilianClothing", "CivilianVests", "Rifles", "MilitaryHeadgear", "CivilianItems", "Trash", "MilitaryVests", "CivilianVests", "Pistols", "Rifles", "SMGAttachments", "Food", "RifleAmmo", "MilitaryBackpacks", "MilitaryHeadgear", "MilitaryHeadgear", "RifleAmmo", "SMGAmmo", "RifleAmmo", "SMGAttachments", "Shotguns", "CivilianVests", "PistolAmmo", "Drinks", "CivilianClothing", "Shotguns", "Food", "RifleAttachments", "SMG", "CivilianHeadgear", "RifleAttachments", "Food", "Drinks", "MilitaryHeadgear", "RifleAttachments", "PistolAmmo", "Drinks", "CivilianVests", "CivilianClothing", "CivilianItems", "CivilianItems", "MilitaryHeadgear", "Shotguns", "SMG", "MilitaryVests", "Pistols", "CivilianBackpacks", "SMGAmmo"};

		/*
			Percental Item Group Spawn Chances of CivillianUpperClass:

			Restraints        = 1.06%
			PistolAttachments = 3.19%
			RifleAmmo         = 6.38%
			RifleAttachments  = 6.38%
			Rifles            = 6.38%
			ShotgunAmmo       = 3.19%
			SMGAmmo           = 3.19%
			SMGAttachments    = 3.19%
			Shotguns          = 4.26%
			SMG               = 4.26%
			CivilianVests     = 5.32%
			PistolAmmo        = 5.32%
			Pistols           = 8.51%
			Chemlights        = 1.06%
			CivilianItems     = 5.32%
			Drinks            = 5.32%
			RoadFlares        = 1.06%
			CivilianBackpacks = 2.13%
			CivilianClothing  = 3.19%
			CivilianHeadgear  = 5.32%
			Food              = 5.32%
			Trash             = 1.06%
			MilitaryBackpacks = 3.19%
			MilitaryHeadgear  = 3.19%
			MilitaryVests     = 3.19%
		*/
		CivillianUpperClass[] = {"CivilianClothing", "Pistols", "Pistols", "MilitaryBackpacks", "SMGAmmo", "Drinks", "Restraints", "RifleAttachments", "SMG", "CivilianVests", "Rifles", "CivilianVests", "MilitaryVests", "SMGAmmo", "Pistols", "Shotguns", "CivilianItems", "PistolAttachments", "Pistols", "CivilianHeadgear", "Rifles", "CivilianHeadgear", "PistolAttachments", "Rifles", "RifleAmmo", "SMGAmmo", "Rifles", "Drinks", "PistolAmmo", "RifleAttachments", "Drinks", "ShotgunAmmo", "MilitaryBackpacks", "Chemlights", "Shotguns", "RifleAmmo", "CivilianHeadgear", "Food", "RoadFlares", "CivilianBackpacks", "CivilianVests", "CivilianItems", "SMGAttachments", "SMGAttachments", "RifleAmmo", "PistolAmmo", "MilitaryBackpacks", "CivilianBackpacks", "PistolAmmo", "RifleAttachments", "PistolAmmo", "Rifles", "SMG", "MilitaryHeadgear", "Food", "Food", "Pistols", "CivilianItems", "RifleAttachments", "RifleAttachments", "CivilianVests", "Trash", "CivilianClothing", "CivilianVests", "Food", "ShotgunAmmo", "MilitaryVests", "RifleAmmo", "CivilianClothing", "CivilianItems", "MilitaryVests", "Pistols", "SMGAttachments", "MilitaryHeadgear", "ShotgunAmmo", "MilitaryHeadgear", "Drinks", "PistolAttachments", "CivilianHeadgear", "Food", "Shotguns", "SMG", "Rifles", "Pistols", "RifleAmmo", "PistolAmmo", "RifleAmmo", "Shotguns", "SMG", "CivilianItems", "RifleAttachments", "Pistols", "Drinks", "CivilianHeadgear"};

		/*
			Percental Item Group Spawn Chances of Shop:

			CivilianClothing  = 1.49%
			CivilianVests     = 1.49%
			PistolAttachments = 1.49%
			ShotgunAmmo       = 1.49%
			SMGAmmo           = 1.49%
			SMGAttachments    = 1.49%
			PistolAmmo        = 2.99%
			CivilianHeadgear  = 4.48%
			IndustrialItems   = 4.48%
			MedicalItems      = 4.48%
			Restraints        = 4.48%
			Shotguns          = 5.97%
			SmokeGrenades     = 5.97%
			Chemlights        = 7.46%
			CivilianBackpacks = 7.46%
			RoadFlares        = 7.46%
			SMG               = 7.46%
			CivilianItems     = 10.45%
			Pistols           = 8.96%
			Drinks            = 7.46%
			Food              = 1.49%
		*/
		Shop[] = {"RoadFlares", "PistolAttachments", "Chemlights", "Pistols", "CivilianBackpacks", "Food", "IndustrialItems", "Shotguns", "RoadFlares", "CivilianBackpacks", "IndustrialItems", "Shotguns", "SMGAmmo", "SMG", "SmokeGrenades", "PistolAmmo", "CivilianItems", "SmokeGrenades", "Chemlights", "Shotguns", "CivilianClothing", "RoadFlares", "CivilianItems", "SmokeGrenades", "CivilianItems", "CivilianBackpacks", "MedicalItems", "Chemlights", "CivilianItems", "RoadFlares", "Drinks", "Drinks", "CivilianItems", "CivilianBackpacks", "Pistols", "RoadFlares", "IndustrialItems", "Drinks", "ShotgunAmmo", "MedicalItems", "Restraints", "SmokeGrenades", "CivilianItems", "CivilianHeadgear", "CivilianHeadgear", "Chemlights", "MedicalItems", "CivilianVests", "CivilianHeadgear", "Pistols", "Restraints", "CivilianItems", "SMG", "Shotguns", "Drinks", "Restraints", "Pistols", "Drinks", "CivilianBackpacks", "SMG", "SMGAttachments", "Chemlights", "PistolAmmo", "Pistols", "Pistols", "SMG", "SMG"};

		/*
			Percental Item Group Spawn Chances of Industrial:

			Restraints      = 4.00%
			RoadFlares      = 12.00%
			Vehicle         = 20.00%
			IndustrialItems = 32.00%
			Rifles          = 20.00%
			RifleAmmo       = 12.00%
		*/
		Industrial[] = {"Rifles", "RoadFlares", "IndustrialItems", "RifleAmmo", "Rifles", "RifleAmmo", "Restraints", "RifleAmmo", "Vehicle", "IndustrialItems", "Vehicle", "IndustrialItems", "IndustrialItems", "Rifles", "IndustrialItems", "RoadFlares", "Vehicle", "Rifles", "Vehicle", "IndustrialItems", "IndustrialItems", "IndustrialItems", "Rifles", "Vehicle", "RoadFlares"};

		/*
			Percental Item Group Spawn Chances of Factories:

			Electronics     = 14.29%
			Trash           = 14.29%
			IndustrialItems = 71.43%
		*/
		Factories[] = {"IndustrialItems", "IndustrialItems", "Electronics", "Trash", "IndustrialItems", "IndustrialItems", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of VehicleService:

			Restraints      = 5.56%
			RoadFlares      = 16.67%
			IndustrialItems = 27.78%
			Trash           = 5.56%
			Vehicle         = 44.44%
		*/
		VehicleService[] = {"RoadFlares", "Vehicle", "RoadFlares", "Vehicle", "Trash", "IndustrialItems", "Vehicle", "Restraints", "IndustrialItems", "IndustrialItems", "RoadFlares", "Vehicle", "Vehicle", "Vehicle", "Vehicle", "Vehicle", "IndustrialItems", "IndustrialItems"};

		/*
			Percental Item Group Spawn Chances of Military:

			DLCGhillies       = 1.03%
			Ghillies          = 5.15%
			Rebreathers       = 1.03%
			Bipods            = 2.06%
			DLCAmmo           = 2.06%
			DLCOptics         = 2.06%
			DLCSupressor      = 2.06%
			LMGAmmo           = 2.06%
			MedicalItems      = 2.06%
			Restraints        = 2.06%
			SniperAmmo        = 2.06%
			SniperAttachments = 2.06%
			DLCRifles         = 3.09%
			DLCVests          = 3.09%
			GuerillaHeadgear  = 3.09%
			GuerillaVests     = 3.09%
			HandGrenades      = 3.09%
			HEGrenades        = 3.09%
			MilitaryBackpacks = 3.09%
			MilitaryHeadgear  = 3.09%
			MilitaryVests     = 3.09%
			RifleAmmo         = 3.09%
			RifleAttachments  = 3.09%
			SmokeGrenades     = 3.09%
			Snipers           = 4.12%
			GuerillaBackpacks = 4.12%
			GuerillaItems     = 4.12%
			LMG               = 4.12%
			Explosives        = 5.15%
			GuerillaClothing  = 5.15%
			MilitaryClothing  = 5.15%
			Rifles            = 5.15%
		*/
		Military[] = {"GuerillaVests", "MilitaryClothing", "Explosives", "DLCGhillies", "HandGrenades", "SmokeGrenades", "Snipers", "RifleAmmo", "DLCSupressor", "GuerillaClothing", "DLCAmmo", "MilitaryHeadgear", "Ghillies", "DLCOptics", "Rifles", "DLCRifles", "DLCRifles", "Rifles", "Ghillies", "HEGrenades", "HEGrenades", "SmokeGrenades", "MilitaryVests", "RifleAttachments", "Rebreathers", "GuerillaBackpacks", "MilitaryBackpacks", "MilitaryClothing", "SmokeGrenades", "Restraints", "SniperAttachments", "GuerillaClothing", "Snipers", "MilitaryClothing", "MilitaryHeadgear", "GuerillaItems", "Ghillies", "Restraints", "RifleAmmo", "DLCVests", "LMG", "GuerillaVests", "Ghillies", "Rifles", "SniperAmmo", "MilitaryHeadgear", "GuerillaClothing", "MilitaryVests", "Rifles", "DLCVests", "GuerillaBackpacks", "DLCOptics", "Rifles", "GuerillaHeadgear", "RifleAttachments", "SniperAttachments", "MedicalItems", "LMG", "GuerillaHeadgear", "HEGrenades", "GuerillaClothing", "GuerillaHeadgear", "MilitaryBackpacks", "GuerillaVests", "DLCSupressor", "LMG", "LMG", "MilitaryVests", "Bipods", "Explosives", "GuerillaItems", "GuerillaItems", "SniperAmmo", "DLCRifles", "RifleAttachments", "GuerillaBackpacks", "GuerillaBackpacks", "DLCAmmo", "Explosives", "Snipers", "RifleAmmo", "Snipers", "Explosives", "Bipods", "LMGAmmo", "GuerillaClothing", "MilitaryClothing", "MedicalItems", "DLCVests", "HandGrenades", "MilitaryBackpacks", "HandGrenades", "Explosives", "LMGAmmo", "Ghillies", "MilitaryClothing", "GuerillaItems"};

		/*
			Percental Item Group Spawn Chances of Medical:

			Trash        = 22.22%
			MedicalItems = 77.78%
		*/
		Medical[] = {"MedicalItems", "MedicalItems", "Trash", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "MedicalItems", "Trash"};

		/*
			Percental Item Group Spawn Chances of Tourist:

			DLCAmmo           = 2.22%
			DLCOptics         = 2.22%
			DLCSupressor      = 2.22%
			SniperAmmo        = 2.22%
			SniperAttachments = 2.22%
			CivilianItems     = 4.44%
			Explosives        = 4.44%
			HandGrenades      = 4.44%
			MedicalItems      = 4.44%
			Restraints        = 4.44%
			DLCGhillies       = 6.67%
			Ghillies          = 6.67%
			MilitaryBackpacks = 8.89%
			MilitaryHeadgear  = 8.89%
			DLCRifles         = 17.78%
			Snipers           = 17.78%
		*/
		Tourist[] = {"Explosives", "DLCRifles", "MilitaryBackpacks", "DLCRifles", "DLCRifles", "Snipers", "Snipers", "DLCGhillies", "DLCRifles", "DLCRifles", "DLCRifles", "Ghillies", "Ghillies", "MilitaryBackpacks", "HandGrenades", "MedicalItems", "Snipers", "HandGrenades", "CivilianItems", "DLCRifles", "DLCAmmo", "MilitaryBackpacks", "SniperAmmo", "DLCRifles", "DLCSupressor", "Restraints", "SniperAttachments", "MilitaryHeadgear", "Snipers", "MilitaryHeadgear", "Explosives", "Restraints", "Snipers", "MedicalItems", "Ghillies", "Snipers", "Snipers", "DLCOptics", "DLCGhillies", "Snipers", "MilitaryBackpacks", "MilitaryHeadgear", "CivilianItems", "DLCGhillies", "MilitaryHeadgear"};

		/*
			Percental Item Group Spawn Chances of Radiation:

			DLCAmmo           = 2.27%
			DLCOptics         = 2.27%
			DLCSupressor      = 2.27%
			SniperAmmo        = 2.27%
			SniperAttachments = 2.27%
			EpicWeapons       = 4.55%
			HandGrenades      = 4.55%
			MedicalItems      = 4.55%
			Restraints        = 4.55%
			DLCGhillies       = 6.82%
			Ghillies          = 6.82%
			Explosives        = 11.36%
			MilitaryBackpacks = 11.36%
			MilitaryHeadgear  = 11.36%
			DLCRifles         = 11.36%
			Snipers           = 11.36%
		*/
		Radiation[] = {"EpicWeapons", "SniperAmmo", "DLCAmmo", "Ghillies", "DLCSupressor", "HandGrenades", "Restraints", "Restraints", "EpicWeapons", "Snipers", "Snipers", "MilitaryBackpacks", "DLCRifles", "DLCOptics", "Snipers", "Snipers", "DLCGhillies", "MedicalItems", "MilitaryHeadgear", "DLCRifles", "MilitaryHeadgear", "MilitaryHeadgear", "MilitaryHeadgear", "MilitaryBackpacks", "Explosives", "SniperAttachments", "Explosives", "MilitaryHeadgear", "DLCRifles", "DLCRifles", "MilitaryBackpacks", "HandGrenades", "DLCGhillies", "Snipers", "Explosives", "Ghillies", "Explosives", "MedicalItems", "DLCGhillies", "MilitaryBackpacks", "MilitaryBackpacks", "DLCRifles", "Ghillies", "Explosives"};
	};

	class ItemGroups
	{

		/*
			Percental Item Spawn Chances of Food:

			Exile_Item_CookingPot        = 4.17%
			Exile_Item_CanOpener         = 2.78%
			Exile_Item_Matches           = 2.78%
			Exile_Item_EMRE              = 2.78%
			Exile_Item_GloriousKnakworst = 5.56%
			Exile_Item_Surstromming      = 5.56%
			Exile_Item_SausageGravy      = 5.56%
			Exile_Item_ChristmasTinner   = 5.56%
			Exile_Item_MacasCheese       = 5.56%
			Exile_Item_BBQSandwich       = 5.56%
			Exile_Item_CatFood           = 5.56%
			Exile_Item_Dogfood           = 5.56%
			Exile_Item_BeefParts         = 5.56%
			Exile_Item_Cheathas          = 5.56%
			Exile_Item_DsNuts            = 5.56%
			Exile_Item_Noodles           = 5.56%
			Exile_Item_CockONut          = 4.17%
			Exile_Item_SeedAstics        = 4.17%
			Exile_Item_Raisins           = 4.17%
			Exile_Item_Moobar            = 4.17%
			Exile_Item_InstantCoffee     = 4.17%
		*/
		Food[] = {"Exile_Item_Moobar", "Exile_Item_CatFood", "Exile_Item_CockONut", "Exile_Item_CockONut", "Exile_Item_BBQSandwich", "Exile_Item_BeefParts", "Exile_Item_Noodles", "Exile_Item_Dogfood", "Exile_Item_GloriousKnakworst", "Exile_Item_ChristmasTinner", "Exile_Item_Surstromming", "Exile_Item_Raisins", "Exile_Item_BeefParts", "Exile_Item_SausageGravy", "Exile_Item_CockONut", "Exile_Item_DsNuts", "Exile_Item_Dogfood", "Exile_Item_DsNuts", "Exile_Item_Cheathas", "Exile_Item_SausageGravy", "Exile_Item_ChristmasTinner", "Exile_Item_Surstromming", "Exile_Item_SeedAstics", "Exile_Item_CookingPot", "Exile_Item_CookingPot", "Exile_Item_Raisins", "Exile_Item_Cheathas", "Exile_Item_BeefParts", "Exile_Item_Noodles", "Exile_Item_GloriousKnakworst", "Exile_Item_Raisins", "Exile_Item_MacasCheese", "Exile_Item_SeedAstics", "Exile_Item_CookingPot", "Exile_Item_CatFood", "Exile_Item_Surstromming", "Exile_Item_EMRE", "Exile_Item_CatFood", "Exile_Item_ChristmasTinner", "Exile_Item_CanOpener", "Exile_Item_SausageGravy", "Exile_Item_MacasCheese", "Exile_Item_CatFood", "Exile_Item_MacasCheese", "Exile_Item_Surstromming", "Exile_Item_Cheathas", "Exile_Item_InstantCoffee", "Exile_Item_Matches", "Exile_Item_CanOpener", "Exile_Item_InstantCoffee", "Exile_Item_BBQSandwich", "Exile_Item_GloriousKnakworst", "Exile_Item_Noodles", "Exile_Item_MacasCheese", "Exile_Item_Cheathas", "Exile_Item_SausageGravy", "Exile_Item_ChristmasTinner", "Exile_Item_GloriousKnakworst", "Exile_Item_BBQSandwich", "Exile_Item_EMRE", "Exile_Item_DsNuts", "Exile_Item_Moobar", "Exile_Item_Matches", "Exile_Item_Moobar", "Exile_Item_Dogfood", "Exile_Item_DsNuts", "Exile_Item_BeefParts", "Exile_Item_BBQSandwich", "Exile_Item_InstantCoffee", "Exile_Item_Noodles", "Exile_Item_Dogfood", "Exile_Item_SeedAstics"};

		/*
			Percental Item Spawn Chances of Drinks:

			Exile_Item_Beer                    = 10.00%
			Exile_Item_EnergyDrink             = 10.00%
			Exile_Item_PlasticBottleFreshWater = 10.00%
			Exile_Item_PowerDrink              = 10.00%
			Exile_Item_MountainDupe            = 20.00%
			Exile_Item_ChocolateMilk           = 30.00%
			Exile_Item_PlasticBottleDirtyWater = 10.00%
		*/
		Drinks[] = {"Exile_Item_PowerDrink", "Exile_Item_MountainDupe", "Exile_Item_EnergyDrink", "Exile_Item_MountainDupe", "Exile_Item_Beer", "Exile_Item_ChocolateMilk", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleFreshWater", "Exile_Item_ChocolateMilk", "Exile_Item_PlasticBottleDirtyWater"};

		/*
			Percental Item Spawn Chances of Pistols:

			Exile_Weapon_Colt1911   = 5.88%
			Exile_Weapon_Makarov    = 5.88%
			Exile_Weapon_Taurus     = 5.88%
			Exile_Weapon_TaurusGold = 5.88%
			hgun_P07_khk_F          = 5.88%
			hgun_Pistol_01_F        = 5.88%
			hgun_Pistol_heavy_01_F  = 5.88%
			hgun_Pistol_heavy_02_F  = 5.88%
			hgun_Pistol_Signal_F    = 5.88%
			hgun_ACPC2_F            = 11.76%
			hgun_P07_F              = 11.76%
			hgun_Rook40_F           = 11.76%
			Exile_Weapon_SA61       = 11.76%
		*/
		Pistols[] = {"Exile_Weapon_TaurusGold", "Exile_Weapon_SA61", "Exile_Weapon_Makarov", "hgun_Pistol_heavy_01_F", "hgun_Pistol_heavy_02_F", "hgun_Rook40_F", "hgun_P07_F", "hgun_ACPC2_F", "hgun_P07_F", "hgun_ACPC2_F", "hgun_Pistol_01_F", "Exile_Weapon_Colt1911", "Exile_Weapon_Taurus", "Exile_Weapon_SA61", "hgun_P07_khk_F", "hgun_Rook40_F", "hgun_Pistol_Signal_F"};

		/*
			Percental Item Spawn Chances of PistolAmmo:

			6Rnd_GreenSignal_F               = 2.44%
			6Rnd_RedSignal_F                 = 2.44%
			16Rnd_9x21_Mag                   = 2.44%
			6Rnd_45ACP_Cylinder              = 4.88%
			10Rnd_9x21_Mag                   = 9.76%
			11Rnd_45ACP_Mag                  = 9.76%
			30Rnd_9x21_Mag                   = 9.76%
			9Rnd_45ACP_Mag                   = 9.76%
			Exile_Magazine_6Rnd_45ACP        = 9.76%
			Exile_Magazine_7Rnd_45ACP        = 9.76%
			Exile_Magazine_8Rnd_9x18         = 9.76%
			Exile_Magazine_10Rnd_765x17_SA61 = 9.76%
			Exile_Magazine_20Rnd_765x17_SA61 = 9.76%
		*/
		PistolAmmo[] = {"9Rnd_45ACP_Mag", "11Rnd_45ACP_Mag", "10Rnd_9x21_Mag", "Exile_Magazine_8Rnd_9x18", "10Rnd_9x21_Mag", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_6Rnd_45ACP", "6Rnd_GreenSignal_F", "11Rnd_45ACP_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "30Rnd_9x21_Mag", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_10Rnd_765x17_SA61", "Exile_Magazine_8Rnd_9x18", "30Rnd_9x21_Mag", "10Rnd_9x21_Mag", "11Rnd_45ACP_Mag", "30Rnd_9x21_Mag", "Exile_Magazine_7Rnd_45ACP", "30Rnd_9x21_Mag", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_8Rnd_9x18", "Exile_Magazine_20Rnd_765x17_SA61", "6Rnd_45ACP_Cylinder", "Exile_Magazine_10Rnd_765x17_SA61", "10Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "Exile_Magazine_7Rnd_45ACP", "Exile_Magazine_20Rnd_765x17_SA61", "Exile_Magazine_20Rnd_765x17_SA61", "6Rnd_RedSignal_F", "9Rnd_45ACP_Mag", "16Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "6Rnd_45ACP_Cylinder", "11Rnd_45ACP_Mag", "Exile_Magazine_6Rnd_45ACP", "Exile_Magazine_8Rnd_9x18"};

		/*
			Percental Item Spawn Chances of PistolAttachments:

			optic_MRD       = 16.67%
			optic_Yorris    = 16.67%
			muzzle_snds_acp = 33.33%
			muzzle_snds_L   = 33.33%
		*/
		PistolAttachments[] = {"muzzle_snds_L", "muzzle_snds_acp", "muzzle_snds_L", "optic_MRD", "optic_Yorris", "muzzle_snds_acp"};

		/*
			Percental Item Spawn Chances of Shotguns:

			Exile_Weapon_M1014 = 100.00%
		*/
		Shotguns[] = {"Exile_Weapon_M1014"};

		/*
			Percental Item Spawn Chances of ShotgunAmmo:

			Exile_Magazine_8Rnd_74Slug = 100.00%
		*/
		ShotgunAmmo[] = {"Exile_Magazine_8Rnd_74Slug"};

		/*
			Percental Item Spawn Chances of SMG:

			SMG_01_F       = 25.00%
			SMG_02_F       = 25.00%
			SMG_05_F       = 25.00%
			hgun_PDW2000_F = 25.00%
		*/
		SMG[] = {"SMG_01_F", "SMG_02_F", "SMG_05_F", "hgun_PDW2000_F"};

		/*
			Percental Item Spawn Chances of SMGAmmo:

			30Rnd_45ACP_Mag_SMG_01              = 16.67%
			30Rnd_45ACP_Mag_SMG_01_Tracer_Green = 16.67%
			30Rnd_9x21_Mag_SMG_02               = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Red    = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Yellow = 16.67%
			30Rnd_9x21_Mag_SMG_02_Tracer_Green  = 16.67%
		*/
		SMGAmmo[] = {"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow", "30Rnd_45ACP_Mag_SMG_01_Tracer_Green", "30Rnd_45ACP_Mag_SMG_01", "30Rnd_9x21_Mag_SMG_02", "30Rnd_9x21_Mag_SMG_02_Tracer_Green", "30Rnd_9x21_Mag_SMG_02_Tracer_Red"};

		/*
			Percental Item Spawn Chances of SMGAttachments:

			optic_Holosight_smg       = 16.67%
			optic_Holosight_smg_blk_F = 16.67%
			optic_ACO_grn_smg         = 16.67%
			optic_Aco_smg             = 16.67%
			optic_ACO_grn             = 16.67%
			optic_Aco                 = 16.67%
		*/
		SMGAttachments[] = {"optic_Aco_smg", "optic_Aco", "optic_ACO_grn_smg", "optic_Holosight_smg", "optic_Holosight_smg_blk_F", "optic_ACO_grn"};

		/*
			Percental Item Spawn Chances of Rifles:

			arifle_Katiba_GL_F       = 0.15%
			arifle_Mk20_GL_F         = 0.15%
			arifle_MX_GL_Black_F     = 0.15%
			arifle_MX_GL_F           = 0.15%
			arifle_MXM_F             = 0.15%
			arifle_TRG21_GL_F        = 0.15%
			Exile_Weapon_AK107_GL    = 0.15%
			Exile_Weapon_AK74_GL     = 0.15%
			arifle_AK12_GL_F         = 0.30%
			arifle_AKM_F             = 0.30%
			arifle_AKM_FL_F          = 0.30%
			arifle_AKS_F             = 0.30%
			arifle_ARX_blk_F         = 0.30%
			arifle_ARX_ghex_F        = 0.30%
			arifle_ARX_hex_F         = 0.30%
			arifle_CTAR_blk_F        = 0.30%
			arifle_CTAR_ghex_F       = 0.30%
			arifle_CTAR_GL_blk_F     = 0.30%
			arifle_CTAR_hex_F        = 0.30%
			arifle_CTARS_blk_F       = 0.30%
			arifle_CTARS_ghex_F      = 0.30%
			arifle_CTARS_hex_F       = 0.30%
			arifle_Katiba_F          = 0.30%
			arifle_Mk20_F            = 0.30%
			arifle_Mk20C_F           = 0.30%
			arifle_MX_Black_F        = 0.30%
			arifle_MX_F              = 0.30%
			arifle_MXC_Black_F       = 0.30%
			arifle_MXC_F             = 0.30%
			arifle_MXM_Black_F       = 0.30%
			arifle_SDAR_F            = 0.30%
			arifle_SPAR_01_blk_F     = 0.30%
			arifle_SPAR_01_GL_blk_F  = 0.30%
			arifle_SPAR_01_GL_khk_F  = 0.30%
			arifle_SPAR_01_GL_snd_F  = 0.30%
			arifle_SPAR_01_khk_F     = 0.30%
			arifle_SPAR_01_snd_F     = 0.30%
			arifle_SPAR_02_blk_F     = 0.30%
			arifle_SPAR_02_khk_F     = 0.30%
			arifle_SPAR_02_snd_F     = 0.30%
			arifle_SPAR_03_blk_F     = 0.30%
			arifle_SPAR_03_khk_F     = 0.30%
			arifle_SPAR_03_snd_F     = 0.30%
			arifle_TRG20_F           = 0.30%
			arifle_TRG21_F           = 0.30%
			Exile_Weapon_AK107       = 0.30%
			Exile_Weapon_AK74        = 0.30%
			Exile_Weapon_DMR         = 0.30%
			arifle_MXM_khk_F         = 0.76%
			Exile_Weapon_AK47        = 0.76%
			Exile_Weapon_AKS_Gold    = 0.76%
			Exile_Weapon_SVD         = 0.76%
			Exile_Weapon_SVDCamo     = 0.46%
			Exile_Weapon_VSSVintorez = 0.76%
			arifle_MX_GL_khk_F       = 0.76%
			arifle_AK12_F            = 0.76%
			Exile_Weapon_CZ550       = 0.76%
			arifle_MX_khk_F          = 0.76%
			arifle_MXC_khk_F         = 0.76%
			Exile_Weapon_M4          = 0.76%
			Exile_Weapon_M16A4       = 0.76%
			Exile_Weapon_M16A2       = 0.76%
			Exile_Weapon_LeeEnfield  = 0.15%
			hlc_rifle_RK62           = 0.76%
			hlc_rifle_aek971         = 0.76%
			hlc_rifle_aek971_mtk     = 0.76%
			hlc_rifle_ak12           = 0.76%
			hlc_rifle_ak12gl         = 0.76%
			hlc_rifle_ak47           = 0.76%
			hlc_rifle_ak74           = 0.76%
			hlc_rifle_ak74_MTK       = 0.76%
			hlc_rifle_ak74_dirty     = 0.76%
			hlc_rifle_ak74_dirty2    = 0.76%
			hlc_rifle_ak74m          = 0.76%
			hlc_rifle_ak74m_MTK      = 0.76%
			hlc_rifle_ak74m_gl       = 0.76%
			hlc_rifle_akm            = 0.76%
			hlc_rifle_akm_MTK        = 0.76%
			hlc_rifle_akmgl          = 0.76%
			hlc_rifle_aks74          = 0.76%
			hlc_rifle_aks74_GL       = 0.76%
			hlc_rifle_aks74_MTK      = 0.76%
			hlc_rifle_aks74u         = 0.76%
			hlc_rifle_aks74u_MTK     = 0.76%
			hlc_rifle_aku12          = 0.76%
			hlc_rifle_rpk            = 0.76%
			hlc_rifle_rpk12          = 0.76%
			hlc_rifle_rpk74n         = 0.76%
			hlc_rifle_saiga12k       = 0.76%
			hlc_rifle_slr107u        = 0.76%
			hlc_rifle_slr107u_MTK    = 0.76%
			hlc_rifle_Colt727        = 0.76%
			hlc_rifle_Colt727_GL     = 0.76%
			hlc_rifle_RU556          = 0.76%
			hlc_rifle_RU5562         = 0.76%
			hlc_rifle_SAMR           = 0.76%
			hlc_rifle_bcmjack        = 0.76%
			hlc_rifle_honeybadger    = 0.76%
			hlc_rifle_honeybase      = 0.76%
			hlc_rifle_vendimus       = 0.76%
			hlc_rifle_aug            = 0.76%
			hlc_rifle_auga1_B        = 0.76%
			hlc_rifle_auga1_t        = 0.76%
			hlc_rifle_auga1carb      = 0.76%
			hlc_rifle_auga1carb_b    = 0.76%
			hlc_rifle_auga1carb_t    = 0.76%
			hlc_rifle_auga2          = 0.76%
			hlc_rifle_auga2_b        = 0.76%
			hlc_rifle_auga2_t        = 0.76%
			hlc_rifle_auga2carb      = 0.76%
			hlc_rifle_auga2carb_b    = 0.76%
			hlc_rifle_auga2carb_t    = 0.76%
			hlc_rifle_auga2lsw       = 0.76%
			hlc_rifle_auga2lsw_b     = 0.76%
			hlc_rifle_auga2lsw_t     = 0.76%
			hlc_rifle_auga2para      = 0.76%
			hlc_rifle_auga2para_b    = 0.76%
			hlc_rifle_auga2para_t    = 0.46%
			hlc_rifle_auga3          = 0.76%
			hlc_rifle_auga3_GL       = 0.46%
			hlc_rifle_auga3_GL_B     = 0.46%
			hlc_rifle_auga3_GL_BL    = 0.46%
			hlc_rifle_auga3_b        = 0.46%
			hlc_rifle_auga3_bl       = 0.46%
			hlc_rifle_aughbar        = 0.46%
			hlc_rifle_aughbar_b      = 0.46%
			hlc_rifle_aughbar_t      = 0.46%
			hlc_rifle_augpara        = 0.46%
			hlc_rifle_augpara_b      = 0.76%
			hlc_rifle_augpara_t      = 0.76%
			hlc_rifle_augsr          = 0.76%
			hlc_rifle_augsr_b        = 0.76%
			hlc_rifle_augsr_t        = 0.76%
			hlc_rifle_augsrcarb      = 0.76%
			hlc_rifle_augsrcarb_b    = 0.76%
			hlc_rifle_augsrcarb_t    = 0.76%
			hlc_rifle_augsrhbar      = 0.76%
			hlc_rifle_augsrhbar_b    = 0.76%
			hlc_rifle_augsrhbar_t    = 0.46%
			hlc_rifle_G36A1          = 0.46%
			hlc_rifle_G36A1AG36      = 0.46%
			hlc_rifle_G36C           = 0.46%
			hlc_rifle_G36CMLIC       = 0.46%
			hlc_rifle_G36CTAC        = 0.46%
			hlc_rifle_G36CV          = 0.46%
			hlc_rifle_G36E1          = 0.46%
			hlc_rifle_G36E1AG36      = 0.46%
			hlc_rifle_G36KA1         = 0.46%
			hlc_rifle_G36KE1         = 0.46%
			hlc_rifle_G36KMLIC       = 0.46%
			hlc_rifle_G36KTAC        = 0.46%
			hlc_rifle_G36KV          = 0.46%
			hlc_rifle_G36MLIAG36     = 0.46%
			hlc_rifle_G36MLIC        = 0.46%
			hlc_rifle_G36TAC         = 0.46%
			hlc_rifle_G36V           = 0.46%
			hlc_rifle_G36VAG36       = 0.46%
			hlc_rifle_MG36           = 0.46%
			HLC_Rifle_g3ka4_GL       = 0.46%
			hlc_rifle_PSG1A1_RIS     = 0.46%
			hlc_rifle_g3a3           = 0.46%
			hlc_rifle_g3a3ris        = 0.46%
			hlc_rifle_g3a3v          = 0.46%
			hlc_rifle_g3ka4          = 0.46%
			hlc_rifle_g3sg1          = 0.46%
			hlc_rifle_hk33a2         = 0.46%
			hlc_rifle_hk33a2RIS      = 0.46%
			hlc_rifle_hk51           = 0.46%
			hlc_rifle_hk53           = 0.46%
			hlc_rifle_hk53RAS        = 0.46%
			hlc_rifle_psg1           = 0.46%
			hlc_rifle_psg1A1         = 0.46%
			hlc_rifle_M14            = 0.46%
			hlc_rifle_M14DMR         = 0.46%
			hlc_rifle_M21            = 0.46%
			hlc_rifle_m14sopmod      = 0.46%
			hlc_smg_9mmar            = 0.46%
			hlc_smg_mp510            = 0.46%
			hlc_smg_mp5a2            = 0.46%
			hlc_smg_mp5a3            = 0.46%
			hlc_smg_mp5a4            = 0.46%
			hlc_smg_mp5k             = 0.46%
			hlc_smg_mp5k_PDW         = 0.46%
			hlc_smg_mp5n             = 0.46%
			hlc_smg_mp5sd5           = 0.46%
			hlc_smg_mp5sd6           = 0.46%
		*/
		Rifles[] = {"Exile_Weapon_SVDCamo", "hlc_rifle_auga3", "Exile_Weapon_SVD", "arifle_MX_GL_khk_F", "Exile_Weapon_VSSVintorez", "hlc_rifle_RU556", "hlc_rifle_G36C", "hlc_rifle_augsr_b", "Exile_Weapon_M4", "hlc_rifle_Colt727_GL", "hlc_rifle_aks74", "hlc_rifle_M14DMR", "hlc_rifle_augsr", "Exile_Weapon_M4", "hlc_rifle_auga2para", "hlc_rifle_aks74u_MTK", "hlc_rifle_ak74m", "hlc_rifle_augsrcarb_t", "hlc_rifle_akm_MTK", "arifle_MXC_F", "hlc_rifle_ak74_dirty2", "hlc_rifle_augsrhbar_t", "hlc_rifle_bcmjack", "Exile_Weapon_VSSVintorez", "arifle_SDAR_F", "Exile_Weapon_AK74", "Exile_Weapon_CZ550", "arifle_SPAR_03_snd_F", "hlc_rifle_augsrhbar", "hlc_rifle_augpara_t", "hlc_rifle_g3a3v", "hlc_rifle_augpara_b", "hlc_rifle_aks74_MTK", "hlc_rifle_aks74_MTK", "hlc_rifle_honeybase", "hlc_rifle_aug", "hlc_rifle_aks74", "hlc_rifle_g3ka4", "arifle_MX_GL_khk_F", "hlc_rifle_ak74_MTK", "Exile_Weapon_AK47", "hlc_rifle_G36CTAC", "hlc_rifle_slr107u_MTK", "hlc_rifle_akm", "hlc_rifle_auga2carb_t", "hlc_rifle_g3a3v", "hlc_rifle_M14DMR", "hlc_rifle_auga1_B", "hlc_rifle_psg1", "arifle_CTAR_ghex_F", "hlc_rifle_ak74m_gl", "arifle_MXC_khk_F", "hlc_rifle_G36C", "hlc_rifle_auga1carb_t", "hlc_rifle_auga2para_t", "hlc_smg_mp5k", "arifle_SPAR_02_blk_F", "hlc_rifle_auga3_GL_B", "hlc_rifle_aks74_MTK", "hlc_rifle_akm_MTK", "hlc_rifle_auga2_b", "hlc_rifle_augsr_t", "Exile_Weapon_M4", "hlc_rifle_ak74", "hlc_rifle_RK62", "hlc_rifle_ak12", "hlc_rifle_auga1carb", "hlc_rifle_auga1carb", "arifle_MX_F", "Exile_Weapon_AK107", "hlc_rifle_slr107u", "hlc_rifle_auga1_t", "hlc_rifle_rpk74n", "hlc_rifle_hk33a2", "hlc_rifle_augsr", "Exile_Weapon_DMR", "Exile_Weapon_AKS_Gold", "hlc_rifle_auga2lsw", "hlc_rifle_G36VAG36", "Exile_Weapon_M16A4", "hlc_rifle_augsrhbar", "hlc_rifle_auga2lsw_t", "hlc_rifle_aug", "hlc_rifle_auga3_b", "hlc_smg_mp5sd5", "Exile_Weapon_AKS_Gold", "arifle_MXC_Black_F", "arifle_MX_khk_F", "arifle_Mk20_F", "arifle_MXC_khk_F", "hlc_rifle_G36V", "hlc_rifle_G36A1AG36", "Exile_Weapon_M4", "hlc_rifle_auga1_B", "hlc_rifle_aek971", "hlc_rifle_slr107u", "hlc_rifle_aks74u_MTK", "Exile_Weapon_VSSVintorez", "hlc_rifle_G36KTAC", "hlc_smg_mp5a2", "hlc_smg_mp5sd6", "hlc_rifle_augpara_t", "Exile_Weapon_M4", "arifle_CTARS_hex_F", "hlc_rifle_augsrcarb", "arifle_MXC_Black_F", "arifle_CTAR_blk_F", "hlc_rifle_RU556", "arifle_ARX_blk_F", "arifle_MX_khk_F", "hlc_rifle_g3a3ris", "hlc_rifle_auga1_B", "hlc_rifle_G36KTAC", "arifle_MXC_F", "hlc_rifle_ak74_dirty", "hlc_smg_9mmar", "hlc_rifle_hk33a2RIS", "hlc_rifle_auga2_t", "hlc_rifle_SAMR", "hlc_rifle_augpara_b", "Exile_Weapon_SVD", "hlc_rifle_rpk", "hlc_rifle_MG36", "Exile_Weapon_AK74_GL", "hlc_rifle_G36CTAC", "Exile_Weapon_M16A4", "hlc_rifle_rpk", "hlc_rifle_hk53RAS", "hlc_rifle_ak74", "hlc_rifle_akmgl", "hlc_smg_mp5a4", "hlc_rifle_akmgl", "Exile_Weapon_M16A2", "hlc_rifle_bcmjack", "hlc_rifle_ak74m", "hlc_rifle_aughbar_b", "hlc_rifle_auga2_b", "hlc_rifle_auga1carb_t", "hlc_rifle_Colt727", "hlc_rifle_aug", "hlc_rifle_psg1A1", "hlc_rifle_aek971", "hlc_rifle_rpk12", "hlc_rifle_auga2lsw", "arifle_MXM_khk_F", "hlc_rifle_auga3_GL_BL", "hlc_rifle_auga2lsw_t", "hlc_rifle_hk53RAS", "hlc_rifle_ak74", "hlc_rifle_slr107u", "hlc_rifle_augpara_t", "Exile_Weapon_M16A4", "hlc_rifle_ak47", "hlc_rifle_G36VAG36", "hlc_smg_mp5a2", "hlc_rifle_G36MLIAG36", "hlc_rifle_augsrhbar_b", "arifle_AKM_FL_F", "hlc_rifle_aku12", "hlc_rifle_slr107u_MTK", "Exile_Weapon_M16A4", "arifle_SPAR_03_blk_F", "hlc_smg_mp5k_PDW", "hlc_rifle_G36MLIC", "hlc_rifle_M21", "arifle_CTARS_hex_F", "hlc_rifle_auga2lsw", "hlc_rifle_augsrcarb", "hlc_smg_mp5a2", "hlc_rifle_G36CMLIC", "hlc_rifle_auga2_b", "hlc_rifle_Colt727", "hlc_rifle_augsrhbar", "hlc_rifle_ak12", "hlc_smg_mp5k", "hlc_rifle_akmgl", "hlc_rifle_auga3", "hlc_rifle_augsrcarb_t", "hlc_rifle_saiga12k", "hlc_rifle_auga2", "hlc_rifle_RK62", "hlc_rifle_m14sopmod", "hlc_rifle_ak74_dirty2", "hlc_rifle_saiga12k", "hlc_rifle_aks74u_MTK", "hlc_rifle_hk53", "arifle_SPAR_03_snd_F", "hlc_smg_mp5sd5", "hlc_rifle_psg1", "hlc_rifle_augsrcarb", "hlc_rifle_auga2carb_t", "hlc_rifle_vendimus", "hlc_rifle_ak12gl", "hlc_rifle_honeybadger", "Exile_Weapon_AK47", "arifle_SPAR_03_khk_F", "hlc_rifle_M14", "hlc_rifle_auga1_B", "Exile_Weapon_M16A2", "Exile_Weapon_LeeEnfield", "hlc_rifle_augsr", "hlc_rifle_G36VAG36", "arifle_MXC_khk_F", "hlc_rifle_auga2lsw", "hlc_rifle_auga2", "hlc_rifle_augsr", "hlc_rifle_G36A1", "hlc_rifle_saiga12k", "arifle_SPAR_01_GL_khk_F", "hlc_rifle_auga2carb", "hlc_rifle_G36CV", "hlc_smg_mp5sd5", "hlc_rifle_vendimus", "hlc_rifle_auga3_GL_B", "hlc_rifle_aks74", "hlc_rifle_augsrhbar_b", "hlc_rifle_rpk", "arifle_CTAR_blk_F", "hlc_rifle_aughbar_t", "hlc_rifle_aks74u", "hlc_rifle_ak74m_gl", "arifle_MX_GL_Black_F", "hlc_rifle_ak47", "arifle_AKM_F", "hlc_rifle_ak47", "hlc_rifle_auga2carb_t", "arifle_SPAR_02_snd_F", "hlc_rifle_M14", "hlc_rifle_ak74m_MTK", "hlc_rifle_SAMR", "hlc_rifle_auga2carb_b", "hlc_rifle_RU5562", "hlc_rifle_ak12", "hlc_rifle_aks74_GL", "hlc_rifle_augpara_b", "Exile_Weapon_VSSVintorez", "hlc_rifle_G36KE1", "hlc_rifle_aku12", "hlc_smg_mp5a4", "hlc_rifle_augsr_b", "hlc_rifle_auga2_b", "Exile_Weapon_AKS_Gold", "arifle_MXM_Black_F", "hlc_rifle_G36KMLIC", "hlc_rifle_honeybase", "hlc_rifle_ak74_MTK", "hlc_rifle_ak74_MTK", "hlc_rifle_g3a3", "arifle_ARX_ghex_F", "hlc_rifle_G36KMLIC", "hlc_rifle_ak74_dirty2", "hlc_rifle_augsrhbar_t", "hlc_smg_mp5k_PDW", "hlc_rifle_G36A1AG36", "hlc_rifle_G36KE1", "hlc_rifle_honeybase", "hlc_rifle_auga2para", "hlc_rifle_G36KTAC", "hlc_rifle_auga2para", "arifle_MX_GL_F", "hlc_rifle_auga3_bl", "hlc_rifle_auga2para_t", "arifle_MXM_khk_F", "hlc_rifle_augsr_t", "hlc_rifle_augpara_b", "hlc_rifle_ak47", "hlc_rifle_SAMR", "hlc_rifle_akm_MTK", "hlc_smg_9mmar", "hlc_rifle_ak12gl", "hlc_rifle_M21", "hlc_rifle_psg1A1", "hlc_rifle_G36KV", "arifle_AKS_F", "arifle_CTAR_hex_F", "arifle_Mk20_GL_F", "hlc_rifle_auga3_b", "arifle_MXM_khk_F", "hlc_rifle_augpara_t", "hlc_rifle_hk53", "hlc_rifle_akm", "hlc_rifle_honeybadger", "hlc_rifle_Colt727", "hlc_smg_mp5k_PDW", "hlc_rifle_aku12", "hlc_rifle_augsrhbar_b", "hlc_rifle_aks74_GL", "hlc_rifle_aek971_mtk", "arifle_ARX_hex_F", "arifle_MXM_Black_F", "arifle_MX_Black_F", "hlc_rifle_aughbar_b", "hlc_rifle_G36KV", "hlc_rifle_G36A1AG36", "hlc_rifle_auga2carb_b", "Exile_Weapon_M16A2", "arifle_AK12_F", "Exile_Weapon_CZ550", "arifle_SPAR_01_GL_blk_F", "arifle_Katiba_GL_F", "hlc_rifle_G36A1", "hlc_rifle_aug", "hlc_rifle_auga1carb_b", "hlc_rifle_aek971", "hlc_rifle_auga2lsw", "hlc_smg_mp5a4", "hlc_rifle_aek971_mtk", "hlc_rifle_hk51", "hlc_rifle_augsr_b", "arifle_CTAR_ghex_F", "hlc_rifle_auga2carb_b", "hlc_smg_mp510", "hlc_rifle_aks74u_MTK", "hlc_rifle_auga2lsw_b", "arifle_Katiba_F", "arifle_ARX_blk_F", "hlc_rifle_auga1carb_t", "hlc_rifle_aks74", "hlc_rifle_augsrcarb", "hlc_smg_mp5a3", "hlc_rifle_akm", "hlc_rifle_auga2_t", "arifle_MXC_khk_F", "hlc_rifle_G36E1AG36", "arifle_SPAR_02_khk_F", "hlc_rifle_auga2para_b", "arifle_MX_khk_F", "arifle_Mk20C_F", "hlc_rifle_rpk12", "hlc_rifle_augsrhbar_b", "hlc_rifle_g3a3", "hlc_rifle_ak74_dirty2", "HLC_Rifle_g3ka4_GL", "hlc_rifle_aks74", "hlc_rifle_hk51", "hlc_rifle_RU556", "arifle_AK12_GL_F", "hlc_rifle_aughbar", "hlc_rifle_auga2para", "hlc_rifle_slr107u_MTK", "hlc_rifle_ak74m", "hlc_rifle_G36KMLIC", "arifle_SPAR_02_blk_F", "hlc_rifle_ak12", "hlc_rifle_rpk", "hlc_rifle_G36TAC", "hlc_rifle_aek971_mtk", "Exile_Weapon_M16A2", "arifle_TRG20_F", "arifle_TRG21_F", "hlc_rifle_aks74u", "hlc_rifle_ak12", "arifle_ARX_ghex_F", "arifle_SPAR_01_blk_F", "hlc_rifle_G36E1", "hlc_rifle_honeybadger", "hlc_rifle_ak12gl", "arifle_TRG21_F", "hlc_rifle_aku12", "hlc_rifle_augsr_b", "hlc_rifle_akm", "hlc_rifle_auga2_t", "arifle_AK12_F", "hlc_smg_mp5sd6", "hlc_rifle_ak74m_MTK", "arifle_SPAR_01_GL_snd_F", "hlc_rifle_augsr_t", "hlc_rifle_auga2carb", "hlc_rifle_akm_MTK", "Exile_Weapon_CZ550", "Exile_Weapon_SVD", "hlc_rifle_aek971_mtk", "Exile_Weapon_AK47", "hlc_rifle_auga1carb_t", "hlc_rifle_G36KA1", "hlc_rifle_augsrcarb_b", "hlc_rifle_ak74_dirty", "hlc_rifle_augpara", "hlc_rifle_auga3_GL_B", "hlc_rifle_auga1carb", "Exile_Weapon_AKS_Gold", "arifle_AKM_F", "hlc_rifle_m14sopmod", "arifle_SPAR_01_khk_F", "hlc_rifle_ak74_MTK", "hlc_rifle_aks74u_MTK", "hlc_rifle_g3sg1", "hlc_rifle_auga2_t", "hlc_rifle_auga2para", "hlc_rifle_MG36", "Exile_Weapon_SVD", "hlc_rifle_augpara", "hlc_rifle_aks74u", "hlc_rifle_G36MLIC", "hlc_rifle_auga2lsw_b", "arifle_MX_GL_khk_F", "hlc_rifle_PSG1A1_RIS", "hlc_rifle_auga2para_b", "hlc_rifle_augsrcarb_b", "hlc_rifle_aks74_GL", "hlc_smg_mp5sd6", "hlc_rifle_Colt727", "hlc_rifle_m14sopmod", "hlc_rifle_ak74m_MTK", "hlc_rifle_RK62", "Exile_Weapon_AK47", "hlc_rifle_g3a3v", "hlc_rifle_vendimus", "hlc_rifle_augsr_b", "hlc_rifle_RU556", "hlc_rifle_slr107u_MTK", "hlc_rifle_RU5562", "hlc_rifle_akm", "hlc_rifle_G36CV", "arifle_ARX_hex_F", "hlc_rifle_ak74_dirty", "hlc_rifle_ak74_MTK", "Exile_Weapon_CZ550", "arifle_AKM_FL_F", "arifle_AKS_F", "hlc_rifle_augsrhbar_b", "hlc_rifle_auga3_GL", "hlc_rifle_G36CMLIC", "hlc_rifle_g3a3ris", "hlc_rifle_MG36", "hlc_rifle_slr107u", "hlc_rifle_g3sg1", "hlc_rifle_G36E1", "hlc_rifle_hk33a2", "hlc_rifle_auga1_t", "arifle_SPAR_03_blk_F", "hlc_rifle_PSG1A1_RIS", "HLC_Rifle_g3ka4_GL", "hlc_rifle_RK62", "hlc_rifle_aughbar_t", "hlc_rifle_auga3_GL_BL", "hlc_rifle_ak74m_gl", "hlc_rifle_G36V", "hlc_rifle_G36CMLIC", "hlc_smg_mp510", "hlc_rifle_RU5562", "hlc_rifle_aks74_GL", "arifle_MX_khk_F", "arifle_Mk20C_F", "hlc_rifle_auga2carb", "arifle_SPAR_01_khk_F", "hlc_rifle_aughbar", "Exile_Weapon_M16A4", "hlc_rifle_honeybase", "hlc_rifle_Colt727_GL", "hlc_rifle_augsrcarb", "hlc_smg_9mmar", "hlc_rifle_augsrcarb_b", "arifle_SPAR_02_khk_F", "hlc_rifle_G36E1AG36", "hlc_rifle_saiga12k", "arifle_CTAR_GL_blk_F", "hlc_rifle_auga3_b", "arifle_MXC_khk_F", "hlc_rifle_auga2carb_t", "hlc_rifle_auga1_t", "hlc_rifle_augsr_t", "hlc_rifle_ak12gl", "hlc_rifle_ak74m", "hlc_smg_mp5n", "hlc_rifle_rpk74n", "hlc_rifle_auga2para_b", "hlc_rifle_aks74_MTK", "hlc_rifle_honeybadger", "hlc_rifle_auga2", "arifle_SPAR_03_khk_F", "hlc_rifle_G36KV", "hlc_rifle_ak74m_MTK", "Exile_Weapon_AK107_GL", "arifle_MXM_khk_F", "hlc_rifle_auga1carb", "hlc_rifle_augsrhbar", "arifle_SPAR_01_GL_khk_F", "arifle_CTARS_blk_F", "hlc_rifle_G36V", "hlc_rifle_rpk", "hlc_rifle_ak74m_gl", "hlc_rifle_aek971", "Exile_Weapon_AKS_Gold", "hlc_smg_mp5a3", "arifle_TRG21_GL_F", "hlc_rifle_auga2lsw_t", "hlc_rifle_hk33a2", "hlc_rifle_auga3_GL_BL", "arifle_AK12_GL_F", "arifle_SDAR_F", "hlc_rifle_augsrhbar_t", "hlc_rifle_ak12gl", "hlc_rifle_aughbar_t", "hlc_rifle_rpk12", "hlc_rifle_M14", "hlc_rifle_M14DMR", "hlc_rifle_G36TAC", "Exile_Weapon_SVD", "hlc_rifle_augsr", "hlc_rifle_RK62", "hlc_rifle_rpk12", "hlc_rifle_auga2carb_b", "arifle_MX_Black_F", "hlc_rifle_aughbar", "hlc_rifle_ak74_dirty", "arifle_TRG20_F", "hlc_rifle_auga2para_b", "hlc_rifle_auga2carb", "hlc_rifle_G36KE1", "hlc_rifle_honeybadger", "Exile_Weapon_DMR", "hlc_rifle_bcmjack", "hlc_rifle_vendimus", "hlc_rifle_auga2lsw_b", "hlc_rifle_aek971", "hlc_rifle_auga2lsw_b", "hlc_rifle_auga1carb_b", "hlc_rifle_auga1carb_b", "hlc_rifle_g3ka4", "hlc_rifle_saiga12k", "arifle_MX_GL_khk_F", "arifle_MX_F", "hlc_rifle_aks74u", "hlc_rifle_g3sg1", "arifle_CTAR_GL_blk_F", "hlc_rifle_G36A1", "hlc_rifle_SAMR", "hlc_rifle_auga3_bl", "hlc_rifle_G36MLIAG36", "hlc_rifle_hk33a2RIS", "hlc_rifle_RU556", "hlc_rifle_M21", "hlc_rifle_auga2", "hlc_smg_mp5k", "hlc_rifle_ak74", "hlc_rifle_auga2lsw_t", "arifle_SPAR_02_snd_F", "hlc_rifle_augsrcarb_b", "hlc_rifle_G36C", "arifle_Katiba_F", "hlc_rifle_ak74m", "hlc_rifle_G36MLIC", "hlc_smg_mp5n", "hlc_rifle_rpk12", "hlc_rifle_G36KA1", "hlc_rifle_auga2carb", "hlc_rifle_ak74", "hlc_rifle_slr107u", "hlc_rifle_ak74m_gl", "hlc_rifle_augpara_t", "hlc_rifle_G36E1", "hlc_rifle_augpara", "hlc_rifle_rpk74n", "hlc_rifle_auga1carb", "Exile_Weapon_AK74", "hlc_rifle_augsrhbar", "hlc_rifle_RU5562", "arifle_MX_GL_khk_F", "hlc_rifle_aughbar_b", "hlc_rifle_ak74_dirty2", "arifle_AK12_F", "arifle_AK12_F", "hlc_rifle_vendimus", "hlc_smg_mp5n", "Exile_Weapon_AK107", "arifle_MXM_khk_F", "hlc_rifle_g3a3ris", "arifle_MXM_F", "hlc_rifle_ak47", "hlc_rifle_auga2lsw_b", "hlc_rifle_auga1carb_t", "hlc_rifle_auga2_t", "hlc_rifle_Colt727_GL", "hlc_rifle_bcmjack", "Exile_Weapon_SVDCamo", "hlc_rifle_hk53", "HLC_Rifle_g3ka4_GL", "arifle_CTAR_hex_F", "arifle_SPAR_01_GL_blk_F", "hlc_rifle_hk33a2RIS", "hlc_rifle_ak74_dirty", "hlc_rifle_augsr_t", "arifle_Mk20_F", "hlc_rifle_SAMR", "hlc_rifle_RU5562", "hlc_rifle_auga3", "hlc_rifle_aku12", "arifle_CTARS_blk_F", "hlc_rifle_augsrcarb_t", "hlc_rifle_auga2carb_t", "hlc_rifle_slr107u_MTK", "hlc_rifle_augpara_b", "hlc_rifle_auga1_t", "hlc_rifle_Colt727", "hlc_rifle_auga2", "hlc_rifle_hk51", "Exile_Weapon_CZ550", "hlc_rifle_g3ka4", "hlc_rifle_honeybase", "arifle_SPAR_01_blk_F", "hlc_rifle_hk53RAS", "hlc_rifle_auga2lsw_t", "hlc_rifle_ak74m_MTK", "hlc_rifle_rpk74n", "hlc_rifle_aks74_GL", "hlc_rifle_Colt727_GL", "hlc_rifle_aug", "hlc_rifle_g3a3", "hlc_rifle_auga2para_b", "hlc_rifle_psg1", "hlc_rifle_auga1_t", "arifle_CTARS_ghex_F", "hlc_rifle_psg1A1", "hlc_rifle_aks74_MTK", "hlc_rifle_G36CV", "hlc_rifle_G36CTAC", "hlc_rifle_augsrcarb_b", "hlc_rifle_augsrcarb_t", "hlc_rifle_G36E1AG36", "hlc_smg_mp5a3", "Exile_Weapon_M16A2", "hlc_rifle_PSG1A1_RIS", "hlc_rifle_auga3", "hlc_rifle_auga2para_t", "Exile_Weapon_VSSVintorez", "arifle_CTARS_ghex_F", "Exile_Weapon_SVDCamo", "arifle_SPAR_01_snd_F", "hlc_rifle_bcmjack", "hlc_rifle_G36TAC", "hlc_rifle_akmgl", "hlc_rifle_auga1carb_b", "arifle_SPAR_01_snd_F", "arifle_SPAR_01_GL_snd_F", "hlc_rifle_aek971_mtk", "arifle_MX_khk_F", "hlc_rifle_auga3_GL", "hlc_rifle_G36MLIAG36", "hlc_rifle_akm_MTK", "hlc_rifle_aks74u", "hlc_rifle_rpk74n", "hlc_rifle_auga3_bl", "hlc_smg_mp510", "hlc_rifle_auga1_B", "hlc_rifle_akmgl", "hlc_rifle_auga3_GL", "hlc_rifle_G36KA1", "hlc_rifle_augsrcarb_t", "hlc_rifle_auga2carb_b", "Exile_Weapon_AK47", "hlc_rifle_Colt727_GL", "hlc_rifle_auga2_b", "hlc_rifle_auga1carb_b", "hlc_rifle_auga3", "arifle_AK12_F"};

		/*
			Percental Item Spawn Chances of RifleAmmo:

			20Rnd_556x45_UW_mag                    = 0.61%
			30Rnd_556x45_Stanag                    = 0.61%
			30Rnd_556x45_Stanag_green              = 0.61%
			30Rnd_556x45_Stanag_red                = 0.61%
			30Rnd_556x45_Stanag_Tracer_Green       = 0.61%
			30Rnd_556x45_Stanag_Tracer_Red         = 0.61%
			30Rnd_556x45_Stanag_Tracer_Yellow      = 0.61%
			30Rnd_65x39_caseless_green             = 0.61%
			30Rnd_65x39_caseless_green_mag_Tracer  = 0.61%
			30Rnd_65x39_caseless_mag               = 0.61%
			30Rnd_65x39_caseless_mag_Tracer        = 0.61%
			Exile_Magazine_10Rnd_303               = 0.31%
			Exile_Magazine_30Rnd_762x39_AK         = 0.61%
			Exile_Magazine_30Rnd_545x39_AK         = 0.61%
			Exile_Magazine_30Rnd_545x39_AK_Green   = 0.61%
			Exile_Magazine_30Rnd_545x39_AK_Red     = 0.61%
			Exile_Magazine_30Rnd_545x39_AK_White   = 0.61%
			Exile_Magazine_30Rnd_545x39_AK_Yellow  = 0.61%
			Exile_Magazine_20Rnd_762x51_DMR        = 0.31%
			Exile_Magazine_20Rnd_762x51_DMR_Yellow = 0.31%
			Exile_Magazine_20Rnd_762x51_DMR_Red    = 0.31%
			Exile_Magazine_20Rnd_762x51_DMR_Green  = 0.31%
			Exile_Magazine_20Rnd_762x51_DMR_White  = 0.31%
			Exile_Magazine_5Rnd_22LR               = 0.61%
			Exile_Magazine_10Rnd_762x54            = 0.61%
			Exile_Magazine_10Rnd_9x39              = 0.61%
			Exile_Magazine_20Rnd_9x39              = 0.61%
			30Rnd_762x39_Mag_F                     = 0.61%
			30Rnd_762x39_Mag_Green_F               = 0.61%
			30Rnd_762x39_Mag_Tracer_F              = 0.61%
			30Rnd_762x39_Mag_Tracer_Green_F        = 0.61%
			30Rnd_762x39_AK47_M                    = 0.61%
			30Rnd_545x39_Mag_F                     = 0.61%
			30Rnd_545x39_Mag_Green_F               = 0.61%
			30Rnd_545x39_Mag_Tracer_F              = 0.61%
			30Rnd_545x39_Mag_Tracer_Green_F        = 0.61%
			10Rnd_50BW_Mag_F                       = 0.61%
			30Rnd_580x42_Mag_F                     = 0.61%
			30Rnd_580x42_Mag_Tracer_F              = 0.61%
			100Rnd_580x42_Mag_F                    = 0.61%
			100Rnd_580x42_Mag_Tracer_F             = 0.61%
			150Rnd_556x45_Drum_Mag_F               = 0.61%
			150Rnd_556x45_Drum_Mag_Tracer_F        = 0.61%
			20Rnd_762x51_Mag                       = 0.61%
			29rnd_300BLK_STANAG                    = 0.61%
			29rnd_300BLK_STANAG_S                  = 0.92%
			29rnd_300BLK_STANAG_T                  = 0.92%
			hlc_20Rnd_762x51_B_M14                 = 0.92%
			hlc_20Rnd_762x51_B_fal                 = 0.92%
			hlc_20Rnd_762x51_Mdim_M14              = 0.92%
			hlc_20Rnd_762x51_S_M14                 = 0.92%
			hlc_20Rnd_762x51_S_fal                 = 0.92%
			hlc_20Rnd_762x51_TDim_fal              = 0.92%
			hlc_20Rnd_762x51_T_M14                 = 0.92%
			hlc_20Rnd_762x51_T_amt                 = 0.92%
			hlc_20Rnd_762x51_T_fal                 = 1.53%
			hlc_20Rnd_762x51_Tdim_M14              = 1.53%
			hlc_20Rnd_762x51_b_amt                 = 1.53%
			hlc_20Rnd_762x51_barrier_M14           = 1.53%
			hlc_20Rnd_762x51_barrier_fal           = 1.53%
			hlc_20Rnd_762x51_bball_amt             = 1.53%
			hlc_20Rnd_762x51_mk316_M14             = 1.53%
			hlc_20Rnd_762x51_mk316_amt             = 1.53%
			hlc_20Rnd_762x51_mk316_fal             = 1.53%
			hlc_20rnd_762x51_IRDim_G3              = 1.53%
			hlc_20rnd_762x51_MDim_G3               = 1.53%
			hlc_20rnd_762x51_Mk316_G3              = 1.53%
			hlc_20rnd_762x51_S_G3                  = 1.53%
			hlc_20rnd_762x51_T_G3                  = 0.92%
			hlc_20rnd_762x51_b_G3                  = 0.92%
			hlc_20rnd_762x51_barrier_G3            = 0.92%
			hlc_24Rnd_75x55_B_stgw                 = 0.92%
			hlc_24Rnd_75x55_T_stgw                 = 0.92%
			hlc_24Rnd_75x55_ap_stgw                = 0.92%
			hlc_25Rnd_9x19mm_JHP_AUG               = 0.92%
			hlc_25Rnd_9x19mm_M882_AUG              = 0.92%
			hlc_25Rnd_9x19mm_subsonic_AUG          = 0.92%
			hlc_30Rnd_10mm_B_MP5                   = 0.92%
			hlc_30Rnd_10mm_JHP_MP5                 = 0.92%
			hlc_30Rnd_545x39_B_AK                  = 0.92%
			hlc_30Rnd_545x39_EP_ak                 = 0.92%
			hlc_30Rnd_545x39_S_AK                  = 0.92%
			hlc_30Rnd_545x39_t_ak                  = 0.92%
			hlc_30Rnd_556x45_B_AUG                 = 0.92%
			hlc_30Rnd_556x45_MDIM_AUG              = 0.92%
			hlc_30Rnd_556x45_SOST_AUG              = 0.92%
			hlc_30Rnd_556x45_SPR_AUG               = 0.92%
			hlc_30Rnd_556x45_TDIM_AUG              = 0.92%
			hlc_30Rnd_556x45_T_AUG                 = 0.92%
			hlc_30Rnd_762x39_b_ak                  = 0.92%
			hlc_30Rnd_762x39_t_ak                  = 0.92%
			hlc_30Rnd_9x19_B_MP5                   = 0.92%
			hlc_30Rnd_9x19_GD_MP5                  = 0.92%
			hlc_30Rnd_9x19_SD_MP5                  = 0.92%
			hlc_30rnd_556x45_EPR                   = 0.92%
			hlc_30rnd_556x45_EPR_G36               = 0.92%
			hlc_30rnd_556x45_EPR_HK33              = 0.92%
			hlc_30rnd_556x45_MDIM_G36              = 0.92%
			hlc_30rnd_556x45_MDim                  = 0.92%
			hlc_30rnd_556x45_S                     = 0.92%
			hlc_30rnd_556x45_SOST                  = 0.92%
			hlc_30rnd_556x45_SOST_G36              = 0.92%
			hlc_30rnd_556x45_SOST_HK33             = 0.92%
			hlc_30rnd_556x45_SPR                   = 0.92%
			hlc_30rnd_556x45_SPR_G36               = 0.92%
			hlc_30rnd_556x45_TDIM_G36              = 0.92%
			hlc_30rnd_556x45_TDim                  = 0.92%
			hlc_30rnd_556x45_Tracers_G36           = 0.92%
			hlc_30rnd_556x45_b_HK33                = 0.92%
			hlc_30rnd_556x45_mdim_HK33             = 0.92%
			hlc_30rnd_556x45_t_HK33                = 0.92%
			hlc_30rnd_556x45_tdim_HK33             = 0.92%
			hlc_30rnd_762x39_s_ak                  = 0.92%
			hlc_40Rnd_556x45_B_AUG                 = 0.92%
			hlc_40Rnd_556x45_SOST_AUG              = 0.92%
			hlc_40Rnd_556x45_SPR_AUG               = 0.92%
			hlc_40Rnd_556x45_TDIM_AUG              = 0.92%
		*/
		RifleAmmo[] = {"hlc_30Rnd_545x39_S_AK", "hlc_20Rnd_762x51_T_M14", "hlc_30rnd_556x45_SOST_HK33", "hlc_25Rnd_9x19mm_JHP_AUG", "hlc_30rnd_556x45_TDIM_G36", "hlc_30rnd_556x45_SOST_HK33", "hlc_20Rnd_762x51_S_fal", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "hlc_30Rnd_762x39_t_ak", "30Rnd_545x39_Mag_Tracer_Green_F", "hlc_20Rnd_762x51_mk316_fal", "Exile_Magazine_10Rnd_762x54", "hlc_30Rnd_10mm_B_MP5", "hlc_30Rnd_545x39_t_ak", "hlc_20rnd_762x51_IRDim_G3", "hlc_30rnd_556x45_SOST_HK33", "Exile_Magazine_10Rnd_762x54", "hlc_30Rnd_556x45_T_AUG", "hlc_20Rnd_762x51_S_M14", "100Rnd_580x42_Mag_F", "hlc_20Rnd_762x51_Mdim_M14", "hlc_20rnd_762x51_S_G3", "hlc_20Rnd_762x51_b_amt", "hlc_20rnd_762x51_S_G3", "hlc_30rnd_556x45_SOST", "hlc_20rnd_762x51_MDim_G3", "hlc_30rnd_556x45_SOST_G36", "30Rnd_762x39_Mag_F", "30Rnd_762x39_Mag_Tracer_Green_F", "20Rnd_762x51_Mag", "hlc_30Rnd_556x45_SPR_AUG", "hlc_20Rnd_762x51_mk316_M14", "hlc_20rnd_762x51_Mk316_G3", "150Rnd_556x45_Drum_Mag_Tracer_F", "hlc_20Rnd_762x51_T_fal", "30Rnd_580x42_Mag_F", "hlc_20rnd_762x51_Mk316_G3", "Exile_Magazine_30Rnd_545x39_AK", "10Rnd_50BW_Mag_F", "hlc_20Rnd_762x51_Tdim_M14", "hlc_30Rnd_10mm_B_MP5", "hlc_20Rnd_762x51_T_M14", "30Rnd_556x45_Stanag", "30Rnd_580x42_Mag_Tracer_F", "hlc_20rnd_762x51_MDim_G3", "hlc_30Rnd_9x19_B_MP5", "hlc_20Rnd_762x51_barrier_fal", "hlc_20rnd_762x51_MDim_G3", "30Rnd_556x45_Stanag_red", "hlc_20Rnd_762x51_T_fal", "hlc_20rnd_762x51_Mk316_G3", "29rnd_300BLK_STANAG", "hlc_30Rnd_545x39_B_AK", "hlc_30rnd_556x45_Tracers_G36", "hlc_40Rnd_556x45_B_AUG", "hlc_20Rnd_762x51_S_M14", "hlc_30Rnd_9x19_SD_MP5", "hlc_20rnd_762x51_barrier_G3", "hlc_20Rnd_762x51_bball_amt", "hlc_30Rnd_556x45_SPR_AUG", "hlc_20Rnd_762x51_mk316_fal", "Exile_Magazine_20Rnd_9x39", "hlc_30Rnd_10mm_B_MP5", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_30rnd_556x45_t_HK33", "hlc_30rnd_556x45_MDim", "hlc_20rnd_762x51_MDim_G3", "hlc_40Rnd_556x45_SPR_AUG", "hlc_20rnd_762x51_IRDim_G3", "150Rnd_556x45_Drum_Mag_F", "hlc_20rnd_762x51_MDim_G3", "hlc_30rnd_556x45_EPR", "hlc_30rnd_556x45_TDim", "hlc_30rnd_556x45_TDIM_G36", "hlc_20rnd_762x51_T_G3", "20Rnd_762x51_Mag", "hlc_30Rnd_545x39_S_AK", "hlc_40Rnd_556x45_B_AUG", "Exile_Magazine_20Rnd_762x51_DMR", "hlc_25Rnd_9x19mm_JHP_AUG", "hlc_30rnd_556x45_b_HK33", "hlc_30rnd_556x45_MDIM_G36", "hlc_30rnd_556x45_MDim", "hlc_30rnd_556x45_EPR_HK33", "hlc_20Rnd_762x51_mk316_M14", "hlc_24Rnd_75x55_B_stgw", "hlc_30Rnd_545x39_EP_ak", "30Rnd_762x39_Mag_Green_F", "30Rnd_545x39_Mag_F", "hlc_40Rnd_556x45_SOST_AUG", "hlc_30Rnd_10mm_JHP_MP5", "hlc_30rnd_556x45_SPR_G36", "hlc_30rnd_556x45_SOST", "hlc_30rnd_556x45_tdim_HK33", "Exile_Magazine_20Rnd_762x51_DMR_Yellow", "hlc_40Rnd_556x45_SOST_AUG", "hlc_20Rnd_762x51_TDim_fal", "hlc_40Rnd_556x45_TDIM_AUG", "hlc_30Rnd_9x19_GD_MP5", "hlc_20Rnd_762x51_mk316_amt", "hlc_30rnd_556x45_SPR", "hlc_20Rnd_762x51_T_amt", "hlc_20Rnd_762x51_b_amt", "hlc_30rnd_556x45_S", "hlc_30Rnd_556x45_SOST_AUG", "hlc_30rnd_556x45_TDIM_G36", "hlc_30Rnd_9x19_B_MP5", "29rnd_300BLK_STANAG_S", "hlc_30Rnd_545x39_B_AK", "hlc_20Rnd_762x51_barrier_M14", "30Rnd_556x45_Stanag_red", "hlc_20rnd_762x51_b_G3", "hlc_30Rnd_545x39_t_ak", "hlc_20Rnd_762x51_B_M14", "hlc_20Rnd_762x51_mk316_fal", "29rnd_300BLK_STANAG_T", "Exile_Magazine_10Rnd_9x39", "hlc_30rnd_762x39_s_ak", "hlc_40Rnd_556x45_TDIM_AUG", "hlc_30rnd_556x45_SPR", "hlc_30Rnd_556x45_SOST_AUG", "hlc_20Rnd_762x51_mk316_amt", "hlc_20Rnd_762x51_T_amt", "hlc_30Rnd_556x45_SOST_AUG", "30Rnd_580x42_Mag_F", "hlc_30rnd_556x45_Tracers_G36", "hlc_30rnd_556x45_EPR_G36", "hlc_24Rnd_75x55_B_stgw", "hlc_20Rnd_762x51_Tdim_M14", "hlc_20Rnd_762x51_bball_amt", "hlc_20Rnd_762x51_mk316_amt", "Exile_Magazine_30Rnd_545x39_AK_Yellow", "30Rnd_762x39_Mag_Tracer_Green_F", "30Rnd_65x39_caseless_mag", "hlc_30rnd_556x45_MDim", "hlc_30rnd_556x45_TDim", "100Rnd_580x42_Mag_F", "hlc_30rnd_556x45_EPR_HK33", "hlc_30Rnd_545x39_EP_ak", "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_mk316_amt", "30Rnd_545x39_Mag_Tracer_F", "hlc_40Rnd_556x45_B_AUG", "hlc_30rnd_556x45_TDim", "29rnd_300BLK_STANAG_T", "hlc_30rnd_556x45_EPR", "hlc_20Rnd_762x51_mk316_fal", "hlc_20rnd_762x51_b_G3", "Exile_Magazine_30Rnd_762x39_AK", "hlc_30Rnd_762x39_t_ak", "30Rnd_65x39_caseless_mag", "hlc_25Rnd_9x19mm_M882_AUG", "hlc_20rnd_762x51_b_G3", "hlc_20rnd_762x51_barrier_G3", "hlc_20Rnd_762x51_Mdim_M14", "hlc_24Rnd_75x55_T_stgw", "30Rnd_545x39_Mag_Tracer_Green_F", "30Rnd_556x45_Stanag_Tracer_Green", "hlc_30rnd_556x45_mdim_HK33", "30Rnd_556x45_Stanag", "Exile_Magazine_30Rnd_545x39_AK", "hlc_30Rnd_762x39_b_ak", "Exile_Magazine_20Rnd_762x51_DMR_Red", "30Rnd_545x39_Mag_Tracer_F", "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_T_amt", "hlc_30Rnd_545x39_S_AK", "29rnd_300BLK_STANAG_S", "20Rnd_556x45_UW_mag", "hlc_30rnd_556x45_S", "30Rnd_65x39_caseless_green", "29rnd_300BLK_STANAG_T", "hlc_30rnd_556x45_MDIM_G36", "30Rnd_65x39_caseless_mag_Tracer", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_30Rnd_9x19_SD_MP5", "hlc_30rnd_762x39_s_ak", "hlc_30rnd_556x45_S", "29rnd_300BLK_STANAG_S", "100Rnd_580x42_Mag_Tracer_F", "30Rnd_556x45_Stanag_green", "hlc_20Rnd_762x51_S_fal", "150Rnd_556x45_Drum_Mag_F", "Exile_Magazine_30Rnd_545x39_AK_White", "hlc_30rnd_556x45_b_HK33", "hlc_30rnd_556x45_EPR", "hlc_20rnd_762x51_S_G3", "30Rnd_762x39_Mag_Green_F", "hlc_40Rnd_556x45_TDIM_AUG", "hlc_24Rnd_75x55_ap_stgw", "hlc_30rnd_556x45_Tracers_G36", "hlc_20Rnd_762x51_Tdim_M14", "hlc_30rnd_556x45_SPR_G36", "hlc_25Rnd_9x19mm_subsonic_AUG", "30Rnd_556x45_Stanag_green", "30Rnd_762x39_AK47_M", "30Rnd_556x45_Stanag_Tracer_Green", "Exile_Magazine_30Rnd_545x39_AK_Green", "hlc_20rnd_762x51_S_G3", "hlc_30Rnd_762x39_b_ak", "hlc_20Rnd_762x51_Tdim_M14", "hlc_20rnd_762x51_Mk316_G3", "hlc_20rnd_762x51_IRDim_G3", "hlc_20Rnd_762x51_T_fal", "hlc_30Rnd_556x45_T_AUG", "hlc_25Rnd_9x19mm_subsonic_AUG", "hlc_40Rnd_556x45_SPR_AUG", "hlc_30rnd_556x45_SOST_G36", "Exile_Magazine_10Rnd_303", "30Rnd_545x39_Mag_F", "30Rnd_556x45_Stanag_Tracer_Yellow", "hlc_25Rnd_9x19mm_M882_AUG", "hlc_20Rnd_762x51_mk316_M14", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_20Rnd_762x51_T_fal", "Exile_Magazine_5Rnd_22LR", "hlc_20rnd_762x51_IRDim_G3", "30Rnd_545x39_Mag_Green_F", "hlc_30Rnd_556x45_B_AUG", "hlc_20Rnd_762x51_bball_amt", "hlc_30Rnd_9x19_SD_MP5", "hlc_20Rnd_762x51_S_fal", "hlc_30Rnd_9x19_GD_MP5", "hlc_20rnd_762x51_S_G3", "hlc_20Rnd_762x51_barrier_M14", "hlc_20Rnd_762x51_barrier_M14", "hlc_30rnd_556x45_SOST", "hlc_25Rnd_9x19mm_JHP_AUG", "hlc_30rnd_556x45_b_HK33", "hlc_24Rnd_75x55_T_stgw", "hlc_25Rnd_9x19mm_subsonic_AUG", "30Rnd_762x39_Mag_Tracer_F", "30Rnd_545x39_Mag_Green_F", "Exile_Magazine_20Rnd_762x51_DMR_Green", "150Rnd_556x45_Drum_Mag_Tracer_F", "hlc_20Rnd_762x51_barrier_fal", "hlc_20rnd_762x51_T_G3", "hlc_30rnd_556x45_EPR_G36", "hlc_20Rnd_762x51_TDim_fal", "hlc_30rnd_556x45_tdim_HK33", "hlc_30rnd_556x45_EPR_G36", "hlc_20rnd_762x51_Mk316_G3", "hlc_20rnd_762x51_T_G3", "20Rnd_556x45_UW_mag", "30Rnd_65x39_caseless_mag_Tracer", "Exile_Magazine_30Rnd_545x39_AK_Green", "30Rnd_762x39_Mag_F", "hlc_20Rnd_762x51_barrier_fal", "hlc_20Rnd_762x51_Mdim_M14", "hlc_30rnd_556x45_SOST_G36", "Exile_Magazine_30Rnd_545x39_AK_White", "hlc_30rnd_556x45_MDIM_G36", "hlc_20Rnd_762x51_B_fal", "Exile_Magazine_5Rnd_22LR", "10Rnd_50BW_Mag_F", "hlc_30Rnd_556x45_T_AUG", "hlc_20Rnd_762x51_TDim_fal", "hlc_20Rnd_762x51_bball_amt", "hlc_24Rnd_75x55_T_stgw", "hlc_30rnd_762x39_s_ak", "hlc_20Rnd_762x51_S_M14", "30Rnd_762x39_Mag_Tracer_F", "hlc_30rnd_556x45_EPR_HK33", "hlc_30Rnd_545x39_t_ak", "100Rnd_580x42_Mag_Tracer_F", "Exile_Magazine_20Rnd_762x51_DMR_White", "30Rnd_65x39_caseless_green", "hlc_30Rnd_556x45_SPR_AUG", "hlc_20Rnd_762x51_barrier_M14", "hlc_30rnd_556x45_t_HK33", "hlc_30Rnd_10mm_JHP_MP5", "hlc_30Rnd_556x45_TDIM_AUG", "30Rnd_762x39_AK47_M", "hlc_30Rnd_762x39_b_ak", "hlc_30Rnd_556x45_B_AUG", "30Rnd_556x45_Stanag_Tracer_Yellow", "hlc_20Rnd_762x51_T_fal", "hlc_30Rnd_10mm_JHP_MP5", "hlc_20Rnd_762x51_B_fal", "hlc_30rnd_556x45_mdim_HK33", "hlc_20Rnd_762x51_mk316_M14", "hlc_30Rnd_9x19_GD_MP5", "30Rnd_65x39_caseless_green_mag_Tracer", "hlc_25Rnd_9x19mm_M882_AUG", "hlc_24Rnd_75x55_ap_stgw", "Exile_Magazine_20Rnd_9x39", "hlc_20Rnd_762x51_T_M14", "hlc_20Rnd_762x51_B_M14", "30Rnd_556x45_Stanag_Tracer_Red", "hlc_30rnd_556x45_tdim_HK33", "hlc_20Rnd_762x51_mk316_M14", "hlc_20Rnd_762x51_mk316_fal", "30Rnd_556x45_Stanag_Tracer_Red", "hlc_24Rnd_75x55_ap_stgw", "29rnd_300BLK_STANAG", "30Rnd_580x42_Mag_Tracer_F", "hlc_30Rnd_556x45_B_AUG", "Exile_Magazine_10Rnd_9x39", "hlc_30rnd_556x45_t_HK33", "hlc_20Rnd_762x51_b_amt", "hlc_20Rnd_762x51_barrier_M14", "hlc_30Rnd_545x39_EP_ak", "hlc_20Rnd_762x51_barrier_fal", "hlc_20Rnd_762x51_barrier_fal", "hlc_20Rnd_762x51_B_M14", "hlc_30Rnd_9x19_B_MP5", "Exile_Magazine_30Rnd_545x39_AK_Red", "hlc_30Rnd_556x45_MDIM_AUG", "hlc_20Rnd_762x51_mk316_amt", "hlc_20Rnd_762x51_B_fal", "hlc_30Rnd_556x45_TDIM_AUG", "hlc_30rnd_556x45_SPR", "Exile_Magazine_30Rnd_545x39_AK_Red", "hlc_30Rnd_762x39_t_ak", "hlc_40Rnd_556x45_SPR_AUG", "hlc_30Rnd_545x39_B_AK", "hlc_20Rnd_762x51_bball_amt", "hlc_30rnd_556x45_SPR_G36", "hlc_40Rnd_556x45_SOST_AUG", "30Rnd_65x39_caseless_green_mag_Tracer", "hlc_20rnd_762x51_barrier_G3", "hlc_20rnd_762x51_IRDim_G3", "hlc_24Rnd_75x55_B_stgw", "hlc_30rnd_556x45_mdim_HK33", "hlc_20Rnd_762x51_Tdim_M14", "Exile_Magazine_30Rnd_762x39_AK"};

		/*
			Percental Item Spawn Chances of RifleAttachments:

			muzzle_snds_M               = 1.75%
			muzzle_snds_H               = 1.75%
			muzzle_snds_H_khk_F         = 1.75%
			muzzle_snds_H_snd_F         = 1.75%
			muzzle_snds_58_blk_F        = 1.75%
			muzzle_snds_m_khk_F         = 1.75%
			muzzle_snds_m_snd_F         = 1.75%
			muzzle_snds_58_wdm_F        = 1.75%
			muzzle_snds_65_TI_blk_F     = 1.75%
			muzzle_snds_65_TI_hex_F     = 1.75%
			muzzle_snds_65_TI_ghex_F    = 1.75%
			muzzle_snds_H_MG_blk_F      = 1.75%
			muzzle_snds_H_MG_khk_F      = 1.75%
			optic_Arco                  = 1.75%
			optic_Arco_blk_F            = 1.75%
			optic_Arco_ghex_F           = 1.75%
			optic_Hamr                  = 1.75%
			optic_Hamr_khk_F            = 1.75%
			optic_Holosight             = 1.75%
			optic_Holosight_blk_F       = 1.75%
			optic_Holosight_khk_F       = 1.75%
			acc_flashlight              = 1.75%
			acc_pointer_IR              = 1.75%
			optic_MRCO                  = 1.75%
			optic_DMS                   = 1.75%
			optic_DMS_ghex_F            = 1.75%
			optic_ERCO_blk_F            = 1.75%
			optic_ERCO_khk_F            = 1.75%
			optic_ERCO_snd_F            = 1.75%
			optic_NVS                   = 0.88%
			HLC_Optic_1p29              = 1.75%
			HLC_Optic_G36Dualoptic15x   = 1.75%
			HLC_Optic_G36Dualoptic15x2d = 1.75%
			HLC_Optic_G36Export15x      = 1.75%
			HLC_Optic_G36Export15x2d    = 1.75%
			HLC_Optic_G36Export35x      = 1.75%
			HLC_Optic_G36Export35x2d    = 1.75%
			HLC_Optic_G36dualoptic35x   = 1.75%
			HLC_Optic_G36dualoptic35x2d = 1.75%
			HLC_Optic_PSO1              = 1.75%
			HLC_Optic_ZFSG1             = 1.75%
			HLC_optic_LRT_m14           = 1.75%
			HLC_optic_PVS4FAL           = 1.75%
			HLC_optic_accupoint_g3      = 1.75%
			HLC_optic_artel_m14         = 1.75%
			hlc_muzzle_300blk_KAC       = 0.88%
			hlc_muzzle_545SUP_AK        = 2.63%
			hlc_muzzle_556NATO_KAC      = 2.63%
			hlc_muzzle_762SUP_AK        = 0.88%
			hlc_muzzle_Agendasix        = 1.75%
			hlc_muzzle_Agendasix10mm    = 2.63%
			hlc_muzzle_Tundra           = 1.75%
			hlc_muzzle_snds_HK33        = 2.63%
			hlc_muzzle_snds_M14         = 1.75%
			hlc_muzzle_snds_a6AUG       = 2.63%
			hlc_muzzle_snds_g3          = 1.75%
		*/
		RifleAttachments[] = {"HLC_Optic_G36Export15x", "hlc_muzzle_300blk_KAC", "optic_DMS_ghex_F", "HLC_Optic_G36Dualoptic15x", "muzzle_snds_65_TI_blk_F", "HLC_Optic_G36Export35x", "muzzle_snds_H", "HLC_Optic_PSO1", "HLC_optic_artel_m14", "optic_Holosight_khk_F", "optic_ERCO_snd_F", "muzzle_snds_m_snd_F", "HLC_optic_PVS4FAL", "muzzle_snds_H_snd_F", "HLC_optic_LRT_m14", "hlc_muzzle_Agendasix10mm", "muzzle_snds_H_MG_blk_F", "optic_Arco_blk_F", "optic_ERCO_blk_F", "muzzle_snds_H_MG_khk_F", "HLC_Optic_G36Dualoptic15x2d", "acc_pointer_IR", "HLC_Optic_G36Dualoptic15x2d", "hlc_muzzle_545SUP_AK", "hlc_muzzle_Tundra", "HLC_Optic_G36Export35x2d", "optic_Hamr_khk_F", "HLC_optic_accupoint_g3", "hlc_muzzle_snds_g3", "HLC_Optic_G36Export35x2d", "HLC_Optic_ZFSG1", "hlc_muzzle_snds_a6AUG", "optic_ERCO_blk_F", "HLC_optic_PVS4FAL", "HLC_Optic_1p29", "HLC_Optic_G36Export15x", "hlc_muzzle_snds_M14", "acc_flashlight", "muzzle_snds_M", "HLC_Optic_G36Export35x", "hlc_muzzle_556NATO_KAC", "muzzle_snds_H_MG_khk_F", "hlc_muzzle_snds_M14", "muzzle_snds_m_khk_F", "hlc_muzzle_Agendasix10mm", "HLC_Optic_G36dualoptic35x2d", "optic_ERCO_khk_F", "hlc_muzzle_snds_HK33", "hlc_muzzle_545SUP_AK", "optic_Hamr_khk_F", "HLC_Optic_G36dualoptic35x", "optic_Arco", "optic_Hamr", "optic_Arco", "HLC_Optic_G36dualoptic35x2d", "acc_pointer_IR", "hlc_muzzle_snds_HK33", "muzzle_snds_M", "optic_Arco_blk_F", "muzzle_snds_58_wdm_F", "HLC_optic_accupoint_g3", "HLC_optic_artel_m14", "muzzle_snds_m_snd_F", "hlc_muzzle_556NATO_KAC", "HLC_Optic_G36Export15x2d", "muzzle_snds_H_snd_F", "optic_Holosight_blk_F", "optic_ERCO_snd_F", "hlc_muzzle_snds_g3", "hlc_muzzle_snds_HK33", "acc_flashlight", "HLC_Optic_1p29", "muzzle_snds_H_MG_blk_F", "muzzle_snds_65_TI_blk_F", "muzzle_snds_H_khk_F", "optic_ERCO_khk_F", "hlc_muzzle_Agendasix10mm", "muzzle_snds_H_khk_F", "hlc_muzzle_snds_a6AUG", "optic_NVS", "hlc_muzzle_545SUP_AK", "muzzle_snds_H", "muzzle_snds_58_wdm_F", "optic_Holosight_khk_F", "hlc_muzzle_snds_a6AUG", "muzzle_snds_65_TI_hex_F", "hlc_muzzle_Agendasix", "optic_DMS_ghex_F", "hlc_muzzle_556NATO_KAC", "optic_MRCO", "HLC_Optic_G36Dualoptic15x", "HLC_Optic_PSO1", "muzzle_snds_m_khk_F", "optic_Hamr", "muzzle_snds_65_TI_hex_F", "optic_DMS", "optic_Arco_ghex_F", "optic_Holosight_blk_F", "optic_Arco_ghex_F", "HLC_optic_LRT_m14", "HLC_Optic_G36dualoptic35x", "hlc_muzzle_Agendasix", "optic_DMS", "optic_MRCO", "muzzle_snds_65_TI_ghex_F", "optic_Holosight", "HLC_Optic_ZFSG1", "hlc_muzzle_Tundra", "muzzle_snds_58_blk_F", "muzzle_snds_58_blk_F", "optic_Holosight", "muzzle_snds_65_TI_ghex_F", "hlc_muzzle_762SUP_AK", "HLC_Optic_G36Export15x2d"};

		/*
			Percental Item Spawn Chances of LMG:

			arifle_MX_SW_Black_F  = 1.52%
			arifle_MX_SW_F        = 1.52%
			LMG_Mk200_F           = 1.52%
			LMG_Zafir_F           = 1.52%
			Exile_Weapon_RPK      = 1.52%
			Exile_Weapon_PK       = 1.52%
			Exile_Weapon_PKP      = 1.52%
			LMG_03_F              = 1.52%
			hlc_lmg_M60E4         = 4.55%
			hlc_lmg_m60           = 7.58%
			hlc_lmg_M249E2        = 7.58%
			hlc_lmg_m249para      = 7.58%
			hlc_lmg_minimi        = 7.58%
			hlc_lmg_minimi_railed = 7.58%
			hlc_lmg_minimipara    = 7.58%
			hlc_lmg_mk48          = 7.58%
			hlc_m249_pip1         = 7.58%
			hlc_m249_pip2         = 7.58%
			hlc_m249_pip3         = 7.58%
			hlc_m249_pip4         = 7.58%
		*/
		LMG[] = {"hlc_m249_pip3", "Exile_Weapon_PK", "hlc_lmg_minimipara", "hlc_lmg_m249para", "hlc_m249_pip4", "hlc_lmg_m249para", "LMG_Zafir_F", "hlc_lmg_minimi_railed", "hlc_lmg_m60", "Exile_Weapon_PKP", "hlc_lmg_mk48", "hlc_m249_pip2", "Exile_Weapon_RPK", "hlc_m249_pip1", "hlc_lmg_m60", "hlc_m249_pip1", "hlc_lmg_minimi", "hlc_m249_pip1", "hlc_lmg_minimi_railed", "hlc_lmg_M249E2", "hlc_m249_pip2", "hlc_lmg_M249E2", "hlc_lmg_minimi", "hlc_lmg_M249E2", "hlc_lmg_M60E4", "hlc_m249_pip4", "hlc_lmg_minimi_railed", "hlc_lmg_mk48", "hlc_lmg_M60E4", "arifle_MX_SW_F", "hlc_lmg_minimipara", "hlc_lmg_minimipara", "LMG_03_F", "hlc_lmg_minimi_railed", "LMG_Mk200_F", "hlc_lmg_minimipara", "hlc_lmg_m60", "hlc_m249_pip3", "hlc_m249_pip3", "hlc_lmg_m249para", "hlc_m249_pip2", "hlc_lmg_m249para", "hlc_m249_pip1", "hlc_m249_pip4", "arifle_MX_SW_Black_F", "hlc_lmg_mk48", "hlc_m249_pip4", "hlc_lmg_minimi", "hlc_lmg_m60", "hlc_lmg_M249E2", "hlc_lmg_mk48", "hlc_lmg_minimi", "hlc_m249_pip4", "hlc_m249_pip3", "hlc_m249_pip1", "hlc_m249_pip3", "hlc_m249_pip2", "hlc_lmg_mk48", "hlc_m249_pip2", "hlc_lmg_minimi", "hlc_lmg_minimipara", "hlc_lmg_m60", "hlc_lmg_m249para", "hlc_lmg_minimi_railed", "hlc_lmg_M60E4", "hlc_lmg_M249E2"};

		/*
			Percental Item Spawn Chances of LMGAmmo:

			100Rnd_65x39_caseless_mag             = 1.32%
			100Rnd_65x39_caseless_mag_Tracer      = 1.97%
			150Rnd_762x54_Box                     = 1.97%
			150Rnd_762x54_Box_Tracer              = 0.66%
			130Rnd_338_Mag                        = 3.29%
			150Rnd_93x64_Mag                      = 3.29%
			Exile_Magazine_45Rnd_545x39_RPK_Green = 0.66%
			Exile_Magazine_75Rnd_545x39_RPK_Green = 0.66%
			Exile_Magazine_100Rnd_762x54_PK_Green = 0.66%
			200Rnd_556x45_Box_F                   = 0.66%
			200Rnd_556x45_Box_Red_F               = 0.66%
			200Rnd_556x45_Box_Tracer_F            = 0.66%
			200Rnd_556x45_Box_Tracer_Red_F        = 0.66%
			hlc_100Rnd_762x51_B_M60E4             = 1.97%
			hlc_100Rnd_762x51_B_MG3               = 1.97%
			hlc_100Rnd_762x51_Barrier_M60E4       = 1.97%
			hlc_100Rnd_762x51_Barrier_MG3         = 1.97%
			hlc_100Rnd_762x51_M_M60E4             = 1.97%
			hlc_100Rnd_762x51_M_MG3               = 1.97%
			hlc_100Rnd_762x51_Mdim_M60E4          = 1.97%
			hlc_100Rnd_762x51_T_M60E4             = 1.97%
			hlc_100Rnd_762x51_T_MG3               = 1.97%
			hlc_100Rnd_792x57_AP_MG42             = 1.97%
			hlc_100Rnd_792x57_B_MG42              = 1.97%
			hlc_100Rnd_792x57_M_MG42              = 1.97%
			hlc_100Rnd_792x57_T_MG42              = 1.97%
			hlc_100rnd_556x45_EPR_G36             = 1.97%
			hlc_200Rnd_792x57_B_MG42              = 1.97%
			hlc_200Rnd_792x57_M_MG42              = 1.97%
			hlc_200Rnd_792x57_T_MG42              = 1.97%
			hlc_200rnd_556x45_B_SAW               = 1.97%
			hlc_200rnd_556x45_M_SAW               = 1.97%
			hlc_200rnd_556x45_Mdim_SAW            = 1.97%
			hlc_200rnd_556x45_T_SAW               = 1.97%
			hlc_250Rnd_762x51_B_MG3               = 1.97%
			hlc_250Rnd_762x51_Barrier_MG3         = 1.97%
			hlc_250Rnd_762x51_M_MG3               = 1.97%
			hlc_250Rnd_762x51_T_MG3               = 1.97%
			hlc_50Rnd_45ACP_B_1921                = 1.97%
			hlc_50Rnd_45ACP_T_1921                = 1.97%
			hlc_50Rnd_762x51_B_M14                = 1.97%
			hlc_50Rnd_762x51_B_MG3                = 1.97%
			hlc_50Rnd_762x51_Barrier_MG3          = 1.97%
			hlc_50Rnd_762x51_M_MG3                = 1.97%
			hlc_50Rnd_762x51_T_MG3                = 1.97%
			hlc_50Rnd_792x57_B_MG42               = 1.97%
			hlc_50Rnd_792x57_M_MG42               = 1.97%
			hlc_50Rnd_792x57_T_MG42               = 1.97%
			hlc_50rnd_556x45_EPR                  = 1.97%
			hlc_50rnd_762x51_MDIM_G3              = 1.97%
			hlc_50rnd_762x51_M_FAL                = 1.97%
			hlc_50rnd_762x51_M_G3                 = 1.97%
			hlc_50rnd_9x19_B_9mmar                = 1.97%
			hlc_60Rnd_545x39_t_rpk                = 1.97%
			hlc_75Rnd_762x39_m_rpk                = 1.97%
		*/
		LMGAmmo[] = {"hlc_50rnd_762x51_MDIM_G3", "hlc_75Rnd_762x39_m_rpk", "hlc_100Rnd_792x57_M_MG42", "200Rnd_556x45_Box_Tracer_Red_F", "100Rnd_65x39_caseless_mag_Tracer", "hlc_200rnd_556x45_T_SAW", "hlc_100Rnd_762x51_B_MG3", "hlc_100Rnd_762x51_M_MG3", "hlc_50Rnd_762x51_M_MG3", "hlc_200rnd_556x45_T_SAW", "hlc_50Rnd_762x51_B_M14", "hlc_50rnd_762x51_M_FAL", "hlc_100Rnd_762x51_T_M60E4", "hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_792x57_T_MG42", "hlc_250Rnd_762x51_B_MG3", "hlc_100Rnd_762x51_Mdim_M60E4", "hlc_60Rnd_545x39_t_rpk", "100Rnd_65x39_caseless_mag_Tracer", "hlc_100Rnd_762x51_Barrier_M60E4", "hlc_50Rnd_762x51_B_M14", "hlc_100Rnd_762x51_T_MG3", "hlc_200Rnd_792x57_B_MG42", "hlc_200rnd_556x45_B_SAW", "hlc_50Rnd_762x51_Barrier_MG3", "hlc_100Rnd_762x51_Barrier_MG3", "130Rnd_338_Mag", "hlc_100rnd_556x45_EPR_G36", "hlc_200Rnd_792x57_T_MG42", "150Rnd_762x54_Box", "150Rnd_762x54_Box", "hlc_100Rnd_762x51_M_MG3", "hlc_250Rnd_762x51_M_MG3", "130Rnd_338_Mag", "100Rnd_65x39_caseless_mag", "hlc_250Rnd_762x51_M_MG3", "150Rnd_93x64_Mag", "hlc_200Rnd_792x57_B_MG42", "hlc_50rnd_556x45_EPR", "hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_Barrier_MG3", "hlc_100Rnd_762x51_M_M60E4", "100Rnd_65x39_caseless_mag_Tracer", "hlc_50Rnd_762x51_T_MG3", "hlc_100Rnd_792x57_T_MG42", "hlc_100Rnd_762x51_T_MG3", "hlc_50Rnd_762x51_Barrier_MG3", "hlc_200rnd_556x45_Mdim_SAW", "130Rnd_338_Mag", "hlc_200Rnd_792x57_M_MG42", "hlc_200Rnd_792x57_T_MG42", "hlc_50Rnd_792x57_B_MG42", "hlc_60Rnd_545x39_t_rpk", "hlc_50Rnd_45ACP_B_1921", "hlc_100Rnd_762x51_M_MG3", "hlc_100Rnd_762x51_Mdim_M60E4", "hlc_250Rnd_762x51_B_MG3", "hlc_200rnd_556x45_Mdim_SAW", "hlc_100Rnd_762x51_T_MG3", "hlc_50Rnd_762x51_M_MG3", "hlc_100Rnd_792x57_AP_MG42", "hlc_100Rnd_792x57_B_MG42", "hlc_50Rnd_792x57_T_MG42", "hlc_50rnd_762x51_M_FAL", "hlc_50rnd_9x19_B_9mmar", "hlc_50rnd_556x45_EPR", "hlc_100Rnd_762x51_Barrier_MG3", "hlc_100rnd_556x45_EPR_G36", "hlc_100Rnd_762x51_B_MG3", "150Rnd_93x64_Mag", "hlc_50Rnd_792x57_M_MG42", "hlc_200Rnd_792x57_M_MG42", "130Rnd_338_Mag", "hlc_60Rnd_545x39_t_rpk", "hlc_75Rnd_762x39_m_rpk", "hlc_200rnd_556x45_M_SAW", "hlc_100Rnd_762x51_Barrier_M60E4", "hlc_100Rnd_762x51_B_M60E4", "hlc_250Rnd_762x51_Barrier_MG3", "Exile_Magazine_100Rnd_762x54_PK_Green", "hlc_50Rnd_762x51_B_MG3", "hlc_200rnd_556x45_T_SAW", "hlc_250Rnd_762x51_M_MG3", "hlc_100Rnd_762x51_B_MG3", "hlc_50Rnd_762x51_B_MG3", "hlc_100Rnd_792x57_M_MG42", "hlc_50rnd_9x19_B_9mmar", "200Rnd_556x45_Box_F", "hlc_50Rnd_762x51_B_MG3", "hlc_50rnd_9x19_B_9mmar", "hlc_50rnd_762x51_MDIM_G3", "hlc_50rnd_762x51_M_G3", "hlc_250Rnd_762x51_T_MG3", "hlc_50Rnd_792x57_M_MG42", "hlc_50Rnd_45ACP_T_1921", "hlc_200rnd_556x45_B_SAW", "hlc_50Rnd_792x57_M_MG42", "hlc_100Rnd_762x51_T_M60E4", "100Rnd_65x39_caseless_mag", "hlc_50Rnd_792x57_T_MG42", "150Rnd_93x64_Mag", "hlc_50Rnd_792x57_B_MG42", "hlc_200Rnd_792x57_M_MG42", "Exile_Magazine_45Rnd_545x39_RPK_Green", "hlc_50rnd_762x51_M_FAL", "200Rnd_556x45_Box_Tracer_F", "150Rnd_762x54_Box", "hlc_250Rnd_762x51_Barrier_MG3", "hlc_100Rnd_762x51_T_M60E4", "150Rnd_93x64_Mag", "hlc_100Rnd_762x51_Barrier_M60E4", "hlc_50Rnd_762x51_B_M14", "hlc_200rnd_556x45_M_SAW", "hlc_100Rnd_762x51_M_M60E4", "hlc_50Rnd_792x57_T_MG42", "hlc_50Rnd_762x51_T_MG3", "hlc_50rnd_762x51_MDIM_G3", "Exile_Magazine_75Rnd_545x39_RPK_Green", "hlc_250Rnd_762x51_T_MG3", "hlc_100Rnd_792x57_B_MG42", "hlc_100Rnd_792x57_AP_MG42", "hlc_200rnd_556x45_M_SAW", "130Rnd_338_Mag", "150Rnd_93x64_Mag", "hlc_100Rnd_792x57_AP_MG42", "hlc_50Rnd_762x51_T_MG3", "hlc_50rnd_762x51_M_G3", "hlc_75Rnd_762x39_m_rpk", "hlc_50Rnd_45ACP_T_1921", "hlc_50rnd_762x51_M_G3", "hlc_100Rnd_792x57_B_MG42", "hlc_250Rnd_762x51_T_MG3", "hlc_100Rnd_762x51_Mdim_M60E4", "hlc_100Rnd_792x57_T_MG42", "hlc_200rnd_556x45_Mdim_SAW", "hlc_50Rnd_792x57_B_MG42", "hlc_50Rnd_45ACP_T_1921", "hlc_250Rnd_762x51_B_MG3", "hlc_200Rnd_792x57_T_MG42", "hlc_100Rnd_792x57_M_MG42", "hlc_100Rnd_762x51_B_M60E4", "hlc_200rnd_556x45_B_SAW", "hlc_50rnd_556x45_EPR", "hlc_200Rnd_792x57_B_MG42", "hlc_250Rnd_762x51_Barrier_MG3", "150Rnd_762x54_Box_Tracer", "hlc_50Rnd_762x51_M_MG3", "hlc_50Rnd_45ACP_B_1921", "hlc_50Rnd_762x51_Barrier_MG3", "hlc_100rnd_556x45_EPR_G36", "200Rnd_556x45_Box_Red_F", "hlc_50Rnd_45ACP_B_1921"};

		/*
			Percental Item Spawn Chances of Snipers:

			srifle_DMR_01_F                = 0.60%
			srifle_EBR_F                   = 0.60%
			srifle_GM6_F                   = 0.60%
			srifle_LRR_F                   = 0.60%
			srifle_LRR_tna_F               = 0.60%
			srifle_GM6_ghex_F              = 0.60%
			srifle_DMR_07_blk_F            = 0.60%
			srifle_DMR_07_hex_F            = 0.60%
			srifle_DMR_07_ghex_F           = 0.60%
			Exile_Weapon_m107              = 0.60%
			Exile_Weapon_ksvk              = 0.60%
			hlc_rifle_awMagnum_BL_ghillie  = 1.80%
			hlc_rifle_awMagnum_FDE_ghillie = 1.80%
			hlc_rifle_awMagnum_OD_ghillie  = 1.80%
			hlc_rifle_awcovert             = 1.80%
			hlc_rifle_awcovert_BL          = 1.80%
			hlc_rifle_awcovert_FDE         = 1.80%
			hlc_rifle_awmagnum             = 1.80%
			hlc_rifle_awmagnum_BL          = 1.80%
			hlc_rifle_awmagnum_FDE         = 1.80%
			hlc_rifle_FAL5000              = 1.80%
			hlc_rifle_FAL5000Rail          = 2.99%
			hlc_rifle_FAL5061              = 2.99%
			hlc_rifle_FAL5061Rail          = 2.99%
			hlc_rifle_LAR                  = 2.99%
			hlc_rifle_SLR                  = 2.99%
			hlc_rifle_SLRchopmod           = 2.99%
			hlc_rifle_STG58F               = 2.99%
			hlc_rifle_c1A1                 = 2.99%
			hlc_rifle_falosw               = 2.99%
			hlc_rifle_l1a1slr              = 2.99%
			hlc_rifle_osw_GL               = 2.99%
			hlc_rifle_STGW57               = 2.99%
			hlc_rifle_amt                  = 2.99%
			hlc_rifle_sig5104              = 2.99%
			hlc_rifle_stgw57_RIS           = 2.99%
			hlc_rifle_stgw57_commando      = 2.99%
			hlc_lmg_MG3KWS_b               = 2.99%
			hlc_lmg_MG3KWS_g               = 2.99%
			hlc_lmg_MG42                   = 2.99%
			hlc_lmg_MG42KWS_t              = 2.99%
			hlc_lmg_mg42kws_b              = 2.99%
			hlc_lmg_mg42kws_g              = 1.80%
			hlc_rifle_FAL5000_RH           = 1.80%
			hlc_rifle_M1903A1              = 1.80%
			hlc_rifle_M1903A1OMR           = 1.80%
			hlc_rifle_M1903A1_unertl       = 1.80%
			hlc_rifle_bcmblackjack         = 1.80%
			hlc_rifle_g3a3vris             = 1.80%
		*/
		Snipers[] = {"hlc_lmg_MG42", "hlc_rifle_awmagnum", "hlc_rifle_FAL5000", "srifle_GM6_ghex_F", "hlc_rifle_osw_GL", "hlc_rifle_l1a1slr", "hlc_rifle_FAL5061Rail", "hlc_rifle_amt", "hlc_rifle_osw_GL", "hlc_rifle_LAR", "hlc_lmg_MG42KWS_t", "hlc_lmg_mg42kws_b", "hlc_rifle_stgw57_RIS", "hlc_rifle_STGW57", "hlc_rifle_awMagnum_BL_ghillie", "hlc_lmg_mg42kws_b", "hlc_rifle_FAL5000Rail", "hlc_rifle_FAL5061Rail", "hlc_rifle_awMagnum_BL_ghillie", "hlc_rifle_LAR", "hlc_lmg_MG3KWS_g", "hlc_rifle_stgw57_commando", "hlc_rifle_awmagnum_FDE", "srifle_LRR_tna_F", "hlc_rifle_M1903A1_unertl", "hlc_rifle_STGW57", "hlc_rifle_falosw", "hlc_rifle_c1A1", "hlc_rifle_stgw57_commando", "hlc_rifle_FAL5061", "hlc_lmg_MG42KWS_t", "hlc_rifle_stgw57_RIS", "hlc_rifle_FAL5000", "hlc_rifle_sig5104", "hlc_rifle_osw_GL", "hlc_lmg_mg42kws_b", "hlc_rifle_M1903A1_unertl", "hlc_rifle_M1903A1OMR", "hlc_rifle_FAL5000_RH", "hlc_rifle_sig5104", "hlc_rifle_awMagnum_BL_ghillie", "hlc_rifle_FAL5061", "hlc_rifle_M1903A1_unertl", "hlc_rifle_g3a3vris", "hlc_rifle_FAL5000_RH", "hlc_rifle_l1a1slr", "hlc_rifle_awmagnum_BL", "srifle_DMR_07_ghex_F", "hlc_rifle_amt", "hlc_lmg_MG3KWS_g", "hlc_lmg_MG3KWS_b", "hlc_rifle_falosw", "hlc_rifle_l1a1slr", "hlc_rifle_bcmblackjack", "hlc_lmg_MG42KWS_t", "hlc_lmg_mg42kws_g", "hlc_rifle_FAL5000Rail", "srifle_DMR_07_hex_F", "hlc_lmg_mg42kws_b", "hlc_rifle_LAR", "hlc_lmg_MG42", "hlc_rifle_FAL5061", "hlc_rifle_SLRchopmod", "hlc_rifle_awcovert_BL", "hlc_rifle_M1903A1OMR", "hlc_rifle_awmagnum_FDE", "hlc_rifle_awMagnum_FDE_ghillie", "hlc_rifle_FAL5000Rail", "hlc_rifle_FAL5061", "hlc_rifle_bcmblackjack", "hlc_rifle_STG58F", "hlc_rifle_osw_GL", "hlc_rifle_STGW57", "hlc_lmg_MG3KWS_b", "hlc_rifle_sig5104", "hlc_rifle_M1903A1", "hlc_rifle_g3a3vris", "hlc_lmg_mg42kws_b", "hlc_lmg_MG42", "hlc_lmg_MG42KWS_t", "hlc_rifle_SLR", "hlc_rifle_FAL5000Rail", "hlc_rifle_awmagnum_FDE", "hlc_rifle_awcovert", "hlc_rifle_STG58F", "hlc_lmg_MG42KWS_t", "hlc_rifle_stgw57_commando", "hlc_rifle_awMagnum_OD_ghillie", "hlc_rifle_falosw", "Exile_Weapon_ksvk", "hlc_rifle_STGW57", "hlc_lmg_mg42kws_g", "hlc_rifle_c1A1", "hlc_lmg_mg42kws_g", "hlc_rifle_sig5104", "hlc_lmg_MG3KWS_g", "srifle_DMR_01_F", "hlc_rifle_awcovert", "hlc_rifle_g3a3vris", "hlc_rifle_SLR", "hlc_rifle_awmagnum", "hlc_lmg_MG3KWS_b", "hlc_rifle_M1903A1OMR", "hlc_rifle_falosw", "hlc_rifle_awMagnum_OD_ghillie", "hlc_rifle_awmagnum", "hlc_rifle_FAL5061Rail", "hlc_rifle_STG58F", "hlc_rifle_FAL5000_RH", "hlc_rifle_FAL5000Rail", "hlc_rifle_stgw57_commando", "hlc_rifle_falosw", "hlc_rifle_STG58F", "hlc_rifle_awMagnum_FDE_ghillie", "hlc_rifle_stgw57_RIS", "hlc_rifle_awcovert_FDE", "hlc_rifle_l1a1slr", "hlc_rifle_osw_GL", "hlc_rifle_SLRchopmod", "hlc_rifle_amt", "hlc_rifle_awcovert", "hlc_rifle_SLR", "hlc_rifle_awMagnum_OD_ghillie", "hlc_rifle_FAL5061Rail", "srifle_GM6_F", "hlc_rifle_amt", "hlc_rifle_FAL5061Rail", "hlc_rifle_stgw57_commando", "hlc_rifle_l1a1slr", "hlc_rifle_M1903A1", "hlc_rifle_awcovert_FDE", "hlc_rifle_awcovert_BL", "hlc_rifle_stgw57_RIS", "hlc_lmg_MG42", "hlc_rifle_SLRchopmod", "hlc_lmg_MG42", "hlc_rifle_amt", "hlc_rifle_awcovert_FDE", "srifle_DMR_07_blk_F", "hlc_rifle_SLR", "hlc_lmg_MG3KWS_g", "hlc_rifle_LAR", "hlc_rifle_sig5104", "Exile_Weapon_m107", "hlc_rifle_c1A1", "srifle_LRR_F", "hlc_rifle_FAL5061", "hlc_rifle_FAL5000", "hlc_rifle_awcovert_BL", "hlc_rifle_M1903A1", "hlc_rifle_bcmblackjack", "hlc_rifle_awmagnum_BL", "hlc_rifle_SLR", "hlc_rifle_SLRchopmod", "hlc_rifle_STGW57", "hlc_lmg_MG3KWS_b", "hlc_rifle_c1A1", "hlc_rifle_STG58F", "srifle_EBR_F", "hlc_rifle_awmagnum_BL", "hlc_lmg_MG3KWS_b", "hlc_rifle_SLRchopmod", "hlc_rifle_awMagnum_FDE_ghillie", "hlc_rifle_stgw57_RIS", "hlc_rifle_c1A1", "hlc_rifle_LAR", "hlc_lmg_MG3KWS_g"};

		/*
			Percental Item Spawn Chances of SniperAmmo:

			Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag      = 3.21%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag = 3.21%
			Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag      = 1.28%
			Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag           = 1.28%
			Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag      = 1.92%
			Exile_Magazine_7Rnd_408_Bullet_Cam_Mag               = 1.92%
			Exile_Magazine_10Rnd_338_Bullet_Cam_Mag              = 3.21%
			Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag     = 3.21%
			Exile_Magazine_5Rnd_127x108_APDS_KSVK                = 5.13%
			5Rnd_127x108_APDS_Mag                                = 5.13%
			5Rnd_127x108_Mag                                     = 3.21%
			Exile_Magazine_10Rnd_127x99_m107                     = 3.21%
			Exile_Magazine_5Rnd_127x108_KSVK                     = 3.21%
			7Rnd_408_Mag                                         = 3.21%
			10Rnd_762x54_Mag                                     = 10.90%
			20Rnd_762x51_Mag                                     = 12.18%
			20Rnd_650x39_Cased_Mag_F                             = 16.03%
			hlc_5rnd_3006_1903                                   = 1.92%
			hlc_5rnd_300WM_AP_AWM                                = 3.21%
			hlc_5rnd_300WM_BTSP_AWM                              = 3.21%
			hlc_5rnd_300WM_FMJ_AWM                               = 1.92%
			hlc_5rnd_300WM_SBT_AWM                               = 3.21%
			hlc_5rnd_300WM_T_AWM                                 = 3.21%
			hlc_5rnd_300WM_mk248_AWM                             = 1.92%
		*/
		SniperAmmo[] = {"5Rnd_127x108_Mag", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "5Rnd_127x108_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "hlc_5rnd_300WM_FMJ_AWM", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "hlc_5rnd_300WM_T_AWM", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_127x99_m107", "hlc_5rnd_300WM_AP_AWM", "10Rnd_762x54_Mag", "7Rnd_408_Mag", "hlc_5rnd_300WM_T_AWM", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "10Rnd_762x54_Mag", "hlc_5rnd_300WM_BTSP_AWM", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "hlc_5rnd_300WM_mk248_AWM", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "hlc_5rnd_300WM_AP_AWM", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "Exile_Magazine_10Rnd_127x99_m107", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_APDS_Mag", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "hlc_5rnd_300WM_T_AWM", "hlc_5rnd_300WM_SBT_AWM", "7Rnd_408_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "hlc_5rnd_300WM_SBT_AWM", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "hlc_5rnd_300WM_AP_AWM", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "hlc_5rnd_300WM_T_AWM", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "20Rnd_762x51_Mag", "10Rnd_762x54_Mag", "10Rnd_762x54_Mag", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "hlc_5rnd_300WM_AP_AWM", "hlc_5rnd_3006_1903", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "hlc_5rnd_300WM_AP_AWM", "20Rnd_650x39_Cased_Mag_F", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "7Rnd_408_Mag", "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "10Rnd_762x54_Mag", "hlc_5rnd_300WM_BTSP_AWM", "20Rnd_762x51_Mag", "Exile_Magazine_5Rnd_127x108_KSVK_Bullet_Cam_Mag", "5Rnd_127x108_Mag", "hlc_5rnd_300WM_mk248_AWM", "10Rnd_762x54_Mag", "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_762x51_Mag", "5Rnd_127x108_APDS_Mag", "20Rnd_650x39_Cased_Mag_F", "hlc_5rnd_300WM_FMJ_AWM", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "5Rnd_127x108_APDS_Mag", "Exile_Magazine_5Rnd_127x108_KSVK", "hlc_5rnd_300WM_BTSP_AWM", "Exile_Magazine_10Rnd_127x99_m107", "10Rnd_762x54_Mag", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "hlc_5rnd_300WM_FMJ_AWM", "7Rnd_408_Mag", "20Rnd_762x51_Mag", "hlc_5rnd_300WM_mk248_AWM", "hlc_5rnd_300WM_SBT_AWM", "hlc_5rnd_3006_1903", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "hlc_5rnd_300WM_SBT_AWM", "20Rnd_650x39_Cased_Mag_F", "5Rnd_127x108_APDS_Mag", "hlc_5rnd_300WM_T_AWM", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", "Exile_Magazine_5Rnd_127x108_APDS_KSVK_Bullet_Cam_Mag", "Exile_Magazine_10Rnd_127x99_m107_Bullet_Cam_Mag", "hlc_5rnd_3006_1903", "hlc_5rnd_300WM_BTSP_AWM", "hlc_5rnd_300WM_BTSP_AWM", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_KSVK", "hlc_5rnd_300WM_SBT_AWM", "20Rnd_762x51_Mag", "20Rnd_650x39_Cased_Mag_F", "20Rnd_650x39_Cased_Mag_F", "Exile_Magazine_5Rnd_127x108_APDS_KSVK", "5Rnd_127x108_Mag"};

		/*
			Percental Item Spawn Chances of SniperAttachments:

			muzzle_snds_B_khk_F = 11.11%
			muzzle_snds_B_snd_F = 11.11%
			muzzle_snds_B       = 11.11%
			optic_LRPS          = 11.11%
			optic_LRPS_ghex_F   = 11.11%
			optic_LRPS_tna_F    = 11.11%
			optic_SOS           = 11.11%
			optic_SOS_khk_F     = 11.11%
			optic_DMS           = 11.11%
		*/
		SniperAttachments[] = {"optic_LRPS_ghex_F", "muzzle_snds_B", "optic_DMS", "muzzle_snds_B", "optic_LRPS_ghex_F", "optic_DMS", "optic_LRPS_tna_F", "muzzle_snds_B_khk_F", "optic_DMS", "optic_SOS_khk_F", "muzzle_snds_B_snd_F", "optic_LRPS", "muzzle_snds_B", "optic_LRPS_tna_F", "muzzle_snds_B_khk_F", "muzzle_snds_B_snd_F", "muzzle_snds_B_snd_F", "optic_DMS", "optic_LRPS_ghex_F", "optic_LRPS", "optic_LRPS", "optic_LRPS_ghex_F", "optic_DMS", "optic_SOS", "muzzle_snds_B_khk_F", "muzzle_snds_B_snd_F", "optic_LRPS_ghex_F", "muzzle_snds_B_khk_F", "optic_LRPS_tna_F", "optic_LRPS", "optic_SOS_khk_F", "optic_SOS", "optic_LRPS", "optic_LRPS_tna_F", "muzzle_snds_B", "optic_SOS_khk_F", "muzzle_snds_B_snd_F", "optic_SOS", "optic_SOS_khk_F", "optic_SOS_khk_F", "optic_LRPS_tna_F", "muzzle_snds_B", "optic_SOS", "muzzle_snds_B_khk_F", "optic_SOS"};

		/*
			Percental Item Spawn Chances of DLCRifles:

			srifle_DMR_03_F          = 4.05%
			srifle_DMR_03_khaki_F    = 4.05%
			srifle_DMR_03_tan_F      = 4.05%
			srifle_DMR_03_woodland_F = 4.05%
			srifle_DMR_06_camo_F     = 4.05%
			srifle_DMR_06_olive_F    = 4.05%
			srifle_DMR_02_camo_F     = 8.11%
			srifle_DMR_02_F          = 8.11%
			srifle_DMR_02_sniper_F   = 8.11%
			srifle_DMR_04_F          = 9.46%
			srifle_DMR_04_Tan_F      = 9.46%
			srifle_DMR_05_blk_F      = 10.81%
			srifle_DMR_05_hex_F      = 10.81%
			srifle_DMR_05_tan_F      = 10.81%
		*/
		DLCRifles[] = {"srifle_DMR_02_F", "srifle_DMR_05_blk_F", "srifle_DMR_03_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_hex_F", "srifle_DMR_06_olive_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_04_F", "srifle_DMR_05_hex_F", "srifle_DMR_05_tan_F", "srifle_DMR_04_F", "srifle_DMR_02_F", "srifle_DMR_02_sniper_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_tan_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_khaki_F", "srifle_DMR_03_tan_F", "srifle_DMR_03_F", "srifle_DMR_04_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_F", "srifle_DMR_04_Tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_03_tan_F", "srifle_DMR_02_camo_F", "srifle_DMR_02_camo_F", "srifle_DMR_02_F", "srifle_DMR_06_camo_F", "srifle_DMR_05_blk_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "srifle_DMR_06_olive_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_Tan_F", "srifle_DMR_03_khaki_F", "srifle_DMR_04_F", "srifle_DMR_05_tan_F", "srifle_DMR_02_F", "srifle_DMR_02_camo_F", "srifle_DMR_03_woodland_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_camo_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_tan_F", "srifle_DMR_03_woodland_F", "srifle_DMR_06_camo_F", "srifle_DMR_02_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_hex_F", "srifle_DMR_04_Tan_F", "srifle_DMR_04_Tan_F", "srifle_DMR_05_blk_F", "srifle_DMR_02_sniper_F", "srifle_DMR_05_blk_F", "srifle_DMR_05_hex_F", "srifle_DMR_02_sniper_F"};

		/*
			Percental Item Spawn Chances of DLCAmmo:

			10Rnd_127x54_Mag       = 20.00%
			20Rnd_762x51_Mag       = 20.00%
			10Rnd_338_Mag          = 30.00%
			10Rnd_93x64_DMR_05_Mag = 30.00%
		*/
		DLCAmmo[] = {"10Rnd_93x64_DMR_05_Mag", "10Rnd_93x64_DMR_05_Mag", "10Rnd_338_Mag", "10Rnd_338_Mag", "10Rnd_127x54_Mag", "10Rnd_338_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "10Rnd_127x54_Mag", "10Rnd_93x64_DMR_05_Mag"};

		/*
			Percental Item Spawn Chances of DLCOptics:

			optic_AMS     = 14.29%
			optic_AMS_khk = 14.29%
			optic_AMS_snd = 14.29%
			optic_KHS_blk = 14.29%
			optic_KHS_hex = 14.29%
			optic_KHS_old = 14.29%
			optic_KHS_tan = 14.29%
		*/
		DLCOptics[] = {"optic_KHS_hex", "optic_KHS_blk", "optic_AMS", "optic_AMS_khk", "optic_AMS_snd", "optic_KHS_old", "optic_KHS_tan"};

		/*
			Percental Item Spawn Chances of DLCSupressor:

			muzzle_snds_338_black = 16.67%
			muzzle_snds_338_green = 16.67%
			muzzle_snds_338_sand  = 16.67%
			muzzle_snds_93mmg     = 16.67%
			muzzle_snds_93mmg_tan = 16.67%
			muzzle_snds_B         = 16.67%
		*/
		DLCSupressor[] = {"muzzle_snds_B", "muzzle_snds_338_green", "muzzle_snds_338_sand", "muzzle_snds_93mmg_tan", "muzzle_snds_338_black", "muzzle_snds_93mmg"};

		/*
			Percental Item Spawn Chances of EpicWeapons:

			MMG_01_hex_F   = 20.00%
			MMG_01_tan_F   = 20.00%
			MMG_02_black_F = 20.00%
			MMG_02_camo_F  = 20.00%
			MMG_02_sand_F  = 20.00%
		*/
		EpicWeapons[] = {"MMG_01_hex_F", "MMG_02_camo_F", "MMG_02_sand_F", "MMG_01_tan_F", "MMG_02_black_F"};

		/*
			Percental Item Spawn Chances of Bipods:

			bipod_03_F_oli = 11.11%
			bipod_03_F_blk = 11.11%
			bipod_02_F_tan = 11.11%
			bipod_02_F_hex = 11.11%
			bipod_02_F_blk = 11.11%
			bipod_01_F_snd = 11.11%
			bipod_01_F_mtp = 11.11%
			bipod_01_F_blk = 11.11%
			bipod_01_F_khk = 11.11%
		*/
		Bipods[] = {"bipod_02_F_hex", "bipod_01_F_khk", "bipod_03_F_blk", "bipod_03_F_oli", "bipod_02_F_blk", "bipod_02_F_tan", "bipod_01_F_mtp", "bipod_01_F_snd", "bipod_01_F_blk"};

		/*
			Percental Item Spawn Chances of HEGrenades:

			3Rnd_HE_Grenade_shell = 25.00%
			1Rnd_HE_Grenade_shell = 75.00%
		*/
		HEGrenades[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "3Rnd_HE_Grenade_shell"};

		/*
			Percental Item Spawn Chances of UGLFlares:

			3Rnd_UGL_FlareGreen_F  = 6.25%
			3Rnd_UGL_FlareRed_F    = 6.25%
			3Rnd_UGL_FlareWhite_F  = 6.25%
			3Rnd_UGL_FlareYellow_F = 6.25%
			UGL_FlareGreen_F       = 18.75%
			UGL_FlareRed_F         = 18.75%
			UGL_FlareWhite_F       = 18.75%
			UGL_FlareYellow_F      = 18.75%
		*/
		UGLFlares[] = {"UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareYellow_F", "UGL_FlareGreen_F", "3Rnd_UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "UGL_FlareRed_F", "3Rnd_UGL_FlareWhite_F", "UGL_FlareWhite_F", "UGL_FlareYellow_F", "3Rnd_UGL_FlareGreen_F", "UGL_FlareGreen_F", "UGL_FlareYellow_F", "3Rnd_UGL_FlareYellow_F", "UGL_FlareGreen_F"};

		/*
			Percental Item Spawn Chances of UGLSmokes:

			3Rnd_Smoke_Grenade_shell       = 3.57%
			3Rnd_SmokeBlue_Grenade_shell   = 3.57%
			3Rnd_SmokeGreen_Grenade_shell  = 3.57%
			3Rnd_SmokeOrange_Grenade_shell = 3.57%
			3Rnd_SmokePurple_Grenade_shell = 3.57%
			3Rnd_SmokeRed_Grenade_shell    = 3.57%
			3Rnd_SmokeYellow_Grenade_shell = 3.57%
			1Rnd_Smoke_Grenade_shell       = 10.71%
			1Rnd_SmokeBlue_Grenade_shell   = 10.71%
			1Rnd_SmokeGreen_Grenade_shell  = 10.71%
			1Rnd_SmokeOrange_Grenade_shell = 10.71%
			1Rnd_SmokePurple_Grenade_shell = 10.71%
			1Rnd_SmokeRed_Grenade_shell    = 10.71%
			1Rnd_SmokeYellow_Grenade_shell = 10.71%
		*/
		UGLSmokes[] = {"1Rnd_SmokeRed_Grenade_shell", "3Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "3Rnd_SmokePurple_Grenade_shell", "3Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeOrange_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokePurple_Grenade_shell", "1Rnd_SmokeGreen_Grenade_shell", "1Rnd_SmokeRed_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell", "1Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeYellow_Grenade_shell", "3Rnd_SmokeGreen_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "3Rnd_SmokeBlue_Grenade_shell"};

		/*
			Percental Item Spawn Chances of HandGrenades:

			HandGrenade = 50.00%
			MiniGrenade = 50.00%
		*/
		HandGrenades[] = {"HandGrenade", "MiniGrenade"};

		/*
			Percental Item Spawn Chances of Explosives:

			SatchelCharge_Remote_Mag    = 5.26%
			APERSBoundingMine_Range_Mag = 15.79%
			APERSMine_Range_Mag         = 15.79%
			APERSTripMine_Wire_Mag      = 15.79%
			DemoCharge_Remote_Mag       = 15.79%
			IEDLandSmall_Remote_Mag     = 15.79%
			IEDUrbanSmall_Remote_Mag    = 15.79%
		*/
		Explosives[] = {"SatchelCharge_Remote_Mag", "DemoCharge_Remote_Mag", "APERSMine_Range_Mag", "DemoCharge_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSBoundingMine_Range_Mag", "IEDUrbanSmall_Remote_Mag", "DemoCharge_Remote_Mag", "IEDUrbanSmall_Remote_Mag", "IEDLandSmall_Remote_Mag", "APERSMine_Range_Mag", "IEDLandSmall_Remote_Mag", "APERSBoundingMine_Range_Mag", "APERSTripMine_Wire_Mag", "IEDLandSmall_Remote_Mag", "APERSTripMine_Wire_Mag", "APERSMine_Range_Mag", "IEDUrbanSmall_Remote_Mag", "APERSTripMine_Wire_Mag"};

		/*
			Percental Item Spawn Chances of CivilianItems:

			Exile_Item_MobilePhone = 2.78%
			Binocular              = 11.11%
			ItemGPS                = 11.11%
			ItemRadio              = 16.67%
			ItemWatch              = 16.67%
			ItemMap                = 19.44%
			Exile_Item_Heatpack    = 22.22%
		*/
		CivilianItems[] = {"Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Heatpack", "ItemMap", "ItemGPS", "ItemWatch", "ItemWatch", "Binocular", "Exile_Item_Heatpack", "ItemWatch", "ItemWatch", "Exile_Item_Heatpack", "ItemRadio", "ItemRadio", "Exile_Item_Heatpack", "ItemRadio", "ItemRadio", "ItemMap", "Exile_Item_MobilePhone", "ItemMap", "ItemRadio", "ItemMap", "Binocular", "Binocular", "ItemGPS", "ItemGPS", "ItemMap", "ItemMap", "ItemGPS", "ItemRadio", "ItemMap", "Exile_Item_Heatpack", "Binocular", "ItemWatch", "ItemWatch", "Exile_Item_Heatpack"};

		/*
			Percental Item Spawn Chances of CivilianClothing:

			U_NikosAgedBody          = 0.58%
			U_NikosBody              = 0.58%
			U_OrestesBody            = 0.58%
			U_C_Man_casual_1_F       = 2.92%
			U_C_Man_casual_2_F       = 2.92%
			U_C_Man_casual_3_F       = 2.92%
			U_C_Man_casual_4_F       = 2.92%
			U_C_Man_casual_5_F       = 2.92%
			U_C_Man_casual_6_F       = 2.92%
			U_C_man_sport_1_F        = 2.92%
			U_C_man_sport_2_F        = 2.92%
			U_C_man_sport_3_F        = 2.92%
			U_I_C_Soldier_Bandit_1_F = 2.92%
			U_I_C_Soldier_Bandit_2_F = 2.92%
			U_I_C_Soldier_Bandit_3_F = 2.92%
			U_I_C_Soldier_Bandit_4_F = 2.92%
			U_I_C_Soldier_Bandit_5_F = 2.92%
			U_C_Poloshirt_blue       = 4.09%
			U_C_Poloshirt_burgundy   = 4.09%
			U_C_Poloshirt_salmon     = 4.09%
			U_C_Poloshirt_stripped   = 4.09%
			U_C_Poloshirt_tricolour  = 4.09%
			U_C_HunterBody_grn       = 5.26%
			U_C_Journalist           = 5.26%
			U_C_Poor_1               = 5.26%
			U_C_Poor_2               = 5.26%
			U_C_Poor_shorts_1        = 5.26%
			U_C_Scientist            = 5.26%
			U_Rangemaster            = 5.26%
		*/
		CivilianClothing[] = {"U_C_Journalist", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_Man_casual_1_F", "U_Rangemaster", "U_C_HunterBody_grn", "U_C_Poor_2", "U_C_Poor_2", "U_C_Man_casual_4_F", "U_C_Poor_2", "U_C_Scientist", "U_C_Poor_shorts_1", "U_C_Poloshirt_burgundy", "U_C_Poloshirt_burgundy", "U_C_man_sport_1_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Man_casual_4_F", "U_C_Poloshirt_blue", "U_C_Poor_2", "U_C_HunterBody_grn", "U_I_C_Soldier_Bandit_2_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Poor_shorts_1", "U_C_Poor_1", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_stripped", "U_C_man_sport_1_F", "U_C_Man_casual_2_F", "U_C_Poor_shorts_1", "U_I_C_Soldier_Bandit_1_F", "U_C_Poor_2", "U_C_Man_casual_3_F", "U_C_Poloshirt_salmon", "U_NikosBody", "U_C_Poor_2", "U_NikosAgedBody", "U_C_Poor_1", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_4_F", "U_C_HunterBody_grn", "U_C_Poor_1", "U_C_Man_casual_3_F", "U_C_Man_casual_6_F", "U_C_Poloshirt_burgundy", "U_Rangemaster", "U_C_Poloshirt_tricolour", "U_Rangemaster", "U_C_Man_casual_5_F", "U_C_HunterBody_grn", "U_C_man_sport_3_F", "U_C_Journalist", "U_C_Poor_1", "U_C_Poor_1", "U_C_Poloshirt_stripped", "U_C_Man_casual_2_F", "U_C_Man_casual_1_F", "U_I_C_Soldier_Bandit_4_F", "U_C_man_sport_3_F", "U_I_C_Soldier_Bandit_5_F", "U_OrestesBody", "U_C_Poloshirt_tricolour", "U_C_Scientist", "U_I_C_Soldier_Bandit_2_F", "U_Rangemaster", "U_Rangemaster", "U_C_Poloshirt_stripped", "U_C_Poor_shorts_1", "U_C_Scientist", "U_C_Journalist", "U_C_Man_casual_3_F", "U_Rangemaster", "U_C_man_sport_2_F", "U_I_C_Soldier_Bandit_1_F", "U_C_Poloshirt_blue", "U_C_man_sport_2_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_salmon", "U_C_Poloshirt_stripped", "U_I_C_Soldier_Bandit_1_F", "U_I_C_Soldier_Bandit_2_F", "U_C_Man_casual_3_F", "U_C_Poloshirt_tricolour", "U_C_HunterBody_grn", "U_C_Man_casual_2_F", "U_Rangemaster", "U_C_Man_casual_1_F", "U_C_Poor_1", "U_I_C_Soldier_Bandit_4_F", "U_C_Poloshirt_stripped", "U_I_C_Soldier_Bandit_3_F", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_tricolour", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_6_F", "U_Rangemaster", "U_C_Journalist", "U_C_Poor_2", "U_C_Journalist", "U_C_Poloshirt_salmon", "U_C_Poloshirt_salmon", "U_I_C_Soldier_Bandit_2_F", "U_C_Poor_2", "U_I_C_Soldier_Bandit_5_F", "U_C_Scientist", "U_C_Man_casual_2_F", "U_C_Man_casual_1_F", "U_C_Poloshirt_burgundy", "U_C_Man_casual_1_F", "U_C_Poloshirt_blue", "U_C_Poloshirt_salmon", "U_C_Poloshirt_burgundy", "U_C_HunterBody_grn", "U_C_Poloshirt_stripped", "U_C_Man_casual_4_F", "U_C_man_sport_2_F", "U_C_Poloshirt_burgundy", "U_C_Man_casual_4_F", "U_C_Journalist", "U_Rangemaster", "U_C_man_sport_3_F", "U_C_Man_casual_6_F", "U_C_Poor_shorts_1", "U_C_Man_casual_5_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_3_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Bandit_4_F", "U_I_C_Soldier_Bandit_2_F", "U_C_man_sport_1_F", "U_C_Man_casual_4_F", "U_C_Scientist", "U_C_Poloshirt_blue", "U_I_C_Soldier_Bandit_5_F", "U_C_Poor_2", "U_C_Poloshirt_blue", "U_C_HunterBody_grn", "U_C_man_sport_1_F", "U_C_Poloshirt_stripped", "U_C_man_sport_1_F", "U_C_Scientist", "U_C_Man_casual_5_F", "U_C_Man_casual_3_F", "U_C_Poor_shorts_1", "U_C_man_sport_3_F", "U_C_Poloshirt_tricolour", "U_C_Poloshirt_salmon", "U_C_Poor_shorts_1", "U_C_Journalist", "U_C_Poor_shorts_1", "U_C_HunterBody_grn", "U_C_Poor_1", "U_C_Man_casual_6_F", "U_C_Scientist", "U_I_C_Soldier_Bandit_5_F", "U_I_C_Soldier_Bandit_3_F", "U_C_Man_casual_5_F", "U_C_Poloshirt_blue", "U_C_Poloshirt_blue", "U_C_Poor_1", "U_C_man_sport_3_F", "U_C_man_sport_2_F", "U_C_man_sport_2_F", "U_C_Poor_1", "U_C_HunterBody_grn", "U_C_Man_casual_2_F", "U_C_Journalist", "U_C_Poloshirt_burgundy", "U_I_C_Soldier_Bandit_4_F", "U_C_Man_casual_6_F", "U_C_Poloshirt_salmon"};

		/*
			Percental Item Spawn Chances of CivilianBackpacks:

			B_Kitbag_cbr        = 6.67%
			B_Kitbag_mcamo      = 6.67%
			B_Kitbag_sgg        = 6.67%
			B_AssaultPack_blk   = 6.67%
			B_AssaultPack_cbr   = 6.67%
			B_AssaultPack_dgtl  = 6.67%
			B_AssaultPack_khk   = 6.67%
			B_AssaultPack_mcamo = 6.67%
			B_AssaultPack_rgr   = 6.67%
			B_AssaultPack_sgg   = 6.67%
			B_AssaultPack_tna_F = 6.67%
			B_HuntingBackpack   = 6.67%
			B_OutdoorPack_blu   = 6.67%
			B_OutdoorPack_tan   = 6.67%
			B_OutdoorPack_blk   = 6.67%
		*/
		CivilianBackpacks[] = {"B_AssaultPack_sgg", "B_OutdoorPack_blu", "B_HuntingBackpack", "B_OutdoorPack_blk", "B_AssaultPack_blk", "B_AssaultPack_tna_F", "B_AssaultPack_cbr", "B_AssaultPack_rgr", "B_AssaultPack_khk", "B_Kitbag_sgg", "B_OutdoorPack_tan", "B_AssaultPack_mcamo", "B_Kitbag_cbr", "B_Kitbag_mcamo", "B_AssaultPack_dgtl"};

		/*
			Percental Item Spawn Chances of CivilianVests:

			V_Press_F            = 25.00%
			V_TacVest_blk_POLICE = 25.00%
			V_Rangemaster_belt   = 50.00%
		*/
		CivilianVests[] = {"V_Rangemaster_belt", "V_TacVest_blk_POLICE", "V_Rangemaster_belt", "V_Press_F"};

		/*
			Percental Item Spawn Chances of CivilianHeadgear:

			H_Bandanna_surfer  = 5.56%
			H_Beret_blk_POLICE = 5.56%
			H_Cap_blk          = 5.56%
			H_Cap_blk_Raven    = 5.56%
			H_Cap_blu          = 5.56%
			H_Cap_grn          = 5.56%
			H_Cap_headphones   = 5.56%
			H_Cap_oli          = 5.56%
			H_Cap_press        = 5.56%
			H_Cap_red          = 5.56%
			H_Cap_tan          = 5.56%
			H_Hat_blue         = 5.56%
			H_Hat_brown        = 5.56%
			H_Hat_checker      = 5.56%
			H_Hat_grey         = 5.56%
			H_Hat_tan          = 5.56%
			H_StrawHat         = 5.56%
			H_StrawHat_dark    = 5.56%
		*/
		CivilianHeadgear[] = {"H_Beret_blk_POLICE", "H_Hat_brown", "H_Cap_tan", "H_Hat_tan", "H_Cap_press", "H_Cap_headphones", "H_Cap_blk_Raven", "H_Cap_red", "H_Cap_oli", "H_Cap_grn", "H_Hat_checker", "H_Bandanna_surfer", "H_StrawHat_dark", "H_Cap_blu", "H_Hat_grey", "H_StrawHat", "H_Cap_blk", "H_Hat_blue"};

		/*
			Percental Item Spawn Chances of GuerillaItems:

			Rangefinder        = 9.09%
			ItemCompass        = 45.45%
			NVGoggles          = 9.09%
			NVGoggles_tna_F    = 9.09%
			O_NVGoggles_ghex_F = 9.09%
			O_NVGoggles_hex_F  = 9.09%
			O_NVGoggles_urb_F  = 9.09%
		*/
		GuerillaItems[] = {"NVGoggles", "O_NVGoggles_hex_F", "ItemCompass", "Rangefinder", "ItemCompass", "NVGoggles_tna_F", "ItemCompass", "O_NVGoggles_ghex_F", "O_NVGoggles_urb_F", "ItemCompass", "ItemCompass"};

		/*
			Percental Item Spawn Chances of GuerillaClothing:

			U_I_G_resistanceLeader_F = 1.75%
			U_I_C_Soldier_Camo_F     = 5.26%
			U_I_C_Soldier_Para_1_F   = 5.26%
			U_I_C_Soldier_Para_2_F   = 5.26%
			U_I_C_Soldier_Para_3_F   = 5.26%
			U_I_C_Soldier_Para_4_F   = 5.26%
			U_I_C_Soldier_Para_5_F   = 5.26%
			U_IG_leader              = 7.02%
			U_IG_Guerilla3_1         = 8.77%
			U_IG_Guerilla3_2         = 8.77%
			U_IG_Guerilla1_1         = 10.53%
			U_IG_Guerilla2_1         = 10.53%
			U_IG_Guerilla2_2         = 10.53%
			U_IG_Guerilla2_3         = 10.53%
		*/
		GuerillaClothing[] = {"U_IG_Guerilla2_2", "U_IG_Guerilla2_3", "U_IG_Guerilla2_1", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_2_F", "U_I_C_Soldier_Para_5_F", "U_I_C_Soldier_Camo_F", "U_IG_Guerilla2_2", "U_IG_Guerilla1_1", "U_IG_Guerilla3_1", "U_IG_Guerilla2_2", "U_IG_Guerilla3_1", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_4_F", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_3", "U_IG_Guerilla3_2", "U_IG_leader", "U_IG_Guerilla3_2", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_3", "U_IG_Guerilla3_2", "U_IG_Guerilla1_1", "U_IG_Guerilla1_1", "U_I_C_Soldier_Para_2_F", "U_IG_Guerilla2_3", "U_IG_Guerilla2_2", "U_IG_leader", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla3_1", "U_IG_Guerilla1_1", "U_IG_leader", "U_I_C_Soldier_Camo_F", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_2", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla3_1", "U_I_C_Soldier_Para_1_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_3_F", "U_IG_Guerilla2_2", "U_IG_Guerilla1_1", "U_I_G_resistanceLeader_F", "U_I_C_Soldier_Para_4_F", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_5_F", "U_IG_Guerilla3_1", "U_IG_Guerilla2_3", "U_IG_leader", "U_IG_Guerilla3_2", "U_IG_Guerilla2_1", "U_I_C_Soldier_Para_2_F"};

		/*
			Percental Item Spawn Chances of GuerillaBackpacks:

			B_Bergen_blk               = 1.82%
			B_Bergen_mcamo             = 1.82%
			B_Bergen_rgr               = 1.82%
			B_Bergen_sgg               = 1.82%
			B_FieldPack_ghex_F         = 1.82%
			B_ViperHarness_base_F      = 3.64%
			B_ViperHarness_blk_F       = 3.64%
			B_ViperHarness_ghex_F      = 3.64%
			B_ViperHarness_hex_F       = 3.64%
			B_ViperHarness_khk_F       = 3.64%
			B_ViperHarness_oli_F       = 3.64%
			B_ViperLightHarness_base_F = 5.45%
			B_ViperLightHarness_blk_F  = 5.45%
			B_ViperLightHarness_ghex_F = 5.45%
			B_ViperLightHarness_hex_F  = 5.45%
			B_ViperLightHarness_khk_F  = 5.45%
			B_ViperLightHarness_oli_F  = 5.45%
			B_FieldPack_blk            = 9.09%
			B_FieldPack_cbr            = 9.09%
			B_FieldPack_ocamo          = 9.09%
			B_FieldPack_oucamo         = 9.09%
		*/
		GuerillaBackpacks[] = {"B_FieldPack_blk", "B_ViperLightHarness_blk_F", "B_ViperHarness_ghex_F", "B_FieldPack_ocamo", "B_ViperHarness_ghex_F", "B_FieldPack_blk", "B_ViperLightHarness_ghex_F", "B_ViperLightHarness_base_F", "B_ViperLightHarness_khk_F", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_ghex_F", "B_FieldPack_cbr", "B_FieldPack_ocamo", "B_FieldPack_blk", "B_FieldPack_oucamo", "B_ViperHarness_base_F", "B_ViperLightHarness_hex_F", "B_FieldPack_ocamo", "B_FieldPack_oucamo", "B_FieldPack_oucamo", "B_ViperHarness_khk_F", "B_ViperLightHarness_base_F", "B_ViperHarness_khk_F", "B_FieldPack_oucamo", "B_FieldPack_cbr", "B_ViperHarness_oli_F", "B_FieldPack_ocamo", "B_FieldPack_cbr", "B_FieldPack_blk", "B_ViperHarness_blk_F", "B_FieldPack_ghex_F", "B_ViperHarness_base_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_blk_F", "B_FieldPack_blk", "B_ViperLightHarness_ghex_F", "B_ViperHarness_blk_F", "B_ViperLightHarness_khk_F", "B_FieldPack_ocamo", "B_ViperLightHarness_hex_F", "B_ViperLightHarness_base_F", "B_FieldPack_oucamo", "B_ViperHarness_hex_F", "B_ViperHarness_oli_F", "B_Bergen_rgr", "B_ViperLightHarness_khk_F", "B_FieldPack_cbr", "B_Bergen_mcamo", "B_Bergen_blk", "B_ViperLightHarness_oli_F", "B_ViperLightHarness_blk_F", "B_FieldPack_cbr", "B_ViperHarness_hex_F", "B_Bergen_sgg"};

		/*
			Percental Item Spawn Chances of GuerillaVests:

			V_I_G_resistanceLeader_F = 3.23%
			V_BandollierB_blk        = 6.45%
			V_BandollierB_cbr        = 6.45%
			V_BandollierB_khk        = 6.45%
			V_BandollierB_oli        = 6.45%
			V_BandollierB_rgr        = 6.45%
			V_Chestrig_blk           = 6.45%
			V_Chestrig_khk           = 6.45%
			V_Chestrig_oli           = 6.45%
			V_Chestrig_rgr           = 6.45%
			V_HarnessO_brn           = 6.45%
			V_HarnessO_gry           = 6.45%
			V_HarnessOGL_brn         = 6.45%
			V_HarnessOGL_gry         = 6.45%
			V_HarnessOSpec_brn       = 6.45%
			V_HarnessOSpec_gry       = 6.45%
		*/
		GuerillaVests[] = {"V_HarnessO_gry", "V_HarnessOSpec_gry", "V_HarnessOGL_brn", "V_Chestrig_oli", "V_HarnessOSpec_brn", "V_HarnessOGL_brn", "V_HarnessO_gry", "V_BandollierB_khk", "V_HarnessO_brn", "V_I_G_resistanceLeader_F", "V_BandollierB_rgr", "V_HarnessOSpec_brn", "V_Chestrig_rgr", "V_Chestrig_blk", "V_HarnessO_brn", "V_Chestrig_oli", "V_Chestrig_khk", "V_BandollierB_cbr", "V_HarnessOGL_gry", "V_BandollierB_oli", "V_HarnessOGL_gry", "V_BandollierB_blk", "V_HarnessOSpec_gry", "V_BandollierB_rgr", "V_BandollierB_cbr", "V_Chestrig_blk", "V_BandollierB_khk", "V_Chestrig_rgr", "V_BandollierB_oli", "V_BandollierB_blk", "V_Chestrig_khk"};

		/*
			Percental Item Spawn Chances of GuerillaHeadgear:

			H_Beret_02                = 0.82%
			H_Beret_blk               = 0.82%
			H_Beret_brn_SF            = 0.82%
			H_Beret_Colonel           = 0.82%
			H_Beret_grn               = 0.82%
			H_Beret_grn_SF            = 0.82%
			H_Beret_ocamo             = 0.82%
			H_Beret_red               = 0.82%
			H_Booniehat_tna_F         = 1.64%
			H_Cap_blk_Syndikat_F      = 1.64%
			H_Cap_grn_Syndikat_F      = 1.64%
			H_Cap_oli_Syndikat_F      = 1.64%
			H_Cap_tan_Syndikat_F      = 1.64%
			H_FakeHeadgear_Syndikat_F = 1.64%
			H_MilCap_gen_F            = 1.64%
			H_MilCap_ghex_F           = 1.64%
			H_MilCap_tna_F            = 1.64%
			H_Shemag_khk              = 1.64%
			H_Shemag_olive            = 1.64%
			H_Shemag_olive_hs         = 1.64%
			H_Shemag_tan              = 1.64%
			H_ShemagOpen_khk          = 1.64%
			H_ShemagOpen_tan          = 1.64%
			H_TurbanO_blk             = 1.64%
			H_Watchcap_camo           = 1.64%
			H_Watchcap_sgg            = 1.64%
			H_Bandanna_camo           = 2.46%
			H_Bandanna_cbr            = 2.46%
			H_Bandanna_gry            = 2.46%
			H_Bandanna_khk            = 2.46%
			H_Bandanna_khk_hs         = 2.46%
			H_Bandanna_mcamo          = 2.46%
			H_Bandanna_sgg            = 2.46%
			H_BandMask_blk            = 2.46%
			H_Cap_brn_SPECOPS         = 2.46%
			H_Cap_khaki_specops_UK    = 2.46%
			H_Cap_tan_specops_US      = 2.46%
			H_Hat_camo                = 2.46%
			H_Watchcap_blk            = 2.46%
			H_Watchcap_khk            = 2.46%
			Exile_Headgear_GasMask    = 3.28%
			H_Booniehat_dgtl          = 3.28%
			H_Booniehat_dirty         = 3.28%
			H_Booniehat_grn           = 3.28%
			H_Booniehat_indp          = 3.28%
			H_Booniehat_khk           = 3.28%
			H_Booniehat_khk_hs        = 3.28%
			H_Booniehat_mcamo         = 3.28%
			H_Booniehat_tan           = 3.28%
		*/
		GuerillaHeadgear[] = {"H_Bandanna_sgg", "H_Bandanna_gry", "H_Booniehat_tan", "H_ShemagOpen_khk", "H_MilCap_ghex_F", "H_Booniehat_dirty", "H_Bandanna_camo", "H_Shemag_khk", "H_Cap_brn_SPECOPS", "H_Booniehat_tna_F", "H_Booniehat_khk", "H_Bandanna_cbr", "H_Shemag_tan", "H_FakeHeadgear_Syndikat_F", "Exile_Headgear_GasMask", "H_Shemag_olive_hs", "H_Watchcap_khk", "H_Bandanna_sgg", "H_Booniehat_dgtl", "H_Bandanna_gry", "H_Watchcap_blk", "H_Booniehat_grn", "H_Booniehat_tan", "H_Cap_oli_Syndikat_F", "H_Bandanna_mcamo", "H_MilCap_tna_F", "H_Booniehat_mcamo", "H_Booniehat_indp", "H_Shemag_olive", "H_Booniehat_dgtl", "H_Beret_Colonel", "H_Beret_grn_SF", "H_BandMask_blk", "H_Booniehat_dirty", "H_Booniehat_grn", "H_Booniehat_khk_hs", "H_Beret_brn_SF", "H_Watchcap_khk", "H_Cap_tan_specops_US", "H_Watchcap_blk", "H_Beret_grn", "H_Cap_grn_Syndikat_F", "H_Booniehat_grn", "H_BandMask_blk", "H_Watchcap_sgg", "H_TurbanO_blk", "H_Bandanna_khk_hs", "H_Cap_khaki_specops_UK", "H_Bandanna_khk", "H_Cap_grn_Syndikat_F", "H_Booniehat_dgtl", "H_Beret_red", "H_ShemagOpen_tan", "H_MilCap_tna_F", "H_Booniehat_grn", "H_Cap_tan_specops_US", "H_Bandanna_khk", "H_Hat_camo", "H_Booniehat_dirty", "H_Shemag_olive_hs", "Exile_Headgear_GasMask", "H_Shemag_olive", "H_Bandanna_khk_hs", "H_Booniehat_dgtl", "H_MilCap_ghex_F", "H_Cap_tan_specops_US", "H_Shemag_tan", "H_Cap_tan_Syndikat_F", "H_Watchcap_blk", "H_Watchcap_khk", "H_Watchcap_camo", "H_Booniehat_khk_hs", "H_Booniehat_dirty", "H_Bandanna_cbr", "H_Beret_02", "H_Booniehat_tna_F", "H_ShemagOpen_tan", "H_Cap_tan_Syndikat_F", "H_Cap_khaki_specops_UK", "H_Booniehat_indp", "Exile_Headgear_GasMask", "H_Bandanna_camo", "H_Cap_oli_Syndikat_F", "H_Hat_camo", "H_Bandanna_cbr", "H_Booniehat_mcamo", "H_Shemag_khk", "H_Watchcap_sgg", "H_Booniehat_mcamo", "H_ShemagOpen_khk", "H_MilCap_gen_F", "H_Bandanna_mcamo", "H_Bandanna_sgg", "H_Booniehat_khk_hs", "H_Bandanna_khk_hs", "H_Cap_blk_Syndikat_F", "H_TurbanO_blk", "H_Cap_brn_SPECOPS", "H_Bandanna_mcamo", "Exile_Headgear_GasMask", "H_Cap_blk_Syndikat_F", "H_Hat_camo", "H_Bandanna_khk", "H_Booniehat_khk", "H_MilCap_gen_F", "H_Booniehat_indp", "H_BandMask_blk", "H_Booniehat_tan", "H_Booniehat_khk", "H_Booniehat_indp", "H_Bandanna_camo", "H_FakeHeadgear_Syndikat_F", "H_Booniehat_khk", "H_Booniehat_tan", "H_Booniehat_khk_hs", "H_Bandanna_gry", "H_Cap_brn_SPECOPS", "H_Watchcap_camo", "H_Beret_ocamo", "H_Booniehat_mcamo", "H_Beret_blk", "H_Cap_khaki_specops_UK"};

		/*
			Percental Item Spawn Chances of MilitaryClothing:

			U_B_Wetsuit                   = 1.32%
			U_I_OfficerUniform            = 1.32%
			U_I_Wetsuit                   = 1.32%
			U_O_CombatUniform_ocamo       = 1.32%
			U_O_CombatUniform_oucamo      = 1.32%
			U_O_OfficerUniform_ocamo      = 1.32%
			U_O_SpecopsUniform_blk        = 1.32%
			U_O_SpecopsUniform_ocamo      = 1.32%
			U_O_V_Soldier_Viper_F         = 1.32%
			U_O_V_Soldier_Viper_hex_F     = 1.32%
			U_O_Wetsuit                   = 1.32%
			U_B_SpecopsUniform_sgg        = 1.97%
			U_B_HeliPilotCoveralls        = 2.63%
			U_B_PilotCoveralls            = 2.63%
			U_I_CombatUniform             = 2.63%
			U_I_CombatUniform_shortsleeve = 2.63%
			U_I_CombatUniform_tshirt      = 2.63%
			U_I_HeliPilotCoveralls        = 2.63%
			U_I_pilotCoveralls            = 2.63%
			U_O_PilotCoveralls            = 2.63%
			U_B_CombatUniform_mcam        = 3.29%
			U_B_CombatUniform_mcam_tshirt = 3.29%
			U_B_CombatUniform_mcam_vest   = 3.29%
			U_B_CombatUniform_mcam_worn   = 3.29%
			U_B_CTRG_1                    = 3.29%
			U_B_CTRG_2                    = 3.29%
			U_B_CTRG_3                    = 3.29%
			U_B_CTRG_Soldier_2_F          = 3.29%
			U_B_CTRG_Soldier_3_F          = 3.29%
			U_B_CTRG_Soldier_F            = 3.29%
			U_B_CTRG_Soldier_urb_1_F      = 3.29%
			U_B_CTRG_Soldier_urb_2_F      = 3.29%
			U_B_CTRG_Soldier_urb_3_F      = 3.29%
			U_B_GEN_Commander_F           = 3.29%
			U_B_GEN_Soldier_F             = 3.29%
			U_B_T_Soldier_AR_F            = 3.29%
			U_B_T_Soldier_SL_F            = 3.29%
			U_O_T_Officer_F               = 3.29%
			U_O_T_Soldier_F               = 3.29%
		*/
		MilitaryClothing[] = {"U_O_T_Officer_F", "U_B_CombatUniform_mcam_tshirt", "U_O_V_Soldier_Viper_hex_F", "U_O_T_Officer_F", "U_B_CombatUniform_mcam_tshirt", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam", "U_B_CTRG_2", "U_B_PilotCoveralls", "U_O_SpecopsUniform_ocamo", "U_B_CombatUniform_mcam_vest", "U_B_SpecopsUniform_sgg", "U_B_CTRG_Soldier_2_F", "U_B_T_Soldier_AR_F", "U_B_CombatUniform_mcam", "U_B_SpecopsUniform_sgg", "U_B_CTRG_Soldier_F", "U_B_T_Soldier_AR_F", "U_B_T_Soldier_SL_F", "U_B_GEN_Soldier_F", "U_B_CombatUniform_mcam_worn", "U_I_CombatUniform", "U_O_SpecopsUniform_blk", "U_B_T_Soldier_AR_F", "U_O_SpecopsUniform_ocamo", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_3_F", "U_B_T_Soldier_SL_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_F", "U_B_Wetsuit", "U_O_SpecopsUniform_blk", "U_B_T_Soldier_SL_F", "U_B_CTRG_3", "U_I_CombatUniform_shortsleeve", "U_I_CombatUniform_shortsleeve", "U_B_GEN_Commander_F", "U_O_Wetsuit", "U_B_CTRG_Soldier_2_F", "U_B_CTRG_Soldier_3_F", "U_B_HeliPilotCoveralls", "U_B_CTRG_Soldier_2_F", "U_B_CombatUniform_mcam", "U_I_CombatUniform", "U_B_CombatUniform_mcam_tshirt", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_urb_1_F", "U_O_T_Soldier_F", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_urb_1_F", "U_O_T_Officer_F", "U_B_CTRG_3", "U_O_T_Soldier_F", "U_B_CombatUniform_mcam_vest", "U_B_HeliPilotCoveralls", "U_O_CombatUniform_oucamo", "U_B_CTRG_Soldier_2_F", "U_B_PilotCoveralls", "U_I_pilotCoveralls", "U_O_PilotCoveralls", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_Soldier_2_F", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_mcam_worn", "U_B_CTRG_Soldier_3_F", "U_B_T_Soldier_SL_F", "U_B_CombatUniform_mcam_tshirt", "U_B_CTRG_Soldier_urb_3_F", "U_O_Wetsuit", "U_B_CombatUniform_mcam", "U_B_GEN_Soldier_F", "U_O_V_Soldier_Viper_F", "U_B_GEN_Commander_F", "U_B_CombatUniform_mcam_vest", "U_B_CTRG_Soldier_urb_1_F", "U_I_CombatUniform", "U_O_PilotCoveralls", "U_B_CTRG_2", "U_O_CombatUniform_oucamo", "U_I_pilotCoveralls", "U_B_CTRG_Soldier_urb_1_F", "U_B_CombatUniform_mcam_worn", "U_I_CombatUniform", "U_B_SpecopsUniform_sgg", "U_B_CTRG_3", "U_I_Wetsuit", "U_O_T_Soldier_F", "U_B_CTRG_Soldier_urb_3_F", "U_B_CTRG_2", "U_B_CTRG_2", "U_B_GEN_Soldier_F", "U_B_T_Soldier_AR_F", "U_I_HeliPilotCoveralls", "U_O_OfficerUniform_ocamo", "U_B_CTRG_Soldier_urb_3_F", "U_B_T_Soldier_SL_F", "U_B_GEN_Soldier_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_F", "U_B_CTRG_3", "U_B_CTRG_1", "U_O_CombatUniform_ocamo", "U_B_PilotCoveralls", "U_B_CTRG_3", "U_B_CTRG_2", "U_O_OfficerUniform_ocamo", "U_O_PilotCoveralls", "U_B_PilotCoveralls", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_F", "U_B_GEN_Soldier_F", "U_B_GEN_Commander_F", "U_I_Wetsuit", "U_B_CTRG_1", "U_I_CombatUniform_shortsleeve", "U_B_CTRG_Soldier_F", "U_I_HeliPilotCoveralls", "U_O_T_Officer_F", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_3_F", "U_B_GEN_Commander_F", "U_I_HeliPilotCoveralls", "U_B_GEN_Commander_F", "U_O_T_Soldier_F", "U_I_OfficerUniform", "U_I_HeliPilotCoveralls", "U_O_PilotCoveralls", "U_I_CombatUniform_tshirt", "U_B_CTRG_Soldier_urb_2_F", "U_B_CTRG_Soldier_3_F", "U_B_Wetsuit", "U_B_CombatUniform_mcam_vest", "U_O_T_Soldier_F", "U_B_CTRG_1", "U_B_CTRG_1", "U_B_CTRG_Soldier_urb_1_F", "U_O_V_Soldier_Viper_F", "U_I_pilotCoveralls", "U_B_CombatUniform_mcam_worn", "U_B_CombatUniform_mcam", "U_O_T_Officer_F", "U_I_CombatUniform_tshirt", "U_I_CombatUniform_shortsleeve", "U_B_HeliPilotCoveralls", "U_I_OfficerUniform", "U_B_CTRG_1", "U_B_CombatUniform_mcam_vest", "U_O_CombatUniform_ocamo", "U_O_V_Soldier_Viper_hex_F"};

		/*
			Percental Item Spawn Chances of MilitaryBackpacks:

			B_Bergen_Base_F   = 5.26%
			B_Bergen_dgtl_F   = 5.26%
			B_Bergen_hex_F    = 5.26%
			B_Bergen_mcamo_F  = 5.26%
			B_Bergen_tna_F    = 5.26%
			B_Carryall_mcamo  = 10.53%
			B_Carryall_ocamo  = 10.53%
			B_Carryall_oucamo = 10.53%
			B_Carryall_khk    = 10.53%
			B_Carryall_oli    = 10.53%
			B_Carryall_cbr    = 10.53%
			B_Carryall_ghex_F = 10.53%
		*/
		MilitaryBackpacks[] = {"B_Carryall_oli", "B_Carryall_ocamo", "B_Carryall_cbr", "B_Carryall_ghex_F", "B_Carryall_ghex_F", "B_Bergen_Base_F", "B_Bergen_dgtl_F", "B_Carryall_oucamo", "B_Bergen_mcamo_F", "B_Carryall_oli", "B_Carryall_mcamo", "B_Bergen_tna_F", "B_Carryall_khk", "B_Carryall_ocamo", "B_Carryall_khk", "B_Carryall_cbr", "B_Carryall_oucamo", "B_Carryall_mcamo", "B_Bergen_hex_F"};

		/*
			Percental Item Spawn Chances of MilitaryVests:

			V_PlateCarrierH_CTRG    = 5.00%
			V_PlateCarrierL_CTRG    = 5.00%
			V_PlateCarrier1_blk     = 10.00%
			V_PlateCarrier1_rgr     = 10.00%
			V_PlateCarrier2_rgr     = 10.00%
			V_PlateCarrier3_rgr     = 10.00%
			V_PlateCarrierGL_rgr    = 10.00%
			V_PlateCarrierIA1_dgtl  = 10.00%
			V_PlateCarrierIA2_dgtl  = 10.00%
			V_PlateCarrierIAGL_dgtl = 10.00%
			V_PlateCarrierSpec_rgr  = 10.00%
		*/
		MilitaryVests[] = {"V_PlateCarrierIA1_dgtl", "V_PlateCarrierIA2_dgtl", "V_PlateCarrier1_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrierGL_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierIA2_dgtl", "V_PlateCarrierL_CTRG", "V_PlateCarrier1_rgr", "V_PlateCarrierSpec_rgr", "V_PlateCarrierH_CTRG", "V_PlateCarrier3_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrier2_rgr", "V_PlateCarrierIA1_dgtl", "V_PlateCarrierSpec_rgr", "V_PlateCarrier3_rgr", "V_PlateCarrier1_blk", "V_PlateCarrierIAGL_dgtl"};

		/*
			Percental Item Spawn Chances of MilitaryHeadgear:

			H_CrewHelmetHeli_B        = 0.81%
			H_CrewHelmetHeli_I        = 0.81%
			H_CrewHelmetHeli_O        = 0.81%
			H_HelmetB_camo            = 0.81%
			H_HelmetCrew_B            = 0.81%
			H_HelmetCrew_I            = 0.81%
			H_HelmetCrew_O            = 0.81%
			H_HelmetLeaderO_ocamo     = 0.81%
			H_HelmetLeaderO_oucamo    = 0.81%
			H_HelmetO_ghex_F          = 0.81%
			H_HelmetO_ocamo           = 0.81%
			H_HelmetO_oucamo          = 0.81%
			H_HelmetSpecO_blk         = 0.81%
			H_HelmetSpecO_ocamo       = 0.81%
			H_PilotHelmetFighter_B    = 0.81%
			H_PilotHelmetFighter_I    = 0.81%
			H_PilotHelmetFighter_O    = 0.81%
			H_PilotHelmetHeli_B       = 0.81%
			H_PilotHelmetHeli_I       = 0.81%
			H_PilotHelmetHeli_O       = 0.81%
			H_BandMask_demon          = 1.63%
			H_BandMask_khk            = 1.63%
			H_BandMask_reaper         = 1.63%
			H_Beret_gen_F             = 1.63%
			H_Helmet_Skate            = 1.63%
			H_HelmetB_black           = 1.63%
			H_HelmetB_desert          = 1.63%
			H_HelmetB_Enh_tna_F       = 1.63%
			H_HelmetB_grass           = 1.63%
			H_HelmetB_light_black     = 1.63%
			H_HelmetB_light_desert    = 1.63%
			H_HelmetB_light_grass     = 1.63%
			H_HelmetB_light_sand      = 1.63%
			H_HelmetB_light_snakeskin = 1.63%
			H_HelmetB_Light_tna_F     = 1.63%
			H_HelmetB_sand            = 1.63%
			H_HelmetB_snakeskin       = 1.63%
			H_HelmetB_TI_tna_F        = 1.63%
			H_HelmetB_tna_F           = 1.63%
			H_HelmetCrew_O_ghex_F     = 1.63%
			H_HelmetIA_camo           = 1.63%
			H_HelmetIA_net            = 1.63%
			H_HelmetLeaderO_ghex_F    = 1.63%
			H_HelmetSpecO_ghex_F      = 1.63%
			H_HelmetB                 = 2.44%
			H_HelmetB_light           = 2.44%
			H_HelmetB_paint           = 2.44%
			H_HelmetB_plain_blk       = 2.44%
			H_HelmetIA                = 2.44%
			H_HelmetSpecB             = 2.44%
			H_HelmetSpecB_blk         = 2.44%
			H_HelmetSpecB_paint1      = 2.44%
			H_HelmetSpecB_paint2      = 2.44%
			Exile_Headgear_GasMask    = 3.25%
			H_MilCap_blue             = 3.25%
			H_MilCap_dgtl             = 3.25%
			H_MilCap_mcamo            = 3.25%
			H_MilCap_ocamo            = 3.25%
			H_MilCap_oucamo           = 3.25%
			H_MilCap_rucamo           = 3.25%
		*/
		MilitaryHeadgear[] = {"H_MilCap_mcamo", "Exile_Headgear_GasMask", "Exile_Headgear_GasMask", "H_HelmetB_light", "H_HelmetB_tna_F", "H_HelmetB_TI_tna_F", "H_HelmetB_desert", "H_HelmetB_plain_blk", "H_MilCap_dgtl", "H_MilCap_blue", "Exile_Headgear_GasMask", "H_HelmetB_light_black", "H_HelmetIA_net", "H_HelmetSpecB_paint1", "H_Helmet_Skate", "H_MilCap_ocamo", "H_MilCap_rucamo", "H_MilCap_blue", "H_HelmetB_desert", "H_HelmetSpecB_blk", "H_HelmetB_snakeskin", "H_HelmetB_black", "H_Beret_gen_F", "H_MilCap_blue", "H_HelmetB_plain_blk", "H_HelmetSpecB", "H_MilCap_dgtl", "H_PilotHelmetFighter_O", "H_MilCap_oucamo", "H_HelmetB_light_desert", "H_HelmetLeaderO_ghex_F", "H_HelmetLeaderO_ghex_F", "H_HelmetSpecB_blk", "H_MilCap_oucamo", "H_PilotHelmetFighter_B", "H_HelmetB_light", "H_MilCap_rucamo", "H_HelmetCrew_B", "H_HelmetB_light_grass", "H_HelmetLeaderO_ocamo", "H_MilCap_ocamo", "H_HelmetB_light_black", "H_HelmetB_grass", "H_HelmetIA", "H_MilCap_ocamo", "H_HelmetB_Light_tna_F", "H_HelmetB_light", "H_MilCap_oucamo", "H_CrewHelmetHeli_O", "H_MilCap_rucamo", "H_HelmetB_paint", "H_MilCap_dgtl", "H_HelmetB_snakeskin", "H_BandMask_khk", "H_HelmetIA_camo", "H_HelmetB_TI_tna_F", "H_HelmetB_plain_blk", "H_HelmetB_light_snakeskin", "H_HelmetB_sand", "H_HelmetCrew_O", "H_PilotHelmetHeli_B", "H_HelmetB", "H_HelmetSpecB_paint2", "H_HelmetIA", "H_HelmetB_camo", "H_HelmetSpecB", "H_HelmetSpecB_paint1", "H_BandMask_khk", "H_HelmetB_tna_F", "H_MilCap_mcamo", "H_MilCap_mcamo", "Exile_Headgear_GasMask", "H_HelmetIA_net", "H_HelmetB_grass", "H_HelmetB_Enh_tna_F", "H_HelmetO_ghex_F", "H_HelmetSpecO_blk", "H_HelmetB_Light_tna_F", "H_HelmetB_sand", "H_HelmetB", "H_HelmetSpecB_paint2", "H_HelmetB_light_desert", "H_HelmetB_light_grass", "H_HelmetSpecB", "H_HelmetB", "H_MilCap_mcamo", "H_HelmetIA_camo", "H_BandMask_reaper", "H_HelmetLeaderO_oucamo", "H_BandMask_demon", "H_HelmetB_light_sand", "H_BandMask_reaper", "H_MilCap_rucamo", "H_PilotHelmetHeli_I", "H_HelmetSpecO_ghex_F", "H_HelmetB_black", "H_HelmetCrew_I", "H_MilCap_dgtl", "H_MilCap_blue", "H_HelmetSpecB_blk", "H_HelmetSpecB_paint2", "H_BandMask_demon", "H_HelmetO_oucamo", "H_HelmetCrew_O_ghex_F", "H_PilotHelmetHeli_O", "H_CrewHelmetHeli_I", "H_HelmetCrew_O_ghex_F", "H_PilotHelmetFighter_I", "H_HelmetB_paint", "H_HelmetB_light_snakeskin", "H_Beret_gen_F", "H_HelmetB_light_sand", "H_HelmetO_ocamo", "H_MilCap_oucamo", "H_HelmetB_Enh_tna_F", "H_MilCap_ocamo", "H_Helmet_Skate", "H_HelmetSpecB_paint1", "H_HelmetIA", "H_CrewHelmetHeli_B", "H_HelmetSpecO_ocamo", "H_HelmetB_paint", "H_HelmetSpecO_ghex_F"};

		/*
			Percental Item Spawn Chances of Ghillies:

			U_B_GhillieSuit = 33.33%
			U_O_GhillieSuit = 33.33%
			U_I_GhillieSuit = 33.33%
		*/
		Ghillies[] = {"U_B_GhillieSuit", "U_I_GhillieSuit", "U_O_GhillieSuit"};

		/*
			Percental Item Spawn Chances of DLCGhillies:

			U_B_FullGhillie_ard     = 4.65%
			U_B_FullGhillie_lsh     = 4.65%
			U_B_FullGhillie_sard    = 4.65%
			U_O_FullGhillie_ard     = 4.65%
			U_O_FullGhillie_lsh     = 4.65%
			U_O_FullGhillie_sard    = 4.65%
			U_I_FullGhillie_ard     = 4.65%
			U_I_FullGhillie_lsh     = 4.65%
			U_I_FullGhillie_sard    = 4.65%
			U_B_T_Sniper_F          = 11.63%
			U_B_T_Soldier_F         = 11.63%
			U_B_T_FullGhillie_tna_F = 11.63%
			U_O_T_Sniper_F          = 11.63%
			U_O_T_FullGhillie_tna_F = 11.63%
		*/
		DLCGhillies[] = {"U_B_T_Sniper_F", "U_B_FullGhillie_sard", "U_I_FullGhillie_sard", "U_B_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_O_T_Sniper_F", "U_O_T_Sniper_F", "U_B_FullGhillie_ard", "U_O_T_Sniper_F", "U_I_FullGhillie_lsh", "U_B_T_Sniper_F", "U_O_FullGhillie_sard", "U_B_T_Soldier_F", "U_I_FullGhillie_lsh", "U_B_T_Soldier_F", "U_B_FullGhillie_lsh", "U_B_T_FullGhillie_tna_F", "U_I_FullGhillie_ard", "U_O_FullGhillie_ard", "U_O_FullGhillie_ard", "U_O_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_O_FullGhillie_lsh", "U_B_FullGhillie_sard", "U_B_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_O_FullGhillie_lsh", "U_B_T_FullGhillie_tna_F", "U_B_T_FullGhillie_tna_F", "U_B_T_Soldier_F", "U_B_FullGhillie_lsh", "U_B_T_Sniper_F", "U_B_T_Sniper_F", "U_O_T_Sniper_F", "U_O_T_FullGhillie_tna_F", "U_O_T_FullGhillie_tna_F", "U_I_FullGhillie_ard", "U_I_FullGhillie_sard", "U_B_T_Sniper_F", "U_B_FullGhillie_ard", "U_O_FullGhillie_sard", "U_O_T_FullGhillie_tna_F", "U_O_T_Sniper_F"};

		/*
			Percental Item Spawn Chances of DLCVests:

			V_PlateCarrierGL_blk         = 4.76%
			V_PlateCarrierGL_mtp         = 4.76%
			V_PlateCarrierGL_rgr         = 4.76%
			V_PlateCarrierIAGL_dgtl      = 4.76%
			V_PlateCarrierIAGL_oli       = 4.76%
			V_PlateCarrierSpec_blk       = 4.76%
			V_PlateCarrierSpec_mtp       = 4.76%
			V_PlateCarrierSpec_rgr       = 4.76%
			V_TacChestrig_grn_F          = 4.76%
			V_TacChestrig_oli_F          = 4.76%
			V_TacChestrig_cbr_F          = 4.76%
			V_PlateCarrier1_tna_F        = 4.76%
			V_PlateCarrier2_tna_F        = 4.76%
			V_PlateCarrierSpec_tna_F     = 4.76%
			V_PlateCarrierGL_tna_F       = 4.76%
			V_HarnessO_ghex_F            = 4.76%
			V_HarnessOGL_ghex_F          = 4.76%
			V_BandollierB_ghex_F         = 4.76%
			V_TacVest_gen_F              = 4.76%
			V_PlateCarrier1_rgr_noflag_F = 4.76%
			V_PlateCarrier2_rgr_noflag_F = 4.76%
		*/
		DLCVests[] = {"V_PlateCarrierGL_tna_F", "V_TacChestrig_grn_F", "V_PlateCarrierIAGL_dgtl", "V_TacVest_gen_F", "V_PlateCarrier1_tna_F", "V_PlateCarrierGL_blk", "V_PlateCarrierSpec_mtp", "V_PlateCarrierSpec_tna_F", "V_TacChestrig_oli_F", "V_PlateCarrierGL_mtp", "V_TacVest_gen_F", "V_PlateCarrierSpec_blk", "V_HarnessOGL_ghex_F", "V_TacChestrig_grn_F", "V_PlateCarrierGL_blk", "V_PlateCarrierIAGL_oli", "V_TacChestrig_cbr_F", "V_PlateCarrierGL_mtp", "V_HarnessO_ghex_F", "V_HarnessOGL_ghex_F", "V_PlateCarrier1_tna_F", "V_PlateCarrierSpec_rgr", "V_PlateCarrierGL_rgr", "V_PlateCarrierSpec_tna_F", "V_TacChestrig_cbr_F", "V_TacChestrig_oli_F", "V_PlateCarrierGL_tna_F", "V_PlateCarrierSpec_mtp", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrierSpec_blk", "V_BandollierB_ghex_F", "V_PlateCarrier1_rgr_noflag_F", "V_PlateCarrierSpec_rgr", "V_HarnessO_ghex_F", "V_BandollierB_ghex_F", "V_PlateCarrierIAGL_oli", "V_PlateCarrier2_tna_F", "V_PlateCarrierGL_rgr", "V_PlateCarrierIAGL_dgtl", "V_PlateCarrier2_rgr_noflag_F", "V_PlateCarrier2_tna_F"};

		/*
			Percental Item Spawn Chances of Rebreathers:

			V_RebreatherB  = 33.33%
			V_RebreatherIR = 33.33%
			V_RebreatherIA = 33.33%
		*/
		Rebreathers[] = {"V_RebreatherIR", "V_RebreatherB", "V_RebreatherIA", "V_RebreatherB", "V_RebreatherIA", "V_RebreatherIR"};

		/*
			Percental Item Spawn Chances of MedicalItems:

			Exile_Item_InstaDoc  = 33.33%
			Exile_Item_Bandage   = 13.33%
			Exile_Item_Vishpirin = 26.67%
			Exile_Item_Heatpack  = 26.67%
		*/
		MedicalItems[] = {"Exile_Item_Heatpack", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_Heatpack", "Exile_Item_Vishpirin", "Exile_Item_InstaDoc", "Exile_Item_Heatpack", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_InstaDoc", "Exile_Item_Vishpirin", "Exile_Item_Bandage", "Exile_Item_InstaDoc"};

		/*
			Percental Item Spawn Chances of IndustrialItems:

			Exile_Item_ThermalScannerPro    = 2.08%
			Exile_Item_Knife                = 1.39%
			Exile_Item_Cement               = 2.08%
			Exile_Item_FloodLightKit        = 2.08%
			Exile_Item_PortableGeneratorKit = 2.08%
			Exile_Item_CamoTentKit          = 2.78%
			Exile_Item_MetalBoard           = 2.78%
			Exile_Item_Foolbox              = 2.78%
			Exile_Item_Sand                 = 2.78%
			Exile_Item_Grinder              = 3.47%
			Exile_Item_MetalScrews          = 3.47%
			Exile_Melee_SledgeHammer        = 3.47%
			Exile_Item_ExtensionCord        = 5.56%
			Exile_Item_LightBulb            = 6.25%
			Exile_Item_WaterCanisterEmpty   = 3.47%
			Exile_Melee_Shovel              = 3.47%
			Exile_Item_JunkMetal            = 7.64%
			Exile_Item_Handsaw              = 9.03%
			Exile_Item_Pliers               = 9.03%
			Exile_Item_ScrewDriver          = 9.03%
			Exile_Melee_Axe                 = 15.28%
		*/
		IndustrialItems[] = {"Exile_Item_Foolbox", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_CamoTentKit", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Melee_Shovel", "Exile_Item_Handsaw", "Exile_Item_Knife", "Exile_Item_Handsaw", "Exile_Item_Sand", "Exile_Item_CamoTentKit", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Melee_Shovel", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Item_ScrewDriver", "Exile_Melee_Axe", "Exile_Item_JunkMetal", "Exile_Melee_Axe", "Exile_Item_Grinder", "Exile_Item_Pliers", "Exile_Item_PortableGeneratorKit", "Exile_Melee_Axe", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Item_Grinder", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_FloodLightKit", "Exile_Melee_Shovel", "Exile_Item_Knife", "Exile_Item_Pliers", "Exile_Item_Grinder", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Item_CamoTentKit", "Exile_Item_Handsaw", "Exile_Item_LightBulb", "Exile_Melee_SledgeHammer", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exile_Melee_SledgeHammer", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_MetalScrews", "Exile_Item_Pliers", "Exile_Item_MetalBoard", "Exile_Item_Cement", "Exile_Item_Handsaw", "Exile_Item_Sand", "Exile_Melee_Axe", "Exile_Item_ScrewDriver", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_MetalBoard", "Exile_Item_ScrewDriver", "Exile_Item_Handsaw", "Exile_Item_Foolbox", "Exile_Item_Pliers", "Exile_Item_LightBulb", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_PortableGeneratorKit", "Exile_Melee_Axe", "Exile_Item_CamoTentKit", "Exile_Item_Pliers", "Exile_Melee_Shovel", "Exile_Item_ScrewDriver", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_ExtensionCord", "Exile_Item_JunkMetal", "Exile_Item_ExtensionCord", "Exile_Item_Pliers", "Exile_Melee_Axe", "Exile_Item_LightBulb", "Exile_Melee_SledgeHammer", "Exile_Item_JunkMetal", "Exile_Item_ExtensionCord", "Exile_Item_Grinder", "Exile_Item_JunkMetal", "Exile_Item_FloodLightKit", "Exile_Item_Handsaw", "Exile_Item_ExtensionCord", "Exile_Item_Handsaw", "Exile_Item_Sand", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Item_LightBulb", "Exile_Melee_Axe", "Exile_Item_ThermalScannerPro", "Exile_Item_Handsaw", "Exile_Item_ScrewDriver", "Exile_Item_MetalBoard", "Exile_Item_Pliers", "Exile_Item_PortableGeneratorKit", "Exile_Item_Pliers", "Exile_Item_FloodLightKit", "Exile_Item_Foolbox", "Exile_Item_JunkMetal", "Exile_Item_Sand", "Exile_Item_Foolbox", "Exile_Item_JunkMetal", "Exile_Item_ThermalScannerPro", "Exile_Item_LightBulb", "Exile_Item_LightBulb", "Exile_Item_Handsaw", "Exile_Melee_Axe", "Exile_Melee_Axe", "Exile_Item_ExtensionCord", "Exile_Melee_SledgeHammer", "Exile_Item_ExtensionCord", "Exile_Item_Grinder", "Exile_Item_Pliers", "Exile_Item_ScrewDriver", "Exile_Item_JunkMetal", "Exile_Item_MetalScrews", "Exile_Item_ScrewDriver", "Exile_Melee_SledgeHammer", "Exile_Item_Cement", "Exile_Item_JunkMetal", "Exile_Item_ScrewDriver", "Exile_Item_WaterCanisterEmpty", "Exile_Item_Handsaw", "Exile_Item_JunkMetal", "Exile_Item_WaterCanisterEmpty", "Exile_Melee_Axe", "Exile_Item_ThermalScannerPro", "Exile_Item_Cement", "Exile_Item_ExtensionCord", "Exile_Melee_Axe", "Exile_Item_MetalScrews", "Exile_Melee_Axe", "Exile_Item_Handsaw"};

		/*
			Percental Item Spawn Chances of Vehicle:

			Exile_Item_FuelCanisterFull  = 33.33%
			Exile_Item_FuelCanisterEmpty = 41.67%
			Exile_Item_DuctTape          = 25.00%
		*/
		Vehicle[] = {"Exile_Item_FuelCanisterEmpty", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterFull", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_FuelCanisterEmpty", "Exile_Item_DuctTape", "Exile_Item_FuelCanisterFull"};

		/*
			Percental Item Spawn Chances of Chemlights:

			Chemlight_blue   = 25.00%
			Chemlight_green  = 25.00%
			Chemlight_red    = 25.00%
			Chemlight_yellow = 25.00%
		*/
		Chemlights[] = {"Chemlight_red", "Chemlight_yellow", "Chemlight_blue", "Chemlight_green"};

		/*
			Percental Item Spawn Chances of RoadFlares:

			FlareGreen_F  = 25.00%
			FlareRed_F    = 25.00%
			FlareWhite_F  = 25.00%
			FlareYellow_F = 25.00%
		*/
		RoadFlares[] = {"FlareGreen_F", "FlareWhite_F", "FlareRed_F", "FlareYellow_F"};

		/*
			Percental Item Spawn Chances of SmokeGrenades:

			SmokeShell       = 14.29%
			SmokeShellRed    = 14.29%
			SmokeShellGreen  = 14.29%
			SmokeShellYellow = 14.29%
			SmokeShellPurple = 14.29%
			SmokeShellBlue   = 14.29%
			SmokeShellOrange = 14.29%
		*/
		SmokeGrenades[] = {"SmokeShell", "SmokeShellOrange", "SmokeShellBlue", "SmokeShellGreen", "SmokeShellRed", "SmokeShellYellow", "SmokeShellPurple"};

		/*
			Percental Item Spawn Chances of Restraints:

			Exile_Item_ZipTie = 100.00%
		*/
		Restraints[] = {"Exile_Item_ZipTie"};

		/*
			Percental Item Spawn Chances of Electronics:

			Exile_Item_Laptop        = 50.00%
			Exile_Item_BaseCameraKit = 50.00%
		*/
		Electronics[] = {"Exile_Item_BaseCameraKit", "Exile_Item_BaseCameraKit", "Exile_Item_Laptop", "Exile_Item_Laptop"};

		/*
			Percental Item Spawn Chances of Trash:

			Exile_Item_Magazine01         = 10.00%
			Exile_Item_Magazine02         = 10.00%
			Exile_Item_Magazine03         = 10.00%
			Exile_Item_Magazine04         = 10.00%
			Exile_Item_Can_Empty          = 20.00%
			Exile_Item_PlasticBottleEmpty = 20.00%
			Exile_Item_ToiletPaper        = 20.00%
		*/
		Trash[] = {"Exile_Item_Can_Empty", "Exile_Item_Magazine03", "Exile_Item_PlasticBottleEmpty", "Exile_Item_ToiletPaper", "Exile_Item_Magazine01", "Exile_Item_PlasticBottleEmpty", "Exile_Item_Magazine02", "Exile_Item_Can_Empty", "Exile_Item_Magazine04", "Exile_Item_ToiletPaper"};

		/*
			Percental Item Spawn Chances of Unused:

			Exile_Item_CordlessScrewdriver = 11.11%
			Exile_Item_FireExtinguisher    = 11.11%
			Exile_Item_Rope                = 11.11%
			Exile_Item_Carwheel            = 11.11%
			Exile_Item_Defibrillator       = 11.11%
			Exile_Item_SleepingMat         = 11.11%
			Exile_Item_Wrench              = 11.11%
			Exile_Item_OilCanister         = 11.11%
			Exile_Item_Hammer              = 11.11%
		*/
		Unused[] = {"Exile_Item_FireExtinguisher", "Exile_Item_Wrench", "Exile_Item_Defibrillator", "Exile_Item_Hammer", "Exile_Item_OilCanister", "Exile_Item_Carwheel", "Exile_Item_CordlessScrewdriver", "Exile_Item_SleepingMat", "Exile_Item_Rope"};
	};
};
class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// Community Base Addons
	///////////////////////////////////////////////////////////////////////
	class CBA 
	{
		// Set this to 1 if you want to have CBA support
		useStackedEH = 1;

		// If you set this to 1 ...........................................
		iReallyWantToGetHackedAndImRetarded = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark: 
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!	
		*/
		class Ingame 
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead 
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot 
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups 
			{
				interval = 0.5;
			};
		};

		class Database 
		{
			// Remove all deleted items from the database after X days
			permanentlyDeleteTime = 3;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 14;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 7;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 14;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 7;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 14;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs 
		*/
		tradingRespectFactor = 0.1;
		
		/**
		* Defines the the minimum amount of Respect earned/lost for a kill
		*/
		minRespectTransfer = 50;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			domination = 80;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes	
		};

		class Percentages 
		{
			unlucky = 1; // Dying for an unknown reason costs you 1% respect
			crash = 1; // Crashing your car costs you 1% respect
			suicide = 1; // Comitting suicide costs you 2% of your respect
			friendyFire = 3; // Friendly fire costs you 3% 
			npc = 4; // Being killed by an NPC costs you 4%
			bambiKill = 5; // Killing a bambi costs you 5%
			frag = 5; // Killing someone will get you 5% and remove 5% from the victim
		};

		class Handcuffs 
		{
			trapping = -50;					// A handcuffs B
			breakingFree = 100; 			// B broke free
			releasedByHero = 100; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B	
		};

		class Bonus
		{
			// Bonus per full 100m 
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			// If you kill someone while you are in your own territory
			homie = 20;

			// If you kill someone who is in his own territory
			raid = 20;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 1;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot 
		 * change the loadout uniform)
		 */
		loadOut[] = 
		{
			"ItemCompass",
			"ItemMap", // Because why not
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_ExtensionCord"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 1;

		/**
		 * Enables or disables halo jumping. Only applies 
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 1;

		/**
		 * Parachute drop height in meters. 
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 500;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 2;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 20; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		/**
		 * If "randmizeFuel" is set to 1, vehicles will spawn with randomized
		 * fuel. In this case, "fuel" controls the percentage of fuel that
		 * can be in the vehicle at a maximum. For example, if you set this to
		 * 0.5, then vehicles will spawn with something random between 0% and 50%.
		 *
		 * If "randomizeFuel" is set to 0, all vehicles will spawn exactly the 
		 * fuel percentage defined in "fuel". For example, setting this to 0.5
		 * will spawn all vehicles with 50% fuel. Setting it to 0 would spawn
		 * all vehicles without fuel.
		 */
		randomizeFuel = 1;
		fuel = 1;

		/**
		 * Works exactly the same as the fuel setting ^
		 */
		randomizeAmmo = 1;
		ammo = 1;

		// Stuff to spawn on water
		water[] = 
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] = 
		{
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_TowTractor_White",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_UAZ_Green",
			"Exile_Car_LandRover_Ambulance_Desert",
			"Exile_Car_Tractor_Red",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_Octavius_White",
			

			//"B_LSV_01_armed_sand_F",
			"C_Offroad_02_unarmed_black_F",
			"C_IDAP_Offroad_02_unarmed_F",
			"O_LSV_02_unarmed_ghex_F"
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 0;

		/**
		 * Set this to 1 to unlock vehicles on server boot if they are in safe zones
		 *
		 * 0 = off
		 * 1 = on
		 */
		unlockInSafeZonesAfterRestart = 1;	
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one 
			weather type of be more dominant compared to others, add it multiple times
		*/
		//keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 
		keyframes[] = {"Sunny"}; 

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0.1;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 0.2;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.2;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 0.4;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0.1;
			lightnings = 0.1;
			rainbows = 1;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.25;
			gusts = 0.5;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,9,0};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "ezgbossmen";

		// Autolocks server until its ready to accept players
		useAutoLock = 0;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 3;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 0;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 1;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3}; 

		/* 
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server. 
			If set to 0, it will execute '#restart'
		*/

		useShutdown = 0;
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 1;

		devs[] = 
		{
			{"76561197985241690","[EXILE|DEV] Eichi"},
			{"76561198022879703","[EXILE|DEV] Grim"},
			{"76561198075905447","[EXILE|DEV] Vishpala"},
			{"76561197968613061","[EXILE|DEV] Niuva"},
			{"76561198027700602","[EXILE|DEV] Eraser1"},
			{"76561198048317094","[EXILE|DEV] HappyDayZ"},
			{"76561198105900802","[EXILE|DEV] Psycho"},
			{"76561198004111275","[EXILE|DEV] Maca134"},
			{"76561198037177305","[EXILE|DEV] Wolfkill"}
		};
	};

	class Events 
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox", "AbandonedSafe", "EarthQuake"}; 
		enabledEscapeEvents[] = {"EscapeSupplyBox", "AmbientFlyOver", "EarthQuake"}; 

		class EarthQuake 
		{
			type = "spawn";
			function = "ExileServer_system_event_earthQuake_start";
			minTime = 170;
			maxTime = 180;
			minimumPlayersOnline = 1;
		};

		class SupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 60; // minutes
			maxTime = 180; // minutes
			minimumPlayersOnline = 10;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 100; // altitude of the drop
			markerTime = 10; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Beer", "Beer", "Tools", "Food", "Food", "RepairParts"};

			class BoxTypes
			{
				class Beer 
				{
					items[] = 
					{
						{"Exile_Item_Beer", 24}
					};
				};

				class Food 
				{
					items[] = 
					{
						{"Exile_Item_BBQSandwich", 5},
						{"Exile_Item_Catfood", 5},
						{"Exile_Item_ChristmasTinner", 5},
						{"Exile_Item_GloriousKnakworst", 5},
						{"Exile_Item_SausageGravy", 5},
						{"Exile_Item_Surstromming", 5},
						{"Exile_Item_CanOpener", 1},
						{"Exile_Item_CookingPot", 1},
						{"Exile_Item_Matches", 1}
					};
				};

				class Tools 
				{
					items[] = 
					{
						{"Exile_Item_Wrench", 1},
						{"Exile_Item_Shovel", 1},
						{"Exile_Item_Screwdriver", 1},
						{"Exile_Item_Pliers", 1},
						{"Exile_Item_Handsaw", 1},
						{"Exile_Item_FireExtinguisher", 1},
						{"Exile_Item_DuctTape", 1}
					};
				};

				class RepairParts 
				{
					items[] = 
					{
						{"Exile_Item_CarWheel", 8},
						{"Exile_Item_FuelCanisterFull", 4},
						{"Exile_Item_OilCanister", 1},
						{"Exile_Item_Grinder", 1},
						{"Exile_Item_CordlessScrewdriver", 1}
					};
				};
			};
		};

		class EscapeSupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_escapeSupplyBox_start";
			minTime = 3; // minutes
			maxTime = 6; // minutes
			minimumPlayersOnline = 1;
			dropAltitude = 100; // altitude of the drop
			markerTime = 5; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"CyrusBulletCam","LynxBulletCam","LRRBulletCam","MAR10BulletCam","Rahim","MkIEMR","ASP1Kir","Mk14","CMR","EBR","MXSW","Mk200"};

			class BoxTypes
			{
				class CyrusBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag", 1},
						{"10Rnd_93x64_DMR_05_Mag", 3},
						{"srifle_DMR_05_blk_F", 1}
					};
				};
				class LynxBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag", 1},
						{"5Rnd_127x108_Mag", 3},
						{"srifle_GM6_F", 1}
					};
				};
				class LRRBulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag", 1},
						{"7Rnd_408_Mag", 3},
						{"srifle_LRR_F", 1}
					};
				};
				class MAR10BulletCam 
				{
					items[] = 
					{
						{"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag", 1},
						{"10Rnd_338_Mag", 3},
						{"srifle_DMR_02_F", 1}
					};
				};
				class Rahim 
				{
					items[] = 
					{
						{"srifle_DMR_01_F", 1},
						{"10Rnd_762x54_Mag", 3}
					};
				};
				class MkIEMR 
				{
					items[] = 
					{
						{"srifle_DMR_03_woodland_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class ASP1Kir 
				{
					items[] = 
					{
						{"srifle_DMR_04_F", 1},
						{"10Rnd_127x54_Mag", 3}
					};
				};
				class Mk14 
				{
					items[] = 
					{
						{"srifle_DMR_06_camo_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class CMR 
				{
					items[] = 
					{
						{"srifle_DMR_07_ghex_F", 1},
						{"20Rnd_650x39_Cased_Mag_F", 2}
					};
				};
				class EBR 
				{
					items[] = 
					{
						{"srifle_EBR_F", 1},
						{"20Rnd_762x51_Mag", 2}
					};
				};
				class MXSW 
				{
					items[] = 
					{
						{"arifle_MX_SW_Black_F", 1},
						{"30Rnd_65x39_caseless_mag", 2}
					};
				};
				class Mk200 
				{
					items[] = 
					{
						{"LMG_Mk200_F", 1},
						{"200Rnd_65x39_cased_Box", 1}
					};
				};
			};
		};

		class AbandonedSafe
		{
			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 0;
			markerTime = 15; // minutes
		};

		class AmbientFlyOver
		{
			type = "call";
			function = "ExileServer_system_event_ambientFlyOver_start";
			minTime = 30; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 1;
		};
	};
	
	class Logging
	{
		/*
			If logging is enabled separate logs will be made in the sql logs folder for each type
		*/
		traderLogging = 1;
		deathLogging = 1;
		territoryLogging = 1;
	};


	///////////////////////////////////////////////////////////////////////
	// EXILE ESCAPE CONFIGURATION
	// NOTE: REQUIRES ExileEscape.MAPNAME MISSION FILE TO BE LOADED!
	///////////////////////////////////////////////////////////////////////
	class Escape
	{
		/*
			A very simple option with powerful consequences
			Set to 1 to enable Exile Escape!
		*/
		enableEscape = 0;
		
		/*
			Map Configs
		*/
		class Tanoa 
		{
			//Starting Position and radius
			startingLocation[] = {1277.18,560.44,0.00142193};
			startingAreaRadius = 100;
		};
		
		class Altis
		{
			//Starting Position and radius
			startingLocation[] = {8452.87, 25086.9, 0};
			startingAreaRadius = 200;
		};

		// Which players are allowed to spectate after they are dead.
		// Useful for admins/mods and streamers
		spectatorUIDs[] = 
		{
			"76561197985241690",	// Eichi
			"76561198022879703",	// Grim
			"76561198075905447",	// Vish
			"76561198037177305"		// WolfkillArcadia
		};
		
		//Number of players needed before the game initializes
		minimumPlayersOnline = 10;
		
		//Radius of the circle for each round
		roundZoneRadius[] = {1000, 500, 250};
		
		//Final shrink size of last round. To prevent shrinking make finalZoneRadius equal to last roundZoneRadius
		finalZoneRadius = 100;
		
		//Time in minutes after minimumPlayersOnline met before game begins
		timeBeforeStart = 5;
		
		//Total Round Minutes
		minutesPerRound = 10;
		
		//Minutes after round starts before new preview
		minutesBeforePreview = 7;

		// How much do ppl get when they win?
		respectWinKill = 1000;
		respectWinGetIn = 500;
		respectWinSuicide = 500;
		
		//Number of weapon boxes to spawn
		numberOfBoxes = 10;
	};
};