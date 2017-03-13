// Advisor Animation Header

#ifndef HELPDUDEANIM_H
#define HELPDUDEANIM_H


#define HELPDUDE_CURRENT_VERSION                1

enum HELPDUDE_ANIM
{
	HELPDUDE_AGREE,                         // 0
	HELPDUDE_AGREE2,                        // 1
	HELPDUDE_AGREE3,                        // 2
	HELPDUDE_ANGRY,                         // 3
	HELPDUDE_ANNOYED,                       // 4
	HELPDUDE_APOLOGISE,                     // 5
	HELPDUDE_APPEARING,                     // 6
	HELPDUDE_APPEARING2,                    // 7
	HELPDUDE_ATTENTION,                     // 8
	HELPDUDE_BORED,                         // 9
	HELPDUDE_CONCERN,                       // 10
	HELPDUDE_CONSIDER,                      // 11
	HELPDUDE_DECISIVE,                      // 12
	HELPDUDE_DESPAIR,                       // 13
	HELPDUDE_DETERMINED,                    // 14
	HELPDUDE_DISAGREE,                      // 15
	HELPDUDE_DISAGREEABLE,                  // 16
	HELPDUDE_DISAPPEARING,                  // 17
	HELPDUDE_DISAPPEARING2,                 // 18
	HELPDUDE_DISMISSIVE,                    // 19
	HELPDUDE_ENTERING_WORLD,                // 20
	HELPDUDE_EYE_L_SHUT,                    // 21
	HELPDUDE_EYE_R_SHUT,                    // 22
	HELPDUDE_FEAR,                          // 23
	HELPDUDE_FING_L_POINT_CAM,              // 24
	HELPDUDE_FING_RAISED,                   // 25
	HELPDUDE_FING_SHAKE,                    // 26
	HELPDUDE_FLYPOSE_D,                     // 27
	HELPDUDE_FLYPOSE_L,                     // 28
	HELPDUDE_FLYPOSE_R,                     // 29
	HELPDUDE_FLYPOSE_U,                     // 30
	HELPDUDE_FORCEFUL,                      // 31
	HELPDUDE_FRUSTRATION,                   // 32
	HELPDUDE_HAND_CHOP,                     // 33
	HELPDUDE_HAND_DO_THAT,                  // 34
	HELPDUDE_HAND_DO_THIS,                  // 35
	HELPDUDE_HAND_JAB,                      // 36
	HELPDUDE_HAND_L_BEND,                   // 37
	HELPDUDE_HAND_L_CHOP,                   // 38
	HELPDUDE_HAND_L_GRASPAIR,               // 39
	HELPDUDE_HAND_L_JAB,                    // 40
	HELPDUDE_HAND_L_PUNCHAIR,               // 41
	HELPDUDE_HAND_L_PURSE,                  // 42
	HELPDUDE_HAND_L_SHOW,                   // 43
	HELPDUDE_HAND_L_THUMBFOREFINGTOUCH,     // 44
	HELPDUDE_HAND_PUNCHAIR,                 // 45
	HELPDUDE_HAND_R_BEND,                   // 46
	HELPDUDE_HAND_R_GRASP_D,                // 47
	HELPDUDE_HAND_R_GRASPAIR,               // 48
	HELPDUDE_HAND_R_HOLDAIR,                // 49
	HELPDUDE_HAND_R_SHOW,                   // 50
	HELPDUDE_HAND_R_THUMBFOREFINGTOUCH,     // 51
	HELPDUDE_HAND_SCISSOR,                  // 52
	HELPDUDE_HAPPY,                         // 53
	HELPDUDE_HAPPY2,                        // 54
	HELPDUDE_HEAD_LOOK_R,                   // 55
	HELPDUDE_HEAD_NOD,                      // 56
	HELPDUDE_HEAD_NOD_HARD,                 // 57
	HELPDUDE_HEAD_NOD_SIDE,                 // 58
	HELPDUDE_HEAD_NOD_SOFT,                 // 59
	HELPDUDE_HEAD_NOD_U,                    // 60
	HELPDUDE_HEAD_SHAKE,                    // 61
	HELPDUDE_HEAD_TILT_BACK,                // 62
	HELPDUDE_HEAD_TILT_FRONT,               // 63
	HELPDUDE_HEAD_TILT_SIDE,                // 64
	HELPDUDE_HOVER,                         // 65
	HELPDUDE_HOVER_L,                       // 66
	HELPDUDE_HOVER_R,                       // 67
	HELPDUDE_INDECISIVE,                    // 68
	HELPDUDE_JOY,                           // 69
	HELPDUDE_KILL_EM,                       // 70
	HELPDUDE_KM_01FINAL_ADVISORS_ARRIVENEW_G_20_30_40_50_60, // 71
	HELPDUDE_KM_01FINAL_ADVISORS_ARRIVENEW_E_20_30_40_50_60, // 72
	HELPDUDE_KM_01FINAL_ADVISORS_ROCK_MAN_G_110_120, // 73
	HELPDUDE_KM_01FINAL_ADVISORS_ROCK_MAN_E_110_120, // 74
	HELPDUDE_KM_01FINAL_ADVISORS_ROCK_MAN_G_130_140, // 75
	HELPDUDE_KM_01FINAL_ADVISORS_ROCK_MAN_E_130_140, // 76
	HELPDUDE_KM_01FINAL_ADVISORS_ROCK_MAN_G_90_100, // 77
	HELPDUDE_KM_01FINAL_ADVISORS_ROCK_MAN_E_90_100, // 78
	HELPDUDE_KM_02FINAL_PDMRON_PICKUP_E_94_95_96_97, // 79
	HELPDUDE_KM_02FINAL_PDMRON_PICKUP_G_94_95_96_97, // 80
	HELPDUDE_KM_02FINAL_PLAYTHROUGH29_OUTRO_E_10_20_30_40_60, // 81
	HELPDUDE_KM_02FINAL_PLAYTHROUGH29_OUTRO_G_10_20_30_40_60, // 82
	HELPDUDE_KM_03FINAL_ADVISORS_BUILDTUTORIAL_HOUSEFINISHED_E_10, // 83
	HELPDUDE_KM_03FINAL_ADVISORS_BUILDTUTORIAL_HOUSEFINISHED_G_10, // 84
	HELPDUDE_KM_03FINAL_ADVISORS_INTRO_G_10_20, // 85
	HELPDUDE_KM_03FINAL_ADVISORS_INTRO_E_10_20, // 86
	HELPDUDE_KM_03FINAL_ADVISORS_OUTRO_G_10_20, // 87
	HELPDUDE_KM_03FINAL_ADVISORS_OUTRO_E_10_20, // 88
	HELPDUDE_KM_03FINAL_ADVISORS_OUTRO_G_30_40, // 89
	HELPDUDE_KM_03FINAL_ADVISORS_OUTRO_E_30_40, // 90
	HELPDUDE_KM_03FINAL_ADVISORS_TUT_G_320_330, // 91
	HELPDUDE_KM_03FINAL_ADVISORS_TUT_E_320_330, // 92
	HELPDUDE_KM_03FINAL_ADVISORS_TUT_G_490, // 93
	HELPDUDE_KM_03FINAL_ADVISORS_TUT_G_500, // 94
	HELPDUDE_KM_03FINAL_ADVISORS_TUT_E_510, // 95
	HELPDUDE_KM_03FINAL_ADVISORS_TUT_E_540, // 96
	HELPDUDE_KM_03FINAL_ADVISORS_TUT_G_550, // 97
	HELPDUDE_KM_03FINAL_ADVISORS_TUT_E_550, // 98
	HELPDUDE_KM_04FINAL_ADVISORS_MANA_TUT_E_220, // 99
	HELPDUDE_KM_04FINAL_GHOSTLEGION_E_50_60, // 100
	HELPDUDE_KM_04FINAL_INTRO_G_180_190,    // 101
	HELPDUDE_KM_04FINAL_INTRO_E_180_190,    // 102
	HELPDUDE_KM_04FINAL_PDM_ENDLAND_WAR_WIN_G_10, // 103
	HELPDUDE_KM_04FINAL_PDM_ENDLAND_WAR_WIN_E_10, // 104
	HELPDUDE_KM_04FINAL_PDM_ENDLAND_IMPRESS_WIN_G_70, // 105
	HELPDUDE_KM_06FINAL_INTRO_G_10,         // 106
	HELPDUDE_KM_06FINAL_INTRO_E_10,         // 107
	HELPDUDE_KM_06FINAL_CHALLENGE_PATERNITY_SHEEP_MISS_E_20, // 108
	HELPDUDE_KM_07FINAL_ADVISORS_INTRO_G_30_40_50, // 109
	HELPDUDE_KM_07FINAL_ADVISORS_INTRO_E_30_40_50, // 110
	HELPDUDE_KM_08FINAL_ADVISORS_INTRO_G_10_20_30_40_50, // 111
	HELPDUDE_KM_08FINAL_ADVISORS_INTRO_E_10_20_30_40_50, // 112
	HELPDUDE_KM_09FINAL_ADVISORS_INTRO_E_10, // 113
	HELPDUDE_KM_09FINAL_CHALLENGE_RAINDANCE_G_400, // 114
	HELPDUDE_KM_09FINAL_CHALLENGE_RAINDANCE_G_440, // 115
	HELPDUDE_KM_11FINAL_ADVISORS_INTRO_G_10_20_30_40_50_60_70_140, // 116
	HELPDUDE_KM_11FINAL_ADVISORS_INTRO_E_10_20_30_40_50_60_70_140, // 117
	HELPDUDE_KM_11FINAL_ADVISORS_LAND_DONE_G_30_40, // 118
	HELPDUDE_KM_11FINAL_ADVISORS_LAND_DONE_E_30_40, // 119
	HELPDUDE_KM_11FINAL_EPILOGUE_G_20_30,   // 120
	HELPDUDE_KM_11FINAL_EPILOGUE_E_20_30,   // 121
	HELPDUDE_LAUGH,                         // 122
	HELPDUDE_LAUGH_2,                       // 123
	HELPDUDE_LEAN_BACK,                     // 124
	HELPDUDE_LEAN_FRONT,                    // 125
	HELPDUDE_LEAN_SIDE,                     // 126
	HELPDUDE_LOOK_LR,                       // 127
	HELPDUDE_LOOK_UD,                       // 128
	HELPDUDE_MOCKING,                       // 129
	HELPDUDE_MOCKING2,                      // 130
	HELPDUDE_MOCKING3,                      // 131
	HELPDUDE_MS_AI,                         // 132
	HELPDUDE_MS_CDGKNRSTHYZ,                // 133
	HELPDUDE_MS_CLOSE,                      // 134
	HELPDUDE_MS_E,                          // 135
	HELPDUDE_MS_FV,                         // 136
	HELPDUDE_MS_MBP,                        // 137
	HELPDUDE_MS_O,                          // 138
	HELPDUDE_MS_WQ,                         // 139
	HELPDUDE_NERVIOUSTWICH,                 // 140
	HELPDUDE_NERVOUSTWICH1,                 // 141
	HELPDUDE_NORMAL,                        // 142
	HELPDUDE_PALM_BOTH_BACK,                // 143
	HELPDUDE_PALM_BOTH_D,                   // 144
	HELPDUDE_PALM_BOTH_FRONT,               // 145
	HELPDUDE_PALM_BOTH_FRONT1,              // 146
	HELPDUDE_PALM_BOTH_SIDE,                // 147
	HELPDUDE_PALM_BOTH_U,                   // 148
	HELPDUDE_PALM_L_D,                      // 149
	HELPDUDE_PALM_L_U,                      // 150
	HELPDUDE_PALM_R_D,                      // 151
	HELPDUDE_PALM_R_D_01,                   // 152
	HELPDUDE_PLEAD,                         // 153
	HELPDUDE_PLEASURE,                      // 154
	HELPDUDE_POINT_L,                       // 155
	HELPDUDE_POINT_L_IN,                    // 156
	HELPDUDE_POINT_R,                       // 157
	HELPDUDE_POINT_R_IN,                    // 158
	HELPDUDE_RAGE,                          // 159
	HELPDUDE_SAD,                           // 160
	HELPDUDE_SAD2,                          // 161
	HELPDUDE_SHAME,                         // 162
	HELPDUDE_SHOCK,                         // 163
	HELPDUDE_SHRUG,                         // 164
	HELPDUDE_SURPRISED,                     // 165
	HELPDUDE_THOUGHTFUL,                    // 166
	HELPDUDE_THREATENING,                   // 167
	HELPDUDE_UNDERSTANDING,                 // 168
	HELPDUDE_VICTORY,                       // 169
	HELPDUDE_VICTORY2,                      // 170
	HELPDUDE_SCREEN_BOTTOM,                 // 171
	HELPDUDE_SCREEN_TOP,                    // 172
	HELPDUDE_SCREEN_LEFT,                   // 173
	HELPDUDE_SCREEN_RIGHT,                  // 174
};

#define HELPDUDE_NUM_ANIMS                      175

#endif
