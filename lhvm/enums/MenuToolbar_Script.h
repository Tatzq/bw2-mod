#ifndef MENUTOOLBARSCRIPT_H
#define MENUTOOLBARSCRIPT_H

// id of current menu
enum MENU_TOOLBAR_ID
{
	// root menus
	MENU_TOOLBAR_BUILD,
	MENU_TOOLBAR_STATS,
	MENU_TOOLBAR_CREATURE_TEACH,
	MENU_TOOLBAR_CREATURE_ROLE,
	MENU_TOOLBAR_TRIBUTES,
	MENU_TOOLBAR_SPELLS,
	MENU_TOOLBAR_OBJECTIVES,

	// stats menu
	MENU_TOOLBAR_STATS_POPULATION,
	MENU_TOOLBAR_STATS_DISCIPLES,
	MENU_TOOLBAR_STATS_JOBS,
	MENU_TOOLBAR_STATS_BUILDINGS,
	MENU_TOOLBAR_STATS_IMPRESSIVENESS,
	MENU_TOOLBAR_STATS_CREATURE,
	MENU_TOOLBAR_STATS_TOME
};

// menu display state
enum MENU_TOOLBAR_STATE
{
	MENU_TOOLBAR_STATE_CLOSED,
	MENU_TOOLBAR_STATE_OPEN_NORMAL,
	MENU_TOOLBAR_STATE_OPEN_FULL,
};

enum MENU_HIGHLIGHT_ITEM
{
	MENU_HIGHLIGHT_NONE = -1, 

	MENU_HIGHLIGHT_ICON_0,
	MENU_HIGHLIGHT_ICON_1,
	MENU_HIGHLIGHT_ICON_2,
	MENU_HIGHLIGHT_ICON_3,
	MENU_HIGHLIGHT_ICON_4,
	MENU_HIGHLIGHT_ICON_5,
	MENU_HIGHLIGHT_ICON_6,

	MENU_HIGHLIGHT_TAB_0,
	MENU_HIGHLIGHT_TAB_1,
	MENU_HIGHLIGHT_TAB_2,
	MENU_HIGHLIGHT_TAB_3,
	MENU_HIGHLIGHT_TAB_4,
	MENU_HIGHLIGHT_TAB_5,
	MENU_HIGHLIGHT_TAB_6,

	MENU_HIGHLIGHT_MODE_0,
	MENU_HIGHLIGHT_MODE_1,
	MENU_HIGHLIGHT_MODE_2,
	MENU_HIGHLIGHT_MODE_3,
	MENU_HIGHLIGHT_MODE_4,
	MENU_HIGHLIGHT_MODE_5,
	MENU_HIGHLIGHT_MODE_6,

	MENU_HIGHLIGHT_HANDLE,
	MENU_HIGHLIGHT_BUYBUTTON,
	MENU_HIGHLIGHT_CREATURE_WILL,
	MENU_HIGHLIGHT_ARMYICON
};

// menu access functions
namespace MenuToolbarScript
{

MENU_TOOLBAR_STATE GetCurrentToolbarState();
void SetCurrentToolbarState(MENU_TOOLBAR_STATE state);
MENU_TOOLBAR_ID GetCurrentMenu();
MENU_TOOLBAR_ID GetCurrentRootMenu();
void SetCurrentMenu(MENU_TOOLBAR_ID id);
BOOL IsHandleHeld();
void HighlightMenuItem(MENU_HIGHLIGHT_ITEM item);
void ClearHighlightedMenuItem();
void AllowPauseInMenus(BOOL allow);
void ShowTutorialMenu();
void ShowAndAutohideTutorialMenu();
void HideTutorialMenu();
void AllowTutorialMenuInWidescreen(BOOL show);
MENU_HIGHLIGHT_ITEM GetLastButtonPressed();
FLOAT GetTimeSinceLastButtonPressed();
void EnableToolbarSwitching();
void DisableToolbarSwitching();
void EnableToolbarScrolling();
void DisableToolbarScrolling();
void HighlightTributeItem(ARTEFACT item);
void SetCreatureIconVisible(BOOL show);
void EnableDestructionTool(BOOL enable);

};

#endif // MENUTOOLBARSCRIPT_H