/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKLeaderboardCellBackgroundView : GKCellBackgroundView {
    NSInteger _gkCellStyle;
    float _rankAvailableWidth;
}

@property NSInteger gkCellStyle;
@property float rankAvailableWidth;

+ (id)cellBackgroundWithTheme:(id)arg1 tableViewStyle:(NSInteger)arg2;
+ (id)selectedCellBackgroundWithTheme:(id)arg1 tableViewStyle:(NSInteger)arg2;

- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawScaledFillImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 context:(struct CGContext { }*)arg3;
- (NSInteger)gkCellStyle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)rankAvailableWidth;
- (void)setGkCellStyle:(NSInteger)arg1;
- (void)setRankAvailableWidth:(float)arg1;

@end
