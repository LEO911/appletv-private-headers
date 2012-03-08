/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "CoreData-Structs.h"

@class NSMutableArray, NSManagedObjectModel;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
@private
	persistentStoreCoordinatorFlags _flags;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
	NSMutableArray *_extendedStoreURLs;	// 12 = 0xc
	id _externalRecordsHelper;	// 16 = 0x10
	NSManagedObjectModel *_managedObjectModel;	// 20 = 0x14
	id _coreLock;	// 24 = 0x18
	NSMutableArray *_persistentStores;	// 28 = 0x1c
}
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x330bc789; converted property
@property(readonly, retain) NSMutableArray *persistentStores;	// G=0x3315ae95; converted property
+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;	// 0x3315ad91
+ (Class)_classForPersistentStoreAtURL:(id)url;	// 0x3315badd
+ (void)_registerCoreDataStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x330eab65
+ (void)_registerDefaultStoreClassesAndTypes;	// 0x330ea919
+ (Class)_storeClassForStoreType:(id)storeType;	// 0x330bc7f9
+ (id)_storeTypeForStore:(id)store;	// 0x3315ff3d
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3315ad8d
+ (void)initialize;	// 0x330e9fe5
+ (id)metadataForPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x3315b039
+ (void)registerStoreClass:(Class)aClass forStoreType:(id)storeType;	// 0x3315bcc9
+ (id)registeredStoreTypes;	// 0x3315bbb1
+ (BOOL)setMetadata:(id)metadata forPersistentStoreOfType:(id)type URL:(id)url error:(id *)error;	// 0x3315b679
- (id)initWithManagedObjectModel:(id)managedObjectModel;	// 0x330b5229
- (id)URLForPersistentStore:(id)persistentStore;	// 0x3315cd7d
- (void)_addPersistentStore:(id)store identifier:(id)identifier;	// 0x330c99fd
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore;	// 0x3315d77d
- (void)_assignObject:(id)object toPersistentStore:(id)persistentStore forConfiguration:(id)configuration;	// 0x3315d985
- (void)_assignObjects:(id)objects toStore:(id)store;	// 0x3315e181
- (BOOL)_canSaveGraphRootedAtObject:(id)object intoStore:(id)store withPreviouslyChecked:(CFSetRef)previouslyChecked withAcceptableEntities:(CFSetRef)acceptableEntities;	// 0x33161225
- (id)_checkRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x331605cd
- (id)_conflictsWithRowCacheForObject:(id)object andStore:(id)store;	// 0x33161719
- (void)_copyMetadataFromStore:(id)store toStore:(id)store2 migrationManager:(id)manager;	// 0x3315fc95
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type error:(id *)error;	// 0x3315d8b1
- (BOOL)_destroyPersistentStoreAtURL:(id)url withType:(id)type options:(id)options error:(id *)error;	// 0x3315dea5
- (void)_doPreSaveAssignmentsForObjects:(id)objects;	// 0x33160291
- (id)_fetchAllInstancesFromStore:(id)store intoContext:(id)context underlyingException:(id *)exception;	// 0x3315efbd
- (void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)objectIDs withSelector:(SEL)selector;	// 0x330e20a1
- (BOOL)_isRegisteredWithUbiquity;	// 0x330e3e51
- (id)_newConflictRecordForObject:(id)object andOriginalRow:(id)row;	// 0x3315d6cd
- (id)_newObjectGraphStyleRecordForRow:(id)row andObject:(id)object;	// 0x33160f79
- (id)_persistentStoreForIdentifier:(id)identifier;	// 0x330c9c0d
- (void)_postStoresChangedNotificationsForStores:(id)stores changeKey:(id)key options:(id)options;	// 0x330c9f1d
- (id)_realStoreTypeForStoreWithType:(id)type URL:(id)url error:(id *)error;	// 0x3315d7ed
- (BOOL)_removePersistentStore:(id)store;	// 0x3315aef1
- (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 storeType:(id)type error:(id *)error;	// 0x3315da7d
- (id)_retainedAllMigratedObjectsInStore:(id)store toStore:(id)store2;	// 0x3315f809
- (id)_saveRequestForStore:(id)store originalRequest:(id)request andOptimisticLocking:(id)locking;	// 0x3315e6ad
- (void)_setIsRegisteredWithUbiquity:(BOOL)ubiquity;	// 0x3315ad99
- (id)addPersistentStoreWithType:(id)type configuration:(id)configuration URL:(id)url options:(id)options error:(id *)error;	// 0x330b9521
- (void)dealloc;	// 0x330e37e5
- (id)executeRequest:(id)request withContext:(id)context error:(id *)error;	// 0x330cba99
- (void)finalize;	// 0x3315d0c9
- (id *)knownKeyValuesForObjectID:(id)objectID withContext:(id)context;	// 0x3315d651
- (void)lock;	// 0x330bc799
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)managedObjectContext;	// 0x3315d6b9
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)managedObjectContext;	// 0x330e208d
- (id)managedObjectIDForURIRepresentation:(id)urirepresentation;	// 0x3315c20d
- (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x3315bed1
// converted property getter: - (id)managedObjectModel;	// 0x330bc789
- (id)metadataForPersistentStore:(id)persistentStore;	// 0x3315adbd
- (id)migratePersistentStore:(id)store toURL:(id)url options:(id)options withType:(id)type error:(id *)error;	// 0x3315c291
- (id)newValueForRelationship:(id)relationship forObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x3315d685
- (id)newValuesForObjectWithID:(id)anId withContext:(id)context error:(id *)error;	// 0x330df945
- (BOOL)obtainPermanentIDsForObjects:(id)objects error:(id *)error;	// 0x3315e261
- (id)persistentStoreCoordinator;	// 0x3315ad95
- (id)persistentStoreForIdentifier:(id)identifier;	// 0x3315d8d5
- (id)persistentStoreForURL:(id)url;	// 0x330c9ab9
// converted property getter: - (id)persistentStores;	// 0x3315ae95
- (BOOL)removePersistentStore:(id)store error:(id *)error;	// 0x3315ce05
- (void)setMetadata:(id)metadata forPersistentStore:(id)persistentStore;	// 0x3315d4b1
- (BOOL)setURL:(id)url forPersistentStore:(id)persistentStore;	// 0x3315af45
- (BOOL)tryLock;	// 0x330e3e65
- (void)unlock;	// 0x330c9bb1
@end
