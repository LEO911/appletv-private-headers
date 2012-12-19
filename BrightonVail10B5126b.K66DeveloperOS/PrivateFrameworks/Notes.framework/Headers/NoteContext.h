/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library
#import "Notes-Structs.h"

@class NSNumber, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPredicate, CPExclusiveLock, NoteStoreObject, NoteAccountObject, NSMutableDictionary, NSString;

@interface NoteContext : NSObject {
	NSManagedObjectModel *_managedObjectModel;	// 4 = 0x4
	NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 12 = 0xc
@private
	NSPredicate *_searchPredicate;	// 16 = 0x10
	NoteStoreObject *_localStore;	// 20 = 0x14
@protected
	NoteAccountObject *_localAccount;	// 24 = 0x18
	CXIndexRef __SharedNoteStoreSearchIndex;	// 28 = 0x1c
	CPExclusiveLock *__SharedNoteStoreSearchIndexLock;	// 32 = 0x20
	int __SharedNoteStoreSearchIndexCount;	// 36 = 0x24
	BOOL _isIndexing;	// 40 = 0x28
	NSManagedObjectContext *_nextIdContext;	// 44 = 0x2c
	CPExclusiveLock *_nextIdLock;	// 48 = 0x30
	NSNumber *_nextId;	// 52 = 0x34
	CPExclusiveLock *_objectCreationLock;	// 56 = 0x38
	unsigned _notificationCount;	// 60 = 0x3c
	BOOL _logChanges;	// 64 = 0x40
	BOOL _indexInBatches;	// 65 = 0x41
	BOOL _hasPriorityInSaveConflicts;	// 66 = 0x42
	BOOL _inMigrator;	// 67 = 0x43
	NSString *_testingFilePrefix;	// 68 = 0x44
	NSString *_testingFilePath;	// 72 = 0x48
@private
	NSMutableDictionary *_notePropertyObjectsRealized;	// 76 = 0x4c
}
@property(readonly, assign, nonatomic) BOOL isIndexing;	// G=0x347e9cdd; @synthesize=_isIndexing
@property(readonly, retain) NoteAccountObject *localAccount;	// G=0x347e1fc1; converted property
@property(readonly, retain) NoteStoreObject *localStore;	// G=0x347e1f29; converted property
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x347e4c41; 
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x347e4de9; converted property
@property(readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x347e5009; converted property
+ (BOOL)databaseIsCorrupt:(id)corrupt;	// 0x347dc839
+ (BOOL)shouldLogIndexing;	// 0x347dc7b9
- (id)init;	// 0x347de9a9
- (id)initForMigrator;	// 0x347de5fd
- (id)initWithTestingFilePrefix:(id)testingFilePrefix;	// 0x347de661
- (id)initWithTestingFilePrefix:(id)testingFilePrefix atPath:(id)path inMigrator:(BOOL)migrator;	// 0x347de6d1
- (id)initWithTestingFilePrefix:(id)testingFilePrefix inMigrator:(BOOL)migrator;	// 0x347de575
- (void).cxx_destruct;	// 0x347e9cfd
- (void)_createLocalAccount:(id *)account andStore:(id *)store;	// 0x347dcb19
- (id)_notePropertyObjectForKey:(id)key;	// 0x347e2841
- (id)accountForAccountId:(id)accountId;	// 0x347e1af5
- (id)allAccounts;	// 0x347e1795
- (id)allNotes;	// 0x347e09bd
- (id)allNotesInCollection:(id)collection;	// 0x347e0acd
- (id)allNotesMatchingPredicate:(id)predicate;	// 0x347e0ba5
- (id)allNotesWithoutBodiesInCollection:(id)collection;	// 0x347e0f11
- (id)allStores;	// 0x347e1281
- (id)allVisibleNotes;	// 0x347e020d
- (id)allVisibleNotesInCollection:(id)collection;	// 0x347e0255
- (id)allVisibleNotesMatchingPredicate:(id)predicate;	// 0x347e032d
- (void)cleanUpLocks;	// 0x347e99f9
- (void)clearCaches;	// 0x347df0d5
- (id)collectionForInfo:(id)info;	// 0x347e1065
- (id)collectionForObjectID:(id)objectID;	// 0x347df31d
- (id)copyNotesForSearch:(void *)search complete:(char *)complete;	// 0x347e901d
- (id)copyNotesForSearch:(void *)search predicate:(id)predicate complete:(char *)complete;	// 0x347e9055
- (unsigned)countOfNotes;	// 0x347e0a4d
- (unsigned)countOfNotesInCollection:(id)collection;	// 0x347e0b3d
- (unsigned)countOfNotesMatchingPredicate:(id)notesMatchingPredicate;	// 0x347e0c5d
- (unsigned)countOfStores;	// 0x347e156d
- (unsigned)countOfVisibleNotes;	// 0x347e0231
- (unsigned)countOfVisibleNotesInCollection:(id)collection;	// 0x347e02c5
- (unsigned)countOfVisibleNotesMatchingPredicate:(id)visibleNotesMatchingPredicate;	// 0x347e04b9
- (void)dealloc;	// 0x347dea09
- (id)defaultStoreForNewNote;	// 0x347e1ded
- (BOOL)deleteAccount:(id)account;	// 0x347e2441
- (void)deleteChanges:(id)changes;	// 0x347df6fd
- (BOOL)deleteIndexFile;	// 0x347e9c61
- (void)deleteNote:(id)note;	// 0x347df44d
- (void)deleteNoteRegardlessOfConstraints:(id)constraints;	// 0x347df6a9
- (BOOL)deleteStore:(id)store;	// 0x347e24cd
- (void)destroySearchIndex;	// 0x347e6709
- (void)enableChangeLogging:(BOOL)logging;	// 0x347df855
- (id)findNotesWithText:(id)text betweenDate:(id)date andDate:(id)date3;	// 0x347e93c9
- (BOOL)forceDeleteAccount:(id)account;	// 0x347e229d
- (void)forceSetUpUniqueObjects;	// 0x347dd6bd
- (id)getNextIdObject;	// 0x347e3b7d
- (void)handleMigration;	// 0x347e2d59
- (BOOL)handleSaveErrors:(id)errors;	// 0x347dfaa1
- (BOOL)hasMultipleEnabledStores;	// 0x347e2771
- (void)indexInBatches:(BOOL)batches;	// 0x347e6c31
- (void)indexNotes:(id)notes;	// 0x347e5919
- (void)invalidate;	// 0x347df879
// declared property getter: - (BOOL)isIndexing;	// 0x347e9cdd
- (id)liveNotesNeedingBodiesPredicate;	// 0x347deb11
// converted property getter: - (id)localAccount;	// 0x347e1fc1
// converted property getter: - (id)localStore;	// 0x347e1f29
// declared property getter: - (id)managedObjectContext;	// 0x347e4c41
// converted property getter: - (id)managedObjectModel;	// 0x347e4de9
- (id)newFRCForCollection:(id)collection delegate:(id)delegate;	// 0x347deb95
- (id)newFetchRequestForNotes;	// 0x347def39
- (void *)newSearchContextWithText:(id)text;	// 0x347e8f91
- (id)newlyAddedAccount;	// 0x347e1a81
- (id)newlyAddedNote;	// 0x347df1bd
- (id)newlyAddedStore;	// 0x347e120d
- (id)nextIndex;	// 0x347e42b5
- (id)noteChangeWithType:(int)type store:(id)store;	// 0x347e7b49
- (id)noteForObjectID:(id)objectID;	// 0x347e0d05
- (BOOL)noteIsSafeToAccess:(id)access;	// 0x347e9a6d
- (id)notesForIntegerIds:(id)integerIds;	// 0x347e0d9d
- (id)notesToResumeIndexing;	// 0x347e580d
- (id)pathForIndex;	// 0x347e4981
- (id)pathForPersistentStore;	// 0x347e4815
// converted property getter: - (id)persistentStoreCoordinator;	// 0x347e5009
- (id)propertyValueForKey:(id)key;	// 0x347e2cf1
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)changeLogging;	// 0x347e6c55
- (void)removeConflictingSqliteAndIdxFiles;	// 0x347de0a9
- (void)removeSqliteAndIdxFiles;	// 0x347dde29
- (void)resetNotificationCount;	// 0x347e6d81
- (void)resumeIndexing;	// 0x347e6af5
- (id)rootDirectory;	// 0x347e47e1
- (BOOL)save:(id *)save;	// 0x347df939
- (void)saveNotesToResumeIndexing:(id)resumeIndexing;	// 0x347e553d
- (BOOL)saveOutsideApp:(id *)app;	// 0x347df911
- (BOOL)saveSilently:(id *)silently;	// 0x347e0069
- (CXIndexRef)searchIndex:(char *)index;	// 0x347e60dd
- (void)setHasPriorityInSaveConflicts:(BOOL)saveConflicts;	// 0x347e4b55
- (void)setPropertyValue:(id)value forKey:(id)key;	// 0x347e2bc5
- (void)setUpCoreDataStack;	// 0x347de1d9
- (BOOL)setUpLastIndexTid;	// 0x347dd1c9
- (BOOL)setUpLocalAccountAndStore;	// 0x347dcc91
- (void)setUpUniqueObjects;	// 0x347dd809
- (BOOL)shouldDisableLocalStore;	// 0x347e26c5
- (BOOL)shouldResumeIndexing;	// 0x347e5791
- (void)sortNotes:(id)notes;	// 0x347df101
- (id)storeForObjectID:(id)objectID;	// 0x347df3b5
- (id)storeOptions;	// 0x347dc9cd
- (void)tearDownCoreDataStack;	// 0x347de45d
- (void)trackChanges:(id)changes;	// 0x347e7d2d
- (void)updateSearchIndex:(id)index;	// 0x347e6da5
- (id)urlForPersistentStore;	// 0x347e4aed
- (id)visibleNoteForObjectID:(id)objectID;	// 0x347e0635
- (id)visibleNotesForIntegerIds:(id)integerIds;	// 0x347e07a1
- (id)visibleNotesPredicate;	// 0x347dea59
- (void)wrapUpIndexing;	// 0x347e67f9
@end
