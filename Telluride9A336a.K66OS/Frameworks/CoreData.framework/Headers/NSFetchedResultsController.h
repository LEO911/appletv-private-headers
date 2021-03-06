/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObjectContext, NSArray, NSString, NSFetchRequest;
@protocol NSFetchedResultsControllerDelegate;

@interface NSFetchedResultsController : NSObject {
@private
	NSFetchRequest *_fetchRequest;	// 4 = 0x4
	NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
	NSString *_sectionNameKeyPath;	// 12 = 0xc
	NSString *_sectionNameKey;	// 16 = 0x10
	NSString *_cacheName;	// 20 = 0x14
	void *_cache;	// 24 = 0x18
	fetchResultsControllerFlags _flags;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	id _sortKeys;	// 36 = 0x24
	id _fetchedObjects;	// 40 = 0x28
	id _sections;	// 44 = 0x2c
	id _sectionsByName;	// 48 = 0x30
	id _sectionIndexTitles;	// 52 = 0x34
	id _sectionIndexTitlesSections;	// 56 = 0x38
}
@property(readonly, assign, nonatomic) NSString *cacheName;	// G=0x323e6b9d; @synthesize=_cacheName
@property(assign, nonatomic) id<NSFetchedResultsControllerDelegate> delegate;	// G=0x323e6b8d; S=0x323e78f5; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSFetchRequest *fetchRequest;	// G=0x323e6bcd; @synthesize=_fetchRequest
@property(readonly, assign, nonatomic) NSArray *fetchedObjects;	// G=0x323e6b6d; 
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x323e6bbd; @synthesize=_managedObjectContext
@property(readonly, assign, nonatomic) NSArray *sectionIndexTitles;	// G=0x323e7541; 
@property(readonly, assign, nonatomic) NSString *sectionNameKeyPath;	// G=0x323e6bad; @synthesize=_sectionNameKeyPath
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x323e6b7d; 
+ (id)_CoreDataSectionCachesPath;	// 0x323eea39
+ (unsigned)_insertIndexForObject:(id)object inArray:(id)array lowIdx:(unsigned)idx highIdx:(unsigned)idx4 sortDescriptors:(id)descriptors;	// 0x323e958d
+ (void)deleteCacheWithName:(id)name;	// 0x323e7379
+ (void)initialize;	// 0x323e735d
- (id)initWithFetchRequest:(id)fetchRequest managedObjectContext:(id)context sectionNameKeyPath:(id)path cacheName:(id)name;	// 0x323e7d7d
- (void)_appendAffectedStoreInfoToData:(id)data adjustedOffset:(long long *)offset;	// 0x323eda65
- (BOOL)_computeSectionInfo:(id)info error:(id *)error;	// 0x323ea295
- (BOOL)_computeSectionInfoWithGroupBy:(id)groupBy error:(id *)error;	// 0x323eb241
- (id)_createNewSectionForObject:(id)object;	// 0x323eab19
- (BOOL)_didFailPostprocessing;	// 0x323e6c15
- (BOOL)_didUpdateOnlyStoreInfo;	// 0x323e6c05
- (BOOL)_didUseCachedSectionInfo;	// 0x323e6bf5
- (BOOL)_didUseGroupBy;	// 0x323e6c25
- (void)_dumpSectionInfo;	// 0x323eb151
- (id)_fetchedObjectsArrayOfObjectIDs;	// 0x323e8a3d
- (BOOL)_hasFetchedObjects;	// 0x323e6bdd
- (unsigned)_indexOfFetchedID:(id)fetchedID;	// 0x323e8bb5
- (id)_indexPathForIndex:(unsigned)index;	// 0x323e8dd1
- (void)_insertObjectInFetchedObjects:(id)fetchedObjects atIndex:(unsigned)index;	// 0x323e86b9
- (BOOL)_keyPathContainsNonPersistedProperties:(id)properties;	// 0x323e9429
- (void)_makeMutableFetchedObjects;	// 0x323e8565
- (void)_managedObjectContextDidChange:(id)_managedObjectContext;	// 0x323ec5ed
- (void)_managedObjectContextDidSave:(id)_managedObjectContext;	// 0x323ede05
- (BOOL)_objectInResults:(id)results;	// 0x323e8765
- (BOOL)_postprocessDeletedObjects:(id)objects;	// 0x323e911d
- (BOOL)_postprocessInsertedObjects:(id)objects;	// 0x323e8eed
- (BOOL)_postprocessUpdatedObjects:(id)objects;	// 0x323eaed9
- (void)_preprocessDeletedObjects:(id)objects deletesInfo:(id)info sectionsWithDeletes:(id)deletes;	// 0x323ebc5d
- (void)_preprocessInsertedObjects:(id)objects insertsInfo:(id)info newSectionNames:(id)names;	// 0x323eba55
- (void)_preprocessUpdatedObjects:(id)objects insertsInfo:(id)info deletesInfo:(id)info3 updatesInfo:(id)info4 sectionsWithDeletes:(id)deletes newSectionNames:(id)names treatAsRefreshes:(BOOL)refreshes;	// 0x323ebed9
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned)index;	// 0x323e8711
- (id)_resolveSectionIndexTitleForSectionName:(id)sectionName;	// 0x323e89e1
- (BOOL)_restoreCachedSectionInfo;	// 0x323e96b5
- (id)_sectionCachePath;	// 0x323e8969
- (id)_sectionNameForObject:(id)object;	// 0x323e8525
- (unsigned)_sectionNumberForIndex:(unsigned)index;	// 0x323e8ce5
- (void)_updateCachedStoreInfo;	// 0x323edc41
- (void)_updateSectionOffsetsStartingAtSection:(id)section;	// 0x323e87d5
// declared property getter: - (id)cacheName;	// 0x323e6b9d
- (void)dealloc;	// 0x323e7be1
// declared property getter: - (id)delegate;	// 0x323e6b8d
// declared property getter: - (id)fetchRequest;	// 0x323e6bcd
// declared property getter: - (id)fetchedObjects;	// 0x323e6b6d
- (id)indexPathForObject:(id)object;	// 0x323e7205
// declared property getter: - (id)managedObjectContext;	// 0x323e6bbd
- (id)objectAtIndexPath:(id)indexPath;	// 0x323e7751
- (BOOL)performFetch:(id *)fetch;	// 0x323e6c35
- (int)sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x323e73e9
- (id)sectionIndexTitleForSectionName:(id)sectionName;	// 0x323e72e5
// declared property getter: - (id)sectionIndexTitles;	// 0x323e7541
// declared property getter: - (id)sectionNameKeyPath;	// 0x323e6bad
// declared property getter: - (id)sections;	// 0x323e6b7d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x323e78f5
@end

