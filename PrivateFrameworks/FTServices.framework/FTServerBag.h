/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class IMConnectionMonitor, NSData, NSDictionary, NSMutableData, NSMutableURLRequest, NSString, NSURL, NSURLConnection, NSURLResponse;

@interface FTServerBag : NSObject <IMConnectionMonitorDelegate> {
    unsigned int _allowSelfSignedCertificates : 1;
    unsigned int _allowUnsignedBags : 1;
    NSString *_apsEnvironmentName;
    NSDictionary *_bag;
    NSURL *_bagURL;
    NSDictionary *_cachedBag;
    NSData *_certData;
    IMConnectionMonitor *_connectionMonitor;
    NSURLResponse *_currentResponse;
    NSMutableData *_currentResponseData;
    NSURLConnection *_currentURLConnection;
    struct __SecTrust { } *_trust;
    NSMutableURLRequest *_urlRequest;
}

+ (id)sharedInstance;

- (void)_cancelCurrentLoad;
- (void)_clearCache;
- (id)_initWithURL:(id)arg1 apsEnvironmentName:(id)arg2 allowSelfSignedCertificates:(BOOL)arg3 allowUnsignedBags:(BOOL)arg4;
- (void)_invalidate;
- (void)_loadFromCache;
- (BOOL)_loadFromDictionary:(id)arg1 returningError:(id*)arg2;
- (BOOL)_loadFromSignedDictionary:(id)arg1 returningError:(id*)arg2;
- (void)_processBagResultData:(id)arg1 response:(id)arg2;
- (void)_saveToCache;
- (BOOL)allowSelfSignedCertificates;
- (BOOL)allowUnsignedBags;
- (id)apsEnvironmentName;
- (id)bagURL;
- (BOOL)checkData:(id)arg1 againstSignature:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (BOOL)isServerAvailable;
- (BOOL)isValid;
- (id)objectForKey:(id)arg1;
- (void)reloadBag;
- (void)setCertificateData:(id)arg1;
- (void)startBagLoad;
- (id)urlWithKey:(id)arg1;

@end
