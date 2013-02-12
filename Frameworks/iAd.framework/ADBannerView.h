/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class <ADBannerViewDelegate>, ADBannerData, ADRemoteView, ADSession, NSSet, NSString;

@interface ADBannerView : UIView {
    NSString *_advertisingSection;
    BOOL _bannerLoaded;
    BOOL _bannerViewActionInProgress;
    BOOL _createdForIBInternal;
    NSString *_currentContentSizeIdentifier;
    <ADBannerViewDelegate> *_delegate;
    BOOL _delegateImplementsActionDidFinish;
    BOOL _delegateImplementsActionShouldBegin;
    BOOL _delegateImplementsDidLoadAd;
    BOOL _delegateImplementsError;
    ADBannerData *_localAd;
    NSInteger _previousOrientation;
    ADRemoteView *_remoteView;
    NSSet *_requiredContentSizeIdentifiers;
    ADSession *_session;
}

@property(copy) NSString *advertisingSection;
@property(copy) NSString *currentContentSizeIdentifier;
@property <ADBannerViewDelegate> *delegate;
@property(retain) ADBannerData *localAd;
@property(retain) ADRemoteView *remoteView;
@property(copy) NSSet *requiredContentSizeIdentifiers;
@property(retain) ADSession *session;
@property(getter=isBannerLoaded,readonly) BOOL bannerLoaded;
@property(getter=isBannerViewActionInProgress) BOOL bannerViewActionInProgress;
@property(readonly) BOOL createdForIBInternal;
@property(readonly) BOOL delegateImplementsActionDidFinish;
@property(readonly) BOOL delegateImplementsActionShouldBegin;
@property(readonly) BOOL delegateImplementsDidLoadAd;
@property(readonly) BOOL delegateImplementsError;
@property(readonly) BOOL isVisible;
@property NSInteger previousOrientation;

+ (void)setServerURL:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeFromBannerContentSizeIdentifier:(id)arg1;

- (void)_checkForSessionOpenTimeout;
- (void)_commonInit;
- (void)_loadDebuggerFromPath:(id)arg1 portName:(id)arg2;
- (void)_orientationChanged;
- (id)_parentViewController;
- (void)_propagateFrame;
- (void)_propagateProperties;
- (void)_sanitizeAndForwardErrorToDelegate:(id)arg1;
- (void)_sendBannerKeysDidChangeMessageWithObject:(id)arg1 forKey:(id)arg2;
- (void)_updateSpecification;
- (id)advertisingSection;
- (void)cancelBannerViewAction;
- (BOOL)createdForIBInternal;
- (id)currentContentSizeIdentifier;
- (void)dealloc;
- (id)delegate;
- (BOOL)delegateImplementsActionDidFinish;
- (BOOL)delegateImplementsActionShouldBegin;
- (BOOL)delegateImplementsDidLoadAd;
- (BOOL)delegateImplementsError;
- (void)didMoveToWindow;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isBannerLoaded;
- (BOOL)isBannerViewActionInProgress;
- (BOOL)isVisible;
- (id)localAd;
- (NSInteger)previousOrientation;
- (id)remoteView;
- (id)requiredContentSizeIdentifiers;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (id)session;
- (void)sessionBannerViewActionDidBegin:(id)arg1;
- (void)sessionBannerViewActionDidFinish:(id)arg1;
- (BOOL)sessionBannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
- (void)sessionBannerViewDidFailToReceiveAd:(id)arg1 withError:(id)arg2;
- (void)sessionBannerViewDidLoad:(id)arg1;
- (void)sessionDidBecomeAvailable:(id)arg1;
- (void)sessionDidClose:(id)arg1;
- (void)sessionDidOpen:(id)arg1 withWindowContextId:(id)arg2;
- (void)setAdvertisingSection:(id)arg1;
- (void)setBannerViewActionInProgress:(BOOL)arg1;
- (void)setCurrentContentSizeIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setLocalAd:(id)arg1;
- (void)setPreviousOrientation:(NSInteger)arg1;
- (void)setRemoteView:(id)arg1;
- (void)setRequiredContentSizeIdentifiers:(id)arg1;
- (void)setSession:(id)arg1;

@end
