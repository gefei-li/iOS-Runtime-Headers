/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSInternalQueueController : NSObject {
    void * _contextKey;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void)assertQueueIsCurrent;
- (void)assertQueueIsNotCurrent;
- (void)dealloc;
- (id)init;
- (id)initWithName:(char *)arg1 contextKey:(void*)arg2;
- (BOOL)isQueueCurrent;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 waitUntilDone:(BOOL)arg2;
- (id)queue;

@end
