/* Generated by RuntimeBrowser.
 */

@protocol UINamedLayerStack <NSObject>

@required

- (struct CGImage { }*)flattenedImage;
- (NSArray *)layers;
- (NSString *)name;
- (float)scale;
- (struct CGSize { float x1; float x2; })size;

@optional

- (BOOL)flatImageContainsCornerRadius;
- (id)radiosityImage;
- (struct CGSize { float x1; float x2; })radiosityImageScale;

@end
