/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme, NSNumber;

@interface GKAchievementCellContent : GKMultilineCellContentView {
    NSNumber *_cellRow;
    BOOL _highlighted;
    BOOL _offsetImage;
    GKUITheme *_theme;
}

@property(retain) NSNumber *cellRow;
@property(retain) GKUITheme *theme;
@property(getter=isHighlighted) BOOL highlighted;
@property BOOL offsetImage;

+ (id)placeholderImage;

- (id)cellRow;
- (void)dealloc;
- (void)drawLineIndex:(NSUInteger)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 highlighted:(BOOL)arg3;
- (id)init;
- (BOOL)isHighlighted;
- (BOOL)offsetImage;
- (void)setCellRow:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOffsetImage:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;

@end
