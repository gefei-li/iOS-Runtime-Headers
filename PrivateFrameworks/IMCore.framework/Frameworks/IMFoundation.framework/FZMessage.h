/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSError, NSString;

@interface FZMessage : NSObject <NSCoding, NSCopying, IMSecureObject> {
    NSString *_URL;
    NSDictionary *_attributes;
    NSAttributedString *_body;
    NSError *_error;
    NSArray *_fileTransferGUIDs;
    NSInteger _flags;
    NSString *_guid;
    NSDictionary *_senderInfo;
    NSString *_subject;
    NSDate *_time;
}

- (id)URL;
- (void)_cleanMessage;
- (void)adjustIsEmptyFlag;
- (id)attributes;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)fileTransferGUIDs;
- (NSInteger)flags;
- (id)guid;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(NSInteger)arg6 error:(id)arg7 guid:(id)arg8;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(NSInteger)arg6 error:(id)arg7 guid:(id)arg8;
- (BOOL)isAlert;
- (BOOL)isEmpty;
- (BOOL)isFinished;
- (BOOL)isPrepared;
- (NSInteger)securityLevel;
- (id)sender;
- (id)senderInfo;
- (void)setAttributes:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFileTransferGUIDs:(id)arg1;
- (void)setFlags:(NSInteger)arg1;
- (void)setSecurityLevel:(NSInteger)arg1;
- (void)setSender:(id)arg1;
- (void)setSenderInfo:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setURL:(id)arg1;
- (id)subject;
- (id)time;

@end
