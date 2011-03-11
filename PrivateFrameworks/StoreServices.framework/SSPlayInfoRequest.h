/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPlayInfoResponse, <SSPlayInfoRequestDelegate>, SSPlayInfoRequestContext;

@interface SSPlayInfoRequest : SSRequest  {
    SSPlayInfoRequestContext *_context;
    SSPlayInfoResponse *_response;
}

@property(readonly) SSPlayInfoRequestContext * playInfoContext;
@property(readonly) SSPlayInfoResponse * playInfoResponse;
@property <SSPlayInfoRequestDelegate> * delegate;


- (id)init;
- (void)dealloc;
- (id)initWithPlayInfoContext:(id)arg1;
- (id)playInfoResponse;
- (void)_sendResponseToDelegate:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (id)playInfoContext;
- (id)handleFailureResponse:(id)arg1;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end