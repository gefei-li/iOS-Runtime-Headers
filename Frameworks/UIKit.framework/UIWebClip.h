/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableData, NSString, NSURL, NSURLConnection, UIImage;

@interface UIWebClip : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableData *_customIconData;
    NSMutableData *_customStartupImageData;
    NSMutableData *_customStartupLandscapeImageData;
    NSURLConnection *_iconConnection;
    NSURLConnection *_startupImageConnection;
    NSURLConnection *_startupLandscapeImageConnection;
    BOOL classicMode;
    id delegate;
    BOOL fullScreen;
    UIImage *iconImage;
    BOOL iconIsScreenShotBased;
    NSURL *iconURL;
    NSString *identifier;
    NSURL *pageURL;
    NSURL *precomposedIconURL;
    BOOL removalDisallowed;
    float scale;
    } scrollPoint;
    UIImage *startupImage;
    NSURL *startupImageURL;
    UIImage *startupLandscapeImage;
    NSURL *startupLandscapeImageURL;
    NSInteger statusBarStyle;
    NSString *title;
}

@property(retain) UIImage *iconImage;
@property(readonly) NSString *iconImagePath;
@property(retain) NSURL *iconURL;
@property(copy) NSString *identifier;
@property(retain) NSURL *pageURL;
@property(retain) NSURL *precomposedIconURL;
@property(retain) UIImage *startupImage;
@property(retain) NSURL *startupImageURL;
@property(retain) UIImage *startupLandscapeImage;
@property(retain) NSURL *startupLandscapeImageURL;
@property(copy) NSString *title;
@property BOOL classicMode;
@property id delegate;
@property BOOL fullScreen;
@property(readonly) BOOL iconIsScreenShotBased;
@property BOOL removalDisallowed;
@property float scale;
@property CGPoint scrollPoint;
@property NSInteger statusBarStyle;

+ (id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2;
+ (id)pathForWebClipWithIdentifier:(id)arg1;
+ (id)urlForWebClipWithIdentifier:(id)arg1;
+ (BOOL)webClipClassicModeValueForWebDocumentView:(id)arg1;
+ (BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1;
+ (NSInteger)webClipStatusBarStyleForWebDocumentView:(id)arg1;
+ (id)webClipWithIdentifier:(id)arg1;
+ (id)webClipWithURL:(id)arg1;
+ (id)webClips;
+ (id)webClipsDirectoryPath;

- (id)_bundleImageWithName:(id)arg1;
- (id)_bundleResourceWithName:(id)arg1;
- (id)_displayIdentifierString;
- (id)_info;
- (id)_initWithIdentifier:(id)arg1;
- (void)_readPropertiesFromBundle:(struct __CFBundle { }*)arg1;
- (BOOL)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2;
- (BOOL)classicMode;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)createOnDisk;
- (void)dealloc;
- (id)delegate;
- (BOOL)fullScreen;
- (id)getStartupImage:(NSInteger)arg1;
- (id)getStartupImage;
- (id)iconImage;
- (id)iconImagePath;
- (BOOL)iconIsScreenShotBased;
- (id)iconURL;
- (id)identifier;
- (id)pageURL;
- (id)precomposedIconURL;
- (BOOL)removalDisallowed;
- (BOOL)removeFromDisk;
- (void)requestCustomIconUpdateWithDelegate:(id)arg1;
- (void)requestCustomStartupImageUpdateWithDelegate:(id)arg1;
- (void)requestCustomStartupLandscapeImageUpdateWithDelegate:(id)arg1;
- (void)requestCustomStartupPortraitImageUpdateWithDelegate:(id)arg1;
- (void)requestIconUpdateInSpringBoard;
- (float)scale;
- (struct CGPoint { float x1; float x2; })scrollPoint;
- (void)setClassicMode:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFullScreen:(BOOL)arg1;
- (void)setIconImage:(id)arg1 isScreenShotBased:(BOOL)arg2;
- (void)setIconImage:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setPrecomposedIconURL:(id)arg1;
- (void)setRemovalDisallowed:(BOOL)arg1;
- (void)setScale:(float)arg1;
- (void)setScrollPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setStartupImage:(id)arg1;
- (void)setStartupImageURL:(id)arg1;
- (void)setStartupLandscapeImage:(id)arg1;
- (void)setStartupLandscapeImageURL:(id)arg1;
- (void)setStatusBarStyle:(NSInteger)arg1;
- (void)setTitle:(id)arg1;
- (id)startupImage;
- (id)startupImageURL;
- (id)startupLandscapeImage;
- (id)startupLandscapeImageURL;
- (NSInteger)statusBarStyle;
- (void)stopLoadingCustomIcon;
- (void)stopLoadingStartupImage;
- (void)stopLoadingStartupLandscapeImage;
- (id)title;
- (void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1;
- (BOOL)updateOnDisk;

@end
