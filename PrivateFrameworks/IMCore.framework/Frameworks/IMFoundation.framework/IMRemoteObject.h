/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSDate, NSProtocolChecker, NSString;

@interface IMRemoteObject : NSObject {
    unsigned int _willBeTerminated : 1;
    NSDate *_firstDateClientWasInformedOfDisconnected;
    NSUInteger _port;
    NSString *_portName;
    NSProtocolChecker *_protocolChecker;
    struct dispatch_queue_s { } *_queue;
    struct dispatch_source_s { } *_source;
    double _timeout;
}

+ (void)initialize;

- (void)_cleanupMachBits;
- (void)_informClientOfDisconnect;
- (void)_portDidBecomeInvalid;
- (struct dispatch_queue_s { }*)_queue;
- (void)_systemShutdown:(id)arg1;
- (void)dealloc;
- (id)description;
- (NSUInteger)forwardComponentArray:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithPortName:(id)arg1 protocol:(id)arg2;
- (void)invalidate;
- (BOOL)isValid;
- (double)messageSendTimeout;
- (id)methodSignatureForSelector:(SEL)arg1;
- (NSInteger)pid;
- (id)portName;
- (void)setMessageSendTimeout:(double)arg1;

@end
