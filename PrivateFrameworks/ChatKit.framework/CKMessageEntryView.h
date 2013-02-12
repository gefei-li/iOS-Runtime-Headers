/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKContentEntryView, UIButton, UIImageView, UILabel, UIView;

@interface CKMessageEntryView : UIImageView <UIScrollViewDelegate> {
    NSInteger _animationState;
    NSUInteger _characterCountDenominator;
    UILabel *_characterCountLabel;
    NSUInteger _characterCountNumerator;
    CKContentEntryView *_contentField;
    id _delegate;
    UIView *_inputFieldBackground;
    UIImageView *_inputFieldCover;
    BOOL _isCharacterCountVisible;
    UIButton *_photoButton;
    UIButton *_sendButton;
}

@property(readonly) UIButton *photoButton;
@property id delegate;

+ (void)_initializeSafeCategory;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })balloonViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })characterCountFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFieldViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (float)defaultHeight;
+ (float)defaultWidthInPortrait;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })entryAreaViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)initialize;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })photoButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sendButtonFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (void)_handleUIApplicationResumed:(id)arg1;
- (void)_layout;
- (void)_updateCharacterCountLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })balloonFrame;
- (BOOL)ckContentEntryViewContentSizeChanged:(id)arg1 height:(float)arg2 animate:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentEntryFrame:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disableSendButton;
- (NSUInteger)displayedLines;
- (void)enableSendButton;
- (id)entryField;
- (BOOL)hasAttachments;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isCharacterCountVisible;
- (BOOL)isReallyFirstResponder;
- (id)photoButton;
- (void)send:(id)arg1;
- (void)setAnimationState:(NSInteger)arg1;
- (void)setCharacterCountNumerator:(NSUInteger)arg1 denominator:(NSUInteger)arg2;
- (void)setCharacterCountVisible:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateForSettingsChange;

@end
