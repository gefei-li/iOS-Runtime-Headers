/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOverlayClusterProxyLayer : CALayer {
}

- (NSInteger)levelsOfDetail;
- (void)setHidden:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2 options:(id)arg3;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOpacity:(float)arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })tileSize;

@end
