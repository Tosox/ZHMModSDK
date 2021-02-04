#pragma once

// 0x0000000142A7B270 (Size: 0x4)
enum class CrowdReactionAIEventType
{
	CROWDAIEVENT_NONE = 0,
	CROWDAIEVENT_CURIOUS = 1,
	CROWDAIEVENT_ALERTED = 2,
	CROWDAIEVENT_BLAME_FOR_WEAPON = 3,
	CROWDAIEVENT_BLAME_FOR_KILL = 4,
};

// 0x0000000142AB1E50 (Size: 0x4)
enum class ECrossHairType
{
	CROSSHAIR_NONE = 0,
	CROSSHAIR_PISTOL = 1,
	CROSSHAIR_REVOLVER = 2,
	CROSSHAIR_SMG = 3,
	CROSSHAIR_RIFLE = 4,
	CROSSHAIR_SHOTGUN = 5,
	CROSSHAIR_SNIPER = 6,
	CROSSHAIR_HARDBALLER = 7,
	CROSSHAIR_UNAIMED = 8,
	CROSSHAIR_POINTER = 9,
	CROSSHAIR_WORLDCENTERMARKER = 10,
	CROSSHAIR_BLINDFIRE = 11,
	CROSSHAIR_RANGEINDICATOR = 12,
	CROSSHAIR_DOT = 13,
};

// 0x0000000142A95E90 (Size: 0x4)
enum class SniperControllerConditionType
{
	SCCT_Enabled = 0,
	SCCT_PrecisionAim = 1,
};

// 0x00000001422CA508 (Size: 0x4)
enum class EAnimSetType
{
	EAST_UNDEFINED = 0,
	EAST_DEFAULT = 1,
	EAST_PISTOL = 2,
	EAST_REVOLVER = 3,
	EAST_SMG = 4,
	EAST_SNIPER = 5,
	EAST_ASSULT = 6,
	EAST_SHOTGUN = 7,
	EAST_BODYBAG = 8,
	EAST_GLASS = 9,
	EAST_WHISKYGLASS = 10,
	EAST_WINEGLASS = 11,
	EAST_CHAMPAGNEGLASS = 12,
	EAST_PHONE = 13,
	EAST_BOX = 14,
	EAST_PLATE = 15,
	EAST_SMALLOBJ = 16,
	EAST_SUITCASE = 17,
	EAST_TRAY = 18,
	EAST_TROLLY = 19,
	EAST_FLASHLIGHT = 20,
	EAST_CARRY_1HANDEDWEAPON = 21,
	EAST_CARRY_2HANDEDWEAPON = 22,
	EAST_CARRY_RAKE = 23,
	EAST_CARRY_WEAPON_ITEM = 24,
	EAST_CARRY_BRICK_MINE = 25,
	EAST_CARRY_PROXY_MINE = 26,
	EAST_CARRY_LEAD_PIPES = 27,
	EAST_CARRY_TUBE = 28,
	EAST_CARRY_UMBRELLA = 29,
};

// 0x0000000142AEED50 (Size: 0x4)
enum class ECoordinateSpace
{
	CSPACE_INVALID = 0,
	CSPACE_OBJECT_TO_WORLD = 1,
	CSPACE_OBJECT_TO_PARENT = 2,
	CSPACE_SEQUENCE_ORIGIN = 3,
	CSPACE_CHARACTER_RELATIVE = 4,
};

// 0x0000000142A99B48 (Size: 0x4)
enum class EItemGripType
{
	IGT_Empty = 0,
	IGT_Suitcase = 1,
	IGT_Suitcase_Big = 2,
	IGT_Firearm_Pistol = 3,
	IGT_Firearm_Pistol_Stealth = 4,
	IGT_Firearm_AssaultRifle_Bullpup = 5,
	IGT_Firearm_AssaultRifle_Carbine = 6,
	IGT_Firearm_Shotgun = 7,
	IGT_Firearm_SMG = 8,
	IGT_Firearm_SMG02 = 9,
	IGT_Firearm_SniperRifle = 10,
	IGT_Firearm_SniperRifle02 = 11,
	IGT_Firearm_Dartgun = 12,
	IGT_Melee_1H_Baton = 13,
	IGT_Melee_1H_Cleaver = 14,
	IGT_Melee_1H_Hammer = 15,
	IGT_Melee_1H_Knife = 16,
	IGT_Melee_1H_Rock = 17,
	IGT_Melee_1H_Screwdriver = 18,
	IGT_Melee_1H_Stick = 19,
	IGT_Melee_1H_Sword = 20,
	IGT_Melee_1H_FireExtinguisher = 21,
	IGT_Melee_1H_Bust = 22,
	IGT_Melee_1H_Crowbar = 23,
	IGT_Melee_1H_Syringe = 24,
	IGT_Melee_2H_Axe = 25,
	IGT_Melee_2H_Stick = 26,
	IGT_Melee_2H_Sword = 27,
	IGT_Gadget_Fiberwire = 28,
	IGT_Gadget_Coin = 29,
	IGT_Gadget_Vial = 30,
	IGT_Gadget_C4 = 31,
	IGT_Gadget_Detonator = 32,
	IGT_Gadget_Grenade_ThickGrip = 33,
	IGT_Gadget_Grenade_ThinGrip = 34,
	IGT_Gadget_Mine = 35,
	IGT_Gadget_Remote = 36,
	IGT_Prop_1H = 37,
	IGT_Prop_1H_Duck = 38,
	IGT_Prop_1h_Phone = 39,
	IGT_None = 40,
};

// 0x0000000142AA5200 (Size: 0x4)
enum class EMarkerInclusionMode
{
	MIM_DEFAULT = 0,
	MIM_IF_FORCE_INCLUDED_ONLY = 1,
};

// 0x0000000142A8D2C8 (Size: 0x4)
enum class EHeroGameState
{
	eHGS_Reserved_QueryALL = 0,
	eHGS_Reserved_QueryAny = 1,
	eHGS_InstinctModeActive = 2,
	eHGS_IsHardToSee = 3,
	eHGS_Sneaking = 4,
	eHGS_InSequence = 5,
	eHGS_InCloseCombat = 6,
	eHGS_ItemHandlingActive = 7,
	eHGS_CamSwitched = 8,
	eHGS_SniperMode = 9,
	eHGS_OTSMode = 10,
	eHGS_DualWielding = 11,
	eHGS_PreciseAim = 12,
	eHGS_ActivatingAltFire = 13,
	eHGS_FiredLastFrFocusBurnRate = 14,
	eHGS_FiredLastFrFocusGainValue = 15,
	eHGS_BurningFocus = 16,
	eHGS_InsideCloset = 17,
	eHGS_Peeking = 18,
	eHGS_FocusedInteraction = 19,
	eHGS_HoldsUtility = 20,
	eHGS_FacingRight = 21,
	eHGS_ThrowAiming = 22,
	eHGS_PlaceItemAiming = 23,
	eHGS_Reloading = 24,
	eHGS_FiberWirePrimedAndReady = 25,
	eHGS_OperatingDoorVRHandPush = 26,
	eHGS_MvAgility = 27,
	eHGS_MvCover = 28,
	eHGS_MvDragging = 29,
	eHGS_MvDrainPipe = 30,
	eHGS_MvLedgeWalk = 31,
	eHGS_MvLedgeHang = 32,
	eHGS_MvLocomotion = 33,
	eHGS_MvCloseCombat = 34,
	eHGS_MvSurrendering = 35,
	eHGS_MvFriskComplying = 36,
	eHGS_MvShowItem = 37,
	eHGS_MvThrow = 38,
	eHGS_MvFiberWireKill = 39,
	eHGS_MvAlign = 40,
	eHGS_MvTakedown = 41,
	eHGS_MvSubAction = 42,
	eHGS_MvNewFullBody = 43,
	eHGS_MvDisguiseSafeZone = 44,
	eHGS_MvPlaceItem = 45,
	eHGS_NUM = 46,
};

// 0x0000000142AF30E8 (Size: 0x4)
enum class EDisconnectReason
{
	eNOTIFICATION = 0,
	eCONNECTION_LOST = 1,
	eNETWORK_STATE = 2,
};

// 0x0000000142A96340 (Size: 0x4)
enum class EInventoryConfigItemHandling
{
	EICIH_Allow = 0,
	EICIH_Store = 1,
	EICIH_InstaStore = 2,
	EICIH_Drop = 3,
	EICIH_DropOrStore = 4,
	EICIH_DropAndPickup = 5,
	EICIH_DoNothing = 6,
};

// 0x0000000142A98250 (Size: 0x4)
enum class ECharacterStateTransitionAttempt
{
	eSM_TA_IfDestinationCan = 0,
	eSM_TA_IfDestinationCanAndWants = 1,
	eSM_TA_IfDestinationCanAndOriginDoesNotWant = 2,
	eSM_TA_IfDestinationCanAndWantsOriginDoesNotWant = 3,
	eSM_TA_IfDestinationCanAndOriginCanNot = 4,
};

// 0x0000000142A97EC0 (Size: 0x4)
enum class ECustomSoundDefType
{
	eCSDT_Distraction_InvestigationAck = 0,
	eCSDT_Distraction_InvestigationInvestigate = 1,
	eCSDT_Distraction_InvestigationStnd = 2,
};

// 0x0000000142A99808 (Size: 0x4)
enum class EKeywordSetBehavior
{
	EKWSB_All = 0,
	EKWSB_None = 1,
	EKWSB_Any = 2,
	EKWSB_No = 3,
};

// 0x0000000143CDF3A8 (Size: 0x4)
enum class eParticleEmitterBoxEntity_SpawnModes
{
	BOX_SPAWNMODE_INSIDE = 0,
	BOX_SPAWNMODE_EDGE = 1,
	BOX_SPAWNMODE_FACE = 2,
	BOX_SPAWNMODE_ELLIPSOID_INSIDE = 3,
	BOX_SPAWNMODE_ELLIPSOID = 4,
};

// 0x0000000142A7B328 (Size: 0x1)
enum class ERayDetailLevel
{
	RAYDETAILS_NONE = 0,
	RAYDETAILS_BONES = 1,
	RAYDETAILS_MESH = 2,
};

// 0x0000000142A99630 (Size: 0x4)
enum class EDifficultyParameter
{
	EDP_Invalid = 0,
	EDP_AIAttentionGainMultiplier = 1,
	EDP_AIAudioPerceptionAlwaysEmitFootstepSoundEvents = 2,
	EDP_AICombat_ActiveCombatants_MinimumNumber = 3,
	EDP_AICombat_ActiveCombatants_MinimumNumberWhenAllVIPsAreDead = 4,
	EDP_AICombat_ActiveCombatants_MaximumNumber = 5,
	EDP_AICombat_ActiveCombatants_MinimumAmountForMedium = 6,
	EDP_AICombat_ActiveCombatants_MinimumAmountForMany = 7,
	EDP_AICombat_ShootingAccuracyResetPeriod_Minimum = 8,
	EDP_AICombat_ShootingAccuracyResetPeriod_Maximum_FewCombatants = 9,
	EDP_AICombat_ShootingAccuracyResetPeriod_Maximum_MediumCombatants = 10,
	EDP_AICombat_ShootingAccuracyResetPeriod_Maximum_ManyCombatants = 11,
	EDP_AICombat_Leaders_NumberOfActiveCombatantsNeededForOneLeader = 12,
	EDP_AICombat_Leaders_NumberOfActiveCombatantsNeededForTwoLeaders = 13,
	EDP_AICombat_MaximumInterestingCombatLifetime = 14,
	EDP_AICombat_MaximumInterestingTimeSinceLastCombat = 15,
	EDP_AICombat_ShootingAccuracyInitialBuildUp_MinimumDuration = 16,
	EDP_AICombat_ShootingAccuracyInitialBuildUp_MaximumDuration = 17,
	EDP_AICombat_ShootingAccuracy_MinimumDistance = 18,
	EDP_AICombat_FlashGrenadeThrow_GlobalCooldown = 19,
	EDP_AICombat_FlashGrenadeThrow_AggressionTriggerCooldown = 20,
	EDP_AICombat_FlashGrenadeThrow_TargetCampingTriggerCooldown = 21,
	EDP_AICombat_FlashGrenadeThrow_LargeRelocationTriggerCooldown = 22,
	EDP_AIDisguise_FollowWarningsDelay = 23,
	EDP_AIDisguise_BreakOnVeryCloseDistance = 24,
	EDP_AIEscortOut_MaxForbiddenMovement = 25,
	EDP_AIEscortOut_EscortEscalateDistance = 26,
	EDP_AIEscortOut_MaxTimeToHonorWarning = 27,
	EDP_AIEscortOut_EscortHardWarningDistance = 28,
	EDP_AIIllegalActionAttentionModifier = 29,
	EDP_AIInvestigateCautious_Disturbance_Radius = 30,
	EDP_AIInvestigateCautious_Search_ClearDisturbanceBackRadius = 31,
	EDP_AIInvestigateCautious_Search_ClearDisturbanceFrontRadius = 32,
	EDP_AIInvestigateCautious_Search_ClearDisturbanceRespectSoftReservationThreshold = 33,
	EDP_AIInvestigateCautiousAttentionToPersonEnabled = 34,
	EDP_AIInvestigateDisguiseMembersFollowDistance = 35,
	EDP_AILongTermMemory_DisableArrest = 36,
	EDP_AIRunningAttentionModifier = 37,
	EDP_AISentry_WarningDelay = 38,
	EDP_AISuspiciousMovementDisguiseAttentionModifier = 39,
	EDP_AISuspiciousMovementSensorEnabled = 40,
	EDP_AISuspiciousLostTargetTime = 41,
	EDP_AllowInstinctGlow = 42,
	EDP_ArrestEscalateIllegalWeapon = 43,
	EDP_ArrestEscalateMaximum = 44,
	EDP_ArrestEscalateMoving = 45,
	EDP_ArrestEscalateRunning = 46,
	EDP_ArrestTargetLostTime = 47,
	EDP_CloseCombatChainFailDamage = 48,
	EDP_CloseCombatChoiceWindowLength = 49,
	EDP_CloseCombatChokePressCount_Civilian = 50,
	EDP_CloseCombatChokePressCount_Elite = 51,
	EDP_CloseCombatChokePressCount_Guard = 52,
	EDP_CloseCombatCounterEndLength = 53,
	EDP_CloseCombatCounterFailDamage = 54,
	EDP_CloseCombatShowSnapNeckPressCount_Civilian = 55,
	EDP_CloseCombatShowSnapNeckPressCount_Elite = 56,
	EDP_CloseCombatShowSnapNeckPressCount_Guard = 57,
	EDP_DamageMultiplierHandgun = 58,
	EDP_DamageMultiplierSlowgun = 59,
	EDP_DamageMultiplierAssaultRifle = 60,
	EDP_DamageMultiplierSMG = 61,
	EDP_DamageMultiplierSniper = 62,
	EDP_DamageMultiplierRPG = 63,
	EDP_DamageMultiplierKnife = 64,
	EDP_DamageMultiplierShotgun = 65,
	EDP_DamageMultiplierSpotter = 66,
	EDP_DamageMultiplierHandgun_NPC = 67,
	EDP_DamageMultiplierSlowgun_NPC = 68,
	EDP_DamageMultiplierAssaultRifle_NPC = 69,
	EDP_DamageMultiplierSMG_NPC = 70,
	EDP_DamageMultiplierSniper_NPC = 71,
	EDP_DamageMultiplierRPG_NPC = 72,
	EDP_DamageMultiplierKnife_NPC = 73,
	EDP_DamageMultiplierShotgun_NPC = 74,
	EDP_DamageMultiplierSpotter_NPC = 75,
	EDP_DisguiseRuiningEnabled = 76,
	EDP_GameMissionSaveLimit = 77,
	EDP_GameOpportunitiesEnabled = 78,
	EDP_HearRangeBulletImpact = 79,
	EDP_HearRangeBulletImpactOnBody = 80,
	EDP_HearRangeCloseCombatBreakNeck = 81,
	EDP_HearRangeCloseCombatChoke = 82,
	EDP_HearRangeCloseCombatFiberWire = 83,
	EDP_HearRangeCloseCombatHitFromBehind = 84,
	EDP_HearRangeCloseCombatL1 = 85,
	EDP_HearRangeCloseCombatL2 = 86,
	EDP_HearRangeCloseCombatL3 = 87,
	EDP_HearRangeEventAccident = 88,
	EDP_HearRangeEventAlarm = 89,
	EDP_HearRangeEventExplosion = 90,
	EDP_HearRangeEventRadio = 91,
	EDP_HearRangeEventStrange = 92,
	EDP_HearRangeEventThrownItem = 93,
	EDP_HearRangeFootstepWalkSlow = 94,
	EDP_HearRangeFootstepWalk = 95,
	EDP_HearRangeFootstepRun = 96,
	EDP_HearRangeFootstepCrouchWalkSlow = 97,
	EDP_HearRangeFootstepCrouchWalk = 98,
	EDP_HearRangeFootstepCrouchRun = 99,
	EDP_HearRangeFootstepVegetationLVAWalkSlow = 100,
	EDP_HearRangeFootstepVegetationLVAWalk = 101,
	EDP_HearRangeFootstepVegetationLVARun = 102,
	EDP_HearRangeFootstepVegetationLVACrouchWalkSlow = 103,
	EDP_HearRangeFootstepVegetationLVACrouchWalk = 104,
	EDP_HearRangeFootstepVegetationLVACrouchRun = 105,
	EDP_HearRangeGunEmpty = 106,
	EDP_HearRangeGunShot = 107,
	EDP_HearRangeGunSilenced = 108,
	EDP_HearRangeGunSuperSilenced = 109,
	EDP_HearRangeSpeakAngry = 110,
	EDP_HearRangeSpeakHelp = 111,
	EDP_HearRangeSpeakHelpLoud = 112,
	EDP_HearRangeSpeakPain = 113,
	EDP_HearRangeSpeakPainLow = 114,
	EDP_HearRangeSpeakWarning = 115,
	EDP_HitmanDamageReceivedMultiplier = 116,
	EDP_InstinctModeBurnRate = 117,
	EDP_InstinctRegenCap = 118,
	EDP_InstinctRegenRate = 119,
	EDP_ManhuntGroupMaxSearchTime = 120,
	EDP_ManhuntGroupSearchAreaHackMaxDistance = 121,
	EDP_ManhuntGroupSearchAreaRadius = 122,
	EDP_MaxCoverShootActorCountMultiplier = 123,
	EDP_MinAttentionToForceLookAt = 124,
	EDP_MinAttentionToForceLookAtIfIncreasing = 125,
	EDP_NPCDamageReceivedMultiplier = 126,
	EDP_PlayerDamagePerSecondDistance = 127,
	EDP_PlayerDamagePerSecondLimitFar = 128,
	EDP_PlayerDamagePerSecondLimitNear = 129,
	EDP_PlayerDamagePerSecondThreshold = 130,
	EDP_PlayerHitPointsMax = 131,
	EDP_PlayerHitPointsRegenerationDelay = 132,
	EDP_PlayerHitPointsRegenerationPerSecond = 133,
	EDP_SecurityCameras = 134,
	EDP_SightReactionMinAttention = 135,
	EDP_SightInvestigationMinAttention = 136,
	EDP_ShootSpreadMax = 137,
	EDP_ShootSpreadMin = 138,
	EDP_ShootSpreadRange = 139,
	EDP_SocialGreetingAngle = 140,
	EDP_SocialGreetingCooldown = 141,
	EDP_SocialGreetingCooldownAlertLevel = 142,
	EDP_SocialGreetingCooldownLastSpeak = 143,
	EDP_SocialGreetingCooldownPlayer = 144,
	EDP_SocialGreetingCooldownSequence = 145,
	EDP_SocialGreetingDistance = 146,
	EDP_SocialLookAtTimeMax = 147,
	EDP_SocialLookAtTimeMin = 148,
	EDP_SocialSillyCooldown = 149,
	EDP_SocialSillyDistance = 150,
	EDP_SocialSillyTriggerTime = 151,
	EDP_SocialStandingCooldown = 152,
	EDP_SocialStandingDistance = 153,
	EDP_SocialStandingDistanceImmediate = 154,
	EDP_SocialStandingTriggerTime = 155,
	EDP_SpotHitmanShootingDistance = 156,
	EDP_StrictItemRules = 157,
	EDP_COUNT = 158,
};

// 0x0000000142AB3210 (Size: 0x1)
enum class EOpportunityState
{
	OS_TRACKED = 1,
	OS_ENABLED = 2,
	OS_UNLOCKED = 4,
	OS_REVEAL_PENDING = 8,
};

// 0x0000000142A97C80 (Size: 0x1)
enum class EOrderCompletionStatus
{
	OCS_Undetermined = 0,
	OCS_Succeeded = 1,
	OCS_Interrupted = 2,
	OCS_Blocked = 3,
	OCS_Failed = 4,
};

// 0x0000000142A8F9F8 (Size: 0x4)
enum class ERoleEvent
{
	eRE_NONE = 0,
	eRE_CAST = 1,
	eRE_CLEAR = 2,
	eRE_ENTER_DRAMA = 3,
	eRE_REENTER_DRAMA = 4,
	eRE_LEAVE_DRAMA = 5,
	eRE_NEW_DRAMA = 6,
	eRE_PAUSED = 7,
	eRE_RESUMING = 8,
	eRE_RUNNING = 9,
};

// 0x0000000142A7B710 (Size: 0x4)
enum class EBaseMovementType
{
	eMovementNone = -1,
	eMovementDead = 0,
	eMovementNewFullBody = 1,
	eMovementAgility = 2,
	eMovementAlign = 3,
	eMovementCover = 4,
	eMovementDrainPipe = 5,
	eMovementLadder = 6,
	eMovementPullVictimFromWindow = 7,
	eMovementFiberWireKill = 8,
	eMovementDumpBody = 9,
	eMovementThrowBodyOverRail = 10,
	eMovementDumpBodyOverLedge = 11,
	eMovementOperateCPDoor = 12,
	eMovementDisguiseSafeZone = 13,
	eMovementHideInCloset = 14,
	eMovementTakeDown = 15,
	eMovementCloseCombat = 16,
	eMovementRecoveryFinisher = 17,
	eMovementContextAction = 18,
	eMovementSubaction = 19,
	eMovementGrabVictim = 20,
	eMovementPushVictimThroughWindowAndRail = 21,
	eMovementContextKill = 22,
	eMovementKickVictimOverLedge = 23,
	eMovementDragBody = 24,
	eMovementTakeClothes = 25,
	eMovementCoupDeGrace = 26,
	eMovementThrow = 27,
	eMovementPlace = 28,
	eMovementSurrender = 29,
	eMovementFrisk = 30,
	eMovementShowItem = 31,
	eMovementPeek = 32,
	eMovementFocusedInteraction = 33,
	eMovementSilentTakedown = 34,
	eMovementSnapNeck = 35,
	eMovementLocomotion = 36,
	eMovementLast = 37,
	eMovementPickupItem = 38,
};

// 0x0000000142A98BB0 (Size: 0x4)
enum class EFocusBarState
{
	FOCUS_BAR_NORMAL = 0,
	FOCUS_BAR_INSTINCT = 1,
	FOCUS_BAR_BURNING = 2,
};

// 0x00000001422CA138 (Size: 0x1)
enum class ERenderGlowTypes
{
	ERENDERGLOWTYPE_NONE = 0,
	ERENDERGLOWTYPE_ENEMIES = 1,
	ERENDERGLOWTYPE_ALLIES = 2,
	ERENDERGLOWTYPE_CIVILIAN = 3,
	ERENDERGLOWTYPE_ITEMS = 4,
	ERENDERGLOWTYPE_STASHED_ITEMS = 5,
	ERENDERGLOWTYPE_SETPIECE = 6,
	ERENDERGLOWTYPE_BACKGROUND = 7,
	ERENDERGLOWTYPE_CONTRACT_TARGET = 8,
	ERENDERGLOWTYPE_CONTRACT_TARGET_NON_CRITICAL = 9,
	ERENDERGLOWTYPE_CONTRACT_TARGET_SPECIAL = 10,
	ERENDERGLOWTYPE_OBJECTIVES = 11,
	ERENDERGLOWTYPE_ENFORCER = 12,
	ERENDERGLOWTYPE_LTMEMORY = 13,
	ERENDERGLOWTYPE_TAGGED = 14,
	ERENDERGLOWTYPE_TAGFOCUS_UNTAGGED = 15,
	ERENDERGLOWTYPE_TAGFOCUS_TAGGED = 16,
	ERENDERGLOWTYPE_BACKGROUNDUNMASKED = 17,
	ERENDERGLOWTYPE_INTERACTION = 18,
	ERENDERGLOWTYPE_INTERACTION_SELECTED = 19,
	ERENDERGLOWTYPE_INTERACTION_DESELECTED = 20,
	ERENDERGLOWTYPE_PLAYER_LVA = 21,
	ERENDERGLOWTYPE_PLAYER_LVA_SEEN = 22,
	ERENDERGLOWTYPE_VS_OPPONENT = 23,
	ERENDERGLOWTYPE_TRAVERSAL = 24,
	ERENDERGLOWTYPE_EMISSIVE_UI = 25,
	ERENDERGLOWTYPE_EMISSIVE_UI_IGNORE_DEPTH = 26,
	ERENDERGLOWTYPE_OPPONENT = 27,
	ERENDERGLOWTYPE_CAMERA = 28,
};

// 0x0000000142A94470 (Size: 0x4)
enum class EAILegalType
{
	AILT_Weapon = 0,
	AILT_Shooting = 1,
	AILT_Aiming = 2,
	AILT_CloseCombat = 3,
	AILT_ChangeOutfit = 4,
	AILT_Count = 5,
};

// 0x0000000142AF32B0 (Size: 0x4)
enum class GameLobbyState
{
	GLS_None = 0,
	GLS_InHud = 1,
	GLS_CreatingLobby = 2,
	GLS_JoiningLobby = 3,
	GLS_ConnectToLobby = 4,
	GLS_ConnectingLobby = 5,
	GLS_InLobby = 6,
	GLS_LeavingLobby = 7,
	GLS_InGame = 8,
};

// 0x0000000142AE1588 (Size: 0x4)
enum class ESoundGateType
{
	SOUNDGATE_TYPE_ROUND = 0,
	SOUNDGATE_TYPE_SHARPCORNERS = 1,
};

// 0x0000000142A8B2A8 (Size: 0x4)
enum class ECheatGroup
{
	eCGNone = 0,
	eCGPistols = 1,
	eCGSMGs = 2,
	eCGAssaultRifles = 3,
	eCGShotguns = 4,
	eCGSniper = 5,
	eCGExotics = 6,
	eCGDevices = 7,
};

// 0x0000000142A983D0 (Size: 0x4)
enum class ECharacterIdleHandlerUpperBodyType
{
	eCIHUBT_NothingToDoEmptySingleHand = 0,
	eCIHUBT_NothingToDoEmptyHands = 1,
	eCIHUBT_Event = 2,
	eCIHUBT_Custom = 3,
};

// 0x0000000142A82F60 (Size: 0x4)
enum class EActorType
{
	eAT_Civilian = 0,
	eAT_Guard = 1,
	eAT_Hitman = 2,
	eAT_Last = 3,
};

// 0x0000000142A82F28 (Size: 0x4)
enum class EActorEventTypes
{
	eAET_OnAlive = 0,
	eAET_OnPacified = 1,
	eAET_OnMurdered = 2,
	eAET_OnAccidentDeath = 3,
	eAET_OnUnnoticableKill = 4,
	eAET_OnBodyNoticed = 5,
	eAET_OnBodyBagged = 6,
	eAET_OnDying = 7,
	eAET_OnDead = 8,
	eAET_OnBodyHidden = 9,
	eAET_OnBodyFlushed = 10,
	eAET_OnBodyDumped = 11,
	eAET_OnDelete = 12,
};

// 0x0000000142A79EA8 (Size: 0x4)
enum class EMorphemeEventId
{
	eDE_None = 0,
	eDE_UnholsterWeapon = 18,
	eDE_HolsterWeapon = 19,
	eDE_FireWeapon = 20,
	eDE_AttachWeapon = 21,
	eDE_DetachWeapon = 22,
	eDE_LegR = 100,
	eDE_LegL = 101,
	eDE_TransitionEnd_LegR = 200,
	eDE_TransitionEnd_LegL = 201,
	eDE_Finish = 255,
	eDE_InterpolationStart = 300,
	eDE_InterpolationEnd = 301,
	eDE_TransitionSignal = 400,
	eDE_TransitionEnd = 500,
	eDE_DisableNPCHitmanCollision = 700,
	eDE_EnableNPCHitmanCollision = 701,
	eDE_EnableRagdollRangeStart = 800,
	eDE_EnableRagdollRangeEnd = 801,
	eDE_StartBlendingOut = 850,
	eDE_FinishBlendingOut = 851,
	eDE_StartOrientationBlend = 860,
	eDE_FinishOrientationBlend = 861,
	eDE_RecoveryPowerRagdollEnd = 862,
	eDE_RecoveryBlendEnd = 863,
	eDE_ImpactFinished = 900,
	eDE_ActFinished = 1000,
	eDE_ActFinishedWhenMoving = 1001,
	eDE_ActReached = 1005,
	eDE_ActLoop = 1050,
	eDE_ActFullbodyStartMarker = 1090,
	eDE_ActFullbodyEndMarker = 1091,
	eDE_ReactionFinished = 1100,
	eDE_StandToCrouch = 1500,
	eDE_CrouchToStand = 1501,
	eDE_OffHandIKEnable = 1600,
	eDE_OffHandIKDisable = 1601,
	eDE_StandToMoveRotationToTranslation = 1700,
	eDE_MoveToStandTranslationToRotation = 1701,
	eDE_HeadIKEnable = 1800,
	eDE_HeadIKDisable = 1801,
	eDE_WindowLeaningEnable = 2000,
	eDE_WindowLeaningDisable = 2001,
	eDE_PreventDeathAnimations = 2002,
	eDE_AllowDeathAnimations = 2003,
	eDE_HeadControlEnable = 2010,
	eDE_HeadControlDisable = 2011,
	eDE_CombatActEndMarker = 3000,
	eDE_CombatAim = 3100,
	eDE_CombatEnableRightHandIK = 3010,
	eDE_CombatEnableLeftHandIK = 3011,
	eDE_CombatEndEnableIK = 3015,
	eDE_CombatStartDisableIK = 3020,
	eDE_CombatEndDisableIK = 3025,
	eDE_CombatEnableShoot = 3030,
	eDE_CombatDisableShoot = 3040,
	eDE_CombatEnableBlindShoot = 3050,
	eDE_CombatDisableBlindShoot = 3060,
	eDE_CombatUnholsterGrenade = 3070,
	eDE_CombatThrowGrenade = 3080,
	eDE_ActBehaviorEventStart = 4000,
	eDE_ActItemPickup = 4001,
	eDE_ActItemDrop = 4002,
	eDE_AmbientItemUseMarker = 4010,
	eDE_ActBehaviorEventEnd = 4999,
	eDE_Act_LeadIn_Marker = 10301,
	eDE_Act_UB_BlendIn_End = 10050,
	eDE_Act_FB_BlendIn_Start = 10051,
	eDE_Act_FB_BlendIn_End = 10052,
	eDE_Act_FB_BlendOut_End = 10053,
};

// 0x0000000142AF47F8 (Size: 0x1)
enum class EDefaultCollidableLayer
{
	DCL_STATIC = 0,
	DCL_KINEMATIC = 1,
	DCL_KINEMATIC_TRANSPARENT = 2,
	DCL_DYNAMIC = 3,
	DCL_DYNAMIC_TRANSPARENT = 4,
	DCL_COLLIDE_ALL = 5,
	DCL_STATIC_TRANSPARENT = 6,
	DCL_COLLIDE_STATIC_ONLY = 7,
	DCL_DYNAMIC_NO_CHARACTER = 8,
	DCL_UNUSED_LAST = 9,
};

// 0x0000000142AF46F0 (Size: 0x4)
enum class EMotionType
{
	MOTION_LOCKED = 0,
	MOTION_LIMITED = 1,
	MOTION_FREE = 2,
};

// 0x0000000142AA55C0 (Size: 0x4)
enum class EUIBusyOperationId
{
	eOperationId_GameSave = 0,
	eOperationId_MenuTransition = 1,
	eOperationId_ManuallyTriggered = 2,
	eOperationId_TriggerBootFlow = 3,
	eOperationId_SaveContract = 4,
	eOperationId_StartContract = 5,
	eOperationId_SessionStart = 6,
	eOperationId_ReportContract = 7,
	eOperationId_ConnectionFlow = 8,
	eOperationId_LoadingTransitionDelayed = 9,
	eOperationId_SaveSuccess = 10,
	eOperationId_SaveFailed = 11,
	eOperationId_SessionReconnect = 12,
	eOperationId_NetSynchedMenuPause = 13,
	eOperationId_NetSynchedMenuRestart = 14,
	eOperationId_NetSynchedMenuReplan = 15,
	eOperationId_StartingMultiplayerSession = 16,
	eOperationId_HandlingMultiplayerRequest = 17,
	eOperationId_PoorConnectivity = 18,
	eOperationId_DefaultLoadout = 19,
	eOperationId_Max = 19,
	eOperationId_Custom_01 = 20,
	eOperationId_Custom_Begin = 20,
	eOperationId_Custom_02 = 21,
	eOperationId_Custom_03 = 22,
	eOperationId_Custom_04 = 23,
	eOperationId_Custom_05 = 24,
	eOperationId_Custom_06 = 25,
	eOperationId_Custom_07 = 26,
	eOperationId_Custom_08 = 27,
	eOperationId_Custom_09 = 28,
	eOperationId_Custom_10 = 29,
	eOperationId_Custom_11 = 30,
	eOperationId_Custom_12 = 31,
	eOperationId_Custom_13 = 32,
	eOperationId_Custom_14 = 33,
	eOperationId_Custom_15 = 34,
	eOperationId_Custom_16 = 35,
	eOperationId_Custom_17 = 36,
	eOperationId_Custom_18 = 37,
	eOperationId_Custom_19 = 38,
	eOperationId_Custom_20 = 39,
	eOperationId_Custom_21 = 40,
	eOperationId_Custom_22 = 41,
	eOperationId_Custom_23 = 42,
	eOperationId_Custom_24 = 43,
	eOperationId_Custom_25 = 44,
	eOperationId_Custom_End = 45,
	eOperationId_None = 46,
};

// 0x0000000142A8FCF0 (Size: 0x4)
enum class EDamageEvent
{
	eDE_UNDEFINED = 0,
	eDE_InCloset = 1,
	eDE_Subdue = 2,
	eDE_CloseCombat = 4,
	eDE_PushOver = 16,
	eDE_KickDownStairs = 32,
	eDE_DeadlyThrow = 64,
	eDE_Shoot = 128,
	eDE_Sedated = 256,
	eDE_InstantTakeDown = 512,
	eDE_CoupDeGrace = 1024,
	eDE_ContextKill = 2048,
	eDE_Garotte = 4096,
	eDE_Poison = 8192,
	eDE_Electric = 16384,
	eDE_SuspendedObject = 32768,
	eDE_Burn = 65536,
	eDE_Drop = 131072,
	eDE_Drown = 262144,
};

// 0x0000000142A94CD8 (Size: 0x4)
enum class ESentryActionPrompt
{
	eSAP_None = 0,
	eSAP_Frisk = 1,
	eSAP_ShowItem = 2,
	eSAP_Max = 3,
};

// 0x0000000142A7A660 (Size: 0x4)
enum class EMoveSpeed
{
	MS_Sneaking = 0,
	MS_Walking = 1,
	MS_Jogging = 2,
	MS_Sprinting = 3,
	MS_Flash = 4,
};

// 0x0000000142AE15A0 (Size: 0x4)
enum class ESoundGateFlags
{
	SOUNDGATE_FLAGS_AMBIENCE = 1,
	SOUNDGATE_FLAGS_OCCLUSION = 2,
	SOUNDGATE_FLAGS_ALL = 255,
};

// 0x0000000142A8DEE8 (Size: 0x4)
enum class EMatchOverCondition
{
	CompletedNormally = 0,
	OpponentsDisconnected = 1,
	OpponentsAbandoned = 2,
};

// 0x0000000142A92690 (Size: 0x4)
enum class EVRConfigAnimationMode
{
	EVRCAM_FullAnimation = 0,
	EVRCAM_FullAnimationFreeze = 1,
	EVRCAM_HideAnimation = 2,
	EVRCAM_HideUpperBodyAnimation = 3,
	EVRCAM_RemoveGroundMotion = 4,
	EVRCAM_RemoveFullBodyAndGroundMotion = 5,
	EVRCAM_KeepCurrentMode = 6,
};

// 0x0000000142A96260 (Size: 0x4)
enum class ECharacterIdlePriority
{
	eCIP_Irrelevant = 0,
	eCIP_VeryLow = 1,
	eCIP_QuiteLow = 2,
	eCIP_Low = 3,
	eCIP_MediumLow = 4,
	eCIP_Medium = 5,
	eCIP_MediumHigh = 6,
	eCIP_High = 7,
	eCIP_QuiteHigh = 8,
	eCIP_VeryHigh = 9,
	eCIP_Urgent = 10,
};

// 0x0000000142A98A30 (Size: 0x4)
enum class EButtonState
{
	BUTTON_STATE_DISABLED = -1,
	BUTTON_STATE_NONE = 0,
	BUTTON_STATE_ENABLED = 1,
	BUTTON_STATE_PRESSED = 2,
	BUTTON_STATE_BLINKING = 3,
};

// 0x0000000142A8FF68 (Size: 0x4)
enum class EVolumeTriggerEntityTypeFlags
{
	VTET_Hitman = 1,
	VTET_ActorAlive = 2,
	VTET_ActorDead = 4,
	VTET_ActorPacified = 8,
	VTET_ThrownItem = 16,
	VTET_Spatial = 32,
	VTET_SoundSweetener = 64,
	VTET_ExplodeableItem = 128,
	VTET_Item = 256,
	VTET_SpatialVisible = 512,
};

// 0x0000000142AA50E0 (Size: 0x4)
enum class EMapType
{
	E_MAPTYPE_Minimap = 0,
	E_MAPTYPE_MainMap = 1,
	E_MAPTYPE_MenuMap = 2,
};

// 0x0000000142AE2168 (Size: 0x4)
enum class ECrowdFlowCandidates
{
	NONE = 0,
	EVERYONE = 1,
	SPAWNED_ON_FLOW = 2,
};

// 0x0000000142A98310 (Size: 0x4)
enum class ECharacterSubcontrollerType
{
	eSCT_IDGenerator = 0,
	eSCT_Debugger = 1,
	eSCT_Time = 2,
	eSCT_Tags = 3,
	eSCT_Descriptors = 4,
	eSCT_ActionRequest = 5,
	eSCT_Events = 6,
	eSCT_Animator = 7,
	eSCT_Motor = 8,
	eSCT_Inventory = 9,
	eSCT_FlavorIdle = 10,
	eSCT_Lookat = 11,
	eSCT_AimAssistant = 12,
	eSCT_CharacterCollector = 13,
	eSCT_SwipeMechanic = 14,
	eSCT_OpenDoor = 15,
	eSCT_Fullbody = 16,
	eSCT_Aim = 17,
	eSCT_PrecisionShot = 18,
	eSCT_Marking = 19,
	eSCT_Grip = 20,
	eSCT_Suitcase = 21,
	eSCT_VRConfig = 22,
	eSCT_Hands = 23,
	eSCT_StickingItems = 24,
	eSCT_Fiberwire = 25,
};

// 0x0000000142A8E1A8 (Size: 0x4)
enum class ECharacterStateTags
{
	eSM_ST_UsingFullBody = 1,
	eSM_ST_UsingRightHand = 2,
	eSM_ST_UsingLeftHand = 4,
	eSM_ST_EnslavingRightHand = 8,
	eSM_ST_EnslavingLeftHand = 16,
	eSM_ST_EnslavingFullBody = 32,
	eSM_ST_UpperBodyRequestedControlRightHand = 64,
	eSM_ST_UpperBodyRequestedControlLeftHand = 128,
	eSM_ST_CanGiveUpControlRightHand = 256,
	eSM_ST_CanGiveUpControlLeftHand = 512,
	eSM_ST_Pickup = 1024,
	eSM_ST_Sniping = 2048,
	eSM_ST_Reloading = 4096,
	eSM_ST_Assemble = 262144,
	eSM_ST_EmptyStateLeftHand = 8396800,
	eSM_ST_EmptyStateRightHand = 16384,
	eSM_ST_EnableOldMovement = 32768,
	eSM_ST_UsingItemLeft = 65536,
	eSM_ST_UsingItemRight = 131072,
};

// 0x0000000142AF4690 (Size: 0x1)
enum class ECCDUsage
{
	ECCDUSAGE_DISABLED = 0,
	ECCDUSAGE_AGAINST_STATIC = 1,
	ECCDUSAGE_AGAINST_STATIC_DYNAMIC = 2,
};

// 0x0000000142A82FC0 (Size: 0x4)
enum class EDisturbanceType
{
	DT_Generic = 0,
	DT_SeeWeapon = 1,
	DT_BodyNeedsBagging = 2,
	DT_SoundCloseCombat = 3,
	DT_SoundGunSilenced = 4,
	DT_SoundBulletImpact = 5,
	DT_SoundNeckBreak = 6,
	DT_SoundSpeakPain = 7,
	DT_SoundGunshot = 8,
	DT_SoundExplosion = 9,
	DT_SeeExplosion = 10,
	DT_DeadBody = 11,
	DT_HitmanNearDeadBody = 12,
	DT_HitmanNearPacifiedBody = 13,
	DT_SeeTakeKeyCard = 14,
	DT_SeeTakeSecurityTape = 15,
	DT_SeeChangeOutfit = 16,
	DT_SeeTrespasser = 17,
	DT_SeeBrokenDisguise = 18,
	DT_SeeIllegalWeapon = 19,
	DT_SeeDraggingBody = 20,
	DT_SeeDeath = 21,
	DT_SeeKilling = 22,
	DT_UnconsciousVictim = 23,
	DT_HuntTarget = 24,
	DT_CrowdAlerted = 25,
	DT_SeeGunshotVictim = 26,
	DT_SoundThrownItem = 27,
	DT_SoundThrownItemSeenThrowing = 28,
	DT_HitByItemOrCoin = 29,
	DT_PrivateAreaViolated = 30,
	DT_SetpieceInteraction = 31,
	DT_IllegalAction = 32,
	DT_KnockdownMelee = 33,
	DT_KnockdownThrow = 34,
	DT_BumpedTooMuch = 35,
	DT_Murder = 36,
	DT_Strangle = 37,
	DT_GotShot = 38,
	DT_MurderAttempt = 39,
	DT_LongTermMemory = 40,
	DT_Accident = 41,
	DT_MAX = 42,
};

// 0x00000001422CA000 (Size: 0x4)
enum class eAmmoType
{
	eAmmoGun = 0,
	eAmmoRevolver = 1,
	eAmmoSMG = 2,
	eAmmoRifle = 3,
	eAmmoShotgun = 4,
	eAmmoSniper = 5,
	eAmmoMG = 6,
	eAmmoRPG = 7,
	eAmmoFake = 8,
	eAmmoHarmless = 9,
	eAmmoLightPistol = 10,
	eAmmoDartTranquilizer = 11,
	eAmmoShotgunBeanbag = 12,
	eUnknownAmmoType = 13,
};

// 0x0000000142A98910 (Size: 0x4)
enum class ERatingTitle
{
	ERatingTitle_SilentAssassin = 0,
	ERatingTitle_PerfectAssassin = 1,
	ERatingTitle_Ninja = 2,
	ERatingTitle_GloryBlazer = 3,
	ERatingTitle_Eraser = 4,
	ERatingTitle_Exhibitionist = 5,
	ERatingTitle_Trickster = 6,
	ERatingTitle_Chameleon = 7,
	ERatingTitle_Spider = 8,
	ERatingTitle_Angel = 9,
	ERatingTitle_COUNT = 10,
};

// 0x0000000143E5FAB0 (Size: 0x1)
enum class ETessellationFactorMode
{
	TESSELLATIONFACTORMODE_FIXED = 0,
	TESSELLATIONFACTORMODE_OBJECT = 1,
	TESSELLATIONFACTORMODE_TRIANGLE = 2,
};

// 0x0000000142A98430 (Size: 0x4)
enum class ETargetType
{
	eTDS_None = 0,
	eTDS_LookAtTarget = 1,
	eTDS_Spatial = 2,
	eTDS_Linked = 3,
};

// 0x0000000142AA1B30 (Size: 0x4)
enum class _EUIOptionKey
{
	UI_OPTION_GAME_VIBRATION = 100,
	UI_OPTION_GAME_ADAPTIVE_FEEDBACK = 110,
	UI_OPTION_GAME_AIM_ASSIST = 200,
	UI_OPTION_GAME_AIM_CAUSAL = 210,
	UI_OPTION_GAME_INVERT_INVENTORY_EMOTE = 220,
	UI_OPTION_GAME_INVERT_X = 300,
	UI_OPTION_GAME_INVERT_MOUSE_X = 301,
	UI_OPTION_GAME_INVERT_MOUSE_Y = 302,
	UI_OPTION_GAME_INVERT_Y = 310,
	UI_OPTION_GAME_CONTROL_SCHEME = 311,
	UI_OPTION_GAME_FAST_TARGET = 312,
	UI_OPTION_GAME_DIFFICULTY = 321,
	UI_OPTION_GAME_TRIGGER_SHOOT = 330,
	UI_OPTION_GAME_SWITCH_SNEAK_AND_CAMERA = 332,
	UI_OPTION_GAME_LEFT_HANDED_CONTROLS = 333,
	UI_OPTION_GAME_CAMERA_SENSITIVITY_HORZ = 334,
	UI_OPTION_GAME_CAMERA_SENSITIVITY_VERT = 335,
	UI_OPTION_GAME_MOUSE_SENSITIVITY = 336,
	UI_OPTION_GAME_AIM_SENSITIVITY = 337,
	UI_OPTION_GAME_CAMERA_SENSITIVITY = 338,
	UI_OPTION_GAME_INSTINCT_PATHS = 340,
	UI_OPTION_GAME_INSTINCT_NPCGLOW = 342,
	UI_OPTION_GAME_HINTS_TUTORIAL = 346,
	UI_OPTION_GAME_HINTS_INSTINCT = 348,
	UI_OPTION_GAME_LANG_AUDIO = 350,
	UI_OPTION_GAME_LANG_TEXT = 351,
	UI_OPTION_GAME_COVER_TOGGLE = 352,
	UI_OPTION_GAME_FIXED_MAP = 353,
	UI_OPTION_GAME_MAP_SHOW_NORTH_INDICATOR = 354,
	UI_OPTION_GAME_AID_OPPORTUNITIES = 360,
	UI_OPTION_GAME_AID_INSTINCT = 361,
	UI_OPTION_GAME_AID_MINI_MAP = 362,
	UI_OPTION_GAME_AID_NPC_ICONS = 363,
	UI_OPTION_GAME_AID_ATTENTION = 364,
	UI_OPTION_GAME_AID_VITAL_INFO = 365,
	UI_OPTION_GAME_AID_INTERACTION_H = 366,
	UI_OPTION_GAME_AID_OBJECTIVES = 367,
	UI_OPTION_GAME_AID_WEAPON_HUD = 368,
	UI_OPTION_GAME_AID_CHALLENGEDESCRIPTION = 369,
	UI_OPTION_GAME_MINI_MAP_SHOW_NPCS = 370,
	UI_OPTION_GAME_AID_TARGET_INFO = 371,
	UI_OPTION_GAME_AID_CHALLENGE_HUD = 372,
	UI_OPTION_GAME_MINI_MAP_SHOW_TARGETS = 373,
	UI_OPTION_GAME_CHALLENGES_FILTER = 374,
	UI_OPTION_GAME_AID_MISSION_TIMER = 375,
	UI_OPTION_GAME_DIFFICULTY_LEVEL_HUD = 376,
	UI_OPTION_GAME_AID_GLOBAL_HINTS = 377,
	UI_OPTION_GAME_SCORE_HUD = 378,
	UI_OPTION_GAME_AID_LVA = 379,
	UI_OPTION_GAME_AID_PICTURE_IN_PICTURE = 380,
	UI_OPTION_GAME_AID_INTERACTION_PROMPT = 381,
	UI_OPTION_GAME_AID_SA_HUD = 382,
	UI_OPTION_GAME_AID_RELOAD_HUD = 383,
	UI_OPTION_GAME_AID_CAMERA_GRID = 384,
	UI_OPTION_GAME_AID_AIM_TOGGLE = 385,
	UI_OPTION_GAME_AID_OBJECTIVES_VR = 386,
	UI_OPTION_GAME_AUTOSAVE = 390,
	UI_OPTION_GAME_AUTOSAVE_VR = 391,
	UI_OPTION_GAME_AUTOSAVE_HUD = 400,
	UI_OPTION_SOUND_VOLUME_MASTER = 1010,
	UI_OPTION_SOUND_VOLUME_EFFECTS = 1020,
	UI_OPTION_SOUND_VOLUME_MUSIC = 1030,
	UI_OPTION_SOUND_VOLUME_DIALOGUE = 1040,
	UI_OPTION_SOUND_MUTE_MICROPHONE = 1050,
	UI_OPTION_SOUND_MUTE_OTHER_PLAYER = 1060,
	UI_OPTION_SOUND_OUTPUTMODE = 1200,
	UI_OPTION_SOUND_SIMULATION_QUALITY = 1210,
	UI_OPTION_SOUND_DYNAMIC_RANGE_MODE = 1220,
	UI_OPTION_SOUND_DYNAMIC_RANGE_MODE_VR = 1221,
	UI_OPTION_GRAPHICS_SUBTITLES = 2000,
	UI_OPTION_GRAPHICS_SUBTITLES_SIZE = 2001,
	UI_OPTION_GRAPHICS_SUBTITLES_VR = 2010,
	UI_OPTION_GRAPHICS_SUBTITLES_SIZE_VR = 2011,
	UI_OPTION_GRAPHICS_SAFE_AREA_X = 2210,
	UI_OPTION_GRAPHICS_SAFE_AREA_Y = 2220,
	UI_OPTION_GSM_AUTHORITY_BEGIN_MARKER = 2221,
	UI_OPTION_DISPLAY_RESOLUTION = 2230,
	UI_OPTION_DISPLAY_REFRESHRATE = 2240,
	UI_OPTION_DISPLAY_FULLSCREEN = 2250,
	UI_OPTION_DISPLAY_EXCLUSIVE = 2260,
	UI_OPTION_DISPLAY_VSYNC = 2270,
	UI_OPTION_DISPLAY_MONITOR = 2280,
	UI_OPTION_DISPLAY_QUALITY = 2290,
	UI_OPTION_DISPLAY_ASPECT = 2300,
	UI_OPTION_DISPLAY_STEREOSCOPIC = 2310,
	UI_OPTION_DISPLAY_STEREO_DEPTH = 2320,
	UI_OPTION_DISPLAY_STEREO_STRENGTH = 2330,
	UI_OPTION_GRAPHICS_QUALITY = 2600,
	UI_OPTION_GRAPHICS_SHADOW_QUALITY = 2610,
	UI_OPTION_GRAPHICS_SHADOW_RESOLUTION = 2620,
	UI_OPTION_GRAPHICS_TEXTURE_QUALITY = 2630,
	UI_OPTION_GRAPHICS_TEXTURE_FILTER = 2640,
	UI_OPTION_GRAPHICS_ASSAO_QUALITY = 2650,
	UI_OPTION_GRAPHICS_VSYNC = 2660,
	UI_OPTION_GRAPHICS_TESSELLATION = 2680,
	UI_OPTION_GRAPHICS_MIRRORS = 2690,
	UI_OPTION_GRAPHICS_LOD = 2710,
	UI_OPTION_GRAPHICS_MOTIONBLUR = 2720,
	UI_OPTION_GRAPHICS_BOKEH = 2740,
	UI_OPTION_GRAPHICS_REFLECTION_QUALITY = 2742,
	UI_OPTION_GRAPHICS_MOTION_BLUR = 2743,
	UI_OPTION_GRAPHICS_DYNAMIC_SHARPENING = 2744,
	UI_OPTION_GRAPHICS_SIMULATION_QUALITY = 2745,
	UI_OPTION_GRAPHICS_SSR = 2746,
	UI_OPTION_GRAPHICS_VRS = 2747,
	UI_OPTION_GRAPHICS_SUPER_SAMPLING = 2750,
	UI_OPTION_GRAPHICS_GAMMA = 2760,
	UI_OPTION_GRAPHICS_FRAMERATE_LIMIT = 2770,
	UI_OPTION_GRAPHICS_HDR = 2771,
	UI_OPTION_GSM_AUTHORITY_END_MARKER = 2771,
	UI_OPTION_GRAPHICS_HDR_GAMMA = 2772,
	UI_OPTION_GRAPHICS_RENDERING_QUALITY = 2773,
	UI_OPTION_GRAPHICS_NEUTRAL_LUT_BLEND = 2774,
	UI_OPTION_GRAPHICS_DIFFUSE_COLOR_CLAMP = 2775,
	UI_OPTION_VR_BLINDERS_ENABLED = 3000,
	UI_OPTION_VR_BLINDERS_STRENGTH = 3001,
	UI_OPTION_VR_TURN_MODE = 3002,
	UI_OPTION_VR_HEAD_BASED_MOVEMENT = 3003,
	UI_OPTION_VR_FADE_ON_COLLISION = 3004,
	UI_OPTION_VR_TURN_RATE = 3005,
	UI_OPTION_VR_TURN_SPEED = 3006,
	UI_OPTION_VR_MINIMUM_REPROJECTION_COLOR = 3007,
	UI_OPTION_VR_LEFT_HAND_FOLLOW_RIGHT = 3008,
};

// 0x0000000142A926C0 (Size: 0x4)
enum class EVRConfigCameraRotationAllowed
{
	EVRCCRA_RotationEnabled = 0,
	EVRCCRA_RotationDisabled = 1,
	EVRCCRA_KeepCurrent = 2,
};

// 0x0000000142AF47C8 (Size: 0x4)
enum class ERuntimeMemoryAllocationState
{
	eRMAS_NeverAllocated = 0,
	eRMAS_Allocated = 1,
	eRMAS_Released = 2,
};

// 0x0000000142A98CD0 (Size: 0x4)
enum class ESniperScoreMessageType
{
	ESSMT_STYLE_DEFAULT = 0,
	ESSMT_STYLE_SCORE = 1,
	ESSMT_STYLE_PENALTY = 2,
	ESSMT_STYLE_STREAK = 3,
	ESSMT_STYLE_CIVKILL = 4,
};

// 0x0000000142A97BD0 (Size: 0x4)
enum class EActBodyType
{
	ABT_UpperBodyOnly = 0,
	ABT_FullBodyWithLeadIn = 1,
	ABT_FullBodyOnly = 2,
};

// 0x0000000142A98850 (Size: 0x4)
enum class ELastSoundTension
{
	EST_Unknown = 0,
	EST_Ambient = 1,
	EST_Yellow = 2,
	EST_Orange = 3,
	EST_Red = 4,
};

// 0x0000000142A9FF70 (Size: 0x4)
enum class eContractSessionStartError
{
	ERROR_NONE = 0,
	ERROR_MISSING_CONTENT = 1,
	ERROR_SERVER_UNREACHABLE = 2,
	ERROR_SERVER_ERROR = 3,
	ERROR_CONTRACT_NOT_PLAYABLE_YET = 4,
	ERROR_CONTRACT_NOT_PLAYABLE_ANYMORE = 5,
	ERROR_CANCELED = 6,
	ERROR_ALREADY_STARTING = 7,
	ERROR_UNKNOWN = 8,
};

// 0x0000000142AAD118 (Size: 0x4)
enum class EOnlinTest
{
	eHELLO = 0,
	eWORLD = 1,
};

// 0x0000000142AF49E8 (Size: 0x4)
enum class EClothStretchConstrainType
{
	eClothBendConstrainType_Anchor = 0,
	eClothBendConstrainType_LRA = 1,
	eClothBendConstrainType_None = 2,
};

// 0x0000000142A8BB68 (Size: 0x4)
enum class ESituationJoinReason
{
	AISJR_Default = 0,
	AISJR_HeardSound = 1,
	AISJR_Alarm = 2,
	AISJR_HitmanStrange = 3,
	AISJR_HitmanIllegal = 4,
	AISJR_Assist = 5,
	AISJR_AssistingGuard = 6,
	AISJR_Propagate = 7,
	AISJR_ResumeSituation = 8,
	AISJR_Spawned = 9,
	AISJR_HelpCivilian = 10,
	AISJR_Escalating = 11,
	AISJR_DeadBody = 12,
	AISJR_Accident = 13,
	AISJR_StandDown = 14,
	AISJR_Report = 15,
	AISJR_ForcedToHold = 16,
	AISJR_Wounded = 17,
	AISJR_SC_HeardBulletImpact = 18,
	AISJR_SC_HeardSetPiece = 19,
};

// 0x0000000142A96358 (Size: 0x4)
enum class EInventoryConfigFormerEquippedItems
{
	EICFEI_Equip = 0,
	EICFEI_EquipOrPickup = 1,
	EICFEI_Forget = 2,
};

// 0x0000000142AF48A0 (Size: 0x4)
enum class EDamageResponse
{
	eDR_Fractured = 0,
	eDR_Detached = 1,
	eDR_Destroyed = 2,
	eDR_Collided = 3,
	eDR_Count = 4,
};

// 0x0000000142A7A678 (Size: 0x4)
enum class EAnimationPose
{
	AP_Undefined = 0,
	AP_Standing = 1,
	AP_SittingChair = 2,
	AP_SittingGround = 3,
	AP_LyingGround = 4,
	AP_Crouching = 5,
	AP_SittingBench = 6,
	AP_SittingChairTable = 7,
};

// 0x0000000142AF48E8 (Size: 0x1)
enum class ECharacterCollidableLayer
{
	CCL_DYNAMIC = 0,
	CCL_DYNAMIC_TRANSPARENT = 1,
	CCL_DYNAMIC_NO_COLLISION = 2,
	CCL_DYNAMIC_NO_COLLISION_TRANSPARENT = 3,
	CCL_UNUSED_LAST = 4,
};

// 0x0000000142A9FD60 (Size: 0x4)
enum class EDifficultyLevel
{
	eDL_NO_FLAGS = 0,
	eDL_EASY = 1,
	eDL_NORMAL = 2,
	eDL_HARD = 4,
	eDL_VERY_HARD = 8,
	eDL_ALL_FLAGS = 15,
};

// 0x0000000142AA7BC0 (Size: 0x4)
enum class ECausalGraphTraversal
{
	eCGT_NONE = 0,
	eCGT_INPUT = 1,
	eCGT_OUTPUT = 2,
	eCGT_BOTH = 3,
};

// 0x0000000142A98C10 (Size: 0x4)
enum class EPushNotificationType
{
	PUSH_NOTIFICATION_OBJECTIVE = 0,
	PUSH_NOTIFICATION_DISGUISE = 1,
	PUSH_NOTIFICATION_CONTRACT = 2,
	PUSH_NOTIFICATION_CHALLENGE = 3,
	PUSH_NOTIFICATION_RATING = 4,
	PUSH_NOTIFICATION_SPECIAL_RATING_UNLOCKED = 5,
	PUSH_NOTIFICATION_CONTRACT_PICKED_UP = 6,
	PUSH_NOTIFICATION_TECHNIQUE_UNLOCKED = 7,
	PUSH_NOTIFICATION_SCORE_COMPARISON = 8,
};

// 0x0000000142A9CAA8 (Size: 0x4)
enum class EBystanderPointType
{
	BPT_Scared = 0,
	BPT_Alerted = 1,
};

// 0x0000000142AF4948 (Size: 0x1)
enum class ECameraCollisionMode
{
	ECAMERACOLLISIONMODE_COLLIDE_ALWAYS = 0,
	ECAMERACOLLISIONMODE_CAMERA_OBSTACLE = 1,
	ECAMERACOLLISIONMODE_COLLIDE_NEVER = 2,
	ECAMERACOLLISIONMODE_COLLIDE_DEFAULT = 3,
};

// 0x0000000142AB2870 (Size: 0x4)
enum class ESoundCollisionObjectType
{
	StaticRigidBody = 0,
	DynamicRigidBody = 1,
	Ragdoll = 2,
};

// 0x0000000143CDF268 (Size: 0x1)
enum class ESeamFixMode
{
	SEAMFIX_NONE = 0,
	SEAMFIX_X = 1,
	SEAMFIX_Y = 2,
	SEAMFIX_Z = 4,
	SEAMFIX_XZ = 5,
	SEAMFIX_XY = 3,
	SEAMFIX_XYZ = 7,
	SEAMFIX_YZ = 6,
};

// 0x0000000142AA56E0 (Size: 0x4)
enum class EInteractionInputType
{
	EIIT_UNKNOWN = 0,
	EIIT_PRESS = 1,
	EIIT_HOLD = 2,
	EIIT_HOLD_DOWN = 3,
	EIIT_REPEAT = 4,
	EIIT_GUIDE = 5,
};

// 0x0000000142A99090 (Size: 0x4)
enum class EBIEventTypes
{
	eBIL_HM_HitNPC = 0,
	eBIL_HM_HitNPCKilled = 1,
	eBIL_HM_HitNPCHeadShot = 2,
	eBIL_HM_HitNPCCloseCombatShot = 3,
	eBIL_NPC_HitHM = 4,
	eBIL_Geometry = 5,
};

// 0x0000000142A7B520 (Size: 0x4)
enum class EGSKillVictim
{
	GSKILLVICTIM_UNKNOWN = 0,
	GSKILLVICTIM_CIVILIAN = 1,
	GSKILLVICTIM_GUARD = 2,
	GSKILLVICTIM_TARGET = 3,
};

// 0x0000000142A94520 (Size: 0x4)
enum class EScreenplayTriggerEvent
{
	STT_ReportCrime = 0,
	STT_ReportCrimeToHitman = 1,
	STT_ReportCrimeMoveBack = 2,
};

// 0x0000000142AB31C8 (Size: 0x4)
enum class EIntelTensionLevel
{
	eITL_Undefined = 0,
	eITL_Ambient = 1,
	eITL_Agitated = 2,
	eITL_Searching = 3,
	eITL_AlertedLow = 4,
	eITL_AlertedHigh = 5,
	eITL_Hunting = 6,
	eITL_Arrest = 7,
	eITL_Combat = 8,
};

// 0x0000000142AF5E60 (Size: 0x4)
enum class ESaveLoadStatus
{
	ESaveLoadStatus_OK = 0,
	ESaveLoadStatus_PROCESSING = 1,
	ESaveLoadStatus_MISSING = 2,
	ESaveLoadStatus_ERROR_NODISKSPACE = 3,
	ESaveLoadStatus_ERROR_DEVICEREMOVED = 4,
	ESaveLoadStatus_ERROR_CORRUPT = 5,
	ESaveLoadStatus_ERROR_VERSION = 6,
	ESaveLoadStatus_ERROR_TAMPERED = 7,
	ESaveLoadStatus_ERROR_SAVING = 8,
	ESaveLoadStatus_ERROR_FATAL = 9,
	ESaveLoadStatus_ERROR_ONLINE = 10,
	ESaveLoadStatus_ERROR_REQUIREMENTCHECK = 11,
	ESaveLoadStatus_ERROR_VRMODE = 12,
	ESaveLoadStatus_ERROR_INVALIDATED = 13,
};

// 0x0000000142A8BB98 (Size: 0x4)
enum class ESituationAvailability
{
	ESA_AMBIENCE = 0,
	ESA_AMBIENCE_RESV = 10000,
	ESA_OVR_STANDING = 20000,
	ESA_OVR_CURIOUS = 30000,
	ESA_OVR_SENTRY = 40000,
	ESA_OVR_CAUTIOUS = 50000,
	ESA_OVR_COMBAT = 60000,
	ESA_OVR_ALL = 70000,
};

// 0x0000000143E5FA98 (Size: 0x1)
enum class ETessellationMode
{
	TESSELLATIONMODE_FLAT = 0,
	TESSELLATIONMODE_PHONG = 1,
};

// 0x0000000142A82D70 (Size: 0x4)
enum class EActorVoiceVariation
{
	eAVV_Undefined = 0,
	eAVV_ABIATTI = 1,
	eAVV_ATHENASAVALAS = 2,
	eAVV_BDYGRD01 = 3,
	eAVV_BDYGRD02 = 4,
	eAVV_BDYGRD03 = 5,
	eAVV_BDYGRD04 = 6,
	eAVV_BDYGRD05 = 7,
	eAVV_BDYGRD06 = 8,
	eAVV_BDYGRD07 = 9,
	eAVV_BERG = 10,
	eAVV_BULLDOG_MANSIONSTAFF_F05 = 11,
	eAVV_BULLDOG_MANSIONSTAFF_F08 = 12,
	eAVV_BULLDOG_MANSIONSTAFF_F09 = 13,
	eAVV_BULLDOG_MANSIONSTAFF_F10 = 14,
	eAVV_BULLDOG_MANSIONSTAFF_M06 = 15,
	eAVV_BULLDOG_MANSIONSTAFF_M07 = 16,
	eAVV_BULLDOG_MANSIONSTAFF_M08 = 17,
	eAVV_BULLDOG_MANSIONSTAFF_M09 = 18,
	eAVV_BULLDOG_MANSIONSTAFF_M11 = 19,
	eAVV_BUSEY = 20,
	eAVV_CARLISLEALEXA = 21,
	eAVV_CARLISLEEDWARD = 22,
	eAVV_CARLISLEEMMA = 23,
	eAVV_CARLISLEGREGORY = 24,
	eAVV_CARLISLEPATRICK = 25,
	eAVV_CARLISLEREBECCA = 26,
	eAVV_CARUSO = 27,
	eAVV_CASSIDY = 28,
	eAVV_CHEF01 = 29,
	eAVV_CHEF02 = 30,
	eAVV_CHEF03 = 31,
	eAVV_CHEF04 = 32,
	eAVV_CHURCHSTAFF01 = 33,
	eAVV_CHURCHSTAFF02 = 34,
	eAVV_CHURCHSTAFF03 = 35,
	eAVV_CIVFEM01 = 36,
	eAVV_CIVFEM02 = 37,
	eAVV_CIVFEM03 = 38,
	eAVV_CIVFEM04 = 39,
	eAVV_CIVFEM05 = 40,
	eAVV_CIVFEM06 = 41,
	eAVV_CIVFEM07 = 42,
	eAVV_CIVFEM08 = 43,
	eAVV_CIVFEM09 = 44,
	eAVV_CIVFEM10 = 45,
	eAVV_CIVFEMCH01 = 46,
	eAVV_CIVFEMCH02 = 47,
	eAVV_CIVFEMES01 = 48,
	eAVV_CIVFEMES02 = 49,
	eAVV_CIVFEMES03 = 50,
	eAVV_CIVFEMHI01 = 51,
	eAVV_CIVFEMHI02 = 52,
	eAVV_CIVFEMHI03 = 53,
	eAVV_CIVMALE01 = 54,
	eAVV_CIVMALE02 = 55,
	eAVV_CIVMALE03 = 56,
	eAVV_CIVMALE04 = 57,
	eAVV_CIVMALE05 = 58,
	eAVV_CIVMALE06 = 59,
	eAVV_CIVMALE07 = 60,
	eAVV_CIVMALE08 = 61,
	eAVV_CIVMALE09 = 62,
	eAVV_CIVMALE10 = 63,
	eAVV_CIVMALE11 = 64,
	eAVV_CIVMALECH01 = 65,
	eAVV_CIVMALECH02 = 66,
	eAVV_CIVMALEES01 = 67,
	eAVV_CIVMALEES02 = 68,
	eAVV_CIVMALEES03 = 69,
	eAVV_CIVMALEHI01 = 70,
	eAVV_CIVMALEHI02 = 71,
	eAVV_CIVMALEHI03 = 72,
	eAVV_CLEANER01 = 73,
	eAVV_CLEANER02 = 74,
	eAVV_CLEANER03 = 75,
	eAVV_CLEANERFEM01 = 76,
	eAVV_CLEANERFEM02 = 77,
	eAVV_CLEANERFEM03 = 78,
	eAVV_CONSTANT = 79,
	eAVV_CREW01 = 80,
	eAVV_CREW02 = 81,
	eAVV_CREW04 = 82,
	eAVV_CROSS = 83,
	eAVV_DALIA = 84,
	eAVV_DELGADO = 85,
	eAVV_DESANTIS = 86,
	eAVV_DINO_BOSCO = 87,
	eAVV_DOCTOR01 = 88,
	eAVV_DOCTOR06 = 89,
	eAVV_DOCTORFEM03 = 90,
	eAVV_DOCTORFEM04 = 91,
	eAVV_ET_ADONIS = 92,
	eAVV_ET_ARGUS = 93,
	eAVV_ET_CARDINAL = 94,
	eAVV_ET_CONNER = 95,
	eAVV_ET_DYLAN = 96,
	eAVV_ET_FABA = 97,
	eAVV_ET_GARY_LUNN = 98,
	eAVV_ET_HARVERFOEK = 99,
	eAVV_ET_LARIN = 100,
	eAVV_ET_MOXON = 101,
	eAVV_ET_MR_GIGGLES = 102,
	eAVV_ET_PHILLIPOS = 103,
	eAVV_ET_SCOTT_SARNO = 104,
	eAVV_ET_TORVIK = 105,
	eAVV_ET_TROUTT = 106,
	eAVV_ET_VITO_DURIC = 107,
	eAVV_FILMCREW01 = 108,
	eAVV_FILMCREW02 = 109,
	eAVV_FILMCREW03 = 110,
	eAVV_FILMCREW04 = 111,
	eAVV_FILMCREWFEM01 = 112,
	eAVV_FILMCREWFEM02 = 113,
	eAVV_FILMCREWFEM03 = 114,
	eAVV_FILMCREWFEM04 = 115,
	eAVV_FILMCREWFEM05 = 116,
	eAVV_FOD_FEM = 117,
	eAVV_FOD_MALE = 118,
	eAVV_FOX_BARTENDER_F08 = 119,
	eAVV_FOX_BARTENDER_F10 = 120,
	eAVV_FOX_BARTENDER_M07 = 121,
	eAVV_FOX_BARTENDER_M08 = 122,
	eAVV_FOX_BARTENDER_M09 = 123,
	eAVV_FOX_BARTENDER_MCH01 = 124,
	eAVV_FOX_DJ_M07 = 125,
	eAVV_FOX_DJ_M11 = 126,
	eAVV_FOX_ICAAGENT_M01 = 127,
	eAVV_FOX_ICAAGENT_M02 = 128,
	eAVV_FOX_ICAAGENT_M04 = 129,
	eAVV_FOX_ICAAGENT_M05 = 130,
	eAVV_FOX_ICAAGENT_M06 = 131,
	eAVV_FOX_ICAAGENT_M07 = 132,
	eAVV_FOX_STAFF_F05 = 133,
	eAVV_FOX_STAFF_F06 = 134,
	eAVV_FOX_STAFF_FCH01 = 135,
	eAVV_FOX_STAFF_M07 = 136,
	eAVV_FOX_STAFF_M08 = 137,
	eAVV_FOX_STAFF_M09 = 138,
	eAVV_FOX_TECH_F05 = 139,
	eAVV_FOX_TECH_F06 = 140,
	eAVV_FOX_TECH_F08 = 141,
	eAVV_FOX_TECH_FCH01 = 142,
	eAVV_FOX_TECH_M06 = 143,
	eAVV_FOX_TECH_M07 = 144,
	eAVV_FOX_TECH_M08 = 145,
	eAVV_FOX_TECH_M11 = 146,
	eAVV_FOX_THUG_M04 = 147,
	eAVV_FOX_THUG_M05 = 148,
	eAVV_FOX_THUG_M06 = 149,
	eAVV_FOX_THUG_M07 = 150,
	eAVV_FRANCO = 151,
	eAVV_GARDENER01 = 152,
	eAVV_GARDENER02 = 153,
	eAVV_GARDENER03 = 154,
	eAVV_GARDENERFEM01 = 155,
	eAVV_GARDENERFEM02 = 156,
	eAVV_GARDENERFEM03 = 157,
	eAVV_GECKO_ARTTECH_F05 = 158,
	eAVV_GECKO_ARTTECH_F06 = 159,
	eAVV_GECKO_ARTTECH_F08 = 160,
	eAVV_GECKO_ARTTECH_F10 = 161,
	eAVV_GECKO_ARTTECH_M05 = 162,
	eAVV_GECKO_ARTTECH_M06 = 163,
	eAVV_GECKO_ARTTECH_M08 = 164,
	eAVV_GECKO_ARTTECH_M09 = 165,
	eAVV_GECKO_ATTENDANT_M09 = 166,
	eAVV_GECKO_ATTENDANT_MHI03 = 167,
	eAVV_GECKO_MAINTENANCE_FCH01 = 168,
	eAVV_GECKO_MAINTENANCE_M05 = 169,
	eAVV_GECKO_WAITER_F05 = 170,
	eAVV_GECKO_WAITER_F06 = 171,
	eAVV_GECKO_WAITER_F09 = 172,
	eAVV_GECKO_WAITER_F10 = 173,
	eAVV_GECKO_WAITER_FHI02 = 174,
	eAVV_GECKO_WAITER_M07 = 175,
	eAVV_GECKO_WAITER_M08 = 176,
	eAVV_GECKO_WAITER_M09 = 177,
	eAVV_GECKO_WAITER_M11 = 178,
	eAVV_GECKO_WAITER_MHI03 = 179,
	eAVV_GRAVES = 180,
	eAVV_GUARDIA02 = 181,
	eAVV_GUARDIA03 = 182,
	eAVV_HOUSSTFF01 = 183,
	eAVV_HOUSSTFF02 = 184,
	eAVV_HOUSSTFF03 = 185,
	eAVV_HOUSSTFF06 = 186,
	eAVV_HOUSSTFFEM01 = 187,
	eAVV_HOUSSTFFEM02 = 188,
	eAVV_HOUSSTFFEM03 = 189,
	eAVV_HUSH = 190,
	eAVV_ICAAGENT_M05 = 191,
	eAVV_INGRAM = 192,
	eAVV_INTERN = 193,
	eAVV_JANUS = 194,
	eAVV_JOB_ACTORFEMHI02 = 195,
	eAVV_JOB_ACTORHI01 = 196,
	eAVV_JOB_ARCHTCTF05 = 197,
	eAVV_JOB_ARCHTCTF07 = 198,
	eAVV_JOB_ARCHTCTF08 = 199,
	eAVV_JOB_ARCHTCTF09 = 200,
	eAVV_JOB_ARCHTCTM06 = 201,
	eAVV_JOB_ARCHTCTM07 = 202,
	eAVV_JOB_ARCHTCTM08 = 203,
	eAVV_JOB_ARCHTCTM09 = 204,
	eAVV_JOB_ARCHTCTM10 = 205,
	eAVV_JOB_ARKELITE04 = 206,
	eAVV_JOB_ARKELITE05 = 207,
	eAVV_JOB_ARKELITE06 = 208,
	eAVV_JOB_ARKELITE07 = 209,
	eAVV_JOB_ARKIANF05 = 210,
	eAVV_JOB_ARKIANF06 = 211,
	eAVV_JOB_ARKIANF07 = 212,
	eAVV_JOB_ARKIANF08 = 213,
	eAVV_JOB_ARKIANF09 = 214,
	eAVV_JOB_ARKIANM06 = 215,
	eAVV_JOB_ARKIANM07 = 216,
	eAVV_JOB_ARKIANM08 = 217,
	eAVV_JOB_ARKIANM09 = 218,
	eAVV_JOB_ARKIANM10 = 219,
	eAVV_JOB_ARKPTRNF05 = 220,
	eAVV_JOB_ARKPTRNF06 = 221,
	eAVV_JOB_ARKPTRNF07 = 222,
	eAVV_JOB_ARKPTRNF08 = 223,
	eAVV_JOB_ARKPTRNF09 = 224,
	eAVV_JOB_ARKPTRNM06 = 225,
	eAVV_JOB_ARKPTRNM07 = 226,
	eAVV_JOB_ARKPTRNM08 = 227,
	eAVV_JOB_ARKPTRNM09 = 228,
	eAVV_JOB_ARKPTRNM10 = 229,
	eAVV_JOB_ARKSTAFFF05 = 230,
	eAVV_JOB_ARKSTAFFF06 = 231,
	eAVV_JOB_ARKSTAFFM06 = 232,
	eAVV_JOB_ARKSTAFFM07 = 233,
	eAVV_JOB_ARKSTAFFM08 = 234,
	eAVV_JOB_BANKERF05 = 235,
	eAVV_JOB_BANKERF06 = 236,
	eAVV_JOB_BANKERF08 = 237,
	eAVV_JOB_BANKERM06 = 238,
	eAVV_JOB_BANKERM07 = 239,
	eAVV_JOB_BANKERM08 = 240,
	eAVV_JOB_BANKERM09 = 241,
	eAVV_JOB_BANKGRD05 = 242,
	eAVV_JOB_BANKGRD06 = 243,
	eAVV_JOB_BANKGRD07 = 244,
	eAVV_JOB_BANKGRDCHF = 245,
	eAVV_JOB_BANKIT07 = 246,
	eAVV_JOB_BANKMTNC08 = 247,
	eAVV_JOB_BBQGRD04 = 248,
	eAVV_JOB_BBQGRD05 = 249,
	eAVV_JOB_BBQGRD06 = 250,
	eAVV_JOB_BBQGRD07 = 251,
	eAVV_JOB_BOLLYCREWHI01 = 252,
	eAVV_JOB_BOLLYCREWHI02 = 253,
	eAVV_JOB_BOLLYCREWHI03 = 254,
	eAVV_JOB_CASSIDYGRD04 = 255,
	eAVV_JOB_CASSIDYGRD05 = 256,
	eAVV_JOB_CASSIDYGRD06 = 257,
	eAVV_JOB_CASSIDYGRD07 = 258,
	eAVV_JOB_CASTLESTFEM05 = 259,
	eAVV_JOB_CASTLESTFEM07 = 260,
	eAVV_JOB_CASTLESTFF07 = 261,
	eAVV_JOB_CASTLESTFF10 = 262,
	eAVV_JOB_CAVEGDES01 = 263,
	eAVV_JOB_CAVEGDES02 = 264,
	eAVV_JOB_CAVEWKR07 = 265,
	eAVV_JOB_CAVEWKR08 = 266,
	eAVV_JOB_CAVEWKRES01 = 267,
	eAVV_JOB_CAVEWKRES02 = 268,
	eAVV_JOB_CAVEWKRES03 = 269,
	eAVV_JOB_CHEFES01 = 270,
	eAVV_JOB_CHEFES02 = 271,
	eAVV_JOB_CHEFES03 = 272,
	eAVV_JOB_CHEFF07 = 273,
	eAVV_JOB_CHEFM06 = 274,
	eAVV_JOB_CHEFM07 = 275,
	eAVV_JOB_CHEFM09 = 276,
	eAVV_JOB_CIVGRD04 = 277,
	eAVV_JOB_CIVGRD05 = 278,
	eAVV_JOB_CIVGRD06 = 279,
	eAVV_JOB_CIVGRD07 = 280,
	eAVV_JOB_CLOTHSALHI01 = 281,
	eAVV_JOB_CLOTHSALHI02 = 282,
	eAVV_JOB_CNSTR08 = 283,
	eAVV_JOB_CNSTR09 = 284,
	eAVV_JOB_CNSTRES01 = 285,
	eAVV_JOB_CNSTRGRD04 = 286,
	eAVV_JOB_CNSTRGRD05 = 287,
	eAVV_JOB_CNSTRGRD06 = 288,
	eAVV_JOB_CNSTRGRD07 = 289,
	eAVV_JOB_COCAGRD06 = 290,
	eAVV_JOB_COCAGRDES02 = 291,
	eAVV_JOB_COP04 = 292,
	eAVV_JOB_COP05 = 293,
	eAVV_JOB_COP06 = 294,
	eAVV_JOB_COP07 = 295,
	eAVV_JOB_COUNSLRF08 = 296,
	eAVV_JOB_COUNSLRF09 = 297,
	eAVV_JOB_COUNSLRM07 = 298,
	eAVV_JOB_COUNSLRM09 = 299,
	eAVV_JOB_CUSTDNF05 = 300,
	eAVV_JOB_CUSTDNF06 = 301,
	eAVV_JOB_CUSTDNF07 = 302,
	eAVV_JOB_CUSTDNF08 = 303,
	eAVV_JOB_CUSTDNF09 = 304,
	eAVV_JOB_CUSTDNM06 = 305,
	eAVV_JOB_CUSTDNM07 = 306,
	eAVV_JOB_CUSTDNM08 = 307,
	eAVV_JOB_CUSTDNM09 = 308,
	eAVV_JOB_CUSTDNM10 = 309,
	eAVV_JOB_DRUGLABWKRES02 = 310,
	eAVV_JOB_DRUGLABWKRES03 = 311,
	eAVV_JOB_FARMF05 = 312,
	eAVV_JOB_FARMFES01 = 313,
	eAVV_JOB_FARMFES02 = 314,
	eAVV_JOB_FARMM06 = 315,
	eAVV_JOB_FARMM08 = 316,
	eAVV_JOB_FARMMES01 = 317,
	eAVV_JOB_FARMMES02 = 318,
	eAVV_JOB_FARMMES03 = 319,
	eAVV_JOB_GARBAGE08 = 320,
	eAVV_JOB_GARBAGE09 = 321,
	eAVV_JOB_GARBAGEES01 = 322,
	eAVV_JOB_GARBAGRD04 = 323,
	eAVV_JOB_GARBAGRD05 = 324,
	eAVV_JOB_GARBAGRD06 = 325,
	eAVV_JOB_GARBAGRD07 = 326,
	eAVV_JOB_GRDNR08 = 327,
	eAVV_JOB_GRDNR09 = 328,
	eAVV_JOB_GRDNRES01 = 329,
	eAVV_JOB_GRDNRGRD04 = 330,
	eAVV_JOB_GRDNRGRD05 = 331,
	eAVV_JOB_GRDNRGRD06 = 332,
	eAVV_JOB_GRDNRGRD07 = 333,
	eAVV_JOB_GUARD04 = 334,
	eAVV_JOB_GUARD05 = 335,
	eAVV_JOB_GUARD06 = 336,
	eAVV_JOB_GUARD07 = 337,
	eAVV_JOB_HSSTFFES02 = 338,
	eAVV_JOB_HSSTFFES03 = 339,
	eAVV_JOB_HSSTFMES02 = 340,
	eAVV_JOB_HSSTFMES03 = 341,
	eAVV_JOB_JANUSGRD04 = 342,
	eAVV_JOB_JANUSGRD05 = 343,
	eAVV_JOB_JANUSGRD06 = 344,
	eAVV_JOB_JANUSGRD07 = 345,
	eAVV_JOB_LNDRYGRDHI01 = 346,
	eAVV_JOB_LNDRYGRDHI02 = 347,
	eAVV_JOB_LNDRYGRDHI03 = 348,
	eAVV_JOB_LNDRYWKRHI01 = 349,
	eAVV_JOB_LNDRYWKRHI02 = 350,
	eAVV_JOB_LNDRYWKRHI03 = 351,
	eAVV_JOB_MANSIONGD05 = 352,
	eAVV_JOB_MANSIONGD06 = 353,
	eAVV_JOB_MANSIONGD07 = 354,
	eAVV_JOB_MANSIONGDES02 = 355,
	eAVV_JOB_MEDICFEM06 = 356,
	eAVV_JOB_MTLWKRHI01 = 357,
	eAVV_JOB_MTLWKRHI02 = 358,
	eAVV_JOB_MTLWKRHI03 = 359,
	eAVV_JOB_MUMBSECHI02 = 360,
	eAVV_JOB_MUMBSECHI03 = 361,
	eAVV_JOB_MUMBSRVHI01 = 362,
	eAVV_JOB_MUMBSRVHI02 = 363,
	eAVV_JOB_MUMBSRVHI03 = 364,
	eAVV_JOB_MUSICIANF05 = 365,
	eAVV_JOB_MUSICIANM06 = 366,
	eAVV_JOB_MUSICIANM07 = 367,
	eAVV_JOB_MUSICIANM08 = 368,
	eAVV_JOB_MUSICIANM09 = 369,
	eAVV_JOB_MUSICIANM10 = 370,
	eAVV_JOB_NITIATEF05 = 371,
	eAVV_JOB_NITIATEM06 = 372,
	eAVV_JOB_NITIATEM07 = 373,
	eAVV_JOB_QUEENGRDHI01 = 374,
	eAVV_JOB_QUEENGRDHI02 = 375,
	eAVV_JOB_QUEENGRDHI03 = 376,
	eAVV_JOB_QUEENSTGHI03 = 377,
	eAVV_JOB_QUEENTGHI02 = 378,
	eAVV_JOB_RAIDER04 = 379,
	eAVV_JOB_RAIDER05 = 380,
	eAVV_JOB_RAIDER06 = 381,
	eAVV_JOB_RAIDER07 = 382,
	eAVV_JOB_RANGANGRD05 = 383,
	eAVV_JOB_RANGANGRD06 = 384,
	eAVV_JOB_RANGANSECHI01 = 385,
	eAVV_JOB_RANGANSECHI02 = 386,
	eAVV_JOB_RANGANSECHI03 = 387,
	eAVV_JOB_SERVANT08 = 388,
	eAVV_JOB_SERVANT09 = 389,
	eAVV_JOB_SERVANTES02 = 390,
	eAVV_JOB_SERVANTFEM07 = 391,
	eAVV_JOB_SITEWKR06 = 392,
	eAVV_JOB_SITEWKR07 = 393,
	eAVV_JOB_SITEWKR08 = 394,
	eAVV_JOB_SITEWKR09 = 395,
	eAVV_JOB_SITEWKRES01 = 396,
	eAVV_JOB_SITEWKRES02 = 397,
	eAVV_JOB_SITEWKRES03 = 398,
	eAVV_JOB_STINGLIFEGRDM06 = 399,
	eAVV_JOB_STINGSEC05 = 400,
	eAVV_JOB_STINGSEC06 = 401,
	eAVV_JOB_STINGSMASSF09 = 402,
	eAVV_JOB_STINGSTAFFF08 = 403,
	eAVV_JOB_STINGSTAFFM06 = 404,
	eAVV_JOB_STINGSTAFFM08 = 405,
	eAVV_JOB_STINGTECHF08 = 406,
	eAVV_JOB_STINGTECHM07 = 407,
	eAVV_JOB_STINGTECHM09 = 408,
	eAVV_JOB_STINGTRAINERF06 = 409,
	eAVV_JOB_STINGVILLAGRD05 = 410,
	eAVV_JOB_STINGVILLAGRD06 = 411,
	eAVV_JOB_STINGWTRF05 = 412,
	eAVV_JOB_STINGWTRM07 = 413,
	eAVV_JOB_STINGWTRM08 = 414,
	eAVV_JOB_SUBWKR06 = 415,
	eAVV_JOB_SUBWKR07 = 416,
	eAVV_JOB_TEASERVHI02 = 417,
	eAVV_JOB_THUGHI01 = 418,
	eAVV_JOB_THUGHI02 = 419,
	eAVV_JOB_THUGHI03 = 420,
	eAVV_JOB_TRAINSERVHI01 = 421,
	eAVV_JOB_VILLAGEGDES01 = 422,
	eAVV_JOB_VILLAGEGDES03 = 423,
	eAVV_KNOX_R = 424,
	eAVV_KNOX_S = 425,
	eAVV_KONG = 426,
	eAVV_LJUDMILAVETROVA = 427,
	eAVV_LLAMA_WAITER_F05 = 428,
	eAVV_LLAMA_WAITER_F06 = 429,
	eAVV_LLAMA_WAITER_F10 = 430,
	eAVV_LLAMA_WAITER_M06 = 431,
	eAVV_LLAMA_WAITER_M07 = 432,
	eAVV_LLAMA_WAITER_M11 = 433,
	eAVV_LLAMA_WORKER_FES01 = 434,
	eAVV_LLAMA_WORKER_FES02 = 435,
	eAVV_LLAMA_WORKER_FES03 = 436,
	eAVV_LLAMA_WORKER_MES01 = 437,
	eAVV_LLAMA_WORKER_MES02 = 438,
	eAVV_LLAMA_WORKER_MES03 = 439,
	eAVV_MAELSTROM = 440,
	eAVV_MAMBACREW01 = 441,
	eAVV_MAMBACREW02 = 442,
	eAVV_MAMBACREW03 = 443,
	eAVV_MAMBACREW04 = 444,
	eAVV_MARTINEZ = 445,
	eAVV_MECH01 = 446,
	eAVV_MECH02 = 447,
	eAVV_MECH03 = 448,
	eAVV_MENDOLA = 449,
	eAVV_MODEL01 = 450,
	eAVV_MODEL02 = 451,
	eAVV_MODEL03 = 452,
	eAVV_MODELFEM01 = 453,
	eAVV_MODELFEM02 = 454,
	eAVV_MODELFEM03 = 455,
	eAVV_MORGAN = 456,
	eAVV_NORFOLK = 457,
	eAVV_NOVIKOV = 458,
	eAVV_ORSON = 459,
	eAVV_PARVATI = 460,
	eAVV_RAT_DUMPLINGCOOK_F05 = 461,
	eAVV_RAT_DUMPLINGCOOK_F06 = 462,
	eAVV_RAT_DUMPLINGCOOK_FCH02 = 463,
	eAVV_RAT_DUMPLINGCOOK_M06 = 464,
	eAVV_RAT_DUMPLINGCOOK_M07 = 465,
	eAVV_RAT_DUMPLINGCOOK_M08 = 466,
	eAVV_RAT_DUMPLINGCOOK_M09 = 467,
	eAVV_RAT_DUMPLINGCOOK_MCH01 = 468,
	eAVV_RAT_DUMPLINGCOOK_MCH02 = 469,
	eAVV_RAT_FACILITYSTAFF_F06 = 470,
	eAVV_RAT_FACILITYSTAFF_F09 = 471,
	eAVV_RAT_FACILITYSTAFF_FCH01 = 472,
	eAVV_RAT_FACILITYSTAFF_FCH02 = 473,
	eAVV_RAT_FACILITYSTAFF_M06 = 474,
	eAVV_RAT_FACILITYSTAFF_M07 = 475,
	eAVV_RAT_FACILITYSTAFF_M08 = 476,
	eAVV_RAT_FACILITYSTAFF_M09 = 477,
	eAVV_RAT_FACILITYSTAFF_M11 = 478,
	eAVV_PRIEST01 = 479,
	eAVV_RANGAN = 480,
	eAVV_REYNARD = 481,
	eAVV_RITTER = 482,
	eAVV_ROBERT_KNOX = 483,
	eAVV_ROSE = 484,
	eAVV_ROYCE = 485,
	eAVV_SANTA = 486,
	eAVV_SCIENTIST01 = 487,
	eAVV_SCIENTIST02 = 488,
	eAVV_SCIENTIST03 = 489,
	eAVV_SCIENTIST04 = 490,
	eAVV_SCIENTISTFEM01 = 491,
	eAVV_SCIENTISTFEM02 = 492,
	eAVV_SCIENTISTFEM03 = 493,
	eAVV_SCIENTISTFEM04 = 494,
	eAVV_SHAH = 495,
	eAVV_SHEEPGRD04 = 496,
	eAVV_SHEEPGRD05 = 497,
	eAVV_SHEEPGRD06 = 498,
	eAVV_SHEEPGRD07 = 499,
	eAVV_SIERRA_KNOX = 500,
	eAVV_SOFTGRD01 = 501,
	eAVV_SOFTGRD02 = 502,
	eAVV_SOFTGRD03 = 503,
	eAVV_SOLDIER01 = 504,
	eAVV_SOLDIER02 = 505,
	eAVV_SOLDIER03 = 506,
	eAVV_SOLDIERBOSS01 = 507,
	eAVV_SOLDIERBOSS02 = 508,
	eAVV_SOLDIERBOSS03 = 509,
	eAVV_SPECOPS01 = 510,
	eAVV_SPECOPS02 = 511,
	eAVV_SPECOPS03 = 512,
	eAVV_STAFFEM03 = 513,
	eAVV_STAFFEM04 = 514,
	eAVV_STAFFEM05 = 515,
	eAVV_STAFFMALE01 = 516,
	eAVV_STAFFMALE02 = 517,
	eAVV_STAFFMALE03 = 518,
	eAVV_STAFFMALE04 = 519,
	eAVV_STAFFMALE05 = 520,
	eAVV_STAFFMALE06 = 521,
	eAVV_STEVENBRADLEY = 522,
	eAVV_STRANDBERG = 523,
	eAVV_STUYVESANT = 524,
	eAVV_STYLIST01 = 525,
	eAVV_STYLIST02 = 526,
	eAVV_STYLIST03 = 527,
	eAVV_STYLIST04 = 528,
	eAVV_STYLISTFEM01 = 529,
	eAVV_STYLISTFEM02 = 530,
	eAVV_STYLISTFEM03 = 531,
	eAVV_STYLISTFEM04 = 532,
	eAVV_THUGES01 = 533,
	eAVV_THUGES02 = 534,
	eAVV_THUGES03 = 535,
	eAVV_THUGHI01 = 536,
	eAVV_THUGHI02 = 537,
	eAVV_THUGHI03 = 538,
	eAVV_TYSONWILLIAMS = 539,
	eAVV_VIDAL = 540,
	eAVV_WAITER01 = 541,
	eAVV_WAITER02 = 542,
	eAVV_WAITER03 = 543,
	eAVV_WAITER04 = 544,
	eAVV_WAITERFEM01 = 545,
	eAVV_WAITERFEM02 = 546,
	eAVV_WAITERFEM03 = 547,
	eAVV_WAITERFEM04 = 548,
	eAVV_WASHINGTON = 549,
	eAVV_WS_BOULTON = 550,
	eAVV_WS_NEWMAN = 551,
	eAVV_WS_WATSON = 552,
	eAVV_YACHTCREW01 = 553,
	eAVV_YACHTCREW02 = 554,
	eAVV_YACHTCREW03 = 555,
	eAVV_YACHTCREW04 = 556,
	eAVV_YAMASAKI = 557,
	eAVV_YATES = 558,
	eAVV_ZAYDAN = 559,
};

// 0x0000000142AF48B8 (Size: 0x1)
enum class EDestructibleInteractionType
{
	eDIT_SHOT = 0,
	eDIT_EXPLOSION = 1,
	eDIT_COLLISION = 2,
	eDIT_FRACTURE_AND_DETACH_ALL = 3,
	eDIT_OUT_OF_WORLD = 4,
	eDIT_COUNT = 5,
};

// 0x0000000142AB20D8 (Size: 0x4)
enum class EItemPoisonType
{
	POISONTYPE_NONE = 0,
	POISONTYPE_LETHAL = 1,
	POISONTYPE_SEDATIVE = 2,
	POISONTYPE_EMETIC = 3,
};

// 0x0000000142A951D8 (Size: 0x4)
enum class EHM5SoundCloseCombatEvent
{
	ECCE_PUNCH_FACE = 0,
	ECCE_PUNCH_BODY = 1,
	ECCE_ATTACK_ELBOW = 2,
	ECCE_ATTACK_KNEE = 3,
	ECCE_ATTACK_KICK = 4,
	ECCE_SWOOSH_SHORT = 5,
	ECCE_SWOOSH_LONG = 6,
	ECCE_CLOTH_SWOOSH = 7,
	ECCE_CLOTH_RUSTLE = 8,
	ECCE_CLOTH_STRETCH = 9,
	ECCE_GRAB = 10,
	ECCE_BONE_BREAK = 11,
	ECCE_NECK_SNAP = 12,
	ECCE_BODY_FALL = 13,
	ECCE_SKULL_CRACK = 14,
	ECCE_ANY = 15,
};

// 0x0000000142A92750 (Size: 0x4)
enum class EVRConfigCinemaMode
{
	EVRCCM_CinemaModeEnabled60FPS = 0,
	EVRCCM_CinemaModeEnabled = 1,
	EVRCCM_CinemaModeDisabled = 2,
	EVRCCM_KeepCurrent = 3,
};

// 0x0000000142AB1E80 (Size: 0x4)
enum class EItemModifierType
{
	MODIFIER_NONE = 0,
	MODIFIER_THROW = 1,
	MODIFIER_CARRY = 2,
	MODIFIER_AMMO = 3,
	MODIFIER_PRECISION = 4,
	MODIFIER_DAMAGE = 5,
	MODIFIER_IMPACT = 6,
	MODIFIER_EXPLOSIVE = 7,
	MODIFIER_RANGE = 8,
	MODIFIER_ZOOM = 9,
	MODIFIER_SUPPRESSOR = 10,
	MODIFIER_RECOIL = 11,
	MODIFIER_RATEOFFIRE = 12,
	MODIFIER_SCOPEBOBBING = 13,
	MODIFIER_MUZZLEVELOCITY = 14,
	MODIFIER_KNOCKDOWN = 15,
	MODIFIER_FULLAUTO = 16,
	MODIFIER_PRECISIONSHOT = 17,
	MODIFIER_SCOPETIMESLOWDOWN = 18,
	MODIFIER_STYLE = 19,
	MODIFIER_RELOAD = 20,
	MODIFIER_THRESHOLD = 21,
	MODIFIER_PERK = 22,
	MODIFIER_MAGAZINE = 23,
	MODIFIER_BURST = 24,
};

// 0x0000000142A8D760 (Size: 0x4)
enum class EScreenplayStateFlag
{
	eSSF_DEFAULT = 0,
	eSSF_ENABLED = 1,
	eSSF_CAST = 2,
	eSSF_RESUMING = 4,
	eSSF_RUNNING = 8,
	eSSF_DONE = 16,
	eSSF_TERMINATED = 32,
};

// 0x0000000142A8BBC8 (Size: 0x4)
enum class EExclusionLayer
{
	EL_NONE = 0,
	EL_STORY = 1,
	EL_AMBIENT = 2,
};

// 0x0000000142AE37E0 (Size: 0x4)
enum class ECppTypeFlags
{
	EDITOR_ONLY = 1,
	EDITOR_ONLY_CRITICAL = 2,
	RESETABLE = 4,
	RESETABLE_COND = 8,
	RESETABLE_STATIC = 16,
};

// 0x0000000142AA98A0 (Size: 0x4)
enum class ELedgeDismountBehavior
{
	eLDB_DontCare = 0,
	eLDB_Stand = 1,
	eLDB_Crouch = 2,
};

// 0x0000000142A94200 (Size: 0x4)
enum class ECoverPosition
{
	COVER_POSITION_NONE = 0,
	COVER_POSITION_LEFT = 1,
	COVER_POSITION_RIGHT = 2,
	COVER_POSITION_MIDDLE = 3,
};

// 0x0000000142A7A210 (Size: 0x4)
enum class ECollidableLayer
{
	eCollLayer_COLLIDE_WITH_ALL = 0,
	eCollLayer_STATIC_COLLIDABLES_ONLY = 1,
	eCollLayer_DYNAMIC_COLLIDABLES_ONLY = 2,
	eCollLayer_STAIRS = 3,
	eCollLayer_SHOT_ONLY_COLLISION = 4,
	eCollLayer_DYNAMIC_TRASH_COLLIDABLES = 5,
	eCollLayer_KINEMATIC_COLLIDABLES_ONLY = 6,
	eCollLayer_STATIC_COLLIDABLES_ONLY_TRANSPARENT = 7,
	eCollLayer_DYNAMIC_COLLIDABLES_ONLY_TRANSPARENT = 8,
	eCollLayer_KINEMATIC_COLLIDABLES_ONLY_TRANSPARENT = 9,
	eCollLayer_STAIRS_STEPS = 10,
	eCollLayer_STAIRS_SLOPE = 11,
	eCollLayer_HERO_PROXY = 12,
	eCollLayer_ACTOR_PROXY = 13,
	eCollLayer_HERO_VR = 14,
	eCollLayer_CLIP = 15,
	eCollLayer_ACTOR_RAGDOLL = 16,
	eCollLayer_CROWD_RAGDOLL = 17,
	eCollLayer_LEDGE_ANCHOR = 18,
	eCollLayer_ACTOR_DYN_BODY = 19,
	eCollLayer_HERO_DYN_BODY = 20,
	eCollLayer_ITEMS = 21,
	eCollLayer_WEAPONS = 22,
	eCollLayer_COLLISION_VOLUME_HITMAN_ON = 23,
	eCollLayer_COLLISION_VOLUME_HITMAN_OFF = 24,
	eCollLayer_DYNAMIC_COLLIDABLES_ONLY_NO_CHARACTER = 25,
	eCollLayer_DYNAMIC_COLLIDABLES_ONLY_NO_CHARACTER_TRANSPARENT = 26,
	eCollLayer_COLLIDE_WITH_STATIC_ONLY = 27,
	eCollLayer_AI_VISION_BLOCKER = 28,
	eCollLayer_AI_VISION_BLOCKER_AMBIENT_ONLY = 29,
	eCollayer_UNUSED_LAST = 30,
};

// 0x0000000142AA98B8 (Size: 0x4)
enum class ELedgeDismountDirection
{
	eLDD_DontCare = 0,
	eLDD_FaceLedge = 1,
	eLDD_FaceLeft = 2,
	eLDD_FaceRight = 3,
	eLDD_Turn180 = 4,
};

// 0x0000000142A9DCF8 (Size: 0x4)
enum class ESmartWaitCondition
{
	SWC_Time = 0,
	SWC_Distance = 1,
	SWC_Executing = 2,
	SWC_Executed = 3,
};

// 0x0000000142A997F0 (Size: 0x4)
enum class EUIActionGroupIcon
{
	EUIAGI_NoIcon = 0,
	EUIAGI_GenericTool = 1,
	EUIAGI_Crowbar = 2,
	EUIAGI_Wrench = 3,
	EUIAGI_Screwdriver = 4,
	EUIAGI_ExplosiveDevice = 5,
	EUIAGI_Poison = 6,
	EUIAGI_Coin = 7,
	EUIAGI_Lockpick = 8,
	EUIAGI_LockpickElectic = 9,
	EUIAGI_Card = 10,
	EUIAGI_Key = 11,
	EUIAGI_Password = 12,
	EUIAGI_SAPIENZA_GolfBall = 13,
	EUIAGI_SAPIENZA_ChemicalTube = 14,
	EUIAGI_SAPIENZA_FlowBouquet = 15,
	EUIAGI_SAPIENZA_Ammunitions = 16,
	EUIAGI_RatFood = 17,
	EUIAGI_Gunpowder = 18,
	EUIAGI_Cannonball = 19,
	EUIAGI_FuguFish = 20,
	EUIAGI_CakeTopper = 21,
	EUIAGI_Knife = 22,
	EUIAGI_SpaghettiCan = 23,
	EUIAGI_MAX = 24,
};

// 0x0000000142AB1E38 (Size: 0x4)
enum class ESilenceRating
{
	eSR_NotSilenced = 0,
	eSR_Silenced = 1,
	eSR_SuperSilenced = 2,
	eSR_CompletelySilenced = 3,
};

// 0x0000000142A90620 (Size: 0x4)
enum class EScreenAnchor
{
	SCREEN_ANCHOR_TOP_LEFT = 0,
	SCREEN_ANCHOR_TOP_CENTER = 1,
	SCREEN_ANCHOR_TOP_RIGHT = 2,
	SCREEN_ANCHOR_MIDDLE_LEFT = 3,
	SCREEN_ANCHOR_MIDDLE_CENTER = 4,
	SCREEN_ANCHOR_MIDDLE_RIGHT = 5,
	SCREEN_ANCHOR_BOTTOM_LEFT = 6,
	SCREEN_ANCHOR_BOTTOM_CENTER = 7,
	SCREEN_ANCHOR_BOTTOM_RIGHT = 8,
};

// 0x0000000142AA1B10 (Size: 0x4)
enum class EGameUIMenu
{
	eUIMenu_IntroMenu = 0,
	eUIMenu_PauseMenu = 1,
	eUIMenu_PhoneMenu = 2,
	eUIMenu_MapMenu = 3,
	eUIMenu_ModalDialogMenu = 4,
	eUIMenu_GameplayMenu = 5,
	eUIMenu_InventorySelectorMenu = 6,
	eUIMenu_ActionSelectorMenu = 7,
	eUIMenu_ActionSelectorInventoryMenu = 8,
	eUIMenu_IntelSelectorMenu = 9,
	eUIMenu_NotebookMenu = 10,
	eUIMenu_LogbookMenu = 11,
	eUIMenu_TutorialMenu = 12,
	eUIMenu_SplashHintMenu = 13,
	eUIMenu_EmoteMenu = 14,
	eUIMenu_Count = 15,
};

// 0x0000000143E5F408 (Size: 0x1)
enum class EValueUpdateStrategy
{
	UPDATE_STRATEGY_REPLACE = 0,
	UPDATE_STRATEGY_ADD_TO = 1,
	UPDATE_STRATEGY_MULTIPLY = 2,
};

// 0x0000000142A82EC8 (Size: 0x4)
enum class EDeathBehavior
{
	eDB_IMPACT_ANIM = 0,
	eDB_NO_IMPACT_ANIM = 1,
	eDB_NO_VELOCITY = 2,
	eDB_NO_RAGDOLL = 3,
};

// 0x0000000142AB4630 (Size: 0x4)
enum class ETargetPrintDestination
{
	eTPD_Screen = 0,
	eTPD_TraceViewer = 1,
};

// 0x0000000142A984F0 (Size: 0x4)
enum class EAimAssistActivationState
{
	eAAAS_Activated = 0,
	eAAAS_Activating = 1,
	eAAAS_Deactivated = 2,
	eAAAS_Deactivating = 3,
};

// 0x0000000142A968A0 (Size: 0x4)
enum class EHUDIconType
{
	HUD_ICON_NONE = 0,
	HUD_ICON_ALARM_TIMER = 1,
	HUD_ICON_CLOSECOMBAT = 2,
	HUD_ICON_BREADCRUMB = 3,
	HUD_ICON_EXIT = 4,
	HUD_ICON_OBJECTIVE = 5,
	HUD_ICON_TARGET = 6,
	HUD_ICON_TUTORIAL_ARROW = 7,
};

// 0x0000000142AE3360 (Size: 0x4)
enum class ENamedGameEvents
{
	eEvent_IntroCutStart = 0,
	eEvent_PlayingAfterLoad = 1,
	eEvent_SetModePlaying = 2,
	eNumNamedGameEvents = 3,
};

// 0x0000000142AF3358 (Size: 0x4)
enum class EReplicaOperation
{
	E_Created = 0,
	E_Destroyed = 1,
};

// 0x0000000142AA53C0 (Size: 0x4)
enum class EViewportLock
{
	VPL_None = 0,
	VPL_Rectangular = 1,
	VPL_Rectangular_AvoidMinimapOverlap = 2,
};

// 0x0000000142A8E8F0 (Size: 0x4)
enum class ECharacterActionSyncRequests
{
	eSM_ASR_Reload = 1,
	eSM_ASR_SwapItemHandL = 2,
	eSM_ASR_SwapItemHandR = 4,
};

// 0x0000000142AE15D0 (Size: 0x1)
enum class AudioCurve
{
	AudioCurve_Log3 = 0,
	AudioCurve_Sine = 1,
	AudioCurve_Log1 = 2,
	AudioCurve_InvSCurve = 3,
	AudioCurve_Linear = 4,
	AudioCurve_SCurve = 5,
	AudioCurve_Exp1 = 6,
	AudioCurve_SineRecip = 7,
	AudioCurve_Exp3 = 8,
	AudioCurve_LastFadeCurve = 9,
	AudioCurve_Constant = 10,
};

// 0x0000000143E60F30 (Size: 0x4)
enum class ESaveType
{
	ESaveType_AutoSave = 0,
	ESaveType_QuickSave = 1,
	ESaveType_SystemData = 2,
	ESaveType_LocalProfile = 3,
};

// 0x0000000142A82F48 (Size: 0x4)
enum class EAIGoal
{
	AIG_Kill = 0,
	AIG_Arrest = 1,
	AIG_FightSniper = 2,
	AIG_HelpCivilian = 3,
	AIG_HelpCivilianWeapon = 4,
	AIG_Investigate = 5,
	AIG_InvestigateDisguise = 6,
	AIG_StandOffInvestigateDisguise = 7,
	AIG_InvestigateDeadBody = 8,
	AIG_HandleTrespasser = 9,
	AIG_InvestigateCautious = 10,
	AIG_HandleDistraction = 11,
	AIG_AssistDistraction = 12,
	AIG_GuardAssistDistraction = 13,
	AIG_HandleSuitcase = 14,
	AIG_InvestigateWeapon = 15,
	AIG_DetectedInPrivate = 16,
	AIG_RecoverUnconscious = 17,
	AIG_RecoverUnconsciousAlerted = 18,
	AIG_DeliverWeapon = 19,
	AIG_AvoidExplosion = 20,
	AIG_Hunt = 21,
	AIG_Frisk = 22,
	AIG_GuardBody = 23,
	AIG_DragBody = 24,
	AIG_LookAtAccident = 25,
	AIG_Sentry = 26,
	AIG_HelpGeneric = 27,
	AIG_Evacuate = 28,
	AIG_Entourage = 29,
	AIG_AvoidDangerousArea = 30,
	AIG_Spectator = 31,
	AIG_Infected = 32,
	AIG_SC_Combat = 33,
	AIG_SC_Alerted = 34,
	AIG_None = 35,
};

// 0x0000000142A82FD8 (Size: 0x4)
enum class ECautiousDisturbanceState
{
	eCDS_Pending = 0,
	eCDS_Expired = 1,
	eCDS_Handled = 2,
	eCDS_GetHelpGroup = 3,
	eCDS_InvestigationGroup = 4,
	eCDS_InvestigateAfterExplosion = 5,
	eCDS_Ignored = 6,
	eCDS_NoInvestigator = 7,
	eCDS_Similar = 8,
	eCDS_ManHunt = 9,
	eCDS_CombatSuppressGunshots = 10,
};

// 0x0000000142A905E0 (Size: 0x4)
enum class EControlButtonName
{
	eCN_ABORT = 0,
	eCN_ACTION = 1,
	eCN_ACTIVATE_PROP = 2,
	eCN_AGILITY_DOWN = 3,
	eCN_AGILITY_ENTERWINDOW = 4,
	eCN_AGILITY_SNEAKPASTWINDOW = 5,
	eCN_AGILITY_THROWOVERRAIL = 6,
	eCN_AGILITY_UP = 7,
	eCN_AIM = 8,
	eCN_COVER_ENTER = 9,
	eCN_COVER_TAKEDOWN = 10,
	eCN_COVER_TO_COVER = 11,
	eCN_CROUCH = 12,
	eCN_DRAGBODY = 13,
	eCN_DUMPBODY = 14,
	eCN_FIBERWIRE = 15,
	eCN_INSTINCT = 16,
	eCN_INVENTORY_HOLSTER = 17,
	eCN_INVENTORY_LONGRANGE = 18,
	eCN_MARK_TARGET = 19,
	eCN_CHANGE_AMMO_NEXT = 20,
	eCN_CHANGE_AMMO_PREVIOUS = 21,
	eCN_INVENTORY_PROP = 22,
	eCN_INVENTORY_SHORTRANGE = 23,
	eCN_ITEM_DROP = 24,
	eCN_ITEM_THROW = 25,
	eCN_MELEE_HIT = 26,
	eCN_MELEE_TAKEDOWN = 27,
	eCN_PICKUP = 28,
	eCN_RUN = 29,
	eCN_WALK_SLOW = 30,
	eCN_CONCEAL_RETRIEVE = 31,
	eCN_SB_ACTIVATE = 32,
	eCN_SB_CANCEL = 33,
	eCN_SB_EXECUTE = 34,
	eCN_SB_REMOVETAG = 35,
	eCN_SHOOT = 36,
	eCN_NOTEBOOK = 37,
	eCN_PAUSE = 38,
	eCN_NO_ICON = 39,
};

// 0x0000000142A82D40 (Size: 0x4)
enum class EActorGroup
{
	eAG_Group_A = 0,
	eAG_Group_B = 1,
	eAG_Group_C = 2,
	eAG_Group_D = 3,
	eAG_Count = 4,
};

// 0x0000000142AEEC70 (Size: 0x4)
enum class ESyncEvent
{
	eSyncEvent_None = 0,
	eSyncEvent_LeftFoot = 100,
	eSyncEvent_RightFoot = 200,
	eSyncEvent_BothFeet = 300,
};

// 0x0000000142A97E00 (Size: 0x4)
enum class EActorAIDot
{
	eAAID_None = 0,
	eAAID_Distracted = 1,
	eAAID_PotentialThreat = 2,
	eAAID_PotentialThreatDistracted = 3,
	eAAID_Aggressive = 4,
	eAAID_EscortingOut = 5,
	eAAID_Fleeing = 6,
	eAAID_Unconscious = 7,
	eAAID_Stunned = 8,
	eAAID_Grenade = 9,
	eAAID_PotentialThreatDisabled = 100,
};

// 0x0000000142A988B0 (Size: 0x4)
enum class ERatingTitleRequirement
{
	ERatingTitleRequirement_Optional = 0,
	ERatingTitleRequirement_Required = 1,
	ERatingTitleRequirement_Fails = 2,
};

// 0x0000000142A96ED0 (Size: 0x4)
enum class EWeaponUpgradeUse
{
	eWUU_PrimaryOnly = 0,
	eWUU_SecondaryOnly = 1,
	eWUU_AllFireModes = 2,
};

// 0x0000000142A7B638 (Size: 0x4)
enum class EObjectiveType
{
	OBJECTIVE_PRIMARY = 0,
	OBJECTIVE_SECONDARY = 1,
	OBJECTIVE_TERTIARY = 2,
};

// 0x0000000142A927C8 (Size: 0x4)
enum class EVRIKElementMode
{
	EVRIKEM_Enabled = 0,
	EVRIKEM_Disabled = 1,
	EVRIKEM_KeepCurrent = 2,
};

// 0x0000000142AA5260 (Size: 0x4)
enum class EMarkerClipAlgorithm
{
	MCA_NONE = 0,
	MCA_SIMPLE = 1,
	MCA_ADVANCED = 2,
};

// 0x0000000142A79E58 (Size: 0x4)
enum class EKnownEntityType
{
	KET_UNKNOWN = 0,
	KET_HITMAN = 1,
	KET_ACTOR = 2,
	KET_ITEM = 3,
	KET_LOCATION = 4,
	KET_OBJECT = 5,
	KET_COVER = 6,
	KET_PERCEPTIBLE = 7,
	KET_TEMPCROWDBODY = 8,
};

// 0x0000000142A97DA0 (Size: 0x4)
enum class EAIFormationMemberSpeed
{
	eFMS_Slow = 0,
	eFMS_Normal = 1,
	eFMS_Fast = 2,
};

// 0x0000000142A982B0 (Size: 0x4)
enum class ECharacterFullBodyStateType
{
	eSM_FB_OldMovementPlaceholder = 0,
	eSM_FB_Slave = 1,
	eSM_FB_Locomotion = 2,
	eSM_FB_CloseCombat = 3,
	eSM_FB_FlavorIdle = 4,
	eSM_FB_Sniping = 5,
	eSM_FB_AssemblePutOnTheFloor = 6,
	eSM_FB_AssembleAlignContainer = 7,
	eSM_FB_AssembleRetrieve = 8,
	eSM_FB_AssembleStore = 11,
};

// 0x0000000142A915C8 (Size: 0x4)
enum class EGuardPointType
{
	GPT_Hold = 0,
	GPT_Combat = 1,
	GPT_CombatAndHold = 2,
	GPT_VIPSafeRoom = 3,
};

// 0x0000000142A976A0 (Size: 0x4)
enum class EDetachUsage
{
	EDU_NEVER = 0,
	EDU_ALWAYS = 1,
	EDU_RAGDOLL_ONLY = 2,
};

// 0x0000000142A965C0 (Size: 0x4)
enum class ECharacterUpperBodyStateType
{
	eSM_UB_EmptyHanded = 0,
	eSM_UB_Unholster = 1,
	eSM_UB_Hold = 2,
	eSM_UB_Reload = 3,
	eSM_UB_Holster = 4,
	eSM_UB_Conceal = 5,
	eSM_UB_SwapItemHand = 6,
	eSM_UB_Aiming = 7,
	eSM_UB_Pickup = 8,
	eSM_UB_InteractionSwipe = 9,
	eSM_UB_Interaction = 10,
	eSM_UB_Slave = 11,
	eSM_UB_OpenDoor = 12,
	eSM_UB_FlavorIdle = 13,
	eSM_UB_ChangeAmmo = 14,
	eSM_UB_Assemble = 15,
	eSM_UB_Fiberwire = 16,
	eSM_UB_PrimeTwoHanded = 17,
	eSM_UB_SnapNeck = 18,
};

// 0x0000000142A961A0 (Size: 0x4)
enum class ESubcontrollerInventorySlot
{
	eSIS_Invalid = 0,
	eSIS_LeftHand = 1,
	eSIS_RightHand = 2,
};

// 0x00000001422CA578 (Size: 0x4)
enum class EHM5GameInputFlag
{
	eGameInputActionPerform = 0,
	eGameInputActionPickup = 1,
	eGameInputActionAbort = 2,
	eGameInputActionDoor = 3,
	eGameInputWeaponZoomIn = 4,
	eGameInputWeaponZoomOut = 5,
	eGameInputActionShoot = 6,
	eGameInputActionPrecisionShoot = 7,
	eGameInputAimOTS = 8,
	eGameInputCoverAction = 9,
	eGameInputCoverAlternativeAction = 10,
	eGameInputInventoryAccept = 11,
	eGameInputEquipShortRange = 12,
	eGameInputEquipLongRange = 13,
	eGameInputHolsterItem = 14,
	eGameInputDropItem = 15,
	eGameInputTogglePlacement = 16,
	eGameInputActivatePropQuick = 17,
	eGameInputActivateProp = 18,
	eGameInputActivatePropHold = 19,
	eGameInputActivatePropSecondary = 20,
	eGameInputActivatePropInterruptibleStart = 21,
	eGameInputActivatePropInterruptibleEnd = 22,
	eGameInputConcealRetrieve = 23,
	eGameInputGuideAction = 24,
	eGameInputGuideActionHold = 25,
	eGameInputGuideActionSecondary = 26,
	eGameInputGuideEnterWindow = 27,
	eGameInputGuideSneakPastWindow = 28,
	eGameInputGuideSneakPastWindowHold = 29,
	eGameInputGuideKill = 30,
	eGameInputSlideLadder = 31,
	eGameInputCloseCombat = 32,
	eGameInputFiberwire = 33,
	eGameInputCloseCombatCounter = 34,
	eGameInputCloseCombatTakeDown = 35,
	eGameInputCloseCombatSnapNeck = 36,
	eGameInputSurrender = 37,
	eGameInputShowItem = 38,
	eGameInputReload = 39,
	eGameInputTakeDisguise = 40,
	eGameInputDragDropBody = 41,
	eGameInputDumpBody = 42,
	eGameInputSneakToggle = 43,
	eGameInputCamSwitch = 44,
	eGameInputActivateRun = 45,
	eGameInputActivateWalkSlow = 46,
	eGameInputInstinctMode = 47,
	eGameInputContractTargetTag = 48,
	eGameInputThrow = 49,
	eGameInputCloseCombatChainHigh = 50,
	eGameInputCloseCombatChainLow = 51,
	eGameInputCloseCombatChainCounter = 52,
	eGameInputSkipCutSequence = 53,
	eGameInputCloseCombatChokeStart = 54,
	eGameInputCloseCombatChoke = 55,
	eGameInputFocusedInteractionFaceUp = 56,
	eGameInputFocusedInteractionFaceLeft = 57,
	eGameInputFocusedInteractionFaceDown = 58,
	eGameInputFocusedInteractionLeftStickAnalog = 59,
	eGameInputRemoteAction = 60,
	eGameInputChangeAmmoNext = 61,
	eGameInputChangeAmmoPrevious = 62,
	eGameInputDefault = 63,
	eGameInputActionsNUM = 64,
};

// 0x0000000142A88B50 (Size: 0x4)
enum class ECharacterActionRequests
{
	eSM_AR_None = 0,
	eSM_AR_ReloadR = 1,
	eSM_AR_ReloadL = 2,
	eSM_AR_ShootR = 3,
	eSM_AR_ShootL = 4,
	eSM_AR_SwapHands = 5,
	eSM_AR_HolsterR = 6,
	eSM_AR_HolsterL = 7,
	eSM_AR_UnholsterR = 8,
	eSM_AR_UnholsterL = 9,
	eSM_AR_PickupItemR = 10,
	eSM_AR_PickupItemL = 11,
	eSM_AR_InteractionR = 12,
	eSM_AR_InteractionL = 13,
	eSM_AR_InteractionSwipe = 14,
	eSM_AR_InteractionSwipeR = 15,
	eSM_AR_InteractionSwipeL = 16,
	eSM_AR_OpenDoor = 17,
	eSM_AR_OpenDoorR = 18,
	eSM_AR_OpenDoorL = 19,
	eSM_AR_CloseCombat = 20,
	eSM_AR_Movement = 21,
	eSM_AR_Pretend = 22,
	eSM_AR_Sniping = 23,
	eSM_AR_EndSniping = 24,
	eSM_AR_RetrieveFromSuitcase = 25,
	eSM_AR_Marking = 26,
	eSM_AR_ChangeAmmo = 27,
	eSM_AR_Assemble = 28,
	eSM_AR_Assemble_UnequippedContainer = 29,
	eSM_AR_Disassemble = 30,
	eSM_AR_Disassemble_PickingUp = 31,
	eSM_AR_AssembleUB = 32,
	eSM_AR_DisassembleUB = 33,
	eSM_AR_Cancel = 34,
	eSM_AR_Sprint = 35,
	eSM_AR_CloseHandR = 36,
	eSM_AR_CloseHandL = 37,
};

// 0x0000000142AF4900 (Size: 0x1)
enum class EFilterMaskBit
{
	eFilterMaskBit_ObjectCollision = 0,
	eFilterMaskBit_OpaqueCollision = 1,
	eFilterMaskBit_UNUSED_LAST = 2,
};

// 0x0000000142A97CE0 (Size: 0x4)
enum class EDeathAnimationType
{
	DAT_None = 0,
	DAT_SingleShot = 1,
	DAT_BurstShot = 2,
	DAT_HeavyShot = 3,
	DAT_Unknown = 4,
};

// 0x0000000142A9CB80 (Size: 0x4)
enum class EWaypointRotationAlignment
{
	RA_NONE = 0,
	RA_LOOSE = 1,
	RA_EXACT = 2,
};

// 0x0000000142AB1EC8 (Size: 0x4)
enum class EEquipAbility
{
	EA_EQUIP_IN_HANDS = 0,
	EA_CANNOT_BE_EQUIPPED = 1,
};

// 0x0000000142A98AF0 (Size: 0x4)
enum class EMeBarState
{
	ME_BAR_NONE = 0,
	ME_BAR_TRESPASSING = 1,
	ME_BAR_DEEPTRESPASSING = 2,
	ME_BAR_VISIBLY_ARMED = 3,
	ME_BAR_CHANGING_DISGUISE = 4,
	ME_BAR_DISGUISE_BLOWN = 5,
	ME_BAR_DISGUISE_SUSPICIOUS = 6,
	ME_BAR_NEAR_BODY = 7,
};

// 0x0000000142AB0730 (Size: 0x4)
enum class EFSMInternalEvent
{
	eFSMEvent_Completed = 0,
	eFSMEvent_Failed = 1,
	eFSMEvent_Choice = 2,
	eFSMEvent_Max = 3,
};

// 0x0000000142AE3810 (Size: 0x4)
enum class EEngineModeId
{
	EngineMode_Invalid = -1,
	EngineMode_SinglePlayer = 0,
	EngineMode_SplitScreen = 1,
	EngineMode_Multiplayer = 2,
	EngineMode_Max = 3,
};

// 0x0000000142A94650 (Size: 0x4)
enum class EActorBumpType
{
	EABT_NONE = 0,
	EABT_UPPERBODY = 1,
	EABT_HEAD = 2,
};

// 0x0000000142A98100 (Size: 0x4)
enum class ETakeDownAnim
{
	eCoverLowOverNarrowCloseFront = 0,
	eCoverLowOverNarrowCloseBack = 1,
	eCoverLowOverNarrowFarFront = 2,
	eCoverLowOverNarrowFarBack = 3,
	eCoverLowOverWideFront = 4,
	eCoverLowOverWideBack = 5,
	eCoverLowCornerFront = 6,
	eCoverLowCornerBack = 7,
	eCoverHighCornerFront = 8,
	eCoverHighCornerBack = 9,
	eLocomotionBack = 10,
	eLocomotionFallback = 11,
	eLocomotionChair = 12,
	eChokeGroundLoop = 13,
	eChokeGroundEndPacify = 14,
	eChokeGroundEndKill = 15,
	eChokeGroundFallBackLoop = 16,
	eChokeGroundFallBackEndPacify = 17,
	eChokeGroundFallBackEndKill = 18,
	eChokeChairLoop = 19,
	eChokeChairEndPacify = 20,
	eChokeChairEndKill = 21,
	eChokeChairEndLeft90 = 22,
	eChokeChairEndLeft45 = 23,
	eChokeChairEndFront = 24,
	eChokeChairEndRight45 = 25,
	eChokeChairEndRight90 = 26,
	eTakeDownAnimLast = 27,
};

// 0x0000000143E5F428 (Size: 0x1)
enum class ECollisionResponse
{
	REFLECT_VELOCITY = 0,
	SLIDE_ON = 1,
	STAY_AT_COLLISION_POINT = 2,
	CUSTOM = 3,
};

// 0x0000000142A97FE0 (Size: 0x4)
enum class ECCNodeType
{
	eCCNodeType_Counter = 0,
	eCCNodeType_ExecutePistol = 1,
	eCCNodeType_React = 2,
	eCCNodeType_SilentTakeDownEnd = 3,
	eCCNodeType_SilentKill = 4,
	eCCNodeType_SlitThroat1H = 5,
	eCCNodeType_Swing1H = 6,
	eCCNodeType_Bash1H = 7,
	eCCNodeType_Stab1H = 8,
	eCCNodeType_Syringe1H = 9,
	eCCNodeType_Strangle1H = 10,
	eCCNodeType_Smash1H = 11,
	eCCNodeType_Swing2H = 12,
	eCCNodeType_Stab2H = 13,
	eCCNodeType_Bash2H = 14,
	eCCNodeType_Strangle2H = 15,
	eCCNodeType_Axe = 16,
	eCCNodeType_Sword1H = 17,
	eCCNodeType_AttackChain = 18,
	eCCNodeType_AttackChainCivilian = 19,
	eCCNodeType_AttackChainHeavy = 20,
	eCCNodeType_FailChain = 21,
	eCCNodeType_FinishChainHigh = 22,
	eCCNodeType_FinishChainLow = 23,
	eCCNodeType_FinishChainKill = 24,
	eCCNodeType_StairsChain = 25,
	eCCNodeType_CounterChain = 26,
	eCCNodeType_AttackIdle = 27,
	eCCNodeType_AttackPassify = 28,
	eCCNodeType_FailChainPush = 29,
	eCCNodeType_Count = 30,
};

// 0x0000000142A98730 (Size: 0x4)
enum class eHitmanPermissionReason
{
	eHPReason_MovementContext = 1,
	eHPReason_ItemHandlingInProcess = 2,
	eHPReason_SniperMode = 4,
	eHPReason_CrippleBox = 8,
	eHPReason_LevelDesign = 16,
	eHPReason_PlayerInput = 32,
	eHPReason_InstinctBlendIn = 64,
	eHPReason_FocusInteraction = 128,
	eHPReason_NUM = 7,
	eHPReason_ALLReasons = -1,
};

// 0x0000000143CDF3D0 (Size: 0x4)
enum class eParticleEmitterMeshEntity_SpawnModes
{
	MESH_SPAWNMODE_VERTEX = 0,
	MESH_SPAWNMODE_EDGE = 1,
	MESH_SPAWNMODE_FACE = 2,
};

// 0x0000000142A927F8 (Size: 0x4)
enum class EThrowType
{
	THROW_NONE = 0,
	THROW_COIN = 1,
	THROW_NORMAL = 2,
	THROW_HEAVY = 3,
	THROW_KNOCKDOWN_LIGHT = 4,
	THROW_KNOCKDOWN_HEAVY = 5,
	THROW_PACIFY_LIGHT = 6,
	THROW_PACIFY_HEAVY = 7,
	THROW_DEADLY_LIGHT = 8,
	THROW_DEADLY_HEAVY = 9,
};

// 0x0000000142A79CD8 (Size: 0x4)
enum class EAnimSetState
{
	EASES_DEFAULT = 0,
	EASES_AMBIENT_ARMED = 1,
	EASES_AMBIENT_VIP_ESCORT = 2,
	EASES_AMBIENT_HERO_ESCORT = 3,
	EASES_COMBAT_EVACUATE = 4,
	EASES_COMBAT_EVACUATE_VIP_SOLO = 5,
	EASES_SICK = 6,
	EASES_INFECTED = 7,
};

// 0x0000000142A95FD0 (Size: 0x4)
enum class ECameraState
{
	eCamSneakStand = 0,
	eCamSneakWalk = 1,
	eCamSneakRoadyRun = 2,
	eCamNormalStand = 3,
	eCamNormalWalk = 4,
	eCamNormalRun = 5,
	eCamLocomotion = 6,
	eCamCrowdStand = 7,
	eCamCrowdWalk = 8,
	eCamCrowdRun = 9,
	eCamCrowdSneakStand = 10,
	eCamCrowdSneakWalk = 11,
	eCamCrowdSneakRoadyRun = 12,
	eCamCrowdLocomotion = 13,
	eCamDead = 14,
	eCamLadder = 15,
	eCamDrainPipe = 16,
	eCamDrag = 17,
	eCamSBTag = 18,
	eCamSBTagOTS = 19,
	eCamCloseCombat = 20,
	eCamFiberWire = 21,
	eCamWindowPull = 22,
	eCamRailPush = 23,
	eCamLedgeKick = 24,
	eCamLedgePull = 25,
	eCamLedgeHang = 26,
	eCamLedgeWalk = 27,
	eCamLedgeWalkOTS = 28,
	eCamCoverLow = 29,
	eCamCoverMedium = 30,
	eCamCoverHigh = 31,
	eCamCoverLowOTS = 32,
	eCamCoverHighOTS = 33,
	eCamCoverLowScope = 34,
	eCamCoverHighScope = 35,
	eCamCoverLowTakedownOver = 36,
	eCamCoverLowTakedownCorner = 37,
	eCamCoverHighTakedownCorner = 38,
	eCamTakeDisguise = 39,
	eCamOTS = 40,
	eCamOTSHigh = 41,
	eCamOTSLow = 42,
	eCamUnAimedShooting = 43,
	eCamUnAimedShootingHigh = 44,
	eCamUnAimedShootingLow = 45,
	eCamScope = 46,
	eCamScopeHigh = 47,
	eCamScopeLow = 48,
	eCamVaultLow = 49,
	eCamVaultHigh = 50,
	eCamTakedown = 51,
	eCamTakedownChair = 52,
	eCamLockedSniping = 53,
	eCamLockedSnipingScope = 54,
	eCamLockedSnipingScopeHigh = 55,
	eCamLockedSnipingScopeLow = 56,
	eCamContainerAssemble = 57,
	eCamNumProfiles = 58,
	eCamAll = 59,
};

// 0x0000000142A95EF0 (Size: 0x4)
enum class ECameraShakerChannel
{
	eCameraShakerChannel_Default = 0,
	eCameraShakerChannle_Locomotion = 1,
	eCameraShakerChannel_Ambient = 2,
	eCameraShakerChannel_Weapon = 3,
	eCameraShakerChannel_CloseCombat = 4,
	eCameraShakerChannel_Num = 5,
};

// 0x0000000142AA5680 (Size: 0x4)
enum class EInteractionIndicatorState
{
	EIIS_AVAILABLE = 0,
	EIIS_COLLAPSED = 1,
	EIIS_ACTIVATING = 2,
	EIIS_NOTAVAILABLE = 3,
};

// 0x0000000143E607E0 (Size: 0x4)
enum class ERequirementId
{
	EREQUIREMENT_INVALID = 0,
	EREQUIREMENT_TOKEN_OUTFIT_LEGACY_HERO_REQUIEMSUIT = 1,
	EREQUIREMENT_FIREARMS_HERO_PISTOL_TACTICAL_015_SU_SKIN05 = 2,
	EREQUIREMENT_PROP_DEVICE_SONYPREORDER_WHITE_RUBBERDUCK_REMOTE_EXPLOSIVE = 3,
	EREQUIREMENT_GOTY_PATIENT_ZERO = 4,
	EREQUIREMENT_GOTY_TOKEN_OUTFIT_PARIS_CLOWN = 5,
	EREQUIREMENT_GOTY_TOKEN_OUTFIT_HOKKAIDO_COWBOY = 6,
	EREQUIREMENT_GOTY_TOKEN_OUTFIT_MARRAKESH_DARK_SNIPER = 7,
	EREQUIREMENT_ANNIVERSARY_OUTFITS = 8,
	EREQUIREMENT_LOCATION_NEWZEALAND = 9,
	EREQUIREMENT_S2_EXECUTIVE_PACK = 10,
	EREQUIREMENT_S2_COLLECTORS_PACK = 11,
	EREQUIREMENT_S2_EXPANSION_VANITY_ITEM1 = 12,
	EREQUIREMENT_S2_EXPANSION_VANITY_ITEM2 = 13,
	EREQUIREMENT_PROP_CONTAINER_SUITCASE_ICA_STA_STADIA = 14,
	EREQUIREMENT_PROP_DEVICE_ICA_RUBBERDUCK_REMOTE_EXPLOSIVE_STA_STADIA = 15,
	EREQUIREMENT_H1_LEGACY_STANDARD = 16,
	EREQUIREMENT_H1_LEGACY_EXPANSION = 17,
	EREQUIREMENT_H2_LEGACY_STANDARD = 18,
	EREQUIREMENT_H2_LEGACY_EXPANSION = 19,
	EREQUIREMENT_H3_EXPANSION = 20,
	EREQUIREMENT_LOCATION_GOLDEN = 21,
	EREQUIREMENT_LOCATION_ANCESTRAL = 22,
	EREQUIREMENT_LOCATION_EDGY = 23,
	EREQUIREMENT_LOCATION_WET = 24,
	EREQUIREMENT_LOCATION_ELEGANT = 25,
	EREQUIREMENT_LOCATION_TRAPPED = 26,
	EREQUIREMENT_PLATFORM_ORBIS = 27,
	EREQUIREMENT_PLATFORM_PS5 = 28,
	EREQUIREMENT_PLATFORM_GDK = 29,
	EREQUIREMENT_PLATFORM_EPIC = 30,
	EREQUIREMENT_PLATFORM_STEAM = 31,
	EREQUIREMENT_PLATFORM_GGP = 32,
	EREQUIREMENT_H3_PREORDER = 33,
};

// 0x0000000142A98610 (Size: 0x1)
enum class ECharacterAnimEventState
{
	eES_None = 0,
	eES_Pending = 1,
	eES_Completed = 2,
	eES_TimedOut = 3,
};

// 0x0000000142A98D90 (Size: 0x4)
enum class ECommunicationBarMessage
{
	ECBM_Unknown = 0,
	ECBM_Spotted = 1,
	ECBM_Frisking = 2,
	ECBM_HostileArea = 3,
	ECBM_InvestigatingArea = 4,
	ECBM_Clear = 5,
	ECBM_Suspicious = 6,
	ECBM_Alerted = 7,
	ECBM_Hunting = 8,
	ECBM_Arresting = 9,
	ECBM_Engaging = 10,
	ECBM_Hostile = 11,
	ECBM_IdentityKnown = 12,
	ECBM_Agitated = 13,
	ECBM_VipRunsToSafeArea = 14,
	ECBM_VipEscaping = 15,
	ECBM_BodyFound = 16,
	ECBM_GunshotHeard = 17,
	ECBM_CloseCombatHeard = 18,
	ECBM_CrimeNoticed = 19,
	ECBM_BulletImpactNoticed = 20,
	ECBM_SpottedByCamera = 21,
	ECBM_UnconsciousWitness = 22,
};

// 0x0000000142AF3340 (Size: 0x4)
enum class EMultiplayerNetworkState
{
	Base = 0,
	Idle = 1,
	Searching = 2,
	Connecting = 3,
	Joining = 4,
	Creating = 5,
	Connected = 6,
	Disconnecting = 7,
	Count = 8,
};

// 0x00000001422CA0E8 (Size: 0x4)
enum class EActorSoundDefs
{
	_NoSound = 0,
	Dth_BrkNck = 1,
	Dth_Fll = 2,
	Dth_GnSht = 3,
	Dth_HdSht = 4,
	Dth_Mpct = 5,
	Dth_SltThrt = 6,
	Dth_Strngl = 7,
	Dth_Xplo = 8,
	Dth_PrpF = 9,
	Dth_Electro = 10,
	Dth_Burn = 11,
	Dth_Crush = 12,
	Dth_Scrm = 13,
	Dth_Hrt = 14,
	Dth_SrpsGrab = 15,
	Dth_HumShldStrain = 16,
	Dth_Snore = 17,
	Dth_Groan = 18,
	Dth_Dump = 19,
	Dth_PrpTssFrntAck = 20,
	Dth_Headlock = 21,
	Dth_Blinded = 22,
	Dth_BeeSting = 23,
	Dth_Grab = 24,
	Gen_Grt47 = 25,
	Gen_GrtGrd47WGun = 26,
	Gen_GrtTrgt = 27,
	Gen_GrtTrgtRsp = 28,
	Gen_NPC2NPCGrt = 29,
	Gen_NPC2NPCRsp = 30,
	Gen_GtHlp = 31,
	Gen_GtHlpLd = 32,
	Gen_GtHlp47Knwn = 33,
	Gen_Mssng = 34,
	Gen_HMHere = 35,
	Gen_HMThere = 36,
	Gen_SrpsLow = 37,
	Gen_SrpsLowShort = 38,
	Gen_Srps = 39,
	Gen_SrpsLd = 40,
	Gen_StndRsp = 41,
	Gen_Stop = 42,
	Gen_StopLd = 43,
	Gen_Reveal = 44,
	Gen_ThumbsUp = 45,
	Gen_BrknAck = 46,
	Gen_Ack = 47,
	Gen_AckLd = 48,
	Gen_AckNtnse = 49,
	Gen_BumpAck = 50,
	Gen_Curse = 51,
	Gen_CurseLow = 52,
	Gen_DrpGun = 53,
	Gen_DrpCase = 54,
	Gen_CoinCurse = 55,
	Gen_TransportGreet = 56,
	Gen_Thanks = 57,
	Gen_ReturnItem2Guard = 58,
	Gen_NoWay1 = 59,
	Gen_NoWay2Kidding = 60,
	Gen_NoWay3Joke = 61,
	Gen_NoWay44Real = 62,
	Gen_NoWay5DntBeliv = 63,
	Gen_NoWay6Serious = 64,
	Gen_NoWay7Horrible = 65,
	Gen_Way1 = 66,
	Gen_Way2Kidding = 67,
	Gen_Way3Joke = 68,
	Gen_Way44Real = 69,
	Gen_Way5DntBeliv = 70,
	Gen_Way6Serious = 71,
	Gen_Way7Horrible = 72,
	Gen_NkdRunAck = 73,
	Gen_Grasp = 74,
	Gen_Amused = 75,
	Gen_Annoyed = 76,
	Gen_BdygrdArrive = 77,
	Gen_BdygrdMovOut = 78,
	Gen_GiveUp = 79,
	Gen_Off = 80,
	Gen_On = 81,
	Gen_PanicLow = 82,
	Gen_Sick = 83,
	Gen_SmellAck = 84,
	Gen_SmrtPhnAct = 85,
	Gen_PhoneAct = 86,
	Gen_OutbreakInfect = 87,
	Gen_OutbreakSick = 88,
	Gen_OutbreakWhine = 89,
	Gtag = 90,
	ClsCmbt_Ack = 91,
	ClsCmbt_Tnt = 92,
	Cmbt_BackupCll = 93,
	Cmbt_BadDsg = 94,
	Cmbt_Beg = 95,
	Cmbt_ClsAck = 96,
	Cmbt_Fire = 97,
	Cmbt_FireLdr = 98,
	Cmbt_GtHit = 99,
	Cmbt_HitHM = 100,
	Cmbt_HMClsCmbtAck = 101,
	Cmbt_HMCvr = 102,
	Cmbt_HMFire = 103,
	Cmbt_HMFlnk = 104,
	Cmbt_HMHeadPopr = 105,
	Cmbt_HMKll = 106,
	Cmbt_HMKllCiv = 107,
	Cmbt_HMKllName = 108,
	Cmbt_HMKllPrpTss = 109,
	Cmbt_HMMssTnt = 110,
	Cmbt_HMShrpShtr = 111,
	Cmbt_HMSpttd = 112,
	Cmbt_HMVnshd = 113,
	Cmbt_Hold = 114,
	Cmbt_HoldLdr = 115,
	Cmbt_HumShldRls1 = 116,
	Cmbt_HumShldRls2 = 117,
	Cmbt_HumShldRls3 = 118,
	Cmbt_HumShldRlsFem1 = 119,
	Cmbt_HumShldRlsFem2 = 120,
	Cmbt_HumShldRlsFem3 = 121,
	Cmbt_HumShldVctm = 122,
	Cmbt_HumShldLdr = 123,
	Cmbt_LngLst = 124,
	Cmbt_LngLstRsp = 125,
	Cmbt_LstMnStn = 126,
	Cmbt_LstSght = 127,
	Cmbt_LstSghtRsp = 128,
	Cmbt_NdrAttck = 129,
	Cmbt_Relod = 130,
	Cmbt_Scrm = 131,
	Cmbt_ThrowFlash = 132,
	Cmbt_ThrowFlashMiss = 133,
	Cmbt_ThrowFlashMiss2 = 134,
	Cmbt_ThrowFlashWin = 135,
	Cmbt_ThrowFlashWin2 = 136,
	Cmbt_TkDwnLdr = 137,
	Cmbt_VntAck = 138,
	Cmbt_Whmp = 139,
	Cmbt_StalemateHold = 140,
	Cmbt_StalemateTnt = 141,
	Cmbt_TriggerTheAlarm = 142,
	Cmbt_47Mpty = 143,
	Cmbt_47SuperSize = 144,
	Evac_PrtTrgtSolo = 145,
	Evac_PrtTrgtAck = 146,
	Evac_PrtTrgtAckLdr = 147,
	Evac_PrtTrgtEscrt = 148,
	Evac_PrtTrgtStop = 149,
	Evac_PrtTrgtStnd = 150,
	Evac_PrtTrgtStndRsp = 151,
	Evac_Cornered = 152,
	Evac_MovOut = 153,
	Evac_PathChange = 154,
	Evac_PeelOff = 155,
	Evac_LastPeelOff = 156,
	Evac_ShltrArrv = 157,
	Evac_ShltrBad = 158,
	Evac_ShltrLdr = 159,
	Evac_ShltrRsp = 160,
	Evac_TrgtHitRsp = 161,
	AvoidXplo_Ack = 162,
	AvoidXplo_Stnd = 163,
	Ar_47BadAction = 164,
	Ar_47X = 165,
	Ar_BadDsg = 166,
	Ar_BlmeKll = 167,
	Ar_BlameKnckDwn = 168,
	Ar_BlameKnckDwnPT = 169,
	Ar_BlameKllPT = 170,
	Ar_47BadActionPT = 171,
	Ar_DrgBody = 172,
	Ar_FkeSrrdrTnt = 173,
	Ar_HMDoor = 174,
	Ar_Strangle = 175,
	Ar_Trspss = 176,
	Ar_WeapWrn1 = 177,
	Ar_WeapWrn2 = 178,
	Ar_Wrn1 = 179,
	Ar_Wrn2 = 180,
	Ar_Wrn3 = 181,
	Ar_VictimAck = 182,
	Ar_Thief = 183,
	Ar_Rsp = 184,
	Sniper_Ack = 185,
	InCa_BackupCll = 186,
	InCa_ChckCvr = 187,
	InCa_CivRptFail = 188,
	InCa_CivUpset = 189,
	InCa_ClstTnt = 190,
	InCa_HMTnt = 191,
	InCa_Idle = 192,
	InCa_NitiateHMKnwn = 193,
	InCa_SrchLdr = 194,
	InCa_Stnd = 195,
	InCa_StndAgtd = 196,
	InCa_StndAgtdLdr = 197,
	InCa_StndAgtdHMKnwn = 198,
	InCa_StndAgtdHMKnwnLdr = 199,
	InCa_StndHMKnwn = 200,
	InCa_StndHMKnwnLdr = 201,
	InCa_StndLdr = 202,
	InCa_StndRsp = 203,
	InCa_StndLckDwnFlsAlrm = 204,
	InCa_VntTnt = 205,
	InCa_Brk2Civ = 206,
	InCa_Brk2Grd = 207,
	InCa_Brk2Rdo = 208,
	InCa_BrkAsk = 209,
	InCa_GhostAsk = 210,
	InCa_TriggerTheAlarm = 211,
	InCa_Xpln47Thief = 212,
	InCa_DstrssInv = 213,
	InCa_DstrssLdr = 214,
	InCa_DstrssInvLdr = 215,
	InCa_WakeAsk = 216,
	InCa_47Rcall = 217,
	InCa_WakerStnd = 218,
	InCa_ClsCmbtAck = 219,
	InCa_SeeDthInv = 220,
	InCa_SeeDthInvLdr = 221,
	InCa_SeeDthLdr = 222,
	InCa_XploInv = 223,
	InCa_XploInvLdr = 224,
	InCa_XploLdr = 225,
	InCa_AlarmAck = 226,
	InCa_GnShtInv = 227,
	InCa_GnShtInvLdr = 228,
	InCa_GnShtLdr = 229,
	InCa_RecurSvrInv = 230,
	InCa_RecurSvrInvLdr = 231,
	InCa_RecurSvrInvRsp = 232,
	InCa_RecurSvrLdr = 233,
	InCa_RecurSvrRsp = 234,
	InCa_LckDwnGtOutLdr = 235,
	InCa_LckDwnGtOutRsp = 236,
	InCa_LckDwnWrn1 = 237,
	InCa_LckDwnWrn2 = 238,
	InCa_LckDwnWrn3 = 239,
	InCa_LckDwnCivCmnt = 240,
	InCa_FrskAck = 241,
	InCa_Frsk = 242,
	InCa_FrskCln = 243,
	InCa_FrskWpn = 244,
	InCa_Xpln47Wpn = 245,
	InCa_XplnAccdnt = 246,
	InCa_XplnDedBdy = 247,
	InCa_XplnDedBdyMassive = 248,
	InCa_XplnDrgBdy = 249,
	InCa_XplnDstrss = 250,
	InCa_XplnExplo = 251,
	InCa_XplnGhost = 252,
	InCa_XplnGnsht = 253,
	InCa_XplnNkdBdy = 254,
	InCa_XplnPcfdBdy = 255,
	InCa_XplnSeeDth = 256,
	InCa_XplnTrspss = 257,
	InCa_XplnX = 258,
	InCa_XplnWpn = 259,
	InCa_XplnDsg = 260,
	InCa_XplnImposter = 261,
	InCa_XplnRecurSvr = 262,
	InCa_XplnRsp = 263,
	InCa_XplnAckRdo = 264,
	InCa_XplnKnckDwn = 265,
	InCa_XplnKnckDwnVctm = 266,
	InCa_XplnKnckDwnGhost = 267,
	InCa_XplnSeeStrngl = 268,
	InCa_XplnHuntTargetWin = 269,
	InCa_XplnHuntTargetFail = 270,
	InCa_VIPDownAck = 271,
	InCa_VIPKillAck = 272,
	Accdnt_Inv = 273,
	InDedBdy_BloodPllAck = 274,
	InDedBdy_Ack = 275,
	InDedBdy_NkdAck = 276,
	InDedBdy_Inv = 277,
	InDedBdy_BllPllRpt = 278,
	InDedBdy_Massive = 279,
	InDedBdy_PcfdInv = 280,
	InDedBdy_CntnAck = 281,
	InDedBdy_Stnd = 282,
	InDedBdy_CircleBdy = 283,
	InDedBdy_CivCmnt = 284,
	InDedBdy_PrmtrBrchWrn1 = 285,
	InDedBdy_PrmtrBrchWrn2 = 286,
	InDedBdy_47AsGrdAck = 287,
	InDedBdy_BodyGone = 288,
	InDedBdy_VctmRcvr = 289,
	InDedBdy_WakerWake = 290,
	InDedBdy_WakeRsp = 291,
	InDedBdy_WakeNkdLdr = 292,
	InDedBdy_WakeNkdRsp = 293,
	Rcvr_Xpln47 = 294,
	Rcvr_XplnDsg = 295,
	Rcvr_XplnKnckDwn = 296,
	InDsg_FllwWrn1 = 297,
	InDsg_FllwWrn2 = 298,
	InDsg_FllwWrn3 = 299,
	InDsg_Pzzl = 300,
	InDsg_Stnd = 301,
	InDsg_StndDistance = 302,
	InDsg_StndHidden = 303,
	InDsg_HdNPlnSght = 304,
	InDsg_FllwWrn1Ack = 305,
	InDsg_FllwWrn1BadAction = 306,
	InDsg_FllwWrn1Wpn = 307,
	InDsg_FllwWrn1BadSound = 308,
	InDsg_FllwWrnJoinr = 309,
	InDsg_FllwWrn1ShadyItem = 310,
	Trspss_Stnd = 311,
	Trspss_Wrn1 = 312,
	Trspss_Wrn2 = 313,
	Trspss_Wrn3 = 314,
	Trspss_Rsp = 315,
	Trspss_SrchAckLegal47 = 316,
	Trspss_EscortAck = 317,
	Trspss_EscortRequest = 318,
	Trspss_EscortRequestRepeat = 319,
	Trspss_EscortStayClose = 320,
	Trspss_EscortOk = 321,
	Trspss_EscortStnd = 322,
	Trspss_EscortArrest = 323,
	Trspss_EscortExit = 324,
	Trspss_EscortStayRequest = 325,
	InCu_Brk2Rdo = 326,
	InCu_CivCmnd = 327,
	InCu_Stnd = 328,
	InCu_CivRsp = 329,
	InCu_BackupRqst = 330,
	InCu_CrAlrmAck = 331,
	InCu_CrAlrmLdr = 332,
	InCu_CrAlrmStndRsp = 333,
	InCu_FtStpsAck = 334,
	InCu_FtStpsStnd = 335,
	InCu_PrpTssHearAck = 336,
	InCu_PrpTssHearInv = 337,
	InCu_PrpTssHearLdr = 338,
	InCu_PrpTssHearStndRsp = 339,
	InCu_PrpTssSeeAck = 340,
	InCu_PrpTssSeeInv = 341,
	InCu_PrpTssSeeLdr = 342,
	InCu_PrpTssSeeStndRsp = 343,
	InCu_RdoAck = 344,
	InCu_RdoInv = 345,
	InCu_RdoLdr = 346,
	InCu_RdoStndRsp = 347,
	InCu_WpnInv = 348,
	InCu_RecurAck = 349,
	InCu_RecurInv = 350,
	InCu_RecurLdr = 351,
	InCu_RecurRsp = 352,
	InCu_ItemAckLdr = 353,
	InCu_CrAlrmStndStndRsp = 354,
	InCu_EscrtTrgtRedLight = 355,
	InCu_EscrtTrgtGreenLight = 356,
	InSt_HMAglty = 357,
	InSt_HMBz = 358,
	InSt_HMBzStnd = 359,
	InSt_HMEntXit = 360,
	InSt_HMInCvr = 361,
	InSt_HMSnkng = 362,
	InSt_PrpTssSee = 363,
	InSt_Stnd = 364,
	InSt_Wrn = 365,
	InSt_HM2Cls = 366,
	InSt_SickAck = 367,
	InSt_AdiosRequest = 368,
	InSt_PQ = 369,
	FseBx_Fixed = 370,
	FseBx_Fixing = 371,
	FseBx_GoFix = 372,
	FseBx_SabAck = 373,
	Sentry_DenyEntry = 374,
	Sentry_Frsk = 375,
	Sentry_FrskRequest = 376,
	Sentry_ItemRequest = 377,
	Sentry_Accepted = 378,
	Sentry_FrskWpnAck = 379,
	Sentry_47LoiterAck = 380,
	Sentry_DenyDsg = 381,
	Sentry_PostCommentLdr = 382,
	Sentry_PostCommentRsp = 383,
	VIP_MssgnA_Ldr = 384,
	VIP_MssgnB_Rsp = 385,
	VIP_MssgnC_Ldr = 386,
	VIP_MssgnD_Rsp = 387,
	VIP_MssngCallOut = 388,
	Dth_Sick = 389,
	Dth_Poison = 390,
	Gen_Avoid = 391,
	Gen_CloseCall = 392,
	Gen_PhnPckUP = 393,
	Gen_PhoneActLockdown = 394,
	Cmbt_FlushOutLdr = 395,
	Cmbt_HMPrptssKnckOut = 396,
	InCa_FrskHeadsUpLdr = 397,
	InCa_FrskHeadsUpRdo = 398,
	InCa_XplnLOS = 399,
	InCa_XplnGotShot = 400,
	InDedBdy_CivCmntPhone = 401,
	InDedBdy_NoFaulVctmXpln = 402,
	InDsg_FllwWrn1Nkd = 403,
	Ar_BlameKnckDwnMelee = 404,
	Exp_Carry = 405,
	Exp_ClearThroat = 406,
	Exp_Cough = 407,
	Exp_Drink = 408,
	Exp_Exhale = 409,
	Exp_Idle = 410,
	Exp_Inhale = 411,
	Exp_InhaleFast = 412,
	Exp_Sniff = 413,
	Exp_Swallow = 414,
	Exp_Think = 415,
	Exp_Scared = 416,
	Exp_Gld = 417,
	Exp_Dsppntd = 418,
	Exp_InPain = 419,
	InCa_AckBdy = 420,
	InCa_AckBdyLdr = 421,
	InDedBdy_CivCmntPcfd = 422,
	InDedBdy_CivCmntPhonePcfd = 423,
	Gen_SocialAck = 424,
};

// 0x0000000142AE16A8 (Size: 0x1)
enum class SoundPlayState
{
	ePlaying = 0,
	eLoopBreaking = 1,
	eStopping = 2,
};

// 0x0000000142A82F90 (Size: 0x4)
enum class EActorRole
{
	eActorRole_Default = 0,
	eActorRole_Bodyguard = 1,
	eActorRole_VIP = 2,
};

// 0x0000000142A97F20 (Size: 0x4)
enum class ESpeechPriority
{
	SP_AMBIENT = 0,
	SP_ALERTED = 1,
	SP_PAIN = 2,
	SP_ALERTED_IMPORTANT = 3,
	SP_COMBAT = 4,
	SP_COMBAT_IMPORTANT = 5,
	SP_DEATH = 6,
	SP_MAX = 7,
	SP_COUNT__ = 8,
};

// 0x0000000142A98F10 (Size: 0x4)
enum class EHM5SoundFootstepStance
{
	EFSS_SNEAK = 0,
	EFSS_SNEAKRUN = 1,
	EFSS_WALKSLOWLY = 2,
	EFSS_WALK = 3,
	EFSS_RUN = 4,
	EFSS_ANY = 5,
};

// 0x0000000142A98D30 (Size: 0x4)
enum class EHUDMessageStatus
{
	HUD_MESSAGE_UNUSED = 0,
	HUD_MESSAGE_ATTACH = 1,
	HUD_MESSAGE_FADEIN = 2,
	HUD_MESSAGE_DISPLAY = 3,
	HUD_MESSAGE_FADEOUT = 4,
};

// 0x0000000142A94390 (Size: 0x4)
enum class EAccidentScaleContext
{
	eASC_Standard = 0,
	eASC_Unsafe = 1,
	eASC_Dangerous = 2,
};

// 0x0000000142A980A0 (Size: 0x4)
enum class ETakeDownState
{
	eTD_Cover = 0,
	eTD_Locomotion = 1,
	eTD_ChokeLoop = 2,
	eTD_ChokeFinish = 3,
	eTD_Deactivating = 4,
	eTD_Unknown = 5,
};

// 0x0000000142A96C80 (Size: 0x4)
enum class ECCDecalEffect
{
	eCCDecalEffect_None = 0,
	eCCDecalEffect_Stab = 1,
	eCCDecalEffect_Blunt1H = 2,
	eCCDecalEffect_Blunt2H = 3,
	eCCDecalEffect_Slash1H = 4,
	eCCDecalEffect_Shatter = 5,
	eCCDecalEffect_AxeCleave = 6,
	eCCDecalEffect_AxePull = 7,
	eCCDecalEffect_AxeSlitThroat = 8,
	eCCDecalEffect_SlitThroat = 9,
	eCCDecalEffect_FacePunch = 10,
	eCCDecalEffect_Bruise = 11,
};

// 0x0000000142A82E80 (Size: 0x4)
enum class EActorState
{
	AS_DEACTIVATED = 0,
	AS_ALIVE = 1,
	AS_DYING = 2,
	AS_DEAD = 3,
	AS_DISABLED = 4,
};

// 0x0000000142A96C98 (Size: 0x4)
enum class ECCEmitterEffect
{
	eCCEmitterEffect_None = 0,
	eCCEmitterEffect_Stab = 1,
	eCCEmitterEffect_Blunt1H = 2,
	eCCEmitterEffect_Blunt2H = 3,
	eCCEmitterEffect_Slash1H = 4,
	eCCEmitterEffect_Shatter = 5,
	eCCEmitterEffect_AxeCleave = 6,
	eCCEmitterEffect_AxePull = 7,
	eCCEmitterEffect_AxeSlitThroat = 8,
	eCCEmitterEffect_SlitThroat = 9,
	eCCEmitterEffect_FacePunch = 10,
	eCCEmitterEffect_Blood = 11,
};

// 0x0000000142AE16D8 (Size: 0x4)
enum class EDialogEventEndReason
{
	EDialogEvent_Completed = 0,
	EDialogEvent_Stopped = 1,
};

// 0x0000000142AF4888 (Size: 0x4)
enum class EConstraintType
{
	ECONSTRAINTTYPE_UNKNOWN = 0,
	ECONSTRAINTTYPE_BALL_AND_SOCKET = 1,
	ECONSTRAINTTYPE_HINGE = 2,
	ECONSTRAINTTYPE_FIXED = 3,
	ECONSTRAINTTYPE_DISTANCE = 4,
	ECONSTRAINTTYPE_D6 = 5,
};

// 0x0000000142A7B340 (Size: 0x4)
enum class ECollidablesType
{
	ECST_STATIC_AND_DYNAMIC = 0,
	ECST_STATIC_ONLY = 1,
	ECST_DYNAMIC_ONLY = 2,
};

// 0x0000000142A98970 (Size: 0x4)
enum class ERatingCategory
{
	ERatingCategory_Invalid = 0,
	ERatingCategory_Flawless = 1,
	ERatingCategory_Violence = 2,
	ERatingCategory_Cunning = 3,
	ERatingCategory_Noise = 4,
	ERatingCategory_COUNT = 5,
};

// 0x0000000142A7B508 (Size: 0x4)
enum class EGSKillSituation
{
	GSKILLSITUATION_UNKNOWN = 0,
	GSKILLSITUATION_CLOSECOMBAT = 1,
	GSKILLSITUATION_SILENT = 2,
	GSKILLSITUATION_ENVIRONMENT = 3,
	GSKILLSITUATION_ACTION = 4,
	GSKILLSITUATION_DEADLYTHROW = 5,
	GSKILLSITUATION_PULLTHROUGHWINDOW = 6,
	GSKILLSITUATION_PUSHOVERRAILING = 7,
	GSKILLSITUATION_PACIFY = 8,
	GSKILLSITUATION_FIBERWIRE = 9,
};

// 0x0000000142A98790 (Size: 0x4)
enum class EGSEvent
{
	GSEvent_StrayBullet = 0,
	GSEvent_TookDamage = 1,
	GSEvent_UsedCover = 2,
	GSEvent_UsedRun = 3,
	GSEvent_UsedEliminate = 4,
	GSEvent_UsedChokeOut = 5,
	GSEvent_UsedKnockOutByHand = 6,
	GSEvent_Pacified = 7,
	GSEvent_TargetPacified = 8,
	GSEvent_Recover = 9,
	GSEvent_CaughtArmed = 10,
	GSEvent_BodyFound = 11,
	GSEvent_InvestigateCurious = 12,
	GSEvent_NPCKilled = 13,
	GSEvent_KilledNPCHidden = 14,
	GSEvent_InvestigateCautious = 15,
	GSEvent_PrecisionAimedKill = 16,
	GSEvent_BlendInActivated = 17,
	GSEvent_PropKill = 18,
	GSEvent_SpottedThroughDisguise = 19,
	GSEvent_TakeOutNonLethal = 20,
	GSEvent_TargetKilled = 21,
	GSEvent_NonTargetKilled = 22,
	GSEvent_AllTargetsKilled = 23,
	GSEvent_AccidentKill = 24,
	GSEvent_ObjectiveUpdate = 25,
	GSEvent_TargetAccidentKill = 26,
	GSEvent_ObjectiveActivate = 27,
	GSEvent_Headshot = 28,
	GSEvent_Fiberwire = 29,
	GSEvent_UsedEliminateSilent = 30,
	GSEvent_ItemFound = 31,
	GSEvent_ItemStashed = 32,
	GSEvent_BodyBagPlaced = 33,
	GSEvent_Projectile_HeadShot = 34,
	GSEvent_Projectile_BodyShot = 35,
	GSEvent_Projectile_Crowd_HeadShot = 36,
	GSEvent_Projectile_Crowd_BodyShot = 37,
	GSEvent_Projectile_Missed = 38,
	GSEvent_Projectile_MultiKillTargets = 39,
};

// 0x0000000142A82FA8 (Size: 0x4)
enum class EActorFaction
{
	eActorFaction_Default = 0,
	eActorFaction_VIP_1 = 1,
	eActorFaction_VIP_2 = 2,
	eActorFaction_VIP_3 = 3,
	eActorFaction_VIP_4 = 4,
	eActorFaction_VIP_5 = 5,
	eActorFaction_VIP_6 = 6,
	eActorFaction_VIP_7 = 7,
};

// 0x0000000142A8D938 (Size: 0x4)
enum class EDramaEventAction
{
	eDEA_NONE = 0,
	eDEA_TERMINATE_DRAMA = 1,
	eDEA_DONE_DRAMA = 2,
	eDEA_STOP_BEHAVIOR = 4,
	eDEA_DONT_STOP_SPEAK = 8,
	eDEA_RESET_CASTING = 16,
	eDEA_RESET_STATE = 32,
};

// 0x0000000142A942B0 (Size: 0x4)
enum class ECompiledConditionType
{
	CT_IsCurrent = 0,
	CT_Current = 1,
	CT_IsExpired = 2,
	CT_HasGoal = 3,
	CT_HasGoalOnTarget = 4,
	CT_HasUnhandledGoal = 5,
	CT_MaxActorsWithGoal = 6,
	CT_MinExpired = 7,
	CT_MaxExpired = 8,
	CT_MinAge = 9,
	CT_MaxAge = 10,
	CT_IsSharedOlder = 11,
	CT_HasLongTermMemory = 12,
	CT_IsSharedEventCurrent = 13,
	CT_SharedEventCurrent = 14,
	CT_IsSharedEventExpired = 15,
	CT_MinSharedEventExpired = 16,
	CT_MaxSharedEventExpired = 17,
	CT_MinSharedEventAge = 18,
	CT_MaxSharedEventAge = 19,
	CT_IsNull = 20,
	CT_IsEqual = 21,
	CT_IsOfType = 22,
	CT_IsOfActorType = 23,
	CT_IsOfActorRank = 24,
	CT_IsOfActorRole = 25,
	CT_IsActorRoleBodyguard = 26,
	CT_IsActorRoleVIP = 27,
	CT_IsActorDeafBlind = 28,
	CT_IsActorAlive = 29,
	CT_IsActorConscious = 30,
	CT_HasConfiguredAct = 31,
	CT_HasConfiguredSpeak = 32,
	CT_IsConfiguredConditionTrue = 33,
	CT_HasTension = 34,
	CT_HasTensionOrHigher = 35,
	CT_IsAIModified = 36,
	CT_HasSameOutfit = 37,
	CT_IsLegal = 38,
	CT_IsItemLegalOnHitman = 39,
	CT_IsItemIllegalOnHitman = 40,
	CT_IsItemSuspiciousOnHitman = 41,
	CT_AreVisibleItemsLegal = 42,
	CT_AreVisibleItemsIllegal = 43,
	CT_AreVisibleItemsSuspicious = 44,
	CT_AreVisibleWeaponsLegal = 45,
	CT_AreVisibleWeaponsIllegal = 46,
	CT_AreVisibleWeaponsSuspicious = 47,
	CT_OnlyLegalWeaponsDropped = 48,
	CT_IllegalWeaponDropped = 49,
	CT_SuspiciousWeaponDropped = 50,
	CT_OnlyLegalItemsDropped = 51,
	CT_IllegalItemDropped = 52,
	CT_SuspiciousItemDropped = 53,
	CT_OnlyLegalWeaponsPickedUp = 54,
	CT_IllegalWeaponPickedUp = 55,
	CT_SuspiciousWeaponPickedUp = 56,
	CT_OnlyLegalItemsPickedUp = 57,
	CT_IllegalItemPickedUp = 58,
	CT_SuspiciousItemPickedUp = 59,
	CT_ThrownBy = 60,
	CT_GetItemBeingThrownBy = 61,
	CT_Owner = 62,
	CT_PreviousOwner = 63,
	CT_IsOwner = 64,
	CT_IsPreviousOwner = 65,
	CT_GetItemDroppedBy = 66,
	CT_CausedBy = 67,
	CT_BeingPickedUpBy = 68,
	CT_IsSuitcase = 69,
	CT_IsNotSuitcase = 70,
	CT_IsVisiblyPerceptible = 71,
	CT_HasCustomInvestigationAckSoundDef = 72,
	CT_FindStashPointsForItem = 73,
	CT_MinDistance = 74,
	CT_MaxDistance = 75,
	CT_MinActualDistance = 76,
	CT_MinActualDistance2D = 77,
	CT_MaxActualDistance = 78,
	CT_MaxActualDistance2D = 79,
	CT_ActualInsideSlice = 80,
	CT_MaxDistanceToKnownPosition = 81,
	CT_IsDistanceFromKnownToActualGreaterThan = 82,
	CT_IsDistanceFromKnownToActualLessThan = 83,
	CT_InSituation = 84,
	CT_IsActorInSituation = 85,
	CT_SituationTarget = 86,
	CT_SituationHuntTarget = 87,
	CT_IsSituationTarget = 88,
	CT_SituationFromActors = 89,
	CT_ActorsNotInSituation = 90,
	CT_SituationFromTarget = 91,
	CT_TargetsNotInSituation = 92,
	CT_MaxSituationAge = 93,
	CT_MinSituationAge = 94,
	CT_InPhase = 95,
	CT_MinPhaseAge = 96,
	CT_MaxPhaseAge = 97,
	CT_IsOrderInvalid = 98,
	CT_IsSituationOlderThanSharedEvent = 99,
	CT_HasOrder = 100,
	CT_HasPendingOrder = 101,
	CT_IsCombatDisabled = 102,
	CT_CanJoinSituation = 103,
	CT_InfectedMayFollowPlayer = 104,
	CT_CanDistractionEscalateTo = 105,
	CT_CanReactToDistractionType = 106,
	CT_CanInvestigateDistraction = 107,
	CT_IsCurrentDistractionTarget = 108,
	CT_IsNotCurrentDistractionTarget = 109,
	CT_IsHighestPriorityTypeToInvestigate = 110,
	CT_IsHighestPriorityTypeToInvestigateFor = 111,
	CT_IsHighestPriorityTypeToReact = 112,
	CT_HasBystanderSomethingElseToInvestigate = 113,
	CT_IsDistractionNewerThanCurrentOne = 114,
	CT_ShouldDistractionDiscardNewOcurrences = 115,
	CT_IsDistractionInterruptableByNewOcurrences = 116,
	CT_IsSameDistractionTypeAsTheCurrentOne = 117,
	CT_IsDistracted = 118,
	CT_HasCustomDistractionAckSoundDef = 119,
	CT_HasCustomDistractionStndSoundDef = 120,
	CT_PerceptibleEntityEndAfterReact = 121,
	CT_PerceptibleEntityEndAfterMoveTo = 122,
	CT_FindSuitcaseAssitanceForCivilian = 123,
	CT_FindSuitcaseAssitanceForSentry = 124,
	CT_IsValidForSuitcaseAssistance = 125,
	CT_SuitcaseAssistanceRequesterFaceToFace = 126,
	CT_SuitcaseAssistanceRequesterRadio = 127,
	CT_IsDistractionTargetBeingHandled = 128,
	CT_CanArrestReasonEscalateTo = 129,
	CT_IsHighestSeverityReasonToArrest = 130,
	CT_Breakpoint = 131,
	CT_Cooldown = 132,
	CT_Trigger = 133,
	CT_IsInSniperIsland = 134,
	CT_SituationIsType = 135,
	CT_IntRuntimeParamEqualsTo = 136,
	CT_IsNewArrestEnabled = 137,
	CT_IsDebugBuild = 138,
	CT_GetRandomFightTarget = 139,
	CT_IsCombatPositionActReady = 140,
	CT_CurrentSetpieceVisualDistractions = 141,
	CT_CurrentSetpieceSoundDistractions = 142,
	CT_AreBehaviorsDisabled = 143,
	CT_IsDifficultyEqual = 144,
	CT_IsDifficultyGreaterOrEqual = 145,
	CT_IsDifficultyLessOrEqual = 146,
	CT_IsSeasonTwoCombatEnabled = 147,
	CT_IsRealCombatSituation = 148,
	CT_RemoveSituationsWithDesiredNumberOfCombatants = 149,
	CT_RemoveCombatSituationsStandingDown = 150,
	CT_CombatSituationsWithDesiredNumberOfCombatants = 151,
	CT_CombatSituationsThatCanDiscardCombatants = 152,
	CT_CombatSituationsStandingDown = 153,
	CT_HasCombatFightOrder = 154,
	CT_IsAccidentDeathContext = 155,
	CT_IsAccidentScaleContext = 156,
	CT_IsAccidentVictimDisposable = 157,
	CT_IsAccidentBystandingGuardSearching = 158,
};

// 0x0000000142A926F0 (Size: 0x4)
enum class EVRConfigCapsuleGridSize
{
	EVRCCGS_RegularGrid = 0,
	EVRCCGS_SmallGrid = 1,
};

// 0x0000000142A8E618 (Size: 0x4)
enum class ECharacterResourceType
{
	eSMT_Invalid = 0,
	eSMT_FullBody = 1,
	eSMT_RightHand = 2,
	eSMT_LeftHand = 3,
};

// 0x0000000142A82FF0 (Size: 0x4)
enum class EActorCCPreset
{
	ACCP_CivilianFemale = 0,
	ACCP_CivilianeMale = 1,
	ACCP_GuardMale = 2,
	ACCP_GuardMaleElite = 3,
	ACCP_GuardMaleSuperElite = 4,
	ACCP_Ignore = 5,
	ACCP_None = 6,
};

// 0x0000000142AE15B8 (Size: 0x1)
enum class AudioEventCullingBehavior
{
	AutoSendStop = 0,
	AutoSendStopAfterTriggered = 1,
	NoAutoSendStop = 2,
	NoDistanceCulling = 3,
};

// 0x0000000142A83180 (Size: 0x4)
enum class EConversationRole
{
	eCR_Leader = 0,
	eCR_Assistant = 1,
};

// 0x0000000142AA9DF8 (Size: 0x4)
enum class EIKEndEffector
{
	BEE_Pelvis = 0,
	BEE_SpineOrigin = 1,
	BEE_SpineEnd = 2,
	BEE_Head = 3,
	BEE_LeftUpperArm = 4,
	BEE_RightUpperArm = 5,
	BEE_LeftForeArm = 6,
	BEE_RightForeArm = 7,
	BEE_LeftHand = 8,
	BEE_LeftHandThumb = 9,
	BEE_LeftHandIndex = 10,
	BEE_LeftHandMiddle = 11,
	BEE_LeftHandRing = 12,
	BEE_LeftHandPinky = 13,
	BEE_RightHand = 14,
	BEE_RightHandThumb = 15,
	BEE_RightHandIndex = 16,
	BEE_RightHandMiddle = 17,
	BEE_RightHandRing = 18,
	BEE_RightHandPinky = 19,
	BEE_LeftFoot = 20,
	BEE_RightFoot = 21,
	BEE_LeftToe = 22,
	BEE_RightToe = 23,
	BEE_Count = 24,
};

// 0x0000000142A97B70 (Size: 0x4)
enum class EActorLookAtStopReason
{
	eSR_Unknown = 0,
	eSR_Disabled = 1,
	eSR_DurationExpired = 2,
	eSR_OutOfRange = 3,
	eSR_OutOfSight = 4,
	eSR_OutOfRemainingPathDistance = 5,
	eSR_Interrupted = 6,
	eSR_TargetRemoved = 7,
	eSR_HigherPriorityProfile = 8,
	eSR_HideInPlainSight = 9,
};

// 0x0000000142AB1F58 (Size: 0x4)
enum class EAmmoBehaviourConfigType
{
	eAB_None = 0,
	eAB_Explosive = 1,
	eAB_Penetration = 2,
};

// 0x0000000142AF4678 (Size: 0x1)
enum class ECollisionPriority
{
	ECOLLISIONPRIORITY_LOW = 0,
	ECOLLISIONPRIORITY_NORMAL = 1,
	ECOLLISIONPRIORITY_HIGH = 2,
	ECOLLISIONPRIORITY_CRITICAL = 3,
};

// 0x0000000142AF3310 (Size: 0x1)
enum class ENetRole
{
	None = 0,
	Master = 1,
	Client = 2,
};

// 0x0000000142A90638 (Size: 0x4)
enum class ETextAlignment
{
	TEXT_ALIGN_LEFT = 0,
	TEXT_ALIGN_CENTER = 1,
	TEXT_ALIGN_RIGHT = 2,
};

// 0x00000001422CA490 (Size: 0x4)
enum class EAIEventType
{
	AIET_None = 0,
	AIET_Ignore = 1,
	AIET_PreventAutoPurge = 2,
	AIET_ShootTarget = 3,
	AIET_Hunting = 4,
	AIET_Order_Target = 5,
	AIET_END_BOOLEAN_EVENTS = 6,
	AIET_LookedAt = 7,
	AIET_Killer = 8,
	AIET_Strangler = 9,
	AIET_Suspicious = 10,
	AIET_KnownBody = 11,
	AIET_KnownBodyIsFoundOutsideNavmeshAndIgnored = 12,
	AIET_KnownBodyIsHandled = 13,
	AIET_KnownBodybag = 14,
	AIET_KnownBodybagIsHandled = 15,
	AIET_Dead = 16,
	AIET_DisguiseSuspicious = 17,
	AIET_DamagingMe = 18,
	AIET_KnownInCloset = 19,
	AIET_KnownInNpcUnreachableArea = 20,
	AIET_Sense = 21,
	AIET_HasBeenInCombat = 22,
	AIET_ReportedByCamera = 23,
	AIET_SOUNDEVENTS_LOW_LOUDNESS_BEGIN = 24,
	AIET_SoundFootsteps = 25,
	AIET_SoundThrownItemCollision = 26,
	AIET_SoundGunSilenced = 27,
	AIET_SoundHitmanGunSilenced = 28,
	AIET_SoundLegalGunSilenced = 29,
	AIET_SoundLegalHitmanGunSilenced = 30,
	AIET_SoundEmptyGun = 31,
	AIET_SoundCCBreakNeck = 32,
	AIET_SoundCCChoke = 33,
	AIET_SoundCCFiberwire = 34,
	AIET_SoundBulletImpact = 35,
	AIET_SoundLegalBulletImpact = 36,
	AIET_SoundSpeakWarning = 37,
	AIET_SoundSpeakAngry = 38,
	AIET_SOUNDEVENTS_NORMAL_LOUDNESS_BEGIN = 39,
	AIET_SoundRadio = 40,
	AIET_SoundAlarm = 41,
	AIET_SoundSpeakPainBehind = 42,
	AIET_SoundCloseCombat = 43,
	AIET_SoundSpeakPain = 44,
	AIET_SoundSetpiece = 45,
	AIET_SOUNDEVENTS_LOUD_LOUDNESS_BEGIN = 46,
	AIET_SoundSpeakHelp = 47,
	AIET_SoundSpeakHelpLoud = 48,
	AIET_SoundGunShot = 49,
	AIET_SoundHitmanGunShot = 50,
	AIET_SoundLegalGunShot = 51,
	AIET_SoundLegalHitmanGunShot = 52,
	AIET_SoundExplosion = 53,
	AIET_SoundAccident = 54,
	AIET_SoundCurious = 55,
	AIET_SoundCuriousItem = 56,
	AIET_SoundInteresting = 57,
	AIET_SoundCrowdCurious = 58,
	AIET_SoundCrowdAlerted = 59,
	AIET_SoundCrowdWantsArrest = 60,
	AIET_SoundCrowdWantsArrestKiller = 61,
	AIET_SOUNDEVENTS_END = 62,
	AIET_SightReaction = 63,
	AIET_SightInvestigation = 64,
	AIET_PerceptibleEntityAware = 65,
	AIET_InSight = 66,
	AIET_SlowMovementInVegetationInSight = 67,
	AIET_MediumMovementInVegetationInSight = 68,
	AIET_FastMovementInVegetationInSight = 69,
	AIET_VisualSetpiece = 70,
	AIET_DirectSetpiece = 71,
	AIET_Sick = 72,
	AIET_MyFlashGrenadeExploded = 73,
	AIET_StunnedByFlashGrenade = 74,
	AIET_WasSlapped = 75,
	AIET_Attention_Stage_1 = 76,
	AIET_Attention_Stage_2 = 77,
	AIET_AttentionFading = 78,
	AIET_FullAttention = 79,
	AIET_FullDisguiseAttention = 80,
	AIET_ReactedTo = 81,
	AIET_ReactTarget = 82,
	AIET_ReactSuppressed = 83,
	AIET_StanddownHolster = 84,
	AIET_ForcedIllegal = 85,
	AIET_HitByItem = 86,
	AIET_HitByCoin = 87,
	AIET_LTHitByItemOrCoin = 88,
	AIET_HitByItemOrCoinTwice = 89,
	AIET_HitByThis = 90,
	AIET_SeenInAccident = 91,
	AIET_Trespassing_Strike_1 = 92,
	AIET_Trespassing_Strike_2 = 93,
	AIET_Trespassing_Strike_3 = 94,
	AIET_DistractedByMovementInVegetation_Once = 95,
	AIET_DistractedByMovementInVegetation_Twice = 96,
	AIET_Investigate_Strike_1 = 97,
	AIET_Investigate_Strike_2 = 98,
	AIET_DisguiseEnforcer = 99,
	AIET_Suspect = 100,
	AIET_InSentryZone = 101,
	AIET_MySentryZone = 102,
	AIET_TriggerAlarm = 103,
	AIET_LockdownIntruder = 104,
	AIET_AccuseUnconscious = 105,
	AIET_HasKnockMeDown = 106,
	AIET_HasKnockSomeoneDown = 107,
	AIET_InMyPrivateArea = 108,
	AIET_KnownNaked = 109,
	AIET_KnownDraggingBodybag = 110,
	AIET_InvestigateOrder = 111,
	AIET_ReactedSurprised = 112,
	AIET_ReportGotShot = 113,
	AIET_HasReportedDeadBodySituation = 114,
	AIET_Social_TooClose = 115,
	AIET_Social_Privacy = 116,
	AIET_Social_Silly = 117,
	AIET_ReactedToSituation = 118,
	AIET_SeeAttached = 119,
	AIET_WasInvisible = 120,
	AIET_BlameHitman = 121,
	AIET_BlamedByUnconscious = 122,
	AIET_DontCareAboutBlaming = 123,
	AIET_Combat_PropagatedBy = 124,
	AIET_Combat_WithinPropagationField = 125,
	AIET_Combat_MarkedAsDiscardable = 126,
	AIET_Combat_AttackWitness = 127,
	AIET_Combat_HomingAttackOrigin = 128,
	AIET_Combat_VIPWasAttackedFromPosition = 129,
	AIET_ReactedToSniperKnowledge = 130,
	AIET_SniperCombatTarget = 131,
	AIET_SniperCombatAimTarget = 132,
	AIET_CantReachTarget = 133,
	AIET_HuntingSniper = 134,
	AIET_NeedCover = 135,
	AIET_WaitingForSniper = 136,
	AIET_HeardSniperShooting = 137,
	AIET_KnownHidden = 138,
	AIET_SituationTarget = 139,
	AIET_TalkingToHitman = 140,
	AIET_SuspiciousAction = 141,
	AIET_RadioCallHelpingActor = 142,
	AIET_WeaponContextKnown = 143,
	AIET_IdleStandDown = 144,
	AIET_IgnoreInvestigation = 145,
	AIET_NewDisguiseTarget = 146,
	AIET_SocialTarget = 147,
	AIET_SecurityCamBroken = 148,
	AIET_HeWoundedMeLongDistance = 149,
	AIET_HeWoundedMeShortDistance = 150,
	AIET_HeWoundedMeCC = 151,
	AIET_HeAimedAtMe = 152,
	AIET_BumpedIntoMe = 153,
	AIET_ReactToDistraction = 154,
	AIET_MovingToTarget = 155,
	AIET_ReachedTarget = 156,
	AIET_DistractionChainPart = 157,
	AIET_NewDistractionChainPart = 158,
	AIET_ChainFixed = 159,
	AIET_SurprisePlayed = 160,
	AIET_NewDistraction = 161,
	AIET_WasSilly = 162,
	AIET_Distraction_My_Leader = 163,
	AIET_Distraction_My_Assistant = 164,
	AIET_Distraction_Was_My_Assistant = 165,
	AIET_AssitingWithSuitcase = 166,
	AIET_SuitcaseAssistanceFaceToFace = 167,
	AIET_SuitcaseAssistanceRadio = 168,
	AIET_SC_CombatPosition = 169,
	AIET_SC_CombatPositionMove = 170,
	AIET_SC_CombatPositionFight = 171,
	AIET_SC_PreventMovingThere = 172,
	AIET_SC_JumpyReaction = 173,
	AIET_DISTRACTION_TYPES_START = 174,
	AIET_SeeInCoverDistraction = 175,
	AIET_SeeSneakingDistraction = 176,
	AIET_SeeStunnedDistraction = 177,
	AIET_SeeSickDistraction = 178,
	AIET_LegalItemDroppedDistraction = 179,
	AIET_IllegalItemDroppedDistraction = 180,
	AIET_BumpedDistraction = 181,
	AIET_SightReactionDistraction = 182,
	AIET_SightInvestigationDistraction = 183,
	AIET_HearItemImpactDistraction = 184,
	AIET_SeeCuriousPerceptibleDistraction = 185,
	AIET_SeeCuriousItemDistraction = 186,
	AIET_SeeFlyingItemDistraction = 187,
	AIET_SeeThrowingDistraction = 188,
	AIET_HitBySomethingDistraction = 189,
	AIET_HearFootstepsDistraction = 190,
	AIET_SeeAgility = 191,
	AIET_SeeAgility_Vault = 192,
	AIET_SeeAgility_Window = 193,
	AIET_SeeHidding = 194,
	AIET_HearStrangeSound = 195,
	AIET_HearAlarm = 196,
	AIET_HearRadio = 197,
	AIET_HearAngry = 198,
	AIET_HearHelp = 199,
	AIET_HearAccident = 200,
	AIET_HearCuriousCrowd = 201,
	AIET_HearBulletImpact = 202,
	AIET_HearPain = 203,
	AIET_HearCuriousSound = 204,
	AIET_HearCuriousItemSound = 205,
	AIET_SecurityCameraBroken = 206,
	AIET_SetpieceDistractionDefault = 207,
	AIET_SeeItemTossDistraction = 208,
	AIET_SetpieceDistractionDoor = 209,
	AIET_SetpieceDistractionExperimental1 = 210,
	AIET_SetpieceDistractionExperimental2 = 211,
	AIET_SeeSuitcaseDistraction = 212,
	AIET_Distraction_Silly = 213,
	AIET_Distraction_TooClose = 214,
	AIET_Distraction_Privacy = 215,
	AIET_Distraction_MovementInVegetationBrief = 216,
	AIET_Distraction_MovementInVegetationCurious = 217,
	AIET_DISTRACTION_TYPES_END = 218,
	AIET_ARREST_REASONS_START = 219,
	AIET_ArrestReason_IllegalItem = 220,
	AIET_ArrestReason_DragBody = 221,
	AIET_ArrestReason_KnockDown = 222,
	AIET_ARREST_REASONS_END = 223,
	AIET_END_NORMAL_EVENTS = 224,
	AIET_DEBUG_EVENTS_START = 225,
	AIET_Debug_ThrowFlashbangHere = 226,
	AIET_DEBUG_EVENTS_END = 227,
};

// 0x0000000142A97720 (Size: 0x4)
enum class ESoundMaterialType
{
	eGeneric = 0,
	eFlesh = 1,
	eSilent = 2,
};

// 0x0000000142A97AB0 (Size: 0x4)
enum class EParticleDecalSpawnEntity_Constraints
{
	FACTOR_AND_RANDOMIZE = 0,
	SIZE_RANGE = 1,
};

// 0x0000000142A7B6F8 (Size: 0x4)
enum class EActionType
{
	AT_INVALID = 0,
	AT_OPENDOOR = 1,
	AT_CLOSEDOOR = 2,
	AT_PICKUP = 4,
	AT_GENERIC = 8,
	AT_REMOTE = 16,
	AT_OUTFIT = 32,
	AT_CLOTHBUNDLE = 64,
	AT_DRAGBODY = 128,
	AT_RETRIEVE_ITEM_FROM_CONTAINER = 256,
	AT_HERO_MOVEMENT = 1024,
	AT_SWAPITEM = 2048,
	AT_DUMPBODY = 4096,
	AT_COUP_DE_GRACE = 8192,
	AT_INTERACTION_GROUP = 16384,
	AT_USE_NORMAL = 32768,
	AT_STASHPOINT_PICKUP = 65536,
	AT_ENTERCLOSET = 131072,
	AT_EXITCLOSET = 262144,
	AT_ENTERSAFEZONE = 524288,
	AT_EXITSAFEZONE = 1048576,
	AT_CANCEL = 2097152,
	AT_CONTAINERFLUSHBODY = 4194304,
	AT_PLACE_ITEM_IN_CONTAINER = 16777216,
	AT_USE_DOWN = 33554432,
	AT_USE_HOLD = 67108864,
	AT_CONTEXTACTION = 134217728,
	AT_INTERRUPTIBLE_TAP = 268435456,
	AT_ITEMCONTAINER = 536870912,
	AT_USE_QUICK = 1073741824,
	AT_ITEM_INTERACTION = -2147483648,
};

// 0x00000001422CA0B8 (Size: 0x4)
enum class ECCWeaponAnimSet
{
	AS_SLIT_THROAT_1H = 0,
	AS_SWING_1H = 1,
	AS_BASH_1H = 2,
	AS_STAB_1H = 3,
	AS_SYRINGE_1H = 4,
	AS_SMASH_1H = 5,
	AS_STRANGLE = 6,
	AS_SWING_2H = 7,
	AS_BASH_2H = 8,
	AS_STAB_2H = 9,
	AS_STRANGLE_2H = 10,
	AS_SWORD_1H = 11,
	AS_AXE = 12,
};

// 0x0000000142A79EC0 (Size: 0x4)
enum class ECompiledBehaviorType
{
	BT_ConditionScope = 0,
	BT_Random = 1,
	BT_Match = 2,
	BT_Sequence = 3,
	BT_BEHAVIORS_BEGIN = 4,
	BT_Dummy = 4,
	BT_Dummy2 = 5,
	BT_Error = 6,
	BT_Wait = 7,
	BT_WaitForStanding = 8,
	BT_WaitBasedOnDistanceToTarget = 9,
	BT_WaitForItemHandled = 10,
	BT_AbandonOrder = 11,
	BT_CompleteOrder = 12,
	BT_PlayAct = 13,
	BT_ConfiguredAct = 14,
	BT_PlayReaction = 15,
	BT_SimpleReaction = 16,
	BT_SituationAct = 17,
	BT_SituationApproach = 18,
	BT_SituationGetHelp = 19,
	BT_SituationFace = 20,
	BT_SituationConversation = 21,
	BT_Holster = 22,
	BT_SpeakWait = 23,
	BT_SpeakWaitWithFallbackIfAlone = 24,
	BT_ConfiguredSpeak = 25,
	BT_ConditionedConfiguredSpeak = 26,
	BT_ConditionedConfiguredAct = 27,
	BT_SpeakCustomOrDefaultDistractionAckSoundDef = 28,
	BT_SpeakCustomOrDefaultDistractionInvestigationSoundDef = 29,
	BT_SpeakCustomOrDefaultDistractionStndSoundDef = 30,
	BT_Pickup = 31,
	BT_Drop = 32,
	BT_PlayConversation = 33,
	BT_PlayAnimation = 34,
	BT_MoveToLocation = 35,
	BT_MoveToTargetKnownPosition = 36,
	BT_MoveToTargetActualPosition = 37,
	BT_MoveToInteraction = 38,
	BT_MoveToNPC = 39,
	BT_FollowTargetKnownPosition = 40,
	BT_FollowTargetActualPosition = 41,
	BT_PickUpItem = 42,
	BT_GrabItem = 43,
	BT_PutDownItem = 44,
	BT_Search = 45,
	BT_LimitedSearch = 46,
	BT_MoveTo = 47,
	BT_Reposition = 48,
	BT_SituationMoveTo = 49,
	BT_FormationMove = 50,
	BT_SituationJumpTo = 51,
	BT_AmbientWalk = 52,
	BT_AmbientStand = 53,
	BT_CrowdAmbientStand = 54,
	BT_AmbientItemUse = 55,
	BT_AmbientLook = 56,
	BT_Act = 57,
	BT_Patrol = 58,
	BT_MoveToPosition = 59,
	BT_AlertedStand = 60,
	BT_AlertedDebug = 61,
	BT_AttentionToPerson = 62,
	BT_StunnedByFlashGrenade = 63,
	BT_CuriousIdle = 64,
	BT_InvestigateWeapon = 65,
	BT_DeliverWeapon = 66,
	BT_RecoverUnconscious = 67,
	BT_GetOutfit = 68,
	BT_RadioCall = 69,
	BT_EscortOut = 70,
	BT_StashItem = 71,
	BT_CautiousSearchPosition = 72,
	BT_LockdownWarning = 73,
	BT_WakeUpUnconscious = 74,
	BT_DeadBodyInvestigate = 75,
	BT_GuardDeadBody = 76,
	BT_DragDeadBody = 77,
	BT_CuriousBystander = 78,
	BT_DeadBodyBystander = 79,
	BT_StandOffArrest = 80,
	BT_StandOffReposition = 81,
	BT_StandAndAim = 82,
	BT_CloseCombat = 83,
	BT_MoveToCloseCombat = 84,
	BT_MoveAwayFromCloseCombat = 85,
	BT_CoverFightSeasonTwo = 86,
	BT_ShootFromPosition = 87,
	BT_StandAndShoot = 88,
	BT_CheckLastPosition = 89,
	BT_ProtoSearchIdle = 90,
	BT_ProtoApproachSearchArea = 91,
	BT_ProtoSearchPosition = 92,
	BT_ShootTarget = 93,
	BT_TriggerAlarm = 94,
	BT_MoveInCover = 95,
	BT_MoveToCover = 96,
	BT_HomeAttackOrigin = 97,
	BT_Shoot = 98,
	BT_Aim = 99,
	BT_MoveToRandomNeighbourNode = 100,
	BT_MoveToRandomNeighbourNodeAiming = 101,
	BT_MoveToAndPlayCombatPositionAct = 102,
	BT_MoveToAimingAndPlayCombatPositionAct = 103,
	BT_PlayJumpyReaction = 104,
	BT_JumpyInvestigation = 105,
	BT_AgitatedPatrol = 106,
	BT_AgitatedGuard = 107,
	BT_HeroEscort = 108,
	BT_Escort = 109,
	BT_ControlledFormationMove = 110,
	BT_EscortSearch = 111,
	BT_LeadEscort = 112,
	BT_LeadEscort2 = 113,
	BT_AimReaction = 114,
	BT_FollowHitman = 115,
	BT_RideTheLightning = 116,
	BT_Scared = 117,
	BT_Flee = 118,
	BT_AgitatedBystander = 119,
	BT_SentryFrisk = 120,
	BT_SentryIdle = 121,
	BT_SentryWarning = 122,
	BT_SentryCheckItem = 123,
	BT_VIPScared = 124,
	BT_VIPSafeRoomTrespasser = 125,
	BT_DefendVIP = 126,
	BT_CautiousVIP = 127,
	BT_CautiousGuardVIP = 128,
	BT_InfectedConfused = 129,
	BT_EnterInfected = 130,
	BT_CureInfected = 131,
	BT_SickActInfected = 132,
	BT_Smart = 133,
	BT_Controlled = 134,
	BT_SpeakTest = 135,
	BT_Conversation = 136,
	BT_RunToHelp = 137,
	BT_WaitForDialog = 138,
	BT_WaitForConfiguredAct = 139,
	BT_TestFlashbangGrenadeThrow = 140,
	BT_BEHAVIORS_END = 141,
	BT_COMMANDS_BEGIN = 142,
	BT_RenewEvent = 142,
	BT_ExpireEvent = 143,
	BT_ExpireEvents = 144,
	BT_SetEventHandled = 145,
	BT_RenewSharedEvent = 146,
	BT_ExpireSharedEvent = 147,
	BT_ExpireAllEvents = 148,
	BT_CreateOrJoinSituation = 149,
	BT_JoinSituation = 150,
	BT_ForceActorToJoinSituation = 151,
	BT_JoinSituationWithActor = 152,
	BT_LeaveSituation = 153,
	BT_Escalate = 154,
	BT_GotoPhase = 155,
	BT_RenewGoal = 156,
	BT_ExpireGoal = 157,
	BT_RenewGoalOf = 158,
	BT_ExpireGoalOf = 159,
	BT_SetTension = 160,
	BT_TriggerSpotted = 161,
	BT_CopyKnownLocation = 162,
	BT_UpdateKnownLocation = 163,
	BT_TransferKnownObjectPositions = 164,
	BT_WitnessAttack = 165,
	BT_Speak = 166,
	BT_StartDynamicEnforcer = 167,
	BT_StopDynamicEnforcer = 168,
	BT_StartRangeBasedDynamicEnforcer = 169,
	BT_StopRangeBasedDynamicEnforcerForLocation = 170,
	BT_StopRangeBasedDynamicEnforcer = 171,
	BT_SetDistracted = 172,
	BT_IgnoreAllDistractionsExceptTheNewest = 173,
	BT_IgnoreDistractions = 174,
	BT_PerceptibleEntityNotifyWillReact = 175,
	BT_PerceptibleEntityNotifyReacted = 176,
	BT_PerceptibleEntityNotifyInvestigating = 177,
	BT_PerceptibleEntityNotifyInvestigated = 178,
	BT_PerceptibleEntityNotifyTerminate = 179,
	BT_LeaveDistractionAssistantRole = 180,
	BT_LeaveDistractionAssitingGuardRole = 181,
	BT_RequestSuitcaseAssistanceOverRadio = 182,
	BT_RequestSuitcaseAssistanceFaceToFace = 183,
	BT_ExpireArrestReasons = 184,
	BT_SetDialogSwitch_NPCID = 185,
	BT_InfectedAssignToFollowPlayer = 186,
	BT_InfectedRemoveFromFollowPlayer = 187,
	BT_Log = 188,
	BT_COMMANDS_END = 189,
	BT_Invalid = 190,
};

// 0x0000000142A945A0 (Size: 0x4)
enum class EActorSecondaryIconState
{
	eSIS_Clear = 0,
	eSIS_Infected = 1,
	eSIS_Infected_Stage1 = 2,
	eSIS_Infected_Stage2 = 3,
	eSIS_Infected_Stage3 = 4,
};

// 0x0000000142AE21C8 (Size: 0x4)
enum class CrowdRegionType
{
	CROWDSPHERE_NONE = 0,
	CROWDSPHERE_SAFE = 1,
	CROWDSPHERE_POI = 2,
	CROWDSPHERE_AVOID = 3,
	CROWDSPHERE_RELOCATE = 4,
	CROWDSPHERE_STOP = 5,
	CROWDSPHERE_ALERT = 6,
	CROWDSPHERE_SCARE = 7,
	CROWDSPHERE_GETDOWN = 8,
	CROWDSPHERE_DIE = 9,
};

// 0x0000000142AE2180 (Size: 0x4)
enum class ESpeed
{
	eSpeed_Idle = 0,
	eSpeed_Slow = 1,
	eSpeed_Normal = 2,
	eSpeed_Fast = 3,
	eSpeed_Sprint = 4,
};

// 0x0000000142AB0BA8 (Size: 0x4)
enum class ETimerEntityCommandType
{
	ETECT_Add = 0,
	ETECT_Remove = 1,
	ETECT_Reset = 2,
};

// 0x0000000142A9FAF8 (Size: 0x4)
enum class EVsGenericEvent
{
	eVSGE_MATCH_WON = 0,
	eVSGE_MATCH_LOST = 1,
	eVSGE_MATCH_DRAW = 2,
	eVSGE_TARGET_LEAVING = 3,
	eVSGE_TARGET_LEFT = 4,
	eVSGE_TARGET_ARRIVING = 5,
	eVSGE_TARGET_ARRIVED = 6,
	eVSGE_RESPAWNED = 7,
	eVSGE_OPPONENT_DEAD = 8,
	eVSGE_OPPONENT_RESPAWNED = 9,
	eVSGE_OPPONENT_GOT_WEAPON = 10,
	eVSGE_OPPONENT_GOT_ITEM = 11,
	eVSGE_OPPONENT_DISGUISED = 12,
	eVSGE_TARGET_MISSED = 13,
	eVSGE_NEXT_TARGET_MISSED = 14,
	eVSGE_OPPONENT_TARGET_MISSED = 15,
	eVSGE_OPPONENT_NEXT_TARGET_MISSED = 16,
	eVSGE_OPPONENT_FAR_FROM_TARGET = 17,
	eVSGE_OPPONENT_CLOSE_FROM_TARGET = 18,
	eVSGE_OPPONENT_SCOPES_TARGET = 19,
	eVSGE_MAX = 20,
};

// 0x0000000142A98E50 (Size: 0x4)
enum class ESynchronisedActionState
{
	eSAS_INACTIVE = 0,
	eSAS_WAITING_TO_EXECUTE = 1,
	eSAS_COOLINGDOWN = 2,
};

// 0x0000000142AB1EF8 (Size: 0x4)
enum class EItemMeleeDamageBehavior
{
	EIMDB_Undefined = 0,
	EIMDB_Bouncing = 1,
	EIMDB_Slashing = 2,
	EIMDB_Sticking = 3,
};

// 0x0000000142A96010 (Size: 0x4)
enum class EAgilityState
{
	eAgState_JumpToHangFromLocomotion = 0,
	eAgState_ClimbOnToLedgeFromLocomotion = 1,
	eAgState_ClimbToHangFromLocomotion = 2,
	eAgState_WalkOnFromLocomotion = 3,
	eAgState_WalkOffToLocomoton = 4,
	eAgState_PullUpToLedgeWalk = 5,
	eAgState_PullUpToLocomotion = 6,
	eAgState_LedgeJumpOffToLocomotion = 7,
	eAgState_VaultOverLedgeFromCover = 8,
	eAgState_ClimbOnToLedgeFromCover = 9,
	eAgState_LedgeHangDefault = 10,
	eAgState_LedgeWalkDefault = 11,
	eAgState_TransLedgeHangDownToWalk = 12,
	eAgState_TransLedgeHangUpToWalk = 13,
	eAgState_TransLedgeWalkDownToHang = 14,
	eAgState_TransLedgeWalkUpToHang = 15,
	eAgState_TransLedgeHangUpToRail = 16,
	eAgState_TransLedgeHangToLocomotion = 17,
	eAgState_TransLedgeWalkToLocomotion = 18,
	eAgState_LedgeHangJumpLeft = 19,
	eAgState_LedgeHangJumpRight = 20,
	eAgState_LedgeWalkJumpLeft = 21,
	eAgState_LedgeWalkJumpRight = 22,
	eAgState_SneakPastWindowLeftToRight = 23,
	eAgState_SneakPastWindowRightToLeft = 24,
	eAgState_ClimbWindowFromLedgeToLocomotion = 25,
	eAgState_ClimbWindowFromLocomotionToLedge = 26,
	eAgState_ClimbWindowFromLocomotionToLocomotion = 27,
	eAgState_ClimbWindowFromCoverToLocomotion = 28,
	eAgState_ClimbWindowFromCoverToLedge = 29,
	eAgState_ClimbOnToLedgeFromDrainPipe = 30,
	eAgState_ClimbToHangFromDrainPipe = 31,
	eAgState_ClimbToWalkFromDrainPipeLeft = 32,
	eAgState_ClimbToWalkFromDrainPipeRight = 33,
	eAgState_Deactivate = 34,
	eAgState_Unknown = 35,
};

// 0x0000000142AF5648 (Size: 0x4)
enum class ERayType
{
	ERAY_CLOSESTHIT_SIMPLE = 0,
	ERAY_CLOSESTHIT_DETAILED = 1,
};

// 0x0000000142AE47C8 (Size: 0x4)
enum class ESmoothingMode
{
	ESM_LINEAR = 0,
	ESM_EXPONENTIAL = 1,
};

// 0x0000000142A8BBE0 (Size: 0x4)
enum class ESituationStateChangeReason
{
	eSSCR_NONE = 0,
	eSSCR_C_DIED = 16,
	eSSCR_C_DEACTIVATED = 32,
	eSSCR_C_CONTROLLED = 64,
	eSSCR_C_CLOSE_COMBAT = 128,
	eSSCR_C_HERO_ACTION = 256,
	eSSCR_C_PACIFIED = 512,
	eSSCR_CL_CHILD_DRAMA = 1024,
	eSSCR_CL_OTHER_DRAMA = 2048,
	eSSCR_CL_SYSTEMIC = 4096,
	eSSCR_S_DISABLED = 8192,
	eSSCR_S_DONE = 16384,
	eSSCR_S_TERMINATED = 32768,
	eSSCR_S_STARTED = 65536,
	eSSCR_S_RESUMING = 131072,
	eSSCR_S_UNPAUSE = 262144,
	eSSCR_R_RESOURCE_UNAVAILABLE = 524288,
	eSSCR_PAUSED_FROM_PLAYING = 1048576,
	eSSCR_PAUSED_FROM_RESUMING = 2097152,
};

// 0x00000001422CA760 (Size: 0x4)
enum class EAttachLocation
{
	eALRightHand = 0,
	eALLeftHand = 1,
	eALFreeBone = 2,
	eALBack = 3,
	eALRifle = 4,
	eALAttachCount = 5,
	eALUndefined = 6,
};

// 0x0000000142A98DF0 (Size: 0x4)
enum class EInformationBarMessage
{
	eIBM_Clear = 0,
	eIBM_LastEnemyKilledCP = 1,
	eIBM_InvestigateStand = 2,
	eIBM_BodyFound = 3,
	eIBM_Suspicious = 4,
	eIBM_DisguiseBlown = 5,
	eIBM_Hunt = 6,
	eIBM_Exposed = 7,
	eIBM_LandMineArmed = 8,
	eIBM_RadioOn = 9,
	eIBM_Trespassing = 10,
	eIBM_NUM = 11,
};

// 0x0000000142AE3378 (Size: 0x4)
enum class EEngineFrameUpdatePriority
{
	eFUP_AILogger = 0,
	eFUP_GridManager = 1,
	eFrameUpdatePriority_HitmanStart = 2,
	eFUP_ActorManager_Prepare = 3,
	eFrameUpdatePriority_CrowdSyncAI = 4,
	eFrameUpdatePriority_PlayerCommunicationEarly = 5,
	eFrameUpdatePriority_Scatter = 6,
	eFrameUpdatePriority_VolumeTriggerManager = 7,
	eFrameUpdatePriority_DistanceToCamManager = 8,
	eFrameUpdatePriority_Door = 9,
	eFUP_GameEntityManager = 10,
	eFrameUpdatePriority_AreaManager = 11,
	eFrameUpdatePriority_SpeechManager = 12,
	eFUP_SmoothOperator = 13,
	eFUP_LimitedVisionArea = 14,
	eFUP_WindManager = 15,
	eFrameUpdatePriority_KeywordDebug = 16,
	eFUP_DebugUPlot = 17,
	eFUP_IntelManager = 18,
	eFrameUpdatePriority_LocalizationManager = 19,
	eFrameUpdatePriority_SubtitleManager = 20,
	eFrameUpdatePriority_HttpManager = 21,
	eFrameUpdatePriority_WebsocketManager = 22,
	eFrameUpdatePriority_OnlineEventsClient = 23,
	eFrameUpdatePriority_OnlineEventManager = 24,
	eFrameUpdatePriority_OnlineManager = 25,
	eFrameUpdatePriority_EntitlementManager = 26,
	eFrameUpdatePriority_MetricsManager = 27,
	eFUP_SoundGateManager = 28,
	eFUP_SoundAmbienceManager = 29,
	eFrameUpdatePriority_UserProfileManager = 30,
	eFrameUpdatePriority_RenderManager = 31,
	eFrameUpdatePriority_TextInputDialog = 32,
	eFrameUpdatePriority_SystemDialog = 33,
	eFrameUpdatePriority_ContractsManager = 34,
	eFUP_ParticleHeirEmitting = 35,
	eFrameUpdatePriority_EditorServer = 36,
	eFrameUpdatePriority_DebugConsole = 37,
	eFrameUpdatePriority_GraphicsSettingsManager = 38,
	eFrameUpdatePriority_ContractsGameManager = 39,
	eFrameUpdatePriority_Weapon = 40,
	eFrameUpdatePriority_CrowdDensityEntity = 41,
	eFrameUpdatePriority_ActBehaviorStateCondition = 42,
	eFrameUpdatePriority_ActorCanSeeCondition = 43,
	eFrameUpdatePriority_DebugCheckKey = 44,
	eFrameUpdatePriority_KeyControl = 45,
	eFUP_LookAtTrigger = 46,
	eFUP_FootstepEventConsumer = 47,
	eFUP_BloodSplatCreator = 48,
	eFrameUpdatePriority_PersistentEntityManager = 49,
	eFUP_ProjectedCrowdRegion = 50,
	eFrameUpdatePriority_Timers = 51,
	eFrameUpdatePriority_ConditionalTimer = 52,
	eFrameUpdatePriority_ValueEntityManager = 53,
	eFrameUpdatePriority_ActorCounter = 54,
	eFrameUpdatePriority_WaveformGeneratorManager = 55,
	eFUP_ItsATrap = 56,
	eFrameUpdatePriority_SecurityCamera = 57,
	eFrameUpdatePriority_QueryingAIOutput = 58,
	eFrameUpdatePriority_Projectile = 59,
	eFrameUpdatePriority_MassImpulseCharacterExploder = 60,
	eFrameUpdatePriority_Hitman = 61,
	eFrameUpdatePriority_AudioManagerWwise = 62,
	eFUP_GridManagerWaitForJobs = 63,
	eFUP_ActorManager_StateUpdate_Pre = 64,
	eFUP_ActorManager_StateUpdate = 65,
	eFrameUpdatePriority_ActorAnimUpdate = 66,
	eFrameUpdatePriority_CrowdSyncAll = 67,
	eFrameUpdatePriority_CrowdCulling = 68,
	eFrameUpdatePriority_PreCrowd = 69,
	eFrameUpdatePriority_Crowd = 70,
	eFrameUpdatePriority_PhysicsStart = 71,
	eFrameUpdatePriority_ActorManager_AIUpdate = 72,
	eFUP_SmuggleSituationManager = 73,
	eFrameUpdatePriority_ActorManager3 = 74,
	eFrameUpdatePriority_CharacterTemplateAspect = 75,
	eFrameUpdatePriority_Hitman2 = 76,
	eFrameUpdatePriority_PlayerCommunicationLate = 77,
	eFrameUpdatePriority_ParticleDecalSpawn = 78,
	eFrameUpdatePriority_ParticleColliderEmission = 79,
	eFrameUpdatePriority_Physics = 80,
	eFrameUpdatePriority_EntityManager = 81,
	eFrameUpdatePriority_FreeCameraControlEntity = 82,
	eFrameUpdatePriority_RenderVideoPlayer = 83,
	eFrameUpdatePriority_AnimPlayerEntityManager = 84,
	eFrameUpdatePriority_CameraAlignedBoneAnimator = 85,
	eFrameUpdatePriority_ClothCharacterEntity = 86,
	eFrameUpdatePriority_TextureStreamingCameraControlEntity = 87,
	eFrameUpdatePriority_PostFilter = 88,
	eFrameUpdatePriority_VideoPlayerControl = 89,
	eFrameUpdatePriority_TrackDollyController = 90,
	eFrameUpdatePriority_TestGroup = 91,
	eFrameUpdatePriority_LookAtEntity = 92,
	eFUP_InfoDisplay = 93,
	eFUP_CrowdPossedAct = 94,
	eFUP_SoundCollisionManager = 95,
	eFUP_AudioLevelMeter = 96,
	eFUP_ActorInstanceEntityManager = 97,
	eFUP_WorldInventory = 98,
	eFUP_DestructionSystem = 99,
	eFUP_DestructionSystemPostTick = 100,
	eFUP_DecalSpawnManager = 101,
	eFrameUpdatePriority_DebugHandlers = 102,
	eFrameUpdatePriority_OSD = 103,
	eFrameUpdatePriority_Default = 104,
	eFrameUpdatePriority_SecuritySystemCameraUI = 105,
	eFrameUpdatePriority_ThrownItemUI = 106,
	eFrameUpdatePriority_SequenceManager = 107,
	eFrameUpdatePriority_StartPathfinderUpdate = 108,
	eFrameUpdatePriority_VisibilitySensorWait = 109,
	eFrameUpdatePriority_ActionManagerStart = 110,
	eFrameUpdatePriority_PathFinderJobManager = 111,
	eFrameUpdateLinkedEntity = 200,
	eFrameUpdatePriority_RayProbeEntity = 201,
	eFrameUpdatePriority_GhostEntity = 202,
	eFrameUpdateLinkedEntityManagerMainThread = 203,
	eFUP_syncDestructionEffects = 204,
	eFrameUpdatePriority_RaycastsStart = 205,
	eFrameUpdatePriority_ActorStartNetworkUpdate = 206,
	eFrameUpdatePriority_TextureManager = 500,
	eFrameUpdatePriority_NotificationsController = 501,
	eFrameUpdatePriority_WaitForPathfinderUpdate = 502,
	eFrameUpdatePriority_LevelManager = 1000,
	eFrameUpdatePriority_OutfitStreamingManager = 1001,
};

// 0x00000001422CA4D0 (Size: 0x4)
enum class EGameTension
{
	EGT_Undefined = 0,
	EGT_Ambient = 1,
	EGT_Agitated = 2,
	EGT_Searching = 3,
	EGT_AlertedLow = 4,
	EGT_AlertedHigh = 5,
	EGT_Hunting = 6,
	EGT_Arrest = 7,
	EGT_Combat = 8,
};

// 0x0000000142AE2228 (Size: 0x4)
enum class TeleportActionType
{
	STAY = 0,
	TELEPORT = 1,
	LEAVE_CROWD = 2,
};

// 0x0000000142AEEBF8 (Size: 0x4)
enum class EAnimBlendMode
{
	EAnimBlendMode_InterpAttInterpPos = 0,
	EAnimBlendMode_InterpAttAddPos = 1,
	EAnimBlendMode_AddAttLeavePos = 2,
	EAnimBlendMode_AddAttAddPos = 3,
};

// 0x0000000143E5FAF8 (Size: 0x4)
enum class EVRRenderingMode
{
	VR_RENDER_MODE_2D_SCREEN = 0,
	VR_RENDER_MODE_STEREO_3D = 1,
};

// 0x0000000142A96320 (Size: 0x4)
enum class EItemRequirement
{
	eIR_NoRequirement = 0,
	eIR_RequireEmpty = 1,
	eIR_RequireItem = 2,
	eIR_RequireNoBigItem = 3,
};

// 0x0000000142AF32C8 (Size: 0x4)
enum class EReplicaMode
{
	E_RM_STATIC_OBJECT = 0,
	E_RM_DYNAMIC = 1,
};

// 0x0000000142A9ACA8 (Size: 0x4)
enum class EBehaviorTreeVariableType
{
	BTVT_Invalid = -1,
	BTVT_SceneReference = 0,
	BTVT_Contextual = 1,
	BTVT_Dynamic = 2,
	BTVT_NumTypes = 3,
};

// 0x0000000142AE3840 (Size: 0x4)
enum class ETeamModeId
{
	TeamMode_Coop = 0,
	TeamMode_Versus = 1,
};

// 0x0000000142AF30D0 (Size: 0x4)
enum class ENetworkSystemID
{
	NSID_UNDEFINED = 0,
	NSID_NETWORK_CORE_SYSTEMS_BEGIN = 1,
	NSID_DEBUG_SWAP_PLAYER_RPC = 1,
	NSID_ROUNTTRIPTEST_REQUEST_RPC = 2,
	NSID_ROUNTTRIPTEST_RESOLVE_RPC = 3,
	NSID_CONNECTION_LOCALLY_DEREFERENCE_UPDATE_RPC = 4,
	NSID_CONNECTION_READY_FOR_REPLICATION_RPC = 5,
	NSID_NETPLAYER_LOGIN_RPC = 6,
	NSID_NETPLAYER_LOGIN_COLOR_SELECTION_RPC = 7,
	NSID_NETPLAYER_REPLICA = 8,
	NSID_NETGAME_REPLICA = 9,
	NSID_PLAYERREGISTRY_REPLICA = 10,
	NSID_NETPLAYER_CONTROLLER_REPLICA = 11,
	NSID_SYNCH_POINT_PLAYER_REPLICA = 12,
	NSID_SYNCH_POINT_REPLICA = 13,
	NSID_GAME_CHAT_RPC = 14,
	NSID_NETWORK_CORE_SYSTEMS_END = 15,
	NSID_NETWORK_SYNCHRONOUS_MULTIPLAYER_BEGIN = 16,
	NSID_PLAYER_INPUT_RPC = 16,
	NSID_PLAYER_INPUT_REPLICA = 17,
	NSID_GENERAL_ENTITY_PROPERTY_REPLICA = 18,
	NSID_ANIMATED_ACTOR_RPC = 19,
	NSID_CAMERA_REPLICA = 20,
	NSID_GENERAL_PIN_SIGNAL_RPC = 21,
	NSID_PIN_SIGNAL_RPC = 22,
	NSID_NPC_DIALOGUE_RPC = 23,
	NSID_GAME_STATE_REPLICA = 24,
	NSID_HERO_STATE_REPLICA = 25,
	NSID_NPC_STATE_REPLICA = 26,
	NSID_ANIMATION_REPLICA = 27,
	NSID_DESTRUCTIBLE_INTERACTIONS_RPC = 28,
	NSID_ACT_REQUEST_RPC = 29,
	NSID_CHARACTERSPEAK_REPLICA = 30,
	NSID_ITEM_WEAPON_RPC = 31,
	NSID_ITEM_REPLICA = 32,
	NSID_ACCESSORY_ITEM_REPLICA = 33,
	NSID_BULLET_IMPACT_RPC = 34,
	NSID_NETWORKED_TIME_CONTROL_RPC = 35,
	NSID_REQUEST_ACTION_SYCHRONIZATION_RPC = 36,
	NSID_PHYSICS_SYSTEM_REPLICA = 37,
	NSID_PHYSICS_OBJECT_REPLICA = 38,
	NSID_WATER_SPLASH_GENERATOR_RPC = 39,
	NSID_PROJECTILE_HIT_INFO_RPC = 40,
	NSID_PROJECTILE_HIT_EVENT_RPC = 41,
	NSID_INTERACTION_SUBACTION_EXECUTE_REQUEST = 42,
	NSID_INTERACTION_SUBACTION_EXECUTE_RESOLVE = 43,
	NSID_INTERACTION_SUBACTION_EXECUTE_SIGNAL_RESOLVE = 44,
	NSID_INTERACTION_INPUT_REQUEST_RESOLVE = 45,
	NSID_SUBCONTROLLER_REPLICA = 46,
	NSID_CONTRACT_EVENT_REPLICA = 47,
	NSID_NETWORK_SYNCHRONOUS_MULTIPLAYER_END = 48,
	NSID_SNIPERS_CHALLENGE_SCORING_EVENT_REPLICA = 49,
	NSID_CHARACTER_GHOST_REPLICA = 50,
	NSID_PIP_GHOST_REPLICA = 51,
	NSID_SPATIAL_GHOST_REPLICA = 52,
	NSID_VS_TARGET_PICKER_REPLICA = 53,
	NSID_VS_KILL_RPC = 54,
	NSID_VS_KILL_CONFIRM_RPC = 55,
	NSID_VS_CLIENT_DEAD_RPC = 56,
	NSID_VS_SETUP_SYNC_REPLICA = 57,
	NSID_VS_PIN_SIGNAL_RPC = 58,
	NSID_VS_ENTITY_PROPERTY_REPLICA = 59,
	NSID_VS_GENERIC_EVENT_RPC = 60,
	NSID_VS_PENALTY_KILL_RPC = 61,
	NSID_VS_ITEM_PICKUP_REQUEST_RPC = 62,
	NSID_VS_ITEM_PICKUP_RESPONSE_RPC = 63,
	NSID_VS_OUTFIT_PICK_REQUEST_RPC = 64,
	NSID_VS_OUTFIT_PICK_RESPONSE_RPC = 65,
	NSID_VS_PICKUP_SPAWNER_REPLICA = 66,
	NSID_VS_KILL_EVENT_RPC = 67,
	NSID_VS_PRE_SCORE_TIMER_RPC = 68,
	NSID_VS_TARGET_PACIFY_RPC = 69,
	NSID_VS_CONFIRM_TARGET_PACIFY_RPC = 70,
	NSID_VS_TARGET_PACIFIED_CONFIRMED_RPC = 71,
	NSID_MAX = 72,
};

// 0x0000000142A97090 (Size: 0x4)
enum class EOutbreakInfectionStage
{
	eOIS_Stage1 = 0,
	eOIS_Stage2 = 1,
	eOIS_Stage3 = 2,
};

// 0x0000000142AB1E68 (Size: 0x4)
enum class eBurstPatternType
{
	eEBP_None = 0,
	eEBP_Circular3Rings = 1,
	eEBP_Box = 2,
};

// 0x0000000142A98040 (Size: 0x4)
enum class ECCNodeSubtype
{
	eCCNodeSubtype_Left = 0,
	eCCNodeSubtype_Right = 1,
	eCCNodeSubtype_Front = 2,
	eCCNodeSubtype_Back = 3,
	eCCNodeSubtype_StairsAbove = 4,
	eCCNodeSubtype_StairsBelow = 5,
	eCCNodeSubtype_StairsAbove_Back = 6,
	eCCNodeSubtype_StairsBelow_Back = 7,
	eCCNodeSubtype_Front_Back = 8,
	eCCNodeSubtype_Count = 9,
};

// 0x0000000142AAE538 (Size: 0x4)
enum class ERegistrationState
{
	eINITIAL = 0,
	eNOP = 1,
	ePENDING = 2,
	eCANCELLED_REMOTELY = 3,
	eCANCELLED_LOCALLY = 4,
	eFOUNDMATCH = 5,
};

// 0x0000000142A8A9A8 (Size: 0x4)
enum class EHM5SoundFootwearType
{
	EFWT_UNDEFINED = 0,
	EFWT_BAREFOOT = 1,
	EFWT_SLIPPERS = 2,
	EFWT_DISPOSABLE_SLIPPERS = 3,
	EFWT_SANDALS = 4,
	EFWT_SNEAKERS = 5,
	EFWT_SNEAKERS_METALLEG = 6,
	EFWT_LEATHER = 7,
	EFWT_FEMALE_LEATHER = 8,
	EFWT_BOOTS = 9,
	EFWT_COWBOY_BOOTS = 10,
	EFWT_FEMALE_COWBOY_BOOTS = 11,
	EFWT_RUBBER_BOOTS = 12,
	EFWT_HIGH_HEELS = 13,
	EFWT_LEATHER_KEYS = 14,
	EFWT_SWAT_BOOTS = 15,
};

// 0x0000000142A98370 (Size: 0x4)
enum class ECharacterIdleHandlerFullbodyType
{
	ecIHFBT_DisguisedIdle = 0,
	ecIHFBT_Event = 1,
};

// 0x0000000142A96200 (Size: 0x4)
enum class ECharacterEvent
{
	eCIET_PickUp = 0,
	eCIET_LadderEnded = 1,
	eCIET_AgilityEnded = 2,
	eCIET_CCEnded = 3,
	eCIET_Disguised = 4,
	eCIET_HideBody = 5,
	eCIET_WalkingOnStairs = 6,
	eCIET_Sniping_Congratulate = 7,
	eCIET_Sniping_Acknowledge = 8,
	eCIET_FlavorIdleEnded = 9,
	eCIET_StartedMoving = 10,
	eCIET_StoppedMoving = 11,
	eCIET_DragBody = 12,
	eCIET_Takedown = 13,
	eCIET_Damaged = 14,
	eCIET_None = 34,
};

// 0x0000000142AB31F8 (Size: 0x4)
enum class EOpportunityRevealState
{
	ORS_REVEALING = 1,
	ORS_HINT = 2,
	ORS_DISTANCE = 4,
	ORS_RANGE_FLAGS = 6,
	ORS_REVEALED = 8,
	ORS_REVEAL_FLAGS = 9,
	ORS_BYPASS_MENU = 16,
};

// 0x0000000142AA46F0 (Size: 0x4)
enum class EActionPromptState
{
	eActionPromptState_Disabled = 0,
	eActionPromptState_Enabled = 1,
	eActionPromptState_Activated = 2,
	eActionPromptState_Held = 3,
};

// 0x0000000142AA5948 (Size: 0x4)
enum class EIntelType
{
	eIT_DATA = 0,
	eIT_OPPORTUNITY = 1,
	eIT_BACKGROUND = 2,
	eIT_HANDLER = 3,
	eIT_UNDEFINED = 4,
};

// 0x0000000142A8D7E8 (Size: 0x4)
enum class EScreenPlayState
{
	State_Stopped = 0,
	State_Running = 1,
	State_Resuming = 2,
	State_Pausing = 3,
	State_Paused = 4,
	State_Done = 5,
	State_Terminated = 6,
};

// 0x0000000142AF3750 (Size: 0x4)
enum class EPathFinderBoxType
{
	PFBT_INCLUDE_MESH_COLLISION = 0,
	PFBT_EXCLUDE_MESH_COLLISION = 1,
	PFBT_CREATE_MESH_COLLISION = 2,
	PFBT_REGION = 3,
	PFBT_INCLUDE_PORTALS = 4,
	PFBT_EXCLUDE_PORTALS = 5,
	PFBT_IGNORE = 6,
};

// 0x0000000142AB0718 (Size: 0x4)
enum class EFSMStateStatus
{
	eInactive = 0,
	eActive = 1,
	eCompleted = 2,
	eFailed = 3,
	eInterrupted = 4,
};

// 0x0000000142AE37F8 (Size: 0x4)
enum class EPlayMode
{
	PLAYMODE_STOPPED = 1,
	PLAYMODE_PAUSED = 2,
	PLAYMODE_PLAYING = 3,
};

// 0x0000000143E5FB40 (Size: 0x4)
enum class EVRRenderDeviceType
{
	RENDER_VR_DEVICE_TYPE_DUMMY = 0,
	RENDER_VR_DEVICE_TYPE_OCULUS = 1,
	RENDER_VR_DEVICE_TYPE_PSVR = 2,
	RENDER_VR_DEVICE_TYPE_COUNT = 3,
};

// 0x0000000142A7B758 (Size: 0x4)
enum class EBoolCheckType
{
	eBCT_IGNORE = 0,
	eBCT_TRUE = 1,
	eBCT_FALSE = 2,
};

// 0x0000000142A7A6D8 (Size: 0x4)
enum class EBooleanOption
{
	BO_Off = 0,
	BO_On = 1,
	BO_Default = 2,
};

// 0x0000000142A7B790 (Size: 0x4)
enum class eActionRewardType
{
	AR_None = 0,
	AR_QuestItem = 1,
	AR_Keycard = 2,
	AR_Key = 3,
};

// 0x0000000142A98EB0 (Size: 0x4)
enum class EHM5SoundFootstepEmitterTarget
{
	EFSAT_MAIN = 0,
	EFSAT_NPC = 1,
};

// 0x0000000142AF4AA0 (Size: 0x4)
enum class EClothBendConstrainType
{
	eClothBendConstrainType_Stick = 0,
	eClothBendConstrainType_Triangle = 1,
};

// 0x0000000142A98C70 (Size: 0x4)
enum class EHUDIconFlags
{
	HUD_ICON_FLAG_POSITION = 1,
	HUD_ICON_FLAG_VALUE = 2,
	HUD_ICON_FLAG_SCALE = 4,
	HUD_ICON_FLAG_TEXT = 8,
};

// 0x0000000142AED638 (Size: 0x4)
enum class ELocale
{
	Locale_En = 0,
	Locale_Fr = 1,
	Locale_It = 2,
	Locale_De = 3,
	Locale_Es = 4,
	Locale_Ru = 5,
	Locale_Mx = 6,
	Locale_Br = 7,
	Locale_Pl = 8,
	Locale_Cn = 9,
	Locale_Jp = 10,
	Locale_Tc = 11,
};

// 0x0000000142A952A8 (Size: 0x4)
enum class EHM5SoundFootstepEvent
{
	EFSE_START = 0,
	EFSE_STOP = 1,
	EFSE_LEFT = 2,
	EFSE_RIGHT = 3,
	EFSE_TURN = 4,
	EFSE_SLIDE = 5,
	EFSE_JUMP = 6,
	EFSE_LAND = 7,
};

// 0x0000000142A914F8 (Size: 0x4)
enum class ECombatZoneState
{
	CZS_Inactive = 0,
	CZS_Triggered = 1,
	CZS_Engaged = 2,
};

// 0x0000000142AF4918 (Size: 0x1)
enum class ECollisionNotifyGroup
{
	eCollisionNotifyGroup_Default = 0,
	eCollisionNotifyGroup_CollisionListener = 1,
	eCollisionNotifyGroup_PhysicsEntity = 2,
	eCollisionNotifyGroup_DontNotify = 3,
	eCollisionNotifyGroup_ForceNotify = 4,
};

// 0x0000000142AF47E0 (Size: 0x1)
enum class ERestitutionCombineMode
{
	ERestitutionCombineMode_AVERAGE = 0,
	ERestitutionCombineMode_MIN = 1,
	ERestitutionCombineMode_MULTIPLY = 2,
	ERestitutionCombineMode_MAX = 3,
};

// 0x0000000142AA5560 (Size: 0x4)
enum class EActionRadialArcIconType
{
	EARAIT_NoIcon = 0,
	EARAIT_Locked = 1,
	EARAIT_NeedTool = 2,
	EARAIT_IsRunning = 3,
	EARAIT_Crowbar = 4,
	EARAIT_Wrench = 5,
	EARAIT_Card = 6,
	EARAIT_Lockpick = 7,
	EARAIT_Screwdriver = 8,
	EARAIT_AmmoBullet = 9,
	EARAIT_Flower = 10,
	EARAIT_ChemicalTube = 11,
	EARAIT_Golfball = 12,
	EARAIT_Keypad = 13,
	EARAIT_Key = 14,
	EARAIT_Coin = 15,
	EARAIT_Poison = 16,
	EARAIT_Exsplosive = 17,
};

// 0x0000000142A7A228 (Size: 0x4)
enum class ERayLayer
{
	eRayLayer_COLLIDE_WITH_ALL = 0,
	eRayLayer_CAMERA_COLI = 1,
	eRayLayer_CAMERA_COLI_CAMERA_OBSTACE_ONLY = 2,
	eRayLayer_HERO_FIRE = 3,
	eRayLayer_ACTOR_FIRE = 4,
	eRayLayer_ACTOR_LINE_OF_FIRE = 5,
	eRayLayer_FOOTSTEPS_COLI = 7,
	eRayLayer_BLOODSPLATDECAL_COLI = 8,
	eRayLayer_COLLIDE_WITH_STATIC = 9,
	eRayLayer_COLLIDE_WITH_STATIC_EXCL_TRANSPARENT = 10,
	eRayLayer_PARTICLES = 11,
	eRayLayer_COVERSEARCH = 12,
	eRayLayer_ACTOR_VISIBILITY = 13,
	eRayLayer_ACTOR_VISIBILITY_AMBIENT = 14,
	eRayLayer_PICKUP = 16,
	eRayLayer_HERO_PROXY = 17,
	eRayLayer_COLLIDE_WITH_STATIC_AND_SLOPE = 19,
	eRayLayer_COLLIDE_WITH_STATIC_AND_SLOPE_EXCL_TRANSPARENT = 20,
	eRayLayer_HERO_PROXY_NO_VOLUMES = 22,
	eRayLayer_PHYSICS_MANIPULATOR = 23,
	eRayLayer_UNUSED_LAST = 24,
};

// 0x0000000142AF3328 (Size: 0x4)
enum class EMultiplayerLobbyRequestType
{
	LOBBY_REQUEST_VOID = 0,
	LOBBY_REQUEST_IDLE = 1,
	LOBBY_REQUEST_CREATE = 2,
	LOBBY_REQUEST_CREATE_LOCALHOST = 3,
	LOBBY_REQUEST_JOIN = 4,
};

// 0x0000000142AF4960 (Size: 0x1)
enum class ERagdollPart
{
	ERAGDOLLPART_NONE = 0,
	ERAGDOLLPART_BODY = 1,
	ERAGDOLLPART_HEAD = 2,
	ERAGDOLLPART_HAND = 3,
	ERAGDOLLPART_FOOT = 4,
};

// 0x0000000142AE1690 (Size: 0x4)
enum class EAudioVolumetricMixingMode
{
	AUDIO_VOLUMETRIC_MIXING_MAX_ALL = 0,
	AUDIO_VOLUMETRIC_MIXING_MAX_3D = 1,
	AUDIO_VOLUMETRIC_MIXING_ADD = 2,
};

// 0x0000000142A98FD0 (Size: 0x4)
enum class EControllerButton
{
	BUTTON_NONE = 0,
	BUTTON_CROSS = 1,
	BUTTON_TRIANGLE = 2,
	BUTTON_SQUARE = 3,
	BUTTON_CIRCLE = 4,
	BUTTON_UP = 5,
	BUTTON_RIGHT = 6,
	BUTTON_DOWN = 7,
	BUTTON_LEFT = 8,
	BUTTON_R1 = 9,
	BUTTON_R2 = 10,
	BUTTON_R3 = 11,
	BUTTON_R_STICK = 12,
	BUTTON_L1 = 13,
	BUTTON_L2 = 14,
	BUTTON_L3 = 15,
	BUTTON_L_STICK = 16,
	BUTTON_START = 17,
	BUTTON_SELECT = 18,
	BUTTON_UP_DOWN = 19,
	BUTTON_LEFT_RIGHT = 20,
	BUTTON_LEFT_RIGHT_UP_DOWN = 21,
	BUTTON_L1_R1 = 22,
	BUTTON_L2_R2 = 23,
	BUTTON_KEYBOARD = 24,
	BUTTON_ESCAPE = 25,
};

// 0x0000000142A7A438 (Size: 0x4)
enum class eItemType
{
	eCC_FireExtinguisher_01 = 0,
	eCC_Knife = 10,
	eCC_Axe = 20,
	eCC_PetrolCan = 30,
	eCC_Shovel = 40,
	eCC_Hammer = 50,
	eCC_Cleaver = 60,
	eCC_AntitankMine = 70,
	eCC_C4Brick = 80,
	eCC_RemoteExplosive = 90,
	eDetonator = 100,
	eCC_Wrench = 110,
	eCC_Dildo = 120,
	eCC_Bottle = 130,
	eCC_Saw = 140,
	eCC_Screwdriver = 150,
	eCC_MetalPipe = 160,
	eCC_Gavel = 170,
	eCC_Radio = 180,
	eCC_Bong = 190,
	eCC_Statue_Bust_A = 200,
	eGun_44AutoMag = 210,
	eGun_44AutoMagSilenced = 220,
	eGun_Derringer = 230,
	eGun_Glock = 240,
	eGun_GlockDirty = 250,
	eGun_GlockSilenced = 260,
	eGun_HardBaller_01 = 270,
	eGun_HardBallerSilenced = 280,
	eGun_Sig226 = 290,
	eGun_Sig226Silenced = 300,
	eGun_Sphinx3000 = 310,
	eGun_Taurus24_7 = 320,
	eGun_Taurus24_7Silenced = 330,
	eGun_Spotter = 340,
	eOther_MG = 350,
	eOther_RPG = 360,
	eRevolver_PoliceRevolver = 370,
	eRevolver_Snubnosed = 380,
	eRevolver_Taurus = 390,
	eRifle_HK416 = 400,
	eRifle_HK416Scope = 410,
	eRifle_HK416Silenced = 420,
	eRifle_PumpRifle = 430,
	eRifle_SG552 = 440,
	eRifle_SG552Scope = 450,
	eShotgun_M500 = 460,
	eShotgun_M500New = 470,
	eSMG_HK_UMP = 480,
	eSMG_HK_UMPFlashlight = 490,
	eSMG_HK_UMPScope = 500,
	eSMG_HK_UMPSilenced = 510,
	eSMG_TMP = 520,
	eSniper_AS50 = 530,
	eSniper_Remington700 = 540,
	eSniper_SakoTRG = 550,
	eSniper_SakoTRGSilenced = 560,
	eItemAmmo = 570,
	eCC_FiberWire = 580,
	eOther_ZippoLighter = 590,
	eOther_Keycard_A = 600,
	eOther_SecurityTape = 610,
	eCC_PowerCord = 620,
	eCC_PoliceBaton = 630,
	eCC_Scissor = 640,
	eOther_ContractEnvelope = 650,
	eItemIrrelevantWeapon = 660,
	eCC_BaseballBat = 670,
	eCC_GlassShiv = 680,
	eCC_PoolCue = 690,
	eCC_Rake = 700,
	eCC_ToyCar = 710,
	eCC_Crutch = 720,
	eCC_Guitar = 730,
	eCC_Iron = 740,
	eRifle_Beretta_ARX160 = 760,
	eShotgun_Spas12 = 800,
	eShotgun_Spas12_Compact = 810,
	eShotgun_Silenced = 830,
	eSMG_AK74u = 860,
	eSMG_STK = 880,
	eDLC_TEST_FireArm_01 = 900,
	eDLC_TEST_FireArm_02 = 901,
	eDLC_TEST_Prop_01 = 902,
	eDLC_TEST_Prop_02 = 903,
	eHotSauceBarrel = 910,
	eOther_GenericPickup = 920,
	eCC_SledgeHammer = 921,
	eCC_Katana = 922,
	eCC_Brick = 923,
	cCC_Book_A = 924,
	eSyringe_Lethal = 931,
	eSyringe_Sedative = 932,
	eSyringe_Emetic = 933,
	eSuitcase = 934,
	eOther_Camera = 940,
	eUnknownItemType = 1337,
};

// 0x0000000142A96500 (Size: 0x4)
enum class ECharacterBodyType
{
	eCT_MaleRegular = 0,
	eCT_FemaleRegular = 1,
	eCT_Male47 = 2,
	eCT_Undefined = 3,
};

// 0x0000000142A8AA08 (Size: 0x4)
enum class EOutfitType
{
	eOT_None = 0,
	eOT_Suit = 1,
	eOT_Guard = 2,
	eOT_Worker = 3,
	eOT_Waiter = 4,
	eOT_LucasGrey = 5,
};

// 0x0000000143E5F4B8 (Size: 0x1)
enum class EParticleColorUsage
{
	REPLACE_PARTICLE_COLOR = 0,
	LEAVE_PARTICLE_COLOR = 1,
};

// 0x0000000142AB1D78 (Size: 0x4)
enum class EImpactEffectsOptions
{
	eIE_None = 0,
	eIE_BloodSplatter = 1,
	eIE_Decals = 2,
	eIE_MaterialImpactEffects = 4,
	eIE_AmmoImpactEffect = 8,
	eIE_All = 16,
};

// 0x0000000142A9A4D8 (Size: 0x4)
enum class ERegionMask
{
	eRM_None = 1,
	eRM_LowCover = 2,
	eRM_HighCover = 4,
	eRM_Stairs = 8,
	eRM_Separator = 16,
	eRM_User_1 = 32,
	eRM_User_2 = 64,
	eRM_User_3 = 128,
	eRM_User_4 = 256,
	eRM_User_5 = 512,
	eRM_User_6 = 1024,
	eRM_User_7 = 2048,
	eRM_User_8 = 4096,
};

// 0x0000000142AF4978 (Size: 0x4)
enum class EQueryMaskType
{
	eQueryMaskType_CameraCollision = 1,
	eQueryMaskType_CameraObstacle = 2,
	eQueryMaskType_ExplosionRelevant = 4,
};

// 0x0000000142A987F0 (Size: 0x4)
enum class EGameEventArgType
{
	GE_ARGS_KILL = 0,
	GE_ARGS_PRIORITYKILL = 1,
	GE_ARGS_SITUATION = 2,
	GE_ARGS_INVENTORY = 3,
	GE_ARGS_EXPLODINGPROP = 4,
	GE_ARGS_EVENT = 5,
	GE_ARGS_CHECKPOINTEVENT = 6,
	GE_ARGS_AI_SITUATION = 7,
};

// 0x0000000142A891E0 (Size: 0x4)
enum class ESoundChannelGroup
{
	ESCG_NONE = 0,
	SND_Default = 1,
	SND_Phys_Rigidbody = 2,
	SND_Phys_Shatter = 3,
	SND_Wpn_HM = 4,
	SND_Wpn_HM_Shot = 5,
	SND_Wpn_NPC = 6,
	SND_Wpn_Impacts = 7,
	SND_Wpn_Flybys = 8,
	SND_Characters = 9,
	SND_Ambience = 10,
	SND_Props = 11,
	SND_Prop_Item = 12,
	SND_FS_HM = 13,
	SND_FS_NPC = 14,
	SND_VisualFX = 15,
	SND_VisualFX_ShotActivate = 16,
	SND_VisualFX_Explosions = 17,
	SND_Diag_HM = 18,
	SND_Diag_NPC = 19,
	SND_CS_Ingame = 20,
	SND_CS_PreRend = 21,
	SND_Music_Env = 22,
	SND_MusicNonEnv = 23,
	SND_SpecialFX_CC = 24,
	SND_SpecialFX_Jumps = 25,
	SND_SpecialFX_Closet = 26,
	SND_SpecialFX_Vent = 27,
	SND_SpecialFX_Instinct = 28,
	SND_SpecialFX_Disguise = 29,
	SND_SpecialFX_Agility = 30,
	SND_Stingers_SFX = 31,
	SND_GUI = 32,
	SND_Test = 33,
	ANIM_HM_Generic = 34,
	ANIM_HM_Loco = 35,
	ANIM_HM_Agility = 36,
	ANIM_HM_Suit_Flap = 37,
	ANIM_HM_Suit_Release = 38,
	ANIM_HM_Suit_Slide = 39,
	ANIM_HM_Suit_LandImpact = 40,
	ANIM_HM_Suit_Grab = 41,
	ANIM_HM_Suit_Roll = 42,
	ANIM_HM_Suit_Swoosh_Body = 43,
	ANIM_HM_Suit_Swoosh_Fast = 44,
	ANIM_HM_CC_Impacts = 45,
	ANIM_HM_CC_Movement = 46,
	ANIM_NPC_Generic = 47,
	ANIM_NPC_Loco = 48,
	ANIM_NPC_CC_Impacts = 49,
	ANIM_NPC_CC_Movement = 50,
	SND_Wpn_HM_Tail = 51,
	SND_Wpn_NPC_Tail = 52,
	SND_Diag_NPC_Crowd = 53,
	SND_Phys_RigidBody_Ragdoll = 54,
	SND_Diag_VO = 55,
	SND_GUI_Menu = 56,
	SND_Props_Doors = 57,
	SND_Wpn_HM_Handguns = 58,
	SND_Wpn_HM_Revolvers = 59,
	SND_Wpn_HM_Rifles = 60,
	SND_Wpn_HM_Shotguns = 61,
	SND_Wpn_HM_Smgs = 62,
	SND_Wpn_HM_Snipers = 63,
	SND_Wpn_HM_Other = 64,
	SND_Wpn_NPC_Handguns = 65,
	SND_Wpn_NPC_Revolvers = 66,
	SND_Wpn_NPC_Rifles = 67,
	SND_Wpn_NPC_Shotguns = 68,
	SND_Wpn_NPC_Smgs = 69,
	SND_Wpn_NPC_Snipers = 70,
	SND_Wpn_NPC_Other = 71,
	SND_Diag_NPC_Oneliner = 72,
	SND_Moments = 73,
};

// 0x0000000142A8A9F0 (Size: 0x4)
enum class EOutfitAICategory
{
	OAC_Undefined = 0,
	OAC_Fallback = 1,
	OAC_47Suit = 2,
	OAC_47TRAINING = 3,
	OAC_47MARRAKESH = 4,
	OAC_47SAPIENZA = 5,
	OAC_47BANGKOK = 6,
	OAC_47COLORADO = 7,
	OAC_47HOKKAIDO = 8,
	OAC_47PREORDER = 9,
	OAC_47COLUMBIA = 10,
	OAC_47ISLAND = 11,
	OAC_47MUMBAI = 12,
	OAC_47NEWZEALAND = 13,
	OAC_47STARTCLASSY = 14,
	OAC_47STARTOUTFIT = 15,
	OAC_47SUBURBIA = 16,
	OAC_Bodyguard = 17,
	OAC_CameraMan = 18,
	OAC_Chef = 19,
	OAC_Cleaner = 20,
	OAC_Cop = 21,
	OAC_Crew = 22,
	OAC_DaSilva = 23,
	OAC_Gardner = 24,
	OAC_Hazmat = 25,
	OAC_HouseStaff = 26,
	OAC_Maintenance = 27,
	OAC_Officer = 28,
	OAC_Priest = 29,
	OAC_Printer = 30,
	OAC_Scientist = 31,
	OAC_Security = 32,
	OAC_Sheik = 33,
	OAC_Stylist = 34,
	OAC_Waiter = 35,
	OAC_Busker = 36,
	OAC_Caddie = 37,
	OAC_ChurchStaff = 38,
	OAC_Cyclist = 39,
	OAC_Filmcrew = 40,
	OAC_Fortune = 41,
	OAC_Hippie = 42,
	OAC_Investor = 43,
	OAC_KGB = 44,
	OAC_Lawyer = 45,
	OAC_Kruger = 46,
	OAC_Masseur = 47,
	OAC_Mechanic = 48,
	OAC_Norfolk = 49,
	OAC_Plague = 50,
	OAC_Psych = 51,
	OAC_Shopkeep = 52,
	OAC_Soldier = 53,
	OAC_Tux = 54,
	OAC_Vampire = 55,
	OAC_YachtCrew = 56,
	OAC_Exterminator = 57,
	OAC_SoundCrew = 58,
	OAC_Intern = 59,
	OAC_Stalker = 60,
	OAC_Scarecrow = 61,
	OAC_Hacker = 62,
	OAC_SpecOps = 63,
	OAC_Berg = 64,
	OAC_Morgue = 65,
	OAC_Surgeon = 66,
	OAC_Doctor = 67,
	OAC_Director = 68,
	OAC_Ninja = 69,
	OAC_Baseball = 70,
	OAC_KillBill = 71,
	OAC_Pilot = 72,
	OAC_Yoga = 73,
	OAC_Mummy = 74,
	OAC_Cowboy = 75,
	OAC_Staff = 76,
	OAC_Santa = 77,
	OAC_MambaCrew = 78,
	OAC_Delivery = 79,
	OAC_GOTY_Clown = 80,
	OAC_GOTY_Cowboy = 81,
	OAC_GOTY_DarkSniper = 82,
	OAC_Driver = 83,
	OAC_Driverpale = 84,
	OAC_Eventstff = 85,
	OAC_Flrdaman = 86,
	OAC_Food = 87,
	OAC_Journal = 88,
	OAC_Krnstdtengnr = 89,
	OAC_Krnstdtsec = 90,
	OAC_Ktchstff = 91,
	OAC_Lee = 92,
	OAC_Mascot = 93,
	OAC_Medic = 94,
	OAC_Mendez = 95,
	OAC_Musician = 96,
	OAC_Racecoord = 97,
	OAC_Racemarsh = 98,
	OAC_Thug = 99,
	OAC_Worker = 100,
	OAC_Research = 101,
	OAC_Tatoo = 102,
	OAC_Shaman = 103,
	OAC_Artist = 104,
	OAC_Barber = 105,
	OAC_DJ = 106,
	OAC_Kshmrn = 107,
	OAC_Master = 108,
	OAC_Burial = 109,
	OAC_Ravenmaster = 110,
	OAC_Sentinel = 111,
	OAC_Blake = 112,
	OAC_Actor = 113,
	OAC_Architect = 114,
	OAC_Arkian = 115,
	OAC_Arkptrn = 116,
	OAC_Bbq = 117,
	OAC_Bollycrew = 118,
	OAC_Cavegd = 119,
	OAC_Civilian = 120,
	OAC_Cavewkr = 121,
	OAC_Clothsale = 122,
	OAC_Counsellor = 123,
	OAC_Cowboyhat = 124,
	OAC_Custdn = 125,
	OAC_Dancer = 126,
	OAC_Dbbwll = 127,
	OAC_Deadjanus = 128,
	OAC_Driverch = 129,
	OAC_Driversa = 130,
	OAC_Driveruk = 131,
	OAC_Driverus = 132,
	OAC_Druglabwkr = 133,
	OAC_Elite = 134,
	OAC_Fakemlstrm = 135,
	OAC_Farm = 136,
	OAC_Fieldgrd = 137,
	OAC_Headmaster = 138,
	OAC_Knight = 139,
	OAC_Laundrywkr = 140,
	OAC_Lndrygrd = 141,
	OAC_Mailman = 142,
	OAC_Mansiongd = 143,
	OAC_Mech_Miami = 144,
	OAC_Mechch = 145,
	OAC_Mechit = 146,
	OAC_Mechkrnstdt = 147,
	OAC_Mechsa = 148,
	OAC_Mechuk = 149,
	OAC_Mechus = 150,
	OAC_Metalwkr = 151,
	OAC_Militiasec = 152,
	OAC_Mime = 153,
	OAC_Moviemnstr = 154,
	OAC_Mumbaiserv = 155,
	OAC_Mumbsec = 156,
	OAC_Nitiate = 157,
	OAC_Nurse = 158,
	OAC_Orson = 159,
	OAC_Parka = 160,
	OAC_Politicasst = 161,
	OAC_Politician = 162,
	OAC_Priest_VP = 163,
	OAC_Queensgrd = 164,
	OAC_Queenthug = 165,
	OAC_Rangangrd = 166,
	OAC_Rangansec = 167,
	OAC_Realstbroke = 168,
	OAC_Resident = 169,
	OAC_Resortstaff = 170,
	OAC_Sitewkr = 171,
	OAC_Snowtrek = 172,
	OAC_Subwkr = 173,
	OAC_Suit = 174,
	OAC_Tailor = 175,
	OAC_Teaserv = 176,
	OAC_Terminus = 177,
	OAC_Trainserv = 178,
	OAC_Villagegd = 179,
	OAC_Winter = 180,
	OAC_Wiseman = 181,
	OAC_Investbanker = 182,
	OAC_Bankteller = 183,
	OAC_Robber = 184,
	OAC_TechCrew = 185,
	OAC_Attendant = 186,
	OAC_Critic = 187,
	OAC_FamilyGrd = 188,
	OAC_PrivateEye = 189,
	OAC_Undertaker = 190,
	OAC_Photographer = 191,
	OAC_LawyerBd = 192,
	OAC_Biker = 193,
	OAC_DeliveryFox = 194,
	OAC_Dealer = 195,
	OAC_ClubOwner = 196,
	OAC_Bartender = 197,
	OAC_ClubStaff = 198,
	OAC_ClubTech = 199,
	OAC_Herald = 200,
	OAC_Gaucho = 201,
	OAC_WineMkr = 202,
	OAC_Fixer = 203,
	OAC_Sommelier = 204,
};

// 0x0000000142A98490 (Size: 0x4)
enum class ECameraAssistanceMode
{
	eCAM_None = 0,
	eCAM_TrackAssist = 1,
	eCAM_AutoTrackTarget = 2,
};

// 0x0000000143E5FB10 (Size: 0x4)
enum class ERenderVRTrackingID
{
	RENDER_VR_TRACK_HEAD = 16,
	RENDER_VR_TRACK_EYE_LEFT = 17,
	RENDER_VR_TRACK_EYE_RIGHT = 18,
	RENDER_VR_TRACK_HAND_LEFT = 19,
	RENDER_VR_TRACK_HAND_RIGHT = 20,
};

// 0x0000000142A99D00 (Size: 0x4)
enum class EVRConfigRotationType
{
	EVRCRT_None = 0,
	EVRCRT_Lock = 1,
	EVRCRT_Offset = 2,
};

// 0x00000001422CA1C8 (Size: 0x4)
enum class eWeaponType
{
	WT_HANDGUN = 0,
	WT_SLOWGUN = 1,
	WT_ASSAULTRIFLE = 2,
	WT_SMG = 3,
	WT_SNIPER = 4,
	WT_RPG = 5,
	WT_KNIFE = 6,
	WT_SHOTGUN = 7,
	WT_SPOTTER = 8,
};

// 0x0000000142A989D0 (Size: 0x4)
enum class EButtonDisplay
{
	BUTTON_DISPLAY_AT_OPENDOOR = 0,
	BUTTON_DISPLAY_AT_PICKUP = 1,
	BUTTON_DISPLAY_AT_STARTDIALOG = 2,
	BUTTON_DISPLAY_AT_RESET = 3,
	BUTTON_DISPLAY_AT_OUTFIT = 4,
	BUTTON_DISPLAY_AT_CLOTHBUNDLE = 5,
	BUTTON_DISPLAY_AT_DRAGBODY = 6,
	BUTTON_DISPLAY_AT_SWITCHBOX = 7,
	BUTTON_DISPLAY_AT_SWAPITEM = 8,
	BUTTON_DISPLAY_AT_DUMPBODY = 9,
	BUTTON_DISPLAY_AT_OPENLID = 10,
	BUTTON_DISPLAY_AT_CHECKPOINTDOOR = 11,
	BUTTON_DISPLAY_AT_SIMPLE = 12,
	BUTTON_DISPLAY_AT_ENTERCLOSET = 13,
	BUTTON_DISPLAY_AT_EXITCLOSET = 14,
	BUTTON_DISPLAY_AT_ENTERSAFEZONE = 15,
	BUTTON_DISPLAY_AT_EXITSAFEZONE = 16,
	BUTTON_DISPLAY_AT_DISABLEFUSEBOX = 17,
	BUTTON_DISPLAY_AT_CONTAINERFLUSHBODY = 18,
	BUTTON_DISPLAY_AT_CONTEXTACTION = 19,
	BUTTON_DISPLAY_AT_HEALTHSTATION = 20,
	BUTTON_DISPLAY_AT_KEYCARDREADER = 21,
	BUTTON_DISPLAY_AT_ITEMCONTAINER = 22,
	BUTTON_DISPLAY_AT_USE_QUICK = 23,
	BUTTON_DISPLAY_AT_USE = 24,
	BUTTON_DISPLAY_RELOAD = 25,
	BUTTON_DISPLAY_HOLSTER = 26,
	BUTTON_DISPLAY_CHANGE_WEAPON_MODE = 27,
	BUTTON_DISPLAY_REMOTE_DETONATE = 28,
	BUTTON_DISPLAY_INVENTORY_ACCEPT = 29,
	BUTTON_DISPLAY_INVENTORY_CANCEL = 30,
	BUTTON_DISPLAY_HINTMESSAGE_CONTINUE = 31,
	BUTTON_DISPLAY_CLOSECOMBAT_TAKEDOWN = 32,
	BUTTON_DISPLAY_CLOSECOMBAT_COUNTERATTACK = 33,
	BUTTON_DISPLAY_CLOSECOMBAT_SILENT = 34,
	BUTTON_DISPLAY_CLOSECOMBAT_SNAPNECK = 35,
	BUTTON_DISPLAY_CLOSECOMBAT_CHOKE = 36,
	BUTTON_DISPLAY_CLOSECOMBAT_CHOKE_TARGET = 37,
	BUTTON_DISPLAY_CLOSECOMBAT_CHAIN_HIT = 38,
	BUTTON_DISPLAY_PISTOL_FINISHER = 39,
	BUTTON_DISPLAY_PEEK_VENT = 40,
	BUTTON_DISPLAY_PEEK_CLOSET = 41,
	BUTTON_DISPLAY_CLIMB_LADDER = 42,
	BUTTON_DISPLAY_SLIDE_LADDER = 43,
	BUTTON_DISPLAY_LEDGE = 44,
	BUTTON_DISPLAY_LEDGE_STEPON = 45,
	BUTTON_DISPLAY_LEDGEJUMP = 46,
	BUTTON_DISPLAY_LEDGE_PULL_UP = 47,
	BUTTON_DISPLAY_LEDGE_CLIMB_DOWN = 48,
	BUTTON_DISPLAY_LEDGE_DROP_DOWN = 49,
	BUTTON_DISPLAY_WINDOW = 50,
	BUTTON_DISPLAY_WINDOWSNEAK = 51,
	BUTTON_DISPLAY_PULLVICTIM = 52,
	BUTTON_DISPLAY_PUSHVICTIM = 53,
	BUTTON_DISPLAY_SURRENDER = 54,
	BUTTON_DISPLAY_COVERTOCOVER = 55,
	BUTTON_DISPLAY_COVERCORNER = 56,
	BUTTON_DISPLAY_COVEREXITFORWARD = 57,
	BUTTON_DISPLAY_COVERSCALEEXIT = 58,
	BUTTON_DISPLAY_TAKEDISGUISE = 59,
	BUTTON_DISPLAY_DROPBODY = 60,
	BUTTON_DISPLAY_ABORT_CHECKPOINTDOOR = 61,
	BUTTON_DISPLAY_QUICKSWAP = 62,
	BUTTON_DISPLAY_OPERATE_LEVER = 63,
	BUTTON_DISPLAY_CLOSECOMBAT_CHAIN_HIGH = 64,
	BUTTON_DISPLAY_CLOSECOMBAT_CHAIN_LOW = 65,
	BUTTON_DISPLAY_CLOSECOMBAT_CHAIN_COUNTER = 66,
	BUTTON_DISPLAY_FIBERWIRE_KILL = 67,
	BUTTON_DISPLAY_DROP_ITEM = 68,
	BUTTON_DISPLAY_ABORT_MINIGAME = 69,
	BUTTON_DISPLAY_CONTRACT_MARK = 70,
	BUTTON_DISPLAY_CONTRACT_UNMARK = 71,
	BUTTON_DISPLAY_COMPLY = 72,
	BUTTON_DISPLAY_MAX = 73,
};

// 0x0000000142A97B10 (Size: 0x4)
enum class EActorLookAtTargetType
{
	eALAT_Invalid = 0,
	eALAT_PositionTarget = 1,
	eALAT_KnownEntityType = 2,
	eALAT_PointOfInterest = 3,
	eALAT_Hero = 4,
	eALAT_Screenplay = 5,
	eALAPT_Max = 6,
};

// 0x0000000142AE16C0 (Size: 0x4)
enum class ReverbFidelity
{
	Low = 0,
	Medium = 1,
	High = 2,
};

// 0x0000000142AF32E0 (Size: 0x4)
enum class EDetectedNatType
{
	NAT_UNSET = 0,
	NAT_1 = 1,
	NAT_2 = 2,
	NAT_3 = 3,
};

// 0x0000000142A985B0 (Size: 0x4)
enum class ECharacterAnimChildNetworkSlot
{
	eCACNS_None = 0,
	eCACNS_FlavorIdle_FB = 1,
	eCACNS_FlavorIdle_RH = 2,
	eCACNS_FlavorIdle_LH = 3,
	eCACNS_Interaction_RH = 4,
	eCACNS_Interaction_LH = 5,
};

// 0x0000000142A96028 (Size: 0x4)
enum class ECameraOffset_old
{
	eCameraOffset_Center = 0,
	eCameraOffset_Left = 1,
	eCameraOffset_Right = 2,
};

// 0x0000000142AF4930 (Size: 0x1)
enum class EAsyncRaycastsGroup
{
	eAsyncRaycasts_Gameplay = 0,
	eAsyncRaycasts_ParticlesSoundCloth = 1,
	eAsyncRaycasts_UNUSED_LAST = 2,
};

// 0x0000000142A97620 (Size: 0x4)
enum class EClipSpawnAxis
{
	eCSA_XPos = 0,
	eCSA_XNeg = 1,
	eCSA_YPos = 2,
	eCSA_YNeg = 3,
	eCSA_ZPos = 4,
	eCSA_ZNeg = 5,
};

// 0x00000001422CA198 (Size: 0x4)
enum class EDeathContext
{
	eDC_UNDEFINED = 0,
	eDC_NOT_HERO = 1,
	eDC_HIDDEN = 2,
	eDC_ACCIDENT = 3,
	eDC_MURDER = 4,
};

// 0x0000000143CDF380 (Size: 0x1)
enum class EParticleSpritePivotLocation
{
	CENTER_PIVOT = 0,
	BOTTOM_PIVOT = 1,
	TOP_PIVOT = 2,
};

// 0x0000000142A9AC90 (Size: 0x4)
enum class EDynamicVariableType
{
	DV_Invalid = -1,
	DV_Me = 0,
	DV_Hitman = 1,
	DV_InSight = 2,
	DV_RecentlyInSight = 3,
	DV_Sounds = 4,
	DV_NumVariables = 5,
};

// 0x0000000142AA9D80 (Size: 0x4)
enum class EPostProcessorComponentType
{
	MRP_LOOKAT = 1,
	MRP_AIM = 2,
	MRP_LEDGEFEETLOCK = 16,
	MRP_LEDGEHANG = 32,
	MRP_IMPACT = 1024,
	MRP_BLINDFIRE = 2048,
};

// 0x0000000142AE3348 (Size: 0x4)
enum class EActivationPriority
{
	eActivatable_First = 0,
	eActivatable_PlayModeAddedPhysics = 1,
	eActivatable_DestructiblePhysics = 2,
	eActivatable_PhysicsWind = 3,
	eActivatable_Physics = 4,
	eActivatable_PhysicsDone = 5,
	eActivatable_Keywords = 6,
	eActivatable_EventChannel = 7,
	eActivatable_Items = 8,
	eActivatable_Actor = 9,
	eActivatable_Hitman = 10,
	eActivatable_AnimPlayer = 11,
	eActivatable_Sequence = 12,
	eActivatable_SpawnPoint = 13,
	eActivatable_CoverPlane = 14,
	eActivatable_GuardPoint = 15,
	eActivatable_Guide = 16,
	eActivatable_CombatAct = 17,
	eActivatable_CombatAttractor = 18,
	eActivatable_SequenceController = 19,
	eActivatable_KnownEntityAspects = 20,
	eActivatable_AIReasoningGrid = 21,
	eActivatable_HM5Zone = 22,
	eActivatable_Crowds = 23,
	eActivatable_ChildNetworkAct = 24,
	eActivatable_Door = 25,
	eActivatable_UI_Setup = 26,
	eActivatable_NormalGameplay = 27,
	eActivatable_NormalGameplay_Condition = 28,
	eActivatable_NormalGameplay_Values = 29,
	eActivatable_NormalGameplay_State = 30,
	eActivatable_HeroSpawns = 31,
	eActivatable_UI = 32,
	eActivatable_Locomotion = 33,
	eActivatable_Timers = 34,
	eActivatable_AreaTriggers = 35,
	eActivatable_Default = 36,
	eActivatable_GameEventListener = 37,
	eLAST_ACTIVATION_PRIORITY = 38,
};

// 0x0000000142A97D40 (Size: 0x4)
enum class EDialogueLine
{
	Hello = 0,
	MoveAlong = 1,
	WhatsGoingOn = 2,
	DropWeapon01 = 3,
	DropWeapon02 = 4,
	DropWeapon03 = 5,
	DropWeapon04 = 6,
	DropWeaponSecondWarning = 7,
	Comply01 = 8,
	Comply02 = 9,
	YouAskedForIt = 10,
	DropWeapon_Single01 = 11,
	DropWeapon_Double01 = 12,
	DropWeapon_Multiple01 = 13,
	DropWeapon_Comply_Single01 = 14,
	DropWeapon_Comply_Double01 = 15,
	DropWeapon_Comply_Multiple01 = 16,
	DropWeapon_RunAway01 = 17,
	DropWeapon_RunAway_Comply01 = 18,
	DropWeapon_Escalate_Single01 = 19,
	DropWeapon_Escalate_Double01 = 20,
	DropWeapon_Escalate_Multiple01 = 21,
};

// 0x0000000142AED650 (Size: 0x4)
enum class ERegionId
{
	RegionId_Default = 0,
	RegionId_Japan = 1,
	RegionId_Asia = 2,
};

// 0x0000000142A98F70 (Size: 0x4)
enum class EHM5SoundRicochetType
{
	ESRT_VARIATION1 = 0,
	ESRT_VARIATION2 = 1,
};

// 0x0000000143F113E0 (Size: 0x4)
enum class ECollidableShape
{
	ECOLLIDABLESHAPE_SPHERE = 0,
	ECOLLIDABLESHAPE_CAPSULE = 1,
	ECOLLIDABLESHAPE_BOX = 2,
};

// 0x0000000142A9A318 (Size: 0x4)
enum class EPersistentBoolDataSyncType
{
	ePBDST_None = 0,
	ePBDST_ServerAuthoritative = 1,
	ePBDST_Full = 2,
};

// 0x0000000142AB1EE0 (Size: 0x4)
enum class EItemHUDType
{
	EIHT_None = 0,
	EIHT_GhostItem = 1,
	EIHT_OutbreakHealingItem = 2,
};

// 0x0000000142A99F58 (Size: 0x4)
enum class EDisposalType
{
	DISPOSAL_UNDEFINED = 0,
	DISPOSAL_NOTHING = 1,
	DISPOSAL_HOLSTER = 2,
	DISPOSAL_HIDE = 3,
	DISPOSAL_PLACE = 4,
	DISPOSAL_DROP = 5,
	DISPOSAL_DROP_HIDE = 6,
	DISPOSAL_DESTROY = 7,
	DISPOSAL_COUNT = 8,
};

// 0x00000001422CA798 (Size: 0x4)
enum class eHolsterAbility
{
	eUndecided = 0,
	eHolsteringAllowed = 1,
	eHolsterTemporarilyOnly = 2,
	eHolsterSecondaryOnly = 3,
	eHolsterQuestStorage = 4,
	eCanNotBeHolstered = 5,
};

// 0x0000000142AE1060 (Size: 0x4)
enum class EDialogEventItemType
{
	eDEIT_WavFile = 1,
	eDEIT_RandomContainer = 2,
	eDEIT_SwitchContainer = 3,
	eDEIT_SequenceContainer = 4,
	eDEIT_Invalid = 15,
};

// 0x0000000142A92798 (Size: 0x4)
enum class eVRFadeType
{
	FadeToGame = 0,
	FadeToBlack = 1,
	FadeToGame_HighPriority = 2,
	FadeToBlack_HighPriority = 3,
	CutToGame = 4,
	CutToBlack = 5,
	KeepCurrent = 6,
};

// 0x0000000143E62E20 (Size: 0x4)
enum class EFontFlags
{
	FV_Original = 16,
	FV_NoAutoFit = 32,
	FV_Normal = 0,
	FV_Italic = 1,
	FV_Bold = 2,
	FV_BoldItalic = 3,
	FV_FauxItalic = 4,
	FV_FauxBold = 8,
	FV_FauxBoldItalic = 12,
};

// 0x0000000142A7A648 (Size: 0x4)
enum class EActorAnimationOrder
{
	AAO_None = 0,
	AAO_Stand = 1,
	AAO_Move = 2,
	AAO_React = 3,
	AAO_Act = 4,
	AAO_MoveToAct = 5,
	AAO_MoveToCover = 6,
	AAO_ShootFromCover = 7,
	AAO_PeekFromCover = 8,
	AAO_Death = 9,
	AAO_Impact = 10,
	AAO_Controlled = 11,
};

// 0x0000000142A82F78 (Size: 0x4)
enum class EActorRank
{
	AR_Default = 0,
	AR_Elite = 1,
	AR_Cop = 2,
	AR_Goon = 3,
};

// 0x0000000142A91FA0 (Size: 0x4)
enum class EActorPerceptionSensitivity
{
	APS_AMBIENT_DEAFBLIND = 0,
	APS_AMBIENT_SLEEPING = 1,
	APS_AMBIENT_PREOCCUPIED = 2,
	APS_AMBIENT = 3,
	APS_ALERT_LOW = 4,
	APS_ALERT = 5,
	APS_COMBAT = 6,
	APS_SPIDER_SENSE = 7,
};

// 0x0000000142A96370 (Size: 0x4)
enum class EInventoryConfigCustomRule
{
	EICCR_None = 0,
	EICCR_Surrender = 1,
	EICCR_TempDropLeftHandItem = 2,
};

// 0x0000000142AB2858 (Size: 0x4)
enum class ESoundCollisionType
{
	Impact = 0,
	Rolling = 1,
	Sliding = 2,
};

// 0x0000000142A962C0 (Size: 0x4)
enum class EBoolStateRequirement
{
	eBSR_Any = 0,
	eBSR_RequireTrue = 1,
	eBSR_RequireFalse = 2,
};

// 0x0000000142AA51A0 (Size: 0x4)
enum class EAutoScanMode
{
	ASM_GEOMETRY = 0,
	ASM_VOLUMEBOX = 1,
};

// 0x0000000142AF48D0 (Size: 0x1)
enum class EMaterialRegistrationState
{
	eMRS_None = 0,
	eMRS_Pending = 1,
	eMRS_Success = 2,
	eMRS_Failed = 3,
};

// 0x0000000142A8BBB0 (Size: 0x4)
enum class EDebugExclusionLayerState
{
	DEBUGELSTATE_UNBLOCKED = 0,
	DEBUGELSTATE_BLOCKED = 1,
	DEBUGELSTATE_UNKNOWN = 2,
};

// 0x0000000142AF4708 (Size: 0x4)
enum class EPhysicsObjectType
{
	EPHYSICSOBJECTTYPE_UNKNOWN = 0,
	EPHYSICSOBJECTTYPE_DYNAMIC = 1,
	EPHYSICSOBJECTTYPE_KINEMATIC = 2,
	EPHYSICSOBJECTTYPE_STATIC = 3,
};

// 0x0000000142AB1F28 (Size: 0x4)
enum class eItemRarity
{
	ITEMRARITY_COMMON = 0,
	ITEMRARITY_UNCOMMON = 1,
	ITEMRARITY_RARE = 2,
};

// 0x0000000142AB20F0 (Size: 0x4)
enum class EHM5SoundBulletType
{
	ESBT_SMALL = 0,
	ESBT_MEDIUM = 1,
	ESBT_LARGE = 2,
	ESBT_GORGEOUS = 3,
	ESBT_ANY = 4,
};

// 0x0000000143E61920 (Size: 0x4)
enum class ESequencePreviewState
{
	PREVIEW_STOPPED = 0,
	PREVIEW_PLAYING = 1,
	PREVIEW_PAUSED = 2,
};

// 0x0000000142A8BB80 (Size: 0x4)
enum class ESituationType
{
	AIST_Any = 0,
	AIST_DetectedInPrivate = 1,
	AIST_HandleDistraction = 2,
	AIST_Spectator = 3,
	AIST_InvestigateWeapon = 4,
	AIST_GuardBody = 5,
	AIST_Entourage = 6,
	AIST_HandleTrespassing = 7,
	AIST_DeadBody = 8,
	AIST_InvestigateCautious = 9,
	AIST_Sentry = 10,
	AIST_HandleDisguise = 11,
	AIST_SC_Curious = 12,
	AIST_SC_Alerted = 13,
	AIST_SC_Combat = 14,
	AIST_SniperCombat = 15,
	AIST_Arrest = 16,
	AIST_StandOff = 17,
	AIST_RecoverUnconscious = 18,
	AIST_AvoidExplosion = 19,
	AIST_Evacuate = 20,
	AIST_ProtoCombat = 21,
	AIST_DangerousArea = 22,
	AIST_CloseCombat = 23,
	AIST_Infected = 24,
	ESituationType_Count = 25,
};

// 0x0000000142AE3768 (Size: 0x4)
enum class EExtendedPropertyType
{
	TYPE_RESOURCEPTR = 0,
	TYPE_INT32 = 1,
	TYPE_UINT32 = 2,
	TYPE_FLOAT = 3,
	TYPE_STRING = 4,
	TYPE_BOOL = 5,
	TYPE_ENTITYREF = 6,
	TYPE_VARIANT = 7,
};

// 0x0000000142AB31E0 (Size: 0x4)
enum class EIntelStage
{
	eIT_MAIN = 0,
	eIT_STAGE = 1,
	eIT_HINT = 2,
};

// 0x0000000142AB1E98 (Size: 0x4)
enum class eItemSize
{
	ITEMSIZE_SMALL = 0,
	ITEMSIZE_MEDIUM = 1,
	ITEMSIZE_LARGE = 2,
};

// 0x0000000142A9DCE0 (Size: 0x4)
enum class ESmartBehaviorOrder
{
	SBO_Stand = 0,
	SBO_Move = 1,
	SBO_React = 2,
	SBO_Act = 3,
	SBO_MoveToAct = 4,
	SBO_MoveToCover = 5,
	SBO_ShootFromCover = 6,
	SBO_Death = 7,
	SBO_Teleport = 8,
};

// 0x0000000142A99030 (Size: 0x4)
enum class EButtonPressType
{
	BUTTON_PRESS = 0,
	BUTTON_HOLD = 1,
	BUTTON_REPEAT = 2,
	BUTTON_TAP = 3,
	BUTTON_ROTATE_CCW = 4,
	BUTTON_PRESS_TYPE_MAX = 5,
};

// 0x00000001422CA1F8 (Size: 0x4)
enum class EWeaponAnimationCategory
{
	eWAC_Undefined = 0,
	eWAC_Pistol = 1,
	eWAC_Revolver = 2,
	eWAC_SMG_2H = 3,
	eWAC_SMG_1H = 4,
	eWAC_Rifle = 5,
	eWAC_Sniper = 6,
	eWAC_Shotgun_Pump = 7,
	eWAC_Shotgun_Semi = 8,
};

// 0x0000000142A93CF0 (Size: 0x4)
enum class EAIModifierScope
{
	AIMS_Volume = 0,
	AIMS_Behavior = 1,
	AIMS_Role = 2,
	AIMS_Item = 3,
	AIMS_Situation = 4,
	AIMS_Outfit = 5,
	AIMS_Override = 6,
	AIMS_Status = 7,
};

// 0x0000000142A926D8 (Size: 0x4)
enum class EVRConfigHeadAnchorMode
{
	EVRCHAM_HeadBone = 0,
	EVRCHAM_CapsuleBased = 1,
	EVRCHAM_CapsuleGrid = 2,
	EVRCHAM_LockPosition = 3,
	EVRCHAM_KeepCurrent = 4,
};

// 0x0000000142AF46C0 (Size: 0x4)
enum class EClothColliderFilter
{
	EClothColliderFilter_Environment = 0,
	EClothColliderFilter_Character = 1,
	EClothColliderFilter_Character_Environment = 2,
};

// 0x0000000142A97E60 (Size: 0x4)
enum class EOnlineEventInvestigationType
{
	OEIT_Generic = 0,
	OEIT_HearBulletImpact = 1,
	OEIT_HearFootsteps = 2,
	OEIT_CarAlarm = 3,
	OEIT_HearBark = 4,
	OEIT_HearPain = 5,
	OEIT_HearRadio = 6,
	OEIT_HearItemToss = 7,
	OEIT_SeeItemToss = 8,
	OEIT_HearAccident = 9,
	OEIT_CuriousSound = 10,
	OEIT_CuriousItemSound = 11,
	OEIT_SeeWeapon = 12,
	OEIT_SeeItem = 13,
	OEIT_Perceptible = 14,
	OEIT_Toss = 15,
	OEIT_CrowdCurious = 16,
	OEIT_CameraDefect = 17,
};

// 0x0000000142A96E70 (Size: 0x4)
enum class EWeaponUpgradeIcon
{
	WEAPON_UPGRADE_ICON_NONE = 0,
	WEAPON_UPGRADE_ICON_SILENCER = 1,
	WEAPON_UPGRADE_ICON_RED_DOT_SIGHT = 2,
	WEAPON_UPGRADE_ICON_AMMUNITION = 3,
	WEAPON_UPGRADE_ICON_MAGAZINE = 4,
	WEAPON_UPGRADE_ICON_EXTCLIP = 5,
	WEAPON_UPGRADE_ICON_SHELLS = 6,
	WEAPON_UPGRADE_ICON_SLIDE = 7,
	WEAPON_UPGRADE_ICON_BOLT = 8,
	WEAPON_UPGRADE_ICON_BARREL = 9,
	WEAPON_UPGRADE_ICON_HAMMER = 10,
	WEAPON_UPGRADE_ICON_CHUTE = 11,
	WEAPON_UPGRADE_ICON_DUALWIELD = 12,
	WEAPON_UPGRADE_ICON_MAGNUM = 13,
	WEAPON_UPGRADE_ICON_STOCK = 14,
};

// 0x0000000142A986D0 (Size: 0x4)
enum class EHitmanPermissionFlag
{
	eHPFlag_InventorySelect = 0,
	eHPFlag_CanHolsterItem = 1,
	eHPFlag_CanDropItem = 2,
	eHPFlag_CanDualWield = 3,
	eHPFlag_CameraControl = 4,
	eHPFlag_MovementControl = 5,
	eHPFlag_AimControl = 6,
	eHPFlag_CanOpenNotebook = 7,
	eHPFlag_CanOpenPauseMenu = 8,
	eHPFlag_PermissionsNUM = 9,
};

// 0x0000000142A97F80 (Size: 0x4)
enum class ECharSetCharacterType
{
	ECSCT_Actor = 0,
	ECSCT_Nude = 1,
	ECSCT_HeroA = 2,
};

// 0x0000000142A941A0 (Size: 0x4)
enum class EStandRepositionStrategy
{
	SRS_InPlaceRepositioning = 0,
	SRS_NoRepositioning = 1,
};

// 0x0000000142A91EA0 (Size: 0x4)
enum class EPlaceableType
{
	PLACEABLE_NOT = 0,
	PLACEABLE_FULL_PHYSICS = 1,
	PLACEABLE_SLEEP_PHYSICS = 2,
	PLACEABLE_NO_PHYSICS = 3,
	PLACEABLE_ATTACH = 4,
};

// 0x0000000142A94410 (Size: 0x4)
enum class EAIModifiers
{
	AIM_Invalid = 0,
	AIM_IgnoreLowNoise = 1,
	AIM_IgnoreHitmanPropToss = 2,
	AIM_IgnoreAnnoyingHitman = 4,
	AIM_IgnoreSneakyHitman = 8,
	AIM_IgnoreAgileHitman = 16,
	AIM_IgnoreSillyHitman = 30,
	AIM_PreferredInvestigator = 32,
	AIM_AccidentShy = 64,
	AIM_PreferredAccidentInvestigator = 128,
	AIM_BlockFiberWireInteraction = 256,
	AIM_BlockCloseCombatInteraction = 512,
	AIM_BlockDragBodyInteraction = 1024,
	AIM_BlockAllInteractions = 1792,
	AIM_IgnoreDistractions = 2048,
	AIM_IgnoreTrespassing = 4096,
	AIM_IgnoreWeapons = 8192,
	AIM_IgnoreLockdown = 16384,
	AIM_DisableHelpCivilian = 32768,
	AIM_WantsPrivacy = 65536,
	AIM_ConversationHelper = 131072,
	AIM_ConversationHelperFast = 262144,
	AIM_OneHitpoint = 524288,
	AIM_BlockDeadlyThrow = 1048576,
	AIM_SuppressSocialGreeting = 2097152,
	AIM_NeverInvestigateAccidents = 4194304,
	AIM_BlockDeath = 8388608,
	AIM_IgnoreDeadBody = 16777216,
	AIM_NeverSpectate = 33554432,
	AIM_DisableDeadBodySensor = 67108864,
	AIM_DeafAndBlind = 134217728,
};

// 0x00000001422CA4A8 (Size: 0x4)
enum class EAISharedEventType
{
	AISET_None = 0,
	AISET_StandOffCrowdReactionDone = 1,
	AISET_Shoot = 2,
	AISET_ShootBlind = 3,
	AISET_Scared = 4,
	AISET_CloseCombatRunIn = 5,
	AISET_CloseCombatArrest = 6,
	AISET_ReadyForCloseCombatArrest = 7,
	AISET_DeadByAccident = 8,
	AISET_SituationConversation = 9,
	AISET_LAST_BOOLEAN_EVENT = 10,
	AISET_IllegalBehavior = 11,
	AISET_BeingWatched = 12,
	AISET_Sneaking = 13,
	AISET_Squatting = 14,
	AISET_Agility = 15,
	AISET_IllegalAgility = 16,
	AISET_ChangingOutfit = 17,
	AISET_ChangedOutfit = 18,
	AISET_CoverToCover = 19,
	AISET_Trespassing = 20,
	AISET_InTrespassZone = 21,
	AISET_InDisguiseZone = 22,
	AISET_DraggingBody = 23,
	AISET_KillingWithFiberwire = 24,
	AISET_KillingWithPull = 25,
	AISET_KillingWithPush = 26,
	AISET_KillingWithKick = 27,
	AISET_KillingWithKnife = 28,
	AISET_KillingWithDeadlyThrow = 29,
	AISET_PullingFromLedge = 30,
	AISET_PacifyingWithPull = 31,
	AISET_PacifyingWithPush = 32,
	AISET_PacifyingWithKick = 33,
	AISET_PacifyingWithKnockDownThrow = 34,
	AISET_PacifyingWithStrangle = 35,
	AISET_PacifyingWithKnife = 36,
	AISET_ThrowingSomething = 37,
	AISET_ThrowingExplosives = 38,
	AISET_KnockingDown = 39,
	AISET_InCloset = 40,
	AISET_InNpcUnreachableArea = 41,
	AISET_Peeking = 42,
	AISET_EnteringCloset = 43,
	AISET_ExitingCloset = 44,
	AISET_InCover = 45,
	AISET_MovingInCover = 46,
	AISET_HiddenInCover = 47,
	AISET_HasWeapon = 48,
	AISET_WeaponEquipped = 49,
	AISET_WeaponFired = 50,
	AISET_WeaponReloading = 51,
	AISET_Aiming = 52,
	AISET_GuardDisguise = 53,
	AISET_PulledByHitmanOnLedge = 54,
	AISET_CombatNoHold = 55,
	AISET_CombatFireAtWill = 56,
	AISET_InOrderedPosition = 57,
	AISET_ORDERS_BEGIN = 58,
	AISET_Order_Act = 59,
	AISET_Order_Investigate = 60,
	AISET_Order_SearchPosition = 61,
	AISET_Order_Approach = 62,
	AISET_Order_GetHelp = 63,
	AISET_Order_StandDown = 64,
	AISET_Order_Escalate = 65,
	AISET_Order_Arrest = 66,
	AISET_Order_Avoid = 67,
	AISET_Order_Flee = 68,
	AISET_Order_Patrol = 69,
	AISET_Order_Reposition = 70,
	AISET_Order_Chase = 71,
	AISET_Order_AimFromPosition = 72,
	AISET_Order_HoldPosition = 73,
	AISET_Order_HoldCoverPosition = 74,
	AISET_Order_FightFromCover = 75,
	AISET_Order_FightFromPosition = 76,
	AISET_Order_ShootFromPosition = 77,
	AISET_Order_GuardPosition = 78,
	AISET_Order_GuardBody = 79,
	AISET_Order_WakeUpUnconscious = 80,
	AISET_Order_DragBody = 81,
	AISET_Order_TriggerAlarm = 82,
	AISET_Order_DispatchSuspectInfo = 83,
	AISET_Order_RecieveSuspectInfo = 84,
	AISET_Order_RequestBackup = 85,
	AISET_Order_ThrowFlashGrenade = 86,
	AISET_Order_CheckLastPosition = 87,
	AISET_Order_StandoffLastWarning = 88,
	AISET_Order_Evacuate = 89,
	AISET_Order_AgitatedBystander = 90,
	AISET_Order_CuriousBystander = 91,
	AISET_Order_Face = 92,
	AISET_Order_Holster = 93,
	AISET_Order_Unholster = 94,
	AISET_Order_MoveTo = 95,
	AISET_Order_JumpTo = 96,
	AISET_Order_FormationMove = 97,
	AISET_Order_SentryFrisk = 98,
	AISET_Order_SentryWarning = 99,
	AISET_Order_SentryGreeting = 100,
	AISET_Order_SentryCheckItem = 101,
	AISET_Order_SentryDemandPickUpItem = 102,
	AISET_Order_DeliverWeapon = 103,
	AISET_Order_RecoverUnconscious = 104,
	AISET_Order_GetOutfit = 105,
	AISET_Order_LockdownWarning = 106,
	AISET_Order_VIPEvacuateIdle = 107,
	AISET_Order_VIPSafeRoom = 108,
	AISET_Order_VIPSafeRoomTrespasser = 109,
	AISET_Order_VIPScared = 110,
	AISET_Order_DefendVIP = 111,
	AISET_Order_CautiousVIP = 112,
	AISET_Order_CautiousGuardVIP = 113,
	AISET_Order_EscortOut = 114,
	AISET_Order_MoveInCover = 115,
	AISET_Order_MoveToCover = 116,
	AISET_Order_Conversation = 117,
	AISET_Order_AttentionToPerson = 118,
	AISET_Order_WaitForItemHandled = 119,
	AISET_ORDERS_END = 120,
	AISET_IMPULSES_BEGIN = 121,
	AISET_Impulse_ReceiveHuntTarget = 122,
	AISET_Impulse_AckHuntTarget = 123,
	AISET_Impulse_TransmitHuntTarget = 124,
	AISET_Impulse_ActiveRadioCall = 125,
	AISET_IMPULSES_END = 126,
	AISET_ForceFullAttention = 127,
	AISET_InCameraView2D = 128,
	AISET_BeingLookedAt = 129,
	AISET_BeingAimedAt = 130,
	AISET_WasAimedAtRecently = 131,
	AISET_BeingShotAt = 132,
	AISET_BeingActuallyShotAt = 133,
	AISET_BeingFlanked = 134,
	AISET_BeingTouched = 135,
	AISET_BeingBumped = 136,
	AISET_BeingEscortedOut = 137,
	AISET_EscortingOut = 138,
	AISET_EscortOutFarewell = 139,
	AISET_HMTrespassing = 140,
	AISET_HMInEntryArea = 141,
	AISET_HMTakingDamage = 142,
	AISET_HumanShield = 143,
	AISET_IllegalAction = 144,
	AISET_IllegalActionSevere = 145,
	AISET_TakingKeyCard = 146,
	AISET_TakingSecurityTape = 147,
	AISET_DumpingBody = 148,
	AISET_Shooting = 149,
	AISET_BlindFire = 150,
	AISET_ShootingBallet = 151,
	AISET_Running = 152,
	AISET_Walking = 153,
	AISET_UsingKeyCard = 154,
	AISET_WeaponDropped = 155,
	AISET_WeaponPickedUp = 156,
	AISET_ItemPickedUp = 157,
	AISET_ItemDropped = 158,
	AISET_Surrendering = 159,
	AISET_RequestSurrender = 160,
	AISET_StandOffEscalated = 161,
	AISET_StandOffInvestigateSevere = 162,
	AISET_Standing = 163,
	AISET_Enforcer = 164,
	AISET_DisguiseEnforcer = 165,
	AISET_Dead = 166,
	AISET_DeadByUnnoticed = 167,
	AISET_DeadBySniper = 168,
	AISET_InMorgue = 169,
	AISET_InAccident = 170,
	AISET_Dying = 171,
	AISET_InInvestigateDisguise = 172,
	AISET_InArrest = 173,
	AISET_Arrestor = 174,
	AISET_InCombat = 175,
	AISET_InCombatWithGuards = 176,
	AISET_Hunted = 177,
	AISET_ForceHunted = 178,
	AISET_CloseCombat = 179,
	AISET_CloseCombatSlashing = 180,
	AISET_TakingProjectileDamage = 181,
	AISET_TakingHeadshotDamage = 182,
	AISET_TakingExplosionDamage = 183,
	AISET_TakingThrowDamage = 184,
	AISET_ForceKillHM = 185,
	AISET_Armed = 186,
	AISET_BeingHumanShield = 187,
	AISET_BeingPulledOutOfWindow = 188,
	AISET_BeingPushedOverRail = 189,
	AISET_BeingFiberwired = 190,
	AISET_BeingPulledFromLedge = 191,
	AISET_BeingDragged = 192,
	AISET_OnScreen = 193,
	AISET_ExplosionImminent = 194,
	AISET_DisguiseSafeZone = 195,
	AISET_DisguiseCanBlendIn = 196,
	AISET_DisguiseBlendIn = 197,
	AISET_DisguiseBroken = 198,
	AISET_InWarZone = 199,
	AISET_HearLockdownAlarm = 200,
	AISET_InCrowd = 201,
	AISET_InCrowdHighDensity = 202,
	AISET_InCrowdAlert = 203,
	AISET_InCrowdPanic = 204,
	AISET_HiddenByCrowd = 205,
	AISET_CrowdDisguise = 206,
	AISET_BeingStrangled = 207,
	AISET_BeingSnapNecked = 208,
	AISET_BeingKnockedDown = 209,
	AISET_BeingContextKilled = 210,
	AISET_CloseCombatTakedown = 211,
	AISET_ContextKill = 212,
	AISET_ExecutePistol = 213,
	AISET_PickingUpGuardedItem = 214,
	AISET_SedativePoison = 215,
	AISET_SpawnedActor = 216,
	AISET_SoundRadio = 217,
	AISET_Weapon = 218,
	AISET_Item = 219,
	AISET_ItemThrown = 220,
	AISET_OwnedByHM = 221,
	AISET_Coin = 222,
	AISET_InLimitVisionAreaZone = 223,
	AISET_InsideLimitVisionArea = 224,
	AISET_BlockedByLimitVisionArea = 225,
	AISET_AmbientOnly = 226,
	AISET_HasBeenInCombat = 227,
	AISET_HitByItem = 228,
	AISET_CloseCombatAllowed = 229,
	AISET_CollateralTarget = 230,
	AISET_HuntAct = 231,
	AISET_Sick = 232,
	AISET_Stunned = 233,
	AISET_Naked = 234,
	AISET_Investigated = 235,
	AISET_FreshBody = 236,
	AISET_SeenDeadlyThrowVictim = 237,
	AISET_IWillBeDeadlyThrowVictim = 238,
	AISET_Suspect = 239,
	AISET_BeingFrisked = 240,
	AISET_RequestFrisk = 241,
	AISET_FriskComplying = 242,
	AISET_FriskApproachReady = 243,
	AISET_FriskReady = 244,
	AISET_Frisked = 245,
	AISET_FriskFailed = 246,
	AISET_FriskFoundWeapon = 247,
	AISET_AntiSocial = 248,
	AISET_Introvert = 249,
	AISET_InLockdownZone = 250,
	AISET_EnteringLockdownZone = 251,
	AISET_InSentryZone = 252,
	AISET_InSentryWarningZone = 253,
	AISET_InSentryFriskWarningZone = 254,
	AISET_SuppressTrespassing = 255,
	AISET_ReportedDisturbance = 256,
	AISET_InLockdown = 257,
	AISET_ToldToEvacuate = 258,
	AISET_CurrentTarget = 259,
	AISET_RequestShowItem = 260,
	AISET_RequestComplying = 261,
	AISET_WokenByNPC = 262,
	AISET_Silly = 263,
	AISET_TriggerLockDownAlarm = 264,
	AISET_CombatFromEvacuate = 265,
	AISET_DontMakeFunPlease = 266,
	AISET_TempCrowdKnowledge = 267,
	AISET_Attached = 268,
	AISET_DontReact = 269,
	AISET_Sentry = 270,
	AISET_HardSentry = 271,
	AISET_FriskingSentry = 272,
	AISET_Guarded = 273,
	AISET_CloseCombatFinisher = 274,
	AISET_WasInCloseCombatSawAggressor = 275,
	AISET_Pacified = 276,
	AISET_SomeoneIsSniping = 277,
	AISET_FlashpointSeen = 278,
	AISET_SniperLocation = 279,
	AISET_WeaponContextKnown = 280,
	AISET_Distracted = 281,
	AISET_LockedInAgility = 282,
	AISET_ActorAlreadyAlive = 283,
	AISET_DraggingBodyBag = 284,
	AISET_UncosciousBlamingFailed = 285,
	AISET_VaultingOverObstacle = 286,
	AISET_ClimbingWindow = 287,
	AISET_Combat_Brave = 288,
	AISET_Combat_OneTimeBrave = 289,
	AISET_Combat_PrimaryRange = 290,
	AISET_Combat_ThrewFlashGrenade = 291,
	AISET_Combat_CloseToGuards = 292,
	AISET_Combat_RecentlySeen = 293,
	AISET_Combat_TargetSeenAtLeastOnce = 294,
	AISET_InTheAirDeadly = 295,
	AISET_InTheAir = 296,
	AISET_Landing = 297,
	AISET_InSentrySituation = 298,
	AISET_LeftDramaWithHM = 299,
	AISET_Wounded = 300,
	AISET_RecoveredFromWounded = 301,
	AISET_ReactedToTossAlerted = 302,
	AISET_ReactedToHitAlerted = 303,
	AISET_GettingHelp = 304,
	AISET_HelpingCivilian = 305,
	AISET_InvestigatingMurder = 306,
	AISET_InvestigatingMurderOrGunshot = 307,
	AISET_InvestigateDisguiseGroupLeader = 308,
	AISET_InvestigateDisguiseMovingBack = 309,
	AISET_BodyguardVIPDead = 310,
	AISET_SilentlyKilled = 311,
	AISET_SilentlyKilling = 312,
	AISET_SoundGunShot = 313,
	AISET_SoundHitmanGunShot = 314,
	AISET_SoundHitmanGunShotSilenced = 315,
	AISET_ChangingOutfitFromBody = 316,
	AISET_SpeedBoost = 317,
	AISET_ManhuntMember = 318,
	AISET_InvestigateDisguiseMember = 319,
	AISET_EvacuateAfterRecover = 320,
	AISET_Woozy = 321,
	AISET_HasAmbientEscort = 322,
	AISET_IsEscortingVIP = 323,
	AISET_StrangleVictim = 324,
	AISET_DontStandDownIfIdling = 325,
	AISET_Jumping = 326,
	AISET_GetHelpDone = 327,
	AISET_VIPHandleOwnCuriousInvestigation = 328,
	AISET_InDangerousArea = 329,
	AISET_RadioCallHelpComming = 330,
	AISET_RadioCallHelpFailed = 331,
	AISET_RadioCallHelpArrived = 332,
	AISET_SocialCooldown = 333,
	AISET_VIPAtEscapeNode = 334,
	AISET_VIPEscaping = 335,
	AISET_InterestingLocation = 336,
	AISET_SeeDeathExplained = 337,
	AISET_HMHasVictim = 338,
	AISET_PrivateSituationLeader = 339,
	AISET_LongTermMemorySetGoal = 340,
	AISET_ThrownByHitman = 341,
	AISET_Dropped = 342,
	AISET_InterestingItem = 343,
	AISET_InEvacuateTrespassGroup = 344,
	AISET_InRecoverUnconsciousGroup = 345,
	AISET_Revived = 346,
	AISET_IsBeggingForLife = 347,
	AISET_HMStunnedByNPCFlashGrenade = 348,
	AISET_Situation_Role_Leader = 349,
	AISET_Situation_Role_Assistant = 350,
	AISET_Situation_Role_AssitingGuard = 351,
	AISET_ReadytoPlayInvestigationConversation = 352,
	AISET_ReadytoPlayStandDownConversation = 353,
	AISET_ForcedLeader = 354,
	AISET_PropagatedByCivilian = 355,
	AISET_Distraction_State_LeaderSelected = 356,
	AISET_Distraction_State_Investigated = 357,
	AISET_Distraction_State_Resolved = 358,
	AISET_Distraction_State_Canceled = 359,
	AISET_Distraction_Target_BeingHandled = 360,
	AISET_Arrest_State_Approaching = 361,
	AISET_Arrest_State_Escorting = 362,
	AISET_Arrest_State_Guarding = 363,
	AISET_Arrest_ArrestReason = 364,
	AISET_Arrest_Warning_1 = 365,
	AISET_Arrest_Warning_2 = 366,
	AISET_Arrest_Warning_3 = 367,
	AISET_Arrest_Warning_Delay = 368,
	AISET_SC_Escalating = 369,
	AISET_SC_InCombatPosition = 370,
	AISET_SC_Shoot = 371,
	AISET_SC_PreventShooting = 372,
	AISET_SC_PreventChangeCombatPosition = 373,
	AISET_SC_CombatAct = 374,
	AISET_SC_InCombat = 375,
	AISET_SC_Investigator = 376,
	AISET_Infected = 377,
	AISET_Infected_Stage2 = 378,
	AISET_Infected_Stage3 = 379,
	AISET_Infection_Cured = 380,
	AISET_ENFORCER_DISABLE_FLAG_BEGIN = 381,
	AISET_Enforcer_Disable_HideInPlainSight = 382,
	AISET_ENFORCER_DISABLE_FLAG_END = 383,
	AISET_DYNAMIC_ENFORCER_FLAG_BEGIN = 384,
	AISET_DynamicEnforcer_SharedHitmanSensor = 385,
	AISET_DynamicEnforcer_NakedActor = 386,
	AISET_DynamicEnforcer_SeenItemThrown = 387,
	AISET_DynamicEnforcer_HitByItemOrCoin = 388,
	AISET_DynamicEnforcer_Setpiece = 389,
	AISET_DynamicEnforcer_SillyHitman = 390,
	AISET_DynamicEnforcer_PrivateArea = 391,
	AISET_DynamicEnforcer_SuspiciousMovement = 392,
	AISET_DYNAMIC_ENFORCER_FLAG_INCA_BEGIN = 393,
	AISET_DynamicEnforcer_Explosion = 394,
	AISET_DynamicEnforcer_GunshotSound = 395,
	AISET_DynamicEnforcer_BulletImpactSound = 396,
	AISET_DynamicEnforcer_CloseCombatSound = 397,
	AISET_DynamicEnforcer_DeadlyThrowVictim = 398,
	AISET_DynamicEnforcer_PacifyingThrowVictim = 399,
	AISET_DynamicEnforcer_SeenMurderVictimNotHeardGunshot = 400,
	AISET_DynamicEnforcer_SeenMurderVictimHeardGunshot = 401,
	AISET_DynamicEnforcer_MurderAttempt = 402,
	AISET_DynamicEnforcer_DeadBody = 403,
	AISET_DynamicEnforcer_PacifiedBody = 404,
	AISET_DynamicEnforcer_Hunt = 405,
	AISET_DYNAMIC_ENFORCER_FLAG_INCA_END = 406,
	AISET_DYNAMIC_ENFORCER_FLAG_END = 407,
	AISET_DYNAMIC_ENFORCER_DISABLE_FLAG_BEGIN = 408,
	AISET_DynamicEnforcer_Disable_CivilianInInvestigateCautious = 409,
	AISET_DYNAMIC_ENFORCER_DISABLE_FLAG_END = 410,
	AISET_DYNAMIC_ENFORCER_CIVILIAN_DISGUISE_ONLY_FLAG_BEGIN = 411,
	AISET_DynamicEnforcer_InvestigateWeapon = 412,
	AISET_DYNAMIC_ENFORCER_CIVILIAN_DISGUISE_ONLY_FLAG_END = 413,
	AISET_DYNAMIC_ENFORCER_ARREST_REASON_BEGIN = 414,
	AISET_DynamicEnforcer_ArrestReason_Murder = 415,
	AISET_DynamicEnforcer_ArrestReason_MurderAttempt = 416,
	AISET_DynamicEnforcer_ArrestReason_HitByItemOrCoin = 417,
	AISET_DynamicEnforcer_ArrestReason_NearDeadBody = 418,
	AISET_DynamicEnforcer_ArrestReason_NearPacifiedBody = 419,
	AISET_DynamicEnforcer_ArrestReason_GunshotSound = 420,
	AISET_DynamicEnforcer_ArrestReason_CloseCombatSound = 421,
	AISET_DynamicEnforcer_ArrestReason_BulletImpactSound = 422,
	AISET_DynamicEnforcer_ArrestReason_Hunt = 423,
	AISET_DynamicEnforcer_ArrestReason_Explosion = 424,
	AISET_DynamicEnforcer_ArrestReason_PrivateArea = 425,
	AISET_DynamicEnforcer_ArrestReason_Weapon = 426,
	AISET_DynamicEnforcer_ArrestReason_Setpiece = 427,
	AISET_DynamicEnforcer_ArrestReason_KnockdownThrow = 428,
	AISET_DynamicEnforcer_ArrestReason_SillyHitman = 429,
	AISET_DYNAMIC_ENFORCER_ARREST_REASON_END = 430,
};

// 0x0000000142A98B50 (Size: 0x4)
enum class EBulletType
{
	BULLET_TYPE_NONE = 0,
	BULLET_TYPE_GUN = 1,
	BULLET_TYPE_REVOLVER = 2,
	BULLET_TYPE_SMG = 3,
	BULLET_TYPE_MG = 4,
	BULLET_TYPE_RIFLE = 5,
	BULLET_TYPE_SHOTGUN = 6,
	BULLET_TYPE_SNIPER = 7,
	BULLET_TYPE_RPG = 8,
};

// 0x0000000142A96560 (Size: 0x4)
enum class EVRConfigCustomEvent
{
	EVRCCE_ClosetInside = 0,
	EVRCCE_ClosetExiting = 1,
	EVRCCE_DrainPipeMounted = 2,
	EVRCCE_DrainPipeStartedDismounting = 3,
	EVRCCE_LadderMounted = 4,
	EVRCCE_LadderStartedDismounting = 5,
	EVRCCE_LedgeChange = 6,
	EVRCCE_LedgeShimmyStart = 7,
	EVRCCE_LedgeShimmyStop = 8,
	EVRCCE_PeekEntered = 9,
	EVRCCE_PeekStartedExiting = 10,
	EVRCCE_FriskStartedTurning = 11,
	EVRCCE_FriskEndedTurning = 12,
	EVRCCE_ShowItemStartedTurning = 13,
	EVRCCE_ShowItemEndedTurning = 14,
	EVRCCE_SubactionAnimationStarted = 15,
	EVRCCE_SubactionAnimation_Hide = 16,
	EVRCCE_FocussedInteractionEntered = 17,
	EVRCCE_FocussedInteractionStartedExiting = 18,
	EVRCCE_DisguiseSafeZoneEntered = 19,
	EVRCCE_DisguiseSafeZoneStartedExiting = 20,
	EVRCCE_SniperModeEnter = 21,
	EVRCCE_SniperModeEntered = 22,
	EVRCCE_SniperModeExit = 23,
	EVRCCE_SniperModeExited = 24,
	EVRCCE_VictimMovement0 = 25,
	EVRCCE_VictimMovement1 = 26,
	EVRCCE_VictimMovement2 = 27,
	EVRCCE_VictimMovement3 = 28,
	EVRCCE_VictimMovementRemoveControl = 29,
	EVRCCE_AgilityLowVault = 30,
	EVRCCE_AgilityHighVault = 31,
	EVRCCE_AgilityRemoveControl = 32,
	EVRCCE_FiberwireStartPriming = 33,
	EVRCCE_FiberwireStopPriming = 34,
	EVRCCE_ToiletDrownEntered = 35,
	EVRCCE_ToiletDrownExited = 36,
	EVRCCE_CloseCombatStartPriming = 37,
	EVRCCE_CloseCombatStopPriming = 38,
	EVRCCE_SilentTakedownEnterActivationArea = 39,
	EVRCCE_SilentTakedownExitActivationArea = 40,
	EVRCCE_SilentTakedownInstaPacification = 41,
	EVRCCE_SnapNeckEnterActivationArea = 42,
	EVRCCE_SnapNeckExitActivationArea = 43,
	EVRCCE_TeleportStart = 44,
	EVRCCE_TeleportEnd = 45,
};

// 0x0000000142A7B6D8 (Size: 0x4)
enum class EHUDElement
{
	HUD_ELEMENT_NONE = 0,
	HUD_ELEMENT_MINIMAP = 1,
	HUD_ELEMENT_DISGUISE = 2,
	HUD_ELEMENT_WEAPON_DISPLAY = 4,
	HUD_ELEMENT_FOCUS_BAR = 8,
	HUD_ELEMENT_RETICULES = 16,
	HUD_ELEMENT_WEAPON_SELECTOR = 32,
	HUD_ELEMENT_SPECIAL_BAR = 64,
	HUD_ELEMENT_TEXT_MESSAGES = 128,
	HUD_ELEMENT_CONTRACT_MARKS = 256,
	HUD_ELEMENT_RATING_UPDATE = 512,
	HUD_ELEMENT_RANKING = 1024,
	HUD_ELEMENT_CHALLENGES = 2048,
	HUD_ELEMENT_CUSTOM_TEXTS = 4096,
	HUD_ELEMENT_ACTION_BUTTONS = 8192,
	HUD_ELEMENT_ATTENTION_PEAKS = 16384,
	HUD_ELEMENT_RATING_TRACKER = 32768,
	HUD_ELEMENT_TARGET_TRACKER = 65536,
	HUD_ELEMENT_HINTS = 131072,
	HUD_ELEMENT_CONTRACT_SCORING = 262144,
	HUD_ELEMENT_TUTORIAL = 524288,
	HUD_ELEMENT_HEALTH_BAR = 1048576,
	HUD_ELEMENT_OBJECTIVES = 2097152,
	HUD_ALL_ELEMENTS = 8388607,
};

// 0x0000000142AB1F70 (Size: 0x4)
enum class EMassImpulseType
{
	eMIT_None = 0,
	eMIT_Explosion = 1,
	eMIT_ShockWave = 2,
	eMIT_ShockWaveNoExplosion = 3,
};

// 0x0000000142AE1E38 (Size: 0x4)
enum class EGait
{
	eGait_Normal = 0,
	eGait_Reposition = 1,
	eGait_Alert = 2,
	eGait_Scared = 3,
	eGait_Prone = 4,
	eGait_Dead = 5,
	eGait_Angry = 6,
	eGait_Applause = 7,
	eGait_BeatUp_000cm_01_Dual_A = 8,
	eGait_BeatUp_000cm_01_Dual_B = 9,
	eGait_BeatUp_000cm_02_Dual_A = 10,
	eGait_BeatUp_000cm_02_Dual_B = 11,
	eGait_BeatUp_Wall_Dual_A = 12,
	eGait_BeatUp_Wall_Dual_B = 13,
	eGait_Chatting = 14,
	eGait_Cheer = 15,
	eGait_Clap = 16,
	eGait_Climb_Up_Fall = 17,
	eGait_Concerned = 18,
	eGait_Couples_A = 19,
	eGait_Couples_B = 20,
	eGait_Couples_C = 21,
	eGait_Dance_Drunk = 22,
	eGait_Dance_Dual_A = 23,
	eGait_Dance_Dual_B = 24,
	eGait_Dance_Party = 25,
	eGait_Dance_Party_A = 26,
	eGait_Dance_Party_B = 27,
	eGait_Dance_Party_C = 28,
	eGait_Dance_Party_D = 29,
	eGait_Dance_Party_E = 30,
	eGait_Dance_Party_F = 31,
	eGait_Dance_Rave = 32,
	eGait_Dance_Rave_A = 33,
	eGait_Dance_Rave_B = 34,
	eGait_Dance_Rave_C = 35,
	eGait_Dance_Rave_D = 36,
	eGait_Dance_Rave_E = 37,
	eGait_Dance_Rave_F = 38,
	eGait_Dance_Rave_Zone_Out_A = 39,
	eGait_Dance_Rave_Zone_Out_B = 40,
	eGait_Dance_Rave_Zone_Out_C = 41,
	eGait_Dance_Rave_Zone_Out_D = 42,
	eGait_Dance_Rave_Zone_Out_E = 43,
	eGait_Dance_Rave_Zone_Out_F = 44,
	eGait_Dance_Rave_Zone_Out_G = 45,
	eGait_Dance_Rave_Zone_Out_H = 46,
	eGait_Excited = 47,
	eGait_Fanatic_Fans = 48,
	eGait_Freeze_A = 49,
	eGait_Freeze_B = 50,
	eGait_Freeze_C = 51,
	eGait_Freeze_Lean_Wall = 52,
	eGait_Haggle = 53,
	eGait_Interested = 54,
	eGait_Jeer = 55,
	eGait_Lean_Rail = 56,
	eGait_Lean_Wall = 57,
	eGait_Lie_WritheInPain = 58,
	eGait_LookAt_Race_A = 59,
	eGait_LookAt_Race_B = 60,
	eGait_LookUp_Excited = 61,
	eGait_Mingle = 62,
	eGait_Mingle_120cm = 63,
	eGait_Mingle_Drunk = 64,
	eGait_Mingle_Rave_A = 65,
	eGait_Mingle_Rave_B = 66,
	eGait_Mingle_Rave_C = 67,
	eGait_Mingle_Mumbai_A = 68,
	eGait_Mingle_Mumbai_B = 69,
	eGait_Mingle_Race = 70,
	eGait_Mingle_Race_Rail = 71,
	eGait_Mingle_Wall = 72,
	eGait_Pacing_Angry = 73,
	eGait_Party = 74,
	eGait_Protest = 75,
	eGait_Push_Gate = 76,
	eGait_Rally = 77,
	eGait_Reaction_TearGas = 78,
	eGait_Shocked = 79,
	eGait_Shop = 80,
	eGait_Sit_020cm = 81,
	eGait_Sit_040cm = 82,
	eGait_Sit_100cm = 83,
	eGait_Sit_ChairBasic = 84,
	eGait_Sit_ChairBasic_LeanForward = 85,
	eGait_Sit_Chair_Rave_A = 86,
	eGait_Sit_Chair_Rave_B = 87,
	eGait_Sit_Chair_Rave_C = 88,
	eGait_Sit_Ground_Hungover = 89,
	eGait_Squat_Relaxed = 90,
	eGait_Squat_Sorting = 91,
	eGait_Throw_Rice = 92,
	eGait_Wait_Excited = 93,
	eGait_Wait_InLine = 94,
	eGait_WarmHands_100cm = 95,
	eGait_Wave_Mexican = 96,
	eGait_Yell_Up = 97,
	eGait_Custom0 = 98,
	eGait_Custom1 = 99,
	eGait_Custom2 = 100,
	eGait_Custom3 = 101,
	eGait_Custom4 = 102,
	eGait_Custom5 = 103,
	eGait_Custom6 = 104,
	eGait_Custom7 = 105,
	eGait_Custom8 = 106,
	eGait_Custom9 = 107,
};

// 0x0000000142AB2108 (Size: 0x4)
enum class eWeaponOperation
{
	WO_SEMI_AUTO = 0,
	WO_FULL_AUTO = 1,
};

// 0x0000000142A94330 (Size: 0x4)
enum class EAccidentDeathContext
{
	eADC_DeathByAccident = 0,
	eADC_DeathBySniper = 1,
	eADC_DeathByPoison = 2,
	eADC_DeathByShot = 3,
};

// 0x0000000142AE3828 (Size: 0x4)
enum class EGameModeId
{
	GameMode_Invalid = -1,
	GameMode_Normal = 0,
	GameMode_Sniper = 1,
	GameMode_Versus = 2,
	GameMode_Max = 3,
};

// 0x0000000142AA5620 (Size: 0x4)
enum class EUIBusyState
{
	eBusyState_Saving = 0,
	eBusyState_Saving_Failed = 1,
	eBusyState_Saving_Success = 2,
	eBusyState_Online_Connecting = 3,
	eBusyState_Loading = 4,
	eBusyState_Fetching = 5,
	eBusyState_None = 6,
};

// 0x0000000142A98A90 (Size: 0x4)
enum class ECommunicationBarState
{
	COMMUNICATION_BAR_NONE = 0,
	COMMUNICATION_BAR_CLEAR = 1,
	COMMUNICATION_BAR_SEARCHING = 2,
	COMMUNICATION_BAR_SUSPICIOUS = 3,
	COMMUNICATION_BAR_HUNTING = 4,
	COMMUNICATION_BAR_HOSTILE = 5,
	COMMUNICATION_BAR_BLOOD_FOUND = 6,
	COMMUNICATION_BAR_BODY_FOUND = 7,
	COMMUNICATION_BAR_GUARDS_ALERTED = 8,
	COMMUNICATION_BAR_BACKUP_ARRIVED = 9,
};

// 0x0000000142A94140 (Size: 0x4)
enum class EMoveEndState
{
	MES_Moving = 0,
	MES_Stopping = 1,
	MES_Standing = 2,
};

// 0x0000000143E5F4E0 (Size: 0x4)
enum class EParticleModifierImpulseDirections
{
	TARGET_ZAXIS_DIRECTION = 0,
	TOWARDS_TARGET_PIVOT = 1,
	AWAY_FROM_TARGET_PIVOT = 2,
};

// 0x0000000142A8FC58 (Size: 0x4)
enum class EGameEventType
{
	GET_GameplayStart = 0,
	GET_GameplayStop = 1,
	GET_IntroCutStart = 2,
	GET_IntroCutEnd = 3,
	GET_ProfilingStart = 4,
	GET_SavegameRestored = 5,
	GET_PlayingAfterLoad = 6,
	GET_COUNT = 7,
};

// 0x0000000142A82EB0 (Size: 0x4)
enum class EActorAIState
{
	eAAIS_None = 0,
	eAAIS_Distracted = 1,
	eAAIS_PotentialThreat = 2,
	eAAIS_PotentialThreatDistracted = 3,
	eAAIS_PotentialThreatDisabled = 4,
	eAAIS_Aggressive = 5,
	eAAIS_EscortingOut = 6,
	eAAIS_Fleeing = 7,
	eAAIS_Unconscious = 8,
	eAAIS_Stunned = 9,
	eAAIS_Grenade = 10,
	eAAIS_DisabledInCombat = 11,
	eAAIS_Disabled = 12,
	eAAIS_Max = 13,
};

// 0x0000000142AE34F8 (Size: 0x4)
enum class EVirtualPlatformID
{
	DEFAULT = 0,
	PC = 256,
	PC_ENHANCED = 257,
	PS4 = 512,
	PS4_PRO = 513,
	XBONE = 768,
	XBONE_X = 769,
	STADIA = 1024,
	PS5 = 1280,
	XBSCARLETT = 1536,
	XBSCARLETT_ANACONDA = 1537,
	VR = 65536,
	VR_PC = 65792,
	VR_PS4 = 66048,
	VR_PS4_PRO = 66049,
	VR_PS5 = 66816,
	__SUB = 255,
	__BASE = 65280,
	__SYSTEM = 16711680,
};

// 0x0000000142AE3018 (Size: 0x4)
enum class EContinuity
{
	C0 = 0,
	C1 = 1,
	C2 = 2,
};

// 0x0000000142AB1F10 (Size: 0x4)
enum class EThrownCollisionSoundLoudness
{
	eLoudness_Default = 0,
	eLoudness_Low = 1,
	eLoudness_Normal = 2,
	eLoudness_Loud = 3,
};

// 0x00000001422CA100 (Size: 0x4)
enum class EDeathType
{
	eDT_UNDEFINED = 0,
	eDT_PACIFY = 1,
	eDT_KILL = 2,
	eDT_BLOODY_KILL = 3,
};

// 0x0000000142A9BD38 (Size: 0x4)
enum class EGestureCategory
{
	EGC_None = 0,
	EGC_AmbientDialog = 1,
	EGC_TrespassWarn1 = 2,
	EGC_TrespassWarn2 = 3,
	EGC_TrespassWarn3 = 4,
	EGC_StopWarn = 5,
};

// 0x0000000142AF46A8 (Size: 0x1)
enum class ECOMUsage
{
	ECOMUSAGE_AUTOCOMPUTE = 0,
	ECOMUSAGE_PIVOT = 1,
};

// 0x0000000142A95F50 (Size: 0x4)
enum class ECameraControls
{
	eCameraControlsNormal = 0,
	eCameraControlsOTS = 1,
};

// 0x0000000142AF32F8 (Size: 0x4)
enum class ENetPlayerEvent
{
	Login = 0,
	Logout = 1,
	NewHost = 2,
};

// 0x0000000142A93DA0 (Size: 0x4)
enum class EActorLookAtPriority
{
	eALAPriority_Ambient = 0,
	eALAPriority_AmbientHigh = 1,
	eALAPriority_Alert = 2,
	eALAPriority_AlertHigh = 3,
	eALAPriority_Hunt = 4,
	eALAPriority_HuntHigh = 5,
	eALAPriority_Combat = 6,
	eALAPriority_CombatHigh = 7,
};

// 0x0000000142A79CC0 (Size: 0x4)
enum class EActorEmotionState
{
	AES_Ambient = 0,
	AES_Alerted = 1,
	AES_Scared = 2,
	AES_Hunt = 3,
	AES_Combat = 4,
	AES_None = 268435455,
};

// 0x0000000142A98670 (Size: 0x4)
enum class EVRIKElement
{
	EVRIKE_LeftHand = 0,
	EVRIKE_RightHand = 1,
	EVRIKE_Pelvis = 2,
	EVRIKE_Spine = 3,
};

// 0x0000000142AB2048 (Size: 0x4)
enum class EInventoryStorageType
{
	EIST_None = 0,
	EIST_Bag = 1,
	EIST_RightHand = 2,
	EIST_LeftHand = 3,
	EIST_Back = 4,
	EIST_Support = 5,
	EIST_Quest = 6,
	EIST_Temporary = 7,
	EIST_Debug = 8,
};

// 0x0000000142A98550 (Size: 0x4)
enum class ECharacterAnimEvent
{
	eCAE_ReloadStarted = 699,
	eCAE_ReloadedClip = 700,
	eCAE_ReloadCompleted = 701,
	eCAE_ReloadedOneBullet = 711,
	eCAE_ReloadUpdate = 702,
	eCAE_ReloadSwapRHandAttacher = 703,
	eCAE_ReloadResetRHandSwap = 704,
	eCAE_ChangeAmmoCompleted = 712,
	eCAE_UnholsterAttachL = 9010,
	eCAE_UnholsterCompletedL = 9011,
	eCAE_UnholsterAttachR = 9012,
	eCAE_UnholsterCompletedR = 9013,
	eCAE_HolsterDetachL = 9020,
	eCAE_HolsterCompletedL = 9021,
	eCAE_HolsterDetachR = 9022,
	eCAE_HolsterCompletedR = 9023,
	eCAE_PickupActivate = 9030,
	eCAE_PickupCompleted = 9031,
	eCAE_SwipeActivate = 9030,
	eCAE_SwipeCompleted = 9031,
	eCAE_InteractionActivate = 5001,
	eCAE_InteractionCompleted = 5000,
	eCAE_SwapHandsRtoL = 9040,
	eCAE_SwapHandsRtoLCompleted = 9041,
	eCAE_SwapHandsLtoR = 9042,
	eCAE_SwapHandsLtoRCompleted = 9043,
	eCAE_OpenDoorActivate = 9051,
	eCAE_OpenDoorCompleted = 9050,
	eCAE_FlavorIdleCompleted = 9060,
	eCAE_AssembleContainerAttach = 9074,
	eCAE_AssemblePlaceAlignCompleted = 9070,
	eCAE_AssembleAttach = 9071,
	eCAE_AssembleEarlyOut = 9075,
	eCAE_AssembleToSneak = 9073,
	eCAE_AssembleCompleted = 9072,
	eCAE_HandIKEnableLeft = 10000,
	eCAE_HandIKDisableLeft = 10001,
	eCAE_HandIKEnableRight = 10002,
	eCAE_HandIKDisableRight = 10003,
	eCAE_EarlyExit = 50,
};

// 0x0000000142AB1EB0 (Size: 0x4)
enum class eItemHands
{
	IH_NONE = 0,
	IH_ONEHANDED = 1,
	IH_TWOHANDED = 2,
};

// 0x0000000142A83168 (Size: 0x4)
enum class EConversationID
{
	eCI_GuardCivilian_Distraction_Investigation = 0,
	eCI_HearBulletImpact_Distraction_Investigation = 1,
	eCI_HearItemImpact_Distraction_Investigation = 2,
	eCI_HearCarAlarm_Distraction_Investigation = 3,
	eCI_SeeItemToss_Distraction_Investigation = 4,
	eCI_HearRadio_Distraction_Investigation = 5,
	eCI_HearPain_Distraction_Investigation = 6,
	eCI_HearAccident_Distraction_Investigation = 7,
	eCI_HearCuriousItemSound_Distraction_Investigation = 8,
	eCI_HearCuriousSound_Distraction_Investigation = 9,
	eCI_SeeSuspiciousPerceptible_Distraction_Investigation = 10,
	eCI_SeeInterestingItem_Distraction_Investigation = 11,
	eCI_HearFootSteps_Distraction_Investigation = 12,
	eCI_HearAngryDialog_Distraction_Investigation = 13,
	eCI_HearHelpDialog_Distraction_Investigation = 14,
	eCI_HearWarning_Distraction_Investigation = 15,
	eCI_SightInvestigation_Distraction_Investigation = 16,
	eCI_HearBulletImpact_Distraction_StandDown = 17,
	eCI_HearItemImpact_Distraction_StandDown = 18,
	eCI_HearCarAlarm_Distraction_StandDown = 19,
	eCI_SeeItemToss_Distraction_StandDown = 20,
	eCI_HearRadio_Distraction_StandDown = 21,
	eCI_HearPain_Distraction_StandDown = 22,
	eCI_HearAccident_Distraction_StandDown = 23,
	eCI_HearCuriousItemSound_Distraction_StandDown = 24,
	eCI_HearCuriousSound_Distraction_StandDown = 25,
	eCI_SeeSuspiciousPerceptible_Distraction_StandDown = 26,
	eCI_SeeInterestingItem_Distraction_StandDown = 27,
	eCI_HearFootSteps_Distraction_StandDown = 28,
	eCI_HearAngryDialog_Distraction_StandDown = 29,
	eCI_HearHelpDialog_Distraction_StandDown = 30,
	eCI_HearWarning_Distraction_StandDown = 31,
	eCI_SightInvestigation_Distraction_StandDown = 32,
	eCI_Suitcase_Distraction_DeliverToGuard = 33,
	eCI_Suitcase_Distraction_RadioRequestHelp = 34,
	eCI_Count = 35,
};

// 0x0000000142A7B538 (Size: 0x4)
enum class EGSExplodingPropType
{
	eGSExplodingProp_Unknown = 0,
	eGSExplodingProp_Barrel = 1,
	eGSExplodingProp_PetrolCan = 2,
	eGSExplodingProp_GasCanister = 3,
	eGSExplodingProp_GasTank = 4,
	eGSExplodingProp_Mine = 5,
	eGSExplodingProp_Pig = 6,
	eGSExplodingProp_Pigeon = 7,
	eGSExplodingProp_FireworksBox = 8,
	eGSExplodingProp_Car = 9,
};

// 0x0000000142A7B550 (Size: 0x4)
enum class EStealthSituation
{
	SS_DISGUISE_TAKEN = 0,
	SS_DISGUISE_TRESPASSING = 1,
	SS_DISGUISE_ILLEGAL_ACTION = 2,
	SS_DISGUISE_REMOVED = 3,
	SS_DISGUISE_INVESTIGATED = 4,
	SS_DISGUISE_BLOWN = 5,
	SS_HIDE_IN_CLOSET_FIRSTTIME = 6,
	SS_HIDE_IN_CLOSET = 7,
	SS_DOOR_START_LOCKPICKING = 8,
	SS_DOOR_CANCEL_LOCKPICKING = 9,
	SS_LANDMINE_ARMED = 10,
	SS_RADIO_ON = 11,
	SS_VENT_ENTER = 12,
	SS_VENT_EXIT = 13,
	SS_BLEND_IN_ACTIVATED = 14,
	SS_BODY_DISCOVERED = 15,
	SS_INVESTIGATE_GUNSHOT = 16,
	SS_INVESTIGATE_NOISE = 17,
	SS_INVESTIGATE_EXPLOSION = 18,
	SS_FUSEBOX_DISABLE_UNIQUE = 19,
	SS_FUSEBOX_DISABLE = 20,
	SS_INVESTIGATING_FUSEBOX = 21,
	SS_FUSEBOX_FIXED = 22,
	SS_KEYCARD_PICKUP = 23,
	SS_KEYCARD_USE = 24,
	SS_BODY_PUT_IN_CONTAINER = 25,
	SS_BODY_DRAGGING_SEEN = 26,
	SS_BODY_OVER_RAIL = 27,
	SS_BODY_OVER_LEDGE = 28,
	SS_USE_HEALTH_STATION = 29,
	SS_HITMAN_SPOTTED = 30,
	SS_HITMAN_HIDDEN = 31,
	SS_HITMAN_ENTERED_COMBAT = 32,
	SS_TRESPASSING = 33,
	SS_SECURITYTAPE_PICKUP = 34,
	SS_NEWOBJECTIVE = 35,
	SS_FOCUSADDED = 36,
	SS_FOCUSFULL = 37,
	SS_FOCUSEMPTY = 38,
	SS_STARTED_SPRINTING = 39,
	SS_STARTED_SNEAKING = 40,
	SS_TOOK_COVER = 41,
	SS_INVESTIGATE_CURIOUS = 42,
	SS_GENERIC_PICKUP = 43,
	SS_ATTENTION_ON = 44,
	SS_ATTENTION_OFF = 45,
	SS_DEADBODY_SEEN = 46,
	SS_TARGET_EVACUATES = 47,
	SS_UNKNOWN_BODY_SPOTTED = 48,
};

// 0x0000000142A7B568 (Size: 0x4)
enum class EAISituation
{
	AIS_GENERIC = 0,
	AIS_SPECIAL = 1,
	AIS_SENSOR = 2,
	AIS_TRESPASSING = 3,
	AIS_STANDOFF = 4,
	AIS_SMUGGLE = 5,
	AIS_GET_HELP = 6,
	AIS_CONVERSTION_GROUP = 7,
	AIS_PROTO_COMBAT = 8,
	AIS_SENTRY = 9,
	AIS_LEAD_ESCORT = 10,
	AIS_INVESTIGATE_WEAPON = 11,
	AIS_INVESTIGATE_STANDING = 12,
	AIS_INVESTIGATE_CURIOUS = 13,
	AIS_INVESTIGATE_CAUTIOUS = 14,
	AIS_HERO_ESCORT = 15,
	AIS_EVACUATE = 16,
	AIS_ESCORT = 17,
	AIS_ENTOURAGE = 18,
	AIS_DRAMA = 19,
	AIS_DISGUISE = 20,
	AIS_DEAD_BODY = 21,
	AIS_COMBAT = 22,
	AIS_CLOSE_COMBAT = 23,
	AIS_AVOID_EXPLOSION = 24,
	AIS_ACCIDENT = 25,
	AIS_PRIVATE = 26,
	AIS_GUARD_BODY = 27,
	AIS_RECOVER_UNC = 28,
	AIS_SNIPER = 29,
};

// 0x0000000142A7B580 (Size: 0x4)
enum class EAISituationEvent
{
	AISE_Any = 0,
	AISE_ActorJoined = 1,
	AISE_ActorLeft = 2,
	AISE_Data = 3,
};

// 0x0000000142A7B4D8 (Size: 0x4)
enum class EGSBodyPart
{
	GSBODYPART_UNKNOWN = 0,
	GSBODYPART_HEAD = 1,
	GSBODYPART_TORSO = 2,
	GSBODYPART_ARM = 3,
	GSBODYPART_LEG = 4,
};

// 0x0000000142A7B4F0 (Size: 0x4)
enum class EKillType
{
	EKillType_Undefined = 0,
	EKillType_Throw = 1,
	EKillType_Fiberwire = 2,
	EKillType_PistolExecute = 3,
	EKillType_ItemTakeOutFront = 4,
	EKillType_ItemTakeOutBack = 5,
	EKillType_ChokeOut = 6,
	EKillType_SnapNeck = 7,
	EKillType_KnockOut = 8,
	EKillType_Push = 9,
	EKillType_Pull = 10,
};

// 0x0000000142A7B598 (Size: 0x4)
enum class EWeaponSpecialSituation
{
	WSS_NORMAL = 0,
	WSS_BAREHANDS = 1,
	WSS_EXPLOSION = 2,
	WSS_ACCIDENT = 3,
	WSS_NPC_FRIENDLY_FIRE = 4,
	WSS_EXECUTE_PISTOL = 5,
	WSS_ANY_WEAPON = 6,
	WSS_INVISIBLE = 7,
};

// 0x00000001422CA3D0 (Size: 0x4)
enum class EItemLocation
{
	eIL_Anywhere = 0,
	eIL_Inventory = 1,
	eIL_RightHand = 2,
	eIL_LeftHand = 3,
	eIL_FreeBone = 4,
	eIL_Count = 5,
};

// 0x0000000142A8D6A8 (Size: 0x4)
enum class EDebugSpatialInfoVerbosity
{
	EDSIV_Overview = 0,
	EDSIV_HierachicalView = 1,
	EDSIV_Full = 2,
};

// 0x0000000142A905B0 (Size: 0x4)
enum class EHintMessageType
{
	EHintMessageType_Hint = 0,
	EHintMessageType_InstinctHint = 1,
	EHintMessageType_InstinctPrompt = 2,
	EHintMessageType_Tutorial = 3,
};

// 0x0000000142A8D920 (Size: 0x4)
enum class EDramaSituationDescriptors
{
	eDSD_NONE = 0,
	eDSD_HERO = 1,
	eDSD_CONVERSATION = 2,
	eDSD_DISTRACTION = 4,
	eDSD_URGENT = 8,
	eDSD_SICK = 16,
	eDSD_DEATH = 32,
	eDSD_ALERT = 64,
	eDSD_PARANOID = 128,
	eDSD_SCARY = 256,
	eDSD_TRIVIAL = 512,
	eDSD_PREOCCUPIED = 1024,
	eDSD_PRIVATE = 2048,
};

// 0x0000000142A8D778 (Size: 0x4)
enum class EDramaStateFlag
{
	eDSF_DEFAULT = 0,
	eDSF_ENABLED = 1,
	eDSF_CAST = 2,
	eDSF_RESUMING = 4,
	eDSF_RUNNING = 8,
	eDSF_DONE = 16,
	eDSF_TERMINATED = 32,
};

// 0x0000000142A8D2F0 (Size: 0x4)
enum class EVictimMovementType
{
	eVictimMovementNone = -1,
	eVictimMovementPullVictimFromWindow = 0,
	eVictimMovementThrowBodyOverRail = 1,
	eVictimMovementDumpBodyOverLedge = 2,
	eVictimMovementTakeDown = 3,
	eVictimMovementRecoveryFinisher = 4,
	eVictimMovementGrabVictim = 5,
	eVictimMovementPushVictimThroughWindowAndRail = 6,
	eVictimMovementContextKill = 7,
	eVictimMovementKickVictimOverLedge = 8,
	eVictimMovementCoupDeGrace = 9,
	eVictimMovementCloseCombat = 10,
	eVictimMovementLast = 11,
};

// 0x0000000142A8FD38 (Size: 0x4)
enum class ERANDOM_DISTRIBUTION
{
	RND_UNIFORM = 0,
	RND_SAWTOOTH = 1,
};

// 0x0000000142A84140 (Size: 0x4)
enum class EStashpointContainedEntityType
{
	PICKUP_NONE = 0,
	PICKUP_ITEMS = 1,
	PICKUP_OUTFIT = 2,
	PICKUP_PICKEDUP = 3,
};

// 0x0000000142A905C8 (Size: 0x4)
enum class EHintMessageSoundType
{
	EHintMessageSound_None = 0,
	EHintMessageSound_GeneralHint = 1,
	EHintMessageSound_UsefulItem = 2,
	EHintMessageSound_NeedsItem = 3,
	EHintMessageSound_ObjectiveExit = 4,
	EHintMessageSound_Target = 5,
	EHintMessageSound_AccidentKill = 6,
	EHintMessageSound_Trespassing = 7,
	EHintMessageSound_CanBeTurnedOn = 8,
	EHintMessageSound_CanBeTurnedOff = 9,
	EHintMessageSound_Agility = 10,
};

// 0x0000000142A906A8 (Size: 0x4)
enum class EEntityOrdering
{
	EO_LOW = 0,
	EO_NORMAL = 1,
	EO_HIGH = 2,
};

