#pragma once

//------------------------------------------------------------------------------------------------------------------------
enum BINDABLE_ACTION_TYPE		//The order of these must not change.
{
	//Action					//Default interface

	BINDABLE_ACTION_TYPE_MOVE=0,						//LMB
	BINDABLE_ACTION_TYPE_ACTION,						//RMB
	BINDABLE_ACTION_TYPE_ZOOM_IN,						//Keys or mouse wheel, or both buttons
	BINDABLE_ACTION_TYPE_ZOOM_OUT,
	BINDABLE_ACTION_TYPE_ZOOM_ON,						//Only both buttons, or CTRL
	BINDABLE_ACTION_TYPE_MOVE_LEFT,						//Cursors
	BINDABLE_ACTION_TYPE_MOVE_RIGHT,
	BINDABLE_ACTION_TYPE_MOVE_FORWARD,
	BINDABLE_ACTION_TYPE_MOVE_BACKWARD,
	BINDABLE_ACTION_TYPE_ROTATE_LEFT,
	BINDABLE_ACTION_TYPE_ROTATE_RIGHT,
	BINDABLE_ACTION_TYPE_TILT_ROTATE_ON,
	BINDABLE_ACTION_TYPE_TILT_ROTATE_AROUND_MOUSE,
	BINDABLE_ACTION_TYPE_LEASH_UNLEASH_CREATURE,
	BINDABLE_ACTION_TYPE_SHOW_VILLAGER_NAME,
	BINDABLE_ACTION_TYPE_SHOW_VILLAGER_DETAILS,
	BINDABLE_ACTION_TYPE_QUICK_SAVE,
	BINDABLE_ACTION_TYPE_QUICK_LOAD,
	BINDABLE_ACTION_TYPE_DISPLAY_SCRIPT_LOG,
	BINDABLE_ACTION_TYPE_FUNCTION_MODIFIER,
	BINDABLE_ACTION_TYPE_CANCEL_CURRENT_ACTION,
	BINDABLE_ACTION_TYPE_TOGGLE_TOOLTIPS,
	BINDABLE_ACTION_TYPE_RECAST_MIRACLE,
	BINDABLE_ACTION_TYPE_ZOOM_TO_PREVIOUS_BOOKMARK,
	BINDABLE_ACTION_TYPE_ZOOM_TO_NEXT_BOOKMARK,
	BINDABLE_ACTION_TYPE_ZOOM_TO_PREVIOUS_ARMY_UNIT,
	BINDABLE_ACTION_TYPE_ZOOM_TO_NEXT_ARMY_UNIT,
	BINDABLE_ACTION_TYPE_ZOOM_PREVIOUS_TOWN_CENTRE,
	BINDABLE_ACTION_TYPE_ZOOM_NEXT_TOWN_CENTRE,
	BINDABLE_ACTION_TYPE_ZOOM_TO_CREATURE,
	BINDABLE_ACTION_TYPE_ZOOM_TO_TOWN,
	BINDABLE_ACTION_TYPE_ZOOM_ENEMY_TOWN_CENTRE,
	BINDABLE_ACTION_TYPE_CHANGE_CREATURE_ROLES,
	BINDABLE_ACTION_TYPE_TAKE_SCREENSHOT,
	BINDABLE_ACTION_TYPE_TOGGLE_TOOLBAR,
	BINDABLE_ACTION_TYPE_TOGGLE_OBJECTIVE_WINDOW,
	BINDABLE_ACTION_TYPE_SHOW_FERTILITY_MAP,
	BINDABLE_ACTION_TYPE_ACTIVATE_DESTRUCTION_TOOL,
	BINDABLE_ACTION_TYPE_SWAP_MOUSE_BUTTONS,
	//BINDABLE_ACTION_TYPE_SKIP_DIALOGUE_LINE,	//Neil Wak - removed a
	BINDABLE_ACTION_TYPE_LAST,
	BINDABLE_ACTION_TYPE_NONE=-1,
};
