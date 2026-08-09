SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
	lock
	faceplayer
	move_tutor MOVE_SWAGGER, MoveTutor_Text_SwaggerTeach, MoveTutor_Text_SwaggerWhichMon, MoveTutor_EventScript_SwaggerDeclined, MoveTutor_EventScript_SwaggerTaught, FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
	release
	end

MoveTutor_EventScript_SwaggerDeclined::
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerTaught::
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
	lock
	faceplayer
	move_tutor MOVE_FURY_CUTTER, MoveTutor_Text_FuryCutterTeach, MoveTutor_Text_FuryCutterWhichMon, MoveTutor_EventScript_FuryCutterDeclined, MoveTutor_EventScript_FuryCutterTaught, FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
	end

MoveTutor_EventScript_FuryCutterDeclined::
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_FuryCutterTaught::
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_MimicTutor::
	lock
	faceplayer
	move_tutor MOVE_MIMIC, MoveTutor_MimicTeach, MoveTutor_Text_MimicWhichMon, MoveTutor_EventScript_MimicDeclined, MoveTutor_EventScript_MimicTaught, FLAG_MOVE_TUTOR_TAUGHT_MIMIC
	end

MoveTutor_EventScript_MimicDeclined::
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MimicTaught::
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_MetronomeTutor::
	lock
	faceplayer
	move_tutor MOVE_METRONOME, MoveTutor_Text_MetronomeTeach, MoveTutor_Text_MetronomeWhichMon, MoveTutor_EventScript_MetronomeDeclined, MoveTutor_EventScript_MetronomeTaught, FLAG_MOVE_TUTOR_TAUGHT_METRONOME
	end

MoveTutor_EventScript_MetronomeDeclined::
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MetronomeTaught::
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_SleepTalkTutor::
	lock
	faceplayer
	move_tutor MOVE_SLEEP_TALK, MoveTutor_Text_SleepTalkTeach, MoveTutor_Text_SleepTalkWhichMon, MoveTutor_EventScript_SleepTalkDeclined, MoveTutor_EventScript_SleepTalkTaught, FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
	end

MoveTutor_EventScript_SleepTalkDeclined::
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SleepTalkTaught::
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
	lock
	faceplayer
	move_tutor MOVE_SUBSTITUTE, MoveTutor_Text_SubstituteTeach, MoveTutor_Text_SubstituteWhichMon, MoveTutor_EventScript_SubstituteDeclined, MoveTutor_EventScript_SubstituteTaught, FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE
	end

MoveTutor_EventScript_SubstituteDeclined::
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SubstituteTaught::
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DynamicPunchTutor::
	lock
	faceplayer
	move_tutor MOVE_DYNAMIC_PUNCH, MoveTutor_Text_DynamicPunchTeach, MoveTutor_Text_DynamicPunchWhichMon, MoveTutor_EventScript_DynamicPunchDeclined, MoveTutor_EventScript_DynamicPunchTaught, FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
	end

MoveTutor_EventScript_DynamicPunchDeclined::
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DynamicPunchTaught::
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	move_tutor MOVE_DOUBLE_EDGE, MoveTutor_Text_DoubleEdgeTeach, MoveTutor_Text_DoubleEdgeWhichMon, MoveTutor_EventScript_DoubleEdgeDeclined, MoveTutor_EventScript_DoubleEdgeTaught, FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
	end

MoveTutor_EventScript_DoubleEdgeDeclined::
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DoubleEdgeTaught::
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
	lock
	faceplayer
	move_tutor MOVE_EXPLOSION, MoveTutor_Text_ExplosionTeach, MoveTutor_Text_ExplosionWhichMon, MoveTutor_EventScript_ExplosionDeclined, MoveTutor_EventScript_ExplosionTaught, FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
	end

MoveTutor_EventScript_ExplosionDeclined::
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_ExplosionTaught::
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RockSlideTutor::
	lock
	faceplayer
	move_tutor MOVE_ROCK_SLIDE, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end
MoveTutor_KickingMoves::
	lock
	faceplayer
	msgbox MoveTutor_Text_MultichoiceTeachMove, MSGBOX_DEFAULT 
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_Text_HighJumpKick, MoveTutor_Text_MegaKick, MoveTutor_Text_BlazeKick, MoveTutor_Text_ThunderousKick, MoveTutor_Text_TropKick, MoveTutor_Text_TripleAxel, MoveTutor_Text_HighHorsepower, MoveTutor_Text_StompingTantrum, MoveTutor_Text_RollingKick, MoveTutor_Text_AxeKick, MoveTutor_Text_PyroBall
	switch VAR_RESULT
	case 0, MoveTutor_HighJumpKick
	case 1, MoveTutor_MegaKick
	case 2, MoveTutor_BlazeKick
	case 3, MoveTutor_ThunderousKick
	case 4, MoveTutor_TropKick
	case 5, MoveTutor_TripleAxel
	case 6, MoveTutor_HighHorsepower
	case 7, MoveTutor_StompingTantrum
	case 8, MoveTutor_RollingKick
	case 9, MoveTutor_AxeKick
	case 10, MoveTutor_PyroBall

MoveTutor_HighJumpKick::
	move_tutor MOVE_HIGH_JUMP_KICK, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_MegaKick::
	move_tutor MOVE_MEGA_KICK, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_BlazeKick::
	move_tutor MOVE_BLAZE_KICK, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_ThunderousKick::
	move_tutor MOVE_THUNDEROUS_KICK, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_TropKick::
	move_tutor MOVE_TROP_KICK, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_TripleAxel::
	move_tutor MOVE_TRIPLE_AXEL, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_HighHorsepower::
	move_tutor MOVE_HIGH_HORSEPOWER, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_StompingTantrum::
	move_tutor MOVE_STOMPING_TANTRUM, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_RollingKick::
	move_tutor MOVE_ROLLING_KICK, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_AxeKick::
	move_tutor MOVE_AXE_KICK, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_PyroBall::
	move_tutor MOVE_PYRO_BALL, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_Text_HighJumpKick:
	.string "High Jump Kick$"

MoveTutor_Text_MegaKick:
	.string "Mega Kick$"

MoveTutor_Text_BlazeKick:
	.string "Blaze Kick$"

MoveTutor_Text_ThunderousKick:
	.string "Thunderous Kick$"

MoveTutor_Text_TropKick:
	.string "Trop Kick$"

MoveTutor_Text_TripleAxel:
	.string "Triple Axel$"

MoveTutor_Text_HighHorsepower:
	.string "High Horsepower$"

MoveTutor_Text_StompingTantrum:
	.string "Stomping Tantrum$"

MoveTutor_Text_RollingKick:
	.string "Rolling Kick$"

MoveTutor_Text_AxeKick:
	.string "Axe Kick$"

MoveTutor_Text_PyroBall:
	.string "Pyro Ball$"

MoveTutor_MultihitMoves::
	lock
	faceplayer
	msgbox MoveTutor_Text_MultichoiceTeachMove, MSGBOX_DEFAULT
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_Text_ArmThrust, MoveTutor_Text_BoneRush, MoveTutor_Text_CometPunch, MoveTutor_Text_FuryAttack, MoveTutor_Text_IcicleSpear, MoveTutor_Text_PinMissile, MoveTutor_Text_RockBlast, MoveTutor_Text_ScaleShot, MoveTutor_Text_SpikeCannon, MoveTutor_Text_TailSlap, MoveTutor_Text_Twineedle
	switch VAR_RESULT
	case 0, MoveTutor_ArmThrust
	case 1, MoveTutor_BoneRush
	case 2, MoveTutor_CometPunch
	case 3, MoveTutor_FuryAttack
	case 4, MoveTutor_IcicleSpear
	case 5, MoveTutor_PinMissile
	case 6, MoveTutor_RockBlast
	case 7, MoveTutor_ScaleShot
	case 8, MoveTutor_SpikeCannon
	case 9, MoveTutor_TailSlap
	case 10, MoveTutor_Twineedle 

MoveTutor_ArmThrust::
	move_tutor MOVE_ARM_THRUST, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_BoneRush::
	move_tutor MOVE_BONE_RUSH, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_CometPunch::
	move_tutor MOVE_COMET_PUNCH, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_FuryAttack::
	move_tutor MOVE_FURY_ATTACK, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_IcicleSpear::
	move_tutor MOVE_ICICLE_SPEAR, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_PinMissile::
	move_tutor MOVE_PIN_MISSILE, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_RockBlast::
	move_tutor MOVE_ROCK_BLAST, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_ScaleShot::
	move_tutor MOVE_SCALE_SHOT, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_SpikeCannon::
	move_tutor MOVE_SPIKE_CANNON, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_TailSlap::
	move_tutor MOVE_TAIL_SLAP, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_Twineedle::
	move_tutor MOVE_TWINEEDLE, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_Text_ArmThrust:
	.string "Arm Thrust$"

MoveTutor_Text_BoneRush:
	.string "Bone Rush$"

MoveTutor_Text_CometPunch:
	.string "Comet Punch$"

MoveTutor_Text_FuryAttack:
	.string "Fury Attack$"

MoveTutor_Text_IcicleSpear:
	.string "Icicle Spear$"

MoveTutor_Text_PinMissile:
	.string "Pin Missile$"

MoveTutor_Text_RockBlast:
	.string "Rock Blast$"

MoveTutor_Text_ScaleShot:
	.string "Scale Shot$"

MoveTutor_Text_SpikeCannon:
	.string "Spike Cannon$"

MoveTutor_Text_TailSlap:
	.string "Tail Slap$"

MoveTutor_Text_Twineedle:
	.string "Twineedle$"

MoveTutor_VerdanturfTown::
	lock
	faceplayer
	msgbox MoveTutor_Text_MultichoiceTeachMove, MSGBOX_DEFAULT
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_Text_LeechLife, MoveTutor_Text_CloseCombat, MoveTutor_Text_FocusBlast, MoveTutor_Text_HeatWave, MoveTutor_Text_IceSpinner, MoveTutor_Text_PlayRough, MoveTutor_Text_SacredSword, MoveTutor_Text_SecretSword, MoveTutor_Text_Superpower, MoveTutor_Text_GlaiveRush, MoveTutor_Text_FlipTurn
	switch VAR_RESULT
	case 0, MoveTutor_LeechLife
	case 1, MoveTutor_CloseCombat
	case 2, MoveTutor_FocusBlast
	case 3, MoveTutor_HeatWave
	case 4, MoveTutor_IceSpinner
	case 5, MoveTutor_PlayRough
	case 6, MoveTutor_SacredSword
	case 7, MoveTutor_SecretSword
	case 8, MoveTutor_Superpower
	case 9, MoveTutor_GlaiveRush
	case 10, MoveTutor_FlipTurn

MoveTutor_LeechLife::
	move_tutor MOVE_LEECH_LIFE, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_CloseCombat::
	move_tutor MOVE_CLOSE_COMBAT, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_FocusBlast::
	move_tutor MOVE_FOCUS_BLAST, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_HeatWave::
	move_tutor MOVE_HEAT_WAVE, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_IceSpinner::
	move_tutor MOVE_ICE_SPINNER, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_PlayRough::
	move_tutor MOVE_PLAY_ROUGH, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_SacredSword::
	move_tutor MOVE_SACRED_SWORD, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_SecretSword::
	move_tutor MOVE_SECRET_SWORD, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_Superpower::
	move_tutor MOVE_SUPERPOWER, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_GlaiveRush::
	move_tutor MOVE_GLAIVE_RUSH, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_FlipTurn::
	move_tutor MOVE_FLIP_TURN, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_Text_LeechLife:
	.string "Leech Life$"

MoveTutor_Text_CloseCombat:
	.string "Close Combat$"

MoveTutor_Text_FocusBlast:
	.string "Focus Blast$"
	
MoveTutor_Text_HeatWave:
	.string "Heat Wave$"

MoveTutor_Text_IceSpinner:
	.string "Ice Spinner$"

MoveTutor_Text_PlayRough:
	.string "Play Rough$"

MoveTutor_Text_SacredSword:
	.string "Sacred Sword$"

MoveTutor_Text_SecretSword:
	.string "Secret Sword$"

MoveTutor_Text_Superpower:
	.string "Superpower$"

MoveTutor_Text_GlaiveRush:
	.string "Glaive Rush$"

MoveTutor_Text_FlipTurn:
	.string "Flip Turn$"

MoveTutor_LavaridgeTown::	
	lock
	faceplayer
	msgbox MoveTutor_Text_MultichoiceTeachMove, MSGBOX_DEFAULT
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_Text_EarthPower, MoveTutor_Text_Liquidation, MoveTutor_Text_AuraSphere, MoveTutor_Text_GunkShot, MoveTutor_Text_AquaTail, MoveTutor_Text_IronHead, MoveTutor_Text_FlashCannon, MoveTutor_Text_DragonPulse, MoveTutor_Text_ZenHeadbutt, MoveTutor_Text_SeedBomb, MoveTutor_Text_PartingShot
	switch VAR_RESULT
	case 0, MoveTutor_EarthPower
	case 1, MoveTutor_Liquidation
	case 2, MoveTutor_AuraSphere
	case 3, MoveTutor_GunkShot
	case 4, MoveTutor_AquaTail
	case 5, MoveTutor_IronHead
	case 6, MoveTutor_FlashCannon
	case 7, MoveTutor_DragonPulse
	case 8, MoveTutor_ZenHeadbutt
	case 9, MoveTutor_SeedBomb
	case 10, MoveTutor_PartingShot

MoveTutor_EarthPower::
	move_tutor MOVE_EARTH_POWER, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_Liquidation::
	move_tutor MOVE_LIQUIDATION, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_AuraSphere::
	move_tutor MOVE_AURA_SPHERE, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_GunkShot::
	move_tutor MOVE_GUNK_SHOT, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_AquaTail::
	move_tutor MOVE_AQUA_TAIL, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_IronHead::
	move_tutor MOVE_IRON_HEAD, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_FlashCannon::
	move_tutor MOVE_FLASH_CANNON, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end	

MoveTutor_DragonPulse::
	move_tutor MOVE_DRAGON_PULSE, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_ZenHeadbutt::
	move_tutor MOVE_ZEN_HEADBUTT, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_SeedBomb::
	move_tutor MOVE_SEED_BOMB, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_PartingShot::
	move_tutor MOVE_PARTING_SHOT, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_Text_EarthPower:
	.string "Earth Power$"

MoveTutor_Text_Liquidation:
	.string "Liquidation$"

MoveTutor_Text_AuraSphere:
	.string "Aura Sphere$"

MoveTutor_Text_GunkShot:
	.string "Gunk Shot$"

MoveTutor_Text_AquaTail:
	.string "Aqua Tail$"

MoveTutor_Text_IronHead:
	.string "Iron Head$"

MoveTutor_Text_FlashCannon:
	.string "Flash Cannon$"

MoveTutor_Text_DragonPulse:
	.string "Dragon Pulse$"

MoveTutor_Text_ZenHeadbutt:
	.string "Zen Headbutt$"

MoveTutor_Text_SeedBomb:
	.string "Seed Bomb$"

MoveTutor_Text_PartingShot:
	.string "Parting Shot$"

MoveTutor_ElementalMoves::
	lock
	faceplayer
	msgbox MoveTutor_Text_MultichoiceTeachMove, MSGBOX_DEFAULT
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MoveTutor_Text_IcePunch, MoveTutor_Text_FirePunch, MoveTutor_Text_ThunderPunch, MoveTutor_Text_IceFang, MoveTutor_Text_FireFang, MoveTutor_Text_ThunderFang
	switch VAR_RESULT
	case 0, MoveTutor_IcePunch
	case 1, MoveTutor_FirePunch
	case 2, MoveTutor_ThunderPunch
	case 3, MoveTutor_IceFang
	case 4, MoveTutor_FireFang
	case 5, MoveTutor_ThunderFang
	
MoveTutor_IcePunch::
	move_tutor MOVE_ICE_PUNCH, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	release
	end

MoveTutor_FirePunch::
	move_tutor MOVE_FIRE_PUNCH, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	releaseall
	end

MoveTutor_ThunderPunch::
	move_tutor MOVE_THUNDER_PUNCH, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	releaseall
	end

MoveTutor_IceFang::
	move_tutor MOVE_ICE_FANG, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	releaseall
	end

MoveTutor_FireFang::
	move_tutor MOVE_FIRE_FANG, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	releaseall
	end

MoveTutor_ThunderFang::
	move_tutor MOVE_THUNDER_FANG, MoveTutor_Text_TeachMove, MoveTutor_Text_WhichMon, MoveTutor_Declined, MoveTutor_Taught
	releaseall
	end

MoveTutor_Taught::
	msgbox MoveTutor_Text_DeclinedTaught, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

MoveTutor_Declined::
	msgbox MoveTutor_Text_DeclinedTaught, MSGBOX_DEFAULT
	waitmessage
	releaseall
	end

MoveTutor_EventScript_OpenPartyMenu::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_OpenBox::
	chooseboxmon SELECT_PC_MON_MOVE_TUTOR
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce::
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	return

MoveTutor_AfterChooseBoxMon::
	waitstate
	special CanTeachMoveBoxMon
	waitstate
	return

MoveTutor_Text_TeachMove:
	.string "Would you like me to teach this move\n"
	.string "to your Pokémon?$"

MoveTutor_Text_MultichoiceTeachMove:
	.string "Which move would you like me to teach\n"
	.string "to your Pokémon?$"

MoveTutor_Text_WhichMon:
	.string "Which Pokémon would you like to learn\n"
	.string "this move?$"

MoveTutor_Text_DeclinedTaught:
	.string "Come again when you need me\n"
	.string "to teach your Pokémon a new move.$"

MoveTutor_Text_FirePunch:
	.string "Fire Punch$"

MoveTutor_Text_IcePunch:
	.string "Ice Punch$"

MoveTutor_Text_ThunderPunch:
	.string "Thunder Punch$"

MoveTutor_Text_IceFang:
	.string "Ice Fang$"

MoveTutor_Text_FireFang:
	.string "Fire Fang$"

MoveTutor_Text_ThunderFang:
	.string "Thunder Fang$"