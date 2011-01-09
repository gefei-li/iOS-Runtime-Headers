/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKTilePathHashTable, NSLock;



@interface MKMiniTiledLayer : CALayer 
{
    float _zoomScale;
    float _roundedZoomScale;
    NSUInteger _zoomLevel;
    struct CADoubleSize { 
        double width; 
        double height; 
    } _tileSize;
    BOOL _drawingEnabled;
    MKTilePathHashTable *_tileLookup;
    NSUInteger _maxTiles;
    NSUInteger _lastPrefetchTiles;
    NSUInteger _prefetchTiles;
    float _lastTileZoomScale;
    struct CADoubleRect { 
        struct CADoublePoint { 
            double x; 
            double y; 
        } origin; 
        struct CADoubleSize { 
            double width; 
            double height; 
        } size; 
    } _lastTileRect;
    NSLock *_tileLock;
}

@property CGSize tileSize;
@property float maximumTileScale;
@property NSUInteger prefetchTiles;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;


- (BOOL)relayoutNecessaryForZoomScale:(float)arg1;
- (void)tileRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2;
- (float)maximumTileScale;
- (void)setMaximumTileScale:(float)arg1;
- (void)tileRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceNeedsDisplay:(BOOL)arg2 forceDisplay:(BOOL)arg3 ignoreDrawingEnabled:(BOOL)arg4;
- (void)invalidateTilesInRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPrefetchTiles:(NSUInteger)arg1;
- (NSUInteger)prefetchTiles;
- (void)displayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2 options:(id)arg3;
- (BOOL)isDrawingEnabled;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(NSInteger)arg2;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (id)init;
- (float)zoomScale;
- (BOOL)setZoomScale:(float)arg1;
- (void)flush;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)dealloc;
- (id)actionForKey:(id)arg1;

@end