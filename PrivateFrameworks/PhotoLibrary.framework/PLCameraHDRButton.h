/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCameraHDRButtonDelegate>, PLCameraFlashLabelView, UIImageView;

@interface PLCameraHDRButton : PLReorientingButton {
    <PLCameraHDRButtonDelegate> *_delegate;
    BOOL _hdrEnabled;
    PLCameraFlashLabelView *_hdrOffLabel;
    PLCameraFlashLabelView *_hdrOnLabel;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
}

@property <PLCameraHDRButtonDelegate> *delegate;
@property BOOL HDREnabled;

+ (void)_initializeSafeCategory;

- (BOOL)HDREnabled;
- (void)_handleSingleTap:(id)arg1;
- (void)_setHDREnabled:(BOOL)arg1 notifyDelegate:(BOOL)arg2 animated:(BOOL)arg3;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setHDREnabled:(BOOL)arg1 notifyDelegate:(BOOL)arg2;
- (void)setHDREnabled:(BOOL)arg1;

@end
