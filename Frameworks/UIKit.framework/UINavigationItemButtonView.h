/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationItemButtonView : UINavigationItemView {
    BOOL _pressed;
    NSInteger _style;
}

+ (void)_initializeSafeCategory;

- (id)_defaultFont;
- (void)_drawBackground;
- (id)_scriptingInfo;
- (void)_styleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (unsigned long long)accessibilityTraits;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (struct CGSize { float x1; float x2; })imageSize;
- (BOOL)pressed;
- (void)setPressed:(BOOL)arg1;
- (void)setStyle:(NSInteger)arg1 animated:(BOOL)arg2;
- (void)setStyle:(NSInteger)arg1;
- (id)title;

@end
