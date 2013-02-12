/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLReorientingButton : UIButton {
    struct CGPoint { 
        float x; 
        float y; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    BOOL _animatingOrientationChange;
    BOOL _autorotationEnabled;
    } _defaultAnchorCenter;
    } _defaultAnchorTransform;
    float _endCapRadius;
    float _hitRectExtension;
    NSInteger _orientation;
    BOOL _watchingOrientationChanges;
}

@property BOOL autorotationEnabled;
@property float endCapRadius;
@property float hitRectExtension;

+ (void)_initializeSafeCategory;

- (void)_deviceOrientationChanged:(id)arg1;
- (NSInteger)_modeForRotationFromOrientation:(NSInteger)arg1 toOrientation:(NSInteger)arg2;
- (void)_setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1 rotationMode:(NSInteger)arg2;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformForOrientation:(NSInteger)arg1 rotationMode:(NSInteger)arg2;
- (BOOL)autorotationEnabled;
- (void)didMoveToSuperview;
- (float)endCapRadius;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (float)hitRectExtension;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)rotationAnimationDidStop;
- (void)setAutorotationEnabled:(BOOL)arg1;
- (void)setButtonOrientation:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setEndCapRadius:(float)arg1;
- (void)setHitRectExtension:(float)arg1;
- (void)startWatchingDeviceOrientationChanges;
- (void)stopWatchingDeviceOrientationChanges;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForOrientation:(NSInteger)arg1;

@end
