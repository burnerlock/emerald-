DewfordTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

DewfordTown_MagikarpSeller::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_MAGIKARP, DewfordTown_ReceivedMagikarp
	showmoneybox 0, 0
	msgbox DewfordTown_Text_OfferMagikarp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_SellMagikarp
	hidemoneybox
	msgbox DewfordTown_Text_DeclineMagikarp, MSGBOX_DEFAULT
	release
	end

DewfordTown_SellMagikarp::
	checkmoney 500
	removemoney 500
	updatemoneybox
	setflag FLAG_RECEIVED_MAGIKARP
	givemon SPECIES_MAGIKARP, 5, ITEM_MYSTIC_WATER, ITEM_LUXURY_BALL, NATURE_ADAMANT, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_TACKLE, MOVE_SPLASH, shinyMode=SHINY_MODE_ALWAYS
	goto DewfordTown_ReceivedMagikarp

DewfordTown_ReceivedMagikarp::
	msgbox DewfordTown_Text_SoldMagikarp, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

DewfordTown_Text_OfferMagikarp:
	.string "Hello, there! Have I got a deal just for\n"
	.string "you! I'll let you have a swell Magikarp\l"
	.string "for just ¥500! What do you say?$"

DewfordTown_Text_DeclineMagikarp:
	.string "No? You say no? I'm only doing this as a\n"
	.string "favor to you!$"

DewfordTown_Text_SoldMagikarp:
	.string "Well, I don't give refunds!$"

DewfordTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	call Common_EventScript_UpdateBrineyLocation
	end

DewfordTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_DEWFORD_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_EventScript_Man::
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
	end

DewfordTown_PokemonCenter_1F_Text_StoneCavern:
	.string "There's a stone cavern at the edge\n"
	.string "of town.\p"
	.string "I've heard you can find rare stones\n"
	.string "there.$"

DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
	.string "Even if a POKéMON faints and can't\n"
	.string "battle, it can still use a move learned\l"
	.string "from a HIDDEN MACHINE (HM).$"

