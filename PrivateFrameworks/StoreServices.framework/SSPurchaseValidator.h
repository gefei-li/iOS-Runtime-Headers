/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPurchaseValidationContext;

@interface SSPurchaseValidator : NSObject {
    SSPurchaseValidationContext *_context;
}

@property(readonly) SSPurchaseValidationContext *purchaseValidationContext;

- (BOOL)_checkDiskSpaceForPurchases:(id)arg1 response:(id)arg2;
- (BOOL)_checkNetworkConstraintsForPurchases:(id)arg1 response:(id)arg2;
- (BOOL)_checkSoftwareCapabilitiesForPurchase:(id)arg1 response:(id)arg2;
- (BOOL)_checkSystemVersionForPurchase:(id)arg1 response:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithPurchaseValidationContext:(id)arg1;
- (id)purchaseValidationContext;
- (id)validatePurchases:(id)arg1;

@end
