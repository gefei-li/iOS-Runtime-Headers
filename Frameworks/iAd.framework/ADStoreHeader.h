/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class NSString;

@interface ADStoreHeader : PBCodable {
    NSString *_key;
    NSString *_value;
}

@property(retain) NSString *key;
@property(retain) NSString *value;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)init;
- (id)key;
- (BOOL)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
