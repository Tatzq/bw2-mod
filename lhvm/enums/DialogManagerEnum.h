#ifndef _DIALOGMANAGERENUM_H
#define _DIALOGMANAGERENUM_H

// Last Saved,#2005-08-22 14:32:59#,"nwallace"

enum  DIALOG_LAND_NUMBER
{
	LAND_ANY,
	LAND_01,
	LAND_02,
	LAND_03,
	LAND_04,
	LAND_05,
	LAND_06,
	LAND_07,
	LAND_08,
	LAND_09,
	LAND_10,
	LAND_11,
	DIALOG_LAND_NUMBER_LAST,
};

enum  DIALOG_MAGNITUDE
{
	MAGNITUDE_LO,
	MAGNITUDE_MED,
	MAGNITUDE_HI,
	DIALOG_MAGNITUDE_LAST,
};

enum  DIALOG_EVENT_TYPE
{
	EVENT_TYPE_GENERIC_GENERAL_STORY,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT_GREEKS_LOSE_BATTLE,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT_GREEKS_TAKE_TOWNS,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT_GREEKS_TAKE_TOWNS_IMPRESS,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT_GREEKS_WIN_BATTLES,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT_GREEK_ARMIES,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT_GREEK_IMPRESS,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT_ENEMY_TAKE_TOWNS,
	EVENT_TYPE_GENERIC_GENERAL_TAUNT_ENEMY_IMPRESS_TOWNS,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_ARCHER_ARMOURY,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_ABODE,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_ARMOURY,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_EMBELISHMENT,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_EPIC_WONDER,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_FERTILITY_STATUE,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_FIELD,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_GATEHOUSE,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_GRANARY,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_LUMBERMILL,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_MARKET,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_NURSERY,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_PRISON,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_SCENIC_TREES,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_SMELTER,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_STOREHOUSE,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_TAVERN,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_TEMPLE,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_UNIVERSITY,
	EVENT_TYPE_GENERIC_GENERAL_BUILDS_WALL,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_AMPHITHEATRE,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_AN_ALTAR,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_ARCHER_ARMOURY,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_ARMOURY,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_BIG_ARMY,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_BATH_HOUSE,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_CATAPULT,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_CATAPULT_WORKSHOP,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_FIELD,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_GATEHOUSE,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_GRANARY,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_GRAVEYARD,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_HOUSE_A,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_HOUSE_B,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_HOUSE_C,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_HOUSE_D,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_HOUSE_E,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_LUMBER_MILL,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_MARKET,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_NURSERY,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_PEN,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_PRISON,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_RESTHOME,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_STOREHOUSE,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_SKYSCRAPER,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_SMELTER,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_TAVERN,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_TEMPLE,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_UNIVERSITY,
	EVENT_TYPE_GENERIC_PLAYER_BUILDS_WALL,
	EVENT_TYPE_GENERIC_PLAYER_CREATURE_KILLS_ENEMY_CREATURE,
	EVENT_TYPE_GENERIC_PLAYER_CREATURE_KILLS_ENEMY_UNIT,
	EVENT_TYPE_GENERIC_PLAYER_CREATURE_KILLS_ENEMY_CATAPULT,
	EVENT_TYPE_GENERIC_PLAYER_CREATURE_SMASHES_ENEMY_WALL,
	EVENT_TYPE_GENERIC_PLAYER_ARMY_KILLS_CATAPULT,
	EVENT_TYPE_GENERIC_PLAYER_ARMY_KILLS_CREATURE,
	EVENT_TYPE_GENERIC_PLAYER_ARMY_KILLS_WALL,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_ABODE,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_FERTILITY_STATUE,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_FIELD,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_GATEHOUSE,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_GRANARY,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_MARKET,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_NURSERY,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_SCENIC_TREES,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_STOREHOUSE,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_TAVERN,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_TEMPLE,
	EVENT_TYPE_L8_PEACE_GENERAL_BUILDS_WALL,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_ABODE,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_ARCHER_ARMOURY,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_FERTILITY_STATUE,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_FIELD,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_ARMOURY,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_EMBELISHMENT,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_EPIC_WONDER,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_LUMBERMILL,
	EVENT_TYPE_L8_WAR_GENERAL_BUILDS_MARKET,
	EVENT_TYPE_XXX,
	EVENT_TYPE_GENERIC_ARCHERS_WIN_FIGHT,
	EVENT_TYPE_GENERIC_ARCHER_UNIT_HAS_FIRST_FIGHT,
	EVENT_TYPE_GENERIC_ARCHER_UNIT_KILLED,
	EVENT_TYPE_GENERIC_MELEE_UNIT_HAS_FIRST_FIGHT,
	EVENT_TYPE_GENERIC_MELEE_UNIT_KILLED,
	EVENT_TYPE_GENERIC_MELEE_UNIT_WINS_FIGHT,
	EVENT_TYPE_GENERIC_PLAYER_RECRUITS_ARCHER_UNIT,
	EVENT_TYPE_GENERIC_PLAYER_RECRUITS_MELEE_UNIT,
	EVENT_TYPE_GENERIC_PLAYER_TAKES_TOWN_GOOD,
	EVENT_TYPE_GENERIC_PLAYER_TAKES_TOWN_EVIL,
	EVENT_TYPE_GENERIC_PLAYER_LOSES_TOWN,
	EVENT_TYPE_GENERIC_MIGRATION_ARRIVES_AT_PLAYER_TOWN,
	EVENT_TYPE_GENERIC_PLAYER_LOOKS_AT_ENEMY_TOWN,
	EVENT_TYPE_GENERIC_PLAYER_KILLS_VILLAGER_EA,
	EVENT_TYPE_GENERIC_PLAYER_KILLS_VILLAGER_GA,
	EVENT_TYPE_GENERIC_PLAYERS_TOWN_UNDER_ATTACK,
	DIALOG_EVENT_TYPE_LAST,
};

enum DIALOD_ID_ENUM
{
	DIALOG_ID_LAST= 375 ,
};
#endif
