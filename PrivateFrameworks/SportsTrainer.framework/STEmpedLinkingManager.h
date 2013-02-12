/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class <STEmpedLinkingManagerDelegate>;

@interface STEmpedLinkingManager : NSObject {
    unsigned int _isLinking : 1;
    <STEmpedLinkingManagerDelegate> *_delegate;
}

@property <STEmpedLinkingManagerDelegate> *delegate;

+ (void)_startLinking;
+ (void)_startRemoteLinking;
+ (void)_stopLinking;

- (void)_empedLinkingStateChanged:(id)arg1;
- (void)_fakeEmpedLinkingStateChanged:(BOOL)arg1 afterDelay:(double)arg2;
- (void)_remoteLinkingStateChanged:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)isLinking;
- (void)setDelegate:(id)arg1;
- (void)startLinking;
- (void)startRemoteLinking;
- (void)stopLinking;
- (void)unlinkRemote;
- (void)unlinkSensor;

@end
