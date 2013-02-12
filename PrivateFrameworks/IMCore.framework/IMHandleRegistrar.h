/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface IMHandleRegistrar : NSObject {
    NSMutableArray *_allIMHandles;
    NSMutableDictionary *_candidateNamesMap;
    NSMutableSet *_knownConflictingNames;
    NSInteger _nameStyle;
    NSMutableDictionary *_siblingsMap;
    NSMutableDictionary *_usedUniqueNames;
}

+ (id)sharedInstance;

- (void)_addressBookChanged;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2;
- (void)_dumpOutAllIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (void)_rebuildUniqueNameMapWithStyleChange:(BOOL)arg1;
- (id)allIMHandles;
- (id)autorelease;
- (id)candidateUniqueNamesForIMHandle:(id)arg1;
- (void)clearNameReservationsForObject:(id)arg1;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (void)dealloc;
- (void)imHandleInfoChanged:(id)arg1;
- (id)init;
- (NSInteger)nameStyle;
- (void)reassessIMHandleForUniqueName:(id)arg1 rebuild:(BOOL)arg2;
- (void)reassessIMHandleForUniqueName:(id)arg1;
- (void)rebuildUniqueNameMap;
- (void)registerIMHandle:(id)arg1;
- (oneway void)release;
- (NSUInteger)retainCount;
- (void)setNameStyle:(NSInteger)arg1;
- (id)siblingsForIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;

@end
