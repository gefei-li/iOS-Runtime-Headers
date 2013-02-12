/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@interface UIApplicationAccessibility : UIApplicationAccessibility_super {
}

+ (void)_initializeSafeCategory;

- (NSInteger)_accessibilityApplicationForPosition:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityBundleIdentifier;
- (id)_accessibilityElementFirst:(BOOL)arg1 last:(BOOL)arg2;
- (BOOL)_accessibilityEscape;
- (id)_accessibilityFirstElement;
- (BOOL)_accessibilityHardwareKeyboardActive;
- (void)_accessibilityInitialize;
- (id)_accessibilityLastElement;
- (id)_accessibilityMainWindow;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilitySoftwareKeyboardActive;
- (id)_accessibilitySummaryElement;
- (id)_accessibilityTitleBarElement;
- (id)_accessibilityTypingCandidates;
- (id)_accessibilityUIWindowFindWithGlobalPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityUserTestingChildren;
- (id)_findContainerAccessibleElement:(id)arg1 first:(BOOL)arg2;
- (id)_firstStatusBarElement;
- (id)_lastStatusBarElement;
- (id)accessibilityAttributeValue:(NSInteger)arg1;
- (void)accessibilityDisable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;

@end
