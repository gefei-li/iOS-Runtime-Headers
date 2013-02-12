/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface GKPlayer : NSObject {
    NSArray *_achievementListFromServer;
    NSMutableArray *_achievementsAchievedList;
    NSString *_alias;
    NSDictionary *_avatarDescription;
    NSDictionary *_avatarURLs;
    NSMutableArray *_cachedAvatars;
    NSString *_email;
    NSString *_firstName;
    NSString *_friendRequestID;
    BOOL _hasDetailInfo;
    NSInteger _inviteStatus;
    BOOL _isFriend;
    NSString *_lastName;
    NSDictionary *_lastPlayedGameDescriptor;
    double _lastPlayedTime;
    double _lastSeenTime;
    NSNumber *_numberAchievedForCurrentGame;
    NSUInteger _numberOfAchievements;
    NSUInteger _numberOfFriends;
    NSUInteger _numberOfGamesPlayed;
    NSString *_playerID;
    id _rateCompletionHandler;
    NSInteger _rating;
    NSString *_status;
}

@property(readonly) GKABPlayer *GKABPlayer;
@property(retain) NSArray *achievementListFromServer;
@property(retain) NSArray *achievementListFromServer;
@property(retain) NSMutableArray *achievementsAchievedList;
@property(retain) NSMutableArray *achievementsAchievedList;
@property(retain) NSString *alias;
@property(copy) NSString *alias;
@property(retain) NSDictionary *avatarDescription;
@property(retain) NSDictionary *avatarDescription;
@property(retain) NSDictionary *avatarURLs;
@property(retain) NSDictionary *avatarURLs;
@property(retain,readonly) NSString *cacheKey;
@property(retain) NSMutableArray *cachedAvatars;
@property(retain) NSString *email;
@property(retain) NSString *firstName;
@property(retain) NSString *friendRequestID;
@property(retain) NSString *lastName;
@property(readonly) GKGame *lastPlayedGame;
@property(retain) NSDictionary *lastPlayedGameDescriptor;
@property(retain) NSNumber *numberAchievedForCurrentGame;
@property(retain) NSNumber *numberAchievedForCurrentGame;
@property(retain) NSString *playerID;
@property(copy) ? *rateCompletionHandler;
@property(readonly) NSString *realName;
@property(copy) NSString *status;
@property BOOL hasDetailInfo;
@property BOOL hasDetailInfo;
@property NSInteger inviteStatus;
@property NSInteger inviteStatus;
@property BOOL isFriend;
@property BOOL isFriend;
@property double lastPlayedTime;
@property double lastPlayedTime;
@property double lastSeenTime;
@property double lastSeenTime;
@property NSUInteger numberOfAchievements;
@property NSUInteger numberOfAchievements;
@property NSUInteger numberOfFriends;
@property NSUInteger numberOfFriends;
@property NSUInteger numberOfGamesPlayed;
@property NSUInteger numberOfGamesPlayed;
@property(readonly) NSInteger rating;
@property NSInteger rating;

+ (id)anonymousPlayer;
+ (void)clearCache;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadPlayersForIdentifiers:(id)arg1 withDetails:(BOOL)arg2 withCompletionHandler:(id)arg3;
+ (id)playerWithAlias:(id)arg1 playerID:(id)arg2 friendRequestID:(id)arg3;
+ (id)playerWithDictionary:(id)arg1;
+ (id)playerWithUniqueID:(id)arg1;
+ (void)updatePlayersWithFriendIDs:(id)arg1;

- (id)GKABPlayer;
- (void)_loadAvatarImageForSize:(NSInteger)arg1 withCompletionHandler:(id)arg2;
- (void)_postChangeNotification;
- (void)_receivedMemoryWarning:(id)arg1;
- (void)acceptFriendRequestForHandle:(id)arg1 withCompletionHandler:(id)arg2;
- (id)achievementListFromServer;
- (id)achievementsAchievedList;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (id)alias;
- (void)attachToContact:(void*)arg1;
- (id)avatarDescription;
- (id)avatarURLForSize:(NSInteger)arg1;
- (id)avatarURLs;
- (id)cacheKey;
- (id)cachedAvatars;
- (void)clearDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)declineFriendRequest:(id)arg1;
- (id)description;
- (void)displayRatingViewWithCompletionHandler:(id)arg1;
- (id)email;
- (id)firstName;
- (id)friendRequestID;
- (void)getABPersonData;
- (BOOL)hasDetailInfo;
- (NSUInteger)hash;
- (id)initWithPlayerID:(id)arg1;
- (NSInteger)inviteStatus;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFriend;
- (id)lastName;
- (id)lastPlayedGame;
- (id)lastPlayedGameDescriptor;
- (double)lastPlayedTime;
- (double)lastSeenTime;
- (void)loadAvatarForSize:(NSInteger)arg1 withCompletionHandler:(id)arg2;
- (void)loadAvatarImageForSize:(NSInteger)arg1 withCompletionHandler:(id)arg2;
- (void)loadGamesPlayed:(id)arg1;
- (void)loadInfoDetailed:(BOOL)arg1 withCompletionHandler:(id)arg2;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (id)numberAchievedForCurrentGame;
- (NSUInteger)numberOfAchievements;
- (NSUInteger)numberOfFriends;
- (NSUInteger)numberOfGamesPlayed;
- (id)playerID;
- (BOOL)populateWithDictionary:(id)arg1;
- (void)postChangeNotification;
- (id)rateCompletionHandler;
- (NSInteger)rating;
- (id)realName;
- (void)reloadDetails;
- (void)sendFriendRequestWithMessage:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setAchievementListFromServer:(id)arg1;
- (void)setAchievementsAchievedList:(id)arg1;
- (void)setAlias:(id)arg1;
- (void)setAvatarDescription:(id)arg1;
- (void)setAvatarURLs:(id)arg1;
- (void)setCachedAvatars:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFriendRequestID:(id)arg1;
- (void)setHasDetailInfo:(BOOL)arg1;
- (void)setInviteStatus:(NSInteger)arg1;
- (void)setIsFriend:(BOOL)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastPlayedGameDescriptor:(id)arg1;
- (void)setLastPlayedTime:(double)arg1;
- (void)setLastSeenTime:(double)arg1;
- (void)setNumberAchievedForCurrentGame:(id)arg1;
- (void)setNumberOfAchievements:(NSUInteger)arg1;
- (void)setNumberOfFriends:(NSUInteger)arg1;
- (void)setNumberOfGamesPlayed:(NSUInteger)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setRateCompletionHandler:(id)arg1;
- (void)setRating:(NSInteger)arg1;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)submitRating:(NSInteger)arg1 withCompletionHandler:(id)arg2;

@end
