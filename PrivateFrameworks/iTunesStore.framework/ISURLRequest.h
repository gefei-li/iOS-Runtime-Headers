/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSArray, NSLock, SSMutableURLRequestProperties;

@interface ISURLRequest : NSObject <NSCoding, NSCopying> {
    NSInteger _assetType;
    long long _expectedContentLength;
    NSLock *_lock;
    SSMutableURLRequestProperties *_properties;
    NSInteger _urlBagType;
    NSArray *_urls;
}

@property(retain) NSData *HTTPBody;
@property(retain) NSString *HTTPMethod;
@property(retain) NSArray *URLs;
@property(retain) NSString *appleClientApplication;
@property(retain) NSDictionary *customHeaders;
@property(readonly) NSURL *primaryURL;
@property(retain) NSDictionary *queryStringDictionary;
@property NSInteger URLBagType;
@property NSInteger allowedRetryCount;
@property NSInteger assetType;
@property NSUInteger cachePolicy;
@property long long expectedContentLength;
@property double timeoutInterval;

+ (id)requestWithURL:(id)arg1;

- (id)HTTPBody;
- (id)HTTPMethod;
- (NSInteger)URLBagType;
- (id)URLs;
- (id)_initCommon;
- (NSInteger)allowedRetryCount;
- (id)appleClientApplication;
- (NSInteger)assetType;
- (NSUInteger)cachePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customHeaders;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)newURLRequestWithURL:(id)arg1;
- (id)primaryURL;
- (id)queryStringDictionary;
- (void)setAllowedRetryCount:(NSInteger)arg1;
- (void)setAppleClientApplication:(id)arg1;
- (void)setAssetType:(NSInteger)arg1;
- (void)setCachePolicy:(NSUInteger)arg1;
- (void)setCustomHeaders:(id)arg1;
- (void)setExpectedContentLength:(long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setQueryStringDictionary:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURLBagType:(NSInteger)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forQueryStringParameter:(id)arg2;
- (double)timeoutInterval;

@end
