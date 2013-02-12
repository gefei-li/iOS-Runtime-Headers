/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@class CPDistributedMessagingCenter, NSLock, NSObject<MSSearchDelegate>;

@interface MSSearch : NSObject {
    NSObject<MSSearchDelegate> *_delegate;
    NSLock *_lock;
    CPDistributedMessagingCenter *_search;
    CPDistributedMessagingCenter *_server;
}

@property NSObject<MSSearchDelegate> *delegate;

+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4 delegate:(id)arg5;

- (id)_activeSearch;
- (id)_callMailServicesMethod:(id)arg1 arg:(id)arg2 reply:(id*)arg3 error:(id*)arg4;
- (id)_copyServer;
- (id)_didFindMessageData:(id)arg1 userInfo:(id)arg2;
- (id)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(BOOL)arg3 onServer:(BOOL)arg4;
- (id)_initWithDelegate:(id)arg1;
- (void)_mailServiceDidTerminate:(id)arg1;
- (void)_setActiveSearch:(id)arg1;
- (void)_setServer:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
