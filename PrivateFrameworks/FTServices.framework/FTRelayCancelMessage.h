/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSNumber, NSString;

@interface FTRelayCancelMessage : FTMessage {
    NSString *_peerID;
    NSData *_peerPushToken;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
    NSNumber *_reason;
    NSData *_relayConnectionID;
    NSNumber *_relayType;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
}

@property(copy) NSString *peerID;
@property(copy) NSData *peerPushToken;
@property(copy) NSData *peerRelayIP;
@property(copy) NSNumber *peerRelayPort;
@property(copy) NSNumber *reason;
@property(copy) NSData *relayConnectionID;
@property(copy) NSNumber *relayType;
@property(copy) NSData *selfRelayIP;
@property(copy) NSNumber *selfRelayPort;

- (id)bagKey;
- (void)dealloc;
- (id)messageBody;
- (id)peerID;
- (id)peerPushToken;
- (id)peerRelayIP;
- (id)peerRelayPort;
- (id)reason;
- (id)relayConnectionID;
- (id)relayType;
- (id)requiredKeys;
- (id)selfRelayIP;
- (id)selfRelayPort;
- (void)setPeerID:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setPeerRelayPort:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRelayConnectionID:(id)arg1;
- (void)setRelayType:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;

@end
