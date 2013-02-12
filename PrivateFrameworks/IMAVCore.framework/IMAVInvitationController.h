/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVInvitationController : NSObject {
}

+ (void)_markSetup;
+ (void)acceptInvitationRequestFromBuddy:(id)arg1 forConference:(id)arg2;
+ (NSUInteger)currentAVChatEndedReason;
+ (NSUInteger)currentAVChatState;
+ (void)declineInvitationRequestFromBuddy:(id)arg1 forConference:(id)arg2;
+ (id)delegate;
+ (void)sendResponse:(NSUInteger)arg1 toInvitationRequestFromBuddy:(id)arg2 forConference:(id)arg3;
+ (void)setDelegate:(id)arg1;
+ (void)setupIMAVInvitationController;

@end
