/**
 *
 *   ██████╗   ██╗ ███████╗ ███╗   ███╗ ██╗   ██╗
 *   ██╔══██╗ ███║ ██╔════╝ ████╗ ████║ ██║   ██║
 *   ██████╔╝ ╚██║ █████╗   ██╔████╔██║ ██║   ██║
 *   ██╔══██╗  ██║ ██╔══╝   ██║╚██╔╝██║ ██║   ██║
 *   ██║  ██║  ██║ ███████╗ ██║ ╚═╝ ██║ ╚██████╔╝
 *   ╚═╝  ╚═╝  ╚═╝ ╚══════╝ ╚═╝     ╚═╝  ╚═════╝
 *
 * @file packet_type.h
 * @brief PacketType enumerates all the packets used in the game between the client and the server
 *
 * @license GNU GENERAL PUBLIC LICENSE - Version 2, June 1991
 *          See LICENSE file for further information
 */

#pragma once

#include "R1EMU.h"

#define PACKET_TYPES_MAX_INDEX      (PACKET_TYPE_COUNT + 1)

/**
 * @brief PacketType enumerates all the packets used in the game between the client and the server
 */
typedef enum PacketType {
	CB_LOGIN = 3, // size = 65
	CB_LOGIN_BY_PASSPORT = 4, // size = 1052
	CB_LOGOUT = 5, // size = 10
	CB_START_GAME = 9, // size = 13
	CB_START_BARRACK = 6, // size = 11
	CB_COMMANDER_CREATE = 7, // size = 92
	CB_COMMANDER_DESTROY = 8, // size = 11
	CB_ECHO = 12, // size = 30
	CB_BARRACKNAME_CHANGE = 10, // size = 74
	CB_COMMANDER_MOVE = 11, // size = 31
	BC_LOGINOK = 13, // size = 117
	BC_LOGOUTOK = 14, // size = 6
	BC_START_GAMEOK = 18, // size = 33
	BC_SINGLE_INFO = 19, // size = 309
	BC_COMMANDER_LIST = 15, // size = 0
	BC_COMMANDER_CREATE = 16, // size = 318
	BC_COMMANDER_DESTROY = 17, // size = 7
	BC_MESSAGE = 20, // size = 0
	BC_ECHO = 21, // size = 26
	CB_IES_MODIFY_INFO = 70, // size = 0
	BC_IES_MODIFY_INFO = 71, // size = 0
	BC_IES_MODIFY_LIST = 72, // size = 0
	CB_IES_REVISION_DELETE = 73, // size = 0
	BC_IES_REVISION_DELETE = 74, // size = 0
	BC_MYPAGE_MAP = 22, // size = 0
	BC_BARRACKNAME_CHANGE = 23, // size = 75
	CB_VISIT = 75, // size = 74
	CB_BUY_THEMA = 76, // size = 18
	BC_ACCOUNT_PROP = 77, // size = 0
	CB_CURRENT_BARRACK = 78, // size = 39
	BC_NORMAL = 79, // size = 0
	CB_POSE = 80, // size = 15
	CB_PLACE_CMD = 81, // size = 46
	CB_CHAT = 82, // size = 0
	BC_CHAT = 83, // size = 0
	CB_ECHO_NORMAL = 84, // size = 0
	CB_JUMP = 85, // size = 19
	BC_JUMP = 86, // size = 19
	BC_SERVER_ENTRY = 87, // size = 18
	CB_PET_PC = 88, // size = 26
	CB_DELETE_PET = 89, // size = 18
	CB_REQ_CHANGE_POSTBOX_STATE = 90, // size = 22
	CB_REQ_GET_POSTBOX_ITEM = 91, // size = 30
	BC_WAIT_QUEUE_ORDER = 92, // size = 10
	CB_CANCEL_SERVER_WAIT_QUEUE = 93, // size = 10
	CS_LOGIN = 2901, // size = 64
	SC_NORMAL = 2902, // size = 0
	SC_FROM_INTEGRATE = 2903, // size = 0
	CS_REGISTER_SNS_ID = 2904, // size = 16
	CS_REQ_SNS_PC_INFO = 2905, // size = 0
	CS_REQ_MARKET_LIST = 2906, // size = 158
	CS_REQ_MY_SELL_LIST = 2907, // size = 10
	CS_REQ_ADD_FRIEND = 2908, // size = 70
	CS_REQ_BLOCK_FRIEND = 2909, // size = 70
	CS_FRIEND_CMD = 2910, // size = 24
	CS_FRIEND_SET_ADDINFO = 2911, // size = 160
	CS_CHAT = 2912, // size = 0
	CS_CREATE_GROUP_CHAT = 2913, // size = 6
	CS_GROUP_CHAT_INVITE = 2914, // size = 78
	CS_REFRESH_GROUP_CHAT = 2915, // size = 6
	CS_CHAT_HISTORY = 2916, // size = 22
	CS_CHAT_READ = 2917, // size = 30
	CS_REMOVE_GROUP_MEMBER = 2918, // size = 14
	CS_PC_INTERACTION = 2919, // size = 24
	CS_PC_INTERACTION_HISTORY = 2921, // size = 32
	CS_ADD_RELATION_SCORE = 2932, // size = 88
	CS_GET_LIKE_COUNT = 2933, // size = 16
	CS_LIKE_IT = 2929, // size = 80
	CS_UNLIKE_IT = 2930, // size = 16
	CS_LIKE_IT_CONFIRM = 2931, // size = 16
	CS_REQ_RELATED_PC_SESSION = 2920, // size = 16
	CS_REDIS_SKILLPOINT = 2922, // size = 22
	CS_PARTY_CLIENT_INFO_SEND = 2923, // size = 0
	CS_NORMAL_GAME_START = 2924, // size = 6
	CS_PVP_COMMAND = 2925, // size = 18
	CS_REQUEST_PVP_RANKING = 2926, // size = 83
	CS_INVITE_PARTY_PVP = 2927, // size = 10
	CS_ACCEPT_PARTY_PVP = 2928, // size = 19
	CZ_CONNECT = 3001, // size = 1164
	CZ_GAME_READY = 3070, // size = 10
	CZ_KEYBOARD_MOVE = 3081, // size = 41
	CZ_EXPECTED_STOP_POS = 3082, // size = 31
	CZ_MOVE_PATH = 3086, // size = 27
	CZ_MOVE_STOP = 3087, // size = 35
	CZ_JUMP = 3083, // size = 11
	CZ_DASHRUN = 3084, // size = 11
	CZ_REST_SIT = 3088, // size = 10
	CZ_ON_AIR = 3089, // size = 10
	CZ_ON_GROUND = 3090, // size = 10
	CZ_SKILL_JUMP_REQ = 3085, // size = 30
	CZ_LOGOUT = 3072, // size = 11
	CZ_MOVE_BARRACK = 3073, // size = 11
	CZ_MOVE_ZONE_OK = 3004, // size = 10
	CZ_MOVEMENT_INFO = 3091, // size = 23
	CZ_SKILL_TARGET = 3092, // size = 19
	CZ_SKILL_TARGET_ANI = 3093, // size = 23
	CZ_SKILL_GROUND = 3094, // size = 57
	CZ_SKILL_SELF = 3095, // size = 35
	CZ_SKILL_CANCEL = 3096, // size = 11
	CZ_HOLD = 3097, // size = 11
	CZ_SHOUT = 3104, // size = 0
	CZ_CHAT = 3102, // size = 0
	CZ_CHAT_LOG = 3103, // size = 0
	CZ_ITEM_USE = 3107, // size = 22
	CZ_ITEM_USE_TO_ITEM = 3108, // size = 30
	CZ_ITEM_USE_TO_GROUND = 3109, // size = 30
	CZ_ITEM_DROP = 3105, // size = 22
	CZ_ITEM_EQUIP = 3112, // size = 19
	CZ_ITEM_UNEQUIP = 3113, // size = 11
	ZC_CHECK_INVINDEX = 3114, // size = 30
	CZ_ITEM_DELETE = 3106, // size = 0
	CZ_ITEM_BUY = 3110, // size = 0
	CZ_ITEM_SELL = 3111, // size = 0
	CZ_DIALOG_ACK = 3139, // size = 14
	CZ_DIALOG_SELECT = 3140, // size = 11
	CZ_DIALOG_STRINGINPUT = 3141, // size = 138
	CZ_LEAVE_TO_DUNGEON = 3026, // size = 10
	CZ_MOVE_CAMP = 3160, // size = 18
	CZ_CAMPINFO = 3161, // size = 18
	ZC_CAMPINFO = 3162, // size = 18
	CZ_CLICK_TRIGGER = 3080, // size = 15
	CZ_ROTATE = 3098, // size = 18
	CZ_HEAD_ROTATE = 3099, // size = 18
	CZ_TARGET_ROTATE = 3100, // size = 18
	CZ_POSE = 3101, // size = 34
	ZC_ENTER_PC = 3006, // size = 370
	ZC_ENTER_MONSTER = 3007, // size = 0
	ZC_ENTER_DUMMYPC = 3008, // size = 292
	ZC_UPDATED_DUMMYPC = 3009, // size = 250
	ZC_ENTER_ITEM = 3010, // size = 103
	ZC_LEAVE = 3011, // size = 12
	ZC_MOVE_PATH = 3012, // size = 42
	ZC_MOVE_POS = 3013, // size = 42
	ZC_MSPD = 3016, // size = 14
	ZC_MOVE_SPEED = 3017, // size = 18
	ZC_MOVE_DIR = 3014, // size = 40
	ZC_EXPECTED_STOPPOS = 3015, // size = 35
	ZC_MOVE_STOP = 3018, // size = 23
	ZC_REST_SIT = 3019, // size = 11
	ZC_JUMP = 3020, // size = 19
	ZC_JUMP_DIR = 3021, // size = 34
	ZC_ORDER_SKILL_JUMP = 3022, // size = 10
	ZC_SKILL_JUMP = 3023, // size = 38
	ZC_SET_POS = 3024, // size = 22
	ZC_FILE_MOVE = 3025, // size = 46
	ZC_MESSAGE = 3076, // size = 0
	ZC_CONNECT_OK = 3002, // size = 0
	ZC_CONNECT_FAILED = 3005, // size = 0
	ZC_START_GAME = 3078, // size = 26
	ZC_MOVE_ZONE = 3003, // size = 7
	ZC_MOVE_BARRACK = 3074, // size = 6
	ZC_MOVE_ZONE_OK = 3071, // size = 57
	ZC_DEAD = 3056, // size = 0
	ZC_RESURRECT = 3057, // size = 18
	ZC_RESURRECT_DIALOG = 3059, // size = 7
	CZ_RESURRECT = 3067, // size = 11
	ZC_RESURRECT_SAVE_POINT_ACK = 3068, // size = 7
	ZC_RESURRECT_HERE_ACK = 3069, // size = 7
	ZC_UPDATED_PCAPPEARANCE = 3027, // size = 250
	ZC_UPDATED_MONSTERAPPEARANCE = 3028, // size = 0
	ZC_ADD_HP = 3032, // size = 22
	ZC_UPDATE_SP = 3136, // size = 15
	ZC_UPDATE_MHP = 3138, // size = 14
	ZC_EXP_UP = 3130, // size = 14
	ZC_EXP_UP_BY_MONSTER = 3131, // size = 18
	ZC_PC_LEVELUP = 3132, // size = 14
	ZC_PC_STAT_AVG = 3133, // size = 30
	ZC_MAX_EXP_CHANGED = 3134, // size = 18
	ZC_UPDATE_ALL_STATUS = 3171, // size = 26
	ZC_CHANGE_RELATION = 3058, // size = 11
	ZC_QUICK_SLOT_LIST = 3122, // size = 0
	ZC_SKILL_LIST = 3123, // size = 0
	ZC_SKILL_ADD = 3124, // size = 0
	ZC_SKILL_CAST_CANCEL = 3033, // size = 10
	ZC_SKILL_CAST = 3034, // size = 38
	ZC_SKILL_READY = 3035, // size = 46
	ZC_SKILL_USE_CANCEL = 3037, // size = 10
	ZC_SKILL_DISABLE = 3036, // size = 15
	ZC_SKILL_MELEE_TARGET = 3038, // size = 0
	ZC_SKILL_FORCE_TARGET = 3040, // size = 0
	ZC_SKILL_MELEE_GROUND = 3039, // size = 0
	ZC_SKILL_FORCE_GROUND = 3041, // size = 0
	ZC_SKILL_HIT_INFO = 3042, // size = 0
	ZC_ABILITY_LIST = 3125, // size = 0
	CZ_ACTIVE_ABILITY = 3126, // size = 15
	ZC_ACTIVE_ABILITY = 3127, // size = 11
	CZ_DISPEL_DEBUFF_TOGGLE = 3128, // size = 14
	CZ_JUNGTAN_TOGGLE = 3129, // size = 16
	ZC_BUFF_LIST = 3043, // size = 0
	ZC_BUFF_ADD = 3044, // size = 0
	ZC_BUFF_UPDATE = 3045, // size = 0
	ZC_BUFF_REMOVE = 3046, // size = 17
	ZC_BUFF_CLEAR = 3047, // size = 11
	CZ_BUFF_REMOVE = 3048, // size = 14
	CZ_INTE_WARP = 3049, // size = 14
	ZC_HIT_INFO = 3060, // size = 60
	ZC_HEAL_INFO = 3061, // size = 30
	ZC_CAUTION_DAMAGE_INFO = 3063, // size = 15
	ZC_CAUTION_DAMAGE_RELEASE = 3064, // size = 10
	ZC_KNOCKBACK_INFO = 3065, // size = 70
	ZC_KNOCKDOWN_INFO = 3066, // size = 71
	ZC_CHAT = 3029, // size = 0
	ZC_CHAT_WITH_TEXTCODE = 3030, // size = 14
	ZC_SHOUT = 3174, // size = 0
	ZC_SHOUT_FAILED = 3175, // size = 7
	ZC_TEXT = 3135, // size = 0
	ZC_QUIET = 3079, // size = 7
	ZC_DIALOG_CLOSE = 3147, // size = 6
	ZC_DIALOG_OK = 3143, // size = 0
	ZC_DIALOG_NEXT = 3144, // size = 0
	ZC_DIALOG_SELECT = 3145, // size = 0
	ZC_DIALOG_TRADE = 3148, // size = 39
	ZC_DIALOG_COMMON_TRADE = 3149, // size = 39
	ZC_DIALOG_ITEM_SELECT = 3146, // size = 0
	ZC_DIALOG_NUMBERRANGE = 3150, // size = 0
	ZC_DIALOG_STRINGINPUT = 3151, // size = 0
	ZC_STANCE_CHANGE = 3031, // size = 14
	ZC_ITEM_ADD = 3118, // size = 0
	ZC_ITEM_INVENTORY_LIST = 3115, // size = 0
	ZC_ITEM_INVENTORY_INDEX_LIST = 3116, // size = 0
	ZC_ITEM_EQUIP_LIST = 3117, // size = 0
	ZC_ITEM_REMOVE = 3119, // size = 20
	ZC_ITEM_USE = 3120, // size = 14
	ZC_ITEM_USE_TO_GROUND = 3121, // size = 22
	ZC_RESET_VIEW = 3077, // size = 6
	ZC_RESTORATION = 3137, // size = 12
	ZC_ROTATE = 3050, // size = 20
	ZC_ROTATE_RESERVED = 3051, // size = 18
	ZC_HEAD_ROTATE = 3052, // size = 18
	ZC_TARGET_ROTATE = 3053, // size = 18
	ZC_QUICK_ROTATE = 3054, // size = 18
	ZC_POSE = 3055, // size = 34
	ZC_DUMP_PROPERTY = 3173, // size = 0
	ZC_OBJECT_PROPERTY = 3172, // size = 0
	ZC_ADDON_MSG = 3152, // size = 0
	CZ_UI_EVENT = 3153, // size = 0
	ZC_LOGOUT_OK = 3075, // size = 6
	ZC_PLAY_SOUND = 3154, // size = 15
	ZC_STOP_SOUND = 3155, // size = 14
	ZC_PLAY_MUSICQUEUE = 3156, // size = 14
	ZC_STOP_MUSICQUEUE = 3157, // size = 14
	ZC_PLAY_ANI = 3158, // size = 24
	ZC_CHANGE_ANI = 3159, // size = 44
	ZC_PLAY_ALARMSOUND = 3167, // size = 83
	ZC_STOP_ALARMSOUND = 3168, // size = 10
	ZC_PLAY_EXP_TEXT = 3169, // size = 14
	ZC_PLAY_NAVI_EFFECT = 3170, // size = 150
	CZ_EXCHANGE_REQUEST = 3176, // size = 14
	ZC_EXCHANGE_REQUEST_ACK = 3177, // size = 72
	ZC_EXCHANGE_REQUEST_RECEIVED = 3178, // size = 71
	CZ_EXCHANGE_ACCEPT = 3179, // size = 10
	CZ_EXCHANGE_DECLINE = 3180, // size = 10
	ZC_EXCHANGE_DECLINE_ACK = 3181, // size = 6
	ZC_EXCHANGE_START = 3182, // size = 71
	CZ_EXCHANGE_OFFER = 3183, // size = 30
	ZC_EXCHANGE_OFFER_ACK = 3184, // size = 0
	CZ_EXCHANGE_AGREE = 3185, // size = 10
	ZC_EXCHANGE_AGREE_ACK = 3186, // size = 7
	CZ_EXCHANGE_FINALAGREE = 3187, // size = 10
	ZC_EXCHANGE_FINALAGREE_ACK = 3188, // size = 7
	CZ_EXCHANGE_CANCEL = 3189, // size = 10
	ZC_EXCHANGE_CANCEL_ACK = 3190, // size = 6
	ZC_EXCHANGE_SUCCESS = 3191, // size = 6
	ZC_COOLDOWN_LIST = 3192, // size = 0
	ZC_COOLDOWN_CHANGED = 3193, // size = 22
	ZC_OVERHEAT_CHANGED = 3194, // size = 26
	ZC_TEST_AGENT = 3195, // size = 18
	CZ_COMMON_SHOP_LIST = 3196, // size = 10
	ZC_COMMON_SHOP_LIST = 3197, // size = 8
	ZC_TIME_FACTOR = 3198, // size = 10
	ZC_PARTY_ENTER = 3199, // size = 0
	ZC_PARTY_OUT = 3200, // size = 24
	ZC_PARTY_DESTROY = 3201, // size = 15
	ZC_PARTY_INFO = 3202, // size = 0
	ZC_PARTY_LIST = 3203, // size = 0
	ZC_PARTY_CHAT = 3204, // size = 0
	ZC_PARTY_INST_INFO = 3205, // size = 0
	ZC_CHANGE_EQUIP_DURABILITY = 3206, // size = 11
	CZ_DIALOG_TX = 3207, // size = 0
	CZ_REQ_RECIPE = 3208, // size = 0
	ZC_CUSTOM_DIALOG = 3209, // size = 75
	ZC_SESSION_OBJECTS = 3210, // size = 0
	ZC_SESSION_OBJ_ADD = 3211, // size = 0
	ZC_SESSION_OBJ_REMOVE = 3212, // size = 10
	ZC_SESSION_OBJ_TIME = 3213, // size = 14
	CZ_S_OBJ_VALUE_C = 3214, // size = 24
	CZ_REQ_NORMAL_TX = 3215, // size = 29
	ZC_COMMANDER_LOADER_INFO = 3216, // size = 0
	ZC_MOVE_SINGLE_ZONE = 3217, // size = 18
	ZC_BACKTO_ORIGINAL_SERVER = 3218, // size = 8
	CZ_BACKTO_ORIGINAL_SERVER = 3219, // size = 12
	CZ_REQ_NORMAL_TX_NUMARG = 3220, // size = 0
	ZC_WIKI_LIST = 3221, // size = 0
	ZC_WIKI_ADD = 3222, // size = 22
	CZ_WIKI_GET = 3223, // size = 14
	CZ_WIKI_RECIPE_UPDATE = 3224, // size = 10
	ZC_UI_OPEN = 3225, // size = 39
	ZC_ENABLE_CONTROL = 3226, // size = 11
	ZC_CHANGE_CAMERA = 3227, // size = 31
	ZC_MONSTER_SDR_CHANGED = 3228, // size = 11
	ZC_MOVE_IGNORE_COLLISION = 3229, // size = 30
	ZC_CHANGE_CAMERA_ZOOM = 3230, // size = 34
	ZC_PLAY_SKILL_ANI = 3231, // size = 82
	ZC_PLAY_SKILL_CAST_ANI = 3232, // size = 30
	CZ_REQ_ITEM_GET = 3233, // size = 14
	ZC_ITEM_GET = 3234, // size = 18
	CZ_GUARD = 3235, // size = 19
	ZC_GUARD = 3236, // size = 19
	ZC_STAMINA = 3237, // size = 10
	ZC_ADD_STAMINA = 3238, // size = 10
	ZC_GM_ORDER = 3239, // size = 10
	ZC_MYPC_ENTER = 3240, // size = 18
	ZC_LOCK_KEY = 3241, // size = 75
	ZC_SAVE_INFO = 3242, // size = 6
	CZ_SAVE_INFO = 3243, // size = 0
	ZC_OPTION_LIST = 3244, // size = 0
	ZC_SKILLMAP_LIST = 3245, // size = 0
	CZ_GIVEITEM_TO_DUMMYPC = 3246, // size = 22
	ZC_SET_LAYER = 3247, // size = 10
	ZC_CREATE_LAYERBOX = 3248, // size = 38
	ZC_RESET_BOX = 3249, // size = 11
	ZC_CREATE_SCROLLLOCKBOX = 3250, // size = 38
	ZC_REMOVE_SCROLLLOCKBOX = 3251, // size = 10
	CZ_DYNAMIC_CASTING_START = 3252, // size = 23
	CZ_DYNAMIC_CASTING_END = 3253, // size = 19
	CZ_SKILL_CANCEL_SCRIPT = 3254, // size = 10
	ZC_LEAVE_TRIGGER = 3255, // size = 6
	ZC_BORN = 3256, // size = 10
	ZC_ACHIEVE_POINT_LIST = 3257, // size = 0
	ZC_ACHIEVE_POINT = 3258, // size = 18
	CZ_ACHIEVE_EQUIP = 3259, // size = 18
	ZC_ACHIEVE_EQUIP = 3260, // size = 22
	CZ_CHANGE_CONFIG = 3261, // size = 18
	CZ_CHANGE_CONFIG_STR = 3262, // size = 34
	ZC_WORLD_MSG = 3263, // size = 43
	ZC_ENABLE_SHOW_ITEM_GET = 3264, // size = 8
	ZC_LOGIN_TIME = 3265, // size = 14
	ZC_GIVE_EXP_TO_PC = 3266, // size = 42
	ZC_LAYER_PC_LIST = 3267, // size = 0
	ZC_LAYER_PC_SOBJ_PROP = 3268, // size = 0
	CZ_CUSTOM_COMMAND = 3269, // size = 26
	CZ_ADD_HELP = 3424, // size = 14
	ZC_LAYER_INFO = 3270, // size = 10
	CZ_CHAT_MACRO = 3271, // size = 146
	ZC_CHAT_MACRO_LIST = 3272, // size = 0
	ZC_RULLET_LIST = 3273, // size = 0
	ZC_QUICKSLOT_REGISTER = 3274, // size = 46
	CZ_QUICKSLOT_LIST = 3275, // size = 0
	CZ_DOUBLE_ITEM_EQUIP = 3276, // size = 28
	ZC_TRICK_PACKET = 3277, // size = 0
	ZC_COOLDOWN_RATE = 3278, // size = 22
	ZC_MAP_REVEAL_LIST = 3279, // size = 0
	CZ_MAP_REVEAL_INFO = 3280, // size = 146
	CZ_MAP_SEARCH_INFO = 3281, // size = 55
	ZC_UI_INFO_LIST = 3282, // size = 0
	ZC_EXEC_CLIENT_SCP = 3283, // size = 0
	ZC_SET_NPC_STATE = 3284, // size = 18
	ZC_NPC_STATE_LIST = 3285, // size = 0
	CZ_QUEST_NPC_STATE_CHECK = 3286, // size = 14
	ZC_RANK_ACHIEVE_ADD = 3287, // size = 14
	CZ_GET_MAP_REVEAL_ACHIEVE = 3288, // size = 10
	CZ_IES_MODIFY_INFO = 3289, // size = 0
	ZC_IES_MODIFY_INFO = 3290, // size = 0
	ZC_IES_MODIFY_LIST = 3291, // size = 0
	CZ_IES_REVISION_DELETE = 3292, // size = 0
	ZC_IES_REVISION_DELETE = 3293, // size = 0
	ZC_EQUIP_ITEM_REMOVE = 3294, // size = 18
	ZC_SOLD_ITEM_LIST = 3295, // size = 0
	CZ_SOLD_ITEM = 3296, // size = 19
	CZ_WAREHOUSE_CMD = 3297, // size = 31
	CZ_SWAP_ETC_INV_CHANGE_INDEX = 3298, // size = 35
	CZ_SORT_ETC_INV_CHANGE_INDEX = 3299, // size = 11
	CZ_SORT_INV_CHANGE_INDEX = 3300, // size = 11
	CZ_CAST_CONTROL_SHOT = 3301, // size = 10
	ZC_PC_PROP_UPDATE = 3302, // size = 9
	CZ_CLIENT_DAMAGE = 3303, // size = 14
	CZ_CLIENT_ATTACK = 3304, // size = 15
	ZC_SYSTEM_MSG = 3305, // size = 0
	ZC_FSM_MOVE = 3306, // size = 0
	CZ_QUEST_CHECK_SAVE = 3307, // size = 50
	CZ_SPRAY_REQ_INFO = 3308, // size = 14
	CZ_SPRAY_DRAW_INFO = 3309, // size = 0
	ZC_SPRAY_ID = 3310, // size = 18
	ZC_SPRAY_DRAW_INFO = 3311, // size = 0
	ZC_MONSTER_LIFETIME = 3312, // size = 14
	ZC_SPRAY_LIKE_LIST = 3313, // size = 0
	ZC_WIKI_COUNT_UPDATE = 3314, // size = 19
	ZC_WIKI_INT_PROP_UPDATE = 3315, // size = 15
	ZC_WIKI_BOOL_PROP_UPDATE = 3316, // size = 12
	CZ_REQ_WIKI_RANK = 3317, // size = 15
	ZC_WIKI_RANK_LIST = 3318, // size = 0
	ZC_SHARED_MSG = 3319, // size = 10
	CZ_REQ_WIKI_PROP_RANK = 3320, // size = 16
	CZ_REQ_TX_ITEM = 3322, // size = 0
	ZC_TEST_DBG = 3323, // size = 0
	ZC_MONSTER_DIST = 3324, // size = 0
	ZC_RESET_SKILL_FORCEID = 3325, // size = 10
	ZC_EMOTICON = 3326, // size = 18
	ZC_SHOW_EMOTICON = 3327, // size = 18
	ZC_TREASUREMARK_BY_MAP = 3328, // size = 0
	ZC_SHOW_MAP = 3329, // size = 0
	ZC_TREASUREMARK_LIST_MAP = 203, // size = 0
	ZC_FIX_ANIM = 3163, // size = 14
	ZC_MOVE_ANIM = 3164, // size = 12
	CZ_FLEE_OBSTACLE = 3330, // size = 26
	ZC_HOLD_MOVE_PATH = 3331, // size = 11
	ZC_ENTER_HOOK = 3332, // size = 10
	ZC_LEAVE_HOOK = 3333, // size = 10
	ZC_MONSTER_PROPERTY = 3334, // size = 0
	ZC_GROUND_EFFECT = 3335, // size = 50
	ZC_FLY = 3336, // size = 18
	ZC_FLY_MATH = 3337, // size = 22
	ZC_FLY_HEIGHT = 3338, // size = 14
	ZC_UPDATE_SHIELD = 3339, // size = 12
	ZC_UPDATE_MSHIELD = 3340, // size = 12
	ZC_SHOW_MODEL = 3341, // size = 15
	ZC_SKILL_RANGE_DBG = 3342, // size = 58
	ZC_SKILL_RANGE_FAN = 3343, // size = 40
	ZC_SKILL_RANGE_SQUARE = 3344, // size = 40
	ZC_SKILL_RANGE_CIRCLE = 3345, // size = 28
	ZC_SKILL_RANGE_DONUTS = 3346, // size = 32
	ZC_TEAMID = 3347, // size = 11
	ZC_PC = 3348, // size = 0
	CZ_LOG = 3349, // size = 0
	ZC_MOTIONBLUR = 3350, // size = 11
	ZC_PLAY_FORCE = 3351, // size = 78
	ZC_CAST_TARGET = 3352, // size = 14
	ZC_START_INFO = 3353, // size = 0
	ZC_JOB_EXP_UP = 3354, // size = 10
	ZC_JOB_PTS = 3355, // size = 10
	ZC_MON_STAMINA = 3356, // size = 22
	CZ_CUSTOM_SCP = 3357, // size = 14
	ZC_VIEW_FOCUS = 3358, // size = 24
	ZC_HARDCODED_SKILL = 3359, // size = 26
	CZ_HARDCODED_SKILL = 3360, // size = 34
	ZC_FORCE_MOVE = 3361, // size = 30
	ZC_HSKILL_CONTROL = 3362, // size = 22
	ZC_CANCEL_DEADEVENT = 3363, // size = 10
	ZC_ACTION_PKS = 3364, // size = 35
	CZ_HARDCODED_ITEM = 3365, // size = 22
	CZ_BRIQUET = 3367, // size = 30
	CZ_CANCEL_TRANSFORM_SKILL = 3366, // size = 10
	ZC_VIBRATE = 3368, // size = 30
	ZC_COUNTER_MOVE = 3369, // size = 10
	CZ_COUNTER_ATTACK = 3370, // size = 14
	CZ_CLIENT_DIRECT = 3371, // size = 30
	ZC_CLIENT_DIRECT = 3372, // size = 30
	ZC_OWNER = 3373, // size = 14
	ZC_GD_RANK = 3374, // size = 10
	CZ_RUN_BGEVENT = 3375, // size = 74
	ZC_ADD_SKILL_EFFECT = 3376, // size = 18
	ZC_ITEM_DROPABLE = 3377, // size = 10
	CZ_ITEM_DROP_TO_OBJECT = 3378, // size = 26
	ZC_NORMAL = 3379, // size = 0
	CZ_G_QUEST_CHECK = 3380, // size = 14
	ZC_MOVE_PATH_MATH = 3381, // size = 30
	ZC_SHOW_GROUND_ITEM_MARK = 3398, // size = 30
	ZC_HELP_LIST = 3399, // size = 0
	ZC_HELP_ADD = 3400, // size = 11
	ZC_STD_ANIM = 3165, // size = 11
	CZ_CLIENT_HIT_LIST = 3401, // size = 0
	ZC_PC_ATKSTATE = 3402, // size = 11
	CZ_HELP_READ_TYPE = 3403, // size = 18
	CZ_MOVE_PATH_END = 3404, // size = 10
	ZC_COLL_DAMAGE = 3405, // size = 11
	CZ_KEYBOARD_BEAT = 3406, // size = 10
	CZ_MOVEHIT_SCP = 3407, // size = 22
	ZC_SYNC_START = 3408, // size = 10
	ZC_SYNC_END = 3409, // size = 14
	ZC_SYNC_EXEC = 3410, // size = 10
	ZC_SYNC_EXEC_BY_SKILL_TIME = 3411, // size = 18
	CZ_STOP_TIMEACTION = 3412, // size = 11
	CZ_REQ_DUMMYPC_INFO = 3413, // size = 18
	CZ_VISIT_BARRACK = 3414, // size = 74
	CZ_SPC_SKILL_POS = 3415, // size = 22
	CZ_REQ_CHANGEJOB = 3416, // size = 14
	CZ_REQ_MINITEXT = 3419, // size = 266
	ZC_PC_MOVE_STOP = 3420, // size = 35
	CZ_SKILL_TOOL_GROUND_POS = 3430, // size = 26
	CZ_CHANGE_HEAD = 3417, // size = 14
	CZ_CREATE_ARROW_CRAFT = 3418, // size = 14
	CZ_MYPAGE_COMMENT_ADD = 3382, // size = 278
	CZ_MYPAGE_COMMENT_DELETE = 3383, // size = 18
	CZ_GET_TARGET_MYPAGE = 3385, // size = 14
	CZ_ON_MYPAGE_MODE = 3386, // size = 14
	CZ_RESET_SOCIAL_MODE = 3387, // size = 10
	CZ_GUESTPAGE_COMMENT_ADD = 3384, // size = 278
	CZ_GET_TARGET_GUESTPAGE = 3388, // size = 14
	CZ_ADD_SELLMODE_ITEM = 3389, // size = 30
	CZ_DELETE_SELLMODE_ITEM = 3390, // size = 18
	CZ_ON_SELLITEM_MODE = 3391, // size = 14
	CZ_ON_ITEMBUY_MODE = 3396, // size = 0
	ZC_MYPAGE_MAP = 3392, // size = 0
	ZC_GUESTPAGE_MAP = 3393, // size = 0
	ZC_ON_MYPAGE_MODE = 3394, // size = 0
	ZC_RESET_SOCIAL_MODE = 3395, // size = 10
	ZC_ON_BUYITEM_MODE = 3397, // size = 0
	CZ_STOP_ALLPC = 3421, // size = 10
	CZ_COMPLETE_PRELOAD = 3422, // size = 14
	CZ_MGAME_JOIN_CMD = 3423, // size = 46
	ZC_ATTACH_TO_OBJ = 3425, // size = 49
	ZC_DETACH_FROM_OBJ = 3426, // size = 14
	ZC_RUN_FROM = 3427, // size = 14
	ZC_LOOKAT_OBJ = 3428, // size = 14
	CZ_SKILL_CELL_LIST = 3429, // size = 0
	CZ_DIRECTION_PROCESS = 3431, // size = 18
	CZ_DIRECTION_MOVE_STATE = 3432, // size = 0
	ZC_TO_ALL_CLIENT = 3433, // size = 0
	ZC_TO_CLIENT = 3434, // size = 0
	CZ_REWARD_CMD = 3435, // size = 14
	CZ_PROPERTY_COMPARE = 3436, // size = 15
	ZC_PROPERTY_COMPARE = 3437, // size = 0
	ZC_RECOMMEND_PARTYMEMBER_INFO = 3497, // size = 0
	ZC_FACTION = 3438, // size = 14
	ZC_BEGIN_KILL_LOG = 3439, // size = 6
	ZC_END_KILL_LOG = 3440, // size = 6
	ZC_CLEAR_KILL_LOG = 3441, // size = 6
	CZ_NPC_AUCTION_CMD = 3442, // size = 30
	ZC_DIRECTION_APC = 3443, // size = 22
	ZC_BGMODEL_ANIM_INFO = 3444, // size = 15
	ZC_ATTACH_BY_KNOCKBACK = 3445, // size = 38
	CZ_OBJECT_MOVE = 3446, // size = 30
	CZ_CONTROL_OBJECT_ROTATE = 3447, // size = 22
	CZ_SUMMON_COMMAND = 3448, // size = 18
	CZ_VEHICLE_RIDE = 3449, // size = 15
	CZ_REQ_WIKI_CATEGORY_RANK_PAGE_INFO = 3450, // size = 78
	CZ_REQ_ACHIEVE_RANK_PAGE_INFO = 3451, // size = 78
	CZ_REQ_MONSTER_RANK_INFO = 3452, // size = 74
	ZC_SPC_TRIGGER_EXEC = 3453, // size = 30
	CZ_REQ_MGAME_VIEW = 3454, // size = 18
	CZ_REQ_MGAME_CHAT = 3455, // size = 0
	CZ_TOURNAMENT_GIFT = 3456, // size = 18
	CZ_PARTY_INVITE_ACCEPT = 3457, // size = 79
	CZ_PARTY_INVITE_CANCEL = 3458, // size = 83
	CZ_PARTY_PROP_CHANGE = 3459, // size = 145
	CZ_REQ_MARKET_REGISTER = 3460, // size = 27
	CZ_REQ_MARKET_BUY = 3461, // size = 0
	CZ_REQ_CABINET_LIST = 3462, // size = 10
	CZ_REQ_GET_CABINET_ITEM = 3463, // size = 26
	CZ_REQ_CANCEL_MARKET_ITEM = 3464, // size = 18
	CZ_OBJ_RECORD_POS = 3465, // size = 0
	CZ_FORMATION_CMD = 3466, // size = 32
	CZ_REGISTER_AUTOSELLER = 3467, // size = 0
	CZ_OPEN_AUTOSELLER = 3468, // size = 34
	CZ_BUY_AUTOSELLER_ITEMS = 3469, // size = 0
	CZ_SELL_MY_AUTOSELLER_ITEMS = 3470, // size = 0
	CZ_PUZZLE_CRAFT = 3471, // size = 0
	CZ_GET_WIKI_REWARD = 3321, // size = 11
	CZ_PET_EQUIP = 3472, // size = 30
	ZC_FOUND_PARTY_LIST = 3473, // size = 0
	ZC_RECOMMEND_PARTY_INFO = 3474, // size = 0
	CZ_REQUEST_SOME_PARTY = 3475, // size = 90
	CZ_REFRESH_MEMBERRECOMMEND_LIST = 3476, // size = 10
	ZC_TO_SOMEWHERE_CLIENT = 3477, // size = 0
	CZ_REVEAL_NPC_STATE = 3478, // size = 14
	CZ_CHANGE_CHANNEL = 3479, // size = 12
	CZ_REQ_CHANNEL_TRAFFICS = 3480, // size = 12
	CZ_BUY_PROPERTYSHOP_ITEM = 3481, // size = 0
	CZ_SKILL_USE_HEIGHT = 3482, // size = 14
	CZ_ACCEPT_PARTY_QUEST = 3483, // size = 20
	CZ_ACCEPT_PARTY_EVENT = 3484, // size = 20
	CZ_DELETE_PARTY_EVENT = 3485, // size = 20
	CZ_PING = 3486, // size = 10
	ZC_PING = 3487, // size = 10
	ZC_XIGNCODE_BUFFER = 3488, // size = 524
	CZ_XIGNCODE_BUFFER = 3489, // size = 524
	CZ_CHANGE_TITLE = 3490, // size = 74
	CZ_PC_COMMENT_CHANGE = 3491, // size = 0
	CZ_AUTTOSELLER_BUYER_CLOSE = 3492, // size = 18
	CZ_REQ_ITEM_LIST = 3493, // size = 11
	CZ_HIT_MISSILE = 3494, // size = 14
	CZ_I_NEED_PARTY = 3495, // size = 23
	CZ_PARTY_JOIN_BY_LINK = 3496, // size = 19
	CZ_PVP_ZONE_CMD = 3498, // size = 22
	CZ_PVP_CHAT = 3499, // size = 0
	CZ_CARDBATTLE_CMD = 3500, // size = 26

	PACKET_TYPE_COUNT

} PacketType;

typedef struct PacketTypeEntry {
    int value;
    int size;
    char *string;
} PacketTypeEntry;

/**
 * @brief PacketTypeInfo enumerates all the packets used in the game between the client and the server.
 *        It gives more info than PacketType (packet size and string)
 *        Its purpose is to give information during runtime execution, contrary to PacketType that is used during the compilation.
 */
typedef struct PacketTypeInfo {
    PacketTypeEntry packets[PACKET_TYPES_MAX_INDEX];
} PacketTypeInfo;

// global packet types
extern const PacketTypeInfo packetTypeInfo;

char *packetTypeToString(PacketType type);
