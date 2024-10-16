class C2S_CONNECTION_Message : google::protobuf::Message { void* vtable[17]; }
class C2S_CONNECTION_Message_t : CNetMessagePB<-1,C2S_CONNECTION_Message,0,1,0> { void* vtable[5]; }
class C2S_CONNECT_Message : google::protobuf::Message { void* vtable[17]; }
class C2S_CONNECT_Message_t : CNetMessagePB<-1,C2S_CONNECT_Message,0,1,0> { void* vtable[5]; }
class CAppSystemDict { void* vtable[6]; }
class CAsyncCallJob<CHLTVServerAsync,CHLTVServerAsync::RunFrameJob_t> : CThreadedJobWithDependencies { void* vtable[9]; }
class CAsyncCallJob<CServerSideClient,CServerSideClient::SendSnapshotJob_Empty_t> : CThreadedJobWithDependencies { void* vtable[9]; }
class CAsyncCallJob<CServerSideClient,CServerSideClient::SendSnapshotJob_HltvReplay_t> : CThreadedJobWithDependencies { void* vtable[9]; }
class CAsyncCallJob<CServerSideClient,CServerSideClient::SendSnapshotJob_HltvSource_t> : CThreadedJobWithDependencies { void* vtable[9]; }
class CAsyncShaderCompilePrequisite : IPrerequisite, IRenderAsyncShaderCompileListener { void* vtable[6]; }
class CAttributeDictSaveDataOps : CDefSaveRestoreOps { void* vtable[6]; }
class CBannedUsersFilter : IBannedUsersFilter { void* vtable[5]; }
class CBaseAppSystem<IAppSystem> : IAppSystem {}
class CBaseAppSystem<IApplication> : IApplication {}
class CBaseAppSystem<IBenchmarkService> : IBenchmarkService {}
class CBaseAppSystem<IEngineGameUI> : IEngineGameUI {}
class CBaseAppSystem<IEngineService> : IEngineService {}
class CBaseAppSystem<IEngineServiceMgr> : IEngineServiceMgr {}
class CBaseAppSystem<IGameEventSystem> : IGameEventSystem {}
class CBaseAppSystem<IGameResourceService> : IGameResourceService {}
class CBaseAppSystem<IGameUIFuncs> : IGameUIFuncs {}
class CBaseAppSystem<IGameUIService> : IGameUIService {}
class CBaseAppSystem<IHostStateMgr> : IHostStateMgr {}
class CBaseAppSystem<IInputService> : IInputService {}
class CBaseAppSystem<IKeyValueCache> : IKeyValueCache {}
class CBaseAppSystem<IMapListService> : IMapListService {}
class CBaseAppSystem<INetSupport> : INetSupport {}
class CBaseAppSystem<INetworkClientService> : INetworkClientService {}
class CBaseAppSystem<INetworkP2PService> : INetworkP2PService {}
class CBaseAppSystem<INetworkServerService> : INetworkServerService {}
class CBaseAppSystem<INetworkService> : INetworkService {}
class CBaseAppSystem<INetworkStringTableContainer> : INetworkStringTableContainer {}
class CBaseAppSystem<IRenderService> : IRenderService {}
class CBaseAppSystem<ISoundService> : ISoundService {}
class CBaseAppSystem<ISource2ClientConfig> : ISource2ClientConfig {}
class CBaseAppSystem<ISource2ServerConfig> : ISource2ServerConfig {}
class CBaseAppSystem<ISplitScreenService> : ISplitScreenService {}
class CBaseAppSystem<IStatsService> : IStatsService {}
class CBaseAppSystem<IToolService> : IToolService {}
class CBaseAppSystem<IVEngineClient2> : IVEngineClient2 {}
class CBaseAppSystem<IVEngineServer2> : IVEngineServer2 {}
class CBaseAppSystem<IVProfExport> : IVProfExport {}
class CBaseAppSystem<IVProfService> : IVProfService {}
class CBaseClientSpawnGroupCreatePrerequisite : IPrerequisite {}
class CBaseCmdKeyValues<CCLCMsg_CmdKeyValues> : CCLCMsg_CmdKeyValues { void* vtable[17]; }
class CBaseCmdKeyValues<CSVCMsg_CmdKeyValues> : CSVCMsg_CmdKeyValues { void* vtable[17]; }
class CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration> : CSVCMsg_GameSessionConfiguration { void* vtable[17]; }
class CBaseEngineService<IBenchmarkService> : CTier4AppSystem<IBenchmarkService,0> { void* vtable[24]; }
class CBaseEngineService<IEngineService> : CTier4AppSystem<IEngineService,0> { void* vtable[23]; }
class CBaseEngineService<IGameResourceService> : CTier4AppSystem<IGameResourceService,0> { void* vtable[44]; }
class CBaseEngineService<IGameUIService> : CTier4AppSystem<IGameUIService,0> { void* vtable[39]; }
class CBaseEngineService<IInputService> : CTier4AppSystem<IInputService,0> { void* vtable[64]; }
class CBaseEngineService<IMapListService> : CTier4AppSystem<IMapListService,0> { void* vtable[26]; }
class CBaseEngineService<INetworkClientService> : CTier4AppSystem<INetworkClientService,0> { void* vtable[62]; }
class CBaseEngineService<INetworkP2PService> : CTier4AppSystem<INetworkP2PService,0> { void* vtable[33]; }
class CBaseEngineService<INetworkServerService> : CTier4AppSystem<INetworkServerService,0> { void* vtable[46]; }
class CBaseEngineService<INetworkService> : CTier4AppSystem<INetworkService,0> { void* vtable[24]; }
class CBaseEngineService<IRenderService> : CTier4AppSystem<IRenderService,0> { void* vtable[37]; }
class CBaseEngineService<ISoundService> : CTier4AppSystem<ISoundService,0> { void* vtable[36]; }
class CBaseEngineService<ISplitScreenService> : CTier4AppSystem<ISplitScreenService,0> { void* vtable[43]; }
class CBaseEngineService<IStatsService> : CTier4AppSystem<IStatsService,0> { void* vtable[27]; }
class CBaseEngineService<IToolService> : CTier4AppSystem<IToolService,0> { void* vtable[94]; }
class CBaseEngineService<IVProfService> : CTier4AppSystem<IVProfService,0> { void* vtable[25]; }
class CBaseGameUIInputHandler : IInputHandler {}
class CBaseServerSpawnGroupCreatePrerequisite : IPrerequisite {}
class CBaseSpawnGroup : ISpawnGroup, IComputeWorldOriginCallback, IGameResourceManifestLoadCompletionCallback { void* vtable[45]; }
class CBenchmarkService : CBaseEngineService<IBenchmarkService> { void* vtable[24]; }
class CBidirMsg_RebroadcastGameEvent : google::protobuf::Message { void* vtable[19]; }
class CBidirMsg_RebroadcastGameEvent_t : CNetMessagePB<16,CBidirMsg_RebroadcastGameEvent,5,1,1> { void* vtable[5]; }
class CBidirMsg_RebroadcastSource : google::protobuf::Message { void* vtable[21]; }
class CBidirMsg_RebroadcastSource_t : CNetMessagePB<17,CBidirMsg_RebroadcastSource,5,1,1> { void* vtable[5]; }
class CBreakpadPassiveAssertionFailureListener : IAssertionFailureListener { void* vtable[3]; }
class CBroadcastPlayer : IDemoPlayer, IBroadcastPlayer { void* vtable[42]; }
class CBugService : CBaseEngineService<IEngineService>, IVConCommDataReceived, IScreenshotCallback, IVoiceTarget { void* vtable[23]; }
class CCLCMsg_BaselineAck : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_BaselineAck_t : CNetMessagePB<23,CCLCMsg_BaselineAck,16,1,0> { void* vtable[5]; }
class CCLCMsg_ClientInfo : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_ClientInfo_t : CNetMessagePB<20,CCLCMsg_ClientInfo,10,1,0> { void* vtable[5]; }
class CCLCMsg_CmdKeyValues : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_CmdKeyValues_t : CNetMessagePB<34,CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>,9,1,0> { void* vtable[5]; }
class CCLCMsg_Diagnostic : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_Diagnostic_t : CNetMessagePB<37,CCLCMsg_Diagnostic,0,1,0> { void* vtable[5]; }
class CCLCMsg_FileCRCCheck : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_FileCRCCheck_t : CNetMessagePB<26,CCLCMsg_FileCRCCheck,10,1,0> { void* vtable[5]; }
class CCLCMsg_HltvFixupOperatorTick : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_HltvReplay : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_ListenEvents : google::protobuf::Message { void* vtable[27]; }
class CCLCMsg_LoadingProgress : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_LoadingProgress_t : CNetMessagePB<27,CCLCMsg_LoadingProgress,10,1,0> { void* vtable[5]; }
class CCLCMsg_Move : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_Move_t : CNetMessagePB<21,CCLCMsg_Move,8,0,0> { void* vtable[5]; }
class CCLCMsg_RconServerDetails : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_RequestPause : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_RequestPause_t : CNetMessagePB<33,CCLCMsg_RequestPause,0,1,0> { void* vtable[5]; }
class CCLCMsg_RespondCvarValue : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_RespondCvarValue_t : CNetMessagePB<25,CCLCMsg_RespondCvarValue,0,1,0> { void* vtable[5]; }
class CCLCMsg_ServerStatus : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_ServerStatus_t : CNetMessagePB<31,CCLCMsg_ServerStatus,0,1,0> { void* vtable[5]; }
class CCLCMsg_SplitPlayerConnect : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_SplitPlayerConnect_t : CNetMessagePB<28,CCLCMsg_SplitPlayerConnect,10,1,0> { void* vtable[5]; }
class CCLCMsg_SplitPlayerDisconnect : google::protobuf::Message { void* vtable[17]; }
class CCLCMsg_SplitPlayerDisconnect_t : CNetMessagePB<30,CCLCMsg_SplitPlayerDisconnect,10,1,0> { void* vtable[5]; }
class CCLCMsg_VoiceData : google::protobuf::Message { void* vtable[17]; }
class CCallback<CSteam3Client,ClientGameServerDeny_t,0> : CCallbackImpl<16> { void* vtable[4]; }
class CCallback<CSteam3Client,GameOverlayActivated_t,0> : CCallbackImpl<12> { void* vtable[4]; }
class CCallback<CSteam3Client,GameServerChangeRequested_t,0> : CCallbackImpl<128> { void* vtable[4]; }
class CCallback<CSteam3Client,LowBatteryPower_t,0> : CCallbackImpl<1> { void* vtable[4]; }
class CCallback<CSteam3Client,PersonaStateChange_t,0> : CCallbackImpl<16> { void* vtable[4]; }
class CCallback<CSteam3Client,SocketStatusCallback_t,0> : CCallbackImpl<20> { void* vtable[4]; }
class CCallback<CSteam3ServerS1,GSPolicyResponse_t,1> : CCallbackImpl<1> { void* vtable[4]; }
class CCallback<CSteam3ServerS1,SteamServerConnectFailure_t,1> : CCallbackImpl<8> { void* vtable[4]; }
class CCallback<CSteam3ServerS1,SteamServersConnected_t,1> : CCallbackImpl<1> { void* vtable[4]; }
class CCallback<CSteam3ServerS1,SteamServersDisconnected_t,1> : CCallbackImpl<4> { void* vtable[4]; }
class CCallback<CSteam3ServerS1,ValidateAuthTicketResponse_t,1> : CCallbackImpl<20> { void* vtable[4]; }
class CCallbackBase {}
class CCallbackImpl<128> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<12> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<16> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<1> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<20> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<24> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<4> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<8> : CCallbackBase { void* vtable[4]; }
class CChangelevelGameClientPrerequisite : IPrerequisite { void* vtable[6]; }
class CClientFrame { void* vtable[2]; }
class CClientFrameManager { void* vtable[1]; }
class CClientOnlyServerConfig : CDefaultServerConfig { void* vtable[29]; }
class CColorizedLoggingListener : CSimpleLoggingListener { void* vtable[5]; }
class CConCommandMemberAccessor<CBannedUsersFilter> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CBugService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CGameUIService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CInputService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CLog> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CMapListService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CNetworkClientService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CNetworkP2PService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CNetworkServerService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CRenderService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CRenderingWorldSession> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CScreenshotService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CSoundService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CSplitScreenService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CStatsService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConCommandMemberAccessor<CVProfService> : ConCommand, ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CConnectGameClientPrerequisite : IPrerequisite { void* vtable[6]; }
class CConnectRelayPrerequisite : IPrerequisite { void* vtable[6]; }
class CConsoleProcessorForTestScripts : ITestScriptCommandProcessor { void* vtable[1]; }
class CCreateGameClientPrerequisite : IPrerequisite { void* vtable[6]; }
class CDebugVisualizerAbsTime : IDebugVisualizer { void* vtable[6]; }
class CDebugVisualizerMgr : IDebugVisualizerMgr { void* vtable[9]; }
class CDefSaveRestoreOps : ISaveRestoreOps {}
class CDefaultClientConfig : CBaseAppSystem<ISource2ClientConfig> { void* vtable[18]; }
class CDefaultServerConfig : CBaseAppSystem<ISource2ServerConfig> { void* vtable[29]; }
class CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::AppendSpawnGroupMessageCall_t,empty_t> : CDelayedCallBase<CHLTVServerAsync> {}
class CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::DumpMemCall_t,empty_t> : CDelayedCallBase<CHLTVServerAsync> {}
class CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::OnStartedRecordingReverseCall_t,empty_t> : CDelayedCallBase<CHLTVServerAsync> {}
class CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::PrintBroadcastTVStatusCall_t,empty_t> : CDelayedCallBase<CHLTVServerAsync> {}
class CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::StartBroadcastCall_t,empty_t> : CDelayedCallBase<CHLTVServerAsync> {}
class CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::WriteDemoMessageCall_t,empty_t> : CDelayedCallBase<CHLTVServerAsync> {}
class CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,ITvStreamSource::StartAutoRecordingCall_t,empty_t> : CDelayedCallBase<CHLTVServerAsync> {}
class CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,ITvStreamSource::StartRecordingCall_t,empty_t> : CDelayedCallBase<CHLTVServerAsync> { void* vtable[2]; }
class CDelayedCall2<CNetworkGameServerBase,CHLTVServer,CHLTVServer::PrintTVStatusCall_t,empty_t> : CDelayedCallBase<CNetworkGameServerBase> { void* vtable[2]; }
class CDelayedCall2<CNetworkGameServerBase,CNetworkGameServerBase,CNetworkGameServerBase::ClientConnectDelayedCall_t,empty_t> : CDelayedCallBase<CNetworkGameServerBase> { void* vtable[2]; }
class CDelayedCall2<CNetworkGameServerBase,CNetworkGameServerBase,ITvStreamSource::StartAutoRecordingCall_t,empty_t> : CDelayedCallBase<CNetworkGameServerBase> { void* vtable[2]; }
class CDelayedCall2<CNetworkGameServerBase,CNetworkGameServerBase,ITvStreamSource::StartRecordingCall_t,empty_t> : CDelayedCallBase<CNetworkGameServerBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CHLTVClient,CHLTVClient::PrintTVStatusCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClient,CServerSideClient::FakeClientMarkSpawnGroupsAsLoadedCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClient,CServerSideClient::StartHltvReplayCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClient,CServerSideClient::StopHltvReplayCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClientBase,CServerSideClientBase::BuildServerInfoMessageAsync_t,CNetworkGameServerSpawnGroupAutoLock> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClientBase,CServerSideClientBase::DisconnectCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClientBase,CServerSideClientBase::ProcessBaselineAckCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClientBase,CServerSideClientBase::SendNetMessageCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClientBase,CServerSideClientBase::SignonStateNewCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClientBase,CServerSideClientBase::SignonStateNewFailedCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall2<CServerSideClientBase,CServerSideClientBase,CServerSideClientBase::UpdateAcknowledgedFramecountCall_t,empty_t> : CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::AppendSpawnGroupMessageCall_t> : CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::AppendSpawnGroupMessageCall_t,empty_t> {}
class CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::DumpMemCall_t> : CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::DumpMemCall_t,empty_t> {}
class CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::OnStartedRecordingReverseCall_t> : CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::OnStartedRecordingReverseCall_t,empty_t> {}
class CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::PrintBroadcastTVStatusCall_t> : CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::PrintBroadcastTVStatusCall_t,empty_t> {}
class CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::StartBroadcastCall_t> : CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::StartBroadcastCall_t,empty_t> {}
class CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::WriteDemoMessageCall_t> : CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,CHLTVServerAsync::WriteDemoMessageCall_t,empty_t> {}
class CDelayedCall<CHLTVServerAsync,ITvStreamSource::StartAutoRecordingCall_t> : CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,ITvStreamSource::StartAutoRecordingCall_t,empty_t> {}
class CDelayedCall<CHLTVServerAsync,ITvStreamSource::StartRecordingCall_t> : CDelayedCall2<CHLTVServerAsync,CHLTVServerAsync,ITvStreamSource::StartRecordingCall_t,empty_t> {}
class CDelayedCallBase<CHLTVServerAsync> { void* vtable[2]; }
class CDelayedCallBase<CNetworkGameServerBase> { void* vtable[2]; }
class CDelayedCallBase<CServerSideClientBase> { void* vtable[2]; }
class CDeltaEntityHeaderReader : CDeltaEntityHeaderReaderBase { void* vtable[1]; }
class CDeltaEntityHeaderReaderBase {}
class CDeltaEntityHeaderWriter : CDeltaEntitysHeaderWriterBase { void* vtable[1]; }
class CDeltaEntityNonTransmitHeaderReader : CDeltaEntityHeaderReaderBase { void* vtable[1]; }
class CDeltaEntityNonTransmitHeaderWriter : CDeltaEntitysHeaderWriterBase { void* vtable[1]; }
class CDeltaEntitysHeaderWriterBase {}
class CDemoAnimationData : google::protobuf::Message { void* vtable[17]; }
class CDemoAnimationHeader : google::protobuf::Message { void* vtable[17]; }
class CDemoClassInfo : google::protobuf::Message { void* vtable[17]; }
class CDemoClassInfo_class_t : google::protobuf::Message { void* vtable[17]; }
class CDemoConsoleCmd : google::protobuf::Message { void* vtable[17]; }
class CDemoCustomData : google::protobuf::Message { void* vtable[17]; }
class CDemoCustomDataCallbacks : google::protobuf::Message { void* vtable[17]; }
class CDemoFile : IDemoStream { void* vtable[8]; }
class CDemoFileHeader : google::protobuf::Message { void* vtable[17]; }
class CDemoFileInfo : google::protobuf::Message { void* vtable[17]; }
class CDemoFullPacket : google::protobuf::Message { void* vtable[17]; }
class CDemoMessagePB<0,CDemoStop> : IDemoMessage, CDemoStop { void* vtable[6]; }
class CDemoMessagePB<1,CDemoFileHeader> : IDemoMessage, CDemoFileHeader { void* vtable[6]; }
class CDemoMessagePB<10,CDemoCustomData> : IDemoMessage, CDemoCustomData { void* vtable[6]; }
class CDemoMessagePB<11,CDemoCustomDataCallbacks> : IDemoMessage, CDemoCustomDataCallbacks { void* vtable[6]; }
class CDemoMessagePB<12,CDemoUserCmd> : IDemoMessage, CDemoUserCmd { void* vtable[6]; }
class CDemoMessagePB<13,CDemoFullPacket> : IDemoMessage, CDemoFullPacket { void* vtable[6]; }
class CDemoMessagePB<14,CDemoSaveGame> : IDemoMessage, CDemoSaveGame { void* vtable[6]; }
class CDemoMessagePB<15,CDemoSpawnGroups> : IDemoMessage, CDemoSpawnGroups { void* vtable[6]; }
class CDemoMessagePB<16,CDemoAnimationData> : IDemoMessage, CDemoAnimationData { void* vtable[6]; }
class CDemoMessagePB<17,CDemoAnimationHeader> : IDemoMessage, CDemoAnimationHeader { void* vtable[6]; }
class CDemoMessagePB<2,CDemoFileInfo> : IDemoMessage, CDemoFileInfo { void* vtable[6]; }
class CDemoMessagePB<3,CDemoSyncTick> : IDemoMessage, CDemoSyncTick { void* vtable[6]; }
class CDemoMessagePB<4,CDemoSendTables> : IDemoMessage, CDemoSendTables { void* vtable[6]; }
class CDemoMessagePB<5,CDemoClassInfo> : IDemoMessage, CDemoClassInfo { void* vtable[6]; }
class CDemoMessagePB<6,CDemoStringTables> : IDemoMessage, CDemoStringTables { void* vtable[6]; }
class CDemoMessagePB<7,CDemoPacket> : IDemoMessage, CDemoPacket { void* vtable[6]; }
class CDemoMessagePB<9,CDemoConsoleCmd> : IDemoMessage, CDemoConsoleCmd { void* vtable[6]; }
class CDemoPacket : google::protobuf::Message { void* vtable[17]; }
class CDemoPlaybackLoop : IDemoPlaybackLoop { void* vtable[5]; }
class CDemoPlayer : IDemoPlayer { void* vtable[41]; }
class CDemoRecorder : IDemoRecorder, IDemoMessageSink { void* vtable[22]; }
class CDemoSaveGame : google::protobuf::Message { void* vtable[17]; }
class CDemoSendTables : google::protobuf::Message { void* vtable[17]; }
class CDemoSpawnGroups : google::protobuf::Message { void* vtable[17]; }
class CDemoStop : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CDemoStreamHttp : IDemoStream { void* vtable[8]; }
class CDemoStreamHttp::CFragmentRequest : CDemoStreamHttp::CPendingRequest { void* vtable[7]; }
class CDemoStreamHttp::CPendingRequest : CCallbackBase { void* vtable[7]; }
class CDemoStreamHttp::CStartRequest : CDemoStreamHttp::CPendingRequest { void* vtable[7]; }
class CDemoStreamHttp::CSyncRequest : CDemoStreamHttp::CPendingRequest { void* vtable[7]; }
class CDemoStringTables : google::protobuf::Message { void* vtable[17]; }
class CDemoStringTables_items_t : google::protobuf::Message { void* vtable[21]; }
class CDemoStringTables_table_t : google::protobuf::Message { void* vtable[17]; }
class CDemoSyncTick : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CDemoUserCmd : google::protobuf::Message { void* vtable[17]; }
class CDiskDemoBuffer : IDemoBuffer { void* vtable[15]; }
class CDownloadAddonPrerequisite : IPrerequisite { void* vtable[6]; }
class CEmptyEntityResourceManifest : CEntityResourceManifest { void* vtable[12]; }
class CEngine2MinidumpCommentBuilder : CMiniDumpCommentBuilderBase { void* vtable[3]; }
class CEngineClient : CTier4AppSystem<IVEngineClient2,0> { void* vtable[186]; }
class CEngineConsoleLoggingListener : ILoggingListener { void* vtable[5]; }
class CEngineGameUI : CTier3AppSystem<IEngineGameUI,0> { void* vtable[15]; }
class CEngineGotvSyncPacket : google::protobuf::Message { void* vtable[17]; }
class CEnginePVSManager : IEnginePVSManager { void* vtable[9]; }
class CEngineServer : CTier4AppSystem<IVEngineServer2,0> { void* vtable[120]; }
class CEngineServiceMgr : CTier4AppSystem<IEngineServiceMgr,0>, ILoopModePrerequisiteRegistry { void* vtable[60]; }
class CEngineSoundServices : ISoundSystemServices { void* vtable[43]; }
class CEngineSoundServicesDebugVisualizer : CDebugVisualizerAbsTime { void* vtable[6]; }
class CEngineSoundServicesDebugVisualizerRel : IDebugVisualizer { void* vtable[6]; }
class CEngineWatchdogThread : CThread { void* vtable[7]; }
class CEntityComponentHelper {}
class CEntityComponentHelperReferenced<CScriptComponent> : CEntityComponentHelper {}
class CEntityComponentHelperT<CScriptComponent,CEntityComponentHelperReferenced<CScriptComponent> > : CEntityComponentHelperReferenced<CScriptComponent> { void* vtable[6]; }
class CEntityInfo { void* vtable[2]; }
class CEntityMETAAutoCompletionFunctor : ICommandCompletionCallback, ICommandCallback {}
class CEntityMETASpewFunctor : CEntityMETAAutoCompletionFunctor { void* vtable[1]; }
class CEntityMsg : google::protobuf::Message { void* vtable[19]; }
class CEntityReadInfo : CEntityInfo { void* vtable[2]; }
class CEntityReport : IEntityReport { void* vtable[6]; }
class CEntityResourceManifest : IEntityResourceManifest { void* vtable[12]; }
class CEntityWriteInfo : CEntityInfo { void* vtable[2]; }
class CFileLoggingListener : IFileLoggingListener { void* vtable[7]; }
class CFinalizeConnectionPrerequisite : IPrerequisite { void* vtable[6]; }
class CFlattenedSerializerSpewFunc_Log : IFlattenedSerializerSpewFunc { void* vtable[3]; }
class CFlattenedSerializerSpewListener<1> : IFlattenedSerializerSpewListener { void* vtable[6]; }
class CFrameMemDumpJob : CThreadedJob { void* vtable[7]; }
class CFrameSnapshotManager : CRefCounted<CRefCountServiceBase<CRefMT> > { void* vtable[1]; }
class CGameClientConnectPrerequisite : CSequentialPrerequisite { void* vtable[8]; }
class CGameEventDispatcher : INetMessageDispatcher { void* vtable[1]; }
class CGameEventSystem : CTier4AppSystem<IGameEventSystem,0> { void* vtable[21]; }
class CGameInfo : google::protobuf::Message { void* vtable[23]; }
class CGameInfo_CCSGameInfo : google::protobuf::Message { void* vtable[19]; }
class CGameInfo_CDotaGameInfo : google::protobuf::Message { void* vtable[25]; }
class CGameInfo_CDotaGameInfo_CHeroSelectEvent : google::protobuf::Message { void* vtable[23]; }
class CGameInfo_CDotaGameInfo_CPlayerInfo : google::protobuf::Message { void* vtable[21]; }
class CGameResourceManifestPrerequisite : IPrerequisite { void* vtable[7]; }
class CGameResourceService : CBaseEngineService<IGameResourceService> { void* vtable[44]; }
class CGameUIFuncs : CTier3AppSystem<IGameUIFuncs,0> { void* vtable[17]; }
class CGameUIRenderCallbackGroupLayer : IProceduralLayerRenderer { void* vtable[2]; }
class CGameUIRenderLayer : IProceduralLayerRenderer { void* vtable[2]; }
class CGameUIService : CBaseEngineService<IGameUIService>, IRenderHandler { void* vtable[40]; }
class CHLTVBroadcast { void* vtable[1]; }
class CHLTVBroadcast::CHttpCallback : CCallbackBase { void* vtable[3]; }
class CHLTVBuildFullFrameSplitJob : CThreadedJob { void* vtable[7]; }
class CHLTVClient : CServerSideClientBase { void* vtable[80]; }
class CHLTVClientState : CNetworkGameClientBase { void* vtable[134]; }
class CHLTVDemoRecorder : IDemoRecorder { void* vtable[22]; }
class CHLTVFrame : CClientFrame { void* vtable[2]; }
class CHLTVServer : CNetworkGameServerBase, IHLTVServer, ITvStreamSink { void* vtable[74]; }
class CHLTVServerAsync : ITvStreamSource { void* vtable[10]; }
class CHLTVServerAsync::CAsyncCall<CHLTVServerAsync::DumpMemCall_t> : CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::DumpMemCall_t> { void* vtable[2]; }
class CHLTVServerAsync::CAsyncCall<CHLTVServerAsync::PrintBroadcastTVStatusCall_t> : CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::PrintBroadcastTVStatusCall_t> { void* vtable[2]; }
class CHLTVServerAsync::CAsyncCall<CHLTVServerAsync::StartBroadcastCall_t> : CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::StartBroadcastCall_t> { void* vtable[2]; }
class CHLTVServerAsync::CAsyncCall<CHLTVServerAsync::WriteDemoMessageCall_t> : CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::WriteDemoMessageCall_t> { void* vtable[2]; }
class CHLTVServerAsync::CAsyncCall<ITvStreamSource::StartAutoRecordingCall_t> : CDelayedCall<CHLTVServerAsync,ITvStreamSource::StartAutoRecordingCall_t> { void* vtable[2]; }
class CHLTVServerAsync::CAsyncCall<ITvStreamSource::StartRecordingCall_t> : CDelayedCall<CHLTVServerAsync,ITvStreamSource::StartRecordingCall_t> { void* vtable[2]; }
class CHLTVServerAsync::CDeferredCall<CHLTVServerAsync::AppendSpawnGroupMessageCall_t> : CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::AppendSpawnGroupMessageCall_t> { void* vtable[2]; }
class CHLTVServerAsync::CHLTVDemoRecorderProxy : IDemoMessageSink { void* vtable[1]; }
class CHLTVServerAsync::CReverseCall<CHLTVServerAsync::OnStartedRecordingReverseCall_t> : CDelayedCall<CHLTVServerAsync,CHLTVServerAsync::OnStartedRecordingReverseCall_t> { void* vtable[2]; }
class CHLTVServerAsync::CSendClientMessagesJob : CThreadedJobWithDependencies { void* vtable[9]; }
class CHostStateMgr : CTier4AppSystem<IHostStateMgr,0>, ISwitchLoopModeStatusNotify { void* vtable[23]; }
class CHostSubscribeForProfileEvents : IMatchEventsSink { void* vtable[1]; }
class CInputService : CBaseEngineService<IInputService>, IInputHandler { void* vtable[64]; }
class CInstantReplay : IDemoPlayer, IInstantReplayIntercept { void* vtable[41]; }
class CKV3TransferContextBase : IErrorListener { void* vtable[6]; }
class CKV3TransferLoadContext : CKV3TransferContextBase { void* vtable[6]; }
class CKV3TransferSaveContext : CKV3TransferContextBase { void* vtable[6]; }
class CKeyValueCache : CTier4AppSystem<IKeyValueCache,0> { void* vtable[17]; }
class CLoadAutoCompletionFunctor : ICommandCallback, ICommandCompletionCallback { void* vtable[1]; }
class CLoadSpawnGroupsPrerequisite : IPrerequisite { void* vtable[6]; }
class CLoadStartupResourcePrerequisite : CGameResourceManifestPrerequisite, ILoopModePrerequisiteRegistry { void* vtable[7]; }
class CLoopModeAddonDownload : CLoopModeBase { void* vtable[8]; }
class CLoopModeBase : ILoopMode {}
class CLoopModeConsole : CLoopModeBase { void* vtable[8]; }
class CLoopModeFactory<CLoopModeAddonDownload> : ILoopModeFactory { void* vtable[5]; }
class CLoopModeFactory<CLoopModeConsole> : ILoopModeFactory { void* vtable[5]; }
class CLoopModeFactory<CLoopModeInGameUI> : ILoopModeFactory { void* vtable[5]; }
class CLoopModeFactory<CLoopModeLevelLoad> : ILoopModeFactory { void* vtable[5]; }
class CLoopModeFactory<CLoopModeMainMenu> : ILoopModeFactory { void* vtable[5]; }
class CLoopModeFactory<CLoopModeRemoteConnect> : ILoopModeFactory { void* vtable[5]; }
class CLoopModeFactory<CLoopModeSourceTVRelay> : ILoopModeFactory { void* vtable[5]; }
class CLoopModeInGameUI : CLoopModeBase { void* vtable[8]; }
class CLoopModeLevelLoad : CLoopModeBase { void* vtable[8]; }
class CLoopModeMainMenu : CLoopModeBase { void* vtable[8]; }
class CLoopModeRemoteConnect : CLoopModeBase { void* vtable[8]; }
class CLoopModeSourceTVRelay : CLoopModeBase { void* vtable[8]; }
class CLoopTypeBase : ILoopType { void* vtable[13]; }
class CLoopTypeClientServer : CLoopTypeBase { void* vtable[13]; }
class CLoopTypeClientServerService : CBaseEngineService<IEngineService>, IInputHandler, IRenderHandler { void* vtable[23]; }
class CLoopTypeSimple : CLoopTypeBase { void* vtable[13]; }
class CLoopTypeSimpleService : CBaseEngineService<IEngineService>, IInputHandler, IRenderHandler { void* vtable[23]; }
class CMapListService : CBaseEngineService<IMapListService> { void* vtable[26]; }
class CMaterialSystem2AppSystemDict : CTier2AppSystemDict, IRenderDeviceSetup { void* vtable[6]; }
class CMetaDuplicationAutoCompletionFunctor : CEntityMETAAutoCompletionFunctor { void* vtable[1]; }
class CMiniDumpCommentBuilderBase {}
class CMiniDumpCommentConvarsWriter : IPrintChangedConvarsWriter { void* vtable[2]; }
class CMovieRecorder : IMovieRecorder, IScreenshotCallback, IAudioStreamRecorder { void* vtable[11]; }
class CMsgConvarsWriter : IPrintChangedConvarsWriter { void* vtable[2]; }
class CMsgIPCAddress : google::protobuf::Message { void* vtable[17]; }
class CMsgPlayerInfo : google::protobuf::Message { void* vtable[17]; }
class CMsgQAngle : google::protobuf::Message { void* vtable[17]; }
class CMsgQuaternion : google::protobuf::Message { void* vtable[21]; }
class CMsgRGBA : google::protobuf::Message { void* vtable[29]; }
class CMsgServerNetworkStats : google::protobuf::Message { void* vtable[17]; }
class CMsgServerNetworkStats_Player : google::protobuf::Message { void* vtable[23]; }
class CMsgServerNetworkStats_Port : google::protobuf::Message { void* vtable[23]; }
class CMsgServerPeer : google::protobuf::Message { void* vtable[21]; }
class CMsgServerUserCmd : google::protobuf::Message { void* vtable[19]; }
class CMsgSource2SystemSpecs : google::protobuf::Message { void* vtable[17]; }
class CMsgSource2VProfLiteReport : google::protobuf::Message { void* vtable[19]; }
class CMsgSource2VProfLiteReportItem : google::protobuf::Message { void* vtable[17]; }
class CMsgTransform : google::protobuf::Message { void* vtable[21]; }
class CMsgVector : google::protobuf::Message { void* vtable[17]; }
class CMsgVector2D : google::protobuf::Message { void* vtable[29]; }
class CMsgVoiceAudio : google::protobuf::Message { void* vtable[25]; }
class CMsg_CVars : google::protobuf::Message { void* vtable[17]; }
class CMsg_CVars_CVar : google::protobuf::Message { void* vtable[19]; }
class CNETMsg_DebugOverlay : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_DebugOverlay_t : CNetMessagePB<15,CNETMsg_DebugOverlay,16,1,0> { void* vtable[5]; }
class CNETMsg_NOP : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CNETMsg_SetConVar : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SetConVar_t : CNetMessagePB<6,CNETMsg_SetConVar,9,1,0> { void* vtable[5]; }
class CNETMsg_SignonState : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SignonState_t : CNetMessagePB<7,CNETMsg_SignonState,10,1,0> { void* vtable[5]; }
class CNETMsg_SpawnGroup_Load : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_LoadCompleted : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_LoadCompleted_t : CNetMessagePB<13,CNETMsg_SpawnGroup_LoadCompleted,15,1,0> { void* vtable[5]; }
class CNETMsg_SpawnGroup_Load_t : CNetMessagePB<8,CNETMsg_SpawnGroup_Load,15,1,0> { void* vtable[5]; }
class CNETMsg_SpawnGroup_ManifestUpdate : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_ManifestUpdate_t : CNetMessagePB<9,CNETMsg_SpawnGroup_ManifestUpdate,15,1,0> { void* vtable[5]; }
class CNETMsg_SpawnGroup_SetCreationTick : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_SetCreationTick_t : CNetMessagePB<11,CNETMsg_SpawnGroup_SetCreationTick,15,1,0> { void* vtable[5]; }
class CNETMsg_SpawnGroup_Unload : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_Unload_t : CNetMessagePB<12,CNETMsg_SpawnGroup_Unload,15,1,0> { void* vtable[5]; }
class CNETMsg_SplitScreenUser : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_StringCmd : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_StringCmd_t : CNetMessagePB<5,CNETMsg_StringCmd,9,1,0> { void* vtable[5]; }
class CNETMsg_Tick : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_Tick_t : CNetMessagePB<4,CNETMsg_Tick,16,0,0> { void* vtable[5]; }
class CNetConsoleMgr : ISocketCreatorListener { void* vtable[3]; }
class CNetMessage { void* vtable[5]; }
class CNetMessagePB<-1,C2S_CONNECTION_Message,0,1,0> : CNetMessage, C2S_CONNECTION_Message { void* vtable[5]; }
class CNetMessagePB<-1,C2S_CONNECTION_Message,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<-1,C2S_CONNECT_Message,0,1,0> : CNetMessage, C2S_CONNECT_Message { void* vtable[5]; }
class CNetMessagePB<-1,C2S_CONNECT_Message,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<-1,NetMessageConnectionClosed,11,1,0> : CNetMessage, NetMessageConnectionClosed { void* vtable[5]; }
class CNetMessagePB<-1,NetMessageConnectionClosed,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<-1,NetMessageConnectionCrashed,11,1,0> : CNetMessage, NetMessageConnectionCrashed { void* vtable[5]; }
class CNetMessagePB<-1,NetMessageConnectionCrashed,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<-1,NetMessageSplitscreenUserChanged,11,1,0> : CNetMessage, NetMessageSplitscreenUserChanged { void* vtable[5]; }
class CNetMessagePB<-1,NetMessageSplitscreenUserChanged,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<1073741824,NetMessagePacketStart,11,1,0> : CNetMessage, NetMessagePacketStart { void* vtable[5]; }
class CNetMessagePB<1073741824,NetMessagePacketStart,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<1073741825,NetMessagePacketEnd,11,1,0> : CNetMessage, NetMessagePacketEnd { void* vtable[5]; }
class CNetMessagePB<1073741825,NetMessagePacketEnd,11,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<11,CNETMsg_SpawnGroup_SetCreationTick,15,1,0> : CNetMessage, CNETMsg_SpawnGroup_SetCreationTick { void* vtable[5]; }
class CNetMessagePB<11,CNETMsg_SpawnGroup_SetCreationTick,15,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<12,CNETMsg_SpawnGroup_Unload,15,1,0> : CNetMessage, CNETMsg_SpawnGroup_Unload { void* vtable[5]; }
class CNetMessagePB<12,CNETMsg_SpawnGroup_Unload,15,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<13,CNETMsg_SpawnGroup_LoadCompleted,15,1,0> : CNetMessage, CNETMsg_SpawnGroup_LoadCompleted { void* vtable[5]; }
class CNetMessagePB<13,CNETMsg_SpawnGroup_LoadCompleted,15,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<15,CNETMsg_DebugOverlay,16,1,0> : CNetMessage, CNETMsg_DebugOverlay { void* vtable[5]; }
class CNetMessagePB<15,CNETMsg_DebugOverlay,16,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<16,CBidirMsg_RebroadcastGameEvent,5,1,1> : CNetMessage, CBidirMsg_RebroadcastGameEvent { void* vtable[5]; }
class CNetMessagePB<16,CBidirMsg_RebroadcastGameEvent,5,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<17,CBidirMsg_RebroadcastSource,5,1,1> : CNetMessage, CBidirMsg_RebroadcastSource { void* vtable[5]; }
class CNetMessagePB<17,CBidirMsg_RebroadcastSource,5,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<20,CCLCMsg_ClientInfo,10,1,0> : CNetMessage, CCLCMsg_ClientInfo { void* vtable[5]; }
class CNetMessagePB<20,CCLCMsg_ClientInfo,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<21,CCLCMsg_Move,8,0,0> : CNetMessage, CCLCMsg_Move { void* vtable[5]; }
class CNetMessagePB<21,CCLCMsg_Move,8,0,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<22,CCLCMsg_VoiceData,6,0,0> : CNetMessage, CCLCMsg_VoiceData { void* vtable[5]; }
class CNetMessagePB<22,CCLCMsg_VoiceData,6,0,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<23,CCLCMsg_BaselineAck,16,1,0> : CNetMessage, CCLCMsg_BaselineAck { void* vtable[5]; }
class CNetMessagePB<23,CCLCMsg_BaselineAck,16,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<25,CCLCMsg_RespondCvarValue,0,1,0> : CNetMessage, CCLCMsg_RespondCvarValue { void* vtable[5]; }
class CNetMessagePB<25,CCLCMsg_RespondCvarValue,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<26,CCLCMsg_FileCRCCheck,10,1,0> : CNetMessage, CCLCMsg_FileCRCCheck { void* vtable[5]; }
class CNetMessagePB<26,CCLCMsg_FileCRCCheck,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<27,CCLCMsg_LoadingProgress,10,1,0> : CNetMessage, CCLCMsg_LoadingProgress { void* vtable[5]; }
class CNetMessagePB<27,CCLCMsg_LoadingProgress,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<28,CCLCMsg_SplitPlayerConnect,10,1,0> : CNetMessage, CCLCMsg_SplitPlayerConnect { void* vtable[5]; }
class CNetMessagePB<28,CCLCMsg_SplitPlayerConnect,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<30,CCLCMsg_SplitPlayerDisconnect,10,1,0> : CNetMessage, CCLCMsg_SplitPlayerDisconnect { void* vtable[5]; }
class CNetMessagePB<30,CCLCMsg_SplitPlayerDisconnect,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<31,CCLCMsg_ServerStatus,0,1,0> : CNetMessage, CCLCMsg_ServerStatus { void* vtable[5]; }
class CNetMessagePB<31,CCLCMsg_ServerStatus,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<33,CCLCMsg_RequestPause,0,1,0> : CNetMessage, CCLCMsg_RequestPause { void* vtable[5]; }
class CNetMessagePB<33,CCLCMsg_RequestPause,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<34,CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>,9,1,0> : CNetMessage, CBaseCmdKeyValues<CCLCMsg_CmdKeyValues> { void* vtable[5]; }
class CNetMessagePB<34,CBaseCmdKeyValues<CCLCMsg_CmdKeyValues>,9,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<35,CCLCMsg_RconServerDetails,0,1,0> : CNetMessage, CCLCMsg_RconServerDetails { void* vtable[5]; }
class CNetMessagePB<35,CCLCMsg_RconServerDetails,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<36,CCLCMsg_HltvReplay,17,1,0> : CNetMessage, CCLCMsg_HltvReplay { void* vtable[5]; }
class CNetMessagePB<36,CCLCMsg_HltvReplay,17,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<37,CCLCMsg_Diagnostic,0,1,0> : CNetMessage, CCLCMsg_Diagnostic { void* vtable[5]; }
class CNetMessagePB<37,CCLCMsg_Diagnostic,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<4,CNETMsg_Tick,16,0,0> : CNetMessage, CNETMsg_Tick { void* vtable[5]; }
class CNetMessagePB<4,CNETMsg_Tick,16,0,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<40,CSVCMsg_ServerInfo,10,1,0> : CNetMessage, CSVCMsg_ServerInfo { void* vtable[5]; }
class CNetMessagePB<40,CSVCMsg_ServerInfo,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<41,CSVCMsg_FlattenedSerializerWrapper,10,1,0> : CNetMessage, CSVCMsg_FlattenedSerializerWrapper { void* vtable[5]; }
class CNetMessagePB<41,CSVCMsg_FlattenedSerializerWrapper,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<42,CSVCMsg_ClassInfo,10,1,0> : CNetMessage, CSVCMsg_ClassInfo { void* vtable[5]; }
class CNetMessagePB<42,CSVCMsg_ClassInfo,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<43,CSVCMsg_SetPause,0,1,0> : CNetMessage, CSVCMsg_SetPause { void* vtable[5]; }
class CNetMessagePB<43,CSVCMsg_SetPause,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<44,CSVCMsg_CreateStringTable,10,1,0> : CNetMessage, CSVCMsg_CreateStringTable { void* vtable[5]; }
class CNetMessagePB<44,CSVCMsg_CreateStringTable,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<45,CSVCMsg_UpdateStringTable,7,1,0> : CNetMessage, CSVCMsg_UpdateStringTable { void* vtable[5]; }
class CNetMessagePB<45,CSVCMsg_UpdateStringTable,7,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<46,CSVCMsg_VoiceInit,10,1,0> : CNetMessage, CSVCMsg_VoiceInit { void* vtable[5]; }
class CNetMessagePB<46,CSVCMsg_VoiceInit,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<47,CSVCMsg_VoiceData,6,0,0> : CNetMessage, CSVCMsg_VoiceData { void* vtable[5]; }
class CNetMessagePB<47,CSVCMsg_VoiceData,6,0,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<48,CSVCMsg_Print,0,1,0> : CNetMessage, CSVCMsg_Print { void* vtable[5]; }
class CNetMessagePB<48,CSVCMsg_Print,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<49,CSVCMsg_Sounds,4,1,0> : CNetMessage, CSVCMsg_Sounds { void* vtable[5]; }
class CNetMessagePB<49,CSVCMsg_Sounds,4,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<5,CNETMsg_StringCmd,9,1,0> : CNetMessage, CNETMsg_StringCmd { void* vtable[5]; }
class CNetMessagePB<5,CNETMsg_StringCmd,9,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<50,CSVCMsg_SetView,0,1,0> : CNetMessage, CSVCMsg_SetView { void* vtable[5]; }
class CNetMessagePB<50,CSVCMsg_SetView,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<51,CSVCMsg_ClearAllStringTables,10,1,0> : CNetMessage, CSVCMsg_ClearAllStringTables { void* vtable[5]; }
class CNetMessagePB<51,CSVCMsg_ClearAllStringTables,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<52,CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>,9,1,0> : CNetMessage, CBaseCmdKeyValues<CSVCMsg_CmdKeyValues> { void* vtable[5]; }
class CNetMessagePB<52,CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>,9,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<54,CSVCMsg_SplitScreen,10,1,0> : CNetMessage, CSVCMsg_SplitScreen { void* vtable[5]; }
class CNetMessagePB<54,CSVCMsg_SplitScreen,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<55,CSVCMsg_PacketEntities,-1,1,0> : CNetMessage, CSVCMsg_PacketEntities { void* vtable[5]; }
class CNetMessagePB<55,CSVCMsg_PacketEntities,-1,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<56,CSVCMsg_Prefetch,4,1,0> : CNetMessage, CSVCMsg_Prefetch { void* vtable[5]; }
class CNetMessagePB<56,CSVCMsg_Prefetch,4,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<57,CSVCMsg_Menu,0,1,0> : CNetMessage, CSVCMsg_Menu { void* vtable[5]; }
class CNetMessagePB<57,CSVCMsg_Menu,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<58,CSVCMsg_GetCvarValue,0,1,0> : CNetMessage, CSVCMsg_GetCvarValue { void* vtable[5]; }
class CNetMessagePB<58,CSVCMsg_GetCvarValue,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<59,CSVCMsg_StopSound,4,1,0> : CNetMessage, CSVCMsg_StopSound { void* vtable[5]; }
class CNetMessagePB<59,CSVCMsg_StopSound,4,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<6,CNETMsg_SetConVar,9,1,0> : CNetMessage, CNETMsg_SetConVar { void* vtable[5]; }
class CNetMessagePB<6,CNETMsg_SetConVar,9,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<60,CSVCMsg_PeerList,0,1,0> : CNetMessage, CSVCMsg_PeerList { void* vtable[5]; }
class CNetMessagePB<60,CSVCMsg_PeerList,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<61,CSVCMsg_PacketReliable,0,1,0> : CNetMessage, CSVCMsg_PacketReliable { void* vtable[5]; }
class CNetMessagePB<61,CSVCMsg_PacketReliable,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<62,CSVCMsg_HLTVStatus,0,1,1> : CNetMessage, CSVCMsg_HLTVStatus { void* vtable[5]; }
class CNetMessagePB<62,CSVCMsg_HLTVStatus,0,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<63,CSVCMsg_ServerSteamID,0,1,1> : CNetMessage, CSVCMsg_ServerSteamID { void* vtable[5]; }
class CNetMessagePB<63,CSVCMsg_ServerSteamID,0,1,1>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<7,CNETMsg_SignonState,10,1,0> : CNetMessage, CNETMsg_SignonState { void* vtable[5]; }
class CNetMessagePB<7,CNETMsg_SignonState,10,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<70,CSVCMsg_FullFrameSplit,0,1,0> : CNetMessage, CSVCMsg_FullFrameSplit { void* vtable[5]; }
class CNetMessagePB<70,CSVCMsg_FullFrameSplit,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<71,CSVCMsg_RconServerDetails,0,1,0> : CNetMessage, CSVCMsg_RconServerDetails { void* vtable[5]; }
class CNetMessagePB<71,CSVCMsg_RconServerDetails,0,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<72,CSVCMsg_UserMessage,13,1,0> : CNetMessage, CSVCMsg_UserMessage { void* vtable[5]; }
class CNetMessagePB<72,CSVCMsg_UserMessage,13,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<74,CSVCMsg_Broadcast_Command,17,1,0> : CNetMessage, CSVCMsg_Broadcast_Command { void* vtable[5]; }
class CNetMessagePB<74,CSVCMsg_Broadcast_Command,17,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<74,CSVCMsg_HltvReplay,17,1,0> : CNetMessage, CSVCMsg_HltvReplay { void* vtable[5]; }
class CNetMessagePB<74,CSVCMsg_HltvReplay,17,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<75,CCLCMsg_HltvFixupOperatorTick,17,1,0> : CNetMessage, CCLCMsg_HltvFixupOperatorTick { void* vtable[5]; }
class CNetMessagePB<75,CCLCMsg_HltvFixupOperatorTick,17,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<76,CSVCMsg_UserCommands,17,1,0> : CNetMessage, CSVCMsg_UserCommands { void* vtable[5]; }
class CNetMessagePB<76,CSVCMsg_UserCommands,17,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<8,CNETMsg_SpawnGroup_Load,15,1,0> : CNetMessage, CNETMsg_SpawnGroup_Load { void* vtable[5]; }
class CNetMessagePB<8,CNETMsg_SpawnGroup_Load,15,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetMessagePB<9,CNETMsg_SpawnGroup_ManifestUpdate,15,1,0> : CNetMessage, CNETMsg_SpawnGroup_ManifestUpdate { void* vtable[5]; }
class CNetMessagePB<9,CNETMsg_SpawnGroup_ManifestUpdate,15,1,0>::CProtobufBinding : IProtobufBinding { void* vtable[9]; }
class CNetSupportImpl : CBaseAppSystem<INetSupport> { void* vtable[22]; }
class CNetworkClientService : CBaseEngineService<INetworkClientService>, CUtlSlot, IVConCommDataReceived { void* vtable[62]; }
class CNetworkClientSpawnGroup : CBaseSpawnGroup { void* vtable[45]; }
class CNetworkClientSpawnGroupCreatePrerequisites : CSequentialPrerequisite { void* vtable[8]; }
class CNetworkClientSpawnGroup_AllocateEntitiesPrerequisite : CBaseClientSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkClientSpawnGroup_AllocateSpawnGroupPrerequisite : CBaseClientSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkClientSpawnGroup_LoadEntitiesPrerequisite : CBaseClientSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkClientSpawnGroup_LoadPreviousLevelPrerequisite : CNetworkClientSpawnGroup_LoadSaveGamePrerequisiteBase { void* vtable[8]; }
class CNetworkClientSpawnGroup_LoadSaveGamePrerequisite : CNetworkClientSpawnGroup_LoadSaveGamePrerequisiteBase { void* vtable[8]; }
class CNetworkClientSpawnGroup_LoadSaveGamePrerequisiteBase : CBaseClientSpawnGroupCreatePrerequisite { void* vtable[8]; }
class CNetworkClientSpawnGroup_WaitForAssetLoadPrerequisite : CBaseClientSpawnGroupCreatePrerequisite, ISpawnGroupPrerequisiteRegistry { void* vtable[6]; }
class CNetworkClientSpawnGroup_WaitForChildSpawnGroups : CBaseClientSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkClientSpawnGroup_WaitForOwnerSpawnGroupPrerequisite : CBaseClientSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkGameClient : CNetworkGameClientBase, ISwitchLoopModeStatusNotify { void* vtable[134]; }
class CNetworkGameClientBase : INetworkGameClient, CUtlSlot, INetworkMessageProcessingPreFilter, IConnectionlessPacketHandler, INetworkChannelNotify, IGameEventWatcher { void* vtable[134]; }
class CNetworkGameServer : CNetworkGameServerBase { void* vtable[74]; }
class CNetworkGameServerBase : INetworkGameServer, IConnectionlessPacketHandler { void* vtable[74]; }
class CNetworkP2PService : CBaseEngineService<INetworkP2PService>, CUtlSlot { void* vtable[33]; }
class CNetworkServerCreatePrerequisites : CSequentialPrerequisite { void* vtable[8]; }
class CNetworkServerService : CBaseEngineService<INetworkServerService>, IVConCommDataReceived { void* vtable[46]; }
class CNetworkServerSpawnGroup : CBaseSpawnGroup { void* vtable[45]; }
class CNetworkServerSpawnGroupCreatePrerequisites : CSequentialPrerequisite { void* vtable[8]; }
class CNetworkServerSpawnGroup_AllocateEntitiesPrerequisite : CBaseServerSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkServerSpawnGroup_AllocatePrerequisite : CBaseServerSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkServerSpawnGroup_LoadEntitiesPrerequisite : CBaseServerSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkServerSpawnGroup_LoadPreviousLevelPrerequisite : CNetworkServerSpawnGroup_LoadSaveGamePrerequisiteBase { void* vtable[9]; }
class CNetworkServerSpawnGroup_LoadSaveGamePrerequisite : CNetworkServerSpawnGroup_LoadSaveGamePrerequisiteBase { void* vtable[9]; }
class CNetworkServerSpawnGroup_LoadSaveGamePrerequisiteBase : CBaseServerSpawnGroupCreatePrerequisite { void* vtable[9]; }
class CNetworkServerSpawnGroup_WaitForAssetLoadPrerequisite : CBaseServerSpawnGroupCreatePrerequisite, ISpawnGroupPrerequisiteRegistry { void* vtable[6]; }
class CNetworkServerSpawnGroup_WaitForChildSpawnGroups : CBaseServerSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkServerSpawnGroup_WaitForClients : CBaseServerSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkServerSpawnGroup_WaitForOwnerSpawnGroupPrerequisite : CBaseServerSpawnGroupCreatePrerequisite { void* vtable[6]; }
class CNetworkService : CBaseEngineService<INetworkService> { void* vtable[24]; }
class CNetworkStringDict : INetworkStringDict { void* vtable[9]; }
class CNetworkStringTable : INetworkStringTable { void* vtable[17]; }
class CNetworkStringTableContainer : CTier4AppSystem<INetworkStringTableContainer,0> { void* vtable[18]; }
class CP4File { void* vtable[11]; }
class CPVS : IPVS { void* vtable[31]; }
class CPanoramaInputHandler : CBaseGameUIInputHandler { void* vtable[2]; }
class CPanoramaProceduralLayer : IProceduralLayerRenderer { void* vtable[2]; }
class CParallelProcessorAbstract<CParallelProcessor<CrashItem_t,CFuncJobItemProcessor<CrashItem_t>,1> > : CParallelProcessorAbstract_Base, IMultipleWorkerJob { void* vtable[2]; }
class CParallelProcessorAbstract<CParallelProcessor<FatalErrorItem_t,CFuncJobItemProcessor<FatalErrorItem_t>,1> > : CParallelProcessorAbstract_Base, IMultipleWorkerJob { void* vtable[2]; }
class CParallelProcessorAbstract<CParallelProcessor<ReadPacketEntitiesWorkItem_t * __ptr64,CMemberFuncJobItemProcessor<ReadPacketEntitiesWorkItem_t * __ptr64,CNetworkGameClient,CNetworkGameClient>,1> > : CParallelProcessorAbstract_Base, IMultipleWorkerJob { void* vtable[2]; }
class CParallelProcessorAbstract<CParallelProcessor<ReadPacketEntitiesWorkItem_t,CMemberFuncJobItemProcessor<ReadPacketEntitiesWorkItem_t,CNetworkGameClient,CNetworkGameClient>,1> > : CParallelProcessorAbstract_Base, IMultipleWorkerJob { void* vtable[2]; }
class CParallelProcessorAbstract<CReadPacketEntities_ParallelProcessingController> : CParallelProcessorAbstract_Base, IMultipleWorkerJob { void* vtable[2]; }
class CParallelProcessorAbstract_Base {}
class CPipedCommandLogRedirector : ILoggingListener { void* vtable[5]; }
class CPlayDemoClientPrerequisite : IPrerequisite { void* vtable[6]; }
class CPostConnectCallback { void* vtable[1]; }
class CPureServerWhitelist::CAllowFromDiskList : IFileList { void* vtable[2]; }
class CPureServerWhitelist::CForceMatchList : IFileList { void* vtable[2]; }
class CRConClient : ISocketCreatorListener { void* vtable[3]; }
class CRConServer : ISocketCreatorListener { void* vtable[3]; }
class CRConVProfExport : CTier3AppSystem<IVProfExport,0>, IVProfData { void* vtable[19]; }
class CRealMemoryDemoBuffer : IDemoBuffer { void* vtable[15]; }
class CRefCountServiceBase<CRefMT> {}
class CRefCounted1<IRefCounted,CRefCountServiceBase<CRefMT> > : IRefCounted, CRefCountServiceBase<CRefMT> {}
class CRefCounted<CRefCountServiceBase<CRefMT> > : CRefCountServiceBase<CRefMT> {}
class CRefreshRateGetter : IRenderDeviceEventListener { void* vtable[4]; }
class CRegistry : IRegistry { void* vtable[9]; }
class CRenderDevicePresentCallbackClientServer : IRenderDevicePresentCallback { void* vtable[1]; }
class CRenderService : CBaseEngineService<IRenderService>, IToolsResourceListener { void* vtable[37]; }
class CRenderingWorldSession : ISource2WorldSession, IWorldLoadUnloadCallback { void* vtable[43]; }
class CResourceManifestPrerequisite : IPrerequisite { void* vtable[6]; }
class CSVCMsgList_GameEvents : google::protobuf::Message { void* vtable[21]; }
class CSVCMsgList_GameEvents_event_t : google::protobuf::Message { void* vtable[21]; }
class CSVCMsg_BSPDecal : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_Broadcast_Command : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Broadcast_Command_t : CNetMessagePB<74,CSVCMsg_Broadcast_Command,17,1,0> { void* vtable[5]; }
class CSVCMsg_ClassInfo : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ClassInfo_class_t : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_ClassInfo_t : CNetMessagePB<42,CSVCMsg_ClassInfo,10,1,0> { void* vtable[5]; }
class CSVCMsg_ClearAllStringTables : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ClearAllStringTables_t : CNetMessagePB<51,CSVCMsg_ClearAllStringTables,10,1,0> { void* vtable[5]; }
class CSVCMsg_CmdKeyValues : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_CmdKeyValues_t : CNetMessagePB<52,CBaseCmdKeyValues<CSVCMsg_CmdKeyValues>,9,1,0> { void* vtable[5]; }
class CSVCMsg_CreateStringTable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_CreateStringTable_t : CNetMessagePB<44,CSVCMsg_CreateStringTable,10,1,0> { void* vtable[5]; }
class CSVCMsg_CrosshairAngle : google::protobuf::Message { void* vtable[21]; }
class CSVCMsg_FixAngle : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_FlattenedSerializer : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_FlattenedSerializerWrapper : CSVCMsg_FlattenedSerializer { void* vtable[17]; }
class CSVCMsg_FlattenedSerializer_t : CNetMessagePB<41,CSVCMsg_FlattenedSerializerWrapper,10,1,0> { void* vtable[5]; }
class CSVCMsg_FullFrameSplit : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_FullFrameSplit_t : CNetMessagePB<70,CSVCMsg_FullFrameSplit,0,1,0> { void* vtable[5]; }
class CSVCMsg_GameEvent : google::protobuf::Message { void* vtable[19]; }
class CSVCMsg_GameEventList : google::protobuf::Message { void* vtable[25]; }
class CSVCMsg_GameEventList_descriptor_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEventList_key_t : google::protobuf::Message { void* vtable[27]; }
class CSVCMsg_GameEvent_key_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameSessionConfiguration : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GetCvarValue : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_HLTVStatus : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_HltvFixupOperatorStatus : google::protobuf::Message { void* vtable[25]; }
class CSVCMsg_HltvReplay : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_HltvReplay_t : CNetMessagePB<74,CSVCMsg_HltvReplay,17,1,0> { void* vtable[5]; }
class CSVCMsg_Menu : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketEntities : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketEntities_alternate_baseline_t : google::protobuf::Message { void* vtable[21]; }
class CSVCMsg_PacketEntities_non_transmitted_entities_t : google::protobuf::Message { void* vtable[25]; }
class CSVCMsg_PacketEntities_t : CNetMessagePB<55,CSVCMsg_PacketEntities,-1,1,0> { void* vtable[5]; }
class CSVCMsg_PacketReliable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PacketReliable_t : CNetMessagePB<61,CSVCMsg_PacketReliable,0,1,0> { void* vtable[5]; }
class CSVCMsg_PeerList : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_PeerList_t : CNetMessagePB<60,CSVCMsg_PeerList,0,1,0> { void* vtable[5]; }
class CSVCMsg_Prefetch : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Print : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Print_t : CNetMessagePB<48,CSVCMsg_Print,0,1,0> { void* vtable[5]; }
class CSVCMsg_RconServerDetails : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_RconServerDetails_t : CNetMessagePB<71,CSVCMsg_RconServerDetails,0,1,0> { void* vtable[5]; }
class CSVCMsg_SendTable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SendTable_sendprop_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ServerInfo : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ServerInfo_t : CNetMessagePB<40,CSVCMsg_ServerInfo,10,1,0> { void* vtable[5]; }
class CSVCMsg_ServerSteamID : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_ServerSteamID_t : CNetMessagePB<63,CSVCMsg_ServerSteamID,0,1,1> { void* vtable[5]; }
class CSVCMsg_SetPause : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SetPause_t : CNetMessagePB<43,CSVCMsg_SetPause,0,1,0> { void* vtable[5]; }
class CSVCMsg_SetView : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Sounds : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_Sounds_sounddata_t : google::protobuf::Message { void* vtable[23]; }
class CSVCMsg_SplitScreen : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_SplitScreen_t : CNetMessagePB<54,CSVCMsg_SplitScreen,10,1,0> { void* vtable[5]; }
class CSVCMsg_StopSound : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_TempEntities : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UpdateStringTable : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UpdateStringTable_t : CNetMessagePB<45,CSVCMsg_UpdateStringTable,7,1,0> { void* vtable[5]; }
class CSVCMsg_UserCommands : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UserMessage : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_UserMessage_t : CNetMessagePB<72,CSVCMsg_UserMessage,13,1,0> { void* vtable[5]; }
class CSVCMsg_VoiceData : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_VoiceData_t : CNetMessagePB<47,CSVCMsg_VoiceData,6,0,0> { void* vtable[5]; }
class CSVCMsg_VoiceInit : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_VoiceInit_t : CNetMessagePB<46,CSVCMsg_VoiceInit,10,1,0> { void* vtable[5]; }
class CSceneViewDebugOverlaysListener : ISceneViewDebugOverlaysListener { void* vtable[1]; }
class CSchemaInstallCallback : CPostConnectCallback { void* vtable[1]; }
class CSchemaRegistration {}
class CSchemaRegistration_engine2 : CSchemaRegistration { void* vtable[1]; }
class CSchemaRegistration_entity2 : CSchemaRegistration { void* vtable[1]; }
class CScreenshotService : CBaseEngineService<IEngineService>, IScreenshotCallback { void* vtable[23]; }
class CScreenshotServiceReadTexturePixelsCallback : IReadTexturePixelsCallback { void* vtable[3]; }
class CSequentialPrerequisite : IPrerequisite, IPrerequisiteRegistry { void* vtable[8]; }
class CSerializedEntityPolymorphicFieldsMetadataHelper : IPolymorphicMetadataHelper { void* vtable[1]; }
class CServerConsoleRedirect : IServerConsoleRedirect { void* vtable[4]; }
class CServerGameSessionManifestPrerequisite : CGameResourceManifestPrerequisite, IGameResourceManifestLoadCompletionCallback { void* vtable[7]; }
class CServerMsg : IMatchAsyncOperation { void* vtable[10]; }
class CServerMsg_CheckReservation : CServerMsg { void* vtable[10]; }
class CServerRemoteAccess : IGameServerData, IScreenshotCallback { void* vtable[5]; }
class CServerSideClient : CServerSideClientBase { void* vtable[80]; }
class CServerSideClient::CSendJob_Empty : CAsyncCallJob<CServerSideClient,CServerSideClient::SendSnapshotJob_Empty_t> { void* vtable[9]; }
class CServerSideClient::CSendJob_HltvReplay : CAsyncCallJob<CServerSideClient,CServerSideClient::SendSnapshotJob_HltvReplay_t> { void* vtable[9]; }
class CServerSideClient::CSendJob_HltvSource : CAsyncCallJob<CServerSideClient,CServerSideClient::SendSnapshotJob_HltvSource_t> { void* vtable[9]; }
class CServerSideClient::CSendJob_Regular : CThreadedJobWithDependencies { void* vtable[9]; }
class CServerSideClientBase : CUtlSlot, INetworkChannelNotify, INetworkMessageProcessingPreFilter { void* vtable[80]; }
class CSimpleLoggingListener : ILoggingListener { void* vtable[5]; }
class CSimpleWindowsLoggingListener : ILoggingListener { void* vtable[5]; }
class CSoundService : CBaseEngineService<ISoundService> { void* vtable[37]; }
class CSource1InputHandlerPostClientHandler : IInputHandler { void* vtable[1]; }
class CSource1InputHandlerPreClientHandler : IInputHandler { void* vtable[1]; }
class CSource1InputHandler_Client : IInputHandler { void* vtable[1]; }
class CSource2Metrics_MatchPerfSummary_Notification : google::protobuf::Message { void* vtable[19]; }
class CSource2Metrics_MatchPerfSummary_Notification_Client : google::protobuf::Message { void* vtable[17]; }
class CSpawnServerPrerequisite : IPrerequisite { void* vtable[6]; }
class CSplitScreenService : CBaseEngineService<ISplitScreenService>, IMobileEventListener { void* vtable[43]; }
class CStatsService : CBaseEngineService<IStatsService>, IDebugVisualizer { void* vtable[27]; }
class CStdFunctionJob : CThreadedJob { void* vtable[7]; }
class CTextConsole { void* vtable[17]; }
class CTextConsoleWin : CTextConsole { void* vtable[17]; }
class CTextOnlyLoggingListener : ILoggingListener { void* vtable[5]; }
class CThread {}
class CThreadedDependentJob : CThreadedJob { void* vtable[8]; }
class CThreadedFileLogger : CThreadedLogger { void* vtable[5]; }
class CThreadedJob : CRefCounted1<IRefCounted,CRefCountServiceBase<CRefMT> > { void* vtable[7]; }
class CThreadedJobWithDependencies : CThreadedDependentJob { void* vtable[9]; }
class CThreadedLogger { void* vtable[5]; }
class CTier0AppSystem<IApplication,0> : CBaseAppSystem<IApplication> {}
class CTier0AppSystem<IBenchmarkService,0> : CBaseAppSystem<IBenchmarkService> {}
class CTier0AppSystem<IEngineGameUI,0> : CBaseAppSystem<IEngineGameUI> {}
class CTier0AppSystem<IEngineService,0> : CBaseAppSystem<IEngineService> {}
class CTier0AppSystem<IEngineServiceMgr,0> : CBaseAppSystem<IEngineServiceMgr> {}
class CTier0AppSystem<IGameEventSystem,0> : CBaseAppSystem<IGameEventSystem> {}
class CTier0AppSystem<IGameResourceService,0> : CBaseAppSystem<IGameResourceService> {}
class CTier0AppSystem<IGameUIFuncs,0> : CBaseAppSystem<IGameUIFuncs> {}
class CTier0AppSystem<IGameUIService,0> : CBaseAppSystem<IGameUIService> {}
class CTier0AppSystem<IHostStateMgr,0> : CBaseAppSystem<IHostStateMgr> {}
class CTier0AppSystem<IInputService,0> : CBaseAppSystem<IInputService> {}
class CTier0AppSystem<IKeyValueCache,0> : CBaseAppSystem<IKeyValueCache> {}
class CTier0AppSystem<IMapListService,0> : CBaseAppSystem<IMapListService> {}
class CTier0AppSystem<INetworkClientService,0> : CBaseAppSystem<INetworkClientService> {}
class CTier0AppSystem<INetworkP2PService,0> : CBaseAppSystem<INetworkP2PService> {}
class CTier0AppSystem<INetworkServerService,0> : CBaseAppSystem<INetworkServerService> {}
class CTier0AppSystem<INetworkService,0> : CBaseAppSystem<INetworkService> {}
class CTier0AppSystem<INetworkStringTableContainer,0> : CBaseAppSystem<INetworkStringTableContainer> {}
class CTier0AppSystem<IRenderService,0> : CBaseAppSystem<IRenderService> {}
class CTier0AppSystem<ISoundService,0> : CBaseAppSystem<ISoundService> {}
class CTier0AppSystem<ISplitScreenService,0> : CBaseAppSystem<ISplitScreenService> {}
class CTier0AppSystem<IStatsService,0> : CBaseAppSystem<IStatsService> {}
class CTier0AppSystem<IToolService,0> : CBaseAppSystem<IToolService> {}
class CTier0AppSystem<IVEngineClient2,0> : CBaseAppSystem<IVEngineClient2> {}
class CTier0AppSystem<IVEngineServer2,0> : CBaseAppSystem<IVEngineServer2> {}
class CTier0AppSystem<IVProfExport,0> : CBaseAppSystem<IVProfExport> {}
class CTier0AppSystem<IVProfService,0> : CBaseAppSystem<IVProfService> {}
class CTier1AppSystem<IApplication,0> : CTier0AppSystem<IApplication,0> {}
class CTier1AppSystem<IBenchmarkService,0> : CTier0AppSystem<IBenchmarkService,0> {}
class CTier1AppSystem<IEngineGameUI,0> : CTier0AppSystem<IEngineGameUI,0> {}
class CTier1AppSystem<IEngineService,0> : CTier0AppSystem<IEngineService,0> {}
class CTier1AppSystem<IEngineServiceMgr,0> : CTier0AppSystem<IEngineServiceMgr,0> {}
class CTier1AppSystem<IGameEventSystem,0> : CTier0AppSystem<IGameEventSystem,0> {}
class CTier1AppSystem<IGameResourceService,0> : CTier0AppSystem<IGameResourceService,0> {}
class CTier1AppSystem<IGameUIFuncs,0> : CTier0AppSystem<IGameUIFuncs,0> {}
class CTier1AppSystem<IGameUIService,0> : CTier0AppSystem<IGameUIService,0> {}
class CTier1AppSystem<IHostStateMgr,0> : CTier0AppSystem<IHostStateMgr,0> {}
class CTier1AppSystem<IInputService,0> : CTier0AppSystem<IInputService,0> {}
class CTier1AppSystem<IKeyValueCache,0> : CTier0AppSystem<IKeyValueCache,0> {}
class CTier1AppSystem<IMapListService,0> : CTier0AppSystem<IMapListService,0> {}
class CTier1AppSystem<INetworkClientService,0> : CTier0AppSystem<INetworkClientService,0> {}
class CTier1AppSystem<INetworkP2PService,0> : CTier0AppSystem<INetworkP2PService,0> {}
class CTier1AppSystem<INetworkServerService,0> : CTier0AppSystem<INetworkServerService,0> {}
class CTier1AppSystem<INetworkService,0> : CTier0AppSystem<INetworkService,0> {}
class CTier1AppSystem<INetworkStringTableContainer,0> : CTier0AppSystem<INetworkStringTableContainer,0> {}
class CTier1AppSystem<IRenderService,0> : CTier0AppSystem<IRenderService,0> {}
class CTier1AppSystem<ISoundService,0> : CTier0AppSystem<ISoundService,0> {}
class CTier1AppSystem<ISplitScreenService,0> : CTier0AppSystem<ISplitScreenService,0> {}
class CTier1AppSystem<IStatsService,0> : CTier0AppSystem<IStatsService,0> {}
class CTier1AppSystem<IToolService,0> : CTier0AppSystem<IToolService,0> {}
class CTier1AppSystem<IVEngineClient2,0> : CTier0AppSystem<IVEngineClient2,0> {}
class CTier1AppSystem<IVEngineServer2,0> : CTier0AppSystem<IVEngineServer2,0> {}
class CTier1AppSystem<IVProfExport,0> : CTier0AppSystem<IVProfExport,0> {}
class CTier1AppSystem<IVProfService,0> : CTier0AppSystem<IVProfService,0> {}
class CTier1AppSystemDict : CAppSystemDict {}
class CTier1Application : CTier1AppSystem<IApplication,0> { void* vtable[60]; }
class CTier2AppSystem<IBenchmarkService,0> : CTier1AppSystem<IBenchmarkService,0> {}
class CTier2AppSystem<IEngineGameUI,0> : CTier1AppSystem<IEngineGameUI,0> {}
class CTier2AppSystem<IEngineService,0> : CTier1AppSystem<IEngineService,0> {}
class CTier2AppSystem<IEngineServiceMgr,0> : CTier1AppSystem<IEngineServiceMgr,0> {}
class CTier2AppSystem<IGameEventSystem,0> : CTier1AppSystem<IGameEventSystem,0> {}
class CTier2AppSystem<IGameResourceService,0> : CTier1AppSystem<IGameResourceService,0> {}
class CTier2AppSystem<IGameUIFuncs,0> : CTier1AppSystem<IGameUIFuncs,0> {}
class CTier2AppSystem<IGameUIService,0> : CTier1AppSystem<IGameUIService,0> {}
class CTier2AppSystem<IHostStateMgr,0> : CTier1AppSystem<IHostStateMgr,0> {}
class CTier2AppSystem<IInputService,0> : CTier1AppSystem<IInputService,0> {}
class CTier2AppSystem<IKeyValueCache,0> : CTier1AppSystem<IKeyValueCache,0> {}
class CTier2AppSystem<IMapListService,0> : CTier1AppSystem<IMapListService,0> {}
class CTier2AppSystem<INetworkClientService,0> : CTier1AppSystem<INetworkClientService,0> {}
class CTier2AppSystem<INetworkP2PService,0> : CTier1AppSystem<INetworkP2PService,0> {}
class CTier2AppSystem<INetworkServerService,0> : CTier1AppSystem<INetworkServerService,0> {}
class CTier2AppSystem<INetworkService,0> : CTier1AppSystem<INetworkService,0> {}
class CTier2AppSystem<INetworkStringTableContainer,0> : CTier1AppSystem<INetworkStringTableContainer,0> {}
class CTier2AppSystem<IRenderService,0> : CTier1AppSystem<IRenderService,0> {}
class CTier2AppSystem<ISoundService,0> : CTier1AppSystem<ISoundService,0> {}
class CTier2AppSystem<ISplitScreenService,0> : CTier1AppSystem<ISplitScreenService,0> {}
class CTier2AppSystem<IStatsService,0> : CTier1AppSystem<IStatsService,0> {}
class CTier2AppSystem<IToolService,0> : CTier1AppSystem<IToolService,0> {}
class CTier2AppSystem<IVEngineClient2,0> : CTier1AppSystem<IVEngineClient2,0> {}
class CTier2AppSystem<IVEngineServer2,0> : CTier1AppSystem<IVEngineServer2,0> {}
class CTier2AppSystem<IVProfExport,0> : CTier1AppSystem<IVProfExport,0> {}
class CTier2AppSystem<IVProfService,0> : CTier1AppSystem<IVProfService,0> {}
class CTier2AppSystemDict : CTier1AppSystemDict { void* vtable[6]; }
class CTier2Application : CTier1Application { void* vtable[60]; }
class CTier3AppSystem<IBenchmarkService,0> : CTier2AppSystem<IBenchmarkService,0> {}
class CTier3AppSystem<IEngineGameUI,0> : CTier2AppSystem<IEngineGameUI,0> {}
class CTier3AppSystem<IEngineService,0> : CTier2AppSystem<IEngineService,0> {}
class CTier3AppSystem<IEngineServiceMgr,0> : CTier2AppSystem<IEngineServiceMgr,0> {}
class CTier3AppSystem<IGameEventSystem,0> : CTier2AppSystem<IGameEventSystem,0> {}
class CTier3AppSystem<IGameResourceService,0> : CTier2AppSystem<IGameResourceService,0> {}
class CTier3AppSystem<IGameUIFuncs,0> : CTier2AppSystem<IGameUIFuncs,0> {}
class CTier3AppSystem<IGameUIService,0> : CTier2AppSystem<IGameUIService,0> {}
class CTier3AppSystem<IHostStateMgr,0> : CTier2AppSystem<IHostStateMgr,0> {}
class CTier3AppSystem<IInputService,0> : CTier2AppSystem<IInputService,0> {}
class CTier3AppSystem<IKeyValueCache,0> : CTier2AppSystem<IKeyValueCache,0> {}
class CTier3AppSystem<IMapListService,0> : CTier2AppSystem<IMapListService,0> {}
class CTier3AppSystem<INetworkClientService,0> : CTier2AppSystem<INetworkClientService,0> {}
class CTier3AppSystem<INetworkP2PService,0> : CTier2AppSystem<INetworkP2PService,0> {}
class CTier3AppSystem<INetworkServerService,0> : CTier2AppSystem<INetworkServerService,0> {}
class CTier3AppSystem<INetworkService,0> : CTier2AppSystem<INetworkService,0> {}
class CTier3AppSystem<INetworkStringTableContainer,0> : CTier2AppSystem<INetworkStringTableContainer,0> {}
class CTier3AppSystem<IRenderService,0> : CTier2AppSystem<IRenderService,0> {}
class CTier3AppSystem<ISoundService,0> : CTier2AppSystem<ISoundService,0> {}
class CTier3AppSystem<ISplitScreenService,0> : CTier2AppSystem<ISplitScreenService,0> {}
class CTier3AppSystem<IStatsService,0> : CTier2AppSystem<IStatsService,0> {}
class CTier3AppSystem<IToolService,0> : CTier2AppSystem<IToolService,0> {}
class CTier3AppSystem<IVEngineClient2,0> : CTier2AppSystem<IVEngineClient2,0> {}
class CTier3AppSystem<IVEngineServer2,0> : CTier2AppSystem<IVEngineServer2,0> {}
class CTier3AppSystem<IVProfExport,0> : CTier2AppSystem<IVProfExport,0> {}
class CTier3AppSystem<IVProfService,0> : CTier2AppSystem<IVProfService,0> {}
class CTier4AppSystem<IBenchmarkService,0> : CTier3AppSystem<IBenchmarkService,0> {}
class CTier4AppSystem<IEngineService,0> : CTier3AppSystem<IEngineService,0> {}
class CTier4AppSystem<IEngineServiceMgr,0> : CTier3AppSystem<IEngineServiceMgr,0> {}
class CTier4AppSystem<IGameEventSystem,0> : CTier3AppSystem<IGameEventSystem,0> {}
class CTier4AppSystem<IGameResourceService,0> : CTier3AppSystem<IGameResourceService,0> {}
class CTier4AppSystem<IGameUIService,0> : CTier3AppSystem<IGameUIService,0> {}
class CTier4AppSystem<IHostStateMgr,0> : CTier3AppSystem<IHostStateMgr,0> {}
class CTier4AppSystem<IInputService,0> : CTier3AppSystem<IInputService,0> {}
class CTier4AppSystem<IKeyValueCache,0> : CTier3AppSystem<IKeyValueCache,0> {}
class CTier4AppSystem<IMapListService,0> : CTier3AppSystem<IMapListService,0> {}
class CTier4AppSystem<INetworkClientService,0> : CTier3AppSystem<INetworkClientService,0> {}
class CTier4AppSystem<INetworkP2PService,0> : CTier3AppSystem<INetworkP2PService,0> {}
class CTier4AppSystem<INetworkServerService,0> : CTier3AppSystem<INetworkServerService,0> {}
class CTier4AppSystem<INetworkService,0> : CTier3AppSystem<INetworkService,0> {}
class CTier4AppSystem<INetworkStringTableContainer,0> : CTier3AppSystem<INetworkStringTableContainer,0> {}
class CTier4AppSystem<IRenderService,0> : CTier3AppSystem<IRenderService,0> {}
class CTier4AppSystem<ISoundService,0> : CTier3AppSystem<ISoundService,0> {}
class CTier4AppSystem<ISplitScreenService,0> : CTier3AppSystem<ISplitScreenService,0> {}
class CTier4AppSystem<IStatsService,0> : CTier3AppSystem<IStatsService,0> {}
class CTier4AppSystem<IToolService,0> : CTier3AppSystem<IToolService,0> {}
class CTier4AppSystem<IVEngineClient2,0> : CTier3AppSystem<IVEngineClient2,0> {}
class CTier4AppSystem<IVEngineServer2,0> : CTier3AppSystem<IVEngineServer2,0> {}
class CTier4AppSystem<IVProfService,0> : CTier3AppSystem<IVProfService,0> {}
class CToolService : CBaseEngineService<IToolService> { void* vtable[94]; }
class CTvDirectDemoRecorder : ITvStreamSink, ITvStreamSource, IDemoMessageSink { void* vtable[5]; }
class CUGCAddonPathResolver : IUGCAddonPathResolver { void* vtable[1]; }
class CUtlSlot {}
class CVConActivateMessage : IVConCommDataReceived { void* vtable[1]; }
class CVConAutoCompleteHelper : IVConCommDataReceived { void* vtable[1]; }
class CVConCommandMessage : IVConCommDataReceived { void* vtable[1]; }
class CVConsole2FlattenedSerializerListener : IVConsole2FlattenedSerializerListener { void* vtable[7]; }
class CVProfService : CBaseEngineService<IVProfService>, IVConCommDataReceived { void* vtable[25]; }
class CVariantSaveDataOps : CDefSaveRestoreOps { void* vtable[6]; }
class CVisRender : IDebugVisualizer { void* vtable[6]; }
class CWaitForGameServerStartupPrerequisite : IPrerequisite { void* vtable[6]; }
class CWaitForInitialSpawnGroupsPrerequisite : IPrerequisite { void* vtable[6]; }
class ConCommand : ConCommandRef {}
class ConCommandRef {}
class Etc::Block4x4Encoding { void* vtable[8]; }
class Etc::Block4x4Encoding_ETC1 : Etc::Block4x4Encoding { void* vtable[8]; }
class Etc::Block4x4Encoding_R11 : Etc::Block4x4Encoding_RGB8 { void* vtable[8]; }
class Etc::Block4x4Encoding_RG11 : Etc::Block4x4Encoding_R11 { void* vtable[8]; }
class Etc::Block4x4Encoding_RGB8 : Etc::Block4x4Encoding_ETC1 { void* vtable[8]; }
class Etc::Block4x4Encoding_RGB8A1 : Etc::Block4x4Encoding_RGB8 { void* vtable[8]; }
class Etc::Block4x4Encoding_RGB8A1_Opaque : Etc::Block4x4Encoding_RGB8A1 { void* vtable[8]; }
class Etc::Block4x4Encoding_RGB8A1_Transparent : Etc::Block4x4Encoding_RGB8A1 { void* vtable[8]; }
class Etc::Block4x4Encoding_RGBA8 : Etc::Block4x4Encoding_RGB8 { void* vtable[8]; }
class Etc::Block4x4Encoding_RGBA8_Opaque : Etc::Block4x4Encoding_RGBA8 { void* vtable[8]; }
class Etc::Block4x4Encoding_RGBA8_Transparent : Etc::Block4x4Encoding_RGBA8 { void* vtable[8]; }
class GameSessionConfiguration_t : CBaseCmdKeyValues<CSVCMsg_GameSessionConfiguration> { void* vtable[17]; }
class IAppSystem {}
class IApplication : IAppSystem {}
class IAssertionFailureListener { void* vtable[3]; }
class IAudioStreamRecorder { void* vtable[3]; }
class IBannedUsersFilter {}
class IBaseInterface { void* vtable[1]; }
class IBenchmarkService : IEngineService {}
class IBroadcastPlayer {}
class ICommandCallback {}
class ICommandCompletionCallback {}
class IComputeWorldOriginCallback {}
class IConnectionlessPacketHandler { void* vtable[2]; }
class IDebugVisualizer { void* vtable[6]; }
class IDebugVisualizerMgr {}
class IDemoBuffer { void* vtable[15]; }
class IDemoMessage { void* vtable[6]; }
class IDemoMessageSink {}
class IDemoPlaybackLoop {}
class IDemoPlayer { void* vtable[41]; }
class IDemoRecorder : IDemoRecorderBase { void* vtable[21]; }
class IDemoRecorderBase {}
class IDemoStream { void* vtable[8]; }
class IEngineGameUI : IAppSystem { void* vtable[15]; }
class IEnginePVSManager {}
class IEngineService : IAppSystem { void* vtable[23]; }
class IEngineServiceMgr : IAppSystem {}
class IEntityReport { void* vtable[6]; }
class IEntityResourceManifest {}
class IErrorListener {}
class IFileList {}
class IFileLoggingListener : ILoggingListener {}
class IFlattenedSerializerSpewFunc { void* vtable[3]; }
class IFlattenedSerializerSpewListener { void* vtable[6]; }
class IGameEventSystem : IAppSystem {}
class IGameEventWatcher {}
class IGameResourceManifestLoadCompletionCallback {}
class IGameResourceService : IEngineService {}
class IGameServerData : IBaseInterface {}
class IGameUIFuncs : IAppSystem {}
class IGameUIService : IEngineService {}
class IHLTVServer : IBaseInterface {}
class IHostStateMgr : IAppSystem {}
class IInputHandler {}
class IInputService : IEngineService {}
class IInstantReplayIntercept {}
class IKeyValueCache : IAppSystem {}
class ILoggingListener {}
class ILoopMode {}
class ILoopModeFactory {}
class ILoopModePrerequisiteRegistry : IPrerequisiteRegistry {}
class ILoopType {}
class IMapListService : IEngineService {}
class IMatchAsyncOperation {}
class IMatchEventsSink {}
class IMobileEventListener { void* vtable[4]; }
class IMovieRecorder {}
class IMultipleWorkerJob { void* vtable[2]; }
class INetMessageDispatcher {}
class INetSupport : CBaseAppSystem<IAppSystem> {}
class INetworkChannelNotify {}
class INetworkClientService : IEngineService {}
class INetworkGameClient {}
class INetworkGameServer {}
class INetworkMessageProcessingPreFilter {}
class INetworkP2PService : IEngineService {}
class INetworkServerService : IEngineService {}
class INetworkService : IEngineService {}
class INetworkStringDict { void* vtable[9]; }
class INetworkStringTable { void* vtable[17]; }
class INetworkStringTableContainer : IAppSystem { void* vtable[18]; }
class IPVS {}
class IPolymorphicMetadataHelper {}
class IPrerequisite { void* vtable[6]; }
class IPrerequisiteRegistry {}
class IPrintChangedConvarsWriter {}
class IProceduralLayerRenderer { void* vtable[2]; }
class IProtobufBinding {}
class IReadTexturePixelsCallback : IRenderReadCallback {}
class IRefCounted { void* vtable[3]; }
class IRegistry {}
class IRenderAsyncShaderCompileListener {}
class IRenderDeviceEventListener {}
class IRenderDevicePresentCallback {}
class IRenderDeviceSetup {}
class IRenderHandler {}
class IRenderReadCallback { void* vtable[2]; }
class IRenderService : IEngineService {}
class ISaveRestoreOps {}
class ISceneViewDebugOverlaysListener {}
class IScreenshotCallback {}
class IServerConsoleRedirect {}
class ISoundService : IEngineService {}
class ISoundSystemServices {}
class ISource2ClientConfig : IAppSystem {}
class ISource2Engine : IAppSystem {}
class ISource2ServerConfig : IAppSystem {}
class ISource2WorldSession {}
class ISpawnGroup {}
class ISpawnGroupPrerequisiteRegistry : IPrerequisiteRegistry {}
class ISplitScreenService : IEngineService {}
class IStatsService : IEngineService {}
class ISwitchLoopModeStatusNotify {}
class ITestScriptCommandProcessor {}
class IToolService : IEngineService {}
class IToolsResourceListener {}
class ITvStreamSink {}
class ITvStreamSource {}
class IUGCAddonPathResolver {}
class IVConCommDataReceived {}
class IVConsole2FlattenedSerializerListener : IFlattenedSerializerSpewListener {}
class IVEngineClient2 : ISource2Engine {}
class IVEngineServer2 : ISource2Engine {}
class IVProfData {}
class IVProfExport : IAppSystem {}
class IVProfService : IEngineService {}
class IVoiceTarget {}
class IWorldLoadUnloadCallback {}
class NetMessageConnectionClosed : google::protobuf::Message { void* vtable[17]; }
class NetMessageConnectionCrashed : google::protobuf::Message { void* vtable[17]; }
class NetMessagePacketEnd : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class NetMessagePacketStart : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class NetMessageSplitscreenUserChanged : google::protobuf::Message { void* vtable[17]; }
class PacketEntitiesFilter : INetworkMessageProcessingPreFilter { void* vtable[1]; }
class ProtoFlattenedSerializerField_t : google::protobuf::Message { void* vtable[19]; }
class ProtoFlattenedSerializerField_t_polymorphic_field_t : google::protobuf::Message { void* vtable[17]; }
class ProtoFlattenedSerializer_t : google::protobuf::Message { void* vtable[31]; }
struct CGameResourceManifest::CCallbackInternal_Steam_OnUGCDownload : CCallbackImpl<24> { void* vtable[4]; }
struct ISocketCreatorListener {}
