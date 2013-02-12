/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class IMAccount, NSMutableArray, NSTimer;

@interface CNFRegController : NSObject {
    struct { 
        unsigned int listeningForAccountChanges : 1; 
        unsigned int listeningForAccountActivation : 1; 
        unsigned int preventingIdleSleep : 1; 
        unsigned int showedWifiFirstRunAlert : 1; 
    IMAccount *_account;
    id _accountAddedBlock;
    id _accountRegistrationBlock;
    id _accountRemovedBlock;
    id _alertHandler;
    id _aliasAddedBlock;
    id _aliasRemovedBlock;
    id _aliasStatusChangedBlock;
    NSMutableArray *_aliases;
    } _controllerFlags;
    id _displayNameChangedBlock;
    NSTimer *_idlePulseTimer;
    unsigned char _originalCellFlag;
    BOOL _originalUsesBackgroundNetwork;
    unsigned char _originalWifiFlag;
    id _profileChangedBlock;
    id _profileStatusChangedBlock;
    NSInteger _requiredWifiCount;
    id _resetBlock;
    NSTimer *_wifiAlertWatchTimer;
}

@property(retain) IMAccount *account;
@property(copy) ? *accountAddedBlock;
@property(copy) ? *accountRegistrationBlock;
@property(copy) ? *accountRemovedBlock;
@property(copy) ? *alertHandler;
@property(copy) ? *aliasAddedBlock;
@property(copy) ? *aliasRemovedBlock;
@property(copy) ? *aliasStatusChangedBlock;
@property(retain,readonly) NSArray *aliases;
@property(copy) ? *displayNameChangedBlock;
@property(retain,readonly) NSMutableArray *mutableAliases;
@property(copy) ? *profileChangedBlock;
@property(copy) ? *profileStatusChangedBlock;
@property(copy) ? *resetBlock;
@property(retain,readonly) IMServiceImpl *service;
@property(getter=isFaceTimeEnabled) BOOL faceTimeEnabled;

+ (BOOL)deviceSupportsRegistrationInterface;
+ (id)sharedInstance;

- (void)_pulseIdleTimer:(id)arg1;
- (id)_rawAccountLogin;
- (void)_startWiFiAlertWatchTimer;
- (void)_stopWiFiAlertWatchTimer;
- (void)_wifiAlertWatchTimerFired:(id)arg1;
- (id)account;
- (void)accountAdded:(id)arg1;
- (id)accountAddedBlock;
- (void)accountDisplayNameChanged:(id)arg1;
- (id)accountLogin;
- (id)accountRegistrationBlock;
- (void)accountRegistrationChanged:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (id)accountRemovedBlock;
- (NSUInteger)accountState;
- (BOOL)activateAccount:(id)arg1;
- (BOOL)addAlias:(id)arg1;
- (id)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (id)aliasAddedBlock;
- (id)aliasRemovedBlock;
- (void)aliasStatusChanged:(id)arg1;
- (id)aliasStatusChangedBlock;
- (id)aliases;
- (void)aliasesChanged:(id)arg1;
- (void)clearAllCaches;
- (void)connect:(BOOL)arg1;
- (void)connect;
- (BOOL)createAccountWithLogin:(id)arg1 password:(id)arg2;
- (void)daemonConnected:(id)arg1;
- (void)daemonDisconnected:(id)arg1;
- (void)dealloc;
- (BOOL)deviceCanTakeNetworkAction;
- (BOOL)deviceHasSaneNetworkConnection;
- (BOOL)deviceHasWifiTurnedOn;
- (id)displayNameChangedBlock;
- (id)guessedAccountName;
- (id)guessedAlias;
- (void)handleAliasAdded:(id)arg1;
- (void)handleAliasRemoved:(id)arg1;
- (void)handleAliasStatusChanged:(id)arg1 withError:(id)arg2;
- (BOOL)hasAlias:(id)arg1;
- (BOOL)hasFailedLogin;
- (BOOL)hasRegisteredAccount;
- (BOOL)hasValidatedAlias;
- (BOOL)hasValidatedLocale;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isFaceTimeEnabled;
- (id)mutableAliases;
- (id)profileBasePhoneNumber;
- (void)profileChanged:(id)arg1;
- (id)profileChangedBlock;
- (id)profileRegionID;
- (id)profileStatusChangedBlock;
- (void)profileValidationStateChanged:(id)arg1;
- (NSInteger)profileValidationStatus;
- (void)reloadAliases;
- (BOOL)removeAlias:(id)arg1;
- (void)removeAllHandlers;
- (id)resetBlock;
- (void)resetWifiFirstRunAlert;
- (id)service;
- (void)setAccount:(id)arg1;
- (void)setAccountAddedBlock:(id)arg1;
- (void)setAccountRegistrationBlock:(id)arg1;
- (void)setAccountRemovedBlock:(id)arg1;
- (void)setAlertHandler:(id)arg1;
- (void)setAliasAddedBlock:(id)arg1;
- (void)setAliasRemovedBlock:(id)arg1;
- (void)setAliasStatusChangedBlock:(id)arg1;
- (void)setDisplayNameChangedBlock:(id)arg1;
- (void)setFaceTimeEnabled:(BOOL)arg1;
- (void)setProfileChangedBlock:(id)arg1;
- (void)setProfileStatusChangedBlock:(id)arg1;
- (void)setResetBlock:(id)arg1;
- (void)showWiFiAlert;
- (void)showWiFiAlertIfNecessary;
- (void)showWiFiFirstRunAlert;
- (BOOL)signOutAccount:(id)arg1;
- (BOOL)signOutCurrentAccount;
- (void)startListeningForAccountChanges;
- (void)startPreventingSleepAndDimming;
- (void)startRequiringWifi;
- (void)stopListeningForAccountChanges;
- (void)stopPreventingSleepAndDimming;
- (void)stopRequiringWifi;
- (id)useableAliases;
- (BOOL)validateAlias:(id)arg1;
- (NSInteger)validationStatusForAlias:(id)arg1;

@end
