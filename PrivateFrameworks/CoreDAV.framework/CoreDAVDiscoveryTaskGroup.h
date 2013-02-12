/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSArray, NSMutableArray, NSString;

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate, CoreDAVSVRLookupTaskDelegate> {
    BOOL _didReceiveAuthenticationError;
    NSMutableArray *_discoveries;
    NSArray *_httpPorts;
    NSString *_httpServiceString;
    NSArray *_httpsPorts;
    NSString *_httpsServiceString;
    NSString *_requiredComplianceClass;
    NSArray *_wellKnownPaths;
}

@property <CoreDAVDiscoveryTaskGroupDelegate> *delegate;
@property BOOL didReceiveAuthenticationError;

- (void)addToDiscoveryArray:(id*)arg1 discovery:(id)arg2;
- (id)allDiscoveryPaths:(id)arg1;
- (id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2;
- (void)cancelTasks;
- (id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2;
- (void)completeDiscovery:(id)arg1 gotPrincipalURL:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (BOOL)didReceiveAuthenticationError;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpDefaultPort:(NSInteger)arg3 httpsDefaultPort:(NSInteger)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (void)optionsTask:(id)arg1 responseHeaders:(id)arg2 error:(id)arg3;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)setDidReceiveAuthenticationError:(BOOL)arg1;
- (id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2;
- (void)sortDiscoveries:(id)arg1 priorFailed:(id*)arg2 subsequentFailed:(id*)arg3 priorIncomplete:(id*)arg4 subsequentIncomplete:(id*)arg5 priorUnstarted:(id*)arg6 subsequentUnstarted:(id*)arg7 priorSuccess:(id*)arg8 subsequentSuccess:(id*)arg9;
- (void)srvLookupTask:(id)arg1 host:(id)arg2 port:(NSInteger)arg3 error:(id)arg4;
- (void)startOptionsTask:(id)arg1;
- (void)startPropfindTask:(id)arg1;
- (void)startSRVLookup:(id)arg1 serviceString:(id)arg2;
- (void)syncAway;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
