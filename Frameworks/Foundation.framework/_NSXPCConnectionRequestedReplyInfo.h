/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSXPCConnectionRequestedReplyInfo : NSObject {
    id /* block */ _cleanupBlock;
    NSProgress *_progress;
}

@property (copy) id /* block */ cleanupBlock;
@property (retain) NSProgress *progress;

- (id /* block */)cleanupBlock;
- (void)dealloc;
- (id)progress;
- (void)setCleanupBlock:(id /* block */)arg1;
- (void)setProgress:(id)arg1;

@end