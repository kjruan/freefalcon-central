#include "stdhdr.h"
#include "commands.h"
#include "inpFunc.h"

#define USER_FUNCTION(a)  {a, #a},

struct UserFunctionListEntry
{
    InputFunctionType theFunc;
    char* funcName;
};

static struct UserFunctionListEntry UserFunctionList[] =
{
    USER_FUNCTION(OTWTrackExternal)
    USER_FUNCTION(OTWTrackTargetToWeapon)
    USER_FUNCTION(OTWToggleScoreDisplay)
    USER_FUNCTION(OTWToggleSidebar)
    USER_FUNCTION(SimRadarAAModeStep)
    USER_FUNCTION(SimRadarAGModeStep)
    USER_FUNCTION(SimRadarGainUp)
    USER_FUNCTION(SimRadarGainDown)
    USER_FUNCTION(SimRadarStandby)
    USER_FUNCTION(SimRadarRangeStepUp)
    USER_FUNCTION(SimRadarRangeStepDown)
    USER_FUNCTION(SimRadarNextTarget)
    USER_FUNCTION(SimRadarPrevTarget)
    USER_FUNCTION(SimRadarBarScanChange)
    USER_FUNCTION(SimRadarAzimuthScanChange)
    USER_FUNCTION(SimRadarFOVStep)
    USER_FUNCTION(SimMaverickFOVStep)
    USER_FUNCTION(SimSOIFOVStep)
    USER_FUNCTION(SimRadarFreeze)
    USER_FUNCTION(SimRadarSnowplow)
    USER_FUNCTION(SimRadarCursorZero)
    USER_FUNCTION(SimACMBoresight)
    USER_FUNCTION(SimDesignate)
    USER_FUNCTION(SimACMVertical)
    USER_FUNCTION(SimDropTrack)
    USER_FUNCTION(SimACMSlew)
    USER_FUNCTION(SimACM30x20)
    USER_FUNCTION(SimRadarElevationDown)
    USER_FUNCTION(SimRadarElevationUp)
    USER_FUNCTION(SimRWRSetPriority)
    //USER_FUNCTION(SimRWRSetSound)
    USER_FUNCTION(SimRWRSetTargetSep)
    USER_FUNCTION(SimRWRSetUnknowns)
    USER_FUNCTION(SimRWRSetNaval)
    USER_FUNCTION(SimRWRSetGroundPriority)
    USER_FUNCTION(SimRWRSetSearch)
    USER_FUNCTION(SimRWRHandoff)
    USER_FUNCTION(SimNextWaypoint)
    USER_FUNCTION(SimPrevWaypoint)
    USER_FUNCTION(SimTogglePaused)
    USER_FUNCTION(SimPickle)
    USER_FUNCTION(SimTrigger)
    USER_FUNCTION(SimMissileStep)
    USER_FUNCTION(SimCursorUp)
    USER_FUNCTION(SimCursorDown)
    USER_FUNCTION(SimCursorLeft)
    USER_FUNCTION(SimCursorRight)
    USER_FUNCTION(SimToggleAutopilot)
    USER_FUNCTION(SimStepSMSLeft)
    USER_FUNCTION(SimStepSMSRight)
    USER_FUNCTION(SimSelectSRMOverride)
    USER_FUNCTION(SimSelectMRMOverride)
    USER_FUNCTION(SimDeselectOverride)
    USER_FUNCTION(SimToggleMissileCage)
    // Marco Edit - AIM9 Spot/Scan Support
    USER_FUNCTION(SimToggleMissileSpotScan)
    USER_FUNCTION(SimToggleMissileBoreSlave)
    USER_FUNCTION(SimToggleMissileTDBPUncage)

    USER_FUNCTION(SimDropChaff)
    USER_FUNCTION(SimDropFlare)
    USER_FUNCTION(SimHSDRangeStepUp)
    USER_FUNCTION(SimHSDRangeStepDown)
    USER_FUNCTION(SimToggleInvincible)
    USER_FUNCTION(SimFCCSubModeStep)
    USER_FUNCTION(SimEndFlight)
    USER_FUNCTION(SimNextAAWeapon)
    USER_FUNCTION(SimNextAGWeapon)
    USER_FUNCTION(SimNextNavMode)
    USER_FUNCTION(SimEject)
    USER_FUNCTION(AFBrakesOut)
    USER_FUNCTION(AFBrakesIn)
    USER_FUNCTION(AFBrakesToggle)
    USER_FUNCTION(AFGearToggle)
    USER_FUNCTION(AFGearUp)  // MD
    USER_FUNCTION(AFGearDown)  // MD
    USER_FUNCTION(AFElevatorUp)
    USER_FUNCTION(AFElevatorDown)
    USER_FUNCTION(AFAileronLeft)
    USER_FUNCTION(AFAileronRight)
    USER_FUNCTION(AFThrottleUp)
    USER_FUNCTION(AFThrottleDown)
    USER_FUNCTION(AFRudderRight)
    USER_FUNCTION(AFRudderLeft)
    USER_FUNCTION(AFCoarseThrottleUp)
    USER_FUNCTION(AFCoarseThrottleDown)
    USER_FUNCTION(AFABOn)
    USER_FUNCTION(AFIdle)
    USER_FUNCTION(OTWTimeOfDayStep)
    USER_FUNCTION(OTWStepNextAC)
    USER_FUNCTION(OTWStepPrevAC)
    USER_FUNCTION(OTWStepNextPadlock)
    USER_FUNCTION(OTWStepPrevPadlock)
    USER_FUNCTION(OTWStepNextPadlockAA) // 2002-03-12 S.G.
    USER_FUNCTION(OTWStepPrevPadlockAA) // 2002-03-12 S.G.
    USER_FUNCTION(OTWStepNextPadlockAG) // 2002-03-12 S.G.
    USER_FUNCTION(OTWStepPrevPadlockAG) // 2002-03-12 S.G.
    USER_FUNCTION(OTWToggleNames)
    USER_FUNCTION(OTWToggleCampNames)
    USER_FUNCTION(OTWSelectF3PadlockMode)
    USER_FUNCTION(OTWSelectF3PadlockModeAA) // 2002-03-12 S.G.
    USER_FUNCTION(OTWSelectF3PadlockModeAG) // 2002-03-12 S.G.
    USER_FUNCTION(OTWSelectEFOVPadlockMode)
    USER_FUNCTION(OTWSelectEFOVPadlockModeAA) // 2002-03-12 S.G.
    USER_FUNCTION(OTWSelectEFOVPadlockModeAG) // 2002-03-12 S.G.
    USER_FUNCTION(OTWRadioMenuStep)
    USER_FUNCTION(OTWRadioMenuStepBack)
    USER_FUNCTION(OTWStepMFD1)
    USER_FUNCTION(OTWStepMFD2)
    USER_FUNCTION(OTWStepMFD3)
    USER_FUNCTION(OTWStepMFD4)
    USER_FUNCTION(OTWToggleScales)
    USER_FUNCTION(OTWToggleActionCamera)
    USER_FUNCTION(OTWTogglePitchLadder)
    USER_FUNCTION(SimPitchLadderOff)  // MD
    USER_FUNCTION(SimPitchLadderFPM)  // MD
    USER_FUNCTION(SimPitchLadderATTFPM)  // MD
    USER_FUNCTION(OTWStepHeadingScale)
    USER_FUNCTION(OTWSelectHUDMode)
    USER_FUNCTION(OTWToggleGLOC)
    USER_FUNCTION(OTWSelectChaseMode)
    USER_FUNCTION(OTWSelectOrbitMode)
    USER_FUNCTION(OTWSelectAirFriendlyMode)
    USER_FUNCTION(OTWSelectGroundFriendlyMode)
    USER_FUNCTION(OTWSelectAirEnemyMode)
    USER_FUNCTION(OTWSelectGroundEnemyMode)
    USER_FUNCTION(OTWSelectTargetMode)
    USER_FUNCTION(OTWSelectWeaponMode)
    USER_FUNCTION(OTWSelectSatelliteMode)
    USER_FUNCTION(OTWSelectFlybyMode)
    USER_FUNCTION(OTWSelectIncomingMode)
    USER_FUNCTION(OTWSelect2DCockpitMode)
    USER_FUNCTION(OTWSelect3DCockpitMode)
    USER_FUNCTION(OTWToggleBilinearFilter)
    USER_FUNCTION(OTWToggleShading)
    USER_FUNCTION(OTWToggleHaze)
    USER_FUNCTION(OTWToggleLocationDisplay)
    USER_FUNCTION(OTWToggleAeroDisplay) // JPO
    USER_FUNCTION(OTWToggleFlapDisplay) // TJL 11/09/03 On/Off Flap display
    USER_FUNCTION(OTWToggleEngineDisplay) // Retro 1Feb2004
    USER_FUNCTION(OTWScaleDown)
    USER_FUNCTION(OTWScaleUp)
    USER_FUNCTION(OTWSetObjDetail)
    USER_FUNCTION(OTWObjDetailDown)
    USER_FUNCTION(OTWObjDetailUp)
    //JAM 01Dec03 - Removing this USER_FUNCTION(OTWTextureIncrease)
    //JAM 01Dec03 - Removing this USER_FUNCTION(OTWTextureDecrease)
    USER_FUNCTION(OTWToggleClouds)
    USER_FUNCTION(OTWStepHudContrastDn)
    USER_FUNCTION(OTWStepHudContrastUp)
    USER_FUNCTION(OTWToggleEyeFly)
    USER_FUNCTION(OTWEnterPosition)
    USER_FUNCTION(OTWToggleFrameRate)
    USER_FUNCTION(OTWToggleAutoScale)
    USER_FUNCTION(OTWSetScale)
    USER_FUNCTION(OTWViewLeft)
    USER_FUNCTION(OTWViewRight)
    USER_FUNCTION(OTWViewUp)
    USER_FUNCTION(OTWViewDown)
    USER_FUNCTION(OTWViewReset)
    USER_FUNCTION(OTWViewUpRight)
    USER_FUNCTION(OTWViewUpLeft)
    USER_FUNCTION(OTWViewDownRight)
    USER_FUNCTION(OTWViewDownLeft)
    USER_FUNCTION(OTWViewZoomIn)
    USER_FUNCTION(OTWViewZoomOut)
    USER_FUNCTION(OTWSwapMFDS)
    USER_FUNCTION(OTWGlanceForward)
    USER_FUNCTION(OTWCheckSix)
    USER_FUNCTION(OTWStateStep)
    USER_FUNCTION(CommandsSetKeyCombo)
    USER_FUNCTION(KevinsFistOfGod)
    USER_FUNCTION(SuperCruise)
    USER_FUNCTION(OTW1200View)
    USER_FUNCTION(OTW1200DView)
    USER_FUNCTION(OTW1200HUDView)
    USER_FUNCTION(OTW1200LView)
    USER_FUNCTION(OTW1000View)
    USER_FUNCTION(OTW200View)
    USER_FUNCTION(OTW900View)
    USER_FUNCTION(OTW300View)
    USER_FUNCTION(OTW800View)
    USER_FUNCTION(OTW400View)
    USER_FUNCTION(OTW1200RView)
    USER_FUNCTION(RadioMessageSend)
    USER_FUNCTION(SimToggleChatMode)
    USER_FUNCTION(SimMotionFreeze)
    USER_FUNCTION(ScreenShot)
    USER_FUNCTION(PrettyScreenShot) // Retro 7May2004
    USER_FUNCTION(FOVToggle)
    USER_FUNCTION(FOVDecrease) //Wombat778 9-27-2003
    USER_FUNCTION(FOVIncrease) //Wombat778 9-27-2003
    USER_FUNCTION(FOVDefault) //Wombat778 9-27-2003
    //JAM 01Dec03 - Removing this USER_FUNCTION(OTWToggleAlpha)
    USER_FUNCTION(SimAVTRToggle)
    USER_FUNCTION(SimSelectiveJettison)
    USER_FUNCTION(SimEmergencyJettison)
    USER_FUNCTION(SimWheelBrakes)
    USER_FUNCTION(SimECMOn)
    USER_FUNCTION(SimECMStandby) //Wombat778 11-3-2003 + MD 20031128
    USER_FUNCTION(SimECMConsent) //Wombat778 11-3-2003 + MD 20031128
    USER_FUNCTION(SimRadarElevationCenter)
    USER_FUNCTION(SimHsiCourseInc)
    USER_FUNCTION(SimHsiCourseDec)
    USER_FUNCTION(SimHsiHeadingInc)
    USER_FUNCTION(SimHsiHeadingDec)
    USER_FUNCTION(SimHsiCrsIncBy1)  // MD -- 20040118
    USER_FUNCTION(SimHsiCrsDecBy1)  // MD -- 20040118
    USER_FUNCTION(SimHsiHdgIncBy1)  // MD -- 20040118
    USER_FUNCTION(SimHsiHdgDecBy1)  // MD -- 20040118
    USER_FUNCTION(SimAVTRToggle)
    USER_FUNCTION(SimMPOToggle)
    USER_FUNCTION(SimMPO)  // MD
    USER_FUNCTION(SimSilenceHorn)
    USER_FUNCTION(SimStepHSIMode)
    USER_FUNCTION(SimHSIIlsTcn)  // MD
    USER_FUNCTION(SimHSITcn)  // MD
    USER_FUNCTION(SimHSINav)  // MD
    USER_FUNCTION(SimHSIIlsNav)  // MD
    USER_FUNCTION(SimCBEOSB_1L)
    USER_FUNCTION(SimCBEOSB_2L)
    USER_FUNCTION(SimCBEOSB_3L)
    USER_FUNCTION(SimCBEOSB_4L)
    USER_FUNCTION(SimCBEOSB_5L)
    USER_FUNCTION(SimCBEOSB_6L)
    USER_FUNCTION(SimCBEOSB_7L)
    USER_FUNCTION(SimCBEOSB_8L)
    USER_FUNCTION(SimCBEOSB_9L)
    USER_FUNCTION(SimCBEOSB_10L)
    USER_FUNCTION(SimCBEOSB_11L)
    USER_FUNCTION(SimCBEOSB_12L)
    USER_FUNCTION(SimCBEOSB_13L)
    USER_FUNCTION(SimCBEOSB_14L)
    USER_FUNCTION(SimCBEOSB_15L)
    USER_FUNCTION(SimCBEOSB_16L)
    USER_FUNCTION(SimCBEOSB_17L)
    USER_FUNCTION(SimCBEOSB_18L)
    USER_FUNCTION(SimCBEOSB_19L)
    USER_FUNCTION(SimCBEOSB_20L)
    USER_FUNCTION(SimCBEOSB_1R)
    USER_FUNCTION(SimCBEOSB_2R)
    USER_FUNCTION(SimCBEOSB_3R)
    USER_FUNCTION(SimCBEOSB_4R)
    USER_FUNCTION(SimCBEOSB_5R)
    USER_FUNCTION(SimCBEOSB_6R)
    USER_FUNCTION(SimCBEOSB_7R)
    USER_FUNCTION(SimCBEOSB_8R)
    USER_FUNCTION(SimCBEOSB_9R)
    USER_FUNCTION(SimCBEOSB_10R)
    USER_FUNCTION(SimCBEOSB_11R)
    USER_FUNCTION(SimCBEOSB_12R)
    USER_FUNCTION(SimCBEOSB_13R)
    USER_FUNCTION(SimCBEOSB_14R)
    USER_FUNCTION(SimCBEOSB_15R)
    USER_FUNCTION(SimCBEOSB_16R)
    USER_FUNCTION(SimCBEOSB_17R)
    USER_FUNCTION(SimCBEOSB_18R)
    USER_FUNCTION(SimCBEOSB_19R)
    USER_FUNCTION(SimCBEOSB_20R)
    USER_FUNCTION(SimCBEOSB_GAINUP_L)
    USER_FUNCTION(SimCBEOSB_GAINUP_R)
    USER_FUNCTION(SimCBEOSB_GAINDOWN_L)
    USER_FUNCTION(SimCBEOSB_GAINDOWN_R)

    //Wombat778 4-12-04
    USER_FUNCTION(SimCBEOSB_1T)
    USER_FUNCTION(SimCBEOSB_2T)
    USER_FUNCTION(SimCBEOSB_3T)
    USER_FUNCTION(SimCBEOSB_4T)
    USER_FUNCTION(SimCBEOSB_5T)
    USER_FUNCTION(SimCBEOSB_6T)
    USER_FUNCTION(SimCBEOSB_7T)
    USER_FUNCTION(SimCBEOSB_8T)
    USER_FUNCTION(SimCBEOSB_9T)
    USER_FUNCTION(SimCBEOSB_10T)
    USER_FUNCTION(SimCBEOSB_11T)
    USER_FUNCTION(SimCBEOSB_12T)
    USER_FUNCTION(SimCBEOSB_13T)
    USER_FUNCTION(SimCBEOSB_14T)
    USER_FUNCTION(SimCBEOSB_15T)
    USER_FUNCTION(SimCBEOSB_16T)
    USER_FUNCTION(SimCBEOSB_17T)
    USER_FUNCTION(SimCBEOSB_18T)
    USER_FUNCTION(SimCBEOSB_19T)
    USER_FUNCTION(SimCBEOSB_20T)
    USER_FUNCTION(SimCBEOSB_1F)
    USER_FUNCTION(SimCBEOSB_2F)
    USER_FUNCTION(SimCBEOSB_3F)
    USER_FUNCTION(SimCBEOSB_4F)
    USER_FUNCTION(SimCBEOSB_5F)
    USER_FUNCTION(SimCBEOSB_6F)
    USER_FUNCTION(SimCBEOSB_7F)
    USER_FUNCTION(SimCBEOSB_8F)
    USER_FUNCTION(SimCBEOSB_9F)
    USER_FUNCTION(SimCBEOSB_10F)
    USER_FUNCTION(SimCBEOSB_11F)
    USER_FUNCTION(SimCBEOSB_12F)
    USER_FUNCTION(SimCBEOSB_13F)
    USER_FUNCTION(SimCBEOSB_14F)
    USER_FUNCTION(SimCBEOSB_15F)
    USER_FUNCTION(SimCBEOSB_16F)
    USER_FUNCTION(SimCBEOSB_17F)
    USER_FUNCTION(SimCBEOSB_18F)
    USER_FUNCTION(SimCBEOSB_19F)
    USER_FUNCTION(SimCBEOSB_20F)
    USER_FUNCTION(SimCBEOSB_GAINUP_T)
    USER_FUNCTION(SimCBEOSB_GAINUP_F)
    USER_FUNCTION(SimCBEOSB_GAINDOWN_T)
    USER_FUNCTION(SimCBEOSB_GAINDOWN_F)

    //Wombat778 End

    USER_FUNCTION(SimICPTILS)
    USER_FUNCTION(SimICPALOW)
    USER_FUNCTION(SimICPFAck)
    USER_FUNCTION(SimICPPrevious)
    USER_FUNCTION(SimICPNext)
    USER_FUNCTION(SimICPLink)
    USER_FUNCTION(SimICPCrus)
    USER_FUNCTION(SimICPStpt)
    USER_FUNCTION(SimICPMark)
    USER_FUNCTION(SimICPEnter)
    USER_FUNCTION(SimICPCom1)
    USER_FUNCTION(SimICPNav)
    USER_FUNCTION(SimICPAA)
    USER_FUNCTION(SimICPAG)
    USER_FUNCTION(SimHUDScales)
    USER_FUNCTION(SimScalesVVVAH)  // MD
    USER_FUNCTION(SimScalesVAH)  // MD
    USER_FUNCTION(SimScalesOff)  // MD
    USER_FUNCTION(SimHUDFPM)
    USER_FUNCTION(SimHUDDED)
    USER_FUNCTION(SimHUDDEDOff)  // MD
    USER_FUNCTION(SimHUDDEDPFL)  // MD
    USER_FUNCTION(SimHUDDEDDED)  // MD
    USER_FUNCTION(SimHUDVelocity)
    USER_FUNCTION(SimHUDVelocityCAS)  // MD
    USER_FUNCTION(SimHUDVelocityTAS)  // MD
    USER_FUNCTION(SimHUDVelocityGND)  // MD
    USER_FUNCTION(SimHUDRadar)
    USER_FUNCTION(SimHUDAltRadar)  // MD
    USER_FUNCTION(SimHUDAltBaro)  // MD
    USER_FUNCTION(SimHUDAltAuto)  // MD
    USER_FUNCTION(OTWStepHudColor)
    USER_FUNCTION(SimHUDBrightness)
    USER_FUNCTION(SimHUDBrtDay)  // MD
    USER_FUNCTION(SimHUDBrtAuto)  // MD
    USER_FUNCTION(SimHUDBrtNight)  // MD
    USER_FUNCTION(SimHUDBrightnessUp) //MI
    USER_FUNCTION(SimHUDBrightnessDown) //MI
    USER_FUNCTION(SimCycleRadioChannel)
    USER_FUNCTION(SimDecRadioChannel)  // MD
    USER_FUNCTION(SimToggleRadioVolume)
    USER_FUNCTION(RadioTankerCommand)
    USER_FUNCTION(RadioTowerCommand)
    USER_FUNCTION(RadioAWACSCommand)
    USER_FUNCTION(RadioWingCommand)
    USER_FUNCTION(RadioElementCommand)
    USER_FUNCTION(RadioFlightCommand)
    USER_FUNCTION(WingmanClearSix)
    USER_FUNCTION(ElementClearSix)
    USER_FUNCTION(FlightClearSix)
    USER_FUNCTION(WingmanCheckSix)
    USER_FUNCTION(ElementCheckSix)
    USER_FUNCTION(FlightCheckSix)
    USER_FUNCTION(WingmanBreakLeft)
    USER_FUNCTION(ElementBreakLeft)
    USER_FUNCTION(FlightBreakLeft)
    USER_FUNCTION(WingmanBreakRight)
    USER_FUNCTION(ElementBreakRight)
    USER_FUNCTION(FlightBreakRight)
    USER_FUNCTION(WingmanPince)
    USER_FUNCTION(ElementPince)
    USER_FUNCTION(FlightPince)
    USER_FUNCTION(WingmanPosthole)
    USER_FUNCTION(ElementPosthole)
    USER_FUNCTION(FlightPosthole)
    USER_FUNCTION(WingmanChainsaw)
    USER_FUNCTION(ElementChainsaw)
    USER_FUNCTION(FlightChainsaw)
    USER_FUNCTION(WingmanFlex)
    USER_FUNCTION(ElementFlex)
    USER_FUNCTION(FlightFlex)
    USER_FUNCTION(WingmanGoShooterMode)
    USER_FUNCTION(ElementGoShooterMode)
    USER_FUNCTION(FlightGoShooterMode)
    USER_FUNCTION(WingmanGoCoverMode)
    USER_FUNCTION(ElementGoCoverMode)
    USER_FUNCTION(FlightGoCoverMode)
    USER_FUNCTION(WingmanSearchGround)
    USER_FUNCTION(ElementSearchGround)
    USER_FUNCTION(FlightSearchGround)
    USER_FUNCTION(WingmanSearchAir)
    USER_FUNCTION(ElementSearchAir)
    USER_FUNCTION(FlightSearchAir)
    USER_FUNCTION(WingmanResumeNormal)
    USER_FUNCTION(ElementResumeNormal)
    USER_FUNCTION(FlightResumeNormal)
    USER_FUNCTION(WingmanRejoin)
    USER_FUNCTION(ElementRejoin)
    USER_FUNCTION(FlightRejoin)
    USER_FUNCTION(WingmanDesignateTarget)
    USER_FUNCTION(ElementDesignateTarget)
    USER_FUNCTION(FlightDesignateTarget)
    USER_FUNCTION(WingmanDesignateGroup)
    USER_FUNCTION(ElementDesignateGroup)
    USER_FUNCTION(FlightDesignateGroup)
    USER_FUNCTION(WingmanWeaponsHold)
    USER_FUNCTION(ElementWeaponsHold)
    USER_FUNCTION(FlightWeaponsHold)
    USER_FUNCTION(WingmanWeaponsFree)
    USER_FUNCTION(ElementWeaponsFree)
    USER_FUNCTION(FlightWeaponsFree)
    USER_FUNCTION(WingmanWedge)
    USER_FUNCTION(ElementWedge)
    USER_FUNCTION(FlightWedge)
    USER_FUNCTION(WingmanTrail)
    USER_FUNCTION(ElementTrail)
    USER_FUNCTION(FlightTrail)
    USER_FUNCTION(WingmanResCell)
    USER_FUNCTION(ElementResCell)
    USER_FUNCTION(FlightResCell)
    USER_FUNCTION(WingmanBox)
    USER_FUNCTION(ElementBox)
    USER_FUNCTION(FlightBox)
    USER_FUNCTION(WingmanArrow)
    USER_FUNCTION(ElementArrow)
    USER_FUNCTION(FlightArrow)
    USER_FUNCTION(WingmanKickout)
    USER_FUNCTION(ElementKickout)
    USER_FUNCTION(FlightKickout)
    USER_FUNCTION(WingmanCloseup)
    USER_FUNCTION(ElementCloseup)
    USER_FUNCTION(FlightCloseup)
    USER_FUNCTION(WingmanToggleSide)
    USER_FUNCTION(ElementToggleSide)
    USER_FUNCTION(FlightToggleSide)
    USER_FUNCTION(WingmanIncreaseRelAlt)
    USER_FUNCTION(ElementIncreaseRelAlt)
    USER_FUNCTION(FlightIncreaseRelAlt)
    USER_FUNCTION(WingmanDecreaseRelAlt)
    USER_FUNCTION(ElementDecreaseRelAlt)
    USER_FUNCTION(FlightDecreaseRelAlt)
    USER_FUNCTION(WingmanGiveBra)
    USER_FUNCTION(ElementGiveBra)
    USER_FUNCTION(FlightGiveBra)
    USER_FUNCTION(WingmanGiveStatus)
    USER_FUNCTION(ElementGiveStatus)
    USER_FUNCTION(FlightGiveStatus)
    USER_FUNCTION(WingmanGiveDamageReport)
    USER_FUNCTION(ElementGiveDamageReport)
    USER_FUNCTION(FlightGiveDamageReport)
    USER_FUNCTION(WingmanGiveFuelState)
    USER_FUNCTION(ElementGiveFuelState)
    USER_FUNCTION(FlightGiveFuelState)
    USER_FUNCTION(WingmanGiveWeaponsCheck)
    USER_FUNCTION(ElementGiveWeaponsCheck)
    USER_FUNCTION(FlightGiveWeaponsCheck)
    USER_FUNCTION(WingmanRTB)
    USER_FUNCTION(ElementRTB)
    USER_FUNCTION(FlightRTB)
    USER_FUNCTION(SimSpeedyGonzalesUp)
    USER_FUNCTION(SimSpeedyGonzalesDown)
    USER_FUNCTION(ATCRequestClearance)
    USER_FUNCTION(ATCRequestEmergencyClearance)
    USER_FUNCTION(ATCRequestTakeoff)
    USER_FUNCTION(ATCRequestTaxi)
    USER_FUNCTION(ATCTaxiing)
    USER_FUNCTION(ATCReadyToGo)
    USER_FUNCTION(ATCRotate)
    USER_FUNCTION(ATCGearUp)
    USER_FUNCTION(ATCGearDown)
    USER_FUNCTION(ATCBrake)
    USER_FUNCTION(ATCAbortApproach)
    USER_FUNCTION(FACCheckIn)
    USER_FUNCTION(FACWilco)
    USER_FUNCTION(FACUnable)
    USER_FUNCTION(FACReady)
    USER_FUNCTION(FACIn)
    USER_FUNCTION(FACOut)
    USER_FUNCTION(FACRequestMark)
    USER_FUNCTION(FACRequestTarget)
    USER_FUNCTION(FACRequestBDA)
    USER_FUNCTION(FACRequestLocation)
    USER_FUNCTION(FACRequestTACAN)
    USER_FUNCTION(TankerRequestFuel)
    USER_FUNCTION(TankerReadyForGas)
    USER_FUNCTION(TankerDoneRefueling)
    USER_FUNCTION(TankerBreakaway)
    USER_FUNCTION(AWACSRequestPicture)
    USER_FUNCTION(AWACSRequestTanker)
    USER_FUNCTION(AWACSWilco)
    USER_FUNCTION(AWACSUnable)
    USER_FUNCTION(AWACSRequestHelp)
    USER_FUNCTION(AWACSRequestRelief)
    USER_FUNCTION(TimeAccelerate)
    USER_FUNCTION(TimeAccelerateMaxToggle)
    USER_FUNCTION(TimeAccelerateInc) // JB 010109
    USER_FUNCTION(TimeAccelerateDec) // JB 010109
    USER_FUNCTION(SimFuelDump) // JB 020313
    USER_FUNCTION(SimCycleDebugLabels) // JB 020316
    USER_FUNCTION(AFABFull)
    USER_FUNCTION(BombRippleIncrement)
    USER_FUNCTION(BombIntervalIncrement)
    USER_FUNCTION(BombRippleDecrement)
    USER_FUNCTION(BombIntervalDecrement)
    USER_FUNCTION(BombPairRelease)
    USER_FUNCTION(BombSGLRelease)
    USER_FUNCTION(BombBurstIncrement)
    USER_FUNCTION(BombBurstDecrement)
    USER_FUNCTION(BreakToggle)
    USER_FUNCTION(SimICPCom2)
    USER_FUNCTION(SimToggleDropPattern)
    USER_FUNCTION(KneeboardTogglePage)
    USER_FUNCTION(ToggleNVGMode)
    USER_FUNCTION(ToggleSmoke)
    USER_FUNCTION(WingmanSpread)
    USER_FUNCTION(ElementSpread)
    USER_FUNCTION(FlightSpread)
    USER_FUNCTION(WingmanStack)
    USER_FUNCTION(ElementStack)
    USER_FUNCTION(FlightStack)
    USER_FUNCTION(WingmanLadder)
    USER_FUNCTION(ElementLadder)
    USER_FUNCTION(FlightLadder)
    USER_FUNCTION(WingmanFluid)
    USER_FUNCTION(ElementFluid)
    USER_FUNCTION(FlightFluid)
    USER_FUNCTION(SimOpenChatBox)
    USER_FUNCTION(ExtinguishMasterCaution)
    USER_FUNCTION(SoundOff)
    USER_FUNCTION(SimToggleExtLights)
    USER_FUNCTION(IncreaseAlow)
    USER_FUNCTION(DecreaseAlow)
    USER_FUNCTION(SaveCockpitDefaults)
    USER_FUNCTION(LoadCockpitDefaults)
    USER_FUNCTION(SimStepMasterArm)
    USER_FUNCTION(SimArmMasterArm)
    USER_FUNCTION(SimSafeMasterArm)
    USER_FUNCTION(SimSimMasterArm)
    USER_FUNCTION(SimSetBubbleSize) // JB 000509
    USER_FUNCTION(SimHookToggle) // JB carrier
    USER_FUNCTION(SimHookUp)  // MD
    USER_FUNCTION(SimHookDown)  // MD
    USER_FUNCTION(SimThrottleIdleDetent) // JPO
    USER_FUNCTION(SimJfsStart) // JPO
    USER_FUNCTION(SimEpuToggle) // JPO
    USER_FUNCTION(SimEpuOff) // MD
    USER_FUNCTION(SimEpuAuto) // MD
    USER_FUNCTION(SimEpuOn) // MD
    USER_FUNCTION(AFRudderTrimLeft) // JPO
    USER_FUNCTION(AFRudderTrimRight) // JPO
    USER_FUNCTION(AFAileronTrimLeft) // JPO
    USER_FUNCTION(AFAileronTrimRight) // JPO
    USER_FUNCTION(AFElevatorTrimUp) // JPO
    USER_FUNCTION(AFElevatorTrimDown) // JPO
    USER_FUNCTION(AFResetTrim) // JPO
    USER_FUNCTION(AFAlternateGear) // JPO
    USER_FUNCTION(AFAlternateGearReset) // JPO
    USER_FUNCTION(SimFLIRToggle) // JPO
    USER_FUNCTION(SimToggleTFR) // JPO
    USER_FUNCTION(SimMainPowerInc) // JPO
    USER_FUNCTION(SimMainPowerDec) // JPO
    USER_FUNCTION(SimMainPowerOff) // MD
    USER_FUNCTION(SimMainPowerBatt) // MD
    USER_FUNCTION(SimMainPowerMain) // MD
    USER_FUNCTION(AFFullFlap) // JPO
    USER_FUNCTION(AFNoFlap) // JPO
    USER_FUNCTION(AFIncFlap) // JPO
    USER_FUNCTION(AFDecFlap) // JPO
    USER_FUNCTION(AFFullLEF) // JPO
    USER_FUNCTION(AFNoLEF) // JPO
    USER_FUNCTION(AFIncLEF) // JPO
    USER_FUNCTION(AFDecLEF) // JPO
    USER_FUNCTION(AFDragChute)// JPO
    USER_FUNCTION(AFCanopyToggle)// JPO
    USER_FUNCTION(Sim3DCkptHelpOnOff)
    //MI
    USER_FUNCTION(SimICPIFF)
    USER_FUNCTION(SimICPLIST)
    USER_FUNCTION(SimICPTHREE)
    USER_FUNCTION(SimICPSIX)
    USER_FUNCTION(SimICPEIGHT)
    USER_FUNCTION(SimICPNINE)
    USER_FUNCTION(SimICPZERO)
    USER_FUNCTION(SimICPResetDED)
    USER_FUNCTION(SimICPDEDUP)
    USER_FUNCTION(SimICPDEDDOWN)
    USER_FUNCTION(SimICPDEDSEQ)
    USER_FUNCTION(SimICPCLEAR)
    USER_FUNCTION(SimRALTSTDBY)
    USER_FUNCTION(SimRALTON)
    USER_FUNCTION(SimRALTOFF)
    USER_FUNCTION(SimLandingLightToggle)
    USER_FUNCTION(SimLandingLightOn)  // MD
    USER_FUNCTION(SimLandingLightOff)  // MD
    USER_FUNCTION(SimParkingBrakeToggle)
    USER_FUNCTION(SimParkingBrakeOn)  // MD
    USER_FUNCTION(SimParkingBrakeOff)  // MD
    USER_FUNCTION(SimLaserArmToggle)
    USER_FUNCTION(SimLaserArmOn)  // MD
    USER_FUNCTION(SimLaserArmOff)  // MD
    USER_FUNCTION(SimFuelDoorToggle)
    USER_FUNCTION(SimFuelDoorOpen)  // MD
    USER_FUNCTION(SimFuelDoorClose)  // MD
    USER_FUNCTION(SimRightAPSwitch)
    USER_FUNCTION(SimLeftAPSwitch)  // MD
    USER_FUNCTION(SimLeftAPUp)  // MD
    USER_FUNCTION(SimLeftAPMid)  // MD
    USER_FUNCTION(SimLeftAPDown)  // MD
    USER_FUNCTION(SimRightAPUp)  // MD
    USER_FUNCTION(SimRightAPMid)  // MD
    USER_FUNCTION(SimRightAPDown)  // MD
    USER_FUNCTION(SimAPOverride)
    USER_FUNCTION(SimWarnReset)
    USER_FUNCTION(SimReticleSwitch)
    USER_FUNCTION(SimReticlePri)  // MD
    USER_FUNCTION(SimReticleStby)  // MD
    USER_FUNCTION(SimReticleOff)  // MD
    USER_FUNCTION(SimTMSUp)
    USER_FUNCTION(SimTMSLeft)
    USER_FUNCTION(SimTMSDown)
    USER_FUNCTION(SimTMSRight)
    USER_FUNCTION(SimSeatArm)
    USER_FUNCTION(SimSeatOn)  // MD
    USER_FUNCTION(SimSeatOff)  // MD
    USER_FUNCTION(SimEWSRWRPower)
    USER_FUNCTION(SimEWSRWROn)  // MD
    USER_FUNCTION(SimEWSRWROff)  // MD
    USER_FUNCTION(SimEWSJammerPower)
    USER_FUNCTION(SimEWSJammerOn)  // MD
    USER_FUNCTION(SimEWSJammerOff)  // MD
    USER_FUNCTION(SimEWSChaffPower)
    USER_FUNCTION(SimEWSChaffOn)  // MD
    USER_FUNCTION(SimEWSChaffOff)  // MD
    USER_FUNCTION(SimEWSFlarePower)
    USER_FUNCTION(SimEWSFlareOn)  // MD
    USER_FUNCTION(SimEWSFlareOff)  // MD
    USER_FUNCTION(SimEWSPGMInc)
    USER_FUNCTION(SimEWSPGMDec)
    USER_FUNCTION(SimEWSModeOff)  // MD
    USER_FUNCTION(SimEWSModeStby)  // MD
    USER_FUNCTION(SimEWSModeMan)  // MD
    USER_FUNCTION(SimEWSModeSemi)  // MD
    USER_FUNCTION(SimEWSModeAuto)  // MD
    USER_FUNCTION(SimEWSProgInc)
    USER_FUNCTION(SimEWSProgDec)
    USER_FUNCTION(SimEWSProgOne)  // MD
    USER_FUNCTION(SimEWSProgTwo)  // MD
    USER_FUNCTION(SimEWSProgThree)  // MD
    USER_FUNCTION(SimEWSProgFour)  // MD
    USER_FUNCTION(SimInhibitVMS)
    USER_FUNCTION(SimVMSOn)  // MD
    USER_FUNCTION(SimVMSOff)  // MD
    USER_FUNCTION(SimRFSwitch)
    USER_FUNCTION(SimRFNorm)  // MD
    USER_FUNCTION(SimRFQuiet)  // MD
    USER_FUNCTION(SimRFSilent)  // MD
    USER_FUNCTION(SimDropProgrammed)
    USER_FUNCTION(SimPinkySwitch)
    USER_FUNCTION(SimGndJettEnable)
    USER_FUNCTION(SimGndJettOn)  // MD
    USER_FUNCTION(SimGndJettOff)  // MD
    USER_FUNCTION(SimExtlPower)
    USER_FUNCTION(SimExtlMasterNorm)  // MD
    USER_FUNCTION(SimExtlMasterOff)  // MD
    USER_FUNCTION(SimExtlAntiColl)
    USER_FUNCTION(SimAntiCollOn)  // MD
    USER_FUNCTION(SimAntiCollOff)  // MD
    USER_FUNCTION(SimExtlSteady)
    USER_FUNCTION(SimLightsSteady)  // MD
    USER_FUNCTION(SimLightsFlash)  // MD
    USER_FUNCTION(SimExtlWing)
    USER_FUNCTION(SimWingLightBrt)  // MD
    USER_FUNCTION(SimWingLightOff)  // MD
    USER_FUNCTION(SimDMSUp)
    USER_FUNCTION(SimDMSLeft)
    USER_FUNCTION(SimDMSDown)
    USER_FUNCTION(SimDMSRight)
    USER_FUNCTION(SimAVTRSwitch)
    USER_FUNCTION(SimAVTRSwitchOff)  // MD
    USER_FUNCTION(SimAVTRSwitchAuto)  // MD
    USER_FUNCTION(SimAVTRSwitchOn)  // MD
    USER_FUNCTION(SimAutoAVTR)
    USER_FUNCTION(SimIFFPower)
    USER_FUNCTION(SimIFFIn)
    USER_FUNCTION(SimINSInc)
    USER_FUNCTION(SimINSDec)
    USER_FUNCTION(SimINSOff)  // MD
    USER_FUNCTION(SimINSNorm)  // MD
    USER_FUNCTION(SimINSNav)  // MD
    USER_FUNCTION(SimINSInFlt)  // MD
    USER_FUNCTION(SimLEFLockSwitch)
    USER_FUNCTION(SimLEFLock)  // MD
    USER_FUNCTION(SimLEFAuto)  // MD
    USER_FUNCTION(SimDigitalBUP)
    USER_FUNCTION(SimAltFlaps)
    USER_FUNCTION(SimAltFlapsNorm) // MD
    USER_FUNCTION(SimAltFlapsExtend) // MD
    USER_FUNCTION(SimManualFlyup)
    USER_FUNCTION(SimFLCSReset)
    USER_FUNCTION(SimFLTBIT)
    USER_FUNCTION(SimOBOGSBit)
    USER_FUNCTION(SimMalIndLights)
    USER_FUNCTION(SimProbeHeat)
    USER_FUNCTION(SimEPUGEN)
    USER_FUNCTION(SimTestSwitch)
    USER_FUNCTION(SimOverHeat)
    USER_FUNCTION(SimTrimAPDisc)
    USER_FUNCTION(SimTrimAPDISC)  // MD
    USER_FUNCTION(SimTrimAPNORM)  // MD
    USER_FUNCTION(SimMaxPower)
    USER_FUNCTION(SimABReset)
    USER_FUNCTION(SimTrimNoseUp)
    USER_FUNCTION(SimTrimNoseDown)
    USER_FUNCTION(SimTrimYawLeft)
    USER_FUNCTION(SimTrimYawRight)
    USER_FUNCTION(SimTrimRollLeft)
    USER_FUNCTION(SimTrimRollRight)
    USER_FUNCTION(SimStepMissileVolumeUp)
    USER_FUNCTION(SimStepMissileVolumeDown)
    USER_FUNCTION(SimStepThreatVolumeUp)
    USER_FUNCTION(SimStepThreatVolumeDown)
    USER_FUNCTION(SimTriggerFirstDetent)
    USER_FUNCTION(SimTriggerSecondDetent)
    USER_FUNCTION(SimRetUp)
    USER_FUNCTION(SimRetDn)
    USER_FUNCTION(SimCursorEnable)
    USER_FUNCTION(SimStepComm1VolumeUp)
    USER_FUNCTION(SimStepComm1VolumeDown)
    USER_FUNCTION(SimStepComm2VolumeUp)
    USER_FUNCTION(SimStepComm2VolumeDown)
#ifdef DEBUG
    USER_FUNCTION(SimSwitchTextureOnOff)
#endif
    USER_FUNCTION(SimSymWheelUp)
    USER_FUNCTION(SimSymWheelDn)
    USER_FUNCTION(SimRandomError) // MD -- looks like adding this func here was missed.
    USER_FUNCTION(SimToggleCockpit)
    USER_FUNCTION(SimToggleGhostMFDs)
    USER_FUNCTION(SimRangeKnobUp)
    USER_FUNCTION(SimRangeKnobDown)
    //MI

    // M.N.
    USER_FUNCTION(AWACSRequestCarrier)
    USER_FUNCTION(WingmanDropStores)
    USER_FUNCTION(ElementDropStores)
    USER_FUNCTION(FlightDropStores)
    USER_FUNCTION(WingmanVic)
    USER_FUNCTION(ElementVic)
    USER_FUNCTION(FlightVic)
    USER_FUNCTION(WingmanFinger4)
    USER_FUNCTION(ElementFinger4)
    USER_FUNCTION(FlightFinger4)
    USER_FUNCTION(WingmanEchelon)
    USER_FUNCTION(ElementEchelon)
    USER_FUNCTION(FlightEchelon)
    USER_FUNCTION(WingmanForm1)
    USER_FUNCTION(ElementForm1)
    USER_FUNCTION(FlightForm1)
    USER_FUNCTION(WingmanForm2)
    USER_FUNCTION(ElementForm2)
    USER_FUNCTION(FlightForm2)
    USER_FUNCTION(WingmanForm3)
    USER_FUNCTION(ElementForm3)
    USER_FUNCTION(FlightForm3)
    USER_FUNCTION(WingmanForm4)
    USER_FUNCTION(ElementForm4)
    USER_FUNCTION(FlightForm4)


    // JPO Avionics Power Panel
    USER_FUNCTION(SimSMSPower)
    USER_FUNCTION(SimSMSOn)  // MD
    USER_FUNCTION(SimSMSOff)  // MD
    USER_FUNCTION(SimFCCPower)
    USER_FUNCTION(SimFCCOn)  // MD
    USER_FUNCTION(SimFCCOff)  // MD
    USER_FUNCTION(SimMFDPower)
    USER_FUNCTION(SimMFDOn)  // MD
    USER_FUNCTION(SimMFDOff)  // MD
    USER_FUNCTION(SimUFCPower)
    USER_FUNCTION(SimUFCOn)  // MD
    USER_FUNCTION(SimUFCOff)  // MD
    USER_FUNCTION(SimGPSPower)
    USER_FUNCTION(SimGPSOn)  // MD
    USER_FUNCTION(SimGPSOff)  // MD
    USER_FUNCTION(SimDLPower)
    USER_FUNCTION(SimDLOn)  // MD
    USER_FUNCTION(SimDLOff)  // MD
    USER_FUNCTION(SimMAPPower)
    USER_FUNCTION(SimMAPOn)  // MD
    USER_FUNCTION(SimMAPOff)  // MD
    USER_FUNCTION(SimLeftHptPower)
    USER_FUNCTION(SimLeftHptOn)  // MD
    USER_FUNCTION(SimLeftHptOff)  // MD
    USER_FUNCTION(SimRightHptPower)
    USER_FUNCTION(SimRightHptOn)  // MD
    USER_FUNCTION(SimRightHptOff)  // MD
    USER_FUNCTION(SimTISLPower)
    USER_FUNCTION(SimFCRPower)
    USER_FUNCTION(SimFCROn)  // MD
    USER_FUNCTION(SimFCROff)  // MD
    USER_FUNCTION(SimHUDPower)
    USER_FUNCTION(SimHUDOn)  // MD
    USER_FUNCTION(SimHUDOff)  // MD
    USER_FUNCTION(SimToggleRealisticAvionics)
    USER_FUNCTION(SimIncFuelSwitch)
    USER_FUNCTION(SimDecFuelSwitch)
    USER_FUNCTION(SimFuelSwitchTest)  // MD
    USER_FUNCTION(SimFuelSwitchNorm)  // MD
    USER_FUNCTION(SimFuelSwitchResv)  // MD
    USER_FUNCTION(SimFuelSwitchWingInt)  // MD
    USER_FUNCTION(SimFuelSwitchWingExt)  // MD
    USER_FUNCTION(SimFuelSwitchCenterExt)  // MD
    USER_FUNCTION(SimIncFuelPump)
    USER_FUNCTION(SimDecFuelPump)
    USER_FUNCTION(SimFuelPumpOff)  // MD
    USER_FUNCTION(SimFuelPumpNorm) // MD
    USER_FUNCTION(SimFuelPumpAft)  // MD
    USER_FUNCTION(SimFuelPumpFwd)  // MD
    USER_FUNCTION(SimToggleMasterFuel)
    USER_FUNCTION(SimMasterFuelOn)  // MD
    USER_FUNCTION(SimMasterFuelOff)  // MD
    USER_FUNCTION(SimExtFuelTrans)
    USER_FUNCTION(SimFuelTransNorm)  // MD
    USER_FUNCTION(SimFuelTransWing)  // MD
    USER_FUNCTION(SimIncAirSource)
    USER_FUNCTION(SimDecAirSource)
    USER_FUNCTION(SimAirSourceOff)
    USER_FUNCTION(SimAirSourceNorm)  // MD
    USER_FUNCTION(SimAirSourceDump)  // MD
    USER_FUNCTION(SimAirSourceRam)  // MD
    USER_FUNCTION(SimDecLeftAuxComDigit)
    USER_FUNCTION(SimDecCenterAuxComDigit)
    USER_FUNCTION(SimDecRightAuxComDigit)
    USER_FUNCTION(SimInteriorLight)
    USER_FUNCTION(SimInstrumentLight)
    USER_FUNCTION(SimSpotLight)
    USER_FUNCTION(SimRwrPower)

    // Retro 16/10/03
    USER_FUNCTION(Profiler_CursorDown)
    USER_FUNCTION(Profiler_CursorUp)
    USER_FUNCTION(Profiler_Parent)
    USER_FUNCTION(Profiler_Select)
    USER_FUNCTION(Profiler_Hier)
    USER_FUNCTION(Profiler_Self)
    USER_FUNCTION(ToggleProfilerDisplay)
    USER_FUNCTION(ToggleProfiler)
    //USER_FUNCTION(Profiler_HistoryBack) // Retro 22May2004
    //USER_FUNCTION(Profiler_HistoryFwd) // Retro 22May2004
    //USER_FUNCTION(Profiler_HistoryBackFast) // Retro 22May2004
    //USER_FUNCTION(Profiler_HistoryFwdFast) // Retro 22May2004
    // end Retro

    // Retro 21Dec2003
    USER_FUNCTION(ToggleSubTitles)
    USER_FUNCTION(ToggleInfoBar)
    // end Retro

    // Retro 24Dec2003
    USER_FUNCTION(ToggleDisplacementCam) // a dumb name for a dumb function implemented by a dumbass...
    // end Retro

    // Retro 4Jan2004
    USER_FUNCTION(WinAmpNextTrack)
    USER_FUNCTION(WinAmpPreviousTrack)
    USER_FUNCTION(WinAmpStopPlayback)
    USER_FUNCTION(WinAmpStartPlayback)
    USER_FUNCTION(WinAmpTogglePlayback)
    USER_FUNCTION(WinAmpVolumeUp)
    USER_FUNCTION(WinAmpVolumeDown)
    // Retro 4Jan2004 end

    // Retro 12Jan2004
    USER_FUNCTION(CycleEngine)
    USER_FUNCTION(selectLeftEngine)
    USER_FUNCTION(selectRightEngine)
    USER_FUNCTION(selectBothEngines)
    // Retro 12Jan2004 end

    USER_FUNCTION(ToggleTIR)
    USER_FUNCTION(ToggleClickablePitMode) //Wombat778 1-22-2004
    USER_FUNCTION(SimToggleRearView) //Wombat778 4-13-2004
    USER_FUNCTION(SimToggleAltView) //Wombat778 4-13-2004


#ifdef _DO_VTUNE_
    USER_FUNCTION(ToggleVtune)
#endif
    // 2000-05-17 ADDED BY S.G. TO HANDLE THE 'AuxCom' switches
    USER_FUNCTION(SimCycleLeftAuxComDigit)
    USER_FUNCTION(SimCycleCenterAuxComDigit)
    USER_FUNCTION(SimCycleRightAuxComDigit)
    USER_FUNCTION(SimCycleBandAuxComDigit)
    USER_FUNCTION(SimToggleAuxComMaster)
    USER_FUNCTION(SimAuxComBackup)  // MD
    USER_FUNCTION(SimAuxComUFC)  // MD
    USER_FUNCTION(SimToggleAuxComAATR)
    USER_FUNCTION(SimTACANTR)  // MD
    USER_FUNCTION(SimTACANAATR)  // MD
    USER_FUNCTION(SimToggleUHFMaster)
    //me123
    USER_FUNCTION(SimTransmitCom1)
    USER_FUNCTION(SimTransmitCom2)
    // END OF ADDED SECTION
    // 2000-11-10 ADDED BY S.G. TO HANDLE THE 'driftCO' switch
    USER_FUNCTION(SimDriftCO)
    USER_FUNCTION(SimDriftCOOn)  // MD
    USER_FUNCTION(SimDriftCOOff)  // MD
    // END OF ADDED SECTION
    // 2000-11-17 ADDED BY S.G. TO HANDLE THE 'Cat I/III switch'
    USER_FUNCTION(SimCATSwitch)
    USER_FUNCTION(SimCATI)  // MD
    USER_FUNCTION(SimCATIII)  // MD
    USER_FUNCTION(SimRegen) // 2002-03-22 S.G. Force a regen in dogfight

    //sfr: added night light keystroke
    USER_FUNCTION(SimInteriorLight)
    USER_FUNCTION(SimReverseThrusterOn)
    USER_FUNCTION(SimReverseThrusterOff)
    USER_FUNCTION(SimReverseThrusterToggle)

    {
        NULL, ""
    }
};

InputFunctionType FindFunctionFromString(char* str)
{
    InputFunctionType retval = NULL;
    int i = 0;

    while (UserFunctionList[i].theFunc)
    {
        if (strcmp(UserFunctionList[i].funcName, str) == 0)
        {
            retval = UserFunctionList[i].theFunc;
            break;
        }

        i++;
    }

    return (retval);
}

char * FindStringFromFunction(InputFunctionType func)
{
    int i = 0;
    char *retval = NULL;

    while (UserFunctionList[i].theFunc)
    {
        if (func == UserFunctionList[i].theFunc)
        {
            retval = UserFunctionList[i].funcName;
            break;
        }

        i++;
    }

    return (retval);
}
