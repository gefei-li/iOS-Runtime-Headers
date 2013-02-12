/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPhotoTileViewControllerDelegate>, MLPhoto, PLExpandableImageView, PLImageScrollView, PLRotationView, PLVideoView, UIGestureRecognizer, UIImage, UIImageView;

@interface PLPhotoTileViewController : UIViewController <UIScrollViewDelegate, PLImageRotationAnimationProtocol> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _imageIsThumbnail : 1;
    unsigned int _isTVOut : 1;
    unsigned int _zooming : 1;
    unsigned int _autoZooming : 1;
    unsigned int _zoomGesturesEnabled : 1;
    unsigned int _canPinchToCollapse : 1;
    unsigned int _userDidZoom : 1;
    unsigned int _ignoreZoomChange : 1;
    unsigned int _tileParentIsPageController : 1;
    unsigned int _lockedUnderCropOverlay : 1;
    unsigned int _viewDidAppear : 1;
    unsigned int _viewWillAppear : 1;
    unsigned int _didRequestFullSizeImage : 1;
    unsigned int _useZoomScaleForCropRect : 1;
    unsigned int _hdrBadgeShouldBeVisible : 1;
    unsigned int _didSetHDRForModelPhoto : 1;
    BOOL _allowZoomToFill;
    BOOL _clientIsTemporarilyWallpaper;
    } _cropOverlayRect;
    } _cropRect;
    } _cropRectBeforeDragging;
    float _cropRectZoomScale;
    NSInteger _currentRotationDegrees;
    UIGestureRecognizer *_doubleTapGestureRecognizer;
    BOOL _forceNativeScreenScale;
    UIImageView *_gradientView;
    UIImageView *_hdrBadgeImageView;
    UIImage *_image;
    NSInteger _imageOrientation;
    NSInteger _imageRotationDegrees;
    } _imageSize;
    PLExpandableImageView *_imageView;
    BOOL _isBeingDeleted;
    NSInteger _lastDisplayedOrientation;
    float _maxZoomScale;
    float _minZoomScale;
    NSInteger _mode;
    MLPhoto *_modelPhoto;
    id _orientationDelegate;
    UIImage *_pendingImage;
    PLRotationView *_rotationView;
    PLImageScrollView *_scrollView;
    UIGestureRecognizer *_singleTapGestureRecognizer;
    <PLPhotoTileViewControllerDelegate> *_tileDelegate;
    } _tileFrame;
    NSInteger _tileIndex;
    UIImage *_unscaledImage;
    BOOL _useLessThanMinZoomForZoomedOutTest;
    BOOL _userDidAdjustWallpaper;
    PLVideoView *_videoView;
    float _wallpaperLandscapeZoomScale;
    float _wallpaperPortraitZoomScale;
    float _zoomScaleBeforeZooming;
    BOOL _zoomToFillInsteadOfToFit;
    float _zoomToFillScale;
}

@property(retain) MLPhoto *photo;
@property(retain) UIImage *thumbnailImage;
@property(retain) UIImage *unscaledImage;
@property BOOL forceNativeScreenScale;
@property BOOL isBeingDeleted;
@property(readonly) NSInteger rotationDegrees;
@property CGRect tileFrame;

+ (id)createPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 image:(id)arg2 allowZoomToFill:(BOOL)arg3 mode:(NSInteger)arg4;
+ (id)createPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 imageRef:(struct CGImage { }*)arg2 imageOrientation:(NSInteger)arg3 allowZoomToFill:(BOOL)arg4 mode:(NSInteger)arg5;
+ (id)createPhotoTileViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 modelPhoto:(id)arg2 mode:(NSInteger)arg3;
+ (struct CGSize { float x1; float x2; })tileSize;
+ (struct CGSize { float x1; float x2; })tvOutTileSize;

- (void)_addRotationView;
- (void)_adjustScrollViewContentInsetWithContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_adjustScrollViewVerticalContentOffset;
- (float)_calculateZoomScale:(BOOL)arg1 inView:(id)arg2;
- (void)_centerImageInScrollView;
- (BOOL)_clientIsWallpaper;
- (void)_configureViews;
- (id)_createOriginalImageForPickerFromCachedData;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (NSInteger)_imageOrientation;
- (BOOL)_imageRotationAngleAffectsBounds;
- (float)_minZoomScaleInView:(id)arg1;
- (void)_repositionHDRBadge;
- (void)_requestFullSizeImage;
- (void)_resetRotationState;
- (void)_setDefaultZoomScale;
- (void)_setImage:(id)arg1 isThumbnail:(BOOL)arg2;
- (void)_setRotationDegrees:(NSInteger)arg1;
- (void)_setupHDRBadge;
- (void)_updateGradientImageForOrientation:(NSInteger)arg1;
- (void)_updateModelPhotoWithImage:(id)arg1;
- (void)_updateZoomScalesForView:(id)arg1;
- (float)_zoomToFillScaleInView:(id)arg1;
- (BOOL)allowsEditing;
- (void)contentViewFrameChanged;
- (id)createImageWithCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 croppedImageData:(id*)arg2 fullScreenImageData:(id*)arg3 fullScreenImage:(struct CGImage {}**)arg4 imageCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5 padWithBlack:(BOOL)arg6;
- (void)dealloc;
- (float)defaultZoomScale;
- (id)description;
- (id)dictionaryWithCroppedImageForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withOptions:(NSInteger)arg2;
- (void)didCancelRotation;
- (void)didFinishRotation;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (void)ensureFullSizeImageLoaded;
- (id)expandableImageView;
- (BOOL)forceNativeScreenScale;
- (void)forceZoomingGesturesEnabled;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForImageAtDefaultScale;
- (BOOL)gesturesEnabled;
- (BOOL)hasFullSizeImage;
- (id)image;
- (NSInteger)imageOrientation;
- (id)imageView;
- (id)init;
- (id)initForPageController;
- (id)initWithPhoto:(id)arg1 image:(id)arg2 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 isThumbnail:(BOOL)arg4 imageOrientation:(NSInteger)arg5 allowZoomToFill:(BOOL)arg6 mode:(NSInteger)arg7;
- (id)initWithPhoto:(id)arg1 thumbnailImage:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (BOOL)isBeingDeleted;
- (BOOL)isTVOut;
- (BOOL)isZoomedOut;
- (id)layoutHistory;
- (void)loadView;
- (float)maxZoomScale;
- (float)minRotatedScale;
- (float)minZoomScale;
- (id)photo;
- (BOOL)photoShouldHaveHDRBadge;
- (void)prepareForReuse;
- (id)retainedCGImageBackedUIImage;
- (NSInteger)rotationDegrees;
- (struct CGSize { float x1; float x2; })scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(struct CGSize { float x1; float x2; })arg3;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setAllowsZoomToFill:(BOOL)arg1;
- (void)setClientIsWallpaper:(BOOL)arg1;
- (void)setCropOverlayRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)setForceNativeScreenScale:(BOOL)arg1;
- (void)setFullSizeImage:(id)arg1;
- (void)setGesturesEnabled:(BOOL)arg1;
- (void)setHDRBadgeVisible:(BOOL)arg1;
- (void)setIsBeingDeleted:(BOOL)arg1;
- (void)setLockedUnderCropOverlay:(BOOL)arg1;
- (void)setOrientationDelegate:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setTVOut:(BOOL)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setTileDelegate:(id)arg1;
- (void)setTileFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTileIndex:(NSInteger)arg1;
- (void)setUnscaledImage:(id)arg1;
- (void)setVideoView:(id)arg1;
- (void)setZoomScale:(float)arg1;
- (void)setZoomingGesturesEnabled:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg1;
- (id)thumbnailImage;
- (id)tileDelegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tileFrame;
- (NSInteger)tileIndex;
- (BOOL)tileIsOnScreen;
- (id)unscaledImage;
- (void)updateAfterCollapse;
- (void)updateZoomScales;
- (BOOL)userDidAdjustWallpaper;
- (id)videoView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg1 duration:(double)arg2;
- (void)willStartRotatingByDegrees:(NSInteger)arg1;
- (float)zoomToFillScale;

@end
