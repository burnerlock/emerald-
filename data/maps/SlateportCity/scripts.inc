# 1 "data/maps/SlateportCity/scripts.pory"

# 2 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 3 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 4 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 5 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 6 "data/maps/SlateportCity/scripts.pory"

# 7 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 8 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 9 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 10 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 11 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 12 "data/maps/SlateportCity/scripts.pory"
	end
# 13 "data/maps/SlateportCity/scripts.pory"

# 14 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 15 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 16 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 17 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 18 "data/maps/SlateportCity/scripts.pory"
	return
# 19 "data/maps/SlateportCity/scripts.pory"

# 20 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 21 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_CAPT_STERN, 28, 13
# 22 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_OLD_WOMAN, 25, 13
# 23 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_RICH_BOY, 25, 14
# 24 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_COOK, 27, 16
# 25 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_GIRL, 28, 16
# 26 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_FAT_MAN, 29, 16
# 27 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_MAN_1, 31, 14
# 28 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 29 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 30 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 31 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_COOK, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_GIRL, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 34 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 35 "data/maps/SlateportCity/scripts.pory"
	return
# 36 "data/maps/SlateportCity/scripts.pory"

# 37 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 38 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 39 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 40 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 41 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 23, 27
# 42 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 43 "data/maps/SlateportCity/scripts.pory"
	return
# 44 "data/maps/SlateportCity/scripts.pory"

# 45 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 46 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 22, 27
# 47 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 48 "data/maps/SlateportCity/scripts.pory"
	return
# 49 "data/maps/SlateportCity/scripts.pory"

# 50 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 51 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 52 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 53 "data/maps/SlateportCity/scripts.pory"

# 54 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 55 "data/maps/SlateportCity/scripts.pory"
	lockall
# 56 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 57 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 58 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 59 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 60 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 61 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 62 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 63 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 64 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 65 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 66 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 67 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 69 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 70 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 71 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 72 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 73 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 74 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 75 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 76 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 77 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 78 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 79 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExit
# 80 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 81 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 82 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SLATEPORT_SCOTT, 10, 12
# 83 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SLATEPORT_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 84 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 85 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 86 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 87 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 88 "data/maps/SlateportCity/scripts.pory"
	end
# 89 "data/maps/SlateportCity/scripts.pory"

# 90 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 91 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 92 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 93 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 94 "data/maps/SlateportCity/scripts.pory"
	step_end
# 95 "data/maps/SlateportCity/scripts.pory"

# 96 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 97 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 98 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 99 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 100 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 101 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 102 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 103 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 104 "data/maps/SlateportCity/scripts.pory"
	step_end
# 105 "data/maps/SlateportCity/scripts.pory"

# 106 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 107 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 108 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 109 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 110 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 111 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 112 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 113 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 114 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 115 "data/maps/SlateportCity/scripts.pory"
	step_end
# 116 "data/maps/SlateportCity/scripts.pory"

# 117 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 118 "data/maps/SlateportCity/scripts.pory"
	lock
# 119 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 120 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 121 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 122 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 123 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 124 "data/maps/SlateportCity/scripts.pory"
	release
# 125 "data/maps/SlateportCity/scripts.pory"
	end
# 126 "data/maps/SlateportCity/scripts.pory"

# 127 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 128 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 129 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 130 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 131 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 132 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 133 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 134 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 135 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 136 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 137 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 138 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 139 "data/maps/SlateportCity/scripts.pory"

# 140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_UtilityShop::
# 141 "data/maps/SlateportCity/scripts.pory"
	lock
# 142 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 143 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_UtilityShopSellWhatYouNeed
# 144 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 145 "data/maps/SlateportCity/scripts.pory"
	checkflag FLAG_BADGE02_GET
# 146 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_UtilityShopNoBadge
# 147 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_UtilityShopBadge2
# 148 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 149 "data/maps/SlateportCity/scripts.pory"
	release
# 150 "data/maps/SlateportCity/scripts.pory"
	end
# 151 "data/maps/SlateportCity/scripts.pory"

# 152 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_UtilityShopNoBadge::
# 153 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_UtilityShop
# 154 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 155 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 156 "data/maps/SlateportCity/scripts.pory"
	end
# 157 "data/maps/SlateportCity/scripts.pory"

# 158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_UtilityShopSellWhatYouNeed:
# 159 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the Utility Guru! Come to me to\n"
# 160 "data/maps/SlateportCity/scripts.pory"
	.string "purchase items for all your needs!$"
# 161 "data/maps/SlateportCity/scripts.pory"

# 162 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_UtilityShop:
# 164 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 165 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 166 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 167 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 168 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 169 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 170 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 171 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 172 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 173 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 174 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 175 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 176 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METRONOME
# 177 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 178 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 179 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 180 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 181 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_HERB
# 182 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 183 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 184 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 185 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 186 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 187 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 188 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARCOAL
# 189 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 190 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGNET
# 191 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 192 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 193 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 194 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POISON_BARB
# 195 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 196 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 197 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HARD_STONE
# 198 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 199 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 200 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 201 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_COAT
# 202 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 203 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 204 "data/maps/SlateportCity/scripts.pory"

# 205 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_UtilityShopBadge2:
# 207 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 208 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 209 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ABILITY_PATCH	
# 210 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEFTOVERS
# 211 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SAFETY_GOGGLES
# 212 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 213 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_SLUDGE
# 214 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 215 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 216 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LAGGING_TAIL
# 217 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WIDE_LENS
# 218 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZOOM_LENS
# 219 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METRONOME
# 220 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 221 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MUSCLE_BAND
# 222 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 223 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EXPERT_BELT
# 224 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POWER_HERB
# 225 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BINDING_BAND
# 226 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLOAT_STONE
# 227 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 228 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SPELL_TAG
# 229 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 230 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 231 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARCOAL
# 232 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MYSTIC_WATER
# 233 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGNET
# 234 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MIRACLE_SEED
# 235 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NEVER_MELT_ICE
# 236 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHARP_BEAK
# 237 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POISON_BARB
# 238 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SILVER_POWDER
# 239 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SOFT_SAND
# 240 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HARD_STONE
# 241 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 242 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 243 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 244 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_COAT
# 245 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 246 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROCKY_HELMET
# 247 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_EVIOLITE
# 248 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LIGHT_CLAY
# 249 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FOCUS_SASH
# 250 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LIFE_ORB
# 251 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WEAKNESS_POLICY
# 252 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ASSAULT_VEST
# 253 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RED_CARD
# 254 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SMOOTH_ROCK
# 255 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 256 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 257 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 258 "data/maps/SlateportCity/scripts.pory"

# 259 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EvolutionShop::
# 260 "data/maps/SlateportCity/scripts.pory"
	lock
# 261 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 262 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EvolutionShopSellWhatYouNeed
# 263 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 264 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EvolutionShop
# 265 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 266 "data/maps/SlateportCity/scripts.pory"
	release
# 267 "data/maps/SlateportCity/scripts.pory"
	end
# 268 "data/maps/SlateportCity/scripts.pory"

# 269 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EvolutionShop:
# 271 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 272 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WATER_STONE
# 273 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 274 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 275 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MOON_STONE
# 276 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SUN_STONE
# 277 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 278 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 279 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 280 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICE_STONE
# 281 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 282 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAZOR_FANG
# 283 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 284 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 285 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_OVAL_STONE
# 286 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DUBIOUS_DISC
# 287 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTECTOR
# 288 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 289 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 290 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_COAT
# 291 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_UP_GRADE
# 292 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WHIPPED_DREAM
# 293 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SACHET
# 294 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 295 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 296 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 297 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 298 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 299 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 300 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 301 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 302 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 303 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 304 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 305 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 306 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 307 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 308 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 309 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 310 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_ALLOY
# 311 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 312 "data/maps/SlateportCity/scripts.pory"

# 313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EvolutionShopSellWhatYouNeed:
# 314 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the Evolution Guru! Come to me to\n"
# 315 "data/maps/SlateportCity/scripts.pory"
	.string "purchase items to evolve your Pokémon!$"
# 316 "data/maps/SlateportCity/scripts.pory"

# 317 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryMaster::
# 318 "data/maps/SlateportCity/scripts.pory"
	lock
# 319 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 320 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_BerryMasterSellWhatYouNeed
# 321 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 322 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_BerryMaster
# 323 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 324 "data/maps/SlateportCity/scripts.pory"
	release
# 325 "data/maps/SlateportCity/scripts.pory"
	end
# 326 "data/maps/SlateportCity/scripts.pory"

# 327 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BerryMasterSellWhatYouNeed:
# 328 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the Berry Master! Come to me to\n"
# 329 "data/maps/SlateportCity/scripts.pory"
	.string "purchase berries for all your needs!$"
# 330 "data/maps/SlateportCity/scripts.pory"

# 331 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 332 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_BerryMaster:
# 333 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 334 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 335 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 336 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 337 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 338 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 339 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 340 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 341 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 342 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 343 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 344 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 345 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 346 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_OCCA_BERRY
# 347 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PASSHO_BERRY
# 348 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_WACAN_BERRY
# 349 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_RINDO_BERRY
# 350 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_YACHE_BERRY
# 351 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHOPLE_BERRY
# 352 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KEBIA_BERRY
# 353 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SHUCA_BERRY
# 354 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_COBA_BERRY
# 355 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PAYAPA_BERRY
# 356 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TANGA_BERRY
# 357 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CHARTI_BERRY
# 358 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_KASIB_BERRY
# 359 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HABAN_BERRY
# 360 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_COLBUR_BERRY
# 361 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BABIRI_BERRY
# 362 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ROSELI_BERRY
# 363 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 364 "data/maps/SlateportCity/scripts.pory"

# 365 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 366 "data/maps/SlateportCity/scripts.pory"
	lock
# 367 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 368 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 369 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 370 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 371 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 372 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 373 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 374 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 375 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 376 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 377 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 378 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 379 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 380 "data/maps/SlateportCity/scripts.pory"
	release
# 381 "data/maps/SlateportCity/scripts.pory"
	end
# 382 "data/maps/SlateportCity/scripts.pory"

# 383 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 384 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 385 "data/maps/SlateportCity/scripts.pory"
	release
# 386 "data/maps/SlateportCity/scripts.pory"
	end
# 387 "data/maps/SlateportCity/scripts.pory"

# 388 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 389 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 390 "data/maps/SlateportCity/scripts.pory"
	release
# 391 "data/maps/SlateportCity/scripts.pory"
	end
# 392 "data/maps/SlateportCity/scripts.pory"

# 393 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 394 "data/maps/SlateportCity/scripts.pory"
	lock
# 395 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 396 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 397 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 398 "data/maps/SlateportCity/scripts.pory"
	release
# 399 "data/maps/SlateportCity/scripts.pory"
	end
# 400 "data/maps/SlateportCity/scripts.pory"

# 401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 402 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 403 "data/maps/SlateportCity/scripts.pory"
	release
# 404 "data/maps/SlateportCity/scripts.pory"
	end
# 405 "data/maps/SlateportCity/scripts.pory"

# 406 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 407 "data/maps/SlateportCity/scripts.pory"
	lock
# 408 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 409 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 410 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 411 "data/maps/SlateportCity/scripts.pory"
	release
# 412 "data/maps/SlateportCity/scripts.pory"
	end
# 413 "data/maps/SlateportCity/scripts.pory"

# 414 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 415 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 416 "data/maps/SlateportCity/scripts.pory"
	release
# 417 "data/maps/SlateportCity/scripts.pory"
	end
# 418 "data/maps/SlateportCity/scripts.pory"

# 419 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 420 "data/maps/SlateportCity/scripts.pory"
	lock
# 421 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 422 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 423 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 424 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 425 "data/maps/SlateportCity/scripts.pory"
	release
# 426 "data/maps/SlateportCity/scripts.pory"
	end
# 427 "data/maps/SlateportCity/scripts.pory"

# 428 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 429 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 430 "data/maps/SlateportCity/scripts.pory"
	release
# 431 "data/maps/SlateportCity/scripts.pory"
	end
# 432 "data/maps/SlateportCity/scripts.pory"

# 433 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 434 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 435 "data/maps/SlateportCity/scripts.pory"
	release
# 436 "data/maps/SlateportCity/scripts.pory"
	end
# 437 "data/maps/SlateportCity/scripts.pory"

# 438 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 439 "data/maps/SlateportCity/scripts.pory"
	lock
# 440 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 441 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 442 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 443 "data/maps/SlateportCity/scripts.pory"
	release
# 444 "data/maps/SlateportCity/scripts.pory"
	end
# 445 "data/maps/SlateportCity/scripts.pory"

# 446 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 447 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 448 "data/maps/SlateportCity/scripts.pory"
	release
# 449 "data/maps/SlateportCity/scripts.pory"
	end
# 450 "data/maps/SlateportCity/scripts.pory"

# 451 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 452 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 454 "data/maps/SlateportCity/scripts.pory"
	end
# 455 "data/maps/SlateportCity/scripts.pory"

# 456 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 457 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 458 "data/maps/SlateportCity/scripts.pory"
	end
# 459 "data/maps/SlateportCity/scripts.pory"

# 460 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 461 "data/maps/SlateportCity/scripts.pory"
	lock
# 462 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 463 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 464 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 465 "data/maps/SlateportCity/scripts.pory"
	release
# 466 "data/maps/SlateportCity/scripts.pory"
	end
# 467 "data/maps/SlateportCity/scripts.pory"

# 468 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 469 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 470 "data/maps/SlateportCity/scripts.pory"
	release
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 474 "data/maps/SlateportCity/scripts.pory"
	lock
# 475 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 476 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 477 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 478 "data/maps/SlateportCity/scripts.pory"
	release
# 479 "data/maps/SlateportCity/scripts.pory"
	end
# 480 "data/maps/SlateportCity/scripts.pory"

# 481 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 482 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 483 "data/maps/SlateportCity/scripts.pory"
	release
# 484 "data/maps/SlateportCity/scripts.pory"
	end
# 485 "data/maps/SlateportCity/scripts.pory"

# 486 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 487 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 488 "data/maps/SlateportCity/scripts.pory"
	end
# 489 "data/maps/SlateportCity/scripts.pory"

# 490 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 491 "data/maps/SlateportCity/scripts.pory"
	lockall
# 492 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 493 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 494 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 495 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 496 "data/maps/SlateportCity/scripts.pory"
	end
# 497 "data/maps/SlateportCity/scripts.pory"

# 498 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 499 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 500 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 501 "data/maps/SlateportCity/scripts.pory"
	end
# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 504 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 505 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 506 "data/maps/SlateportCity/scripts.pory"
	end
# 507 "data/maps/SlateportCity/scripts.pory"

# 508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 509 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 510 "data/maps/SlateportCity/scripts.pory"
	end
# 511 "data/maps/SlateportCity/scripts.pory"

# 512 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 513 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 514 "data/maps/SlateportCity/scripts.pory"
	end
# 515 "data/maps/SlateportCity/scripts.pory"

# 516 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 517 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 518 "data/maps/SlateportCity/scripts.pory"
	end
# 519 "data/maps/SlateportCity/scripts.pory"

# 520 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 521 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 522 "data/maps/SlateportCity/scripts.pory"
	end
# 523 "data/maps/SlateportCity/scripts.pory"

# 524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 525 "data/maps/SlateportCity/scripts.pory"
	lockall
# 526 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 527 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 528 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 529 "data/maps/SlateportCity/scripts.pory"
	end
# 530 "data/maps/SlateportCity/scripts.pory"

# 531 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 532 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 533 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 534 "data/maps/SlateportCity/scripts.pory"
	end
# 535 "data/maps/SlateportCity/scripts.pory"

# 536 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 537 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 538 "data/maps/SlateportCity/scripts.pory"
	end
# 539 "data/maps/SlateportCity/scripts.pory"

# 540 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 541 "data/maps/SlateportCity/scripts.pory"
	lock
# 542 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 543 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 544 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 545 "data/maps/SlateportCity/scripts.pory"
	release
# 546 "data/maps/SlateportCity/scripts.pory"
	end
# 547 "data/maps/SlateportCity/scripts.pory"

# 548 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 550 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 551 "data/maps/SlateportCity/scripts.pory"
	release
# 552 "data/maps/SlateportCity/scripts.pory"
	end
# 553 "data/maps/SlateportCity/scripts.pory"

# 554 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 555 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 556 "data/maps/SlateportCity/scripts.pory"
	end
# 557 "data/maps/SlateportCity/scripts.pory"

# 558 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 559 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 560 "data/maps/SlateportCity/scripts.pory"
	end
# 561 "data/maps/SlateportCity/scripts.pory"

# 562 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 563 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 564 "data/maps/SlateportCity/scripts.pory"
	end
# 565 "data/maps/SlateportCity/scripts.pory"

# 566 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 567 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 568 "data/maps/SlateportCity/scripts.pory"
	end
# 569 "data/maps/SlateportCity/scripts.pory"

# 570 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 571 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 572 "data/maps/SlateportCity/scripts.pory"
	end
# 573 "data/maps/SlateportCity/scripts.pory"

# 574 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 575 "data/maps/SlateportCity/scripts.pory"
	lock
# 576 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 577 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 578 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 579 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_1, Common_Movement_FaceOriginalDirection
# 580 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 581 "data/maps/SlateportCity/scripts.pory"
	release
# 582 "data/maps/SlateportCity/scripts.pory"
	end
# 583 "data/maps/SlateportCity/scripts.pory"

# 584 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 585 "data/maps/SlateportCity/scripts.pory"
	lock
# 586 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 587 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 588 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 589 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_2, Common_Movement_FaceOriginalDirection
# 590 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 591 "data/maps/SlateportCity/scripts.pory"
	release
# 592 "data/maps/SlateportCity/scripts.pory"
	end
# 593 "data/maps/SlateportCity/scripts.pory"

# 594 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 595 "data/maps/SlateportCity/scripts.pory"
	lock
# 596 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 597 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 598 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 599 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_3, Common_Movement_FaceOriginalDirection
# 600 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 601 "data/maps/SlateportCity/scripts.pory"
	release
# 602 "data/maps/SlateportCity/scripts.pory"
	end
# 603 "data/maps/SlateportCity/scripts.pory"

# 604 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 605 "data/maps/SlateportCity/scripts.pory"
	lock
# 606 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 607 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 608 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 609 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_4, Common_Movement_FaceOriginalDirection
# 610 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 611 "data/maps/SlateportCity/scripts.pory"
	release
# 612 "data/maps/SlateportCity/scripts.pory"
	end
# 613 "data/maps/SlateportCity/scripts.pory"

# 614 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 615 "data/maps/SlateportCity/scripts.pory"
	lock
# 616 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 617 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 618 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 619 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_5, Common_Movement_FaceOriginalDirection
# 620 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 621 "data/maps/SlateportCity/scripts.pory"
	release
# 622 "data/maps/SlateportCity/scripts.pory"
	end
# 623 "data/maps/SlateportCity/scripts.pory"

# 624 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 625 "data/maps/SlateportCity/scripts.pory"
	lock
# 626 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 627 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 628 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 629 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_6, Common_Movement_FaceOriginalDirection
# 630 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 631 "data/maps/SlateportCity/scripts.pory"
	release
# 632 "data/maps/SlateportCity/scripts.pory"
	end
# 633 "data/maps/SlateportCity/scripts.pory"

# 634 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 635 "data/maps/SlateportCity/scripts.pory"
	lock
# 636 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 637 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 638 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 639 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_7, Common_Movement_FaceOriginalDirection
# 640 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 641 "data/maps/SlateportCity/scripts.pory"
	release
# 642 "data/maps/SlateportCity/scripts.pory"
	end
# 643 "data/maps/SlateportCity/scripts.pory"

# 644 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 645 "data/maps/SlateportCity/scripts.pory"
	lock
# 646 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 647 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 648 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 649 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_8, Common_Movement_FaceOriginalDirection
# 650 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/SlateportCity/scripts.pory"
	release
# 652 "data/maps/SlateportCity/scripts.pory"
	end
# 653 "data/maps/SlateportCity/scripts.pory"

# 654 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 655 "data/maps/SlateportCity/scripts.pory"
	lock
# 656 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 657 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 658 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_ExclamationMark
# 659 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_Delay48
# 661 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 662 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 663 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 664 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 665 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 667 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 669 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 670 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 671 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 672 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 673 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 674 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 675 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 676 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 677 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 678 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FacePlayer
# 679 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 680 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 681 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 682 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_9, Common_Movement_FaceOriginalDirection
# 683 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 684 "data/maps/SlateportCity/scripts.pory"
	release
# 685 "data/maps/SlateportCity/scripts.pory"
	end
# 686 "data/maps/SlateportCity/scripts.pory"

# 687 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 688 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 689 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 690 "data/maps/SlateportCity/scripts.pory"
	step_end
# 691 "data/maps/SlateportCity/scripts.pory"

# 692 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 693 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 694 "data/maps/SlateportCity/scripts.pory"
	end
# 695 "data/maps/SlateportCity/scripts.pory"

# 696 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 697 "data/maps/SlateportCity/scripts.pory"
	lock
# 698 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 699 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 700 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 701 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GRUNT_11, Common_Movement_FaceOriginalDirection
# 702 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 703 "data/maps/SlateportCity/scripts.pory"
	release
# 704 "data/maps/SlateportCity/scripts.pory"
	end
# 705 "data/maps/SlateportCity/scripts.pory"

# 706 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 707 "data/maps/SlateportCity/scripts.pory"
	lock
# 708 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 709 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 710 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 711 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 712 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 713 "data/maps/SlateportCity/scripts.pory"
	release
# 714 "data/maps/SlateportCity/scripts.pory"
	end
# 715 "data/maps/SlateportCity/scripts.pory"

# 716 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 717 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 718 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 719 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 720 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 721 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 722 "data/maps/SlateportCity/scripts.pory"

# 723 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 724 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 725 "data/maps/SlateportCity/scripts.pory"
	release
# 726 "data/maps/SlateportCity/scripts.pory"
	end
# 727 "data/maps/SlateportCity/scripts.pory"

# 728 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 729 "data/maps/SlateportCity/scripts.pory"
	lock
# 730 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 731 "data/maps/SlateportCity/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_ComeBackWithSecretPower
# 732 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 733 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 734 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 735 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 736 "data/maps/SlateportCity/scripts.pory"
	release
# 737 "data/maps/SlateportCity/scripts.pory"
	end
# 738 "data/maps/SlateportCity/scripts.pory"

# 739 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 740 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 741 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 742 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 743 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 744 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 745 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 746 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 747 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 748 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 749 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 750 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 751 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 752 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 753 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 754 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 755 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 756 "data/maps/SlateportCity/scripts.pory"

# 757 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PowerTMClerk::
# 758 "data/maps/SlateportCity/scripts.pory"
	lock
# 759 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 760 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 761 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 762 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_PowerTMs
# 763 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 764 "data/maps/SlateportCity/scripts.pory"
	release
# 765 "data/maps/SlateportCity/scripts.pory"
	end
# 766 "data/maps/SlateportCity/scripts.pory"

# 767 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 768 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_PowerTMs:
# 769 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 770 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 771 "data/maps/SlateportCity/scripts.pory"
	pokemartlistend
# 772 "data/maps/SlateportCity/scripts.pory"

# 773 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 774 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 775 "data/maps/SlateportCity/scripts.pory"
	lockall
# 776 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 777 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 778 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 779 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, Common_Movement_WalkInPlaceFasterRight
# 780 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 781 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 782 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, Common_Movement_WalkInPlaceFasterDown
# 783 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 784 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 785 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 786 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 787 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_GABBY, SlateportCity_Movement_GabbyExit
# 788 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_TY, SlateportCity_Movement_TyExit
# 789 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_GABBY
# 791 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_TY
# 792 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 793 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 794 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 795 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 796 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 797 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 798 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_COOK, Common_Movement_WalkInPlaceFasterLeft
# 799 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 800 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 801 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_RICH_BOY, Common_Movement_QuestionMark
# 802 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_MAN_1, SlateportCity_Movement_ManConcern
# 803 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 804 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 805 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 807 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 808 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_ExclamationMark
# 809 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 810 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_Delay48
# 811 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 812 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 813 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 814 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 815 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 816 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 817 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 818 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 819 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 820 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_CAPT_STERN
# 821 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 822 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 823 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 824 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 825 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 826 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 827 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 828 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 829 "data/maps/SlateportCity/scripts.pory"
	end
# 830 "data/maps/SlateportCity/scripts.pory"

# 831 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 832 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 833 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 834 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 835 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 836 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 837 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 838 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 839 "data/maps/SlateportCity/scripts.pory"
	step_end
# 840 "data/maps/SlateportCity/scripts.pory"

# 841 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 842 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 843 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 844 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 845 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 846 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 847 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 848 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 849 "data/maps/SlateportCity/scripts.pory"
	step_end
# 850 "data/maps/SlateportCity/scripts.pory"

# 851 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 852 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 853 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 854 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 855 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 856 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 857 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 858 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 859 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 860 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 861 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 862 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 863 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 864 "data/maps/SlateportCity/scripts.pory"
	step_end
# 865 "data/maps/SlateportCity/scripts.pory"

# 866 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 867 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 868 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 869 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 870 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 871 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 872 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 873 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 874 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 875 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 876 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 877 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 878 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 879 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 880 "data/maps/SlateportCity/scripts.pory"
	step_end
# 881 "data/maps/SlateportCity/scripts.pory"

# 882 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 883 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 884 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 885 "data/maps/SlateportCity/scripts.pory"
	step_end
# 886 "data/maps/SlateportCity/scripts.pory"

# 887 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 888 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 889 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 890 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 891 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 892 "data/maps/SlateportCity/scripts.pory"
	step_end
# 893 "data/maps/SlateportCity/scripts.pory"

# 894 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 895 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 896 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 897 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 898 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 899 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 900 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 901 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 902 "data/maps/SlateportCity/scripts.pory"
	step_end
# 903 "data/maps/SlateportCity/scripts.pory"

# 904 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 905 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 906 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 907 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 908 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 909 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 910 "data/maps/SlateportCity/scripts.pory"
	step_end
# 911 "data/maps/SlateportCity/scripts.pory"

# 912 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 913 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 914 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 915 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 916 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 917 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 918 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 919 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 920 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 921 "data/maps/SlateportCity/scripts.pory"
	step_end
# 922 "data/maps/SlateportCity/scripts.pory"

# 923 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 924 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 925 "data/maps/SlateportCity/scripts.pory"
	end
# 926 "data/maps/SlateportCity/scripts.pory"

# 927 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 928 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 929 "data/maps/SlateportCity/scripts.pory"
	end
# 930 "data/maps/SlateportCity/scripts.pory"

# 931 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 932 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 933 "data/maps/SlateportCity/scripts.pory"
	end
# 934 "data/maps/SlateportCity/scripts.pory"

# 935 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 936 "data/maps/SlateportCity/scripts.pory"
	lock
# 937 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 938 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 939 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 940 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 941 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 942 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 943 "data/maps/SlateportCity/scripts.pory"
	release
# 944 "data/maps/SlateportCity/scripts.pory"
	end
# 945 "data/maps/SlateportCity/scripts.pory"

# 946 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 947 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 948 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 949 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 950 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 951 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 952 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 953 "data/maps/SlateportCity/scripts.pory"
	end
# 954 "data/maps/SlateportCity/scripts.pory"

# 955 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 956 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 957 "data/maps/SlateportCity/scripts.pory"
	release
# 958 "data/maps/SlateportCity/scripts.pory"
	end
# 959 "data/maps/SlateportCity/scripts.pory"

# 960 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 961 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 962 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 963 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 964 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 965 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 966 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 967 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 968 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 969 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 970 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 971 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 972 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 973 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 974 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 975 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 976 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 977 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 978 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 979 "data/maps/SlateportCity/scripts.pory"
	end
# 980 "data/maps/SlateportCity/scripts.pory"

# 981 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 982 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 983 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 984 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 985 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 986 "data/maps/SlateportCity/scripts.pory"
	end
# 987 "data/maps/SlateportCity/scripts.pory"

# 988 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 989 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 990 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 991 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 992 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 993 "data/maps/SlateportCity/scripts.pory"
	end
# 994 "data/maps/SlateportCity/scripts.pory"

# 995 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 996 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 997 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 998 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 999 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1000 "data/maps/SlateportCity/scripts.pory"
	end
# 1001 "data/maps/SlateportCity/scripts.pory"

# 1002 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 1003 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 1004 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 1005 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 1006 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1007 "data/maps/SlateportCity/scripts.pory"
	end
# 1008 "data/maps/SlateportCity/scripts.pory"

# 1009 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 1010 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 1011 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 1012 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1013 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1014 "data/maps/SlateportCity/scripts.pory"
	end
# 1015 "data/maps/SlateportCity/scripts.pory"

# 1016 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 1017 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 1018 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 1019 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1020 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1021 "data/maps/SlateportCity/scripts.pory"
	end
# 1022 "data/maps/SlateportCity/scripts.pory"

# 1023 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 1024 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 1025 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 1026 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1027 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1028 "data/maps/SlateportCity/scripts.pory"
	end
# 1029 "data/maps/SlateportCity/scripts.pory"

# 1030 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 1031 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 1032 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 1033 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1034 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1035 "data/maps/SlateportCity/scripts.pory"
	end
# 1036 "data/maps/SlateportCity/scripts.pory"

# 1037 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 1038 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 1039 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 1040 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1041 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1042 "data/maps/SlateportCity/scripts.pory"
	end
# 1043 "data/maps/SlateportCity/scripts.pory"

# 1044 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 1045 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 1046 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 1047 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1048 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1049 "data/maps/SlateportCity/scripts.pory"
	end
# 1050 "data/maps/SlateportCity/scripts.pory"

# 1051 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1052 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1053 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1054 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1055 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1056 "data/maps/SlateportCity/scripts.pory"
	end
# 1057 "data/maps/SlateportCity/scripts.pory"

# 1058 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1059 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1060 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1061 "data/maps/SlateportCity/scripts.pory"
	release
# 1062 "data/maps/SlateportCity/scripts.pory"
	end
# 1063 "data/maps/SlateportCity/scripts.pory"

# 1064 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1065 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1066 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1067 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1068 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1069 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1070 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1071 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1072 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1073 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1074 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1075 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1076 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1077 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1078 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1079 "data/maps/SlateportCity/scripts.pory"
	release
# 1080 "data/maps/SlateportCity/scripts.pory"
	end
# 1081 "data/maps/SlateportCity/scripts.pory"

# 1082 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1083 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1084 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1085 "data/maps/SlateportCity/scripts.pory"
	release
# 1086 "data/maps/SlateportCity/scripts.pory"
	end
# 1087 "data/maps/SlateportCity/scripts.pory"

# 1088 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1089 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1090 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1091 "data/maps/SlateportCity/scripts.pory"
	end
# 1092 "data/maps/SlateportCity/scripts.pory"

# 1093 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1094 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1095 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 1096 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1097 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1098 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1099 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SLATEPORT_SCOTT
# 1100 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1101 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1102 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1103 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1104 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1105 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1106 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1107 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1108 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SLATEPORT_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1109 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1110 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SLATEPORT_SCOTT
# 1111 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1112 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1113 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1114 "data/maps/SlateportCity/scripts.pory"
	end
# 1115 "data/maps/SlateportCity/scripts.pory"

# 1116 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1117 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1118 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1119 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1120 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1121 "data/maps/SlateportCity/scripts.pory"

# 1122 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1123 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1124 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1125 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1126 "data/maps/SlateportCity/scripts.pory"

# 1127 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1128 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1129 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1130 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1131 "data/maps/SlateportCity/scripts.pory"

# 1132 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1133 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1134 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1135 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1136 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1137 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1138 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1139 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1140 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1141 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1142 "data/maps/SlateportCity/scripts.pory"

# 1143 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1144 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1145 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1146 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1147 "data/maps/SlateportCity/scripts.pory"
	end
# 1148 "data/maps/SlateportCity/scripts.pory"

# 1149 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1150 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1151 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1152 "data/maps/SlateportCity/scripts.pory"

# 1153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1154 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1155 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1156 "data/maps/SlateportCity/scripts.pory"

# 1157 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1158 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1159 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1160 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1161 "data/maps/SlateportCity/scripts.pory"

# 1162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1163 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1164 "data/maps/SlateportCity/scripts.pory"

# 1165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1166 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1167 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1170 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1171 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your POKéMON\n"
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1173 "data/maps/SlateportCity/scripts.pory"

# 1174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1175 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1177 "data/maps/SlateportCity/scripts.pory"

# 1178 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1179 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle POKéMON\n"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1183 "data/maps/SlateportCity/scripts.pory"

# 1184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1186 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1187 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1190 "data/maps/SlateportCity/scripts.pory"

# 1191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1195 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1196 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1197 "data/maps/SlateportCity/scripts.pory"

# 1198 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1202 "data/maps/SlateportCity/scripts.pory"

# 1203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1209 "data/maps/SlateportCity/scripts.pory"

# 1210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "some POKéMON!$"
# 1215 "data/maps/SlateportCity/scripts.pory"

# 1216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1222 "data/maps/SlateportCity/scripts.pory"

# 1223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1228 "data/maps/SlateportCity/scripts.pory"

# 1229 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1232 "data/maps/SlateportCity/scripts.pory"

# 1233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1238 "data/maps/SlateportCity/scripts.pory"

# 1239 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1242 "data/maps/SlateportCity/scripts.pory"

# 1243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1247 "data/maps/SlateportCity/scripts.pory"

# 1248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1252 "data/maps/SlateportCity/scripts.pory"

# 1253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1257 "data/maps/SlateportCity/scripts.pory"

# 1258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1261 "data/maps/SlateportCity/scripts.pory"

# 1262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1265 "data/maps/SlateportCity/scripts.pory"

# 1266 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1270 "data/maps/SlateportCity/scripts.pory"

# 1271 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1274 "data/maps/SlateportCity/scripts.pory"

# 1275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1278 "data/maps/SlateportCity/scripts.pory"

# 1279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1282 "data/maps/SlateportCity/scripts.pory"

# 1283 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1289 "data/maps/SlateportCity/scripts.pory"

# 1290 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1301 "data/maps/SlateportCity/scripts.pory"

# 1302 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by POKéMON?$"
# 1306 "data/maps/SlateportCity/scripts.pory"

# 1307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for POKéMON.$"
# 1312 "data/maps/SlateportCity/scripts.pory"

# 1313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1316 "data/maps/SlateportCity/scripts.pory"

# 1317 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your POKéMON's\n"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1321 "data/maps/SlateportCity/scripts.pory"

# 1322 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "Any POKéMON you get in a trade,\n"
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON is in the nickname.$"
# 1327 "data/maps/SlateportCity/scripts.pory"

# 1328 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough POKéMON\n"
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1335 "data/maps/SlateportCity/scripts.pory"

# 1336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1341 "data/maps/SlateportCity/scripts.pory"

# 1342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1347 "data/maps/SlateportCity/scripts.pory"

# 1348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1353 "data/maps/SlateportCity/scripts.pory"

# 1354 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1358 "data/maps/SlateportCity/scripts.pory"

# 1359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1362 "data/maps/SlateportCity/scripts.pory"

# 1363 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1366 "data/maps/SlateportCity/scripts.pory"

# 1367 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1370 "data/maps/SlateportCity/scripts.pory"

# 1371 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1374 "data/maps/SlateportCity/scripts.pory"

# 1375 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1378 "data/maps/SlateportCity/scripts.pory"

# 1379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1385 "data/maps/SlateportCity/scripts.pory"

# 1386 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1390 "data/maps/SlateportCity/scripts.pory"

# 1391 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1394 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "ROUTE 128.\p"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a POKéMON\n"
# 1399 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1400 "data/maps/SlateportCity/scripts.pory"

# 1401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1411 "data/maps/SlateportCity/scripts.pory"

# 1412 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1414 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1415 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1417 "data/maps/SlateportCity/scripts.pory"

# 1418 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1419 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1420 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1422 "data/maps/SlateportCity/scripts.pory"

# 1423 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1426 "data/maps/SlateportCity/scripts.pory"

# 1427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1429 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate POKéMON!”$"
# 1430 "data/maps/SlateportCity/scripts.pory"

# 1431 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1433 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1434 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1435 "data/maps/SlateportCity/scripts.pory"

# 1436 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1439 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1440 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1441 "data/maps/SlateportCity/scripts.pory"

# 1442 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1444 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1445 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1447 "data/maps/SlateportCity/scripts.pory"

# 1448 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1449 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON FAN CLUB\n"
# 1450 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of POKéMON!”$"
# 1451 "data/maps/SlateportCity/scripts.pory"

# 1452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1453 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1454 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1455 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1456 "data/maps/SlateportCity/scripts.pory"

# 1457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1458 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1459 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and POKéMON\n"
# 1460 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1461 "data/maps/SlateportCity/scripts.pory"

# 1462 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1463 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1464 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1465 "data/maps/SlateportCity/scripts.pory"

# 1466 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1467 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1468 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1469 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1470 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1471 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1472 "data/maps/SlateportCity/scripts.pory"

# 1473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1474 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1475 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1476 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1477 "data/maps/SlateportCity/scripts.pory"

# 1478 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1480 "data/maps/SlateportCity/scripts.pory"
	.string "“POKéMON nicknames rated.”$"
# 1481 "data/maps/SlateportCity/scripts.pory"

# 1482 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1483 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild POKéMON gets hurt, it heals\n"
# 1484 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1485 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1486 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1487 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1488 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1490 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1491 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1492 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1493 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1494 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1495 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1496 "data/maps/SlateportCity/scripts.pory"

# 1497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "POKéMON CENTERS for crushing BERRIES.\p"
# 1500 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1501 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1502 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1503 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1504 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1505 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1506 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1507 "data/maps/SlateportCity/scripts.pory"

# 1508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1509 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1510 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1511 "data/maps/SlateportCity/scripts.pory"

# 1512 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1513 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1514 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1515 "data/maps/SlateportCity/scripts.pory"

# 1516 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1517 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1518 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1519 "data/maps/SlateportCity/scripts.pory"

# 1520 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1521 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1522 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1523 "data/maps/SlateportCity/scripts.pory"

# 1524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1525 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1526 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1527 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1528 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1529 "data/maps/SlateportCity/scripts.pory"

# 1530 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1531 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1532 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1533 "data/maps/SlateportCity/scripts.pory"

# 1534 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1535 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1536 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1537 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1538 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1539 "data/maps/SlateportCity/scripts.pory"

# 1540 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1541 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1542 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1543 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1544 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1545 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1546 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1547 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1548 "data/maps/SlateportCity/scripts.pory"

# 1549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1550 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1551 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1552 "data/maps/SlateportCity/scripts.pory"

# 1553 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1554 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1555 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1556 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1557 "data/maps/SlateportCity/scripts.pory"
	.string "POKéNAVS.\p"
# 1558 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1559 "data/maps/SlateportCity/scripts.pory"

# 1560 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1561 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1562 "data/maps/SlateportCity/scripts.pory"
	.string "in the POKéNAV.$"
# 1563 "data/maps/SlateportCity/scripts.pory"

# 1564 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1565 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1566 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1567 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1568 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1569 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1570 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1571 "data/maps/SlateportCity/scripts.pory"

# 1572 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1573 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1574 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1575 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1576 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1577 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1578 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1579 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1580 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1581 "data/maps/SlateportCity/scripts.pory"
	.string "Give it your best effort!$"

SlateportCityTMClerk::
# 1584 "data/maps/SlateportCity/scripts.pory"
	lock
# 1585 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 1586 "data/maps/SlateportCity/scripts.pory"
	message SlateportCityTMClerk_Text_0
# 1587 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1588 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCityTMClerkMart
# 1589 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCityTMClerk_Text_1
# 1590 "data/maps/SlateportCity/scripts.pory"
	release
	return


	.align 2
# 1593 "data/maps/SlateportCity/scripts.pory"
SlateportCityTMClerkMart:
# 1594 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 1595 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
	.2byte ITEM_NONE

SlateportCityTMClerk_Text_0:
# 1586 "data/maps/SlateportCity/scripts.pory"
	.string "Hello! I'm Slateport City's TM Clerk. How\n"
	.string "can I help you today?$"

SlateportCityTMClerk_Text_1:
# 1589 "data/maps/SlateportCity/scripts.pory"
	.string "Come again soon.$"
