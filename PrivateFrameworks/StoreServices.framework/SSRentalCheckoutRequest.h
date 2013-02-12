/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray;

@interface SSRentalCheckoutRequest : SSRequest {
    NSArray *_sinfs;
}

@property(readonly) NSArray *sinfs;

- (id)copyPropertyListEncoding;
- (void)dealloc;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithSinfs:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (id)sinfs;

@end
