MauvilleCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MauvilleCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

MauvilleCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MAUVILLE_CITY
	call Common_EventScript_UpdateBrineyLocation
	goto MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_SetMauvilleOldManGfx::
	special SetMauvilleOldManObjEventGfx
	end

MauvilleCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_MAUVILLE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

MauvilleCity_ErikaIntroduction::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM_GIGA_DRAIN, MauvilleCity_ErikaPostChallenge1
	goto_if_set FLAG_DEFEATED_ERIKA1, MauvilleCity_ErikaGigaDrainReward
	msgbox MauvilleCity_Text_ErikaIntroduction, MSGBOX_DEFAULT
	goto_if_set FLAG_BADGE03_GET, MauvilleCity_ErikaChallenge
	msgbox MauvilleCity_Text_ErikaNoBadge3, MSGBOX_DEFAULT
	release
	end

MauvilleCity_ErikaChallenge::
	msgbox MauvilleCity_Text_ErikaChallenge, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, MauvilleCity_ErikaChallengeAccept
	msgbox MauvilleCity_Text_ErikaChallengeDecline, MSGBOX_DEFAULT
	release
	end

MauvilleCity_ErikaChallengeAccept::
	trainerbattle_single TRAINER_ERIKA_1, MauvilleCity_Text_ErikaIntro1, MauvilleCity_Text_ErikaDefeat1
	setflag FLAG_DEFEATED_ERIKA1
	release
	end

MauvilleCity_ErikaGigaDrainReward::
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
	giveitem ITEM_TM_GIGA_DRAIN
	msgbox MauvilleCity_Text_ErikaPostChallenge1, MSGBOX_DEFAULT
	release
	end

MauvilleCity_ErikaPostChallenge1::
	msgbox MauvilleCity_Text_ErikaPostChallenge1, MSGBOX_DEFAULT
	release
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman1::
	msgbox MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Woman2::
	msgbox MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner, MSGBOX_NPC
	end

MauvilleCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun, MSGBOX_NPC
	end

MauvilleCity_Text_ErikaPostChallenge1:
	.string "You've defeated me and proven your\n"
	.string "worth as a prospective Champion. The\l"
	.string "other Kanto Gym Leaders will be eager\l"
	.string "to battle you once I spread word of\l"
	.string "your victory.$"

MauvilleCity_Text_ErikaDefeat1:
	.string "Congratulations, you've defeated me\n"
	.string "and earned yourself TM19 Giga Drain.$"

MauvilleCity_Text_ErikaIntro1:
	.string "I am a student of the art of flower\n"
	.string "arranging. My Pokémon are solely of the\l"
	.string "Grass type.$"

MauvilleCity_Text_ErikaChallenge:
	.string "You've defeated Wattson and proved to\n"
	.string "me you're of my standards. Would you\l"
	.string "like to battle me?{PLAY_BGM MUS_RG_ENCOUNTER_GYM_LEADER}$"

MauvilleCity_Text_ErikaChallengeDecline:
	.string "While my position as a Kanto Gym Leader\n"
	.string "might seem daunting to you, the\l"
	.string "experience and reward that comes with\l"
	.string "challenging me is well worth it.$"

MauvilleCity_Text_ErikaIntroduction:
	.string "Hello there, my name is Erika and I am\n"
	.string "the gym leader of Kanto's Celadon City\l"
	.string "Gym. I came to Hoenn to find intriguing\l"
	.string "trainers and you have piqued my\l"
	.string "interest.$"

MauvilleCity_Text_ErikaNoBadge3:
	.string "It appears that you have not defeated\n"
	.string "Wattson. Defeat Wattson and come back\l"
	.string "to challenge me for a reward worth your\l"
	.string "while.$"

MauvilleCity_PokemonCenter_1F_Text_ManOverThereSaysWeirdThings:
	.string "That man over there, he says weird\n"
	.string "things!\p"
	.string "He's funny in a weird way.\n"
	.string "I doubt I'll forget about him!$"

MauvilleCity_PokemonCenter_1F_Text_MyDataUpdatedFromRecordCorner:
	.string "When I accessed the RECORD CORNER,\n"
	.string "the data for what's hot in DEWFORD\l"
	.string "got updated.\p"
	.string "Now that bit of data is the same\n"
	.string "as my friend's!$"

MauvilleCity_PokemonCenter_1F_Text_RecordCornerSoundsFun:
	.string "A RECORD CORNER opened upstairs in\n"
	.string "the POKéMON CENTER.\p"
	.string "I don't know what it's about, but it\n"
	.string "sounds fun. I'll go check it out!$"

