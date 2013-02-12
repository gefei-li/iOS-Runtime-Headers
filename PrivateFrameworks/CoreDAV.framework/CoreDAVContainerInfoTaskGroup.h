/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;

@interface CoreDAVContainerInfoTaskGroup : CoreDAVTaskGroup {
    char *_appSpecificHomeSetProp;
    char *_appSpecificNamespace;
    NSMutableSet *_containerPaths;
    NSMutableSet *_containers;
    NSInteger _phase;
}

@property <CoreDAVContainerInfoTaskGroupDelegate> *delegate;

- (id)_copyContainerAdditionalTopLevelInfoPropFindElements;
- (id)_copyContainerHomeSetPropFindElements;
- (void)_getContainerHomeSet;
- (void)_getContainerTopLevelInfo;
- (Class)_resourceTypeParseClass;
- (void)_setAdditionalProperties:(id)arg1 onContainer:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)getDataClassSpecificContainerInfo;
- (id)initWithAccountInfoProvider:(id)arg1 containerPaths:(id)arg2 taskManager:(id)arg3;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)syncAway;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
