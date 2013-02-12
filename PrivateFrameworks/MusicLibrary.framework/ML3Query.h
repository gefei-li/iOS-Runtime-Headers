/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3AggregateQuery, ML3MusicLibrary, ML3Predicate, NSArray, NSLock, NSMutableArray, NSMutableIndexSet, NSString;

@interface ML3Query : NSObject <NSFastEnumeration, NSCoding> {
    Class _entityClass;
    BOOL _hasLoadedCountOnlyCount;
    BOOL _hasLoadedEveryPersistentID;
    ML3MusicLibrary *_library;
    NSMutableIndexSet *_loadedAggregateCountArray;
    NSUInteger *_loadedAggregatedCountArray;
    NSUInteger _loadedArrayCapacity;
    NSMutableIndexSet *_loadedArrayIndexSet;
    NSLock *_loadedArrayLock;
    NSInteger _loadedCountOnlyCount;
    long long *_loadedPersistentIDArray;
    ML3AggregateQuery *_nonDirectAggregateQuery;
    NSArray *_orderingProperties;
    ML3Predicate *_predicate;
    NSMutableArray *_sections;
    NSLock *_sectionsLock;
    NSString *_selectPersistentIDsSQLWithLimitClause;
    NSString *_selectPersistentIDsSQLWithoutLimitClause;
    BOOL _usingSections;
}

@property(readonly) ML3MusicLibrary *library;
@property(readonly) ML3QueryLoadOperation *loadEntitiesOperation;
@property(readonly) ML3QueryLoadOperation *loadSectionsOperation;
@property(readonly) ML3AggregateQuery *nonDirectAggregateQuery;
@property(readonly) NSArray *orderingProperties;
@property(readonly) ML3Predicate *predicate;
@property(retain) NSArray *sections;
@property(readonly) NSUInteger countOfEntities;
@property(readonly) NSUInteger countOfEntitiesNoLoad;
@property(readonly) Class entityClass;
@property(readonly) BOOL hasEntities;
@property BOOL hasLoadedCountOnlyCount;
@property BOOL hasLoadedEveryPersistentID;
@property NSInteger loadedCountOnlyCount;
@property(getter=areSectionsLoaded,readonly) BOOL sectionsLoaded;
@property(readonly) BOOL usingSections;

- (BOOL)_countByCountOnly:(NSUInteger*)arg1 loadIfNecessary:(BOOL)arg2;
- (BOOL)_countByPersistentIDs:(NSUInteger*)arg1 loadIfNecessary:(BOOL)arg2;
- (BOOL)_countBySections:(NSUInteger*)arg1 loadIfNecessary:(BOOL)arg2;
- (BOOL)areSectionsLoaded;
- (void)bindToCountSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout NSInteger*)arg2;
- (void)bindToPersistentIDsSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout NSInteger*)arg2;
- (void)bindToSectionsSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout NSInteger*)arg2;
- (NSUInteger)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(NSUInteger)arg3;
- (NSUInteger)countOfEntities;
- (NSUInteger)countOfEntitiesNoLoad;
- (void)dealloc;
- (id)description;
- (BOOL)distinctPersistentIDProperty;
- (void)encodeWithCoder:(id)arg1;
- (id)entityAtIndex:(NSUInteger)arg1;
- (Class)entityClass;
- (void)enumerateLoadedPersistentIDsInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateLoadedPersistentIDsUsingBlock:(id)arg1;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (BOOL)getAggregatedCount:(NSUInteger*)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)getPersistentID:(long long*)arg1 atIndex:(NSUInteger)arg2;
- (void)growLoadedArraysForIndex:(NSUInteger)arg1;
- (BOOL)hasEntities;
- (BOOL)hasLoadedCountOnlyCount;
- (BOOL)hasLoadedEntitesInRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (BOOL)hasLoadedEntityAtIndex:(NSUInteger)arg1;
- (BOOL)hasLoadedEveryPersistentID;
- (NSUInteger)indexOfEntity:(id)arg1;
- (NSUInteger)indexOfPersistentID:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingProperties:(id)arg4 usingSections:(BOOL)arg5 nonDirectAggregateQuery:(id)arg6;
- (void)insertLoadedAggregatedCount:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)insertLoadedPersistentID:(long long)arg1 atIndex:(NSUInteger)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)library;
- (void)loadAggregateCountForEntityAtIndex:(NSUInteger)arg1;
- (void)loadAllEntities;
- (id)loadCountOnlyOperation;
- (id)loadEntitiesOperation;
- (id)loadEntitiesOperationForRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 ordered:(BOOL)arg2 block:(id)arg3;
- (id)loadEntitiesOperationForRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1 ordered:(BOOL)arg2;
- (id)loadEntitiesOperationForRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)loadEntityAtIndex:(NSUInteger)arg1;
- (id)loadSectionsOperation;
- (void)loadedAllPersisentIDs;
- (NSInteger)loadedCountOnlyCount;
- (id)nonDirectAggregateQuery;
- (id)orderingProperties;
- (id)persistentIDProperty;
- (id)predicate;
- (id)sectionProperty;
- (id)sections;
- (id)selectCountSQL;
- (id)selectPersistentIDsSQL;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingProperties:(id)arg3 directionality:(id)arg4;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingProperties:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 orderingProperties:(id)arg2 directionality:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingProperties:(id)arg2;
- (id)selectSectionsSQL;
- (id)selectUnorderedPersistentIDsSQL;
- (void)setHasLoadedCountOnlyCount:(BOOL)arg1;
- (void)setHasLoadedEveryPersistentID:(BOOL)arg1;
- (void)setLoadedCountOnlyCount:(NSInteger)arg1;
- (void)setSections:(id)arg1;
- (BOOL)usingSections;
- (void)visitGroupMembersOfEntityAtIndex:(NSUInteger)arg1 visitor:(int (*)())arg2 context:(void*)arg3;

@end
