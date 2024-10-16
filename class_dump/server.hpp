class AccountActivity : google::protobuf::Message { void* vtable[17]; }
class AnimGraphUtils::CTraceFilterAnimGraphSlope : CTraceFilterSkipPlayersAndNPCsAndChildren { void* vtable[2]; }
class ApproachAreaCost : CNavPathCost { void* vtable[10]; }
class AttackState : BotState { void* vtable[4]; }
class BotBombStatusMeme : BotMeme { void* vtable[2]; }
class BotBombsiteStatusMeme : BotMeme { void* vtable[2]; }
class BotChatterInterface { void* vtable[6]; }
class BotDefendHereMeme : BotMeme { void* vtable[2]; }
class BotEventInterface : IGameEventListener2 {}
class BotFollowMeme : BotMeme { void* vtable[2]; }
class BotHeardNoiseMeme : BotMeme { void* vtable[2]; }
class BotHelpMeme : BotMeme { void* vtable[2]; }
class BotHostageBeingTakenMeme : BotMeme { void* vtable[2]; }
class BotMeme { void* vtable[2]; }
class BotRequestReportMeme : BotMeme { void* vtable[2]; }
class BotState {}
class BotWarnSniperMeme : BotMeme { void* vtable[2]; }
class BotWhereBombMeme : BotMeme { void* vtable[2]; }
class BuyState : BotState { void* vtable[4]; }
class CAISound : CPointEntity { void* vtable[228]; }
class CAI_ChangeHintGroup : CBaseEntity { void* vtable[228]; }
class CAI_Expresser : IResponseFilter { void* vtable[6]; }
class CAI_ExpresserHost<CBasePlayerPawn> : CBasePlayerPawn, CAI_ExpresserSink {}
class CAI_ExpresserHost<CHostageExpresserShim> : CHostageExpresserShim, CAI_ExpresserSink {}
class CAI_ExpresserSink {}
class CAI_ExpresserWithFollowup : CAI_Expresser {}
class CAK47 : CCSWeaponBaseGun { void* vtable[429]; }
class CAimTargetManager : CAutoGameSystem { void* vtable[56]; }
class CAmbientGeneric : CPointEntity { void* vtable[231]; }
class CAmmoDef : IVDataResourceListener { void* vtable[12]; }
class CAmmoDefTyped<GameAmmoTypeInfo_t> : CAmmoDef { void* vtable[12]; }
class CAnchorList : CAutoGameSystem { void* vtable[56]; }
class CAnimGraphControllerBase {}
class CAnimGraphGameSystem : IGameSystem, IToolsResourceListener { void* vtable[56]; }
class CAnimGraphNetworkedVariables : IAnimGraphNetworkedVariables { void* vtable[63]; }
class CAnimGraphParamRef<bool> : CAnimGraphParamRefBase<bool,IAnimParameterInstance,IAnimationGraphInstance,0> { void* vtable[3]; }
class CAnimGraphParamRef<char const * __ptr64> : CAnimGraphParamRefBase<char const * __ptr64,IAnimParameterInstance,IAnimationGraphInstance,0> { void* vtable[3]; }
class CAnimGraphParamRef<float> : CAnimGraphParamRefBase<float,IAnimParameterInstance,IAnimationGraphInstance,0> { void* vtable[3]; }
class CAnimGraphParamRefBase<bool,IAnimParameterInstance,IAnimationGraphInstance,0> { void* vtable[3]; }
class CAnimGraphParamRefBase<char const * __ptr64,IAnimParameterInstance,IAnimationGraphInstance,0> { void* vtable[3]; }
class CAnimGraphParamRefBase<float,IAnimParameterInstance,IAnimationGraphInstance,0> { void* vtable[3]; }
class CAnimGraphSaveRestoreOps : CDefSaveRestoreOps { void* vtable[6]; }
class CAnimGraphTraceFilter : CTraceFilterSkipPlayersAndNPCsAndChildren { void* vtable[2]; }
class CAnimGraphTraceProvider : IAnimGraphTraceProvider, CMutableRefCounted<CMutableRefCountBase<CRefMT> > { void* vtable[1]; }
class CAnimPose : CRefCountedMemPoolObject<CAnimPose> { void* vtable[1]; }
class CAnimTagListenerHelper<IBodyGroupAnimTag> : IAnimTagListener { void* vtable[2]; }
class CAnimTagListenerHelper<IClothSettingsAnimTag> : IAnimTagListener { void* vtable[2]; }
class CAnimTagListenerHelper<IFootstepLandedAnimTag> : IAnimTagListener { void* vtable[2]; }
class CAnimTagListenerHelper<IParticleAnimTag> : IAnimTagListener { void* vtable[2]; }
class CAnimTagListenerHelper<ISequenceFinishedAnimTag> : IAnimTagListener { void* vtable[2]; }
class CAnimationBucket { void* vtable[18]; }
class CAttributeContainer : CAttributeManager { void* vtable[9]; }
class CAttributeContainer::NetworkVar_m_Item : CEconItemView { void* vtable[32]; }
class CAttributeDictSaveDataOps : CDefSaveRestoreOps { void* vtable[6]; }
class CAttributeIterator_GetTypedAttributeValue<CAttribute_String,CAttribute_String> : IEconItemAttributeIterator { void* vtable[5]; }
class CAttributeIterator_GetTypedAttributeValue<CAttribute_String,char const * __ptr64> : IEconItemAttributeIterator { void* vtable[5]; }
class CAttributeIterator_GetTypedAttributeValue<Vec3D<float>,Vec3D<float> > : IEconItemAttributeIterator { void* vtable[5]; }
class CAttributeIterator_GetTypedAttributeValue<float,float> : IEconItemAttributeIterator { void* vtable[5]; }
class CAttributeIterator_GetTypedAttributeValue<unsigned int,float> : IEconItemAttributeIterator { void* vtable[5]; }
class CAttributeIterator_GetTypedAttributeValue<unsigned int,unsigned int> : IEconItemAttributeIterator { void* vtable[5]; }
class CAttributeIterator_HasAttribute : IEconItemUntypedAttributeIterator { void* vtable[6]; }
class CAttributeList { void* vtable[4]; }
class CAttributeManager { void* vtable[9]; }
class CAttribute_String : google::protobuf::Message { void* vtable[21]; }
class CAudioEventTagListener : IAnimTagListener { void* vtable[2]; }
class CAutoGameSystem : IGameSystem {}
class CAvatarOverrideMgr : CAutoGameSystem, CGameEventListener { void* vtable[56]; }
class CBarnLight : CBaseModelEntity { void* vtable[254]; }
class CBaseAnimGraph : CBaseModelEntity { void* vtable[284]; }
class CBaseAnimGraph::NetworkVar_m_RagdollPose : PhysicsRagdollPose_t { void* vtable[4]; }
class CBaseAnimGraphController : CSkeletonAnimationController, IAnimGraphSequenceFinishedListener { void* vtable[34]; }
class CBaseAnimGraphController::NetworkVar_m_animGraphNetworkedVars : CAnimGraphNetworkedVariables { void* vtable[63]; }
class CBaseAppSystem<ICustomNavGen> : ICustomNavGen {}
class CBaseAppSystem<IEngineService> : IEngineService {}
class CBaseAppSystem<IGameConfiguration> : IGameConfiguration {}
class CBaseAppSystem<INavGameTest> : INavGameTest {}
class CBaseAppSystem<IServerEntitySubclassUtils> : IServerEntitySubclassUtils {}
class CBaseAppSystem<IServerToolsInfo> : IServerToolsInfo {}
class CBaseAppSystem<ISource2GameClients> : ISource2GameClients {}
class CBaseAppSystem<ISource2GameEntities> : ISource2GameEntities {}
class CBaseAppSystem<ISource2Server> : ISource2Server {}
class CBaseButton : CBaseToggle { void* vtable[261]; }
class CBaseCSGrenade : CCSWeaponBase { void* vtable[432]; }
class CBaseCSGrenadeProjectile : CBaseGrenade { void* vtable[315]; }
class CBaseCSIssue : CBaseIssue {}
class CBaseClientUIEntity : CBaseModelEntity { void* vtable[254]; }
class CBaseCmdKeyValues<CClientMsg_CustomGameEvent> : CClientMsg_CustomGameEvent { void* vtable[17]; }
class CBaseCmdKeyValues<CClientMsg_CustomGameEventBounce> : CClientMsg_CustomGameEventBounce { void* vtable[17]; }
class CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration> : CSVCMsg_GameSessionConfiguration { void* vtable[17]; }
class CBaseCmdKeyValues<CUserMsg_CustomGameEvent> : CUserMsg_CustomGameEvent { void* vtable[17]; }
class CBaseCombatCharacter : CBaseFlex { void* vtable[332]; }
class CBaseCubemap : IToolObject { void* vtable[8]; }
class CBaseDMStart : CPointEntity { void* vtable[228]; }
class CBaseDoor : CBaseToggle, CGameEventListener { void* vtable[254]; }
class CBaseDynamicIOSignature { void* vtable[1]; }
class CBaseEngineService<IEngineService> : CTier4AppSystem<IEngineService,0> { void* vtable[23]; }
class CBaseEntity : CEntityInstance { void* vtable[228]; }
class CBaseEntity::Cm_vecVelocityInitializer : INetworkStateChangedRouter { void* vtable[2]; }
class CBaseFilter : CLogicalEntity { void* vtable[230]; }
class CBaseFire : CBaseEntity { void* vtable[231]; }
class CBaseFlex : CBaseAnimGraph { void* vtable[299]; }
class CBaseFlexAlias_funCBaseFlex : CBaseFlex { void* vtable[299]; }
class CBaseGameStats { void* vtable[54]; }
class CBaseGameStats_Driver : CAutoGameSystem { void* vtable[56]; }
class CBaseGameSystemFactory : IGameSystemFactory { void* vtable[10]; }
class CBaseGrenade : CBaseFlex, CDefaultPlayerPickupVPhysics { void* vtable[311]; }
class CBaseIssue { void* vtable[33]; }
class CBaseLightProbeVolume : IToolObject { void* vtable[8]; }
class CBaseModelEntity : CBaseEntity { void* vtable[251]; }
class CBaseModelEntity::Cm_vecViewOffsetInitializer : INetworkStateChangedRouter { void* vtable[2]; }
class CBaseModelEntity::NetworkVar_m_Collision : CCollisionProperty { void* vtable[4]; }
class CBaseModelEntity::NetworkVar_m_Glow : CGlowProperty { void* vtable[4]; }
class CBaseMoveBehavior : CPathKeyFrame { void* vtable[230]; }
class CBasePlatTrain : CBaseToggle { void* vtable[252]; }
class CBasePlayerController : CBaseEntity { void* vtable[257]; }
class CBasePlayerPawn : CBaseCombatCharacter { void* vtable[389]; }
class CBasePlayerPawn::NetworkVar_m_skybox3d : sky3dparams_t { void* vtable[4]; }
class CBasePlayerVData : CEntitySubclassVDataBase { void* vtable[4]; }
class CBasePlayerWeapon : CEconEntity { void* vtable[344]; }
class CBasePlayerWeaponVData : CEntitySubclassVDataBase { void* vtable[6]; }
class CBaseProp : CBaseAnimGraph { void* vtable[287]; }
class CBasePropDoor : CDynamicProp, CGameEventListener { void* vtable[321]; }
class CBasePulseGameSystem : CAutoGameSystem, IEntityIONotify, IPulseCursorListener { void* vtable[56]; }
class CBasePulseGraphInstance : IGapHost_Unknown { void* vtable[27]; }
class CBaseTempEntity : CUtlSlot { void* vtable[4]; }
class CBaseToggle : CBaseModelEntity { void* vtable[251]; }
class CBaseTrigger : CBaseToggle { void* vtable[263]; }
class CBaseUserCmdPB : google::protobuf::Message { void* vtable[19]; }
class CBaseVDataFileManager : IVDataResourceListener { void* vtable[5]; }
class CBaseViewModel : CBaseAnimGraph, IAttachmentOverride { void* vtable[292]; }
class CBeam : CBaseModelEntity { void* vtable[252]; }
class CBidirMsg_RebroadcastGameEvent : google::protobuf::Message { void* vtable[19]; }
class CBidirMsg_RebroadcastSource : google::protobuf::Message { void* vtable[17]; }
class CBlood : CPointEntity { void* vtable[228]; }
class CBodyComponent : CEntityComponent { void* vtable[4]; }
class CBodyComponentBaseAnimGraph : CBodyComponentSkeletonInstance { void* vtable[4]; }
class CBodyComponentBaseAnimGraph::NetworkVar_m_animationController : CBaseAnimGraphController { void* vtable[34]; }
class CBodyComponentBaseModelEntity : CBodyComponentSkeletonInstance { void* vtable[4]; }
class CBodyComponentPoint : CBodyComponent { void* vtable[4]; }
class CBodyComponentPoint::NetworkVar_m_sceneNode : CGameSceneNode { void* vtable[28]; }
class CBodyComponentSkeletonInstance : CBodyComponent { void* vtable[4]; }
class CBodyComponentSkeletonInstance::NetworkVar_m_skeletonInstance : CSkeletonInstance { void* vtable[28]; }
class CBodyGameSystem : IGameSystem, IToolsResourceListener, IToolsResourcePreReloadListener { void* vtable[56]; }
class CBombTarget : CBombTargetShim { void* vtable[266]; }
class CBombTargetShim : CBaseTrigger {}
class CBoneSetup : EBoneSetup { void* vtable[6]; }
class CBot : CMemZeroOnNew { void* vtable[27]; }
class CBotBreakableEnumerator : CTraceFilterHitEntitiesOnly { void* vtable[2]; }
class CBotDoorEnumerator : CTraceFilterHitEntitiesOnly { void* vtable[2]; }
class CBotGameSystem : IGameSystem { void* vtable[56]; }
class CBotManager { void* vtable[10]; }
class CBreachCharge : CCSWeaponBase { void* vtable[426]; }
class CBreachChargeProjectile : CBaseGrenade { void* vtable[311]; }
class CBreakable : CBaseModelEntity, CDefaultPlayerPickupVPhysics { void* vtable[252]; }
class CBreakableProp : CBaseProp, CDefaultPlayerPickupVPhysics { void* vtable[294]; }
class CBroadcastRecipientFilter : CRecipientFilter { void* vtable[5]; }
class CBtActionAcquireItems : CBtNode { void* vtable[10]; }
class CBtActionAim : CBtNode { void* vtable[10]; }
class CBtActionAimProjectile : CBtNode { void* vtable[10]; }
class CBtActionAttack : CBtNode { void* vtable[10]; }
class CBtActionBuy : CBtNode { void* vtable[10]; }
class CBtActionChooseBombSiteArea : CBtNode { void* vtable[10]; }
class CBtActionChooseRandomWaypoint : CBtNode { void* vtable[10]; }
class CBtActionChooseRandomWaypointWithinRadius : CBtNode { void* vtable[10]; }
class CBtActionChooseTeamSpawnArea : CBtNode { void* vtable[10]; }
class CBtActionCombatPositioning : CBtNode { void* vtable[10]; }
class CBtActionCommitSuicide : CBtNode { void* vtable[10]; }
class CBtActionCompareGlobalCounter : CBtNode { void* vtable[10]; }
class CBtActionCoordinatedBuy : CBtNode { void* vtable[10]; }
class CBtActionCrouch : CBtNode { void* vtable[10]; }
class CBtActionCustomBuy : CBtNode { void* vtable[10]; }
class CBtActionDropActiveWeapon : CBtNode { void* vtable[10]; }
class CBtActionEquipItem : CBtNode { void* vtable[10]; }
class CBtActionEquipWeapon : CBtNode { void* vtable[10]; }
class CBtActionFleeAreaDamage : CBtNode { void* vtable[10]; }
class CBtActionHide : CBtNode { void* vtable[10]; }
class CBtActionInspectCurrentWeapon : CBtNode { void* vtable[10]; }
class CBtActionJump : CBtNode { void* vtable[10]; }
class CBtActionLookAt : CBtNode { void* vtable[10]; }
class CBtActionMoveTo : CBtNode { void* vtable[10]; }
class CBtActionParachutePositioning : CBtNode { void* vtable[10]; }
class CBtActionPullTrigger : CBtNode { void* vtable[10]; }
class CBtActionReload : CBtNode { void* vtable[10]; }
class CBtActionSay : CBtNode { void* vtable[10]; }
class CBtActionSecondaryAttack : CBtNode { void* vtable[10]; }
class CBtActionSelectAreasWithinRadius : CBtNode { void* vtable[10]; }
class CBtActionSetGlobalCounter : CBtNode { void* vtable[10]; }
class CBtActionSetGlobalFlag : CBtNode { void* vtable[10]; }
class CBtActionSetValueFloat : CBtNode { void* vtable[10]; }
class CBtActionSetValueVector : CBtNode { void* vtable[10]; }
class CBtActionStandUp : CBtNode { void* vtable[10]; }
class CBtActionTeleport : CBtNode { void* vtable[10]; }
class CBtActionUse : CBtNode { void* vtable[10]; }
class CBtActionWait : CBtNode { void* vtable[10]; }
class CBtAgentBot : IBtAgent { void* vtable[107]; }
class CBtDecoratorBotService : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorBuyService : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorDecGlobalCounter : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorFindUtilityStrat : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorHidingSpotService : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorInvert : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorMaybe : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorMemory : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorNeedHealing : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorPicker : CBtNodeDecorator { void* vtable[11]; }
class CBtDecoratorPickerBlockedBySmoke : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorPickerDeDup : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorPickerGrenadeType : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorPickerMaxScore : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorPickerNearby : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorPickerRandomByDistance : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorPickerReactionTime : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorPickerVisible : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorPickerWeightAsDistance : CBtDecoratorPicker { void* vtable[11]; }
class CBtDecoratorRandomApproachPoint : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorRandomInt : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorRanker : CBtNodeDecorator { void* vtable[11]; }
class CBtDecoratorRankerDist : CBtDecoratorRanker { void* vtable[11]; }
class CBtDecoratorRemove : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorRemoveKey : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorRepeat : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorRouteService : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorRunOnce : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorSensor : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorSetBarrier : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorSetReactionTime : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorSucceed : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorTagEntity : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorTagThreshold : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorTokenService : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorTryLock : CBtNodeDecorator { void* vtable[10]; }
class CBtDecoratorWaitSuccess : CBtNodeDecorator { void* vtable[10]; }
class CBtNode { void* vtable[10]; }
class CBtNodeComposite : CBtNode { void* vtable[10]; }
class CBtNodeCondition : CBtNodeDecorator { void* vtable[11]; }
class CBtNodeConditionBarrier : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionComparison : CBtNodeCondition {}
class CBtNodeConditionDistanceLess : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionHasParachute : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionInactive : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionIsAirborne : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionIsAtBombSite : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionIsEmpty : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionIsEqual : CBtNodeConditionComparison { void* vtable[13]; }
class CBtNodeConditionIsGreater : CBtNodeConditionComparison { void* vtable[13]; }
class CBtNodeConditionIsGreaterEqual : CBtNodeConditionComparison { void* vtable[13]; }
class CBtNodeConditionIsInvSlotEmpty : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionIsLess : CBtNodeConditionComparison { void* vtable[13]; }
class CBtNodeConditionIsLessEqual : CBtNodeConditionComparison { void* vtable[13]; }
class CBtNodeConditionIsReloading : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionIsWeaponEquipped : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionIsWeaponSuitable : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionOutOfAmmo : CBtNodeCondition { void* vtable[11]; }
class CBtNodeConditionOwnsItem : CBtNodeCondition { void* vtable[11]; }
class CBtNodeDecorator : CBtNode { void* vtable[10]; }
class CBtNodeParallel : CBtNodeComposite { void* vtable[10]; }
class CBtNodeSelector : CBtNodeComposite { void* vtable[10]; }
class CBtNodeSequencer : CBtNodeComposite { void* vtable[10]; }
class CBtNodeSubtree : CBtNode { void* vtable[10]; }
class CBtSensorShape { void* vtable[2]; }
class CBtSensorShapeFov : CBtSensorShape { void* vtable[2]; }
class CBtSensorShapeSphere : CBtSensorShape { void* vtable[2]; }
class CBtTree : CGameEventListener { void* vtable[2]; }
class CBubbling : CBaseModelEntity { void* vtable[251]; }
class CBumpMine : CCSWeaponBase { void* vtable[426]; }
class CBumpMineProjectile : CBaseGrenade { void* vtable[311]; }
class CBuoyancyHelper : IMotionEvent { void* vtable[8]; }
class CBuyZone : CBaseTrigger { void* vtable[263]; }
class CC4 : CCSWeaponBase { void* vtable[429]; }
class CC4::NetworkVar_m_entitySpottedState : EntitySpottedState_t { void* vtable[4]; }
class CCLCMsg_BaselineAck : google::protobuf::Message { void* vtable[19]; }
class CCLCMsg_ClientInfo : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_CmdKeyValues : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_Diagnostic : google::protobuf::Message { void* vtable[21]; }
class CCLCMsg_FileCRCCheck : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_HltvFixupOperatorTick : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_HltvReplay : google::protobuf::Message { void* vtable[19]; }
class CCLCMsg_ListenEvents : google::protobuf::Message { void* vtable[19]; }
class CCLCMsg_LoadingProgress : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_Move : google::protobuf::Message { void* vtable[19]; }
class CCLCMsg_RconServerDetails : google::protobuf::Message { void* vtable[29]; }
class CCLCMsg_RequestPause : google::protobuf::Message { void* vtable[19]; }
class CCLCMsg_RespondCvarValue : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_ServerStatus : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_SplitPlayerConnect : google::protobuf::Message { void* vtable[19]; }
class CCLCMsg_SplitPlayerDisconnect : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_VoiceData : google::protobuf::Message { void* vtable[17]; }
class CCSAddonManager : CAutoGameSystem { void* vtable[56]; }
class CCSAmmoDef : CAmmoDefTyped<GameAmmoTypeInfo_t> { void* vtable[12]; }
class CCSBot : CBot { void* vtable[29]; }
class CCSBotManager : CBotManager { void* vtable[44]; }
class CCSBotManager::BombBeepEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BombDefuseAbortEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BombDefuseBeginEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BombDefusedEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BombExplodedEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BombPickedUpEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BombPlantedEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BreakBreakableEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BreakPropEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::BulletImpactEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::DecoyDetonateEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::DecoyFiringEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::DoorMovingEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::FlashbangDetonateEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::GrenadeBounceEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::HEGrenadeDetonateEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::HostageFollowsEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::HostageRescuedAllEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::MolotovDetonateEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::NavBlockedEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::PlayerDeathEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::PlayerFallDamageEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::PlayerFootstepEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::PlayerRadioEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::RoundEndEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::RoundFreezeEndEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::RoundPreStartEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::ServerShutdownEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::SmokeGrenadeDetonateEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::WeaponFireEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::WeaponFireOnEmptyEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::WeaponReloadEvent : BotEventInterface { void* vtable[3]; }
class CCSBotManager::WeaponZoomEvent : BotEventInterface { void* vtable[3]; }
class CCSChickenManager : CAutoGameSystem, CGameEventListener { void* vtable[56]; }
class CCSEntitySpotting : CAutoGameSystem { void* vtable[57]; }
class CCSEventLog : CEventLog { void* vtable[8]; }
class CCSFatDemoRecorder : CAutoGameSystem, CGameEventListener { void* vtable[56]; }
class CCSFunFactMgr : CGameEventListener { void* vtable[2]; }
class CCSGCServerSystem : CGCClientSystem, GCSDK::ISharedObjectListener { void* vtable[64]; }
class CCSGOPlayerAnimGraphState { void* vtable[1]; }
class CCSGOSteamWorksGameStatsServer : CSteamWorksGameStatsServer { void* vtable[63]; }
class CCSGOUserCmd : CUserCmdBaseHost<CSGOUserCmdPB> { void* vtable[10]; }
class CCSGOVScriptGameSystem : CVScriptGameSystem { void* vtable[59]; }
class CCSGOViewModel : CPredictedViewModel { void* vtable[292]; }
class CCSGOViewModel_GraphController : CAnimGraphControllerBase { void* vtable[13]; }
class CCSGO_TeamIntroCharacterPosition : CCSGO_TeamPreviewCharacterPosition {}
class CCSGO_TeamIntroCounterTerroristPosition : CCSGO_TeamIntroCharacterPosition { void* vtable[229]; }
class CCSGO_TeamIntroTerroristPosition : CCSGO_TeamIntroCharacterPosition { void* vtable[229]; }
class CCSGO_TeamPreviewCharacterPosition : CBaseEntity { void* vtable[229]; }
class CCSGO_TeamPreviewCharacterPosition::NetworkVar_m_agentItem : CEconItemView { void* vtable[32]; }
class CCSGO_TeamPreviewCharacterPosition::NetworkVar_m_glovesItem : CEconItemView { void* vtable[32]; }
class CCSGO_TeamPreviewCharacterPosition::NetworkVar_m_weaponItem : CEconItemView { void* vtable[32]; }
class CCSGO_TeamSelectCharacterPosition : CCSGO_TeamPreviewCharacterPosition {}
class CCSGO_TeamSelectCounterTerroristPosition : CCSGO_TeamSelectCharacterPosition { void* vtable[229]; }
class CCSGO_TeamSelectTerroristPosition : CCSGO_TeamSelectCharacterPosition { void* vtable[229]; }
class CCSGO_WingmanIntroCharacterPosition : CCSGO_TeamIntroCharacterPosition {}
class CCSGO_WingmanIntroCounterTerroristPosition : CCSGO_WingmanIntroCharacterPosition { void* vtable[229]; }
class CCSGO_WingmanIntroTerroristPosition : CCSGO_WingmanIntroCharacterPosition { void* vtable[229]; }
class CCSGameConfiguration : CSource1GameConfiguration { void* vtable[33]; }
class CCSGameModeRules { void* vtable[10]; }
class CCSGameModeRules_ArmsRace : CCSGameModeRules { void* vtable[10]; }
class CCSGameModeRules_Deathmatch : CCSGameModeRules { void* vtable[10]; }
class CCSGameModeRules_Noop : CCSGameModeRules { void* vtable[10]; }
class CCSGameRules : CTeamplayRules, IEntityListener { void* vtable[129]; }
class CCSGameRules::ICalculateEndOfRoundMVPHook_t {}
class CCSGameRules::NetworkVar_m_RetakeRules : CRetakeGameRules { void* vtable[6]; }
class CCSGameRulesProxy : CGameRulesProxy { void* vtable[228]; }
class CCSGameStats : CBaseGameStats, CGameEventListener, CAutoGameSystem, IGameStatTracker { void* vtable[54]; }
class CCSHLTVDirector : CHLTVDirector { void* vtable[20]; }
class CCSHitboxSystem : CHitboxSystem { void* vtable[2]; }
class CCSInventoryManager : CInventoryManager { void* vtable[60]; }
class CCSMapEntityFilter : ISpawnGroupEntityFilter { void* vtable[2]; }
class CCSMinimapBoundary : CBaseEntity { void* vtable[228]; }
class CCSNavArea : CNavAreaExtended { void* vtable[26]; }
class CCSObserverPawn : CCSPlayerPawnBase { void* vtable[402]; }
class CCSObserverStatePickingTeam : CCSPlayerState { void* vtable[3]; }
class CCSObserver_CameraServices : CCSPlayerBase_CameraServices { void* vtable[28]; }
class CCSObserver_MovementServices : CPlayer_MovementServices { void* vtable[38]; }
class CCSObserver_ObserverServices : CPlayer_ObserverServices { void* vtable[32]; }
class CCSObserver_UseServices : CPlayer_UseServices { void* vtable[23]; }
class CCSObserver_ViewModelServices : CPlayer_ViewModelServices { void* vtable[18]; }
class CCSPhysicsPushEntities : CPhysicsPushedEntities { void* vtable[3]; }
class CCSPlace : CServerOnlyModelEntity, ICSPlace { void* vtable[251]; }
class CCSPlayerBase_CameraServices : CPlayer_CameraServices { void* vtable[28]; }
class CCSPlayerController : CBasePlayerController, CGameEventListener { void* vtable[259]; }
class CCSPlayerController_ActionTrackingServices : CPlayerControllerComponent { void* vtable[10]; }
class CCSPlayerController_ActionTrackingServices::NetworkVar_m_matchStats : CSMatchStats_t { void* vtable[4]; }
class CCSPlayerController_DamageServices : CPlayerControllerComponent { void* vtable[10]; }
class CCSPlayerController_InGameMoneyServices : CPlayerControllerComponent { void* vtable[10]; }
class CCSPlayerController_InventoryServices : CPlayerControllerComponent { void* vtable[10]; }
class CCSPlayerInventory : CPlayerInventory { void* vtable[24]; }
class CCSPlayerPawn : CCSPlayerPawnBase, IRenderBoundsWorldSpaceOverride { void* vtable[402]; }
class CCSPlayerPawn::NetworkVar_m_EconGloves : CEconItemView { void* vtable[32]; }
class CCSPlayerPawn::NetworkVar_m_entitySpottedState : EntitySpottedState_t { void* vtable[4]; }
class CCSPlayerPawnBase : CAI_ExpresserHost<CBasePlayerPawn>, IHasAttributes { void* vtable[402]; }
class CCSPlayerPawnStateActive : CCSPlayerState { void* vtable[3]; }
class CCSPlayerResource : CBaseEntity { void* vtable[228]; }
class CCSPlayerState {}
class CCSPlayerStateDeathAnim : CCSPlayerState { void* vtable[3]; }
class CCSPlayerStateDeathWaitForKey : CCSPlayerState { void* vtable[3]; }
class CCSPlayerStateDormant : CCSPlayerState { void* vtable[3]; }
class CCSPlayerStateGungameRespawn : CCSPlayerState { void* vtable[3]; }
class CCSPlayerStateObserverMode : CCSPlayerState { void* vtable[3]; }
class CCSPlayerStateWelcome : CCSPlayerState { void* vtable[3]; }
class CCSPlayerTakeDamageListenerEnemiesCount : CCSPlayer_DamageReactServices::ITakeDamageListener { void* vtable[2]; }
class CCSPlayer_ActionTrackingServices : CPlayerPawnComponent { void* vtable[17]; }
class CCSPlayer_ActionTrackingServices::NetworkVar_m_weaponPurchasesThisMatch : WeaponPurchaseTracker_t { void* vtable[4]; }
class CCSPlayer_ActionTrackingServices::NetworkVar_m_weaponPurchasesThisRound : WeaponPurchaseTracker_t { void* vtable[4]; }
class CCSPlayer_BulletServices : CPlayerPawnComponent { void* vtable[17]; }
class CCSPlayer_BuyServices : CPlayerPawnComponent { void* vtable[17]; }
class CCSPlayer_CameraServices : CCSPlayerBase_CameraServices { void* vtable[28]; }
class CCSPlayer_DamageReactServices : CPlayerPawnComponent { void* vtable[17]; }
class CCSPlayer_DamageReactServices::ITakeDamageListener { void* vtable[2]; }
class CCSPlayer_HostageServices : CPlayerPawnComponent { void* vtable[17]; }
class CCSPlayer_ItemServices : CPlayer_ItemServices { void* vtable[22]; }
class CCSPlayer_MovementServices : CPlayer_MovementServices_Humanoid { void* vtable[50]; }
class CCSPlayer_PingServices : CPlayerPawnComponent { void* vtable[17]; }
class CCSPlayer_RadioServices : CPlayerPawnComponent { void* vtable[17]; }
class CCSPlayer_UseServices : CPlayer_UseServices { void* vtable[23]; }
class CCSPlayer_ViewModelServices : CPlayer_ViewModelServices { void* vtable[18]; }
class CCSPlayer_WaterServices : CPlayer_WaterServices { void* vtable[20]; }
class CCSPlayer_WeaponServices : CPlayer_WeaponServices { void* vtable[30]; }
class CCSPointPulseSystem : CAutoGameSystem, CGameEventListener { void* vtable[56]; }
class CCSPointScript : CBasePulseGraphInstance { void* vtable[27]; }
class CCSPointScriptEntity : CBaseEntity { void* vtable[228]; }
class CCSServerPointScriptEntity : CCSPointScriptEntity { void* vtable[228]; }
class CCSSprite : CSprite { void* vtable[251]; }
class CCSTeam : CTeam { void* vtable[231]; }
class CCSTraceFilterSimple : CTraceFilter { void* vtable[2]; }
class CCSUsrMsgPreMatchSayText : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_AchievementEvent : google::protobuf::Message { void* vtable[23]; }
class CCSUsrMsg_AdjustMoney : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_AdjustMoney_t : CUserMessagePB<327,CCSUsrMsg_AdjustMoney,1> { void* vtable[5]; }
class CCSUsrMsg_AmmoDenied : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_BarTime : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_CallVoteFailed : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_CallVoteFailed_t : CUserMessagePB<345,CCSUsrMsg_CallVoteFailed,1> { void* vtable[5]; }
class CCSUsrMsg_ClientInfo : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_CloseCaption : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_CloseCaptionDirect : google::protobuf::Message { void* vtable[23]; }
class CCSUsrMsg_CounterStrafe : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_CounterStrafe_t : CUserMessagePB<385,CCSUsrMsg_CounterStrafe,1> { void* vtable[5]; }
class CCSUsrMsg_CurrentRoundOdds : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_CurrentRoundOdds_t : CUserMessagePB<380,CCSUsrMsg_CurrentRoundOdds,1> { void* vtable[5]; }
class CCSUsrMsg_CurrentTimescale : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_Damage : google::protobuf::Message { void* vtable[23]; }
class CCSUsrMsg_Damage_t : CUserMessagePB<321,CCSUsrMsg_Damage,1> { void* vtable[5]; }
class CCSUsrMsg_DeepStats : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_DesiredTimescale : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_DisconnectToLobby : google::protobuf::Message { void* vtable[27]; }
class CCSUsrMsg_DisconnectToLobby_t : CUserMessagePB<335,CCSUsrMsg_DisconnectToLobby,1> { void* vtable[5]; }
class CCSUsrMsg_EndOfMatchAllPlayersData : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_EndOfMatchAllPlayersData_Accolade : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_EndOfMatchAllPlayersData_PlayerData : google::protobuf::Message { void* vtable[27]; }
class CCSUsrMsg_EndOfMatchAllPlayersData_t : CUserMessagePB<375,CCSUsrMsg_EndOfMatchAllPlayersData,1> { void* vtable[5]; }
class CCSUsrMsg_EntityOutlineHighlight : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_EntityOutlineHighlight_t : CUserMessagePB<371,CCSUsrMsg_EntityOutlineHighlight,1> { void* vtable[5]; }
class CCSUsrMsg_Fade : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_GameTitle : google::protobuf::Message { void* vtable[25]; }
class CCSUsrMsg_Geiger : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_GlowPropTurnOff : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_HintText : google::protobuf::Message { void* vtable[21]; }
class CCSUsrMsg_HintText_t : CUserMessagePB<323,CCSUsrMsg_HintText,1> { void* vtable[5]; }
class CCSUsrMsg_HudMsg : google::protobuf::Message { void* vtable[21]; }
class CCSUsrMsg_HudText : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_ItemDrop : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_ItemPickup : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_KeyHintText : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_KeyHintText_t : CUserMessagePB<324,CCSUsrMsg_KeyHintText,1> { void* vtable[5]; }
class CCSUsrMsg_KillCam : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_MarkAchievement : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_MatchEndConditions : google::protobuf::Message { void* vtable[23]; }
class CCSUsrMsg_MatchEndConditions_t : CUserMessagePB<334,CCSUsrMsg_MatchEndConditions,1> { void* vtable[5]; }
class CCSUsrMsg_MatchStatsUpdate : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_PlayerDecalDigitalSignature : google::protobuf::Message { void* vtable[25]; }
class CCSUsrMsg_PlayerDecalDigitalSignature_t : CUserMessagePB<368,CCSUsrMsg_PlayerDecalDigitalSignature,1> { void* vtable[5]; }
class CCSUsrMsg_PlayerStatsUpdate : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_PlayerStatsUpdate_Stat : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_PlayerStatsUpdate_t : CUserMessagePB<336,CCSUsrMsg_PlayerStatsUpdate,1> { void* vtable[5]; }
class CCSUsrMsg_PostRoundDamageReport : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_PostRoundDamageReport_t : CUserMessagePB<376,CCSUsrMsg_PostRoundDamageReport,1> { void* vtable[5]; }
class CCSUsrMsg_ProcessSpottedEntityUpdate : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_ProcessSpottedEntityUpdate_SpottedEntityUpdate : google::protobuf::Message { void* vtable[25]; }
class CCSUsrMsg_ProcessSpottedEntityUpdate_t : CUserMessagePB<325,CCSUsrMsg_ProcessSpottedEntityUpdate,1> { void* vtable[5]; }
class CCSUsrMsg_QuestProgress : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_RadioText : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_RadioText_t : CUserMessagePB<322,CCSUsrMsg_RadioText,1> { void* vtable[5]; }
class CCSUsrMsg_RawAudio : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_RawAudio_t : CUserMessagePB<318,CCSUsrMsg_RawAudio,1> { void* vtable[5]; }
class CCSUsrMsg_ReloadEffect : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_ReportHit : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_ReportHit_t : CUserMessagePB<364,CCSUsrMsg_ReportHit,1> { void* vtable[5]; }
class CCSUsrMsg_RequestState : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_ResetHud : google::protobuf::Message { void* vtable[21]; }
class CCSUsrMsg_RoundBackupFilenames : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_RoundBackupFilenames_t : CUserMessagePB<362,CCSUsrMsg_RoundBackupFilenames,1> { void* vtable[5]; }
class CCSUsrMsg_RoundEndReportData : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_RoundEndReportData_InitialConditions : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_RoundEndReportData_RerEvent : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_RoundEndReportData_RerEvent_Damage : google::protobuf::Message { void* vtable[21]; }
class CCSUsrMsg_RoundEndReportData_RerEvent_Objective : google::protobuf::Message { void* vtable[23]; }
class CCSUsrMsg_RoundEndReportData_RerEvent_Victim : google::protobuf::Message { void* vtable[27]; }
class CCSUsrMsg_RoundEndReportData_t : CUserMessagePB<379,CCSUsrMsg_RoundEndReportData,1> { void* vtable[5]; }
class CCSUsrMsg_Rumble : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_SSUI : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_ScoreLeaderboardData : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_SendAudio : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_SendAudio_t : CUserMessagePB<317,CCSUsrMsg_SendAudio,1> { void* vtable[5]; }
class CCSUsrMsg_SendLastKillerDamageToClient : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_SendLastKillerDamageToClient_t : CUserMessagePB<351,CCSUsrMsg_SendLastKillerDamageToClient,1> { void* vtable[5]; }
class CCSUsrMsg_SendPlayerItemDrops : google::protobuf::Message { void* vtable[27]; }
class CCSUsrMsg_SendPlayerItemDrops_t : CUserMessagePB<361,CCSUsrMsg_SendPlayerItemDrops,1> { void* vtable[5]; }
class CCSUsrMsg_SendPlayerItemFound : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_SendPlayerItemFound_t : CUserMessagePB<363,CCSUsrMsg_SendPlayerItemFound,1> { void* vtable[5]; }
class CCSUsrMsg_ServerRankRevealAll : google::protobuf::Message { void* vtable[23]; }
class CCSUsrMsg_ServerRankRevealAll_t : CUserMessagePB<350,CCSUsrMsg_ServerRankRevealAll,1> { void* vtable[5]; }
class CCSUsrMsg_ServerRankUpdate : google::protobuf::Message { void* vtable[21]; }
class CCSUsrMsg_ServerRankUpdate_RankUpdate : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_Shake : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_ShootInfo : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_ShootInfo_t : CUserMessagePB<383,CCSUsrMsg_ShootInfo,1> { void* vtable[5]; }
class CCSUsrMsg_ShowMenu : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_StopSpectatorMode : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_SurvivalStats : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_SurvivalStats_Damage : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_SurvivalStats_Fact : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_SurvivalStats_Placement : google::protobuf::Message { void* vtable[21]; }
class CCSUsrMsg_Train : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_UpdateScreenHealthBar : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_VGUIMenu : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_VGUIMenu_Keys : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_VGUIMenu_t : CUserMessagePB<301,CCSUsrMsg_VGUIMenu,1> { void* vtable[5]; }
class CCSUsrMsg_VoiceMask : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_VoiceMask_PlayerMask : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_VoteFailed : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_VoteFailed_t : CUserMessagePB<348,CCSUsrMsg_VoteFailed,1> { void* vtable[5]; }
class CCSUsrMsg_VotePass : google::protobuf::Message { void* vtable[23]; }
class CCSUsrMsg_VotePass_t : CUserMessagePB<347,CCSUsrMsg_VotePass,1> { void* vtable[5]; }
class CCSUsrMsg_VoteSetup : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_VoteSetup_t : CUserMessagePB<349,CCSUsrMsg_VoteSetup,1> { void* vtable[5]; }
class CCSUsrMsg_VoteStart : google::protobuf::Message { void* vtable[17]; }
class CCSUsrMsg_VoteStart_t : CUserMessagePB<346,CCSUsrMsg_VoteStart,1> { void* vtable[5]; }
class CCSUsrMsg_WarmupHasEnded : google::protobuf::Message { void* vtable[21]; }
class CCSUsrMsg_WarmupHasEnded_t : CUserMessagePB<338,CCSUsrMsg_WarmupHasEnded,1> { void* vtable[5]; }
class CCSUsrMsg_WeaponSound : google::protobuf::Message { void* vtable[23]; }
class CCSUsrMsg_WeaponSound_t : CUserMessagePB<369,CCSUsrMsg_WeaponSound,1> { void* vtable[5]; }
class CCSUsrMsg_XRankGet : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_XRankUpd : google::protobuf::Message { void* vtable[19]; }
class CCSUsrMsg_XpUpdate : google::protobuf::Message { void* vtable[21]; }
class CCSWeaponBase : CBasePlayerWeapon { void* vtable[426]; }
class CCSWeaponBaseGun : CCSWeaponBase { void* vtable[429]; }
class CCSWeaponBaseVData : CBasePlayerWeaponVData { void* vtable[6]; }
class CCSWeaponSystem : CAutoGameSystem, ICSWeaponSystem { void* vtable[56]; }
class CCStrike15ItemDefinition : CEconItemDefinition { void* vtable[51]; }
class CCStrike15ItemSchema : CEconItemSchema { void* vtable[64]; }
class CCStrike15ItemSystem : CEconItemSystem { void* vtable[6]; }
class CCallResult<CServerLogDestination,HTTPRequestCompleted_t> : CCallbackBase { void* vtable[3]; }
class CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionClosed_t> : CCallbackBase { void* vtable[3]; }
class CCallResult<CSteamWorksGameStatsUploader,GameStatsSessionIssued_t> : CCallbackBase { void* vtable[3]; }
class CCallResult<CUGCDetailsRequest,SteamUGCQueryCompleted_t> : CCallbackBase { void* vtable[3]; }
class CCallback<CDedicatedServerWorkshopManager,DownloadItemResult_t,1> : CCallbackImpl<24> { void* vtable[4]; }
class CCallback<CDedicatedServerWorkshopManager,SteamServersConnected_t,1> : CCallbackImpl<1> { void* vtable[4]; }
class CCallback<CGCClientSystem,SteamServersConnected_t,1> : CCallbackImpl<1> { void* vtable[4]; }
class CCallback<CSteamUnifiedMessageDispatcher,SteamUnifiedMessagesSendMethodResult_t,0> : CCallbackImpl<24> { void* vtable[4]; }
class CCallback<CSteamUnifiedMessageDispatcher,SteamUnifiedMessagesSendMethodResult_t,1> : CCallbackImpl<24> { void* vtable[4]; }
class CCallback<GCSDK::CGCClient,GCMessageAvailable_t,0> : CCallbackImpl<4> { void* vtable[4]; }
class CCallback<GCSDK::CGCClient,SteamServerConnectFailure_t,0> : CCallbackImpl<8> { void* vtable[4]; }
class CCallback<GCSDK::CGCClient,SteamServersConnected_t,0> : CCallbackImpl<1> { void* vtable[4]; }
class CCallback<GCSDK::CGCClient,SteamServersDisconnected_t,0> : CCallbackImpl<4> { void* vtable[4]; }
class CCallbackBase {}
class CCallbackImpl<1> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<24> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<4> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<8> : CCallbackBase { void* vtable[4]; }
class CChangeLevel : CBaseTrigger { void* vtable[263]; }
class CChangeLevelIssue : CBaseCSIssue { void* vtable[33]; }
class CCheckClient : CAutoGameSystem { void* vtable[56]; }
class CChicken : CDynamicProp, CGameEventListener, CImprovLocomotor, IHasAttributes { void* vtable[297]; }
class CChicken::NetworkVar_m_AttributeManager : CAttributeContainer { void* vtable[9]; }
class CChicken_GraphController : CAnimGraphControllerBase { void* vtable[13]; }
class CChinaAgreementSessions_StartAgreementSessionInGame_Request : google::protobuf::Message { void* vtable[17]; }
class CChinaAgreementSessions_StartAgreementSessionInGame_Response : google::protobuf::Message { void* vtable[17]; }
class CChoreoActor : CChoreoObjectBase { void* vtable[3]; }
class CChoreoChannel : CChoreoObjectBase { void* vtable[3]; }
class CChoreoEvent : CChoreoObjectBase, ICurveDataAccessor { void* vtable[4]; }
class CChoreoObjectBase {}
class CChoreoScene : ICurveDataAccessor { void* vtable[7]; }
class CChoreoServicesSaveRestoreOps : CDefSaveRestoreOps { void* vtable[6]; }
class CCitadelSoundOpvarSetOBB : CBaseEntity { void* vtable[228]; }
class CClassAutoAllocatePtrSaveRestoreOps<CPulseGraphComponentPointServer> : CDefSaveRestoreOps { void* vtable[6]; }
class CClassPtrSaveRestoreOps : CDefSaveRestoreOps {}
class CCleanupRelationshipsGameSystem : CAutoGameSystem { void* vtable[56]; }
class CClientHeaderOverwatchEvidence : google::protobuf::Message { void* vtable[19]; }
class CClientMsg_ClientUIEvent : google::protobuf::Message { void* vtable[19]; }
class CClientMsg_CustomGameEvent : google::protobuf::Message { void* vtable[17]; }
class CClientMsg_CustomGameEventBounce : google::protobuf::Message { void* vtable[21]; }
class CClientMsg_DevPaletteVisibilityChangedEvent : google::protobuf::Message { void* vtable[19]; }
class CClientMsg_ListenForResponseFound : google::protobuf::Message { void* vtable[17]; }
class CClientMsg_RotateAnchor : google::protobuf::Message { void* vtable[17]; }
class CClientMsg_WorldUIControllerHasPanelChangedEvent : google::protobuf::Message { void* vtable[19]; }
class CClientUIDialogManager : CAutoGameSystem { void* vtable[56]; }
class CCoJob { void* vtable[11]; }
class CCollisionProperty { void* vtable[4]; }
class CCollisionProperty::NetworkVar_m_collisionAttribute : VPhysicsCollisionAttribute_t { void* vtable[4]; }
class CColorCorrection : CBaseEntity { void* vtable[228]; }
class CColorCorrectionSystem : CAutoGameSystem, CGameEventListener { void* vtable[56]; }
class CColorCorrectionVolume : CBaseTrigger { void* vtable[263]; }
class CCommandQueueTester : CAutoGameSystem { void* vtable[56]; }
class CCommentaryAuto : CBaseEntity { void* vtable[228]; }
class CCommentarySystem : CAutoGameSystem { void* vtable[58]; }
class CCommentaryViewPosition : CSprite { void* vtable[251]; }
class CCommunity_GamePersonalDataCategoryInfo : google::protobuf::Message { void* vtable[19]; }
class CCommunity_GetGamePersonalDataCategories_Request : google::protobuf::Message { void* vtable[19]; }
class CCommunity_GetGamePersonalDataCategories_Response : google::protobuf::Message { void* vtable[19]; }
class CCommunity_GetGamePersonalDataEntries_Request : google::protobuf::Message { void* vtable[21]; }
class CCommunity_GetGamePersonalDataEntries_Response : google::protobuf::Message { void* vtable[19]; }
class CCommunity_TerminateGamePersonalDataEntries_Request : google::protobuf::Message { void* vtable[17]; }
class CCommunity_TerminateGamePersonalDataEntries_Response : google::protobuf::Message { void* vtable[23]; }
class CCompressedAnim<Color> : ICompressorService {}
class CCompressedAnim<QuaternionStorage> : ICompressorService {}
class CCompressedAnim<Vec2D<float> > : ICompressorService {}
class CCompressedAnim<Vec3D<float> > : ICompressorService {}
class CCompressedAnim<Vec4D<float> > : ICompressorService {}
class CCompressedAnim<bool> : ICompressorService {}
class CCompressedAnim<float> : ICompressorService {}
class CCompressedAnim<int> : ICompressorService {}
class CCompressedAnimQuaternion : CCompressedAnim<QuaternionStorage> { void* vtable[12]; }
class CCompressedAnimVector3 : CCompressedAnim<Vec3D<float> > { void* vtable[12]; }
class CCompressedDeltaVector3 : CCompressedAnim<Vec3D<float> > { void* vtable[12]; }
class CCompressedFullBool : CCompressedList<bool,bool> { void* vtable[12]; }
class CCompressedFullChar : CCompressedList<int,char> { void* vtable[12]; }
class CCompressedFullColor32 : CCompressedList<Color,Color> { void* vtable[12]; }
class CCompressedFullFloat : CCompressedList<float,float> { void* vtable[12]; }
class CCompressedFullInt : CCompressedList<int,int> { void* vtable[12]; }
class CCompressedFullQuaternion : CCompressedAnim<QuaternionStorage> { void* vtable[12]; }
class CCompressedFullShort : CCompressedList<int,short> { void* vtable[12]; }
class CCompressedFullVector2D : CCompressedList<Vec2D<float>,Vec2D<float> > { void* vtable[12]; }
class CCompressedFullVector3 : CCompressedAnim<Vec3D<float> > { void* vtable[12]; }
class CCompressedFullVector4D : CCompressedList<Vec4D<float>,Vec4D<float> > { void* vtable[12]; }
class CCompressedList<Color,Color> : CCompressedAnim<Color> {}
class CCompressedList<Vec2D<float>,Vec2D<float> > : CCompressedAnim<Vec2D<float> > {}
class CCompressedList<Vec4D<float>,Vec4D<float> > : CCompressedAnim<Vec4D<float> > {}
class CCompressedList<bool,bool> : CCompressedAnim<bool> {}
class CCompressedList<float,float> : CCompressedAnim<float> {}
class CCompressedList<int,char> : CCompressedAnim<int> {}
class CCompressedList<int,int> : CCompressedAnim<int> {}
class CCompressedList<int,short> : CCompressedAnim<int> {}
class CCompressedStatic<Color,Color> : CCompressedAnim<Color> {}
class CCompressedStatic<Vec2D<float>,Vec2D<float> > : CCompressedAnim<Vec2D<float> > {}
class CCompressedStatic<Vec4D<float>,Vec4D<float> > : CCompressedAnim<Vec4D<float> > {}
class CCompressedStatic<bool,bool> : CCompressedAnim<bool> {}
class CCompressedStatic<float,float> : CCompressedAnim<float> {}
class CCompressedStatic<int,char> : CCompressedAnim<int> {}
class CCompressedStatic<int,int> : CCompressedAnim<int> {}
class CCompressedStatic<int,short> : CCompressedAnim<int> {}
class CCompressedStaticBool : CCompressedStatic<bool,bool> { void* vtable[12]; }
class CCompressedStaticChar : CCompressedStatic<int,char> { void* vtable[12]; }
class CCompressedStaticColor32 : CCompressedStatic<Color,Color> { void* vtable[12]; }
class CCompressedStaticFloat : CCompressedStatic<float,float> { void* vtable[12]; }
class CCompressedStaticFullVector3 : CCompressedAnim<Vec3D<float> > { void* vtable[12]; }
class CCompressedStaticInt : CCompressedStatic<int,int> { void* vtable[12]; }
class CCompressedStaticQuaternion : CCompressedAnim<QuaternionStorage> { void* vtable[12]; }
class CCompressedStaticShort : CCompressedStatic<int,short> { void* vtable[12]; }
class CCompressedStaticVector2D : CCompressedStatic<Vec2D<float>,Vec2D<float> > { void* vtable[12]; }
class CCompressedStaticVector3 : CCompressedAnim<Vec3D<float> > { void* vtable[12]; }
class CCompressedStaticVector4D : CCompressedStatic<Vec4D<float>,Vec4D<float> > { void* vtable[12]; }
class CConCommandMemberAccessor<CDebugOverlayCommandTool> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CEntityDebugGameSystem> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CLoopModeGame> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CSoundOpGameSystem> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CSpawnGroupMgrGameSystem> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConceptCooldownsDataOps : CDefSaveRestoreOps { void* vtable[6]; }
class CConstantForceController : IMotionEvent { void* vtable[5]; }
class CConstraintAnchor : CBaseAnimGraph { void* vtable[284]; }
class CCopyRecipientFilter : IRecipientFilter { void* vtable[9]; }
class CCredits : CPointEntity { void* vtable[228]; }
class CCustomGameEventManager : CAutoGameSystem { void* vtable[56]; }
class CCustomNavGenSystem : CTier3AppSystem<ICustomNavGen,0> { void* vtable[13]; }
class CDEagle : CCSWeaponBaseGun { void* vtable[429]; }
class CDataGCCStrike15_v2_MatchInfo : google::protobuf::Message { void* vtable[19]; }
class CDataGCCStrike15_v2_TournamentGroup : google::protobuf::Message { void* vtable[21]; }
class CDataGCCStrike15_v2_TournamentGroupTeam : google::protobuf::Message { void* vtable[17]; }
class CDataGCCStrike15_v2_TournamentGroup_Picks : google::protobuf::Message { void* vtable[17]; }
class CDataGCCStrike15_v2_TournamentInfo : google::protobuf::Message { void* vtable[19]; }
class CDataGCCStrike15_v2_TournamentMatchDraft : google::protobuf::Message { void* vtable[19]; }
class CDataGCCStrike15_v2_TournamentMatchDraft_Entry : google::protobuf::Message { void* vtable[17]; }
class CDataGCCStrike15_v2_TournamentSection : google::protobuf::Message { void* vtable[17]; }
class CDebugHistory : CBaseEntity { void* vtable[228]; }
class CDebugOverlayAIEventFilter : CDebugOverlayFilterBase { void* vtable[10]; }
class CDebugOverlayBullets : CDebugOverlayWindow { void* vtable[59]; }
class CDebugOverlayCombinedFilter : CDebugOverlayFilterBase { void* vtable[10]; }
class CDebugOverlayCommandTool : CDebugOverlayWindow, IEntityListener { void* vtable[59]; }
class CDebugOverlayEntityBrowser : CDebugOverlayWindow, IEntityIONotify { void* vtable[59]; }
class CDebugOverlayEntityCatalog : CDebugOverlayWindow { void* vtable[59]; }
class CDebugOverlayEntityFilter : CDebugOverlayFilterBase { void* vtable[10]; }
class CDebugOverlayExampleWindow : CDebugOverlayWindow { void* vtable[59]; }
class CDebugOverlayFilterBase {}
class CDebugOverlayGameSystem : CAutoGameSystem, IDebugVisualizer, IInputHandler, ISceneViewDebugOverlaysListener { void* vtable[56]; }
class CDebugOverlayGrenades : CDebugOverlayRecorderBase { void* vtable[72]; }
class CDebugOverlayNavEditorWindow : CDebugOverlayWindow { void* vtable[59]; }
class CDebugOverlayRecorderBase : CDebugOverlayWindow { void* vtable[72]; }
class CDebugOverlayScheduleFilter : CDebugOverlayFilterBase { void* vtable[10]; }
class CDebugOverlaySimulationHistory : CDebugOverlayRecorderBase { void* vtable[72]; }
class CDebugOverlaySoundWindow : CDebugOverlayWindow { void* vtable[59]; }
class CDebugOverlayTacticalFilter : CDebugOverlayFilterBase { void* vtable[10]; }
class CDebugOverlayTaskFilter : CDebugOverlayFilterBase { void* vtable[10]; }
class CDebugOverlayTextFilter : CDebugOverlayFilterBase { void* vtable[10]; }
class CDebugOverlayWindow : CAutoGameSystem { void* vtable[59]; }
class CDebugSnapshotCache : CFixedSizeCircularBuffer<CDebugSnapshotFrame_t,2000,int> { void* vtable[2]; }
class CDebugVisualizerAbsTime : IDebugVisualizer { void* vtable[6]; }
class CDecalEmitterSystem : IDecalEmitterSystem, CAutoGameSystem { void* vtable[2]; }
class CDecoyGrenade : CBaseCSGrenade { void* vtable[432]; }
class CDecoyProjectile : CBaseCSGrenadeProjectile, IDecoyProjectile { void* vtable[315]; }
class CDedicatedServerWorkshopManager : CAutoGameSystem, IUGCAddonPathResolver { void* vtable[56]; }
class CDefSaveRestoreBlockHandler : ISaveRestoreBlockHandler {}
class CDefSaveRestoreOps : ISaveRestoreOps {}
class CDefScriptAccessorBase {}
class CDefaultLagCompensation : ILagCompensation { void* vtable[5]; }
class CDefaultPlayerPickupVPhysics : IPlayerPickupVPhysics {}
class CDefaultResponseSystem : CAutoGameSystem, IResponseSystem { void* vtable[56]; }
class CDefaultResponseSystemSaveRestoreBlockHandler : CDefSaveRestoreBlockHandler { void* vtable[9]; }
class CDefaultTypedEntityInstanceFilter<CBaseAnimGraph> : IEntityFindFilter { void* vtable[1]; }
class CDemoAnimationData : google::protobuf::Message { void* vtable[17]; }
class CDemoAnimationHeader : google::protobuf::Message { void* vtable[17]; }
class CDemoClassInfo : google::protobuf::Message { void* vtable[17]; }
class CDemoClassInfo_class_t : google::protobuf::Message { void* vtable[17]; }
class CDemoConsoleCmd : google::protobuf::Message { void* vtable[17]; }
class CDemoCustomData : google::protobuf::Message { void* vtable[17]; }
class CDemoCustomDataCallbacks : google::protobuf::Message { void* vtable[29]; }
class CDemoFileHeader : google::protobuf::Message { void* vtable[17]; }
class CDemoFileInfo : google::protobuf::Message { void* vtable[17]; }
class CDemoFullPacket : google::protobuf::Message { void* vtable[17]; }
class CDemoMessagePB<16,CDemoAnimationData> : IDemoMessage, CDemoAnimationData { void* vtable[6]; }
class CDemoMessagePB<17,CDemoAnimationHeader> : IDemoMessage, CDemoAnimationHeader { void* vtable[6]; }
class CDemoPacket : google::protobuf::Message { void* vtable[17]; }
class CDemoSaveGame : google::protobuf::Message { void* vtable[25]; }
class CDemoSendTables : google::protobuf::Message { void* vtable[19]; }
class CDemoSpawnGroups : google::protobuf::Message { void* vtable[17]; }
class CDemoStop : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CDemoStringTables : google::protobuf::Message { void* vtable[17]; }
class CDemoStringTables_items_t : google::protobuf::Message { void* vtable[17]; }
class CDemoStringTables_table_t : google::protobuf::Message { void* vtable[21]; }
class CDemoSyncTick : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CDemoUserCmd : google::protobuf::Message { void* vtable[19]; }
class CDirtySpatialPartitionEntityList : CAutoGameSystem { void* vtable[56]; }
class CDontUseThisGameSystem : IGameSystem { void* vtable[56]; }
class CDynamicLight : CBaseModelEntity { void* vtable[251]; }
class CDynamicOutputList_RestoreGame : IKV3TransferInterface_EHandle_Load { void* vtable[1]; }
class CDynamicOutputList_SaveGame : IKV3TransferInterface_EHandle_Save { void* vtable[1]; }
class CDynamicProp : CBreakableProp { void* vtable[295]; }
class CDynamicPropAlias_cable_dynamic : CDynamicProp { void* vtable[295]; }
class CDynamicPropAlias_dynamic_prop : CDynamicProp { void* vtable[295]; }
class CDynamicPropAlias_prop_dynamic_override : CDynamicProp { void* vtable[295]; }
class CEconAccountSeasonalOperationGS : GCSDK::CProtoBufSharedObject<CSOAccountSeasonalOperation,41> { void* vtable[10]; }
class CEconCraftingRecipeDefinition { void* vtable[3]; }
class CEconEntity : CBaseFlex, IHasAttributes, IAttachmentOverride { void* vtable[308]; }
class CEconEntity::NetworkVar_m_AttributeManager : CAttributeContainer { void* vtable[9]; }
class CEconEquipSlot : GCSDK::CProtoBufSharedObject<CSOEconEquipSlot,3> { void* vtable[10]; }
class CEconItem : GCSDK::CSharedObject, IEconItemInterface { void* vtable[13]; }
class CEconItemAttribute { void* vtable[1]; }
class CEconItemAttributeDefinition : IEconItemAttributeDefinition { void* vtable[5]; }
class CEconItemAttributeIterator_ApplyAttributeFloat : IEconItemAttributeIterator { void* vtable[5]; }
class CEconItemDefinition : IEconItemDefinition { void* vtable[51]; }
class CEconItemPreviewDataBlock : google::protobuf::Message { void* vtable[17]; }
class CEconItemPreviewDataBlock_Sticker : google::protobuf::Message { void* vtable[17]; }
class CEconItemSchema : IEconItemSchema { void* vtable[64]; }
class CEconItemSetDefinition : IEconItemSetDefinition { void* vtable[12]; }
class CEconItemSystem : IEconItemSystem { void* vtable[6]; }
class CEconItemView : IEconItemInterface { void* vtable[32]; }
class CEconItemView::NetworkVar_m_AttributeList : CAttributeList { void* vtable[4]; }
class CEconItemView::NetworkVar_m_NetworkedDynamicAttributes : CAttributeList { void* vtable[4]; }
class CEconLootListDefinition : IEconLootListDefinition { void* vtable[13]; }
class CEconPersonaDataPublic : GCSDK::CProtoBufSharedObject<CSOPersonaDataPublic,2> { void* vtable[10]; }
class CEconQuestProgress : GCSDK::CProtoBufSharedObject<CSOQuestProgress,46> { void* vtable[10]; }
class CEconStyleInfo { void* vtable[3]; }
class CEconTool_BackpackExpander : IEconTool { void* vtable[6]; }
class CEconTool_Casket : IEconTool { void* vtable[6]; }
class CEconTool_Collection : IEconTool { void* vtable[6]; }
class CEconTool_CrateKey : IEconTool { void* vtable[6]; }
class CEconTool_CustomizeTexture : IEconTool { void* vtable[6]; }
class CEconTool_Default : IEconTool { void* vtable[6]; }
class CEconTool_DescTag : IEconTool { void* vtable[6]; }
class CEconTool_DuelingMinigame : IEconTool { void* vtable[6]; }
class CEconTool_FanToken : IEconTool { void* vtable[6]; }
class CEconTool_Gift : IEconTool { void* vtable[6]; }
class CEconTool_Keychain : IEconTool { void* vtable[6]; }
class CEconTool_KeychainToolCharges : IEconTool { void* vtable[6]; }
class CEconTool_NameTag : IEconTool { void* vtable[6]; }
class CEconTool_Noisemaker : IEconTool { void* vtable[6]; }
class CEconTool_PaintCan : IEconTool { void* vtable[6]; }
class CEconTool_PaintKit : IEconTool { void* vtable[6]; }
class CEconTool_Patch : IEconTool { void* vtable[6]; }
class CEconTool_Recipe : IEconTool { void* vtable[6]; }
class CEconTool_SeasonPass : IEconTool { void* vtable[6]; }
class CEconTool_SeasonTiers : IEconTool { void* vtable[6]; }
class CEconTool_Spray : IEconTool { void* vtable[6]; }
class CEconTool_StatTrakSwap : IEconTool { void* vtable[6]; }
class CEconTool_Sticker : IEconTool { void* vtable[6]; }
class CEconTool_WeddingRing : IEconTool { void* vtable[6]; }
class CEconTool_WrappedGift : IEconTool { void* vtable[6]; }
class CEconTool_XpGrant : IEconTool { void* vtable[6]; }
class CEconTool_XpShopTicket : CEconTool_SeasonPass { void* vtable[6]; }
class CEconWearable : CEconEntity { void* vtable[319]; }
class CEffectData { void* vtable[4]; }
class CEmptySequence : ISequence { void* vtable[60]; }
class CEmptyWorldService : CBaseEngineService<IEngineService> { void* vtable[23]; }
class CEnableMotionFixup : CBaseEntity { void* vtable[228]; }
class CEngineGotvSyncPacket : google::protobuf::Message { void* vtable[17]; }
class CEntFireAutoCompletionFunctor : CEntityAutoCompletionFunctor, ICommandCallback { void* vtable[4]; }
class CEntFireOutputAutoCompletionFunctor : CEntFireAutoCompletionFunctor { void* vtable[4]; }
class CEntity2NetworkClasses : IEntity2Networkables, IEntityListener { void* vtable[6]; }
class CEntity2SaveRestore : IEntity2SaveRestore { void* vtable[44]; }
class CEntityAutoCompletionFunctor : ICommandCompletionCallback { void* vtable[2]; }
class CEntityBlocker : CBaseModelEntity { void* vtable[251]; }
class CEntityComponent {}
class CEntityComponentDataOps<CBodyComponent> : CDefSaveRestoreOps { void* vtable[6]; }
class CEntityComponentDataOps<CHitboxComponent> : CDefSaveRestoreOps { void* vtable[6]; }
class CEntityComponentDataOps<CLightComponent> : CDefSaveRestoreOps { void* vtable[6]; }
class CEntityComponentDataOps<CPropDataComponent> : CDefSaveRestoreOps { void* vtable[6]; }
class CEntityComponentDataOps<CRenderComponent> : CDefSaveRestoreOps { void* vtable[6]; }
class CEntityComponentDataOps<CScriptComponent> : CDefSaveRestoreOps { void* vtable[6]; }
class CEntityComponentDataOps<CTouchExpansionComponent> : CDefSaveRestoreOps { void* vtable[6]; }
class CEntityComponentHelper {}
class CEntityComponentHelperContained<CHitboxComponent> : CEntityComponentHelper {}
class CEntityComponentHelperContained<CPropDataComponent> : CEntityComponentHelper {}
class CEntityComponentHelperContained<CTouchExpansionComponent> : CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CBodyComponent> : CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CBodyComponentBaseAnimGraph> : CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> : CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CBodyComponentPoint> : CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> : CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CLightComponent> : CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CRenderComponent> : CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CScriptComponent> : CEntityComponentHelper {}
class CEntityComponentHelperT<CBodyComponent,CEntityComponentHelperReferenced<CBodyComponent> > : CEntityComponentHelperReferenced<CBodyComponent> { void* vtable[6]; }
class CEntityComponentHelperT<CBodyComponentBaseAnimGraph,CEntityComponentHelperReferenced<CBodyComponentBaseAnimGraph> > : CEntityComponentHelperReferenced<CBodyComponentBaseAnimGraph> { void* vtable[6]; }
class CEntityComponentHelperT<CBodyComponentBaseModelEntity,CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> > : CEntityComponentHelperReferenced<CBodyComponentBaseModelEntity> { void* vtable[6]; }
class CEntityComponentHelperT<CBodyComponentPoint,CEntityComponentHelperReferenced<CBodyComponentPoint> > : CEntityComponentHelperReferenced<CBodyComponentPoint> { void* vtable[6]; }
class CEntityComponentHelperT<CBodyComponentSkeletonInstance,CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> > : CEntityComponentHelperReferenced<CBodyComponentSkeletonInstance> { void* vtable[6]; }
class CEntityComponentHelperT<CHitboxComponent,CEntityComponentHelperContained<CHitboxComponent> > : CEntityComponentHelperContained<CHitboxComponent> { void* vtable[6]; }
class CEntityComponentHelperT<CLightComponent,CEntityComponentHelperReferenced<CLightComponent> > : CEntityComponentHelperReferenced<CLightComponent> { void* vtable[6]; }
class CEntityComponentHelperT<CPropDataComponent,CEntityComponentHelperContained<CPropDataComponent> > : CEntityComponentHelperContained<CPropDataComponent> { void* vtable[6]; }
class CEntityComponentHelperT<CRenderComponent,CEntityComponentHelperReferenced<CRenderComponent> > : CEntityComponentHelperReferenced<CRenderComponent> { void* vtable[6]; }
class CEntityComponentHelperT<CScriptComponent,CEntityComponentHelperReferenced<CScriptComponent> > : CEntityComponentHelperReferenced<CScriptComponent> { void* vtable[6]; }
class CEntityComponentHelperT<CTouchExpansionComponent,CEntityComponentHelperContained<CTouchExpansionComponent> > : CEntityComponentHelperContained<CTouchExpansionComponent> { void* vtable[6]; }
class CEntityDataInstantiator<CWatcherList> : IEntityDataInstantiator { void* vtable[4]; }
class CEntityDataInstantiator<groundlink_t> : IEntityDataInstantiator { void* vtable[4]; }
class CEntityDataInstantiator<physicspushlist_t> : IEntityDataInstantiator { void* vtable[4]; }
class CEntityDebugGameSystem : CAutoGameSystem, CUtlSlot { void* vtable[56]; }
class CEntityDissolve : CBaseModelEntity { void* vtable[251]; }
class CEntityFlame : CBaseEntity { void* vtable[228]; }
class CEntityIONotify : IEntityIONotify { void* vtable[4]; }
class CEntityIOOutput { void* vtable[2]; }
class CEntityInstance { void* vtable[39]; }
class CEntityInstancePolymorphicMetadataHelper : IPolymorphicMetadataHelper { void* vtable[1]; }
class CEntityKeyValuesSaveRestoreOps : CEntityKeyValuesSaveRestoreOpsBase, CDefSaveRestoreOps { void* vtable[6]; }
class CEntityKeyValuesSaveRestoreOpsBase {}
class CEntityLumpRequest : IComputeWorldOriginCallback { void* vtable[1]; }
class CEntityMessageDoSpark : google::protobuf::Message { void* vtable[19]; }
class CEntityMessageFixAngle : google::protobuf::Message { void* vtable[17]; }
class CEntityMessagePB<138,CEntityMessageRemoveAllDecals,1> : CUserMessagePB<138,CEntityMessageRemoveAllDecals,1> {}
class CEntityMessagePB<139,CEntityMessagePropagateForce,1> : CUserMessagePB<139,CEntityMessagePropagateForce,1> {}
class CEntityMessagePlayJingle : google::protobuf::Message { void* vtable[19]; }
class CEntityMessagePropagateForce : google::protobuf::Message { void* vtable[25]; }
class CEntityMessagePropagateForce_t : CEntityMessagePB<139,CEntityMessagePropagateForce,1> { void* vtable[5]; }
class CEntityMessageRemoveAllDecals : google::protobuf::Message { void* vtable[33]; }
class CEntityMessageRemoveAllDecals_t : CEntityMessagePB<138,CEntityMessageRemoveAllDecals,1> { void* vtable[5]; }
class CEntityMessageScreenOverlay : google::protobuf::Message { void* vtable[23]; }
class CEntityMsg : google::protobuf::Message { void* vtable[17]; }
class CEntityOutputTemplate<CUtlSymbolLarge> : CEntityIOOutput { void* vtable[2]; }
class CEntityOutputTemplate<CVariantBase<CVariantDefaultAllocator> > : CEntityIOOutput { void* vtable[2]; }
class CEntityOutputTemplate<Color> : CEntityIOOutput { void* vtable[2]; }
class CEntityOutputTemplate<Vec3D<float> > : CEntityIOOutput { void* vtable[2]; }
class CEntityOutputTemplate<float> : CEntityIOOutput { void* vtable[2]; }
class CEntityOutputTemplate<int> : CEntityIOOutput { void* vtable[2]; }
class CEntityOutputTemplate<unsigned __int64> : CEntityIOOutput { void* vtable[2]; }
class CEntitySaveRestoreBlockHandler : ISaveRestoreBlockHandler { void* vtable[9]; }
class CEntitySpawner<CBaseEntity> : CEntitySpawnerBase<CBaseEntity> { void* vtable[2]; }
class CEntitySpawner<CBaseModelEntity> : CEntitySpawnerBase<CBaseModelEntity> { void* vtable[2]; }
class CEntitySpawner<CBeam> : CEntitySpawnerBase<CBeam> { void* vtable[2]; }
class CEntitySpawner<CCSObserverPawn> : CEntitySpawnerBase<CCSObserverPawn> { void* vtable[2]; }
class CEntitySpawner<CCSPlayerController> : CEntitySpawnerBase<CCSPlayerController> { void* vtable[2]; }
class CEntitySpawner<CCSPlayerPawn> : CEntitySpawnerBase<CCSPlayerPawn> { void* vtable[2]; }
class CEntitySpawner<CCommentaryViewPosition> : CEntitySpawnerBase<CCommentaryViewPosition> { void* vtable[2]; }
class CEntitySpawner<CDebugHistory> : CEntitySpawnerBase<CDebugHistory> { void* vtable[2]; }
class CEntitySpawner<CDynamicProp> : CEntitySpawnerBase<CDynamicProp> { void* vtable[2]; }
class CEntitySpawner<CEntityBlocker> : CEntitySpawnerBase<CEntityBlocker> { void* vtable[2]; }
class CEntitySpawner<CEntityDissolve> : CEntitySpawnerBase<CEntityDissolve> { void* vtable[2]; }
class CEntitySpawner<CEntityFlame> : CEntitySpawnerBase<CEntityFlame> { void* vtable[2]; }
class CEntitySpawner<CEnvExplosion> : CEntitySpawnerBase<CEnvExplosion> { void* vtable[2]; }
class CEntitySpawner<CEnvProjectedTexture> : CEntitySpawnerBase<CEnvProjectedTexture> { void* vtable[2]; }
class CEntitySpawner<CFireSmoke> : CEntitySpawnerBase<CFireSmoke> { void* vtable[2]; }
class CEntitySpawner<CHandleDummy> : CEntitySpawnerBase<CHandleDummy> { void* vtable[2]; }
class CEntitySpawner<CHandleTest> : CEntitySpawnerBase<CHandleTest> { void* vtable[2]; }
class CEntitySpawner<CHostageCarriableProp> : CEntitySpawnerBase<CHostageCarriableProp> { void* vtable[2]; }
class CEntitySpawner<CInfoOffscreenPanoramaTexture> : CEntitySpawnerBase<CInfoOffscreenPanoramaTexture> { void* vtable[2]; }
class CEntitySpawner<CInstancedSceneEntity> : CEntitySpawnerBase<CInstancedSceneEntity> { void* vtable[2]; }
class CEntitySpawner<CItemGenericTriggerHelper> : CEntitySpawnerBase<CItemGenericTriggerHelper> { void* vtable[2]; }
class CEntitySpawner<CPhysicsEntitySolver> : CEntitySpawnerBase<CPhysicsEntitySolver> { void* vtable[2]; }
class CEntitySpawner<CPhysicsProp> : CEntitySpawnerBase<CPhysicsProp> { void* vtable[2]; }
class CEntitySpawner<CPlantedC4> : CEntitySpawnerBase<CPlantedC4> { void* vtable[2]; }
class CEntitySpawner<CPlatTrigger> : CEntitySpawnerBase<CPlatTrigger> { void* vtable[2]; }
class CEntitySpawner<CPlayerPing> : CEntitySpawnerBase<CPlayerPing> { void* vtable[2]; }
class CEntitySpawner<CPlayerSprayDecal> : CEntitySpawnerBase<CPlayerSprayDecal> { void* vtable[2]; }
class CEntitySpawner<CPointEntity> : CEntitySpawnerBase<CPointEntity> { void* vtable[2]; }
class CEntitySpawner<CPredictedViewModel> : CEntitySpawnerBase<CPredictedViewModel> { void* vtable[2]; }
class CEntitySpawner<CRagdollProp> : CEntitySpawnerBase<CRagdollProp> { void* vtable[2]; }
class CEntitySpawner<CSceneEntity> : CEntitySpawnerBase<CSceneEntity> { void* vtable[2]; }
class CEntitySpawner<CShatterGlassShardPhysics> : CEntitySpawnerBase<CShatterGlassShardPhysics> { void* vtable[2]; }
class CEntitySpawner<CSprite> : CEntitySpawnerBase<CSprite> { void* vtable[2]; }
class CEntitySpawner<CTeam> : CEntitySpawnerBase<CTeam> { void* vtable[2]; }
class CEntitySpawner<CTriggerMultiple> : CEntitySpawnerBase<CTriggerMultiple> { void* vtable[2]; }
class CEntitySpawner<CVoteController> : CEntitySpawnerBase<CVoteController> { void* vtable[2]; }
class CEntitySpawner<CWorld> : CEntitySpawnerBase<CWorld> { void* vtable[2]; }
class CEntitySpawnerAsync<CBaseEntity> : CEntitySpawnerAsyncBase<CBaseEntity> { void* vtable[2]; }
class CEntitySpawnerAsync<CPhysicsProp> : CEntitySpawnerAsyncBase<CPhysicsProp> { void* vtable[2]; }
class CEntitySpawnerAsyncBase<CBaseEntity> : CEntitySpawnerBase<CBaseEntity> {}
class CEntitySpawnerAsyncBase<CPhysicsProp> : CEntitySpawnerBase<CPhysicsProp> {}
class CEntitySpawnerBase<CBaseEntity> { void* vtable[2]; }
class CEntitySpawnerBase<CBaseModelEntity> { void* vtable[2]; }
class CEntitySpawnerBase<CBeam> { void* vtable[2]; }
class CEntitySpawnerBase<CCSObserverPawn> { void* vtable[2]; }
class CEntitySpawnerBase<CCSPlayerController> { void* vtable[2]; }
class CEntitySpawnerBase<CCSPlayerPawn> { void* vtable[2]; }
class CEntitySpawnerBase<CCommentaryViewPosition> { void* vtable[2]; }
class CEntitySpawnerBase<CDebugHistory> { void* vtable[2]; }
class CEntitySpawnerBase<CDynamicProp> { void* vtable[2]; }
class CEntitySpawnerBase<CEntityBlocker> { void* vtable[2]; }
class CEntitySpawnerBase<CEntityDissolve> { void* vtable[2]; }
class CEntitySpawnerBase<CEntityFlame> { void* vtable[2]; }
class CEntitySpawnerBase<CEnvExplosion> { void* vtable[2]; }
class CEntitySpawnerBase<CEnvProjectedTexture> { void* vtable[2]; }
class CEntitySpawnerBase<CFireSmoke> { void* vtable[2]; }
class CEntitySpawnerBase<CHandleDummy> { void* vtable[2]; }
class CEntitySpawnerBase<CHandleTest> { void* vtable[2]; }
class CEntitySpawnerBase<CHostageCarriableProp> { void* vtable[2]; }
class CEntitySpawnerBase<CInfoOffscreenPanoramaTexture> { void* vtable[2]; }
class CEntitySpawnerBase<CInstancedSceneEntity> { void* vtable[2]; }
class CEntitySpawnerBase<CItemGenericTriggerHelper> { void* vtable[2]; }
class CEntitySpawnerBase<CPhysicsEntitySolver> { void* vtable[2]; }
class CEntitySpawnerBase<CPhysicsProp> { void* vtable[2]; }
class CEntitySpawnerBase<CPlantedC4> { void* vtable[2]; }
class CEntitySpawnerBase<CPlatTrigger> { void* vtable[2]; }
class CEntitySpawnerBase<CPlayerPing> { void* vtable[2]; }
class CEntitySpawnerBase<CPlayerSprayDecal> { void* vtable[2]; }
class CEntitySpawnerBase<CPointEntity> { void* vtable[2]; }
class CEntitySpawnerBase<CPredictedViewModel> { void* vtable[2]; }
class CEntitySpawnerBase<CRagdollProp> { void* vtable[2]; }
class CEntitySpawnerBase<CSceneEntity> { void* vtable[2]; }
class CEntitySpawnerBase<CShatterGlassShardPhysics> { void* vtable[2]; }
class CEntitySpawnerBase<CSprite> { void* vtable[2]; }
class CEntitySpawnerBase<CTeam> { void* vtable[2]; }
class CEntitySpawnerBase<CTriggerMultiple> { void* vtable[2]; }
class CEntitySpawnerBase<CVoteController> { void* vtable[2]; }
class CEntitySpawnerBase<CWorld> { void* vtable[2]; }
class CEntitySubclassGameSystem : CAutoGameSystem, IVDataResourceListener { void* vtable[56]; }
class CEntitySubclassVDataBase : CMemZeroOnNew { void* vtable[4]; }
class CEntitySystem : IEntityResourceManifestBuilder { void* vtable[23]; }
class CEnvBeam : CBeam { void* vtable[252]; }
class CEnvBeverage : CBaseEntity { void* vtable[228]; }
class CEnvCombinedLightProbeVolume : CBaseEntity, CBaseCubemap, CBaseLightProbeVolume { void* vtable[228]; }
class CEnvCubemap : CBaseEntity, CBaseCubemap { void* vtable[228]; }
class CEnvCubemapBox : CEnvCubemap { void* vtable[228]; }
class CEnvCubemapFog : CBaseEntity { void* vtable[228]; }
class CEnvCubemapToolsResourceListener : IToolsResourceListener { void* vtable[2]; }
class CEnvDecal : CBaseModelEntity { void* vtable[251]; }
class CEnvDetailController : CBaseEntity { void* vtable[228]; }
class CEnvEntityIgniter : CBaseEntity { void* vtable[228]; }
class CEnvEntityMaker : CPointEntity { void* vtable[228]; }
class CEnvExplosion : CModelPointEntity { void* vtable[251]; }
class CEnvFade : CLogicalEntity { void* vtable[228]; }
class CEnvFireSensor : CBaseEntity { void* vtable[228]; }
class CEnvFireSource : CBaseEntity { void* vtable[228]; }
class CEnvFunnel : CBaseEntity { void* vtable[228]; }
class CEnvGlobal : CLogicalEntity { void* vtable[228]; }
class CEnvHudHint : CPointEntity { void* vtable[228]; }
class CEnvInstructorHint : CPointEntity { void* vtable[228]; }
class CEnvInstructorVRHint : CPointEntity { void* vtable[228]; }
class CEnvLaser : CBeam { void* vtable[252]; }
class CEnvLightProbeVolume : CBaseEntity, CBaseLightProbeVolume { void* vtable[228]; }
class CEnvMicrophone : CPointEntity { void* vtable[228]; }
class CEnvMuzzleFlash : CPointEntity { void* vtable[228]; }
class CEnvParticleGlow : CParticleSystem { void* vtable[251]; }
class CEnvProjectedTexture : CModelPointEntity { void* vtable[251]; }
class CEnvScreenOverlay : CPointEntity { void* vtable[228]; }
class CEnvShake : CPointEntity { void* vtable[228]; }
class CEnvSky : CBaseModelEntity { void* vtable[251]; }
class CEnvSoundscape : CServerOnlyEntity { void* vtable[228]; }
class CEnvSoundscapeAlias_snd_soundscape : CEnvSoundscape { void* vtable[228]; }
class CEnvSoundscapeProxy : CEnvSoundscape { void* vtable[228]; }
class CEnvSoundscapeProxyAlias_snd_soundscape_proxy : CEnvSoundscapeProxy { void* vtable[228]; }
class CEnvSoundscapeTriggerable : CEnvSoundscape { void* vtable[228]; }
class CEnvSoundscapeTriggerableAlias_snd_soundscape_triggerable : CEnvSoundscapeTriggerable { void* vtable[228]; }
class CEnvSpark : CPointEntity { void* vtable[228]; }
class CEnvSplash : CPointEntity { void* vtable[228]; }
class CEnvTilt : CPointEntity { void* vtable[228]; }
class CEnvTracer : CPointEntity { void* vtable[228]; }
class CEnvViewPunch : CPointEntity { void* vtable[228]; }
class CEnvVolumetricFogController : CBaseEntity { void* vtable[228]; }
class CEnvVolumetricFogVolume : CBaseEntity { void* vtable[228]; }
class CEnvWind : CBaseEntity { void* vtable[228]; }
class CEnvWind::NetworkVar_m_EnvWindShared : CEnvWindShared { void* vtable[4]; }
class CEnvWindShared { void* vtable[4]; }
class CEventLog : CGameEventListener, IGameSystem { void* vtable[8]; }
class CEventQueue_SaveRestoreBlockHandler : CDefSaveRestoreBlockHandler { void* vtable[9]; }
class CEventsSaveDataOps : ISaveRestoreOps { void* vtable[6]; }
class CFilterAttributeInt : CBaseFilter { void* vtable[230]; }
class CFilterClass : CBaseFilter { void* vtable[230]; }
class CFilterContext : CBaseFilter { void* vtable[230]; }
class CFilterEnemy : CBaseFilter { void* vtable[230]; }
class CFilterLOS : CBaseFilter { void* vtable[230]; }
class CFilterMassGreater : CBaseFilter { void* vtable[230]; }
class CFilterModel : CBaseFilter { void* vtable[230]; }
class CFilterMultiple : CBaseFilter { void* vtable[230]; }
class CFilterName : CBaseFilter { void* vtable[230]; }
class CFilterProximity : CBaseFilter { void* vtable[230]; }
class CFire : CBaseModelEntity { void* vtable[252]; }
class CFireBulletTakeDamageListener : CCSPlayer_DamageReactServices::ITakeDamageListener { void* vtable[2]; }
class CFireCrackerBlast : CInferno { void* vtable[258]; }
class CFireSmoke : CBaseFire { void* vtable[231]; }
class CFish : CBaseAnimGraph { void* vtable[284]; }
class CFishPool : CBaseEntity, CGameEventListener { void* vtable[228]; }
class CFists : CCSWeaponBase { void* vtable[427]; }
class CFixedSizeCircularBuffer<CCSPlayer_WeaponServices::ShootPositionHistoryEntry_t,32,int> { void* vtable[2]; }
class CFixedSizeCircularBuffer<CDebugSnapshotFrame_t,2000,int> { void* vtable[2]; }
class CFixedSizeCircularBuffer<CSGOInputHistoryEntryPB,32,int> { void* vtable[2]; }
class CFixedSizeCircularBuffer<Vec3D<float>,16,int> { void* vtable[2]; }
class CFlashbang : CBaseCSGrenade { void* vtable[432]; }
class CFlashbangProjectile : CBaseCSGrenadeProjectile { void* vtable[315]; }
class CFlashlightReceiver_Manager : CAutoGameSystem, IEntityListener { void* vtable[56]; }
class CFlattenedSerializerSpewFunc_Log : IFlattenedSerializerSpewFunc { void* vtable[3]; }
class CFlexAnimationTrack : ICurveDataAccessor { void* vtable[7]; }
class CFlexSceneFileManager : CAutoGameSystem, IFlexSceneFileManager { void* vtable[57]; }
class CFogController : CBaseEntity { void* vtable[228]; }
class CFogController::NetworkVar_m_fog : fogparams_t { void* vtable[4]; }
class CFogSystem : CAutoGameSystem { void* vtable[56]; }
class CFogTrigger : CBaseTrigger { void* vtable[263]; }
class CFogVolume : CServerOnlyModelEntity { void* vtable[251]; }
class CFootstepControl : CBaseTrigger { void* vtable[263]; }
class CFunFact_GenericEvalFunction : FunFactEvaluator { void* vtable[2]; }
class CFunFact_PlayerEvalFunction : FunFactEvaluator { void* vtable[2]; }
class CFunFact_StatBest : FunFactEvaluator { void* vtable[2]; }
class CFunFact_StatSum : FunFactEvaluator { void* vtable[2]; }
class CFuncBrush : CBaseModelEntity { void* vtable[254]; }
class CFuncConveyor : CBaseModelEntity { void* vtable[251]; }
class CFuncElectrifiedVolume : CFuncBrush { void* vtable[254]; }
class CFuncIllusionary : CBaseModelEntity { void* vtable[251]; }
class CFuncInteractionLayerClip : CBaseModelEntity { void* vtable[251]; }
class CFuncLadder : CBaseModelEntity { void* vtable[251]; }
class CFuncLadderAlias_func_useableladder : CFuncLadder { void* vtable[251]; }
class CFuncMonitor : CFuncBrush { void* vtable[254]; }
class CFuncMoveLinear : CBaseToggle { void* vtable[252]; }
class CFuncMoveLinearAlias_momentary_door : CFuncMoveLinear { void* vtable[252]; }
class CFuncMover : CBaseModelEntity { void* vtable[251]; }
class CFuncNavBlocker : CBaseModelEntity { void* vtable[251]; }
class CFuncNavObstruction : CBaseModelEntity, INavObstacle { void* vtable[251]; }
class CFuncPlat : CBasePlatTrain { void* vtable[256]; }
class CFuncPlatRot : CFuncPlat { void* vtable[256]; }
class CFuncPropRespawnZone : CBaseEntity { void* vtable[228]; }
class CFuncRotating : CBaseModelEntity { void* vtable[251]; }
class CFuncShatterglass : CBaseModelEntity { void* vtable[251]; }
class CFuncTankTrain : CFuncTrackTrain { void* vtable[251]; }
class CFuncTimescale : CBaseEntity { void* vtable[228]; }
class CFuncTrackAuto : CFuncTrackChange { void* vtable[257]; }
class CFuncTrackChange : CFuncPlatRot { void* vtable[257]; }
class CFuncTrackTrain : CBaseModelEntity { void* vtable[251]; }
class CFuncTrain : CBasePlatTrain { void* vtable[252]; }
class CFuncTrainControls : CBaseModelEntity { void* vtable[251]; }
class CFuncVPhysicsClip : CBaseModelEntity { void* vtable[251]; }
class CFuncVehicleClip : CBaseModelEntity { void* vtable[251]; }
class CFuncWall : CBaseModelEntity { void* vtable[251]; }
class CFuncWallToggle : CFuncWall { void* vtable[251]; }
class CFuncWater : CBaseModelEntity { void* vtable[251]; }
class CGCClientJobServerUpdateVersion : GCSDK::CGCClientJob { void* vtable[6]; }
class CGCClientJobServerWelcome : GCSDK::CGCClientJob { void* vtable[6]; }
class CGCClientSystem : CAutoGameSystem, IMobileEventListener { void* vtable[61]; }
class CGCDev_NewItemRequestResponse : GCSDK::CGCClientJob { void* vtable[6]; }
class CGCItemAcknowledged : GCSDK::CGCClientJob { void* vtable[6]; }
class CGCStorePurchaseInit_LineItem : google::protobuf::Message { void* vtable[19]; }
class CGCToGCMsgMasterAck : google::protobuf::Message { void* vtable[17]; }
class CGCToGCMsgMasterAck_Response : google::protobuf::Message { void* vtable[17]; }
class CGCToGCMsgMasterStartupComplete : google::protobuf::internal::ZeroFieldsBase { void* vtable[27]; }
class CGCToGCMsgRouted : google::protobuf::Message { void* vtable[19]; }
class CGCToGCMsgRoutedReply : google::protobuf::Message { void* vtable[21]; }
class CGameAppSystem<IServerEntitySubclassUtils,0> : CTier3AppSystem<IServerEntitySubclassUtils,0> {}
class CGameAppSystem<IServerToolsInfo,0> : CTier3AppSystem<IServerToolsInfo,0> {}
class CGameAppSystem<ISource2GameClients,0> : CTier3AppSystem<ISource2GameClients,0> {}
class CGameAppSystem<ISource2GameEntities,0> : CTier3AppSystem<ISource2GameEntities,0> {}
class CGameAppSystem<ISource2Server,0> : CTier3AppSystem<ISource2Server,0> {}
class CGameChoreoServices : IChoreoServices { void* vtable[17]; }
class CGameConfiguration : CTier4AppSystem<IGameConfiguration,0> { void* vtable[33]; }
class CGameEnd : CRulePointEntity { void* vtable[251]; }
class CGameEntitySystem : CEntitySystem { void* vtable[23]; }
class CGameEvent : IGameEvent { void* vtable[34]; }
class CGameEventListener : IGameEventListener2 { void* vtable[2]; }
class CGameEventManager : IGameEventManager2 { void* vtable[16]; }
class CGameGibManager : CBaseEntity { void* vtable[228]; }
class CGameInfo : google::protobuf::Message { void* vtable[17]; }
class CGameInfo_CCSGameInfo : google::protobuf::Message { void* vtable[17]; }
class CGameInfo_CDotaGameInfo : google::protobuf::Message { void* vtable[17]; }
class CGameInfo_CDotaGameInfo_CHeroSelectEvent : google::protobuf::Message { void* vtable[17]; }
class CGameInfo_CDotaGameInfo_CPlayerInfo : google::protobuf::Message { void* vtable[17]; }
class CGameJobSystem : CAutoGameSystem { void* vtable[56]; }
class CGameMessageDelegateHook<CUserMsg_ParticleManager_t> : CUtlSlot, IGameMessageDelegateHook { void* vtable[6]; }
class CGameMoney : CRulePointEntity { void* vtable[251]; }
class CGameNetworkStringTables : IGameNetworkStringTables { void* vtable[4]; }
class CGameParticleManager { void* vtable[11]; }
class CGameParticleManagerSystem : CAutoGameSystem { void* vtable[56]; }
class CGamePlayerEquip : CRulePointEntity { void* vtable[251]; }
class CGamePlayerZone : CRuleBrushEntity { void* vtable[251]; }
class CGameRules { void* vtable[115]; }
class CGameRulesGameSystem : IGameSystem { void* vtable[56]; }
class CGameRulesProxy : CBaseEntity { void* vtable[228]; }
class CGameSceneNode { void* vtable[28]; }
class CGameSceneNode::Cm_vecOriginInitializer : INetworkStateChangedRouter { void* vtable[2]; }
class CGameSceneNode::NetworkVar_m_hParent : CGameSceneNodeHandle { void* vtable[4]; }
class CGameSceneNodeHandle { void* vtable[4]; }
class CGameServers_AggregationQuery_Request : google::protobuf::Message { void* vtable[19]; }
class CGameServers_AggregationQuery_Response : google::protobuf::Message { void* vtable[17]; }
class CGameServers_AggregationQuery_Response_Group : google::protobuf::Message { void* vtable[21]; }
class CGameSurfacePropertiesList : CSurfacePropReloadableDataTable<CGameSurfaceProperties> { void* vtable[4]; }
class CGameSystemAbstractFactory<CVScriptGameSystem,IVScriptGameSystem> : IGameSystemFactory { void* vtable[10]; }
class CGameSystemEventDispatcher : IGameSystemEventDispatcher { void* vtable[2]; }
class CGameSystemReallocatingFactory<CAimTargetManager,CAimTargetManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CAnimGraphGameSystem,CAnimGraphGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CBodyGameSystem,CBodyGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CBotGameSystem,CBotGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CCSEventLog,CCSEventLog> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CCSGOVScriptGameSystem,CCSGOVScriptGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CCheckClient,CCheckClient> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CColorCorrectionSystem,CColorCorrectionSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CCommentarySystem,CCommentarySystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlayBullets,CDebugOverlayBullets> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlayCommandTool,CDebugOverlayCommandTool> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlayEntityBrowser,CDebugOverlayEntityBrowser> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlayEntityCatalog,CDebugOverlayEntityCatalog> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlayExampleWindow,CDebugOverlayExampleWindow> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlayGameSystem,CDebugOverlayGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlayGrenades,CDebugOverlayGrenades> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlayNavEditorWindow,CDebugOverlayNavEditorWindow> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlaySimulationHistory,CDebugOverlaySimulationHistory> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CDebugOverlaySoundWindow,CDebugOverlaySoundWindow> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CEntityDebugGameSystem,CEntityDebugGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CGameRulesGameSystem,CGameRulesGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CHLTVDirector,CHLTVDirector> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CLightQueryGameSystem,CLightQueryGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CMarkupManager,CMarkupManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CNavGameSystem,CNavGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CNotifyManager,INotify> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CPVSManager,IPVSManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CPhysicsGameSystem,CPhysicsGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CPrecacheRegister,CPrecacheRegister> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CPropData,CPropData> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CRagdollLowViolenceManager,CRagdollLowViolenceManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CRenderGameSystem,CRenderGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSceneManager,ISceneManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CScenePrecacheSystem,CScenePrecacheSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CServerPulseGameSystem,CServerPulseGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSoundOpvarSetPointManager,CSoundOpvarSetPointManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSoundOpvarSetPointManager_MP,CSoundOpvarSetPointManager_MP> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSoundscapeSystem,CSoundscapeSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSource1LegacyGameEventGameSystem,CSource1LegacyGameEventGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSource2EntitySystem,CSource2EntitySystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSource2EntitySystemDeallocator,CSource2EntitySystemDeallocator> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSpawnGroupCompletionCallbackGameSystem,CSpawnGroupCompletionCallbackGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CSpawnGroupMgrGameSystem,CSpawnGroupMgrGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CTeamColorsAssignedSystem,CTeamColorsAssignedSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<CWorldGameSystem,CWorldGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemReallocatingFactory<GameEvent_RegisterHookupGameSystem,GameEvent_RegisterHookupGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CAnchorList,CAnchorList> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CAvatarOverrideMgr,CAvatarOverrideMgr> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CBaseGameStats_Driver,CBaseGameStats_Driver> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSAddonManager,CCSAddonManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSChickenManager,CCSChickenManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSEntitySpotting,CCSEntitySpotting> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSFatDemoRecorder,CCSFatDemoRecorder> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSGCServerSystem,CCSGCServerSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSGOSteamWorksGameStatsServer,CCSGOSteamWorksGameStatsServer> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSGameStats,CCSGameStats> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSHLTVDirector,CCSHLTVDirector> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSInventoryManager,CCSInventoryManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSPointPulseSystem,CCSPointPulseSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCSWeaponSystem,CCSWeaponSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCleanupRelationshipsGameSystem,CCleanupRelationshipsGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CClientUIDialogManager,CClientUIDialogManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCommandQueueTester,CCommandQueueTester> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CCustomGameEventManager,CCustomGameEventManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CDecalEmitterSystem,IDecalEmitterSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CDedicatedServerWorkshopManager,CDedicatedServerWorkshopManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CDefaultResponseSystem,IResponseSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CDirtySpatialPartitionEntityList,CDirtySpatialPartitionEntityList> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CEntitySubclassGameSystem,CEntitySubclassGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CFlashlightReceiver_Manager,CFlashlightReceiver_Manager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CFlexSceneFileManager,CFlexSceneFileManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CFogSystem,CFogSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CGameJobSystem,CGameJobSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CGameParticleManagerSystem,CGameParticleManagerSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CGameTimescale,CGameTimescale> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CGlobalState,CGlobalState> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CItemGeneration,CItemGeneration> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CLagCompensationManager,ILagCompensationManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CNavSpaceBuildLocker,CNavSpaceBuildLocker> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CNetworkPVSModifierEntityManager,CNetworkPVSModifierEntityManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CParticleSystemQueryGameSystem,CParticleSystemQueryGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CPawnListGameSystem,CPawnListGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CPlayerVoiceListener,CPlayerVoiceListener> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CRagdollLRURetirement,CRagdollLRURetirement> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CRagdollPoseControlSystem,CRagdollPoseControlSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CResourcePrecacherGameSystem,CResourcePrecacherGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CResponseQueueManager,CResponseQueueManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CScrubEntityGameSystem,CScrubEntityGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CServerLogHTTPDispatcher,CServerLogHTTPDispatcher> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CShatterGlassGameSystem,CShatterGlassGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CSimThinkManager,CSimThinkManager> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CSmokeVolumeSystem,CSmokeVolumeSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CSoundControllerImp,CSoundControllerImp> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CSoundEmitterSystem,CSoundEmitterSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CSoundOpGameSystem,CSoundOpGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CStressDamageSystem,CStressDamageSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CToolGameSimulationAPI,CToolGameSimulationAPI> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CViewModelPredictedSimulationTimeGameSystem,CViewModelPredictedSimulationTimeGameSystem> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CVisibilityMonitor,CVisibilityMonitor> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<CWeaponList,CWeaponList> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameSystemStaticFactory<ChangeLogger,ChangeLogger> : CBaseGameSystemFactory { void* vtable[10]; }
class CGameText : CRulePointEntity { void* vtable[251]; }
class CGameTimescale : CAutoGameSystem { void* vtable[56]; }
class CGenericConstraint : CPhysConstraint, IVPhysicsWatcher { void* vtable[231]; }
class CGenericExprPart { void* vtable[4]; }
class CGenericExpr_Binary : CGenericExprPart { void* vtable[4]; }
class CGenericExpr_BoolLiteral : CGenericExprPart { void* vtable[4]; }
class CGenericExpr_FloatLiteral : CGenericExprPart { void* vtable[4]; }
class CGenericExpr_FunctionCall : CGenericExprPart { void* vtable[6]; }
class CGenericExpr_IntLiteral : CGenericExprPart { void* vtable[4]; }
class CGenericExpr_Property : CGenericExprPart { void* vtable[4]; }
class CGenericExpr_StringLiteral : CGenericExprPart { void* vtable[4]; }
class CGenericExpr_TernaryConditional : CGenericExprPart { void* vtable[4]; }
class CGenericExpr_Unary : CGenericExprPart { void* vtable[4]; }
class CGenericExpr_VariableReference : CGenericExprPart { void* vtable[4]; }
class CGlobalState : CAutoGameSystem, IGlobalEntityMgr { void* vtable[56]; }
class CGlowProperty { void* vtable[4]; }
class CGradientFog : CBaseEntity { void* vtable[228]; }
class CGunTarget : CBaseToggle { void* vtable[251]; }
class CHEGrenade : CBaseCSGrenade { void* vtable[432]; }
class CHEGrenadeProjectile : CBaseCSGrenadeProjectile { void* vtable[317]; }
class CHLTVDirector : CGameEventListener, IGameSystem, IHLTVDirector { void* vtable[20]; }
class CHandleDummy : CBaseEntity { void* vtable[228]; }
class CHandleTest : CBaseEntity { void* vtable[228]; }
class CHitboxComponent : CEntityComponent { void* vtable[5]; }
class CHitboxSystem {}
class CHostage : CAI_ExpresserHost<CHostageExpresserShim>, CImprovLocomotor { void* vtable[339]; }
class CHostage::NetworkVar_m_entitySpottedState : EntitySpottedState_t { void* vtable[4]; }
class CHostage::NetworkVar_m_reuseTimer : CountdownTimer { void* vtable[4]; }
class CHostageAlias_info_hostage_spawn : CHostage { void* vtable[339]; }
class CHostageCarriableProp : CBaseAnimGraph { void* vtable[284]; }
class CHostageExpresserShim : CBaseCombatCharacter { void* vtable[332]; }
class CHostageRescueZone : CHostageRescueZoneShim, IHostageRescueZone { void* vtable[265]; }
class CHostageRescueZoneShim : CBaseTrigger { void* vtable[264]; }
class CImprovLocomotor {}
class CInButtonState { void* vtable[1]; }
class CInButtonStatePB : google::protobuf::Message { void* vtable[19]; }
class CIncendiaryGrenade : CMolotovGrenade { void* vtable[432]; }
class CInferno : CBaseModelEntity, CGameEventListener { void* vtable[258]; }
class CInfernoLOSTraceFilter : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CInfoData : CServerOnlyEntity { void* vtable[228]; }
class CInfoDeathmatchSpawn : SpawnPoint { void* vtable[228]; }
class CInfoDynamicShadowHint : CPointEntity { void* vtable[230]; }
class CInfoDynamicShadowHintBox : CInfoDynamicShadowHint { void* vtable[230]; }
class CInfoGameEventProxy : CPointEntity { void* vtable[228]; }
class CInfoInstructorHintBombTargetA : CPointEntity { void* vtable[228]; }
class CInfoInstructorHintBombTargetB : CPointEntity { void* vtable[228]; }
class CInfoInstructorHintHostageRescueZone : CPointEntity { void* vtable[228]; }
class CInfoInstructorHintTarget : CPointEntity { void* vtable[228]; }
class CInfoLadderDismount : CBaseEntity { void* vtable[228]; }
class CInfoLandmark : CPointEntity { void* vtable[228]; }
class CInfoOffscreenPanoramaTexture : CPointEntity { void* vtable[228]; }
class CInfoParticleTarget : CPointEntity { void* vtable[228]; }
class CInfoPlayerCounterterrorist : SpawnPoint { void* vtable[228]; }
class CInfoPlayerStart : CPointEntity { void* vtable[228]; }
class CInfoPlayerTerrorist : SpawnPoint { void* vtable[228]; }
class CInfoSpawnGroupLandmark : CPointEntity { void* vtable[228]; }
class CInfoSpawnGroupLoadUnload : CLogicalEntity { void* vtable[232]; }
class CInfoTarget : CPointEntity { void* vtable[228]; }
class CInfoTargetServerOnly : CServerOnlyPointEntity { void* vtable[228]; }
class CInfoTeleportDestination : CPointEntity { void* vtable[228]; }
class CInfoVisibilityBox : CBaseEntity { void* vtable[228]; }
class CInfoWorldLayer : CBaseEntity { void* vtable[228]; }
class CInstancedSceneEntity : CSceneEntity { void* vtable[281]; }
class CInstructorEventEntity : CPointEntity { void* vtable[228]; }
class CInterpolatedVarArrayBase<EnableRenderingInfo_t,0,1,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > : IInterpolatedVar { void* vtable[61]; }
class CInterpolatedVarArrayBase<MeshGroupMaskInfo_t,0,1,CGlobalInterpolationLerpFuncs<MeshGroupMaskInfo_t> > : IInterpolatedVar { void* vtable[61]; }
class CInterpolatedVarBase<EnableRenderingInfo_t,0,1,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > : CInterpolatedVarProceduralBase<EnableRenderingInfo_t,0,1,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > {}
class CInterpolatedVarBase<MeshGroupMaskInfo_t,0,1,CGlobalInterpolationLerpFuncs<MeshGroupMaskInfo_t> > : CInterpolatedVarProceduralBase<MeshGroupMaskInfo_t,0,1,CGlobalInterpolationLerpFuncs<MeshGroupMaskInfo_t> > {}
class CInterpolatedVarProcedural<EnableRenderingInfo_t> : CInterpolatedVarBase<EnableRenderingInfo_t,0,1,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > { void* vtable[61]; }
class CInterpolatedVarProcedural<MeshGroupMaskInfo_t> : CInterpolatedVarBase<MeshGroupMaskInfo_t,0,1,CGlobalInterpolationLerpFuncs<MeshGroupMaskInfo_t> > { void* vtable[61]; }
class CInterpolatedVarProceduralBase<EnableRenderingInfo_t,0,1,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > : CInterpolatedVarArrayBase<EnableRenderingInfo_t,0,1,CGlobalInterpolationLerpFuncs<EnableRenderingInfo_t> > {}
class CInterpolatedVarProceduralBase<MeshGroupMaskInfo_t,0,1,CGlobalInterpolationLerpFuncs<MeshGroupMaskInfo_t> > : CInterpolatedVarArrayBase<MeshGroupMaskInfo_t,0,1,CGlobalInterpolationLerpFuncs<MeshGroupMaskInfo_t> > {}
class CInventoryManager : CAutoGameSystem { void* vtable[59]; }
class CIronSightController { void* vtable[1]; }
class CItem : CBaseAnimGraph, CDefaultPlayerPickupVPhysics { void* vtable[292]; }
class CItemAssaultSuit : CItem { void* vtable[292]; }
class CItemDataCache {}
class CItemDefuser : CItem { void* vtable[292]; }
class CItemDefuserAlias_item_defuser : CItemDefuser { void* vtable[292]; }
class CItemDogtags : CItem { void* vtable[293]; }
class CItemGeneration : CAutoGameSystem { void* vtable[56]; }
class CItemGeneric : CItem { void* vtable[294]; }
class CItemGenericTriggerHelper : CBaseModelEntity { void* vtable[251]; }
class CItemHeavyAssaultSuit : CItemAssaultSuit { void* vtable[292]; }
class CItemKevlar : CItem { void* vtable[292]; }
class CItemSelectionCriteria::CCondition { void* vtable[5]; }
class CItemSelectionCriteria::CFloatCondition : CItemSelectionCriteria::CCondition { void* vtable[5]; }
class CItemSelectionCriteria::CSetCondition : CItemSelectionCriteria::CCondition { void* vtable[5]; }
class CItemSelectionCriteria::CStringCondition : CItemSelectionCriteria::CCondition { void* vtable[5]; }
class CItemSoda : CBaseAnimGraph { void* vtable[284]; }
class CItem_Healthshot : CWeaponBaseItem { void* vtable[432]; }
class CKV3TransferContextBase : IErrorListener { void* vtable[6]; }
class CKV3TransferInterface_EHandle_Load_NoOp : IKV3TransferInterface_EHandle_Load { void* vtable[1]; }
class CKV3TransferInterface_EHandle_Save_NoOp : IKV3TransferInterface_EHandle_Save { void* vtable[1]; }
class CKV3TransferInterface_GameTime_Load_NoOp : IKV3TransferInterface_GameTime_Load {}
class CKV3TransferInterface_GameTime_Save_NoOp : IKV3TransferInterface_GameTime_Save {}
class CKV3TransferLoadContext : CKV3TransferContextBase { void* vtable[6]; }
class CKV3TransferSaveContext : CKV3TransferContextBase { void* vtable[6]; }
class CKV3Transfer_EmptyResourceLoadInterface : IKV3TransferInterface_ResourceLoad { void* vtable[1]; }
class CKV3Transfer_UtlSymbolLargeInterface<CUtlSymbolTableLargeBase<1,2048,CThreadMutex> > : IKV3TransferInterface_UtlSymbolLarge { void* vtable[1]; }
class CKV3Transfer_UtlSymbolLargeInterface<CUtlSymbolTableLargeBase<1,2048,CThreadNullMutex> > : IKV3TransferInterface_UtlSymbolLarge { void* vtable[1]; }
class CKeepUpright : CPointEntity, IMotionEvent { void* vtable[228]; }
class CKickIssue : CBaseCSIssue { void* vtable[33]; }
class CKnife : CCSWeaponBase { void* vtable[427]; }
class CLabelledDebugHelper : CDebugVisualizerAbsTime, IAnimationDebugRenderer { void* vtable[6]; }
class CLadderConnectPhysicsInterface : INavPhysicsInterface { void* vtable[7]; }
class CLagCompensationManager : CAutoGameSystem, ILagCompensationManager { void* vtable[56]; }
class CLegacyCollisionData : IPhysicsCollisionData { void* vtable[3]; }
class CLightComponent : CEntityComponent, CUtlSlot { void* vtable[3]; }
class CLightDirectionalEntity : CLightEntity { void* vtable[251]; }
class CLightEntity : CBaseModelEntity { void* vtable[251]; }
class CLightEnvironmentEntity : CLightDirectionalEntity { void* vtable[251]; }
class CLightGlow : CBaseModelEntity { void* vtable[251]; }
class CLightOrthoEntity : CLightEntity { void* vtable[251]; }
class CLightQueryGameSystem : IGameSystem { void* vtable[56]; }
class CLightSpotEntity : CLightEntity { void* vtable[251]; }
class CLightStyle : IToolsResourceListener { void* vtable[2]; }
class CLoadBackupIssue : CBaseCSIssue { void* vtable[33]; }
class CLoadingEntityListener : IEntityListener { void* vtable[4]; }
class CLoadingSpawnGroup : ILoadingSpawnGroup { void* vtable[17]; }
class CLogicAchievement : CLogicalEntity { void* vtable[228]; }
class CLogicActiveAutosave : CLogicAutosave { void* vtable[228]; }
class CLogicAuto : CBaseEntity { void* vtable[228]; }
class CLogicAutosave : CLogicalEntity { void* vtable[228]; }
class CLogicBranch : CLogicalEntity { void* vtable[228]; }
class CLogicBranchList : CLogicalEntity { void* vtable[228]; }
class CLogicCase : CLogicalEntity { void* vtable[228]; }
class CLogicCollisionPair : CLogicalEntity { void* vtable[228]; }
class CLogicCompare : CLogicalEntity { void* vtable[228]; }
class CLogicDistanceAutosave : CLogicalEntity { void* vtable[228]; }
class CLogicDistanceCheck : CLogicalEntity { void* vtable[228]; }
class CLogicEventListener : CLogicalEntity, CGameEventListener { void* vtable[228]; }
class CLogicGameEvent : CLogicalEntity { void* vtable[228]; }
class CLogicGameEventListener : CLogicalEntity, CGameEventListener { void* vtable[228]; }
class CLogicLineToEntity : CLogicalEntity { void* vtable[228]; }
class CLogicMeasureMovement : CLogicalEntity { void* vtable[228]; }
class CLogicNPCCounter : CBaseEntity { void* vtable[231]; }
class CLogicNPCCounterAABB : CLogicNPCCounter { void* vtable[232]; }
class CLogicNPCCounterOBB : CLogicNPCCounterAABB { void* vtable[232]; }
class CLogicNavigation : CLogicalEntity, IEntityListener { void* vtable[228]; }
class CLogicPlayerProxy : CLogicalEntity { void* vtable[228]; }
class CLogicProximity : CPointEntity { void* vtable[228]; }
class CLogicRelay : CLogicalEntity { void* vtable[228]; }
class CLogicScript : CPointEntity { void* vtable[228]; }
class CLogicalEntity : CServerOnlyEntity { void* vtable[228]; }
class CLoopModeBase : ILoopMode {}
class CLoopModeFactory<CLoopModeGame> : ILoopModeFactory { void* vtable[5]; }
class CLoopModeGame : CLoopModeBase, ILoopModeGameSharedState { void* vtable[9]; }
class CMapInfo : CPointEntity { void* vtable[228]; }
class CMapLoadEntityFilter : ISpawnGroupEntityFilter { void* vtable[2]; }
class CMapVetoPickController : CBaseEntity { void* vtable[228]; }
class CMarkupManager : CAutoGameSystem { void* vtable[56]; }
class CMarkupVolume : CBaseModelEntity { void* vtable[251]; }
class CMarkupVolumeTagged : CMarkupVolume { void* vtable[252]; }
class CMarkupVolumeTagged_Nav : CMarkupVolumeTagged { void* vtable[252]; }
class CMarkupVolumeTagged_NavGame : CMarkupVolumeWithRef { void* vtable[252]; }
class CMarkupVolumeWithRef : CMarkupVolumeTagged { void* vtable[252]; }
class CMathColorBlend : CLogicalEntity { void* vtable[228]; }
class CMathCounter : CLogicalEntity { void* vtable[228]; }
class CMathRemap : CLogicalEntity { void* vtable[228]; }
class CMelee : CCSWeaponBase { void* vtable[427]; }
class CMemZeroOnNew {}
class CMessage : CPointEntity { void* vtable[228]; }
class CMessageEntity : CPointEntity { void* vtable[228]; }
class CModelPointEntity : CBaseModelEntity { void* vtable[251]; }
class CModelState { void* vtable[4]; }
class CMolotovGrenade : CBaseCSGrenade { void* vtable[432]; }
class CMolotovProjectile : CBaseCSGrenadeProjectile { void* vtable[315]; }
class CMomentaryRotButton : CRotButton { void* vtable[261]; }
class CMotorController { void* vtable[1]; }
class CMoverPathNode : CPointEntity { void* vtable[228]; }
class CMsgAccountDetails : google::protobuf::Message { void* vtable[17]; }
class CMsgAcknowledgeRentalExpiration : google::protobuf::Message { void* vtable[21]; }
class CMsgAdjustEquipSlot : google::protobuf::Message { void* vtable[17]; }
class CMsgAdjustEquipSlots : google::protobuf::Message { void* vtable[17]; }
class CMsgAdjustItemEquippedState : google::protobuf::Message { void* vtable[17]; }
class CMsgAdjustItemEquippedStateMulti : google::protobuf::Message { void* vtable[17]; }
class CMsgApplyEggEssence : google::protobuf::Message { void* vtable[17]; }
class CMsgApplyPennantUpgrade : google::protobuf::Message { void* vtable[19]; }
class CMsgApplyStatTrakSwap : google::protobuf::Message { void* vtable[21]; }
class CMsgApplySticker : google::protobuf::Message { void* vtable[19]; }
class CMsgApplyStrangePart : google::protobuf::Message { void* vtable[23]; }
class CMsgCStrike15Welcome : google::protobuf::Message { void* vtable[17]; }
class CMsgCasketItem : google::protobuf::Message { void* vtable[17]; }
class CMsgClearDecalsForSkeletonInstanceEvent : google::protobuf::Message { void* vtable[23]; }
class CMsgClearEntityDecalsEvent : google::protobuf::Message { void* vtable[21]; }
class CMsgClearWorldDecalsEvent : google::protobuf::Message { void* vtable[23]; }
class CMsgClientHello : google::protobuf::Message { void* vtable[21]; }
class CMsgClientWelcome : google::protobuf::Message { void* vtable[17]; }
class CMsgClientWelcome_Location : google::protobuf::Message { void* vtable[17]; }
class CMsgConVarValue : google::protobuf::Message { void* vtable[17]; }
class CMsgConnectionStatus : google::protobuf::Message { void* vtable[19]; }
class CMsgConsumableExhausted : google::protobuf::Message { void* vtable[19]; }
class CMsgCsgoSteamUserStatChange : google::protobuf::Message { void* vtable[17]; }
class CMsgDevNewItemRequest : google::protobuf::Message { void* vtable[17]; }
class CMsgEffectData : google::protobuf::Message { void* vtable[19]; }
class CMsgGCBannedWord : google::protobuf::Message { void* vtable[17]; }
class CMsgGCBannedWordListRequest : google::protobuf::Message { void* vtable[23]; }
class CMsgGCBannedWordListResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_ClientDeepStats : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_ClientDeepStats_DeepStatsMatch : google::protobuf::Message { void* vtable[29]; }
class CMsgGCCStrike15_ClientDeepStats_DeepStatsRange : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_GotvSyncPacket : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_AccountPrivacySettings : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_AccountPrivacySettings_Setting : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Account_RequestCoPlays : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Account_RequestCoPlays_Player : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_AcknowledgePenalty : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_BetaEnrollment : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Client2GCEconPreviewDataBlockRequest : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Client2GCEconPreviewDataBlockResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Client2GCRequestPrestigeCoin : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Client2GCStreamUnlock : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Client2GCTextMsg : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_Client2GcAckXPShopTracks : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientAccountBalance : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientAuthKeyCode : google::protobuf::Message { void* vtable[27]; }
class CMsgGCCStrike15_v2_ClientCommendPlayer : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientGCRankUpdate : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_ClientLogonFatalError : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientNetworkConfig : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_ClientPartyJoinRelay : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientPartyWarning : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_ClientPartyWarning_Entry : google::protobuf::Message { void* vtable[29]; }
class CMsgGCCStrike15_v2_ClientPerfReport : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_ClientPerfReport_Entry : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientPlayerDecalSign : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientPollState : google::protobuf::Message { void* vtable[33]; }
class CMsgGCCStrike15_v2_ClientReportPlayer : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientReportResponse : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_ClientReportServer : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_ClientReportValidation : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientRequestJoinFriendData : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientRequestJoinServerData : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientRequestOffers : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientRequestPlayersProfile : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientRequestSouvenir : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_ClientRequestWatchInfoFriends : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientSubmitSurveyVote : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_ClientToGCChat : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientToGCRequestElevate : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_ClientToGCRequestTicket : google::protobuf::Message { void* vtable[27]; }
class CMsgGCCStrike15_v2_ClientVarValueNotificationInfo : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Fantasy : google::protobuf::Message { void* vtable[25]; }
class CMsgGCCStrike15_v2_Fantasy_FantasySlot : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Fantasy_FantasyTeam : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_GC2ClientInitSystem : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_GC2ClientInitSystem_Response : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_GC2ClientNotifyXPShop : google::protobuf::Message { void* vtable[23]; }
class CMsgGCCStrike15_v2_GC2ClientRefuseSecureMode : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_GC2ClientRequestValidation : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_GC2ClientTextMsg : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_GC2ClientTournamentInfo : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_GC2ServerReservationUpdate : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_GCToClientChat : google::protobuf::Message { void* vtable[23]; }
class CMsgGCCStrike15_v2_GetEventFavorites_Request : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_GetEventFavorites_Response : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_GiftsLeaderboardRequest : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CMsgGCCStrike15_v2_GiftsLeaderboardResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_GiftsLeaderboardResponse_GiftLeaderboardEntry : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchEndRewardDropsNotification : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchEndRunRewardDrops : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchList : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchListRequestCurrentLiveGames : google::protobuf::internal::ZeroFieldsBase { void* vtable[21]; }
class CMsgGCCStrike15_v2_MatchListRequestFullGameInfo : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchListRequestLiveGameForUser : google::protobuf::Message { void* vtable[23]; }
class CMsgGCCStrike15_v2_MatchListRequestRecentUserGames : google::protobuf::Message { void* vtable[31]; }
class CMsgGCCStrike15_v2_MatchListRequestTournamentGames : google::protobuf::Message { void* vtable[23]; }
class CMsgGCCStrike15_v2_MatchListTournamentOperatorMgmt : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingClient2GCHello : google::protobuf::internal::ZeroFieldsBase { void* vtable[19]; }
class CMsgGCCStrike15_v2_MatchmakingClient2ServerPing : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingGC2ClientAbandon : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingGC2ClientHello : google::protobuf::Message { void* vtable[23]; }
class CMsgGCCStrike15_v2_MatchmakingGC2ClientReserve : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingGC2ClientUpdate : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingGC2ClientUpdate_Note : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_MatchmakingGC2ServerConfirm : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_MatchmakingGC2ServerReserve : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingOperator2GCBlogUpdate : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_MatchmakingServerReservationResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingServerRoundStats : google::protobuf::Message { void* vtable[25]; }
class CMsgGCCStrike15_v2_MatchmakingServerRoundStats_DropInfo : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingStart : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_MatchmakingStop : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_Party_Invite : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Party_Register : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCStrike15_v2_Party_Search : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Party_SearchResults : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Party_SearchResults_Entry : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_PlayerOverwatchCaseAssignment : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_PlayerOverwatchCaseStatus : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_PlayerOverwatchCaseUpdate : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_PlayersProfile : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Predictions : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Predictions_GroupMatchTeamPick : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_Server2GCClientValidate : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_ServerNotificationForUserPenalty : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_ServerVarValueNotificationInfo : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_SetEventFavorite : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCStrike15_v2_SetPlayerLeaderboardSafeName : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCStrike15_v2_WatchInfoUsers : google::protobuf::Message { void* vtable[17]; }
class CMsgGCClientDisplayNotification : google::protobuf::Message { void* vtable[17]; }
class CMsgGCClientVersionUpdated : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCollectItem : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCstrike15_v2_ClientRedeemFreeReward : google::protobuf::Message { void* vtable[17]; }
class CMsgGCCstrike15_v2_ClientRedeemMissionReward : google::protobuf::Message { void* vtable[21]; }
class CMsgGCCstrike15_v2_ClientRequestNewMission : google::protobuf::Message { void* vtable[19]; }
class CMsgGCCstrike15_v2_GC2ServerNotifyXPRewarded : google::protobuf::Message { void* vtable[19]; }
class CMsgGCDev_SchemaReservationRequest : google::protobuf::Message { void* vtable[17]; }
class CMsgGCError : google::protobuf::Message { void* vtable[17]; }
class CMsgGCGiftedItems : google::protobuf::Message { void* vtable[17]; }
class CMsgGCHAccountPhoneNumberChange : google::protobuf::Message { void* vtable[17]; }
class CMsgGCHInviteUserToLobby : google::protobuf::Message { void* vtable[17]; }
class CMsgGCHRecurringSubscriptionStatusChange : google::protobuf::Message { void* vtable[17]; }
class CMsgGCHVacVerificationChange : google::protobuf::Message { void* vtable[17]; }
class CMsgGCIncrementKillCountResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCItemCustomizationNotification : google::protobuf::Message { void* vtable[17]; }
class CMsgGCItemPreviewItemBoughtNotification : google::protobuf::Message { void* vtable[17]; }
class CMsgGCMultiplexMessage : google::protobuf::Message { void* vtable[17]; }
class CMsgGCMultiplexMessage_Response : google::protobuf::Message { void* vtable[17]; }
class CMsgGCNameItemNotification : google::protobuf::Message { void* vtable[21]; }
class CMsgGCReportAbuse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCReportAbuseResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCRequestAnnouncements : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CMsgGCRequestAnnouncementsResponse : google::protobuf::Message { void* vtable[21]; }
class CMsgGCRequestSessionIP : google::protobuf::Message { void* vtable[31]; }
class CMsgGCRequestSessionIPResponse : google::protobuf::Message { void* vtable[19]; }
class CMsgGCServerVersionUpdated : google::protobuf::Message { void* vtable[17]; }
class CMsgGCShowItemsPickedUp : google::protobuf::Message { void* vtable[19]; }
class CMsgGCStorePurchaseCancel : google::protobuf::Message { void* vtable[21]; }
class CMsgGCStorePurchaseCancelResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCStorePurchaseFinalize : google::protobuf::Message { void* vtable[21]; }
class CMsgGCStorePurchaseFinalizeResponse : google::protobuf::Message { void* vtable[23]; }
class CMsgGCStorePurchaseInit : google::protobuf::Message { void* vtable[21]; }
class CMsgGCStorePurchaseInitResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCToClientSteamDatagramTicket : google::protobuf::Message { void* vtable[17]; }
class CMsgGCToGCBannedWordListBroadcast : google::protobuf::Message { void* vtable[17]; }
class CMsgGCToGCBannedWordListUpdated : google::protobuf::Message { void* vtable[21]; }
class CMsgGCToGCBroadcastConsoleCommand : google::protobuf::Message { void* vtable[17]; }
class CMsgGCToGCDirtyMultipleSDOCache : google::protobuf::Message { void* vtable[19]; }
class CMsgGCToGCDirtySDOCache : google::protobuf::Message { void* vtable[17]; }
class CMsgGCToGCIsTrustedServer : google::protobuf::Message { void* vtable[19]; }
class CMsgGCToGCIsTrustedServerResponse : google::protobuf::Message { void* vtable[19]; }
class CMsgGCToGCRequestPassportItemGrant : google::protobuf::Message { void* vtable[17]; }
class CMsgGCToGCUpdateSQLKeyValue : google::protobuf::Message { void* vtable[19]; }
class CMsgGCToGCWebAPIAccountChanged : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CMsgGCUpdateSessionIP : google::protobuf::Message { void* vtable[17]; }
class CMsgGCUserTrackTimePlayedConsecutively : google::protobuf::Message { void* vtable[19]; }
class CMsgGC_GlobalGame_Play : google::protobuf::Message { void* vtable[23]; }
class CMsgGC_GlobalGame_Subscribe : google::protobuf::Message { void* vtable[19]; }
class CMsgGC_GlobalGame_Unsubscribe : google::protobuf::Message { void* vtable[17]; }
class CMsgGC_ServerQuestUpdateData : google::protobuf::Message { void* vtable[19]; }
class CMsgGameServerInfo : google::protobuf::Message { void* vtable[19]; }
class CMsgIPCAddress : google::protobuf::Message { void* vtable[19]; }
class CMsgIncrementKillCountAttribute : google::protobuf::Message { void* vtable[17]; }
class CMsgInvitationCreated : google::protobuf::Message { void* vtable[17]; }
class CMsgInviteToParty : google::protobuf::Message { void* vtable[17]; }
class CMsgItemAcknowledged : google::protobuf::Message { void* vtable[19]; }
class CMsgItemAcknowledged__DEPRECATED : google::protobuf::Message { void* vtable[17]; }
class CMsgKickFromParty : google::protobuf::Message { void* vtable[17]; }
class CMsgLANServerAvailable : google::protobuf::Message { void* vtable[21]; }
class CMsgLeaveParty : google::protobuf::internal::ZeroFieldsBase { void* vtable[33]; }
class CMsgLegacySource1ClientWelcome : google::protobuf::Message { void* vtable[21]; }
class CMsgLegacySource1ClientWelcome_Location : google::protobuf::Message { void* vtable[19]; }
class CMsgModifyItemAttribute : google::protobuf::Message { void* vtable[21]; }
class CMsgOpenCrate : google::protobuf::Message { void* vtable[19]; }
class CMsgPartyInviteResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgPlaceDecalEvent : google::protobuf::Message { void* vtable[17]; }
class CMsgPlayerInfo : google::protobuf::Message { void* vtable[17]; }
class CMsgProtoBufHeader : google::protobuf::Message { void* vtable[17]; }
class CMsgQAngle : google::protobuf::Message { void* vtable[17]; }
class CMsgQuaternion : google::protobuf::Message { void* vtable[19]; }
class CMsgRGBA : google::protobuf::Message { void* vtable[19]; }
class CMsgReplayUploadedToYouTube : google::protobuf::Message { void* vtable[17]; }
class CMsgReplicateConVars : google::protobuf::Message { void* vtable[17]; }
class CMsgRequestInventoryRefresh : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CMsgSDONoMemcached : google::protobuf::internal::ZeroFieldsBase { void* vtable[19]; }
class CMsgSOCacheHaveVersion : google::protobuf::Message { void* vtable[23]; }
class CMsgSOCacheSubscribed : google::protobuf::Message { void* vtable[21]; }
class CMsgSOCacheSubscribed_SubscribedType : google::protobuf::Message { void* vtable[19]; }
class CMsgSOCacheSubscriptionCheck : google::protobuf::Message { void* vtable[19]; }
class CMsgSOCacheSubscriptionRefresh : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheUnsubscribed : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheVersion : google::protobuf::Message { void* vtable[19]; }
class CMsgSOIDOwner : google::protobuf::Message { void* vtable[17]; }
class CMsgSOMultipleObjects : google::protobuf::Message { void* vtable[19]; }
class CMsgSOMultipleObjects_SingleObject : google::protobuf::Message { void* vtable[17]; }
class CMsgSOSingleObject : google::protobuf::Message { void* vtable[19]; }
class CMsgSerializedSOCache : google::protobuf::Message { void* vtable[17]; }
class CMsgSerializedSOCache_Cache : google::protobuf::Message { void* vtable[17]; }
class CMsgSerializedSOCache_Cache_Version : google::protobuf::Message { void* vtable[19]; }
class CMsgSerializedSOCache_TypeCache : google::protobuf::Message { void* vtable[17]; }
class CMsgServerAvailable : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CMsgServerHello : google::protobuf::Message { void* vtable[21]; }
class CMsgServerNetworkStats : google::protobuf::Message { void* vtable[19]; }
class CMsgServerNetworkStats_Player : google::protobuf::Message { void* vtable[17]; }
class CMsgServerNetworkStats_Port : google::protobuf::Message { void* vtable[23]; }
class CMsgServerPeer : google::protobuf::Message { void* vtable[17]; }
class CMsgServerUserCmd : google::protobuf::Message { void* vtable[17]; }
class CMsgSetItemPositions : google::protobuf::Message { void* vtable[17]; }
class CMsgSetItemPositions_ItemPosition : google::protobuf::Message { void* vtable[17]; }
class CMsgSortItems : google::protobuf::Message { void* vtable[17]; }
class CMsgSosSetLibraryStackFields : google::protobuf::Message { void* vtable[17]; }
class CMsgSosSetLibraryStackFields_t : CNetMessagePB<211,CMsgSosSetLibraryStackFields,4,1,1> { void* vtable[5]; }
class CMsgSosSetSoundEventParams : google::protobuf::Message { void* vtable[17]; }
class CMsgSosSetSoundEventParams_t : CNetMessagePB<210,CMsgSosSetSoundEventParams,4,1,1> { void* vtable[5]; }
class CMsgSosStartSoundEvent : google::protobuf::Message { void* vtable[19]; }
class CMsgSosStartSoundEvent_t : CNetMessagePB<208,CMsgSosStartSoundEvent,4,1,1> { void* vtable[5]; }
class CMsgSosStopSoundEvent : google::protobuf::Message { void* vtable[19]; }
class CMsgSosStopSoundEventHash : google::protobuf::Message { void* vtable[17]; }
class CMsgSosStopSoundEventHash_t : CNetMessagePB<212,CMsgSosStopSoundEventHash,4,1,1> { void* vtable[5]; }
class CMsgSosStopSoundEvent_t : CNetMessagePB<209,CMsgSosStopSoundEvent,4,1,1> { void* vtable[5]; }
class CMsgSource1LegacyGameEvent : google::protobuf::Message { void* vtable[19]; }
class CMsgSource1LegacyGameEventList : google::protobuf::Message { void* vtable[19]; }
class CMsgSource1LegacyGameEventList_descriptor_t : google::protobuf::Message { void* vtable[21]; }
class CMsgSource1LegacyGameEventList_key_t : google::protobuf::Message { void* vtable[21]; }
class CMsgSource1LegacyGameEvent_key_t : google::protobuf::Message { void* vtable[17]; }
class CMsgSource1LegacyListenEvents : google::protobuf::Message { void* vtable[19]; }
class CMsgSource2SystemSpecs : google::protobuf::Message { void* vtable[17]; }
class CMsgSource2VProfLiteReport : google::protobuf::Message { void* vtable[17]; }
class CMsgSource2VProfLiteReportItem : google::protobuf::Message { void* vtable[17]; }
class CMsgStoreGetUserData : google::protobuf::Message { void* vtable[27]; }
class CMsgStoreGetUserDataResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgSystemBroadcast : google::protobuf::Message { void* vtable[19]; }
class CMsgTEArmorRicochet : google::protobuf::Message { void* vtable[27]; }
class CMsgTEBSPDecal : google::protobuf::Message { void* vtable[17]; }
class CMsgTEBaseBeam : google::protobuf::Message { void* vtable[17]; }
class CMsgTEBeamEntPoint : google::protobuf::Message { void* vtable[19]; }
class CMsgTEBeamEnts : google::protobuf::Message { void* vtable[17]; }
class CMsgTEBeamPoints : google::protobuf::Message { void* vtable[17]; }
class CMsgTEBeamRing : google::protobuf::Message { void* vtable[17]; }
class CMsgTEBloodStream : google::protobuf::Message { void* vtable[17]; }
class CMsgTEBubbleTrail : google::protobuf::Message { void* vtable[21]; }
class CMsgTEBubbles : google::protobuf::Message { void* vtable[21]; }
class CMsgTEDecal : google::protobuf::Message { void* vtable[17]; }
class CMsgTEDust : google::protobuf::Message { void* vtable[19]; }
class CMsgTEEffectDispatch : google::protobuf::Message { void* vtable[21]; }
class CMsgTEEnergySplash : google::protobuf::Message { void* vtable[19]; }
class CMsgTEExplosion : google::protobuf::Message { void* vtable[17]; }
class CMsgTEFireBullets : google::protobuf::Message { void* vtable[25]; }
class CMsgTEFizz : google::protobuf::Message { void* vtable[17]; }
class CMsgTEGlowSprite : google::protobuf::Message { void* vtable[23]; }
class CMsgTEImpact : google::protobuf::Message { void* vtable[17]; }
class CMsgTELargeFunnel : google::protobuf::Message { void* vtable[21]; }
class CMsgTEMuzzleFlash : google::protobuf::Message { void* vtable[17]; }
class CMsgTEPhysicsProp : google::protobuf::Message { void* vtable[19]; }
class CMsgTEPlayerAnimEvent : google::protobuf::Message { void* vtable[17]; }
class CMsgTEPlayerDecal : google::protobuf::Message { void* vtable[23]; }
class CMsgTEProjectedDecal : google::protobuf::Message { void* vtable[17]; }
class CMsgTERadioIcon : google::protobuf::Message { void* vtable[21]; }
class CMsgTEShatterSurface : google::protobuf::Message { void* vtable[17]; }
class CMsgTESmoke : google::protobuf::Message { void* vtable[17]; }
class CMsgTESparks : google::protobuf::Message { void* vtable[17]; }
class CMsgTEWorldDecal : google::protobuf::Message { void* vtable[17]; }
class CMsgTransform : google::protobuf::Message { void* vtable[17]; }
class CMsgUpdateItemSchema : google::protobuf::Message { void* vtable[19]; }
class CMsgUseItem : google::protobuf::Message { void* vtable[21]; }
class CMsgVDebugGameSessionIDEvent : google::protobuf::Message { void* vtable[19]; }
class CMsgVector : google::protobuf::Message { void* vtable[19]; }
class CMsgVector2D : google::protobuf::Message { void* vtable[17]; }
class CMsgVoiceAudio : google::protobuf::Message { void* vtable[17]; }
class CMsg_CVars : google::protobuf::Message { void* vtable[19]; }
class CMsg_CVars_CVar : google::protobuf::Message { void* vtable[17]; }
class CMultiLightProxy : CLogicalEntity { void* vtable[228]; }
class CMultiSource : CLogicalEntity { void* vtable[228]; }
class CMultiplayRules : CGameRules, CMemZeroOnNew { void* vtable[117]; }
class CMultiplayer_Expresser : CAI_ExpresserWithFollowup { void* vtable[8]; }
class CMutableRefCountBase<CRefMT> {}
class CMutableRefCounted<CMutableRefCountBase<CRefMT> > : CMutableRefCountBase<CRefMT> {}
class CNETMsg_DebugOverlay : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_NOP : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CNETMsg_SetConVar : google::protobuf::Message { void* vtable[25]; }
class CNETMsg_SignonState : google::protobuf::Message { void* vtable[21]; }
class CNETMsg_SpawnGroup_Load : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_LoadCompleted : google::protobuf::Message { void* vtable[21]; }
class CNETMsg_SpawnGroup_ManifestUpdate : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_SetCreationTick : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_Unload : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SplitScreenUser : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_StringCmd : google::protobuf::Message { void* vtable[23]; }
class CNETMsg_Tick : google::protobuf::Message { void* vtable[17]; }
class CNavArea : CNavPoly { void* vtable[20]; }
class CNavAreaBuildPathTest : IPathfindTest { void* vtable[6]; }
class CNavAreaExtended : CNavArea {}
class CNavBreadthFirstSearch<CNavArea> { void* vtable[1]; }
class CNavBreadthFirstSearchLattice<CNavArea> : CNavBreadthFirstSearch<CNavArea> { void* vtable[1]; }
class CNavChangeMgr : INavMovableMeshListener { void* vtable[1]; }
class CNavDraw : INavDraw { void* vtable[11]; }
class CNavDrawArea : INavDrawArea { void* vtable[4]; }
class CNavDrawMesh : INavDrawMesh { void* vtable[1]; }
class CNavEditObstacle : INavObstacle { void* vtable[15]; }
class CNavEditor : INavEditor { void* vtable[4]; }
class CNavEntityInterface : INavEntityInterface { void* vtable[1]; }
class CNavGameSystem : IGameSystem { void* vtable[56]; }
class CNavGameTest : CTier3AppSystem<INavGameTest,0> { void* vtable[12]; }
class CNavGenRtJob : CThreadedJob { void* vtable[7]; }
class CNavGenRtObstacle : INavObstacle { void* vtable[15]; }
class CNavHullPresetVDataFileManager : CVDataFileManager<CNavHullPresetVData> { void* vtable[8]; }
class CNavHullVDataFileManager : CVDataFileManager<CNavHullVData> { void* vtable[8]; }
class CNavLinkAreaEntity : CPointEntity { void* vtable[228]; }
class CNavLinkAreaManager : INavLinkManager { void* vtable[2]; }
class CNavLinkMovementDataSchema : IVDataResourceListener { void* vtable[3]; }
class CNavMarkupManager : INavMarkupManager { void* vtable[3]; }
class CNavMesh : INavMovableMeshListener { void* vtable[28]; }
class CNavMeshGameEventListener : CGameEventListener, INavMeshGameEventListener { void* vtable[2]; }
class CNavObstacleBlockMgr { void* vtable[2]; }
class CNavObstacleConnectionMgr : INavMovableMeshListener { void* vtable[1]; }
class CNavObstacleEntity : INavObstacle { void* vtable[16]; }
class CNavObstacleEntityDoor : CNavObstacleEntity { void* vtable[16]; }
class CNavObstacleSplitMgr : INavMovableMeshListener { void* vtable[1]; }
class CNavObstructionManager : INavObstructionManager { void* vtable[12]; }
class CNavPathCost : INavPathCost { void* vtable[10]; }
class CNavPathCostCore : CNavPathCost { void* vtable[11]; }
class CNavPathCostForTests : CNavPathCost { void* vtable[10]; }
class CNavPathData { void* vtable[4]; }
class CNavPhysicsInterface : INavPhysicsInterface { void* vtable[7]; }
class CNavPoly { void* vtable[3]; }
class CNavSearchHexLattice : CNavBreadthFirstSearch<CNavArea> { void* vtable[1]; }
class CNavSpaceBuildLocker : IGameSystem { void* vtable[56]; }
class CNavSpaceBuildTreeJob : CThreadedJob { void* vtable[7]; }
class CNavSpaceCalcBlocksJob : CThreadedJob { void* vtable[7]; }
class CNavSpaceInfo : CPointEntity { void* vtable[228]; }
class CNavToolsPhysicsInterface : INavPhysicsInterface { void* vtable[7]; }
class CNavVolume { void* vtable[11]; }
class CNavVolumeMarkupVolume : CNavVolume { void* vtable[11]; }
class CNavWalkable : CPointEntity { void* vtable[228]; }
class CNetMessage { void* vtable[5]; }
class CNetMessagePB<101,CUserMessageAchievementEvent,13,1,1> : CNetMessage, CUserMessageAchievementEvent { void* vtable[5]; }
class CNetMessagePB<101,CUserMessageAchievementEvent,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<102,CUserMessageCloseCaption,13,1,1> : CNetMessage, CUserMessageCloseCaption { void* vtable[5]; }
class CNetMessagePB<102,CUserMessageCloseCaption,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<103,CUserMessageCloseCaptionDirect,13,1,1> : CNetMessage, CUserMessageCloseCaptionDirect { void* vtable[5]; }
class CNetMessagePB<103,CUserMessageCloseCaptionDirect,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<104,CUserMessageCurrentTimescale,13,1,1> : CNetMessage, CUserMessageCurrentTimescale { void* vtable[5]; }
class CNetMessagePB<104,CUserMessageCurrentTimescale,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<105,CUserMessageDesiredTimescale,13,1,1> : CNetMessage, CUserMessageDesiredTimescale { void* vtable[5]; }
class CNetMessagePB<105,CUserMessageDesiredTimescale,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<106,CUserMessageFade,13,1,1> : CNetMessage, CUserMessageFade { void* vtable[5]; }
class CNetMessagePB<106,CUserMessageFade,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<110,CUserMessageHudMsg,13,1,1> : CNetMessage, CUserMessageHudMsg { void* vtable[5]; }
class CNetMessagePB<110,CUserMessageHudMsg,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<111,CUserMessageHudText,13,1,1> : CNetMessage, CUserMessageHudText { void* vtable[5]; }
class CNetMessagePB<111,CUserMessageHudText,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<113,CUserMessageColoredText,13,1,1> : CNetMessage, CUserMessageColoredText { void* vtable[5]; }
class CNetMessagePB<113,CUserMessageColoredText,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<114,CUserMessageRequestState,13,1,1> : CNetMessage, CUserMessageRequestState { void* vtable[5]; }
class CNetMessagePB<114,CUserMessageRequestState,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<115,CUserMessageResetHUD,13,1,1> : CNetMessage, CUserMessageResetHUD { void* vtable[5]; }
class CNetMessagePB<115,CUserMessageResetHUD,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<116,CUserMessageRumble,13,1,1> : CNetMessage, CUserMessageRumble { void* vtable[5]; }
class CNetMessagePB<116,CUserMessageRumble,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<117,CUserMessageSayText,13,1,1> : CNetMessage, CUserMessageSayText { void* vtable[5]; }
class CNetMessagePB<117,CUserMessageSayText,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<118,CUserMessageSayText2,13,1,1> : CNetMessage, CUserMessageSayText2 { void* vtable[5]; }
class CNetMessagePB<118,CUserMessageSayText2,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<119,CUserMessageSayTextChannel,13,1,1> : CNetMessage, CUserMessageSayTextChannel { void* vtable[5]; }
class CNetMessagePB<119,CUserMessageSayTextChannel,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<120,CUserMessageShake,13,1,1> : CNetMessage, CUserMessageShake { void* vtable[5]; }
class CNetMessagePB<120,CUserMessageShake,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<121,CUserMessageShakeDir,13,1,1> : CNetMessage, CUserMessageShakeDir { void* vtable[5]; }
class CNetMessagePB<121,CUserMessageShakeDir,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<122,CUserMessageWaterShake,13,1,1> : CNetMessage, CUserMessageWaterShake { void* vtable[5]; }
class CNetMessagePB<122,CUserMessageWaterShake,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<124,CUserMessageTextMsg,13,1,1> : CNetMessage, CUserMessageTextMsg { void* vtable[5]; }
class CNetMessagePB<124,CUserMessageTextMsg,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<125,CUserMessageScreenTilt,13,1,1> : CNetMessage, CUserMessageScreenTilt { void* vtable[5]; }
class CNetMessagePB<125,CUserMessageScreenTilt,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<128,CUserMessageVoiceMask,13,1,1> : CNetMessage, CUserMessageVoiceMask { void* vtable[5]; }
class CNetMessagePB<128,CUserMessageVoiceMask,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<130,CUserMessageSendAudio,13,1,1> : CNetMessage, CUserMessageSendAudio { void* vtable[5]; }
class CNetMessagePB<130,CUserMessageSendAudio,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<131,CUserMessageItemPickup,13,1,1> : CNetMessage, CUserMessageItemPickup { void* vtable[5]; }
class CNetMessagePB<131,CUserMessageItemPickup,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<132,CUserMessageAmmoDenied,13,1,1> : CNetMessage, CUserMessageAmmoDenied { void* vtable[5]; }
class CNetMessagePB<132,CUserMessageAmmoDenied,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<134,CUserMessageShowMenu,13,1,1> : CNetMessage, CUserMessageShowMenu { void* vtable[5]; }
class CNetMessagePB<134,CUserMessageShowMenu,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<135,CUserMessageCreditsMsg,13,1,1> : CNetMessage, CUserMessageCreditsMsg { void* vtable[5]; }
class CNetMessagePB<135,CUserMessageCreditsMsg,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<137,CEntityMessageScreenOverlay,13,1,1> : CNetMessage, CEntityMessageScreenOverlay { void* vtable[5]; }
class CNetMessagePB<137,CEntityMessageScreenOverlay,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<138,CEntityMessageRemoveAllDecals,13,1,1> : CNetMessage, CEntityMessageRemoveAllDecals { void* vtable[5]; }
class CNetMessagePB<138,CEntityMessageRemoveAllDecals,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<139,CEntityMessagePropagateForce,13,1,1> : CNetMessage, CEntityMessagePropagateForce { void* vtable[5]; }
class CNetMessagePB<139,CEntityMessagePropagateForce,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<140,CEntityMessageDoSpark,13,1,1> : CNetMessage, CEntityMessageDoSpark { void* vtable[5]; }
class CNetMessagePB<140,CEntityMessageDoSpark,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<142,CUserMessageCloseCaptionPlaceholder,13,1,1> : CNetMessage, CUserMessageCloseCaptionPlaceholder { void* vtable[5]; }
class CNetMessagePB<142,CUserMessageCloseCaptionPlaceholder,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<143,CUserMessageCameraTransition,13,1,1> : CNetMessage, CUserMessageCameraTransition { void* vtable[5]; }
class CNetMessagePB<143,CUserMessageCameraTransition,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<144,CUserMessageAudioParameter,13,1,1> : CNetMessage, CUserMessageAudioParameter { void* vtable[5]; }
class CNetMessagePB<144,CUserMessageAudioParameter,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<145,CUserMsg_ParticleManager,13,1,1> : CNetMessage, CUserMsg_ParticleManager { void* vtable[5]; }
class CNetMessagePB<145,CUserMsg_ParticleManager,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<146,CUserMsg_HudError,13,1,1> : CNetMessage, CUserMsg_HudError { void* vtable[5]; }
class CNetMessagePB<146,CUserMsg_HudError,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,13,1,1> : CNetMessage, CBaseCmdKeyValues<CUserMsg_CustomGameEvent> { void* vtable[5]; }
class CNetMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<150,CUserMessageHapticsManagerPulse,13,1,1> : CNetMessage, CUserMessageHapticsManagerPulse { void* vtable[5]; }
class CNetMessagePB<150,CUserMessageHapticsManagerPulse,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<151,CUserMessageHapticsManagerEffect,13,1,1> : CNetMessage, CUserMessageHapticsManagerEffect { void* vtable[5]; }
class CNetMessagePB<151,CUserMessageHapticsManagerEffect,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<153,CUserMessageUpdateCssClasses,13,1,1> : CNetMessage, CUserMessageUpdateCssClasses { void* vtable[5]; }
class CNetMessagePB<153,CUserMessageUpdateCssClasses,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<154,CUserMessageServerFrameTime,13,1,1> : CNetMessage, CUserMessageServerFrameTime { void* vtable[5]; }
class CNetMessagePB<154,CUserMessageServerFrameTime,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<155,CUserMessageLagCompensationError,13,1,1> : CNetMessage, CUserMessageLagCompensationError { void* vtable[5]; }
class CNetMessagePB<155,CUserMessageLagCompensationError,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<156,CUserMessageRequestDllStatus,13,1,1> : CNetMessage, CUserMessageRequestDllStatus { void* vtable[5]; }
class CNetMessagePB<156,CUserMessageRequestDllStatus,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<157,CUserMessageRequestUtilAction,13,1,1> : CNetMessage, CUserMessageRequestUtilAction { void* vtable[5]; }
class CNetMessagePB<157,CUserMessageRequestUtilAction,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<160,CUserMessageRequestInventory,13,1,1> : CNetMessage, CUserMessageRequestInventory { void* vtable[5]; }
class CNetMessagePB<160,CUserMessageRequestInventory,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<162,CUserMessageRequestDiagnostic,13,1,1> : CNetMessage, CUserMessageRequestDiagnostic { void* vtable[5]; }
class CNetMessagePB<162,CUserMessageRequestDiagnostic,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<165,CUserMessage_NotifyResponseFound,13,1,1> : CNetMessage, CUserMessage_NotifyResponseFound { void* vtable[5]; }
class CNetMessagePB<165,CUserMessage_NotifyResponseFound,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<166,CUserMessage_PlayResponseConditional,13,1,1> : CNetMessage, CUserMessage_PlayResponseConditional { void* vtable[5]; }
class CNetMessagePB<166,CUserMessage_PlayResponseConditional,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<205,CMsgSource1LegacyGameEventList,10,1,1> : CNetMessage, CMsgSource1LegacyGameEventList { void* vtable[5]; }
class CNetMessagePB<205,CMsgSource1LegacyGameEventList,10,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<206,CMsgSource1LegacyListenEvents,10,1,1> : CNetMessage, CMsgSource1LegacyListenEvents { void* vtable[5]; }
class CNetMessagePB<206,CMsgSource1LegacyListenEvents,10,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<207,CMsgSource1LegacyGameEvent,5,1,1> : CNetMessage, CMsgSource1LegacyGameEvent { void* vtable[5]; }
class CNetMessagePB<207,CMsgSource1LegacyGameEvent,5,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<208,CMsgSosStartSoundEvent,4,1,1> : CNetMessage, CMsgSosStartSoundEvent { void* vtable[5]; }
class CNetMessagePB<208,CMsgSosStartSoundEvent,4,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<209,CMsgSosStopSoundEvent,4,1,1> : CNetMessage, CMsgSosStopSoundEvent { void* vtable[5]; }
class CNetMessagePB<209,CMsgSosStopSoundEvent,4,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<210,CMsgSosSetSoundEventParams,4,1,1> : CNetMessage, CMsgSosSetSoundEventParams { void* vtable[5]; }
class CNetMessagePB<210,CMsgSosSetSoundEventParams,4,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<211,CMsgSosSetLibraryStackFields,4,1,1> : CNetMessage, CMsgSosSetLibraryStackFields { void* vtable[5]; }
class CNetMessagePB<211,CMsgSosSetLibraryStackFields,4,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<212,CMsgSosStopSoundEventHash,4,1,1> : CNetMessage, CMsgSosStopSoundEventHash { void* vtable[5]; }
class CNetMessagePB<212,CMsgSosStopSoundEventHash,4,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<280,CBaseCmdKeyValues<CClientMsg_CustomGameEvent>,14,1,1> : CNetMessage, CBaseCmdKeyValues<CClientMsg_CustomGameEvent> { void* vtable[5]; }
class CNetMessagePB<280,CBaseCmdKeyValues<CClientMsg_CustomGameEvent>,14,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<281,CBaseCmdKeyValues<CClientMsg_CustomGameEventBounce>,14,1,1> : CNetMessage, CBaseCmdKeyValues<CClientMsg_CustomGameEventBounce> { void* vtable[5]; }
class CNetMessagePB<281,CBaseCmdKeyValues<CClientMsg_CustomGameEventBounce>,14,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<282,CClientMsg_ClientUIEvent,14,1,1> : CNetMessage, CClientMsg_ClientUIEvent { void* vtable[5]; }
class CNetMessagePB<282,CClientMsg_ClientUIEvent,14,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<286,CClientMsg_ListenForResponseFound,14,1,1> : CNetMessage, CClientMsg_ListenForResponseFound { void* vtable[5]; }
class CNetMessagePB<286,CClientMsg_ListenForResponseFound,14,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<301,CCSUsrMsg_VGUIMenu,13,1,1> : CNetMessage, CCSUsrMsg_VGUIMenu { void* vtable[5]; }
class CNetMessagePB<301,CCSUsrMsg_VGUIMenu,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<317,CCSUsrMsg_SendAudio,13,1,1> : CNetMessage, CCSUsrMsg_SendAudio { void* vtable[5]; }
class CNetMessagePB<317,CCSUsrMsg_SendAudio,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<318,CCSUsrMsg_RawAudio,13,1,1> : CNetMessage, CCSUsrMsg_RawAudio { void* vtable[5]; }
class CNetMessagePB<318,CCSUsrMsg_RawAudio,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<321,CCSUsrMsg_Damage,13,1,1> : CNetMessage, CCSUsrMsg_Damage { void* vtable[5]; }
class CNetMessagePB<321,CCSUsrMsg_Damage,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<322,CCSUsrMsg_RadioText,13,1,1> : CNetMessage, CCSUsrMsg_RadioText { void* vtable[5]; }
class CNetMessagePB<322,CCSUsrMsg_RadioText,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<323,CCSUsrMsg_HintText,13,1,1> : CNetMessage, CCSUsrMsg_HintText { void* vtable[5]; }
class CNetMessagePB<323,CCSUsrMsg_HintText,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<324,CCSUsrMsg_KeyHintText,13,1,1> : CNetMessage, CCSUsrMsg_KeyHintText { void* vtable[5]; }
class CNetMessagePB<324,CCSUsrMsg_KeyHintText,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<325,CCSUsrMsg_ProcessSpottedEntityUpdate,13,1,1> : CNetMessage, CCSUsrMsg_ProcessSpottedEntityUpdate { void* vtable[5]; }
class CNetMessagePB<325,CCSUsrMsg_ProcessSpottedEntityUpdate,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<327,CCSUsrMsg_AdjustMoney,13,1,1> : CNetMessage, CCSUsrMsg_AdjustMoney { void* vtable[5]; }
class CNetMessagePB<327,CCSUsrMsg_AdjustMoney,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<330,CCSUsrMsg_KillCam,13,1,1> : CNetMessage, CCSUsrMsg_KillCam { void* vtable[5]; }
class CNetMessagePB<330,CCSUsrMsg_KillCam,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<334,CCSUsrMsg_MatchEndConditions,13,1,1> : CNetMessage, CCSUsrMsg_MatchEndConditions { void* vtable[5]; }
class CNetMessagePB<334,CCSUsrMsg_MatchEndConditions,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<335,CCSUsrMsg_DisconnectToLobby,13,1,1> : CNetMessage, CCSUsrMsg_DisconnectToLobby { void* vtable[5]; }
class CNetMessagePB<335,CCSUsrMsg_DisconnectToLobby,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<336,CCSUsrMsg_PlayerStatsUpdate,13,1,1> : CNetMessage, CCSUsrMsg_PlayerStatsUpdate { void* vtable[5]; }
class CNetMessagePB<336,CCSUsrMsg_PlayerStatsUpdate,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<338,CCSUsrMsg_WarmupHasEnded,13,1,1> : CNetMessage, CCSUsrMsg_WarmupHasEnded { void* vtable[5]; }
class CNetMessagePB<338,CCSUsrMsg_WarmupHasEnded,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<345,CCSUsrMsg_CallVoteFailed,13,1,1> : CNetMessage, CCSUsrMsg_CallVoteFailed { void* vtable[5]; }
class CNetMessagePB<345,CCSUsrMsg_CallVoteFailed,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<346,CCSUsrMsg_VoteStart,13,1,1> : CNetMessage, CCSUsrMsg_VoteStart { void* vtable[5]; }
class CNetMessagePB<346,CCSUsrMsg_VoteStart,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<347,CCSUsrMsg_VotePass,13,1,1> : CNetMessage, CCSUsrMsg_VotePass { void* vtable[5]; }
class CNetMessagePB<347,CCSUsrMsg_VotePass,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<348,CCSUsrMsg_VoteFailed,13,1,1> : CNetMessage, CCSUsrMsg_VoteFailed { void* vtable[5]; }
class CNetMessagePB<348,CCSUsrMsg_VoteFailed,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<349,CCSUsrMsg_VoteSetup,13,1,1> : CNetMessage, CCSUsrMsg_VoteSetup { void* vtable[5]; }
class CNetMessagePB<349,CCSUsrMsg_VoteSetup,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<350,CCSUsrMsg_ServerRankRevealAll,13,1,1> : CNetMessage, CCSUsrMsg_ServerRankRevealAll { void* vtable[5]; }
class CNetMessagePB<350,CCSUsrMsg_ServerRankRevealAll,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<351,CCSUsrMsg_SendLastKillerDamageToClient,13,1,1> : CNetMessage, CCSUsrMsg_SendLastKillerDamageToClient { void* vtable[5]; }
class CNetMessagePB<351,CCSUsrMsg_SendLastKillerDamageToClient,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<352,CCSUsrMsg_ServerRankUpdate,13,1,1> : CNetMessage, CCSUsrMsg_ServerRankUpdate { void* vtable[5]; }
class CNetMessagePB<352,CCSUsrMsg_ServerRankUpdate,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<360,CCSUsrMsg_GlowPropTurnOff,13,1,1> : CNetMessage, CCSUsrMsg_GlowPropTurnOff { void* vtable[5]; }
class CNetMessagePB<360,CCSUsrMsg_GlowPropTurnOff,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<361,CCSUsrMsg_SendPlayerItemDrops,13,1,1> : CNetMessage, CCSUsrMsg_SendPlayerItemDrops { void* vtable[5]; }
class CNetMessagePB<361,CCSUsrMsg_SendPlayerItemDrops,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<362,CCSUsrMsg_RoundBackupFilenames,13,1,1> : CNetMessage, CCSUsrMsg_RoundBackupFilenames { void* vtable[5]; }
class CNetMessagePB<362,CCSUsrMsg_RoundBackupFilenames,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<363,CCSUsrMsg_SendPlayerItemFound,13,1,1> : CNetMessage, CCSUsrMsg_SendPlayerItemFound { void* vtable[5]; }
class CNetMessagePB<363,CCSUsrMsg_SendPlayerItemFound,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<364,CCSUsrMsg_ReportHit,13,1,1> : CNetMessage, CCSUsrMsg_ReportHit { void* vtable[5]; }
class CNetMessagePB<364,CCSUsrMsg_ReportHit,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<365,CCSUsrMsg_XpUpdate,13,1,1> : CNetMessage, CCSUsrMsg_XpUpdate { void* vtable[5]; }
class CNetMessagePB<365,CCSUsrMsg_XpUpdate,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<366,CCSUsrMsg_QuestProgress,13,1,1> : CNetMessage, CCSUsrMsg_QuestProgress { void* vtable[5]; }
class CNetMessagePB<366,CCSUsrMsg_QuestProgress,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<367,CCSUsrMsg_ScoreLeaderboardData,13,1,1> : CNetMessage, CCSUsrMsg_ScoreLeaderboardData { void* vtable[5]; }
class CNetMessagePB<367,CCSUsrMsg_ScoreLeaderboardData,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<368,CCSUsrMsg_PlayerDecalDigitalSignature,13,1,1> : CNetMessage, CCSUsrMsg_PlayerDecalDigitalSignature { void* vtable[5]; }
class CNetMessagePB<368,CCSUsrMsg_PlayerDecalDigitalSignature,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<369,CCSUsrMsg_WeaponSound,13,1,1> : CNetMessage, CCSUsrMsg_WeaponSound { void* vtable[5]; }
class CNetMessagePB<369,CCSUsrMsg_WeaponSound,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<370,CCSUsrMsg_UpdateScreenHealthBar,13,1,1> : CNetMessage, CCSUsrMsg_UpdateScreenHealthBar { void* vtable[5]; }
class CNetMessagePB<370,CCSUsrMsg_UpdateScreenHealthBar,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<371,CCSUsrMsg_EntityOutlineHighlight,13,1,1> : CNetMessage, CCSUsrMsg_EntityOutlineHighlight { void* vtable[5]; }
class CNetMessagePB<371,CCSUsrMsg_EntityOutlineHighlight,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<372,CCSUsrMsg_SSUI,13,1,1> : CNetMessage, CCSUsrMsg_SSUI { void* vtable[5]; }
class CNetMessagePB<372,CCSUsrMsg_SSUI,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<373,CCSUsrMsg_SurvivalStats,13,1,1> : CNetMessage, CCSUsrMsg_SurvivalStats { void* vtable[5]; }
class CNetMessagePB<373,CCSUsrMsg_SurvivalStats,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<374,CCSUsrMsg_DisconnectToLobby,13,1,1> : CNetMessage, CCSUsrMsg_DisconnectToLobby { void* vtable[5]; }
class CNetMessagePB<374,CCSUsrMsg_DisconnectToLobby,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<375,CCSUsrMsg_EndOfMatchAllPlayersData,13,1,1> : CNetMessage, CCSUsrMsg_EndOfMatchAllPlayersData { void* vtable[5]; }
class CNetMessagePB<375,CCSUsrMsg_EndOfMatchAllPlayersData,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<376,CCSUsrMsg_PostRoundDamageReport,13,1,1> : CNetMessage, CCSUsrMsg_PostRoundDamageReport { void* vtable[5]; }
class CNetMessagePB<376,CCSUsrMsg_PostRoundDamageReport,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<379,CCSUsrMsg_RoundEndReportData,13,1,1> : CNetMessage, CCSUsrMsg_RoundEndReportData { void* vtable[5]; }
class CNetMessagePB<379,CCSUsrMsg_RoundEndReportData,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<380,CCSUsrMsg_CurrentRoundOdds,13,1,1> : CNetMessage, CCSUsrMsg_CurrentRoundOdds { void* vtable[5]; }
class CNetMessagePB<380,CCSUsrMsg_CurrentRoundOdds,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<381,CCSUsrMsg_DeepStats,13,1,1> : CNetMessage, CCSUsrMsg_DeepStats { void* vtable[5]; }
class CNetMessagePB<381,CCSUsrMsg_DeepStats,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<383,CCSUsrMsg_ShootInfo,13,1,1> : CNetMessage, CCSUsrMsg_ShootInfo { void* vtable[5]; }
class CNetMessagePB<383,CCSUsrMsg_ShootInfo,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<385,CCSUsrMsg_CounterStrafe,13,1,1> : CNetMessage, CCSUsrMsg_CounterStrafe { void* vtable[5]; }
class CNetMessagePB<385,CCSUsrMsg_CounterStrafe,13,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<400,CMsgTEEffectDispatch,5,0,1> : CNetMessage, CMsgTEEffectDispatch { void* vtable[5]; }
class CNetMessagePB<400,CMsgTEEffectDispatch,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<401,CMsgTEArmorRicochet,5,0,1> : CNetMessage, CMsgTEArmorRicochet { void* vtable[5]; }
class CNetMessagePB<401,CMsgTEArmorRicochet,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<402,CMsgTEBeamEntPoint,5,0,1> : CNetMessage, CMsgTEBeamEntPoint { void* vtable[5]; }
class CNetMessagePB<402,CMsgTEBeamEntPoint,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<403,CMsgTEBeamEnts,5,0,1> : CNetMessage, CMsgTEBeamEnts { void* vtable[5]; }
class CNetMessagePB<403,CMsgTEBeamEnts,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<404,CMsgTEBeamPoints,5,0,1> : CNetMessage, CMsgTEBeamPoints { void* vtable[5]; }
class CNetMessagePB<404,CMsgTEBeamPoints,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<405,CMsgTEBeamRing,5,0,1> : CNetMessage, CMsgTEBeamRing { void* vtable[5]; }
class CNetMessagePB<405,CMsgTEBeamRing,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<407,CMsgTEBSPDecal,5,0,1> : CNetMessage, CMsgTEBSPDecal { void* vtable[5]; }
class CNetMessagePB<407,CMsgTEBSPDecal,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<408,CMsgTEBubbles,5,0,1> : CNetMessage, CMsgTEBubbles { void* vtable[5]; }
class CNetMessagePB<408,CMsgTEBubbles,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<409,CMsgTEBubbleTrail,5,0,1> : CNetMessage, CMsgTEBubbleTrail { void* vtable[5]; }
class CNetMessagePB<409,CMsgTEBubbleTrail,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<410,CMsgTEDecal,5,0,1> : CNetMessage, CMsgTEDecal { void* vtable[5]; }
class CNetMessagePB<410,CMsgTEDecal,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<411,CMsgTEWorldDecal,5,0,1> : CNetMessage, CMsgTEWorldDecal { void* vtable[5]; }
class CNetMessagePB<411,CMsgTEWorldDecal,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<412,CMsgTEEnergySplash,5,0,1> : CNetMessage, CMsgTEEnergySplash { void* vtable[5]; }
class CNetMessagePB<412,CMsgTEEnergySplash,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<413,CMsgTEFizz,5,0,1> : CNetMessage, CMsgTEFizz { void* vtable[5]; }
class CNetMessagePB<413,CMsgTEFizz,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<415,CMsgTEGlowSprite,5,0,1> : CNetMessage, CMsgTEGlowSprite { void* vtable[5]; }
class CNetMessagePB<415,CMsgTEGlowSprite,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<416,CMsgTEImpact,5,0,1> : CNetMessage, CMsgTEImpact { void* vtable[5]; }
class CNetMessagePB<416,CMsgTEImpact,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<417,CMsgTEMuzzleFlash,5,0,1> : CNetMessage, CMsgTEMuzzleFlash { void* vtable[5]; }
class CNetMessagePB<417,CMsgTEMuzzleFlash,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<418,CMsgTEBloodStream,5,0,1> : CNetMessage, CMsgTEBloodStream { void* vtable[5]; }
class CNetMessagePB<418,CMsgTEBloodStream,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<419,CMsgTEExplosion,5,0,1> : CNetMessage, CMsgTEExplosion { void* vtable[5]; }
class CNetMessagePB<419,CMsgTEExplosion,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<420,CMsgTEDust,5,0,1> : CNetMessage, CMsgTEDust { void* vtable[5]; }
class CNetMessagePB<420,CMsgTEDust,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<421,CMsgTELargeFunnel,5,0,1> : CNetMessage, CMsgTELargeFunnel { void* vtable[5]; }
class CNetMessagePB<421,CMsgTELargeFunnel,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<422,CMsgTESparks,5,0,1> : CNetMessage, CMsgTESparks { void* vtable[5]; }
class CNetMessagePB<422,CMsgTESparks,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<423,CMsgTEPhysicsProp,5,0,1> : CNetMessage, CMsgTEPhysicsProp { void* vtable[5]; }
class CNetMessagePB<423,CMsgTEPhysicsProp,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<424,CMsgTEPlayerDecal,5,0,1> : CNetMessage, CMsgTEPlayerDecal { void* vtable[5]; }
class CNetMessagePB<424,CMsgTEPlayerDecal,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<425,CMsgTEProjectedDecal,5,0,1> : CNetMessage, CMsgTEProjectedDecal { void* vtable[5]; }
class CNetMessagePB<425,CMsgTEProjectedDecal,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<426,CMsgTESmoke,5,0,1> : CNetMessage, CMsgTESmoke { void* vtable[5]; }
class CNetMessagePB<426,CMsgTESmoke,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<452,CMsgTEFireBullets,5,0,1> : CNetMessage, CMsgTEFireBullets { void* vtable[5]; }
class CNetMessagePB<452,CMsgTEFireBullets,5,0,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<62,CSVCMsg_HLTVStatus,0,1,1> : CNetMessage, CSVCMsg_HLTVStatus { void* vtable[5]; }
class CNetMessagePB<62,CSVCMsg_HLTVStatus,0,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<76,CSVCMsg_UserCommands,17,1,0> : CNetMessage, CSVCMsg_UserCommands { void* vtable[5]; }
class CNetMessagePB<76,CSVCMsg_UserCommands,17,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetworkFieldScratchData : INetworkFieldScratchData { void* vtable[5]; }
class CNetworkPVSModifierEntityManager : CAutoGameSystem { void* vtable[56]; }
class CNetworkSerializerBindingBuildFilter : INetworkSerializerBindingBuildFilter { void* vtable[5]; }
class CNetworkTransmitComponent : IEventRegisterCallback { void* vtable[3]; }
class CNextLevelIssue : CBaseCSIssue { void* vtable[33]; }
class CNonDamagingScan { void* vtable[2]; }
class CNotReadyForMatchIssue : CBaseCSIssue { void* vtable[33]; }
class CNotifyManager : CAutoGameSystem, INotify, IEntityListener { void* vtable[56]; }
class CNullEntity : CBaseEntity { void* vtable[228]; }
class COmniLight : CBarnLight { void* vtable[254]; }
class COrnamentProp : CDynamicProp { void* vtable[295]; }
class CPASAttenuationFilter : CPASFilter { void* vtable[5]; }
class CPASFilter : CRecipientFilter { void* vtable[5]; }
class CPVSFilter : CRecipientFilter { void* vtable[5]; }
class CPVSManager : CAutoGameSystem, IPVSManager { void* vtable[56]; }
class CParallelProcessorAbstract<CParallelProcessor<QueryCacheUpdateRecord_t,CFuncJobItemProcessor<QueryCacheUpdateRecord_t>,1> > : CParallelProcessorAbstract_Base, IMultipleWorkerJob { void* vtable[2]; }
class CParallelProcessorAbstract_Base {}
class CParticleSystem : CBaseModelEntity { void* vtable[251]; }
class CParticleSystemQuery : IParticleSystemQuery { void* vtable[84]; }
class CParticleSystemQueryGameSystem : CAutoGameSystem { void* vtable[56]; }
class CPath : CNavPathData { void* vtable[5]; }
class CPathCorner : CPointEntity { void* vtable[228]; }
class CPathCornerCrash : CPathCorner { void* vtable[228]; }
class CPathCostRecorder : CNavPathCost { void* vtable[10]; }
class CPathKeyFrame : CLogicalEntity { void* vtable[228]; }
class CPathMover : CBaseEntity, IPhysicsSpline { void* vtable[228]; }
class CPathOptimizer { void* vtable[2]; }
class CPathOptimizerNavmesh : CPathOptimizerStraightener { void* vtable[3]; }
class CPathOptimizerStraightener : CPathOptimizer {}
class CPathParticleRope : CBaseEntity, IPhysicsSpline { void* vtable[228]; }
class CPathParticleRopeAlias_path_particle_rope_clientside : CPathParticleRope { void* vtable[228]; }
class CPathSimple : CBaseEntity, IPhysicsSpline { void* vtable[228]; }
class CPathTrack : CPointEntity { void* vtable[228]; }
class CPathfindGenericTest : IPathfindTest { void* vtable[6]; }
class CPathfindGeneric_PathCost { void* vtable[2]; }
class CPauseMatchIssue : CBaseCSIssue { void* vtable[33]; }
class CPawnListGameSystem : CAutoGameSystem { void* vtable[56]; }
class CPerFrameConCommandSystem : CBaseEngineService<IEngineService> { void* vtable[23]; }
class CPhysBallSocket : CPhysConstraint { void* vtable[231]; }
class CPhysBox : CBreakable { void* vtable[252]; }
class CPhysConstraint : CLogicalEntity { void* vtable[231]; }
class CPhysExplosion : CPointEntity { void* vtable[228]; }
class CPhysFixed : CPhysConstraint { void* vtable[231]; }
class CPhysForce : CPointEntity { void* vtable[230]; }
class CPhysHinge : CPhysConstraint, IVPhysicsWatcher { void* vtable[231]; }
class CPhysHingeAlias_phys_hinge_local : CPhysHinge { void* vtable[231]; }
class CPhysImpact : CPointEntity { void* vtable[228]; }
class CPhysLength : CPhysConstraint { void* vtable[231]; }
class CPhysMagnet : CBaseAnimGraph { void* vtable[284]; }
class CPhysMotor : CLogicalEntity { void* vtable[228]; }
class CPhysObjSaveRestoreOps : CDefSaveRestoreOps { void* vtable[6]; }
class CPhysPulley : CPhysConstraint { void* vtable[231]; }
class CPhysSaveRestoreBlockHandler : CDefSaveRestoreBlockHandler, IEntityListener { void* vtable[9]; }
class CPhysSlideConstraint : CPhysConstraint, IVPhysicsWatcher { void* vtable[231]; }
class CPhysThruster : CPhysForce { void* vtable[230]; }
class CPhysTorque : CPhysForce { void* vtable[230]; }
class CPhysWheelConstraint : CPhysConstraint { void* vtable[231]; }
class CPhysicalButton : CBaseButton { void* vtable[261]; }
class CPhysicsEntitySolver : CLogicalEntity, IPhysicsEntitySolverAutoList { void* vtable[228]; }
class CPhysicsGameSystem : IGameSystem, IPhysicsWorldEventListener { void* vtable[56]; }
class CPhysicsGrab : IToolGameSimulationAPI_IPhysicsGrab { void* vtable[2]; }
class CPhysicsProp : CBreakableProp, INavObstacle { void* vtable[295]; }
class CPhysicsPropMultiplayer : CPhysicsProp { void* vtable[295]; }
class CPhysicsPropOverride : CPhysicsProp { void* vtable[295]; }
class CPhysicsPropRespawnable : CPhysicsProp { void* vtable[295]; }
class CPhysicsPushedEntities { void* vtable[3]; }
class CPhysicsShake : IMotionEvent { void* vtable[5]; }
class CPhysicsSpring : CBaseEntity { void* vtable[228]; }
class CPhysicsWire : CBaseEntity { void* vtable[228]; }
class CPlantedC4 : CBaseAnimGraph, IHasAttributes { void* vtable[288]; }
class CPlantedC4::NetworkVar_m_AttributeManager : CAttributeContainer { void* vtable[9]; }
class CPlantedC4::NetworkVar_m_entitySpottedState : EntitySpottedState_t { void* vtable[4]; }
class CPlatTrigger : CBaseModelEntity { void* vtable[251]; }
class CPlayerCommandQueue : IPlayerCommandQueue { void* vtable[8]; }
class CPlayerControllerComponent { void* vtable[10]; }
class CPlayerInventory : GCSDK::ISharedObjectListener { void* vtable[24]; }
class CPlayerPawnComponent { void* vtable[17]; }
class CPlayerPing : CBaseEntity { void* vtable[228]; }
class CPlayerSprayDecal : CModelPointEntity { void* vtable[251]; }
class CPlayerVisibility : CBaseEntity { void* vtable[228]; }
class CPlayerVoiceListener : CAutoGameSystem { void* vtable[56]; }
class CPlayer_CameraServices : CPlayerPawnComponent { void* vtable[27]; }
class CPlayer_CameraServices::NetworkVar_m_PlayerFog : fogplayerparams_t { void* vtable[4]; }
class CPlayer_CameraServices::NetworkVar_m_audio : audioparams_t { void* vtable[4]; }
class CPlayer_ItemServices : CPlayerPawnComponent { void* vtable[22]; }
class CPlayer_MovementServices : CPlayerPawnComponent { void* vtable[38]; }
class CPlayer_MovementServices_Humanoid : CPlayer_MovementServices { void* vtable[49]; }
class CPlayer_ObserverServices : CPlayerPawnComponent { void* vtable[32]; }
class CPlayer_UseServices : CPlayerPawnComponent { void* vtable[23]; }
class CPlayer_ViewModelServices : CPlayerPawnComponent { void* vtable[18]; }
class CPlayer_WaterServices : CPlayerPawnComponent { void* vtable[20]; }
class CPlayer_WeaponServices : CPlayerPawnComponent { void* vtable[30]; }
class CPointAngleSensor : CPointEntity { void* vtable[228]; }
class CPointAngularVelocitySensor : CPointEntity { void* vtable[228]; }
class CPointBroadcastClientCommand : CPointEntity { void* vtable[228]; }
class CPointCamera : CBaseEntity { void* vtable[228]; }
class CPointCameraVFOV : CPointCamera { void* vtable[228]; }
class CPointChildModifier : CPointEntity { void* vtable[228]; }
class CPointClientCommand : CPointEntity { void* vtable[228]; }
class CPointClientUIDialog : CBaseClientUIEntity { void* vtable[254]; }
class CPointClientUIWorldPanel : CBaseClientUIEntity { void* vtable[255]; }
class CPointClientUIWorldTextPanel : CPointClientUIWorldPanel { void* vtable[255]; }
class CPointCommentaryNode : CBaseAnimGraph { void* vtable[284]; }
class CPointEntity : CBaseEntity { void* vtable[228]; }
class CPointEntityFinder : CBaseEntity { void* vtable[228]; }
class CPointGamestatsCounter : CPointEntity { void* vtable[228]; }
class CPointGiveAmmo : CPointEntity { void* vtable[228]; }
class CPointHurt : CPointEntity { void* vtable[228]; }
class CPointPrefab : CServerOnlyPointEntity { void* vtable[228]; }
class CPointPrefabDynamicIOSignature : CBaseDynamicIOSignature { void* vtable[1]; }
class CPointProximitySensor : CPointEntity { void* vtable[228]; }
class CPointPulse : CBaseEntity, IPulseComponentEntity { void* vtable[228]; }
class CPointPush : CPointEntity { void* vtable[228]; }
class CPointServerCommand : CPointEntity { void* vtable[228]; }
class CPointTeleport : CServerOnlyPointEntity { void* vtable[228]; }
class CPointTemplate : CLogicalEntity { void* vtable[230]; }
class CPointValueRemapper : CBaseEntity { void* vtable[228]; }
class CPointVelocitySensor : CPointEntity { void* vtable[228]; }
class CPointWorldText : CModelPointEntity { void* vtable[251]; }
class CPostConnectCallback { void* vtable[1]; }
class CPostProcessingVolume : CBaseTrigger, CGameEventListener { void* vtable[263]; }
class CPreMatchInfoData : google::protobuf::Message { void* vtable[23]; }
class CPreMatchInfoData_TeamStats : google::protobuf::Message { void* vtable[23]; }
class CPrecacheRegister : CAutoGameSystem { void* vtable[56]; }
class CPrecipitation : CBaseTrigger { void* vtable[263]; }
class CPrecipitationBlocker : CBaseModelEntity { void* vtable[251]; }
class CPrecipitationVData : CEntitySubclassVDataBase { void* vtable[4]; }
class CPredictedViewModel : CBaseViewModel { void* vtable[292]; }
class CPredictionSuppressEffects : IPredictionSuppressEffects { void* vtable[6]; }
class CProductInfo_SetRichPresenceLocalization_Request : google::protobuf::Message { void* vtable[19]; }
class CProductInfo_SetRichPresenceLocalization_Request_LanguageSection : google::protobuf::Message { void* vtable[21]; }
class CProductInfo_SetRichPresenceLocalization_Request_Token : google::protobuf::Message { void* vtable[19]; }
class CProductInfo_SetRichPresenceLocalization_Response : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CProjectedDecal : CPointEntity { void* vtable[228]; }
class CPropData : CAutoGameSystem, IVDataResourceListener { void* vtable[56]; }
class CPropDataComponent : CEntityComponent { void* vtable[3]; }
class CPropDoorRotating : CBasePropDoor { void* vtable[325]; }
class CPropDoorRotatingBreakable : CPropDoorRotating { void* vtable[325]; }
class CPropsBreakableSystem : IBreakableSystem { void* vtable[2]; }
class CPulseCell_Base { void* vtable[10]; }
class CPulseCell_BaseFlow : CPulseCell_Base { void* vtable[10]; }
class CPulseCell_BaseLerp : CPulseCell_BaseYieldingInflow { void* vtable[21]; }
class CPulseCell_BaseRequirement : CPulseCell_Base { void* vtable[10]; }
class CPulseCell_BaseValue : CPulseCell_Base { void* vtable[10]; }
class CPulseCell_BaseYieldingInflow : CPulseCell_BaseFlow {}
class CPulseCell_FireCursors : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Inflow_BaseEntrypoint : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Inflow_EntOutputHandler : CPulseCell_Inflow_BaseEntrypoint { void* vtable[10]; }
class CPulseCell_Inflow_EventHandler : CPulseCell_Inflow_BaseEntrypoint { void* vtable[10]; }
class CPulseCell_Inflow_GraphHook : CPulseCell_Inflow_BaseEntrypoint { void* vtable[10]; }
class CPulseCell_Inflow_Method : CPulseCell_Inflow_BaseEntrypoint { void* vtable[10]; }
class CPulseCell_Inflow_ObservableVariableListener : CPulseCell_Inflow_BaseEntrypoint { void* vtable[10]; }
class CPulseCell_Inflow_Wait : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Inflow_Yield : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_LerpCameraSettings : CPulseCell_BaseLerp { void* vtable[21]; }
class CPulseCell_LimitCount : CPulseCell_BaseRequirement { void* vtable[10]; }
class CPulseCell_Outflow_CycleOrdered : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Outflow_CycleRandom : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Outflow_CycleShuffled : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Outflow_IntSwitch : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Outflow_ListenForEntityOutput : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Outflow_PlaySceneBase : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Outflow_PlaySequence : CPulseCell_Outflow_PlaySceneBase { void* vtable[18]; }
class CPulseCell_Outflow_PlayVCD : CPulseCell_Outflow_PlaySceneBase { void* vtable[18]; }
class CPulseCell_Outflow_ScriptedSequence : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Outflow_StringSwitch : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Outflow_TestExplicitYesNo : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Outflow_TestRandomYesNo : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_PlaySequence : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_SoundEventStart : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_CallExternalMethod : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Step_DebugLog : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_EntFire : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_FollowEntity : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_PublicOutput : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_SetAnimGraphParam : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_TestDomainCreateFakeEntity : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_TestDomainDestroyFakeEntity : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_TestDomainEntFire : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Step_TestDomainTracepoint : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_TestWaitWithCursorState : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Test_MultiInflow_NoDefault : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Test_MultiInflow_WithDefault : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Test_MultiOutflow_WithParams : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Test_MultiOutflow_WithParams_Yielding : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Test_NoInflow : CPulseCell_BaseFlow { void* vtable[10]; }
class CPulseCell_Timeline : CPulseCell_BaseYieldingInflow { void* vtable[18]; }
class CPulseCell_Unknown : CPulseCell_Base { void* vtable[10]; }
class CPulseCell_Val_TestDomainFindEntityByName : CPulseCell_BaseValue { void* vtable[10]; }
class CPulseCell_Val_TestDomainGetEntityName : CPulseCell_BaseValue { void* vtable[10]; }
class CPulseCell_Value_FindEntByClassNameWithin : CPulseCell_BaseValue { void* vtable[10]; }
class CPulseCell_Value_FindEntByName : CPulseCell_BaseValue { void* vtable[10]; }
class CPulseCell_Value_RandomFloat : CPulseCell_BaseValue { void* vtable[10]; }
class CPulseCell_Value_RandomInt : CPulseCell_BaseValue { void* vtable[10]; }
class CPulseCell_Value_TestValue50 : CPulseCell_BaseValue { void* vtable[10]; }
class CPulseEntityFindFilter : IEntityFindFilter { void* vtable[1]; }
class CPulseExecCursor : IGapHost_Unknown, IGapHost_YieldingCursor { void* vtable[8]; }
class CPulseGraphComponentBase { void* vtable[5]; }
class CPulseGraphComponentGameBlackboard : CPulseGraphComponentBase { void* vtable[5]; }
class CPulseGraphComponentPointServer : CPulseGraphComponentBase { void* vtable[5]; }
class CPulseGraphDef : IPulseGraphDef { void* vtable[18]; }
class CPulseGraphIOSignature : CBaseDynamicIOSignature, IToolsResourceListener { void* vtable[1]; }
class CPulseGraphInstance_GameBlackboard : CPulseGraphInstance_ServerEntity { void* vtable[27]; }
class CPulseGraphInstance_ServerEntity : CBasePulseGraphInstance, IGapHost_GameEntity { void* vtable[27]; }
class CPulseInstanceLoadAPI_NoOp : IPulseInstanceLoadAPI {}
class CPulseInstanceLoadAPI_RestoreGame : IPulseInstanceLoadAPI, IKV3TransferInterface_GameTime_Load, IKV3TransferInterface_EHandle_Load { void* vtable[1]; }
class CPulseInstanceLoadAPI_Spawn : IPulseInstanceLoadAPI, IKV3TransferInterface_GameTime_Load, IKV3TransferInterface_EHandle_Load { void* vtable[1]; }
class CPulseInstanceSaveAPI_NoOp : IPulseInstanceSaveAPI {}
class CPulseInstanceSaveAPI_SaveGame : IPulseInstanceSaveAPI, IKV3TransferInterface_GameTime_Save, IKV3TransferInterface_EHandle_Save { void* vtable[1]; }
class CPulseInterfaceHelpers_Load_NoOp : CPulseInstanceLoadAPI_NoOp, CKV3TransferInterface_GameTime_Load_NoOp, CKV3TransferInterface_EHandle_Load_NoOp { void* vtable[1]; }
class CPulseInterfaceHelpers_Save_EntText : CPulseInstanceSaveAPI_NoOp, CKV3TransferInterface_GameTime_Save_NoOp, IKV3TransferInterface_EHandle_Save { void* vtable[1]; }
class CPulseInterfaceHelpers_Save_NoOp : CPulseInstanceSaveAPI_NoOp, CKV3TransferInterface_GameTime_Save_NoOp, CKV3TransferInterface_EHandle_Save_NoOp { void* vtable[1]; }
class CPulseServerSaveRestoreBlockHandler : CDefSaveRestoreBlockHandler { void* vtable[9]; }
class CPulseSharedEHandleService : IGapTypeQueriesForScope { void* vtable[6]; }
class CPulseSharedSchemaEnumService : IGapTypeQueriesForScope { void* vtable[6]; }
class CPulseSharedTypesafeIntService : IGapTypeQueriesForScope { void* vtable[6]; }
class CPulseTestGapTypeQueryRegistration : IGapTypeQueryRegistrationForScope { void* vtable[2]; }
class CPulseTestHandleService : IGapTypeQueriesForScope { void* vtable[6]; }
class CPushable : CBreakable { void* vtable[252]; }
class CQuest_PublisherAddCommunityItemsToPlayer_Request : google::protobuf::Message { void* vtable[19]; }
class CQuest_PublisherAddCommunityItemsToPlayer_Request_Attribute : google::protobuf::Message { void* vtable[23]; }
class CQuest_PublisherAddCommunityItemsToPlayer_Response : google::protobuf::Message { void* vtable[17]; }
class CRadiusDamageInfo : CTakeDamageInfo { void* vtable[2]; }
class CRagdollConstraint : CPhysConstraint { void* vtable[231]; }
class CRagdollLRURetirement : CAutoGameSystem { void* vtable[56]; }
class CRagdollLowViolenceManager : CAutoGameSystem { void* vtable[56]; }
class CRagdollMagnet : CPointEntity { void* vtable[228]; }
class CRagdollManager : CBaseEntity { void* vtable[228]; }
class CRagdollPoseControlSystem : CAutoGameSystem { void* vtable[56]; }
class CRagdollProp : CBaseAnimGraph, CDefaultPlayerPickupVPhysics { void* vtable[287]; }
class CRagdollPropAlias_physics_prop_ragdoll : CRagdollProp { void* vtable[287]; }
class CRagdollPropAttached : CRagdollProp { void* vtable[287]; }
class CReadyForMatchIssue : CBaseCSIssue { void* vtable[33]; }
class CRecipientFilter : IRecipientFilter { void* vtable[5]; }
class CRectLight : CBarnLight { void* vtable[254]; }
class CRefCountServiceBase<CRefMT> {}
class CRefCounted1<IRefCounted,CRefCountServiceBase<CRefMT> > : IRefCounted, CRefCountServiceBase<CRefMT> {}
class CRefCountedMemPoolObject<CAnimPose> { void* vtable[1]; }
class CReliableBroadcastRecipientFilter : CBroadcastRecipientFilter { void* vtable[5]; }
class CReliableSingleUserRecipientFilter : CSingleUserRecipientFilter { void* vtable[5]; }
class CReloadMatchFilter : IEntityFindFilter { void* vtable[1]; }
class CRender { void* vtable[5]; }
class CRenderComponent : CEntityComponent { void* vtable[3]; }
class CRenderComponentToolsResourceListener : IToolsResourceListener { void* vtable[2]; }
class CRenderGameSystem : IGameSystem, CUtlMultiJobProcessor, IRenderHandler { void* vtable[61]; }
class CResourceManifestPrerequisite : IPrerequisite { void* vtable[6]; }
class CResourcePrecacherGameSystem : CAutoGameSystem { void* vtable[56]; }
class CResponseCriteriaSet { void* vtable[1]; }
class CResponseQueueManager : CAutoGameSystem { void* vtable[56]; }
class CRestartGameIssue : CBaseCSIssue { void* vtable[33]; }
class CRestore : CSaveRestoreShared, IRestore { void* vtable[1]; }
class CRetakeGameRules : CGameEventListener { void* vtable[6]; }
class CRevertSaved : CModelPointEntity { void* vtable[251]; }
class CRopeKeyframe : CBaseModelEntity, IPositionWatcher { void* vtable[252]; }
class CRopeKeyframeAlias_move_rope : CRopeKeyframe { void* vtable[252]; }
class CRotButton : CBaseButton { void* vtable[261]; }
class CRotDoor : CBaseDoor { void* vtable[254]; }
class CRoundEndReport : CGameEventListener { void* vtable[2]; }
class CRuleBrushEntity : CRuleEntity { void* vtable[251]; }
class CRuleEntity : CBaseModelEntity { void* vtable[251]; }
class CRulePointEntity : CRuleEntity { void* vtable[251]; }
class CSGOInputHistoryEntryPB : google::protobuf::Message { void* vtable[19]; }
class CSGOInterpolationInfoPB : google::protobuf::Message { void* vtable[19]; }
class CSGOInterpolationInfoPB_CL : google::protobuf::Message { void* vtable[19]; }
class CSGOUserCmdPB : google::protobuf::Message { void* vtable[17]; }
class CSHA1 { void* vtable[1]; }
class CSNavMesh : CNavMesh { void* vtable[28]; }
class CSOAccountItemPersonalStore : google::protobuf::Message { void* vtable[19]; }
class CSOAccountKeychainRemoveToolCharges : google::protobuf::Message { void* vtable[17]; }
class CSOAccountRecurringSubscription : google::protobuf::Message { void* vtable[17]; }
class CSOAccountSeasonalOperation : google::protobuf::Message { void* vtable[17]; }
class CSOAccountXpShop : google::protobuf::Message { void* vtable[17]; }
class CSOEconClaimCode : google::protobuf::Message { void* vtable[17]; }
class CSOEconCoupon : google::protobuf::Message { void* vtable[21]; }
class CSOEconDefaultEquippedDefinitionInstanceClient : google::protobuf::Message { void* vtable[17]; }
class CSOEconEquipSlot : google::protobuf::Message { void* vtable[17]; }
class CSOEconGameAccountClient : google::protobuf::Message { void* vtable[17]; }
class CSOEconItem : google::protobuf::Message { void* vtable[19]; }
class CSOEconItemAttribute : google::protobuf::Message { void* vtable[17]; }
class CSOEconItemDropRateBonus : google::protobuf::Message { void* vtable[17]; }
class CSOEconItemEquipped : google::protobuf::Message { void* vtable[31]; }
class CSOEconItemEventTicket : google::protobuf::Message { void* vtable[17]; }
class CSOEconItemLeagueViewPass : google::protobuf::Message { void* vtable[17]; }
class CSOEconRentalHistory : google::protobuf::Message { void* vtable[17]; }
class CSOItemCriteria : google::protobuf::Message { void* vtable[17]; }
class CSOItemCriteriaCondition : google::protobuf::Message { void* vtable[19]; }
class CSOItemRecipe : google::protobuf::Message { void* vtable[19]; }
class CSOLobbyInvite : google::protobuf::Message { void* vtable[17]; }
class CSOPartyInvite : google::protobuf::Message { void* vtable[17]; }
class CSOPersonaDataPublic : google::protobuf::Message { void* vtable[17]; }
class CSOQuestProgress : google::protobuf::Message { void* vtable[19]; }
class CSVCMsgList_GameEvents : google::protobuf::Message { void* vtable[17]; }
class CSVCMsgList_GameEvents_event_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_BSPDecal : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Broadcast_Command : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ClassInfo : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ClassInfo_class_t : google::protobuf::Message { void* vtable[33]; }
class CSVCMsg_ClearAllStringTables : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_CmdKeyValues : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_CreateStringTable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_CrosshairAngle : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_FixAngle : google::protobuf::Message { void* vtable[21]; }
class CSVCMsg_FlattenedSerializer : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_FullFrameSplit : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEvent : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEventList : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEventList_descriptor_t : google::protobuf::Message { void* vtable[25]; }
class CSVCMsg_GameEventList_key_t : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_GameEvent_key_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameSessionConfiguration : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GetCvarValue : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_HLTVStatus : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_HLTVStatus_t : CNetMessagePB<62,CSVCMsg_HLTVStatus,0,1,1> { void* vtable[5]; }
class CSVCMsg_HltvFixupOperatorStatus : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_HltvReplay : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_Menu : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketEntities : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketEntities_alternate_baseline_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketEntities_non_transmitted_entities_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketReliable : google::protobuf::Message { void* vtable[23]; }
class CSVCMsg_PeerList : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_Prefetch : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Print : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_RconServerDetails : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SendTable : google::protobuf::Message { void* vtable[23]; }
class CSVCMsg_SendTable_sendprop_t : google::protobuf::Message { void* vtable[21]; }
class CSVCMsg_ServerInfo : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_ServerSteamID : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_SetPause : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SetView : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_Sounds : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Sounds_sounddata_t : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_SplitScreen : google::protobuf::Message { void* vtable[21]; }
class CSVCMsg_StopSound : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_TempEntities : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UpdateStringTable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UserCommands : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UserCommands_t : CNetMessagePB<76,CSVCMsg_UserCommands,17,1,0> { void* vtable[5]; }
class CSVCMsg_UserMessage : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_VoiceData : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_VoiceInit : google::protobuf::Message { void* vtable[19]; }
class CSave : CSaveRestoreShared, ISave { void* vtable[1]; }
class CSaveRestoreBlockSet : ISaveRestoreBlockSet { void* vtable[12]; }
class CSaveRestoreFileData : ISaveRestoreFileData { void* vtable[8]; }
class CSaveRestoreFileSystemPassthrough : ISaveRestoreFileSystem { void* vtable[18]; }
class CSaveRestoreShared { void* vtable[1]; }
class CSceneEntity : CPointEntity, IChoreoEventCallback { void* vtable[278]; }
class CSceneEntityAlias_logic_choreographed_scene : CSceneEntity { void* vtable[278]; }
class CSceneFindMarkFilter : IEntityFindFilter { void* vtable[1]; }
class CSceneListManager : CLogicalEntity { void* vtable[228]; }
class CSceneManager : CAutoGameSystem, ISceneManager { void* vtable[56]; }
class CScenePrecacheSystem : CAutoGameSystem { void* vtable[56]; }
class CSchemaAttributeTypeBase<CAttribute_String> : ISchemaAttributeTypeBase<CAttribute_String> {}
class CSchemaAttributeTypeBase<Vec3D<float> > : ISchemaAttributeTypeBase<Vec3D<float> > {}
class CSchemaAttributeTypeBase<float> : ISchemaAttributeTypeBase<float> {}
class CSchemaAttributeTypeBase<unsigned int> : ISchemaAttributeTypeBase<unsigned int> {}
class CSchemaAttributeTypeProtobufBase<CAttribute_String> : CSchemaAttributeTypeBase<CAttribute_String> {}
class CSchemaAttributeType_Default : CSchemaAttributeTypeBase<unsigned int> { void* vtable[13]; }
class CSchemaAttributeType_Float : CSchemaAttributeTypeBase<float> { void* vtable[13]; }
class CSchemaAttributeType_String : CSchemaAttributeTypeProtobufBase<CAttribute_String> { void* vtable[13]; }
class CSchemaAttributeType_Uint32 : CSchemaAttributeTypeBase<unsigned int> { void* vtable[13]; }
class CSchemaAttributeType_Vector : CSchemaAttributeTypeBase<Vec3D<float> > { void* vtable[13]; }
class CSchemaInstallCallback : CPostConnectCallback { void* vtable[1]; }
class CSchemaRegistration {}
class CSchemaRegistration_entity2 : CSchemaRegistration { void* vtable[1]; }
class CSchemaRegistration_mathlib_extended : CSchemaRegistration { void* vtable[1]; }
class CSchemaRegistration_navlib : CSchemaRegistration { void* vtable[1]; }
class CSchemaRegistration_pulse_runtime_lib : CSchemaRegistration { void* vtable[1]; }
class CSchemaRegistration_server : CSchemaRegistration { void* vtable[1]; }
class CSchemaRegistration_tier2 : CSchemaRegistration { void* vtable[1]; }
class CScrambleTeams : CBaseCSIssue { void* vtable[33]; }
class CScriptAccessorT<CDefScriptAccessorBase,1> : CDefScriptAccessorBase {}
class CScriptComponent : CEntityComponent, CScriptScopeT<CDefScriptAccessorBase,1> { void* vtable[3]; }
class CScriptConsoleCommand : ICommandCallback { void* vtable[2]; }
class CScriptItem : CItem { void* vtable[292]; }
class CScriptNavBlocker : CFuncNavBlocker { void* vtable[251]; }
class CScriptScopeT<CDefScriptAccessorBase,1> : CScriptAccessorT<CDefScriptAccessorBase,1> {}
class CScriptSpawnGroupEntityFilterProxy : ISpawnGroupEntityFilter { void* vtable[2]; }
class CScriptTriggerHurt : CTriggerHurt { void* vtable[265]; }
class CScriptTriggerMultiple : CTriggerMultiple { void* vtable[263]; }
class CScriptTriggerOnce : CTriggerOnce { void* vtable[263]; }
class CScriptTriggerPush : CTriggerPush { void* vtable[263]; }
class CScriptUniformRandomStream { void* vtable[3]; }
class CScriptedSequence : CBaseEntity { void* vtable[228]; }
class CScrubEntityGameSystem : CAutoGameSystem, CScrubSystemEventListener { void* vtable[56]; }
class CScrubSystemEventListener : IScrubSystemEventListener { void* vtable[2]; }
class CSensorGrenade : CBaseCSGrenade { void* vtable[433]; }
class CSensorGrenadeProjectile : CBaseCSGrenadeProjectile { void* vtable[315]; }
class CServerEntitySubclassUtils : CGameAppSystem<IServerEntitySubclassUtils,0> { void* vtable[13]; }
class CServerLogHTTPDispatcher : CAutoGameSystem { void* vtable[56]; }
class CServerOnlyEntity : CBaseEntity { void* vtable[228]; }
class CServerOnlyModelEntity : CBaseModelEntity { void* vtable[251]; }
class CServerOnlyPointEntity : CServerOnlyEntity { void* vtable[228]; }
class CServerPulseGameSystem : CBasePulseGameSystem { void* vtable[56]; }
class CServerRagdollTrigger : CBaseTrigger { void* vtable[263]; }
class CServerToolsInfo : CGameAppSystem<IServerToolsInfo,0> { void* vtable[12]; }
class CSharedGapTypeQueryRegistration : IGapTypeQueryRegistrationForScope { void* vtable[2]; }
class CShatterGlassBreakableSystem : IBreakableSystem { void* vtable[2]; }
class CShatterGlassGameSystem : CAutoGameSystem { void* vtable[56]; }
class CShatterGlassShard : IShardTransformPosPanelToWorld { void* vtable[3]; }
class CShatterGlassShardMgr : CDefSaveRestoreBlockHandler, IShatterGlassShardMgr { void* vtable[9]; }
class CShatterGlassShardPhysics : CPhysicsProp { void* vtable[295]; }
class CShatterGlassShardPhysics::NetworkVar_m_ShardDesc : shard_model_desc_t { void* vtable[5]; }
class CShower : CModelPointEntity { void* vtable[251]; }
class CSimSequenceSetup : ISequenceSetup { void* vtable[2]; }
class CSimThinkManager : CAutoGameSystem, ISimulationThinkManager { void* vtable[56]; }
class CSimpleMarkupVolumeTagged : CMarkupVolumeTagged { void* vtable[252]; }
class CSingleUserPlusObserversFilter : CRecipientFilter { void* vtable[5]; }
class CSingleUserRecipientFilter : CRecipientFilter { void* vtable[5]; }
class CSkeletonAnimationController : ISkeletonAnimationController { void* vtable[28]; }
class CSkeletonInstance : CGameSceneNode, ISceneAnimatableProceduralBoneTransforms { void* vtable[28]; }
class CSkeletonInstance::NetworkVar_m_modelState : CModelState { void* vtable[4]; }
class CSkyCamera : CBaseEntity { void* vtable[228]; }
class CSkyCamera::NetworkVar_m_skyboxData : sky3dparams_t { void* vtable[4]; }
class CSkyboxReference : CBaseEntity { void* vtable[228]; }
class CSmokeGrenade : CBaseCSGrenade { void* vtable[432]; }
class CSmokeGrenadeProjectile : CBaseCSGrenadeProjectile, CGameEventListener, ISmokeGrenadeList { void* vtable[315]; }
class CSmokeVolumeSystem : CAutoGameSystem { void* vtable[56]; }
class CSmoothFunc { void* vtable[2]; }
class CSosCopyRecipientFilter : IRecipientFilter { void* vtable[6]; }
class CSosEventInfoWithFieldData_t : CSosEventInfo_t { void* vtable[1]; }
class CSosEventInfo_t { void* vtable[1]; }
class CSosFilterInfo_t {}
class CSosFilterSetLibraryStackFieldsInfo_t : CSosSetLibraryStackFieldsInfo_t, CSosFilterInfo_t { void* vtable[1]; }
class CSosFilterSetSoundEventFieldsInfo_t : CSosSetSoundEventFieldsInfo_t, CSosFilterInfo_t { void* vtable[1]; }
class CSosFilterStartSoundEventInfo_t : CSosStartSoundEventInfo_t, CSosFilterInfo_t { void* vtable[1]; }
class CSosFilterStopSoundEventHashInfo_t : CSosStopSoundEventHashInfo_t, CSosFilterInfo_t { void* vtable[1]; }
class CSosFilterStopSoundEventInfo_t : CSosStopSoundEventInfo_t, CSosFilterInfo_t { void* vtable[1]; }
class CSosSetLibraryStackFieldsInfo_t : CSosEventInfoWithFieldData_t { void* vtable[1]; }
class CSosSetSoundEventFieldsInfo_t : CSosEventInfoWithFieldData_t { void* vtable[1]; }
class CSosStartSoundEventInfo_t : CSosEventInfoWithFieldData_t { void* vtable[1]; }
class CSosStopSoundEventHashInfo_t : CSosEventInfo_t { void* vtable[1]; }
class CSosStopSoundEventInfo_t : CSosEventInfo_t { void* vtable[1]; }
class CSoundAreaEntityBase : CBaseEntity {}
class CSoundAreaEntityOrientedBox : CSoundAreaEntityBase { void* vtable[228]; }
class CSoundAreaEntitySphere : CSoundAreaEntityBase { void* vtable[228]; }
class CSoundControllerImp : CSoundEnvelopeController, CAutoGameSystem { void* vtable[22]; }
class CSoundEmitterSystem : IGameSystem { void* vtable[56]; }
class CSoundEnt : CPointEntity { void* vtable[228]; }
class CSoundEnvelopeController {}
class CSoundEventAABBEntity : CSoundEventEntity { void* vtable[229]; }
class CSoundEventEntity : CBaseEntity { void* vtable[229]; }
class CSoundEventEntityAlias_snd_event_point : CSoundEventEntity { void* vtable[229]; }
class CSoundEventOBBEntity : CSoundEventEntity { void* vtable[229]; }
class CSoundEventParameter : CBaseEntity { void* vtable[228]; }
class CSoundEventPathCornerEntity : CSoundEventEntity { void* vtable[230]; }
class CSoundEventSphereEntity : CSoundEventEntity { void* vtable[229]; }
class CSoundOpGameSystem : CAutoGameSystem, CUtlSlot { void* vtable[56]; }
class CSoundOpvarSetAABBEntity : CSoundOpvarSetPointEntity { void* vtable[234]; }
class CSoundOpvarSetAutoRoomEntity : CSoundOpvarSetPointEntity { void* vtable[229]; }
class CSoundOpvarSetEntity : CBaseEntity { void* vtable[228]; }
class CSoundOpvarSetOBBEntity : CSoundOpvarSetAABBEntity { void* vtable[234]; }
class CSoundOpvarSetOBBWindEntity : CSoundOpvarSetPointBase { void* vtable[232]; }
class CSoundOpvarSetPathCornerEntity : CSoundOpvarSetPointEntity { void* vtable[229]; }
class CSoundOpvarSetPointBase : CBaseEntity { void* vtable[229]; }
class CSoundOpvarSetPointEntity : CSoundOpvarSetPointBase { void* vtable[229]; }
class CSoundOpvarSetPointManager : CAutoGameSystem { void* vtable[56]; }
class CSoundOpvarSetPointManager_MP : CAutoGameSystem { void* vtable[56]; }
class CSoundPatch { void* vtable[2]; }
class CSoundPatchSaveRestoreOps : CClassPtrSaveRestoreOps { void* vtable[6]; }
class CSoundStackSave : CLogicalEntity { void* vtable[228]; }
class CSoundscapeSystem : CAutoGameSystem { void* vtable[56]; }
class CSource1GameConfiguration : CGameConfiguration {}
class CSource1LegacyGameEventGameSystem : CAutoGameSystem, CUtlSlot { void* vtable[56]; }
class CSource1LegacyGameEventGameSystem::CServerSideClient_GameEventLegacyProxy : IGameEventListener2 { void* vtable[2]; }
class CSource2EntitySystem : CAutoGameSystem { void* vtable[56]; }
class CSource2EntitySystemDeallocator : CAutoGameSystem { void* vtable[56]; }
class CSource2GameClients : CGameAppSystem<ISource2GameClients,0> { void* vtable[43]; }
class CSource2GameEntities : CGameAppSystem<ISource2GameEntities,0> { void* vtable[17]; }
class CSource2Metrics_MatchPerfSummary_Notification : google::protobuf::Message { void* vtable[17]; }
class CSource2Metrics_MatchPerfSummary_Notification_Client : google::protobuf::Message { void* vtable[17]; }
class CSource2Server : CGameAppSystem<ISource2Server,0>, IStreamEntitiesFromFileCompletion { void* vtable[107]; }
class CSpaceAgnosticBoneAccessor : IPoseAccessor { void* vtable[9]; }
class CSpawnGroupCompletionCallbackGameSystem : CAutoGameSystem { void* vtable[56]; }
class CSpawnGroupMgrGameSystem : IGameSpawnGroupMgr, CAutoGameSystem { void* vtable[22]; }
class CSplineConstraint : CPhysConstraint { void* vtable[231]; }
class CSpotlightEnd : CBaseModelEntity { void* vtable[251]; }
class CSprite : CBaseModelEntity { void* vtable[251]; }
class CSpriteAlias_env_glow : CSprite { void* vtable[251]; }
class CSpriteOriented : CSprite { void* vtable[251]; }
class CStartTimeOutIssue : CBaseCSIssue { void* vtable[33]; }
class CStartupHookGameSystem<GameEvent_RegisterInternal,17408> : IGameSystem {}
class CStatusTagProxy : CMutableRefCounted<CMutableRefCountBase<CRefMT> >, IAnimTagListener { void* vtable[1]; }
class CSteamServiceMethodUMHelper : ISteamUnifiedMessageListener { void* vtable[1]; }
class CSteamWorksGameStatsServer : CSteamWorksGameStatsUploader { void* vtable[63]; }
class CSteamWorksGameStatsUploader : CAutoGameSystem, CGameEventListener { void* vtable[63]; }
class CStressDamageSystem : CAutoGameSystem { void* vtable[56]; }
class CStringTableSaveRestoreOps : CDefSaveRestoreOps { void* vtable[6]; }
class CStructuredReport<enum BhopReportField,0,int,int,Vec3D<float>,Vec3D<float>,float,float,Vec3D<float>,float,bool,bool,bool,bool,float> { void* vtable[1]; }
class CStructuredReport<enum MoveReportField,0,int,int,Vec3D<float>,Vec3D<float>,float,Vec3D<float>,float,bool,bool,bool,bool,float> { void* vtable[1]; }
class CSubtickMoveStep : google::protobuf::Message { void* vtable[19]; }
class CSun : CBaseModelEntity { void* vtable[251]; }
class CSurfacePropDataTableBase {}
class CSurfacePropReloadableDataTable<CGameSurfaceProperties> : CSurfacePropReloadableDataTableBase {}
class CSurfacePropReloadableDataTableBase : CSurfacePropDataTableBase { void* vtable[4]; }
class CSurrender : CBaseCSIssue { void* vtable[33]; }
class CSwapTeams : CBaseCSIssue { void* vtable[33]; }
class CTEArmorRicochet : CBaseTempEntity { void* vtable[4]; }
class CTEBSPDecal : CBaseTempEntity { void* vtable[4]; }
class CTEBaseBeam : CBaseTempEntity {}
class CTEBeamEntPoint : CTEBaseBeam { void* vtable[4]; }
class CTEBeamEnts : CTEBaseBeam { void* vtable[4]; }
class CTEBeamPoints : CTEBaseBeam { void* vtable[4]; }
class CTEBeamRing : CTEBaseBeam { void* vtable[4]; }
class CTEBloodStream : CBaseTempEntity { void* vtable[4]; }
class CTEBubbleTrail : CBaseTempEntity { void* vtable[4]; }
class CTEBubbles : CBaseTempEntity { void* vtable[4]; }
class CTEDecal : CBaseTempEntity { void* vtable[4]; }
class CTEDust : CBaseTempEntity { void* vtable[4]; }
class CTEEffectDispatch : CBaseTempEntity { void* vtable[4]; }
class CTEEnergySplash : CBaseTempEntity { void* vtable[4]; }
class CTEExplosion : CBaseTempEntity { void* vtable[5]; }
class CTEFireBullets : CBaseTempEntity { void* vtable[4]; }
class CTEFizz : CBaseTempEntity { void* vtable[4]; }
class CTEGlowSprite : CBaseTempEntity { void* vtable[4]; }
class CTEImpact : CBaseTempEntity { void* vtable[6]; }
class CTELargeFunnel : CBaseTempEntity { void* vtable[4]; }
class CTEMuzzleFlash : CBaseTempEntity { void* vtable[4]; }
class CTEPhysicsProp : CBaseTempEntity { void* vtable[4]; }
class CTEPlayerDecal : CBaseTempEntity { void* vtable[4]; }
class CTEProjectedDecal : CBaseTempEntity { void* vtable[4]; }
class CTESmoke : CBaseTempEntity { void* vtable[4]; }
class CTESparks : CBaseTempEntity { void* vtable[4]; }
class CTEWorldDecal : CBaseTempEntity { void* vtable[4]; }
class CTablet : CCSWeaponBase { void* vtable[426]; }
class CTakeDamageInfo { void* vtable[2]; }
class CTankTargetChange : CPointEntity { void* vtable[228]; }
class CTankTrainAI : CPointEntity { void* vtable[228]; }
class CTeam : CBaseEntity { void* vtable[230]; }
class CTeamColorsAssignedSystem : CAutoGameSystem { void* vtable[56]; }
class CTeamRecipientFilter : CRecipientFilter { void* vtable[5]; }
class CTeamplayRules : CMultiplayRules { void* vtable[118]; }
class CTempEntsSystem : ITempEntsSystem { void* vtable[3]; }
class CTestEffect : CBaseEntity { void* vtable[228]; }
class CTextureBasedAnimatable : CBaseModelEntity { void* vtable[251]; }
class CThinkContextsSaveDataOps : CDefSaveRestoreOps { void* vtable[6]; }
class CThread {}
class CThreadedJob : CRefCounted1<IRefCounted,CRefCountServiceBase<CRefMT> > { void* vtable[7]; }
class CTier0AppSystem<ICustomNavGen,0> : CBaseAppSystem<ICustomNavGen> {}
class CTier0AppSystem<IEngineService,0> : CBaseAppSystem<IEngineService> {}
class CTier0AppSystem<IGameConfiguration,0> : CBaseAppSystem<IGameConfiguration> {}
class CTier0AppSystem<INavGameTest,0> : CBaseAppSystem<INavGameTest> {}
class CTier0AppSystem<IServerEntitySubclassUtils,0> : CBaseAppSystem<IServerEntitySubclassUtils> {}
class CTier0AppSystem<IServerToolsInfo,0> : CBaseAppSystem<IServerToolsInfo> {}
class CTier0AppSystem<ISource2GameClients,0> : CBaseAppSystem<ISource2GameClients> {}
class CTier0AppSystem<ISource2GameEntities,0> : CBaseAppSystem<ISource2GameEntities> {}
class CTier0AppSystem<ISource2Server,0> : CBaseAppSystem<ISource2Server> {}
class CTier1AppSystem<ICustomNavGen,0> : CTier0AppSystem<ICustomNavGen,0> {}
class CTier1AppSystem<IEngineService,0> : CTier0AppSystem<IEngineService,0> {}
class CTier1AppSystem<IGameConfiguration,0> : CTier0AppSystem<IGameConfiguration,0> {}
class CTier1AppSystem<INavGameTest,0> : CTier0AppSystem<INavGameTest,0> {}
class CTier1AppSystem<IServerEntitySubclassUtils,0> : CTier0AppSystem<IServerEntitySubclassUtils,0> {}
class CTier1AppSystem<IServerToolsInfo,0> : CTier0AppSystem<IServerToolsInfo,0> {}
class CTier1AppSystem<ISource2GameClients,0> : CTier0AppSystem<ISource2GameClients,0> {}
class CTier1AppSystem<ISource2GameEntities,0> : CTier0AppSystem<ISource2GameEntities,0> {}
class CTier1AppSystem<ISource2Server,0> : CTier0AppSystem<ISource2Server,0> {}
class CTier2AppSystem<ICustomNavGen,0> : CTier1AppSystem<ICustomNavGen,0> {}
class CTier2AppSystem<IEngineService,0> : CTier1AppSystem<IEngineService,0> {}
class CTier2AppSystem<IGameConfiguration,0> : CTier1AppSystem<IGameConfiguration,0> {}
class CTier2AppSystem<INavGameTest,0> : CTier1AppSystem<INavGameTest,0> {}
class CTier2AppSystem<IServerEntitySubclassUtils,0> : CTier1AppSystem<IServerEntitySubclassUtils,0> {}
class CTier2AppSystem<IServerToolsInfo,0> : CTier1AppSystem<IServerToolsInfo,0> {}
class CTier2AppSystem<ISource2GameClients,0> : CTier1AppSystem<ISource2GameClients,0> {}
class CTier2AppSystem<ISource2GameEntities,0> : CTier1AppSystem<ISource2GameEntities,0> {}
class CTier2AppSystem<ISource2Server,0> : CTier1AppSystem<ISource2Server,0> {}
class CTier3AppSystem<ICustomNavGen,0> : CTier2AppSystem<ICustomNavGen,0> {}
class CTier3AppSystem<IEngineService,0> : CTier2AppSystem<IEngineService,0> {}
class CTier3AppSystem<IGameConfiguration,0> : CTier2AppSystem<IGameConfiguration,0> {}
class CTier3AppSystem<INavGameTest,0> : CTier2AppSystem<INavGameTest,0> {}
class CTier3AppSystem<IServerEntitySubclassUtils,0> : CTier2AppSystem<IServerEntitySubclassUtils,0> {}
class CTier3AppSystem<IServerToolsInfo,0> : CTier2AppSystem<IServerToolsInfo,0> {}
class CTier3AppSystem<ISource2GameClients,0> : CTier2AppSystem<ISource2GameClients,0> {}
class CTier3AppSystem<ISource2GameEntities,0> : CTier2AppSystem<ISource2GameEntities,0> {}
class CTier3AppSystem<ISource2Server,0> : CTier2AppSystem<ISource2Server,0> {}
class CTier4AppSystem<IEngineService,0> : CTier3AppSystem<IEngineService,0> {}
class CTier4AppSystem<IGameConfiguration,0> : CTier3AppSystem<IGameConfiguration,0> {}
class CTimerEntity : CLogicalEntity { void* vtable[228]; }
class CTonemapController2 : CBaseEntity { void* vtable[228]; }
class CTonemapController2Alias_env_tonemap_controller2 : CTonemapController2 { void* vtable[228]; }
class CTonemapTrigger : CBaseTrigger { void* vtable[263]; }
class CToolGameSimulationAPI : CAutoGameSystem, IToolGameSimulationAPI, IEntityListener { void* vtable[56]; }
class CTouchExpansionComponent : CEntityComponent { void* vtable[3]; }
class CTraceFilter : RnQueryAttr_t { void* vtable[2]; }
class CTraceFilterDoor : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterEntityPush : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterEntitySweep : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterForPlayerHeadCollision : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterGroundEntities : CTraceFilterWalkableEntities { void* vtable[2]; }
class CTraceFilterHitEntitiesOnly : CTraceFilterSlowWithCallback {}
class CTraceFilterIngnoreGrenades : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterKnifeIgnoreTeammates : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterLOS : CTraceFilter { void* vtable[2]; }
class CTraceFilterNoNPCsOrPlayer : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterNoPlayersAndFlashbangPassableAnims : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterPlayerMovementCS : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterPushFinal : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterPushMove : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterQueryCache : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterSkipPlayersAndNPCs : CTraceFilterSlowWithCallback {}
class CTraceFilterSkipPlayersAndNPCsAndChildren : CTraceFilterSkipPlayersAndNPCs {}
class CTraceFilterSlowWithCallback : CTraceFilter {}
class CTraceFilterTaserIgnoreTeammates : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTraceFilterWalkableEntities : CTraceFilterSlowWithCallback { void* vtable[2]; }
class CTriggerActiveWeaponDetect : CBaseTrigger { void* vtable[263]; }
class CTriggerBombReset : CBaseTrigger { void* vtable[263]; }
class CTriggerBrush : CBaseModelEntity { void* vtable[251]; }
class CTriggerBuoyancy : CBaseTrigger { void* vtable[263]; }
class CTriggerCallback : CBaseTrigger { void* vtable[263]; }
class CTriggerDetectBulletFire : CBaseTrigger { void* vtable[263]; }
class CTriggerDetectExplosion : CBaseTrigger, CUtlSlot { void* vtable[263]; }
class CTriggerFan : CBaseTrigger { void* vtable[263]; }
class CTriggerGameEvent : CBaseTrigger { void* vtable[263]; }
class CTriggerGravity : CBaseTrigger { void* vtable[263]; }
class CTriggerHostageReset : CBaseTrigger { void* vtable[263]; }
class CTriggerHurt : CBaseTrigger { void* vtable[265]; }
class CTriggerImpact : CTriggerMultiple { void* vtable[263]; }
class CTriggerLerpObject : CBaseTrigger { void* vtable[263]; }
class CTriggerLook : CTriggerOnce { void* vtable[263]; }
class CTriggerMultiple : CBaseTrigger { void* vtable[263]; }
class CTriggerOnce : CTriggerMultiple { void* vtable[263]; }
class CTriggerPhysics : CBaseTrigger, IMotionEvent { void* vtable[263]; }
class CTriggerProximity : CBaseTrigger { void* vtable[263]; }
class CTriggerPush : CBaseTrigger { void* vtable[263]; }
class CTriggerRemove : CBaseTrigger { void* vtable[263]; }
class CTriggerSave : CBaseTrigger { void* vtable[263]; }
class CTriggerSndSosOpvar : CBaseTrigger { void* vtable[263]; }
class CTriggerSoundscape : CBaseTrigger { void* vtable[263]; }
class CTriggerTeleport : CBaseTrigger { void* vtable[263]; }
class CTriggerToggleSave : CBaseTrigger { void* vtable[263]; }
class CTriggerTripWire : CBaseTrigger { void* vtable[263]; }
class CTriggerVolume : CBaseModelEntity { void* vtable[251]; }
class CTripWireFire : CBaseCSGrenade { void* vtable[432]; }
class CTripWireFireProjectile : CBaseGrenade { void* vtable[311]; }
class CUGCDetailsRequest { void* vtable[1]; }
class CUnpauseMatchIssue : CBaseCSIssue { void* vtable[33]; }
class CUserCmd : CCSGOUserCmd { void* vtable[10]; }
class CUserCmdBase { void* vtable[8]; }
class CUserCmdBaseHost<CSGOUserCmdPB> : CUserCmdBase, CSGOUserCmdPB { void* vtable[10]; }
class CUserCmdBasePB : google::protobuf::Message { void* vtable[17]; }
class CUserMessageAchievementEvent : google::protobuf::Message { void* vtable[23]; }
class CUserMessageAchievementEvent_t : CUserMessagePB<101,CUserMessageAchievementEvent,1> { void* vtable[5]; }
class CUserMessageAmmoDenied : google::protobuf::Message { void* vtable[17]; }
class CUserMessageAnimStateGraphState : google::protobuf::Message { void* vtable[19]; }
class CUserMessageAudioParameter : google::protobuf::Message { void* vtable[17]; }
class CUserMessageAudioParameter_t : CUserMessagePB<144,CUserMessageAudioParameter,1> { void* vtable[5]; }
class CUserMessageCameraTransition : google::protobuf::Message { void* vtable[17]; }
class CUserMessageCameraTransition_Transition_DataDriven : google::protobuf::Message { void* vtable[21]; }
class CUserMessageCloseCaption : google::protobuf::Message { void* vtable[23]; }
class CUserMessageCloseCaptionDirect : google::protobuf::Message { void* vtable[19]; }
class CUserMessageCloseCaptionPlaceholder : google::protobuf::Message { void* vtable[17]; }
class CUserMessageCloseCaption_t : CUserMessagePB<102,CUserMessageCloseCaption,1> { void* vtable[5]; }
class CUserMessageColoredText : google::protobuf::Message { void* vtable[17]; }
class CUserMessageColoredText_t : CUserMessagePB<113,CUserMessageColoredText,1> { void* vtable[5]; }
class CUserMessageCreditsMsg : google::protobuf::Message { void* vtable[19]; }
class CUserMessageCreditsMsg_t : CUserMessagePB<135,CUserMessageCreditsMsg,1> { void* vtable[5]; }
class CUserMessageCurrentTimescale : google::protobuf::Message { void* vtable[19]; }
class CUserMessageCurrentTimescale_t : CUserMessagePB<104,CUserMessageCurrentTimescale,1> { void* vtable[5]; }
class CUserMessageDesiredTimescale : google::protobuf::Message { void* vtable[17]; }
class CUserMessageDesiredTimescale_t : CUserMessagePB<105,CUserMessageDesiredTimescale,1> { void* vtable[5]; }
class CUserMessageFade : google::protobuf::Message { void* vtable[17]; }
class CUserMessageFade_t : CUserMessagePB<106,CUserMessageFade,1> { void* vtable[5]; }
class CUserMessageGameTitle : google::protobuf::internal::ZeroFieldsBase { void* vtable[19]; }
class CUserMessageHapticsManagerEffect : google::protobuf::Message { void* vtable[17]; }
class CUserMessageHapticsManagerPulse : google::protobuf::Message { void* vtable[17]; }
class CUserMessageHudMsg : google::protobuf::Message { void* vtable[17]; }
class CUserMessageHudMsg_t : CUserMessagePB<110,CUserMessageHudMsg,1> { void* vtable[5]; }
class CUserMessageHudText : google::protobuf::Message { void* vtable[19]; }
class CUserMessageHudText_t : CUserMessagePB<111,CUserMessageHudText,1> { void* vtable[5]; }
class CUserMessageItemPickup : google::protobuf::Message { void* vtable[17]; }
class CUserMessageLagCompensationError : google::protobuf::Message { void* vtable[17]; }
class CUserMessageLagCompensationError_t : CUserMessagePB<155,CUserMessageLagCompensationError,1> { void* vtable[5]; }
class CUserMessagePB<101,CUserMessageAchievementEvent,1> : CNetMessagePB<101,CUserMessageAchievementEvent,13,1,1> {}
class CUserMessagePB<102,CUserMessageCloseCaption,1> : CNetMessagePB<102,CUserMessageCloseCaption,13,1,1> {}
class CUserMessagePB<104,CUserMessageCurrentTimescale,1> : CNetMessagePB<104,CUserMessageCurrentTimescale,13,1,1> {}
class CUserMessagePB<105,CUserMessageDesiredTimescale,1> : CNetMessagePB<105,CUserMessageDesiredTimescale,13,1,1> {}
class CUserMessagePB<106,CUserMessageFade,1> : CNetMessagePB<106,CUserMessageFade,13,1,1> {}
class CUserMessagePB<110,CUserMessageHudMsg,1> : CNetMessagePB<110,CUserMessageHudMsg,13,1,1> {}
class CUserMessagePB<111,CUserMessageHudText,1> : CNetMessagePB<111,CUserMessageHudText,13,1,1> {}
class CUserMessagePB<113,CUserMessageColoredText,1> : CNetMessagePB<113,CUserMessageColoredText,13,1,1> {}
class CUserMessagePB<114,CUserMessageRequestState,1> : CNetMessagePB<114,CUserMessageRequestState,13,1,1> {}
class CUserMessagePB<115,CUserMessageResetHUD,1> : CNetMessagePB<115,CUserMessageResetHUD,13,1,1> {}
class CUserMessagePB<117,CUserMessageSayText,1> : CNetMessagePB<117,CUserMessageSayText,13,1,1> {}
class CUserMessagePB<118,CUserMessageSayText2,1> : CNetMessagePB<118,CUserMessageSayText2,13,1,1> {}
class CUserMessagePB<120,CUserMessageShake,1> : CNetMessagePB<120,CUserMessageShake,13,1,1> {}
class CUserMessagePB<122,CUserMessageWaterShake,1> : CNetMessagePB<122,CUserMessageWaterShake,13,1,1> {}
class CUserMessagePB<124,CUserMessageTextMsg,1> : CNetMessagePB<124,CUserMessageTextMsg,13,1,1> {}
class CUserMessagePB<125,CUserMessageScreenTilt,1> : CNetMessagePB<125,CUserMessageScreenTilt,13,1,1> {}
class CUserMessagePB<128,CUserMessageVoiceMask,1> : CNetMessagePB<128,CUserMessageVoiceMask,13,1,1> {}
class CUserMessagePB<130,CUserMessageSendAudio,1> : CNetMessagePB<130,CUserMessageSendAudio,13,1,1> {}
class CUserMessagePB<135,CUserMessageCreditsMsg,1> : CNetMessagePB<135,CUserMessageCreditsMsg,13,1,1> {}
class CUserMessagePB<138,CEntityMessageRemoveAllDecals,1> : CNetMessagePB<138,CEntityMessageRemoveAllDecals,13,1,1> {}
class CUserMessagePB<139,CEntityMessagePropagateForce,1> : CNetMessagePB<139,CEntityMessagePropagateForce,13,1,1> {}
class CUserMessagePB<144,CUserMessageAudioParameter,1> : CNetMessagePB<144,CUserMessageAudioParameter,13,1,1> {}
class CUserMessagePB<145,CUserMsg_ParticleManager,1> : CNetMessagePB<145,CUserMsg_ParticleManager,13,1,1> {}
class CUserMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,1> : CNetMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,13,1,1> {}
class CUserMessagePB<153,CUserMessageUpdateCssClasses,1> : CNetMessagePB<153,CUserMessageUpdateCssClasses,13,1,1> {}
class CUserMessagePB<154,CUserMessageServerFrameTime,1> : CNetMessagePB<154,CUserMessageServerFrameTime,13,1,1> {}
class CUserMessagePB<155,CUserMessageLagCompensationError,1> : CNetMessagePB<155,CUserMessageLagCompensationError,13,1,1> {}
class CUserMessagePB<166,CUserMessage_PlayResponseConditional,1> : CNetMessagePB<166,CUserMessage_PlayResponseConditional,13,1,1> {}
class CUserMessagePB<301,CCSUsrMsg_VGUIMenu,1> : CNetMessagePB<301,CCSUsrMsg_VGUIMenu,13,1,1> {}
class CUserMessagePB<317,CCSUsrMsg_SendAudio,1> : CNetMessagePB<317,CCSUsrMsg_SendAudio,13,1,1> {}
class CUserMessagePB<318,CCSUsrMsg_RawAudio,1> : CNetMessagePB<318,CCSUsrMsg_RawAudio,13,1,1> {}
class CUserMessagePB<321,CCSUsrMsg_Damage,1> : CNetMessagePB<321,CCSUsrMsg_Damage,13,1,1> {}
class CUserMessagePB<322,CCSUsrMsg_RadioText,1> : CNetMessagePB<322,CCSUsrMsg_RadioText,13,1,1> {}
class CUserMessagePB<323,CCSUsrMsg_HintText,1> : CNetMessagePB<323,CCSUsrMsg_HintText,13,1,1> {}
class CUserMessagePB<324,CCSUsrMsg_KeyHintText,1> : CNetMessagePB<324,CCSUsrMsg_KeyHintText,13,1,1> {}
class CUserMessagePB<325,CCSUsrMsg_ProcessSpottedEntityUpdate,1> : CNetMessagePB<325,CCSUsrMsg_ProcessSpottedEntityUpdate,13,1,1> {}
class CUserMessagePB<327,CCSUsrMsg_AdjustMoney,1> : CNetMessagePB<327,CCSUsrMsg_AdjustMoney,13,1,1> {}
class CUserMessagePB<334,CCSUsrMsg_MatchEndConditions,1> : CNetMessagePB<334,CCSUsrMsg_MatchEndConditions,13,1,1> {}
class CUserMessagePB<335,CCSUsrMsg_DisconnectToLobby,1> : CNetMessagePB<335,CCSUsrMsg_DisconnectToLobby,13,1,1> {}
class CUserMessagePB<336,CCSUsrMsg_PlayerStatsUpdate,1> : CNetMessagePB<336,CCSUsrMsg_PlayerStatsUpdate,13,1,1> {}
class CUserMessagePB<338,CCSUsrMsg_WarmupHasEnded,1> : CNetMessagePB<338,CCSUsrMsg_WarmupHasEnded,13,1,1> {}
class CUserMessagePB<345,CCSUsrMsg_CallVoteFailed,1> : CNetMessagePB<345,CCSUsrMsg_CallVoteFailed,13,1,1> {}
class CUserMessagePB<346,CCSUsrMsg_VoteStart,1> : CNetMessagePB<346,CCSUsrMsg_VoteStart,13,1,1> {}
class CUserMessagePB<347,CCSUsrMsg_VotePass,1> : CNetMessagePB<347,CCSUsrMsg_VotePass,13,1,1> {}
class CUserMessagePB<348,CCSUsrMsg_VoteFailed,1> : CNetMessagePB<348,CCSUsrMsg_VoteFailed,13,1,1> {}
class CUserMessagePB<349,CCSUsrMsg_VoteSetup,1> : CNetMessagePB<349,CCSUsrMsg_VoteSetup,13,1,1> {}
class CUserMessagePB<350,CCSUsrMsg_ServerRankRevealAll,1> : CNetMessagePB<350,CCSUsrMsg_ServerRankRevealAll,13,1,1> {}
class CUserMessagePB<351,CCSUsrMsg_SendLastKillerDamageToClient,1> : CNetMessagePB<351,CCSUsrMsg_SendLastKillerDamageToClient,13,1,1> {}
class CUserMessagePB<361,CCSUsrMsg_SendPlayerItemDrops,1> : CNetMessagePB<361,CCSUsrMsg_SendPlayerItemDrops,13,1,1> {}
class CUserMessagePB<362,CCSUsrMsg_RoundBackupFilenames,1> : CNetMessagePB<362,CCSUsrMsg_RoundBackupFilenames,13,1,1> {}
class CUserMessagePB<363,CCSUsrMsg_SendPlayerItemFound,1> : CNetMessagePB<363,CCSUsrMsg_SendPlayerItemFound,13,1,1> {}
class CUserMessagePB<364,CCSUsrMsg_ReportHit,1> : CNetMessagePB<364,CCSUsrMsg_ReportHit,13,1,1> {}
class CUserMessagePB<368,CCSUsrMsg_PlayerDecalDigitalSignature,1> : CNetMessagePB<368,CCSUsrMsg_PlayerDecalDigitalSignature,13,1,1> {}
class CUserMessagePB<369,CCSUsrMsg_WeaponSound,1> : CNetMessagePB<369,CCSUsrMsg_WeaponSound,13,1,1> {}
class CUserMessagePB<371,CCSUsrMsg_EntityOutlineHighlight,1> : CNetMessagePB<371,CCSUsrMsg_EntityOutlineHighlight,13,1,1> {}
class CUserMessagePB<375,CCSUsrMsg_EndOfMatchAllPlayersData,1> : CNetMessagePB<375,CCSUsrMsg_EndOfMatchAllPlayersData,13,1,1> {}
class CUserMessagePB<376,CCSUsrMsg_PostRoundDamageReport,1> : CNetMessagePB<376,CCSUsrMsg_PostRoundDamageReport,13,1,1> {}
class CUserMessagePB<379,CCSUsrMsg_RoundEndReportData,1> : CNetMessagePB<379,CCSUsrMsg_RoundEndReportData,13,1,1> {}
class CUserMessagePB<380,CCSUsrMsg_CurrentRoundOdds,1> : CNetMessagePB<380,CCSUsrMsg_CurrentRoundOdds,13,1,1> {}
class CUserMessagePB<383,CCSUsrMsg_ShootInfo,1> : CNetMessagePB<383,CCSUsrMsg_ShootInfo,13,1,1> {}
class CUserMessagePB<385,CCSUsrMsg_CounterStrafe,1> : CNetMessagePB<385,CCSUsrMsg_CounterStrafe,13,1,1> {}
class CUserMessageRequestDiagnostic : google::protobuf::Message { void* vtable[19]; }
class CUserMessageRequestDiagnostic_Diagnostic : google::protobuf::Message { void* vtable[17]; }
class CUserMessageRequestDllStatus : google::protobuf::Message { void* vtable[33]; }
class CUserMessageRequestInventory : google::protobuf::Message { void* vtable[17]; }
class CUserMessageRequestState : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CUserMessageRequestState_t : CUserMessagePB<114,CUserMessageRequestState,1> { void* vtable[5]; }
class CUserMessageRequestUtilAction : google::protobuf::Message { void* vtable[19]; }
class CUserMessageResetHUD : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CUserMessageResetHUD_t : CUserMessagePB<115,CUserMessageResetHUD,1> { void* vtable[5]; }
class CUserMessageRumble : google::protobuf::Message { void* vtable[17]; }
class CUserMessageSayText : google::protobuf::Message { void* vtable[17]; }
class CUserMessageSayText2 : google::protobuf::Message { void* vtable[17]; }
class CUserMessageSayText2_t : CUserMessagePB<118,CUserMessageSayText2,1> { void* vtable[5]; }
class CUserMessageSayTextChannel : google::protobuf::Message { void* vtable[19]; }
class CUserMessageSayText_t : CUserMessagePB<117,CUserMessageSayText,1> { void* vtable[5]; }
class CUserMessageScreenTilt : google::protobuf::Message { void* vtable[17]; }
class CUserMessageScreenTilt_t : CUserMessagePB<125,CUserMessageScreenTilt,1> { void* vtable[5]; }
class CUserMessageSendAudio : google::protobuf::Message { void* vtable[17]; }
class CUserMessageSendAudio_t : CUserMessagePB<130,CUserMessageSendAudio,1> { void* vtable[5]; }
class CUserMessageServerFrameTime : google::protobuf::Message { void* vtable[25]; }
class CUserMessageServerFrameTime_t : CUserMessagePB<154,CUserMessageServerFrameTime,1> { void* vtable[5]; }
class CUserMessageShake : google::protobuf::Message { void* vtable[17]; }
class CUserMessageShakeDir : google::protobuf::Message { void* vtable[19]; }
class CUserMessageShake_t : CUserMessagePB<120,CUserMessageShake,1> { void* vtable[5]; }
class CUserMessageShowMenu : google::protobuf::Message { void* vtable[17]; }
class CUserMessageTextMsg : google::protobuf::Message { void* vtable[19]; }
class CUserMessageTextMsg_t : CUserMessagePB<124,CUserMessageTextMsg,1> { void* vtable[5]; }
class CUserMessageUpdateCssClasses : google::protobuf::Message { void* vtable[21]; }
class CUserMessageUpdateCssClasses_t : CUserMessagePB<153,CUserMessageUpdateCssClasses,1> { void* vtable[5]; }
class CUserMessageVoiceMask : google::protobuf::Message { void* vtable[17]; }
class CUserMessageVoiceMask_t : CUserMessagePB<128,CUserMessageVoiceMask,1> { void* vtable[5]; }
class CUserMessageWaterShake : google::protobuf::Message { void* vtable[17]; }
class CUserMessageWaterShake_t : CUserMessagePB<122,CUserMessageWaterShake,1> { void* vtable[5]; }
class CUserMessage_Diagnostic_Response : google::protobuf::Message { void* vtable[17]; }
class CUserMessage_Diagnostic_Response_Diagnostic : google::protobuf::Message { void* vtable[19]; }
class CUserMessage_DllStatus : google::protobuf::Message { void* vtable[19]; }
class CUserMessage_DllStatus_CModule : google::protobuf::Message { void* vtable[17]; }
class CUserMessage_DllStatus_CVDiagnostic : google::protobuf::Message { void* vtable[17]; }
class CUserMessage_ExtraUserData : google::protobuf::Message { void* vtable[17]; }
class CUserMessage_Inventory_Response : google::protobuf::Message { void* vtable[23]; }
class CUserMessage_Inventory_Response_InventoryDetail : google::protobuf::Message { void* vtable[17]; }
class CUserMessage_NotifyResponseFound : google::protobuf::Message { void* vtable[17]; }
class CUserMessage_NotifyResponseFound_Criteria : google::protobuf::Message { void* vtable[25]; }
class CUserMessage_PlayResponseConditional : google::protobuf::Message { void* vtable[21]; }
class CUserMessage_PlayResponseConditional_t : CUserMessagePB<166,CUserMessage_PlayResponseConditional,1> { void* vtable[5]; }
class CUserMessage_UtilMsg_Response : google::protobuf::Message { void* vtable[23]; }
class CUserMessage_UtilMsg_Response_ItemDetail : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_CustomGameEvent : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_CustomGameEvent_t : CUserMessagePB<148,CBaseCmdKeyValues<CUserMsg_CustomGameEvent>,1> { void* vtable[5]; }
class CUserMsg_HudError : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_ParticleManager : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_ParticleManager_AddModellistOverrideElement : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_ParticleManager_ChangeControlPointAttachment : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_ParticleManager_ClearModellistOverride : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_CreateParticle : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_CreatePhysicsSim : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_DestroyParticle : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_DestroyParticleInvolving : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_DestroyParticleNamed : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_DestroyPhysicsSim : google::protobuf::internal::ZeroFieldsBase { void* vtable[21]; }
class CUserMsg_ParticleManager_FreezeParticleInvolving : google::protobuf::Message { void* vtable[21]; }
class CUserMsg_ParticleManager_ParticleCanFreeze : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_ParticleFreezeTransitionOverride : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_ParticleSkipToTime : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_ReleaseParticleIndex : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CUserMsg_ParticleManager_SetControlPointModel : google::protobuf::Message { void* vtable[27]; }
class CUserMsg_ParticleManager_SetControlPointSnapshot : google::protobuf::Message { void* vtable[21]; }
class CUserMsg_ParticleManager_SetMaterialOverride : google::protobuf::Message { void* vtable[25]; }
class CUserMsg_ParticleManager_SetParticleFoWProperties : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_SetParticleNamedValueContext : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_SetParticleNamedValueContext_EHandleContext : google::protobuf::Message { void* vtable[23]; }
class CUserMsg_ParticleManager_SetParticleNamedValueContext_FloatContextValue : google::protobuf::Message { void* vtable[21]; }
class CUserMsg_ParticleManager_SetParticleNamedValueContext_TransformContextValue : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_ParticleManager_SetParticleNamedValueContext_VectorContextValue : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_SetParticleShouldCheckFoW : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_SetParticleText : google::protobuf::Message { void* vtable[23]; }
class CUserMsg_ParticleManager_SetSceneObjectGenericFlag : google::protobuf::Message { void* vtable[23]; }
class CUserMsg_ParticleManager_SetSceneObjectTintAndDesat : google::protobuf::Message { void* vtable[21]; }
class CUserMsg_ParticleManager_SetTextureAttribute : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_ParticleManager_SetVData : google::protobuf::Message { void* vtable[25]; }
class CUserMsg_ParticleManager_UpdateEntityPosition : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_UpdateParticleEnt : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_ParticleManager_UpdateParticleFallback : google::protobuf::Message { void* vtable[21]; }
class CUserMsg_ParticleManager_UpdateParticleFwd_OBSOLETE : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_UpdateParticleOffset : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_UpdateParticleOrient_OBSOLETE : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_UpdateParticleSetFrozen : google::protobuf::Message { void* vtable[19]; }
class CUserMsg_ParticleManager_UpdateParticleShouldDraw : google::protobuf::Message { void* vtable[17]; }
class CUserMsg_ParticleManager_UpdateParticleTransform : google::protobuf::Message { void* vtable[21]; }
class CUserMsg_ParticleManager_UpdateParticle_OBSOLETE : google::protobuf::Message { void* vtable[21]; }
class CUserMsg_ParticleManager_t : CUserMessagePB<145,CUserMsg_ParticleManager,1> { void* vtable[5]; }
class CUtlMultiJobProcessor { void* vtable[1]; }
class CUtlSlot {}
class CUtlSymbolDataOps : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CGlobalSymbol,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetGlobalSymbolVariables,-1,int>,79,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CGlobalSymbol,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetGlobalSymbolVariables,-1,int>,79,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseEntity>,CFuncConveyor::NetworkVar_m_hConveyorModels,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseFlex>,CSceneEntity::NetworkVar_m_hActorList,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseModelEntity>,CBarnLight::NetworkVar_m_LightStyleTargets,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseModelEntity>,CBaseModelEntity::NetworkVar_m_ConfigEntitiesToPropagateMaterialDecalsTo,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBaseModelEntity>,CInfoOffscreenPanoramaTexture::NetworkVar_m_TargetEntities,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBasePlayerController>,CTeam::NetworkVar_m_aPlayerControllers,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBasePlayerPawn>,CTeam::NetworkVar_m_aPlayers,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CBasePlayerWeapon>,CPlayer_WeaponServices::NetworkVar_m_hMyWeapons,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CHandle<CPostProcessingVolume>,CPlayer_CameraServices::NetworkVar_m_PostProcessingVolumes,-1,int>,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CTransform,PhysicsRagdollPose_t::NetworkVar_m_Transforms,-1,int>,59,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlString,CBarnLight::NetworkVar_m_LightStyleEvents,-1,int>,53,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlString,CBarnLight::NetworkVar_m_QueuedLightStyleStrings,-1,int>,53,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CInfoOffscreenPanoramaTexture::NetworkVar_m_vecCSSClasses,-1,int>,2,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<CUtlSymbolLarge,CPointClientUIWorldPanel::NetworkVar_m_vecCSSClasses,-1,int>,2,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<QAngle,CRagdollProp::NetworkVar_m_ragAngles,-1,int>,46,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Quaternion,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetQuaternionVariables,-1,int>,4,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Quaternion,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetQuaternionVariables,-1,int>,4,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec2D<float>,shard_model_desc_t::NetworkVar_m_vecPanelVertices,-1,int>,25,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec3D<float>,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetVectorVariables,-1,int>,3,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec3D<float>,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetVectorVariables,-1,int>,3,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec3D<float>,CPathParticleRope::NetworkVar_m_PathNodes_Color,-1,int>,3,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec3D<float>,CPathParticleRope::NetworkVar_m_PathNodes_Position,-1,int>,3,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec3D<float>,CPathParticleRope::NetworkVar_m_PathNodes_TangentIn,-1,int>,3,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec3D<float>,CPathParticleRope::NetworkVar_m_PathNodes_TangentOut,-1,int>,3,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec3D<float>,CRagdollProp::NetworkVar_m_ragPos,-1,int>,14,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<Vec4D<float>,shard_model_desc_t::NetworkVar_m_vInitialPanelVertices,-1,int>,27,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<bool,CPathParticleRope::NetworkVar_m_PathNodes_PinEnabled,-1,int>,6,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<float,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetFloatVariables,-1,int>,1,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<float,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetFloatVariables,-1,int>,1,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<float,CBaseFlex::NetworkVar_m_flexWeight,-1,int>,1,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<float,CPathParticleRope::NetworkVar_m_PathNodes_RadiusScale,-1,int>,1,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<int,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetIntVariables,-1,int>,5,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<int,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetIntVariables,-1,int>,5,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned __int64,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetUInt64Variables,-1,int>,33,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned __int64,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetUInt64Variables,-1,int>,33,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned char,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetByteVariables,-1,int>,8,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned char,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetByteVariables,-1,int>,8,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned int,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetBoolVariables,-1,int>,37,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned int,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetUInt32Variables,-1,int>,37,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned int,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetBoolVariables,-1,int>,37,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned int,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetUInt32Variables,-1,int>,37,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned short,CAnimGraphNetworkedVariables::NetworkVar_m_OwnerOnlyPredNetUInt16Variables,-1,int>,58,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned short,CAnimGraphNetworkedVariables::NetworkVar_m_PredNetUInt16Variables,-1,int>,58,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CNetworkUtlVectorBase<unsigned short,CBarnLight::NetworkVar_m_VisClusters,-1,int>,58,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlStringList,53,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<AutoRoomDoorwayPairs_t,int,CUtlMemory<AutoRoomDoorwayPairs_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CBaseEntity>,int,CUtlMemory<CHandle<CBaseEntity>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CBaseModelEntity>,int,CUtlMemory<CHandle<CBaseModelEntity>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CBasePlayerPawn>,int,CUtlMemory<CHandle<CBasePlayerPawn>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CEnvSoundscapeTriggerable>,int,CUtlMemory<CHandle<CEnvSoundscapeTriggerable>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CFish>,int,CUtlMemory<CHandle<CFish>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CLightEntity>,int,CUtlMemory<CHandle<CLightEntity>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CMoverPathNode>,int,CUtlMemory<CHandle<CMoverPathNode>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CPointCommentaryNode>,int,CUtlMemory<CHandle<CPointCommentaryNode>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CSceneEntity>,int,CUtlMemory<CHandle<CSceneEntity>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CHandle<CSceneListManager>,int,CUtlMemory<CHandle<CSceneListManager>,int> >,13,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CPlayerSlot,int,CUtlMemory<CPlayerSlot,int> >,5,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<CUtlSymbolLarge,int,CUtlMemory<CUtlSymbolLarge,int> >,2,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<ResponseContext_t,int,CUtlMemory<ResponseContext_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<SaveRestoreBlockHeader_t,int,CUtlMemory<SaveRestoreBlockHeader_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<SoundOpvarTraceResult_t,int,CUtlMemory<SoundOpvarTraceResult_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<Vec3D<float>,int,CUtlMemory<Vec3D<float>,int> >,3,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<Vec4D<float>,int,CUtlMemory<Vec4D<float>,int> >,27,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<float,int,CUtlMemory<float,int> >,1,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<globalentity_t,int,CUtlMemory<globalentity_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<int,int,CUtlMemory<int,int> >,5,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<lerpdata_t,int,CUtlMemory<lerpdata_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<magnetted_objects_t,int,CUtlMemory<magnetted_objects_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<modifiedconvars_t,int,CUtlMemory<modifiedconvars_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<ragdollelement_t,int,CUtlMemory<ragdollelement_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<sndopvarlatchdata_t,int,CUtlMemory<sndopvarlatchdata_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<thinkfunc_t,int,CUtlMemory<thinkfunc_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVector<unsigned int,int,CUtlMemory<unsigned int,int> >,37,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVectorEmbeddedNetworkVar<EntityRenderAttribute_t,CBaseModelEntity::NetworkVar_m_vecRenderAttributes,-1,int>,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVectorEmbeddedNetworkVar<SellbackPurchaseEntry_t,CCSPlayer_BuyServices::NetworkVar_m_vecSellbackPurchaseEntries,-1,int>,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorDataOps<CUtlVectorEmbeddedNetworkVar<WeaponPurchaseCount_t,WeaponPurchaseTracker_t::NetworkVar_m_weaponPurchases,-1,int>,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CUtlVectorPtrDataOps<CUtlVector<RelationshipOverride_t,int,CUtlMemory<RelationshipOverride_t,int> >,10,0> : CDefSaveRestoreOps { void* vtable[6]; }
class CVCDIOSignature : CBaseDynamicIOSignature { void* vtable[1]; }
class CVDataFileManager<CNavHullPresetVData> : CBaseVDataFileManager { void* vtable[8]; }
class CVDataFileManager<CNavHullVData> : CBaseVDataFileManager { void* vtable[8]; }
class CVDiagnostic : google::protobuf::Message { void* vtable[17]; }
class CVScriptGameEventListener : CGameEventListener { void* vtable[2]; }
class CVScriptGameSystem : IGameSystem, IVScriptGameSystem { void* vtable[59]; }
class CVariantSaveDataOps : CDefSaveRestoreOps { void* vtable[6]; }
class CViewModelPredictedSimulationTimeGameSystem : IGameSystem { void* vtable[56]; }
class CVisibilityMonitor : CAutoGameSystem { void* vtable[57]; }
class CVoiceGameMgr { void* vtable[1]; }
class CVoiceGameMgrHelper : IVoiceGameMgrHelper { void* vtable[5]; }
class CVoteController : CBaseEntity { void* vtable[228]; }
class CWaterBullet : CBaseAnimGraph { void* vtable[284]; }
class CWeaponAWP : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponAug : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponBaseItem : CCSWeaponBase { void* vtable[432]; }
class CWeaponBaseItem::NetworkVar_m_SequenceCompleteTimer : CountdownTimer { void* vtable[4]; }
class CWeaponBizon : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponCZ75a : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponEconData : CItemDataCache { void* vtable[1]; }
class CWeaponElite : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponFamas : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponFiveSeven : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponG3SG1 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponGalilAR : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponGlock : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponHKP2000 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponList : CAutoGameSystem { void* vtable[56]; }
class CWeaponM249 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponM4A1 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponM4A1Silencer : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponMAC10 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponMP5SD : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponMP7 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponMP9 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponMag7 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponNOVA : CCSWeaponBase { void* vtable[426]; }
class CWeaponNegev : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponP250 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponP90 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponRevolver : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponSCAR20 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponSG556 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponSSG08 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponSawedoff : CCSWeaponBase { void* vtable[426]; }
class CWeaponShield : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponTaser : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponTec9 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponUMP45 : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponUSPSilencer : CCSWeaponBaseGun { void* vtable[429]; }
class CWeaponXM1014 : CCSWeaponBase { void* vtable[426]; }
class CWeaponZoneRepulsor : CCSWeaponBaseGun { void* vtable[429]; }
class CWorkshop_AddSpecialPayment_Request : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_AddSpecialPayment_Response : google::protobuf::internal::ZeroFieldsBase { void* vtable[25]; }
class CWorkshop_GetContributors_Request : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_GetContributors_Response : google::protobuf::Message { void* vtable[21]; }
class CWorkshop_PopulateItemDescriptions_Request : google::protobuf::Message { void* vtable[19]; }
class CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock : google::protobuf::Message { void* vtable[19]; }
class CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_SetItemPaymentRules_Request : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule : google::protobuf::Message { void* vtable[21]; }
class CWorkshop_SetItemPaymentRules_Request_WorkshopDirectPaymentRule : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule : google::protobuf::Message { void* vtable[21]; }
class CWorkshop_SetItemPaymentRules_Response : google::protobuf::internal::ZeroFieldsBase { void* vtable[19]; }
class CWorld : CBaseModelEntity { void* vtable[251]; }
class CWorldGameSystem : CAutoGameSystem { void* vtable[56]; }
class ChangeLogger : CAutoGameSystem { void* vtable[56]; }
class ChickenPathCost : CNavPathCost { void* vtable[10]; }
class ClientJob_EMsgGCCStrike15_v2_GC2ServerReservationUpdate : GCSDK::CGCClientJob { void* vtable[6]; }
class ClientJob_EMsgGCCStrike15_v2_MatchEndRewardDropsNotification : GCSDK::CGCClientJob { void* vtable[6]; }
class ClientJob_EMsgGCCStrike15_v2_ServerNotificationForUserPenalty : GCSDK::CGCClientJob { void* vtable[6]; }
class ClientJob_EMsgGCGiftedItems : GCSDK::CGCClientJob { void* vtable[6]; }
class ConCommand : ConCommandRef {}
class ConCommandRef {}
class ConstraintSoundInfo { void* vtable[1]; }
class CountdownTimer { void* vtable[4]; }
class DNameNode {}
class DNameStatusNode : DNameNode { void* vtable[4]; }
class DataCenterPing : google::protobuf::Message { void* vtable[17]; }
class DeepPlayerMatchEvent : google::protobuf::Message { void* vtable[19]; }
class DeepPlayerStatsEntry : google::protobuf::Message { void* vtable[17]; }
class DefuseBombState : BotState { void* vtable[4]; }
class DetailedSearchStatistic : google::protobuf::Message { void* vtable[17]; }
class EBoneSetup {}
class EntitySpottedState_t { void* vtable[4]; }
class EscapeFromBombState : BotState { void* vtable[4]; }
class EscapeFromFlamesState : BotState { void* vtable[4]; }
class FetchBombState : BotState { void* vtable[4]; }
class FilterDamageType : CBaseFilter { void* vtable[230]; }
class FilterHealth : CBaseFilter { void* vtable[230]; }
class FilterTeam : CBaseFilter { void* vtable[230]; }
class FollowState : BotState { void* vtable[4]; }
class FunFactEvaluator { void* vtable[2]; }
class GCSDK::CGCClient { void* vtable[3]; }
class GCSDK::CGCClientJob : GCSDK::CJob {}
class GCSDK::CGCClientSharedObjectCache : GCSDK::CSharedObjectCache { void* vtable[9]; }
class GCSDK::CGCClientSharedObjectTypeCache : GCSDK::CSharedObjectTypeCache { void* vtable[7]; }
class GCSDK::CGCSOCacheSubscribedJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOCacheSubscriptionCheck : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOCacheUnsubscribedJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOCreateJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSODestroyJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOUpdateJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOUpdateMultipleJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CJob { void* vtable[4]; }
class GCSDK::CProtoBufGCClientSendHandler : GCSDK::CProtoBufMsgBase::IProtoBufSendHandler { void* vtable[1]; }
class GCSDK::CProtoBufMsg<CMsgClientHello> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgClientWelcome> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgConnectionStatus> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgGCCStrike15_v2_GC2ServerReservationUpdate> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgGCCStrike15_v2_MatchEndRewardDropsNotification> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgGCCStrike15_v2_MatchEndRunRewardDrops> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgGCCStrike15_v2_MatchmakingServerReservationResponse> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgGCCStrike15_v2_ServerNotificationForUserPenalty> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgGCServerVersionUpdated> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgIncrementKillCountAttribute> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgItemAcknowledged> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionCheck> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOMultipleObjects> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOSingleObject> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgServerHello> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsgBase::IProtoBufSendHandler {}
class GCSDK::CProtoBufMsgMemoryPool<CMsgClientHello> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgClientWelcome> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgConnectionStatus> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgGCCStrike15_v2_GC2ServerReservationUpdate> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgGCCStrike15_v2_MatchEndRewardDropsNotification> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgGCCStrike15_v2_MatchEndRunRewardDrops> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgGCCStrike15_v2_MatchmakingServerReservationResponse> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgGCCStrike15_v2_ServerNotificationForUserPenalty> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgGCServerVersionUpdated> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgIncrementKillCountAttribute> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgItemAcknowledged> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionCheck> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgServerHello> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufNetPacket : GCSDK::IMsgNetPacket { void* vtable[16]; }
class GCSDK::CProtoBufSharedObject<CSOAccountSeasonalOperation,41> : GCSDK::CProtoBufSharedObjectBase { void* vtable[10]; }
class GCSDK::CProtoBufSharedObject<CSOEconEquipSlot,3> : GCSDK::CProtoBufSharedObjectBase { void* vtable[10]; }
class GCSDK::CProtoBufSharedObject<CSOPersonaDataPublic,2> : GCSDK::CProtoBufSharedObjectBase { void* vtable[10]; }
class GCSDK::CProtoBufSharedObject<CSOQuestProgress,46> : GCSDK::CProtoBufSharedObjectBase { void* vtable[10]; }
class GCSDK::CProtoBufSharedObjectBase : GCSDK::CSharedObject {}
class GCSDK::CRefCount { void* vtable[2]; }
class GCSDK::CSharedObject { void* vtable[9]; }
class GCSDK::CSharedObjectCache { void* vtable[9]; }
class GCSDK::CSharedObjectTypeCache { void* vtable[7]; }
class GCSDK::CStructNetPacket : GCSDK::IMsgNetPacket { void* vtable[16]; }
class GCSDK::CWorkThread : CThread { void* vtable[9]; }
class GCSDK::CWorkThreadPool { void* vtable[2]; }
class GCSDK::IMsgNetPacket : GCSDK::CRefCount {}
class GCSDK::ISharedObjectListener {}
class GameEvent_RegisterHookupGameSystem : CStartupHookGameSystem<GameEvent_RegisterInternal,17408> { void* vtable[56]; }
class GameServerPing : google::protobuf::Message { void* vtable[19]; }
class GameSessionConfiguration_t : CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration> { void* vtable[17]; }
class GlobalStatistics : google::protobuf::Message { void* vtable[17]; }
class HideState : BotState { void* vtable[4]; }
class HostagePathCost : CNavPathCost { void* vtable[10]; }
class HuntState : BotState { void* vtable[4]; }
class IAnimGraphNetworkedVariables {}
class IAnimGraphSequenceFinishedListener {}
class IAnimGraphTraceProvider {}
class IAnimTagListener { void* vtable[2]; }
class IAnimationDebugRenderer { void* vtable[8]; }
class IAppSystem {}
class IAttachmentOverride {}
class IBaseInterface { void* vtable[1]; }
class IBaseSequence {}
class IBreakableSystem { void* vtable[2]; }
class IBtAgent { void* vtable[107]; }
class ICSPlace { void* vtable[2]; }
class ICSWeaponSystem {}
class IChoreoEventCallback {}
class IChoreoServices { void* vtable[13]; }
class ICommandCallback {}
class ICommandCompletionCallback {}
class ICompressorService { void* vtable[9]; }
class IComputeWorldOriginCallback {}
class ICurveDataAccessor {}
class ICustomNavGen : IAppSystem {}
class IDebugVisualizer { void* vtable[6]; }
class IDecalEmitterSystem {}
class IDecoyProjectile { void* vtable[2]; }
class IDemoMessage { void* vtable[6]; }
class IEconItemAttributeDefinition {}
class IEconItemAttributeIterator { void* vtable[5]; }
class IEconItemDefinition {}
class IEconItemInterface { void* vtable[27]; }
class IEconItemSchema {}
class IEconItemSetDefinition {}
class IEconItemSystem {}
class IEconItemUntypedAttributeIterator : IEconItemAttributeIterator {}
class IEconLootListDefinition {}
class IEconTool { void* vtable[6]; }
class IEngineService : IAppSystem { void* vtable[23]; }
class IEntity2Networkables { void* vtable[6]; }
class IEntity2SaveRestore {}
class IEntityDataInstantiator { void* vtable[4]; }
class IEntityFindFilter {}
class IEntityIONotify {}
class IEntityListener {}
class IEntityResourceManifestBuilder {}
class IErrorListener {}
class IEventRegisterCallback {}
class IFlattenedSerializerSpewFunc { void* vtable[3]; }
class IFlexSceneFileManager {}
class IGameConfiguration : ISource2ClientConfig, ISource2ServerConfig {}
class IGameEvent { void* vtable[34]; }
class IGameEventListener2 { void* vtable[2]; }
class IGameEventManager2 : IBaseInterface {}
class IGameMessageDelegateHook {}
class IGameNetworkStringTables {}
class IGameSpawnGroupMgr {}
class IGameStatTracker {}
class IGameSystem { void* vtable[56]; }
class IGameSystemEventDispatcher {}
class IGameSystemFactory {}
class IGapHost_Cursor : IGapHost_ExecLog {}
class IGapHost_ExecLog {}
class IGapHost_GameEntity {}
class IGapHost_Unknown {}
class IGapHost_YieldingCursor : IGapHost_Cursor {}
class IGapTypeQueriesForScope {}
class IGapTypeQueryRegistrationForScope {}
class IGlobalEntityMgr {}
class IHLTVDirector { void* vtable[19]; }
class IHasAttributes {}
class IHostageRescueZone { void* vtable[2]; }
class IInputHandler {}
class IInterpolatedVar { void* vtable[54]; }
class IKV3TransferInterface_EHandle_Load {}
class IKV3TransferInterface_EHandle_Save {}
class IKV3TransferInterface_GameTime_Load {}
class IKV3TransferInterface_GameTime_Save {}
class IKV3TransferInterface_ResourceLoad {}
class IKV3TransferInterface_UtlSymbolLarge {}
class ILagCompensation {}
class ILagCompensationManager {}
class ILoadingSpawnGroup {}
class ILoopMode {}
class ILoopModeFactory {}
class ILoopModeGameSharedState {}
class IMobileEventListener { void* vtable[4]; }
class IMotionEvent {}
class IMultipleWorkerJob { void* vtable[2]; }
class INavDraw {}
class INavDrawArea {}
class INavDrawMesh {}
class INavEditor {}
class INavEntityInterface {}
class INavGameTest : IAppSystem {}
class INavLinkManager {}
class INavMarkupManager { void* vtable[3]; }
class INavMeshGameEventListener {}
class INavMovableMeshListener {}
class INavObstacle { void* vtable[15]; }
class INavObstructionManager : INavMovableMeshListener {}
class INavPathCost {}
class INavPhysicsInterface {}
class INetworkFieldScratchData { void* vtable[5]; }
class INetworkSerializerBindingBuildFilter { void* vtable[5]; }
class INetworkStateChangedRouter {}
class INotify {}
class IPVSManager {}
class IParticleEHandleHelper {}
class IParticleSystemQuery : IParticleEHandleHelper {}
class IPathfindTest {}
class IPhysicsCollisionData {}
class IPhysicsEntitySolverAutoList { void* vtable[2]; }
class IPhysicsSpline {}
class IPhysicsWorldEventListener {}
class IPlayerCommandQueue {}
class IPlayerPickupVPhysics {}
class IPolymorphicMetadataHelper {}
class IPoseAccessor { void* vtable[9]; }
class IPositionWatcher : IWatcherCallback {}
class IPredictionSuppressEffects {}
class IPrerequisite { void* vtable[6]; }
class IProtobufBinding {}
class IPulseComponentEntity {}
class IPulseCursorListener {}
class IPulseGraphDef {}
class IPulseInstanceLoadAPI {}
class IPulseInstanceSaveAPI {}
class IRecipientFilter { void* vtable[5]; }
class IRefCounted { void* vtable[3]; }
class IRenderBoundsWorldSpaceOverride {}
class IRenderHandler {}
class IResponseFilter {}
class IResponseSystem { void* vtable[7]; }
class IRestore { void* vtable[82]; }
class ISave { void* vtable[113]; }
class ISaveRestoreBlockHandler {}
class ISaveRestoreBlockSet : ISaveRestoreBlockHandler {}
class ISaveRestoreFileData {}
class ISaveRestoreFileSystem {}
class ISaveRestoreOps {}
class ISceneAnimatableProceduralBoneTransforms {}
class ISceneManager {}
class ISceneViewDebugOverlaysListener {}
class ISchemaAttributeType { void* vtable[11]; }
class ISchemaAttributeTypeBase<CAttribute_String> : ISchemaAttributeType { void* vtable[13]; }
class ISchemaAttributeTypeBase<Vec3D<float> > : ISchemaAttributeType { void* vtable[13]; }
class ISchemaAttributeTypeBase<float> : ISchemaAttributeType { void* vtable[13]; }
class ISchemaAttributeTypeBase<unsigned int> : ISchemaAttributeType { void* vtable[13]; }
class IScrubSystemEventListener {}
class ISequence : IBaseSequence {}
class ISequenceSetup {}
class IServerEntitySubclassUtils : IAppSystem {}
class IServerToolsInfo : IAppSystem { void* vtable[12]; }
class IShardTransformPosPanelToWorld {}
class IShatterGlassShardMgr {}
class ISimulationThinkManager {}
class ISkeletonAnimationController {}
class ISmokeGrenadeList { void* vtable[2]; }
class ISource2ClientConfig : IAppSystem {}
class ISource2GameClients : IAppSystem {}
class ISource2GameEntities : IAppSystem { void* vtable[17]; }
class ISource2Server : IAppSystem {}
class ISource2ServerConfig : IAppSystem {}
class ISpawnGroupEntityFilter { void* vtable[2]; }
class ISteamUnifiedMessageListener {}
class IStreamEntitiesFromFileCompletion {}
class ITempEntsSystem {}
class IToolGameSimulationAPI {}
class IToolGameSimulationAPI_IPhysicsGrab {}
class IToolObject { void* vtable[8]; }
class IToolsResourceListener {}
class IToolsResourcePreReloadListener {}
class IUGCAddonPathResolver {}
class IVDataResourceListener {}
class IVPhysicsWatcher : IWatcherCallback {}
class IVScriptGameSystem {}
class IVoiceGameMgrHelper { void* vtable[5]; }
class IWatcherCallback { void* vtable[1]; }
class IdleState : BotState { void* vtable[4]; }
class IntervalTimer { void* vtable[4]; }
class InvestigateNoiseState : BotState { void* vtable[4]; }
class IpAddressMask : google::protobuf::Message { void* vtable[17]; }
class MLDemoHeader : google::protobuf::Message { void* vtable[17]; }
class MLDict : google::protobuf::Message { void* vtable[17]; }
class MLEvent : google::protobuf::Message { void* vtable[21]; }
class MLGameState : google::protobuf::Message { void* vtable[17]; }
class MLMatchState : google::protobuf::Message { void* vtable[17]; }
class MLPlayerState : google::protobuf::Message { void* vtable[17]; }
class MLRoundState : google::protobuf::Message { void* vtable[19]; }
class MLTick : google::protobuf::Message { void* vtable[19]; }
class MLWeaponState : google::protobuf::Message { void* vtable[19]; }
class MatchEndItemUpdates : google::protobuf::Message { void* vtable[19]; }
class MoveToPlayAreaState : BotState { void* vtable[4]; }
class MoveToState : BotState { void* vtable[4]; }
class OpenDoorState : BotState { void* vtable[4]; }
class OperationalStatisticDescription : google::protobuf::Message { void* vtable[27]; }
class OperationalStatisticElement : google::protobuf::Message { void* vtable[17]; }
class OperationalStatisticsPacket : google::protobuf::Message { void* vtable[17]; }
class OperationalVarValue : google::protobuf::Message { void* vtable[19]; }
class PathCost : CNavPathCost { void* vtable[10]; }
class PickupHostageState : BotState { void* vtable[4]; }
class PlantBombState : BotState { void* vtable[4]; }
class PlayerCommendationInfo : google::protobuf::Message { void* vtable[19]; }
class PlayerDecalDigitalSignature : google::protobuf::Message { void* vtable[19]; }
class PlayerMedalsInfo : google::protobuf::Message { void* vtable[17]; }
class PlayerQuestData : google::protobuf::Message { void* vtable[19]; }
class PlayerQuestData_QuestItemData : google::protobuf::Message { void* vtable[17]; }
class PlayerRankingInfo : google::protobuf::Message { void* vtable[17]; }
class PlayerRankingInfo_PerMapRank : google::protobuf::Message { void* vtable[17]; }
class ProtoFlattenedSerializerField_t : google::protobuf::Message { void* vtable[19]; }
class ProtoFlattenedSerializerField_t_polymorphic_field_t : google::protobuf::Message { void* vtable[19]; }
class ProtoFlattenedSerializer_t : google::protobuf::Message { void* vtable[23]; }
class RR::CApplyContextOperator { void* vtable[1]; }
class RR::CDecrementOperator : RR::CApplyContextOperator { void* vtable[1]; }
class RR::CIncrementOperator : RR::CApplyContextOperator { void* vtable[1]; }
class RR::CToggleOperator : RR::CApplyContextOperator { void* vtable[1]; }
class ScoreLeaderboardData : google::protobuf::Message { void* vtable[17]; }
class ScoreLeaderboardData_AccountEntries : google::protobuf::Message { void* vtable[17]; }
class ScoreLeaderboardData_Entry : google::protobuf::Message { void* vtable[17]; }
class ServerHltvInfo : google::protobuf::Message { void* vtable[17]; }
class Source1LegacyGameEventList_t : CNetMessagePB<205,CMsgSource1LegacyGameEventList,10,1,1> { void* vtable[5]; }
class Source1LegacyGameEvent_t : CNetMessagePB<207,CMsgSource1LegacyGameEvent,5,1,1> { void* vtable[5]; }
class SpawnPoint : CServerOnlyPointEntity { void* vtable[228]; }
class TEArmorRicochet_GameEvent_t : CNetMessagePB<401,CMsgTEArmorRicochet,5,0,1> { void* vtable[5]; }
class TEBSPDecal_GameEvent_t : CNetMessagePB<407,CMsgTEBSPDecal,5,0,1> { void* vtable[5]; }
class TEBeamEntPoint_GameEvent_t : CNetMessagePB<402,CMsgTEBeamEntPoint,5,0,1> { void* vtable[5]; }
class TEBeamEnts_GameEvent_t : CNetMessagePB<403,CMsgTEBeamEnts,5,0,1> { void* vtable[5]; }
class TEBeamPoints_GameEvent_t : CNetMessagePB<404,CMsgTEBeamPoints,5,0,1> { void* vtable[5]; }
class TEBeamRing_GameEvent_t : CNetMessagePB<405,CMsgTEBeamRing,5,0,1> { void* vtable[5]; }
class TEBloodStream_GameEvent_t : CNetMessagePB<418,CMsgTEBloodStream,5,0,1> { void* vtable[5]; }
class TEBubbleTrail_GameEvent_t : CNetMessagePB<409,CMsgTEBubbleTrail,5,0,1> { void* vtable[5]; }
class TEBubbles_GameEvent_t : CNetMessagePB<408,CMsgTEBubbles,5,0,1> { void* vtable[5]; }
class TEDecal_GameEvent_t : CNetMessagePB<410,CMsgTEDecal,5,0,1> { void* vtable[5]; }
class TEDust_GameEvent_t : CNetMessagePB<420,CMsgTEDust,5,0,1> { void* vtable[5]; }
class TEEffectDispatch_GameEvent_t : CNetMessagePB<400,CMsgTEEffectDispatch,5,0,1> { void* vtable[5]; }
class TEEnergySplash_GameEvent_t : CNetMessagePB<412,CMsgTEEnergySplash,5,0,1> { void* vtable[5]; }
class TEExplosion_GameEvent_t : CNetMessagePB<419,CMsgTEExplosion,5,0,1> { void* vtable[5]; }
class TEFirebullets_GameEvent_t : CNetMessagePB<452,CMsgTEFireBullets,5,0,1> { void* vtable[5]; }
class TEFizz_GameEvent_t : CNetMessagePB<413,CMsgTEFizz,5,0,1> { void* vtable[5]; }
class TEGlowSprite_GameEvent_t : CNetMessagePB<415,CMsgTEGlowSprite,5,0,1> { void* vtable[5]; }
class TEImpact_GameEvent_t : CNetMessagePB<416,CMsgTEImpact,5,0,1> { void* vtable[5]; }
class TELargeFunnel_GameEvent_t : CNetMessagePB<421,CMsgTELargeFunnel,5,0,1> { void* vtable[5]; }
class TEMuzzleFlash_GameEvent_t : CNetMessagePB<417,CMsgTEMuzzleFlash,5,0,1> { void* vtable[5]; }
class TEPhysicsProp_GameEvent_t : CNetMessagePB<423,CMsgTEPhysicsProp,5,0,1> { void* vtable[5]; }
class TEPlayerDecal_GameEvent_t : CNetMessagePB<424,CMsgTEPlayerDecal,5,0,1> { void* vtable[5]; }
class TEProjectedDecal_GameEvent_t : CNetMessagePB<425,CMsgTEProjectedDecal,5,0,1> { void* vtable[5]; }
class TESmoke_GameEvent_t : CNetMessagePB<426,CMsgTESmoke,5,0,1> { void* vtable[5]; }
class TESparks_GameEvent_t : CNetMessagePB<422,CMsgTESparks,5,0,1> { void* vtable[5]; }
class TEWorldDecal_GameEvent_t : CNetMessagePB<411,CMsgTEWorldDecal,5,0,1> { void* vtable[5]; }
class TournamentEvent : google::protobuf::Message { void* vtable[21]; }
class TournamentMatchSetup : google::protobuf::Message { void* vtable[17]; }
class TournamentPlayer : google::protobuf::Message { void* vtable[29]; }
class TournamentTeam : google::protobuf::Message { void* vtable[19]; }
class UseEntityState : BotState { void* vtable[4]; }
class VacNetShot : google::protobuf::Message { void* vtable[27]; }
class WatchableMatchInfo : google::protobuf::Message { void* vtable[21]; }
class WeaponPurchaseTracker_t { void* vtable[4]; }
class XpProgressData : google::protobuf::Message { void* vtable[19]; }
class charNode : DNameNode { void* vtable[4]; }
class pDNameNode : DNameNode { void* vtable[4]; }
class pairNode : DNameNode { void* vtable[4]; }
class pcharNode : DNameNode { void* vtable[4]; }
class sky3dparams_t::NetworkVar_fog : fogparams_t { void* vtable[4]; }
struct AmmoTypeInfo_t { void* vtable[3]; }
struct CPhysicsGameSystem::PhysicsWorld_t { void* vtable[1]; }
struct CSMatchStats_t : CSPerRoundStats_t { void* vtable[4]; }
struct CSPerRoundStats_t { void* vtable[1]; }
struct DemoTrackBase_t<Quaternion> {}
struct DemoTrackBase_t<Vec3D<float> > {}
struct DemoTrackBase_t<float> {}
struct EntityRenderAttribute_t { void* vtable[1]; }
struct FakeEntityDerivedA_t : FakeEntity_t { void* vtable[2]; }
struct FakeEntityDerivedB_t : FakeEntityDerivedA_t { void* vtable[2]; }
struct FakeEntity_t { void* vtable[2]; }
struct GameAmmoTypeInfo_t : AmmoTypeInfo_t { void* vtable[3]; }
struct IVTableIndexCalculator { void* vtable[65]; }
struct PhysicsRagdollPose_t { void* vtable[4]; }
struct PredictedDamageTag_t { void* vtable[1]; }
struct RnQueryAttr_t : RnQueryShapeAttr_t {}
struct RnQueryShapeAttr_t {}
struct RotationTrack_t : DemoTrackBase_t<Quaternion> { void* vtable[1]; }
struct ScaleTrack_t : DemoTrackBase_t<float> { void* vtable[1]; }
struct SellbackPurchaseEntry_t { void* vtable[1]; }
struct SimpleConstraintSoundProfile { void* vtable[1]; }
struct TranslationTrack_t : DemoTrackBase_t<Vec3D<float> > { void* vtable[1]; }
struct VDataInitInfo_t : IErrorListener { void* vtable[6]; }
struct VPhysicsCollisionAttribute_t { void* vtable[4]; }
struct ViewAngleServerChange_t { void* vtable[1]; }
struct WeaponPurchaseCount_t { void* vtable[1]; }
struct audioparams_t {}
struct fogparams_t { void* vtable[4]; }
struct fogplayerparams_t {}
struct locksound_t { void* vtable[1]; }
struct shard_model_desc_t { void* vtable[5]; }
struct sky3dparams_t { void* vtable[4]; }
struct sndopvarlatchdata_t { void* vtable[4]; }
