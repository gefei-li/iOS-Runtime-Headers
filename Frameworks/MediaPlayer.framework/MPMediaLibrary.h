/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibrary : NSObject {
    id _internal;
}

@property(readonly) NSDate *lastModifiedDate;

+ (void)_clearDefaultMediaLibrary;
+ (Class)_implementationClass;
+ (id)defaultMediaLibrary;
+ (BOOL)isLibraryServerDisabled;
+ (id)runLoopForNotifications;
+ (void)setLibraryServerDisabled:(BOOL)arg1;
+ (void)setRunLoopForNotifications:(id)arg1;

- (void)_didReceiveMemoryWarning:(id)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (void)_postLibraryDidChangeNotificationForSync;
- (void)_postLibraryDidChangeNotificationWithUserInfo:(id)arg1;
- (void)beginGeneratingLibraryChangeNotifications;
- (id)collectionSectionsForQuery:(id)arg1;
- (id)collectionsForQuery:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (NSInteger)containedMediaTypesForQuery:(id)arg1;
- (NSUInteger)countOfCollectionsForQuery:(id)arg1;
- (NSUInteger)countOfItemsForQuery:(id)arg1;
- (void)dealloc;
- (void)endGeneratingLibraryChangeNotifications;
- (id)fetchArtworkForSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2 item:(id)arg3;
- (id)fetchArtworkForSize:(struct CGSize { float x1; float x2; })arg1 inGeniusMixPlaylist:(id)arg2;
- (id)fetchArtworkForSize:(struct CGSize { float x1; float x2; })arg1 item:(id)arg2;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasAlbums;
- (BOOL)hasArtists;
- (BOOL)hasAudiobooks;
- (BOOL)hasComposers;
- (BOOL)hasGeniusMixes;
- (BOOL)hasGenres;
- (BOOL)hasMedia;
- (BOOL)hasPlaylists;
- (BOOL)hasPodcasts;
- (BOOL)hasSongs;
- (void)iTunesSyncPhaseDidFinish:(NSInteger)arg1 reason:(NSInteger)arg2;
- (void)iTunesSyncPhaseWillStart:(NSInteger)arg1;
- (id)init;
- (BOOL)isFilteringDisabled;
- (BOOL)isSyncing;
- (BOOL)isValidAssetURL:(id)arg1;
- (BOOL)itemExistsWithIdentifier:(unsigned long long)arg1;
- (id)itemSectionsForQuery:(id)arg1;
- (id)itemsForQuery:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2 includingProperties:(id)arg3;
- (id)itemsForQuery:(id)arg1 inRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg2;
- (BOOL)libraryHasBeenModifiedWithToken:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)modificationToken;
- (id)pathForAssetURL:(id)arg1;
- (BOOL)serverIsAlive;
- (void)setFilteringDisabled:(BOOL)arg1;

@end
