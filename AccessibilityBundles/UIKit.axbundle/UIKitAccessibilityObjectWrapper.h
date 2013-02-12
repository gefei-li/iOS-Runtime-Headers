/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@interface UIKitAccessibilityObjectWrapper : UIKitAccessibilityObjectWrapper_super {
}

+ (void)_initializeSafeCategory;

- (id)_accessibilityAncestorForSiblings;
- (id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1;
- (id)_accessibilityConvertTextMarkersToDataArray:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (BOOL)_accessibilityIsFirstSibling;
- (BOOL)_accessibilityIsLastSibling;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityLinePosition:(BOOL)arg1 withMarker:(id)arg2;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (id)_accessibilityMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityMarkerPosition:(BOOL)arg1 withMarker:(id)arg2;
- (void)_accessibilityModifySelection:(id)arg1 increase:(BOOL)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (void)_accessibilityScrollToVisible;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityWebDocumentView;
- (BOOL)_isCheckBox;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityBoundsForTextMarkers:(id)arg1;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (id)accessibilityElementAtIndex:(NSInteger)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityLanguage;
- (id)accessibilityPostProcessHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityValue;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)description;
- (NSInteger)indexOfAccessibilityElement:(id)arg1;
- (void)postFocusChangeNotification;
- (void)postLayoutChangeNotification;
- (void)postSelectedTextChangeNotification;

@end
