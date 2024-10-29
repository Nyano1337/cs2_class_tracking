class CBaseAppSystem<IGameTypes> : IGameTypes {}
class CBaseAppSystem<IMatchFramework> : IMatchFramework {}
class CCallResult<CLeaderboardRequestQueue,LeaderboardFindResult_t> : CCallbackBase { void* vtable[3]; }
class CCallResult<CLeaderboardRequestQueue,LeaderboardScoresDownloaded_t> : CCallbackBase { void* vtable[3]; }
class CCallResult<CMatchSearcher,LobbyMatchList_t> : CCallbackBase { void* vtable[3]; }
class CCallResult<CSteamLeaderboardWriter,LeaderboardFindResult_t> : CCallbackBase { void* vtable[3]; }
class CCallResult<CSteamLeaderboardWriter,LeaderboardScoreUploaded_t> : CCallbackBase { void* vtable[3]; }
class CCallResult<CSysSessionHost,LobbyCreated_t> : CCallbackBase { void* vtable[3]; }
class CCallback<CMatchSteamInviteListener,GameLobbyJoinRequested_t,0> : CCallbackImpl<16> {}
class CCallback<CSysSessionBase,LobbyChatMsg_t,0> : CCallbackImpl<24> {}
class CCallback<CSysSessionBase,LobbyChatUpdate_t,0> : CCallbackImpl<32> {}
class CCallback<CSysSessionBase,P2PSessionRequest_t,0> : CCallbackImpl<8> { void* vtable[4]; }
class CCallback<CSysSessionBase,SteamServersConnected_t,0> : CCallbackImpl<1> { void* vtable[4]; }
class CCallback<CSysSessionBase,SteamServersDisconnected_t,0> : CCallbackImpl<4> { void* vtable[4]; }
class CCallback<CSysSessionClient,LobbyEnter_t,0> : CCallbackImpl<24> {}
class CCallback<CSysSessionHost,LobbyEnter_t,0> : CCallbackImpl<24> {}
class CCallback<GCSDK::CGCClient,GCMessageAvailable_t,0> : CCallbackImpl<4> { void* vtable[4]; }
class CCallback<GCSDK::CGCClient,SteamServerConnectFailure_t,0> : CCallbackImpl<8> { void* vtable[4]; }
class CCallback<GCSDK::CGCClient,SteamServersConnected_t,0> : CCallbackImpl<1> { void* vtable[4]; }
class CCallback<GCSDK::CGCClient,SteamServersDisconnected_t,0> : CCallbackImpl<4> { void* vtable[4]; }
class CCallback<PlayerFriend,LobbyDataUpdate_t,0> : CCallbackImpl<24> {}
class CCallback<PlayerFriend,PersonaStateChange_t,0> : CCallbackImpl<16> {}
class CCallback<PlayerLocal,PersonaStateChange_t,0> : CCallbackImpl<16> {}
class CCallback<PlayerLocal,SteamServersConnected_t,0> : CCallbackImpl<1> {}
class CCallback<PlayerLocal,SteamServersDisconnected_t,0> : CCallbackImpl<4> {}
class CCallback<PlayerManager,PersonaStateChange_t,0> : CCallbackImpl<16> { void* vtable[4]; }
class CCallbackBase {}
class CCallbackImpl<16> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<1> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<24> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<32> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<4> : CCallbackBase { void* vtable[4]; }
class CCallbackImpl<8> : CCallbackBase { void* vtable[4]; }
class CCallbackManual<CMatchSteamInviteListener,GameLobbyJoinRequested_t,0> : CCallback<CMatchSteamInviteListener,GameLobbyJoinRequested_t,0> { void* vtable[4]; }
class CCallbackManual<CSysSessionBase,LobbyChatMsg_t,0> : CCallback<CSysSessionBase,LobbyChatMsg_t,0> { void* vtable[4]; }
class CCallbackManual<CSysSessionBase,LobbyChatUpdate_t,0> : CCallback<CSysSessionBase,LobbyChatUpdate_t,0> { void* vtable[4]; }
class CCallbackManual<CSysSessionClient,LobbyEnter_t,0> : CCallback<CSysSessionClient,LobbyEnter_t,0> { void* vtable[4]; }
class CCallbackManual<CSysSessionHost,LobbyEnter_t,0> : CCallback<CSysSessionHost,LobbyEnter_t,0> { void* vtable[4]; }
class CCallbackManual<PlayerFriend,LobbyDataUpdate_t,0> : CCallback<PlayerFriend,LobbyDataUpdate_t,0> { void* vtable[4]; }
class CCallbackManual<PlayerFriend,PersonaStateChange_t,0> : CCallback<PlayerFriend,PersonaStateChange_t,0> { void* vtable[4]; }
class CCallbackManual<PlayerLocal,PersonaStateChange_t,0> : CCallback<PlayerLocal,PersonaStateChange_t,0> { void* vtable[4]; }
class CCallbackManual<PlayerLocal,SteamServersConnected_t,0> : CCallback<PlayerLocal,SteamServersConnected_t,0> { void* vtable[4]; }
class CCallbackManual<PlayerLocal,SteamServersDisconnected_t,0> : CCallback<PlayerLocal,SteamServersDisconnected_t,0> { void* vtable[4]; }
class CChinaAgreementSessions_StartAgreementSessionInGame_Request : google::protobuf::Message { void* vtable[17]; }
class CChinaAgreementSessions_StartAgreementSessionInGame_Response : google::protobuf::Message { void* vtable[17]; }
class CCommunity_GamePersonalDataCategoryInfo : google::protobuf::Message { void* vtable[17]; }
class CCommunity_GetGamePersonalDataCategories_Request : google::protobuf::Message { void* vtable[17]; }
class CCommunity_GetGamePersonalDataCategories_Response : google::protobuf::Message { void* vtable[17]; }
class CCommunity_GetGamePersonalDataEntries_Request : google::protobuf::Message { void* vtable[17]; }
class CCommunity_GetGamePersonalDataEntries_Response : google::protobuf::Message { void* vtable[17]; }
class CCommunity_TerminateGamePersonalDataEntries_Request : google::protobuf::Message { void* vtable[17]; }
class CCommunity_TerminateGamePersonalDataEntries_Response : google::protobuf::Message { void* vtable[17]; }
class CConnectionlessLanMgr : IConnectionlessPacketHandler { void* vtable[2]; }
class CDatacenter : IDatacenter, IMatchEventsSink { void* vtable[5]; }
class CDatacenterCmdBatchImpl : IDatacenterCmdBatch { void* vtable[6]; }
class CDsSearcher : IMatchAsyncOperationCallback, IMatchEventsSink { void* vtable[6]; }
class CDsSearcher::CServerListListener : ISteamMatchmakingServerListResponse { void* vtable[3]; }
class CEntityMsg : google::protobuf::Message { void* vtable[17]; }
class CFastSteamFriendsWithInProcessCache : ISteamFriends { void* vtable[80]; }
class CFastSteamFriendsWithInProcessCache::CacheableMap<bool,bool,CFastSteamFriendsWithInProcessCache> : CFastSteamFriendsWithInProcessCache::ICacheableMapEvictable { void* vtable[1]; }
class CFastSteamFriendsWithInProcessCache::CacheableMap<char const * __ptr64,CUtlString,ISteamFriends> : CFastSteamFriendsWithInProcessCache::ICacheableMapEvictable { void* vtable[1]; }
class CFastSteamFriendsWithInProcessCache::CacheableMap<enum EFriendRelationship,enum EFriendRelationship,ISteamFriends> : CFastSteamFriendsWithInProcessCache::ICacheableMapEvictable { void* vtable[1]; }
class CFastSteamFriendsWithInProcessCache::CacheableMap<enum EPersonaState,enum EPersonaState,ISteamFriends> : CFastSteamFriendsWithInProcessCache::ICacheableMapEvictable { void* vtable[1]; }
class CFastSteamFriendsWithInProcessCache::CacheableMap<int,int,ISteamFriends> : CFastSteamFriendsWithInProcessCache::ICacheableMapEvictable { void* vtable[1]; }
class CFastSteamFriendsWithInProcessCache::ICacheableMapEvictable {}
class CGCClientJobUpdateStats : GCSDK::CGCClientJob { void* vtable[6]; }
class CGCToGCMsgMasterAck : google::protobuf::Message { void* vtable[17]; }
class CGCToGCMsgMasterAck_Response : google::protobuf::Message { void* vtable[17]; }
class CGCToGCMsgMasterStartupComplete : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CGCToGCMsgRouted : google::protobuf::Message { void* vtable[17]; }
class CGCToGCMsgRoutedReply : google::protobuf::Message { void* vtable[17]; }
class CGameAppSystem<IGameTypes,0> : CTier3AppSystem<IGameTypes,0> {}
class CGameServers_AggregationQuery_Request : google::protobuf::Message { void* vtable[17]; }
class CGameServers_AggregationQuery_Response : google::protobuf::Message { void* vtable[17]; }
class CGameServers_AggregationQuery_Response_Group : google::protobuf::Message { void* vtable[17]; }
class CLeaderboardRequestQueue : ILeaderboardRequestQueue { void* vtable[2]; }
class CMatchEventsSubscription : IMatchEventsSubscription { void* vtable[5]; }
class CMatchExtensions : IMatchExtensions { void* vtable[3]; }
class CMatchFramework : CTier2AppSystem<IMatchFramework,0>, IMatchEventsSink { void* vtable[28]; }
class CMatchNetworkMsgControllerBase : IMatchNetworkMsgController { void* vtable[6]; }
class CMatchSearchResultItem : IMatchSearchResult { void* vtable[4]; }
class CMatchSearcher { void* vtable[11]; }
class CMatchSearcher_OnlineSearch : CMatchSearcher { void* vtable[11]; }
class CMatchSearcher_OnlineTeamSearch : CMatchSearcher_OnlineSearch { void* vtable[11]; }
class CMatchSessionOfflineCustom : IMatchSessionInternal { void* vtable[10]; }
class CMatchSessionOnlineClient : IMatchSessionInternal { void* vtable[11]; }
class CMatchSessionOnlineHost : IMatchSessionInternal { void* vtable[12]; }
class CMatchSessionOnlineSearch : IMatchSessionInternal { void* vtable[16]; }
class CMatchSessionOnlineSearch::CServerListListener : ISteamMatchmakingServerListResponse { void* vtable[3]; }
class CMatchSessionOnlineTeamSearch : CMatchSessionOnlineSearch { void* vtable[17]; }
class CMatchSystem : IMatchSystem { void* vtable[5]; }
class CMatchTitle : IMatchTitle, IMatchEventsSink, IGameEventListener2 { void* vtable[13]; }
class CMatchTitleGameSettingsMgr : IMatchTitleGameSettingsMgr { void* vtable[22]; }
class CMatchVoice : IMatchVoice { void* vtable[6]; }
class CMsgAccountDetails : google::protobuf::Message { void* vtable[17]; }
class CMsgClientHello : google::protobuf::Message { void* vtable[17]; }
class CMsgClientWelcome : google::protobuf::Message { void* vtable[17]; }
class CMsgClientWelcome_Location : google::protobuf::Message { void* vtable[17]; }
class CMsgConnectionStatus : google::protobuf::Message { void* vtable[17]; }
class CMsgGCHAccountPhoneNumberChange : google::protobuf::Message { void* vtable[17]; }
class CMsgGCHInviteUserToLobby : google::protobuf::Message { void* vtable[17]; }
class CMsgGCHRecurringSubscriptionStatusChange : google::protobuf::Message { void* vtable[17]; }
class CMsgGCHVacVerificationChange : google::protobuf::Message { void* vtable[17]; }
class CMsgGCMultiplexMessage : google::protobuf::Message { void* vtable[17]; }
class CMsgGCMultiplexMessage_Response : google::protobuf::Message { void* vtable[17]; }
class CMsgGCRequestSessionIP : google::protobuf::Message { void* vtable[17]; }
class CMsgGCRequestSessionIPResponse : google::protobuf::Message { void* vtable[17]; }
class CMsgGCUpdateSessionIP : google::protobuf::Message { void* vtable[17]; }
class CMsgPlayerInfo : google::protobuf::Message { void* vtable[17]; }
class CMsgProtoBufHeader : google::protobuf::Message { void* vtable[17]; }
class CMsgQAngle : google::protobuf::Message { void* vtable[17]; }
class CMsgQuaternion : google::protobuf::Message { void* vtable[17]; }
class CMsgRGBA : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheHaveVersion : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheSubscribed : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheSubscribed_SubscribedType : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheSubscriptionCheck : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheSubscriptionRefresh : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheUnsubscribed : google::protobuf::Message { void* vtable[17]; }
class CMsgSOCacheVersion : google::protobuf::Message { void* vtable[17]; }
class CMsgSOIDOwner : google::protobuf::Message { void* vtable[17]; }
class CMsgSOMultipleObjects : google::protobuf::Message { void* vtable[17]; }
class CMsgSOMultipleObjects_SingleObject : google::protobuf::Message { void* vtable[17]; }
class CMsgSOSingleObject : google::protobuf::Message { void* vtable[17]; }
class CMsgSerializedSOCache : google::protobuf::Message { void* vtable[17]; }
class CMsgSerializedSOCache_Cache : google::protobuf::Message { void* vtable[17]; }
class CMsgSerializedSOCache_Cache_Version : google::protobuf::Message { void* vtable[17]; }
class CMsgSerializedSOCache_TypeCache : google::protobuf::Message { void* vtable[17]; }
class CMsgServerHello : google::protobuf::Message { void* vtable[17]; }
class CMsgTransform : google::protobuf::Message { void* vtable[17]; }
class CMsgVector : google::protobuf::Message { void* vtable[17]; }
class CMsgVector2D : google::protobuf::Message { void* vtable[17]; }
class CMsg_CVars : google::protobuf::Message { void* vtable[17]; }
class CMsg_CVars_CVar : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_DebugOverlay : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_NOP : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CNETMsg_SetConVar : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SignonState : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_Load : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_LoadCompleted : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_ManifestUpdate : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_SetCreationTick : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SpawnGroup_Unload : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_SplitScreenUser : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_StringCmd : google::protobuf::Message { void* vtable[17]; }
class CNETMsg_Tick : google::protobuf::Message { void* vtable[17]; }
class CPostConnectCallback { void* vtable[1]; }
class CProductInfo_SetRichPresenceLocalization_Request : google::protobuf::Message { void* vtable[17]; }
class CProductInfo_SetRichPresenceLocalization_Request_LanguageSection : google::protobuf::Message { void* vtable[17]; }
class CProductInfo_SetRichPresenceLocalization_Request_Token : google::protobuf::Message { void* vtable[17]; }
class CProductInfo_SetRichPresenceLocalization_Response : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CQuest_PublisherAddCommunityItemsToPlayer_Request : google::protobuf::Message { void* vtable[17]; }
class CQuest_PublisherAddCommunityItemsToPlayer_Request_Attribute : google::protobuf::Message { void* vtable[17]; }
class CQuest_PublisherAddCommunityItemsToPlayer_Response : google::protobuf::Message { void* vtable[17]; }
class CSVCMsgList_GameEvents : google::protobuf::Message { void* vtable[17]; }
class CSVCMsgList_GameEvents_event_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEvent : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameEvent_key_t : google::protobuf::Message { void* vtable[17]; }
class CSVCMsg_GameSessionConfiguration : google::protobuf::Message { void* vtable[17]; }
class CSchemaInstallCallback : CPostConnectCallback { void* vtable[1]; }
class CSearchManager : ISearchManager, IMatchEventsSink { void* vtable[6]; }
class CServer : IMatchServer { void* vtable[5]; }
class CServerManager : IServerManager, ISteamMatchmakingServerListResponse, IMatchEventsSink { void* vtable[5]; }
class CServerPinging : CServer { void* vtable[5]; }
class CSysSessionBase { void* vtable[15]; }
class CSysSessionClient : CSysSessionBase { void* vtable[15]; }
class CSysSessionHost : CSysSessionBase { void* vtable[15]; }
class CSysSessionStubForTeamSearch<CSysSessionClient> : CSysSessionClient { void* vtable[16]; }
class CSysSessionStubForTeamSearch<CSysSessionHost> : CSysSessionHost { void* vtable[16]; }
class CThread {}
class CTier0AppSystem<IGameTypes,0> : CBaseAppSystem<IGameTypes> {}
class CTier0AppSystem<IMatchFramework,0> : CBaseAppSystem<IMatchFramework> {}
class CTier1AppSystem<IGameTypes,0> : CTier0AppSystem<IGameTypes,0> {}
class CTier1AppSystem<IMatchFramework,0> : CTier0AppSystem<IMatchFramework,0> {}
class CTier2AppSystem<IGameTypes,0> : CTier1AppSystem<IGameTypes,0> {}
class CTier2AppSystem<IMatchFramework,0> : CTier1AppSystem<IMatchFramework,0> {}
class CTier3AppSystem<IGameTypes,0> : CTier2AppSystem<IGameTypes,0> {}
class CWorkshop_AddSpecialPayment_Request : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_AddSpecialPayment_Response : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class CWorkshop_GetContributors_Request : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_GetContributors_Response : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_PopulateItemDescriptions_Request : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_PopulateItemDescriptions_Request_ItemDescriptionsLanguageBlock : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_PopulateItemDescriptions_Request_SingleItemDescription : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_SetItemPaymentRules_Request : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_SetItemPaymentRules_Request_PartnerItemPaymentRule : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_SetItemPaymentRules_Request_WorkshopDirectPaymentRule : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_SetItemPaymentRules_Request_WorkshopItemPaymentRule : google::protobuf::Message { void* vtable[17]; }
class CWorkshop_SetItemPaymentRules_Response : google::protobuf::internal::ZeroFieldsBase { void* vtable[17]; }
class GCSDK::CGCClient { void* vtable[3]; }
class GCSDK::CGCClientJob : GCSDK::CJob {}
class GCSDK::CGCClientSharedObjectCache : GCSDK::CSharedObjectCache { void* vtable[9]; }
class GCSDK::CGCClientSharedObjectTypeCache : GCSDK::CSharedObjectTypeCache { void* vtable[7]; }
class GCSDK::CGCMsg<MsgGCGenericKV_t> : GCSDK::CMsgBase_t<GCSDK::GCMsgHdrEx_t> { void* vtable[1]; }
class GCSDK::CGCSOCacheSubscribedJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOCacheSubscriptionCheck : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOCacheUnsubscribedJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOCreateJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSODestroyJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOUpdateJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CGCSOUpdateMultipleJob : GCSDK::CGCClientJob { void* vtable[6]; }
class GCSDK::CJob { void* vtable[4]; }
class GCSDK::CMsgBase_t<GCSDK::GCMsgHdrEx_t> { void* vtable[1]; }
class GCSDK::CProtoBufGCClientSendHandler : GCSDK::CProtoBufMsgBase::IProtoBufSendHandler { void* vtable[1]; }
class GCSDK::CProtoBufMsg<CMsgSOCacheSubscribed> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionCheck> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOCacheSubscriptionRefresh> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOCacheUnsubscribed> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOMultipleObjects> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsg<CMsgSOSingleObject> : GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsgBase { void* vtable[2]; }
class GCSDK::CProtoBufMsgBase::IProtoBufSendHandler {}
class GCSDK::CProtoBufMsgMemoryPool<CMsgProtoBufHeader> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscribed> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionCheck> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheSubscriptionRefresh> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOCacheUnsubscribed> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOMultipleObjects> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPool<CMsgSOSingleObject> : GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CProtoBufMsgMemoryPoolBase { void* vtable[4]; }
class GCSDK::CSharedObjectCache { void* vtable[9]; }
class GCSDK::CSharedObjectTypeCache { void* vtable[7]; }
class GCSDK::CWorkThread : CThread { void* vtable[9]; }
class GCSDK::CWorkThreadPool { void* vtable[2]; }
class GameTypes : CGameAppSystem<IGameTypes,0> { void* vtable[76]; }
class IAppSystem {}
class IConnectionlessPacketHandler { void* vtable[2]; }
class IDatacenter {}
class IDatacenterCmdBatch {}
class IGameEventListener2 { void* vtable[2]; }
class IGameTypes : IAppSystem { void* vtable[76]; }
class ILeaderboardRequestQueue {}
class IMatchAsyncOperationCallback {}
class IMatchEventsSink {}
class IMatchEventsSubscription {}
class IMatchExtensions {}
class IMatchFramework : IAppSystem {}
class IMatchNetworkMsgController {}
class IMatchSearchResult {}
class IMatchServer {}
class IMatchSession {}
class IMatchSessionInternal : IMatchSession, IMatchEventsSink {}
class IMatchSystem {}
class IMatchTitle {}
class IMatchTitleGameSettingsMgr {}
class IMatchVoice {}
class IPlayer {}
class IPlayerFriend : IPlayer {}
class IPlayerLocal : IPlayer {}
class IPlayerManager {}
class ISearchManager {}
class IServerManager {}
class ISteamFriends {}
class ISteamMatchmakingServerListResponse {}
class Player<IPlayerFriend> : IPlayerFriend { void* vtable[13]; }
class Player<IPlayerLocal> : IPlayerLocal { void* vtable[9]; }
class PlayerFriend : Player<IPlayerFriend> { void* vtable[14]; }
class PlayerLocal : Player<IPlayerLocal> { void* vtable[9]; }
class PlayerManager : IPlayerManager, IMatchEventsSink { void* vtable[8]; }
