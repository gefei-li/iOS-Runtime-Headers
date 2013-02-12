/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class <GKVoiceChatSessionDelegate>, GKRWLock, GKSessionInternal, GKVoiceChatServiceFocus, GKWifiListener, NSMutableArray, NSMutableDictionary, NSString, VoiceChatMessageSendQueue, VoiceChatSessionRoster;

@interface GKVoiceChatSessionInternal : NSObject <GKSessionVoiceChatDelegate, GKVoiceChatClient, VideoConferenceSpeakingDelegate, WifiListenerDelegate> {
    NSUInteger _audioInputAvailable;
    NSUInteger _conferenceID;
    NSMutableArray *_connectedFocusPeers;
    NSMutableArray *_connectedPeers;
    NSMutableArray *_connectedVoicePeers;
    BOOL _currentWifiState;
    NSMutableArray *_focusPausedPeers;
    GKSessionInternal *_gkSession;
    NSMutableArray *_mutedPeers;
    NSMutableArray *_myPausedList;
    NSMutableDictionary *_peerChannelQuality;
    NSString *_peerID;
    id _publicWrapper;
    VoiceChatSessionRoster *_roster;
    GKRWLock *_rwLock;
    VoiceChatMessageSendQueue *_sendQueue;
    NSString *_sessionName;
    NSUInteger _sessionState;
    GKVoiceChatServiceFocus *_vcService;
    GKWifiListener *_wifiListener;
    BOOL activeSession;
    NSUInteger congestionState;
    <GKVoiceChatSessionDelegate> *delegate;
    BOOL focusCallbacks;
    NSInteger goodChannels;
    BOOL needsRecalculateGoodChannels;
    float sessionVolume;
    NSUInteger talkingPeersLimit;
}

@property <GKVoiceChatSessionDelegate> *delegate;
@property(readonly) NSArray *peerList;
@property(readonly) NSString *sessionName;
@property(getter=isActiveSession) BOOL activeSession;
@property(readonly) NSUInteger conferenceID;
@property float sessionVolume;
@property NSUInteger talkingPeersLimit;

- (void)addPeerToFocusPausedList:(id)arg1;
- (void)audioInputDidChange:(unsigned long)arg1;
- (NSInteger)calculateChannelQualities;
- (void)calculateConferenceID;
- (void)cleanup;
- (void)cleanupProc:(id)arg1;
- (NSUInteger)conferenceID;
- (void)dealloc;
- (id)decodePeerID:(id)arg1;
- (id)delegate;
- (id)delegate;
- (void)didStartSpeaking:(id)arg1;
- (void)didStopSpeaking:(id)arg1;
- (id)encodePeerID:(id)arg1;
- (NSInteger)goodChannels;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)informClientVoiceChatFocusChange:(id)arg1;
- (void)informClientVoiceChatSilent:(id)arg1;
- (void)informClientVoiceChatSpeaking:(id)arg1;
- (id)initWithGKSession:(id)arg1 publicWrapper:(id)arg2 sessionName:(id)arg3;
- (BOOL)isActiveSession;
- (BOOL)isEqual:(id)arg1;
- (void)lossRate:(float)arg1 forParticipantID:(id)arg2;
- (void)parseConnectedPeers:(id)arg1;
- (void)parseMutedPeers:(id)arg1 forPeer:(id)arg2;
- (id)participantID;
- (void)pauseAll;
- (NSUInteger)peerCount;
- (id)peerList;
- (void)pruneBadLinks;
- (void)removeFromFocusPausedList:(id)arg1;
- (void)sendConnectedPeers;
- (void)sendMutedPeers;
- (void)session:(id)arg1 didReceiveAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 didReceiveOOBAudioPacket:(id)arg2 fromPeerID:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(NSInteger)arg3;
- (id)sessionName;
- (float)sessionVolume;
- (void)setActiveSession:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMute:(BOOL)arg1 forPeer:(id)arg2;
- (void)setSessionVolume:(float)arg1;
- (void)setTalkingPeersLimit:(NSUInteger)arg1;
- (void)startSession;
- (void)startSessionInternal;
- (void)stopSession;
- (void)stopSessionInternal;
- (NSUInteger)talkingPeersLimit;
- (void)unPauseAll;
- (void)updatedConnectedPeers:(id)arg1;
- (void)updatedFocusID:(NSUInteger)arg1;
- (void)updatedFocusPeers:(id)arg1;
- (void)updatedMutedPeers:(id)arg1 forPeer:(id)arg2;
- (void)updatedSubscribedBeaconList:(id)arg1;
- (void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(NSInteger)arg3;
- (void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
- (void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
- (void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;
- (void)wifiStateDidChange:(BOOL)arg1;

@end
