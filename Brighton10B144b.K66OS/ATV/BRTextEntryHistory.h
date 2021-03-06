/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "ATVSettingsSaver.h"

@class NSPersistentStoreCoordinator, NSArray, NSManagedObjectContext, NSManagedObjectModel;

__attribute__((visibility("hidden")))
@interface BRTextEntryHistory : BRSingleton <ATVSettingsSaver> {
	NSManagedObjectContext *_managedObjectContext;	// 4 = 0x4
	NSManagedObjectModel *_managedObjectModel;	// 8 = 0x8
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 12 = 0xc
	NSArray *_clientIdentifiers;	// 16 = 0x10
	NSArray *_behaviorIdentifiers;	// 20 = 0x14
	NSArray *_behaviorsCache;	// 24 = 0x18
	NSArray *_historyItemStringsCache;	// 28 = 0x1c
	BOOL _allClientsCached;	// 32 = 0x20
	BOOL _allBehaviorsCached;	// 33 = 0x21
}
@property(readonly, retain) NSManagedObjectContext *managedObjectContext;	// G=0x32021d; converted property
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x3202a1; converted property
@property(readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x320355; converted property
+ (void)setSingleton:(id)singleton;	// 0x31e5ad
+ (id)singleton;	// 0x31e59d
- (id)init;	// 0x31e5bd
- (void)_addClient:(id)client behaviors:(id)behaviors maxItemsPerBehavior:(id)behavior;	// 0x31ee15
- (void)_addHistoryItem:(id)item forClient:(id)client;	// 0x31f7d5
- (void)_deleteAllHistoryItemsForClient:(id)client;	// 0x31fc09
- (void)_deleteAllTextEntryHistory;	// 0x31fcf5
- (void)_deleteHistoryItem:(id)item forClient:(id)client;	// 0x31fae1
- (void)_displayAllTextEntryHistory;	// 0x31fe91
- (void)_performAction:(int)action withHistoryItem:(id)historyItem forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x31f399
- (void)_refreshDataCacheForClients:(id)clients behaviors:(id)behaviors;	// 0x320751
- (void)_saveContext;	// 0x320575
- (void)_validateCacheAgainstClientIdentifiers:(id)identifiers behaviorIdentifiers:(id)identifiers2;	// 0x320615
- (void)addPathsToSaveTo:(id)to;	// 0x31e869
- (void)dealloc;	// 0x31e7a1
- (void)deleteAllHistoryItemsForClients:(id)clients;	// 0x31ead9
- (void)deleteAllHistoryItemsForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x31ea85
- (void)deleteHistoryItem:(id)item forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x31ea31
- (void)deleteTextEntryBehaviors:(id)behaviors forClients:(id)clients;	// 0x31ea2d
- (id)historyForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x31e95d
// converted property getter: - (id)managedObjectContext;	// 0x32021d
// converted property getter: - (id)managedObjectModel;	// 0x3202a1
// converted property getter: - (id)persistentStoreCoordinator;	// 0x320355
- (void)registerClient:(id)client withTextEntryBehaviors:(id)textEntryBehaviors maxItemsPerBehavior:(id)behavior;	// 0x31e8e5
- (void)setHistoryItem:(id)item forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x31e9c1
@end

