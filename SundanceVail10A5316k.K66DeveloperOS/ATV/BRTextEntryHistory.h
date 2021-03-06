/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsSaver.h"
#import "BRSingleton.h"

@class NSArray, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;

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
@property(readonly, retain) NSManagedObjectContext *managedObjectContext;	// G=0x2e5a31; converted property
@property(readonly, retain) NSManagedObjectModel *managedObjectModel;	// G=0x2e5ab5; converted property
@property(readonly, retain) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x2e5b69; converted property
+ (void)setSingleton:(id)singleton;	// 0x2e3dd1
+ (id)singleton;	// 0x2e3dc1
- (id)init;	// 0x2e3de1
- (void)_addClient:(id)client behaviors:(id)behaviors maxItemsPerBehavior:(id)behavior;	// 0x2e4635
- (void)_addHistoryItem:(id)item forClient:(id)client;	// 0x2e4fed
- (void)_deleteAllHistoryItemsForClient:(id)client;	// 0x2e541d
- (void)_deleteAllTextEntryHistory;	// 0x2e5509
- (void)_deleteHistoryItem:(id)item forClient:(id)client;	// 0x2e52f5
- (void)_displayAllTextEntryHistory;	// 0x2e56a5
- (void)_performAction:(int)action withHistoryItem:(id)historyItem forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x2e4bb1
- (void)_refreshDataCacheForClients:(id)clients behaviors:(id)behaviors;	// 0x2e5f51
- (void)_saveContext;	// 0x2e5d7d
- (void)_validateCacheAgainstClientIdentifiers:(id)identifiers behaviorIdentifiers:(id)identifiers2;	// 0x2e5e15
- (void)addPathsToSaveTo:(id)to;	// 0x2e4089
- (void)dealloc;	// 0x2e3fc1
- (void)deleteAllHistoryItemsForClients:(id)clients;	// 0x2e42f9
- (void)deleteAllHistoryItemsForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x2e42a5
- (void)deleteHistoryItem:(id)item forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x2e4251
- (void)deleteTextEntryBehaviors:(id)behaviors forClients:(id)clients;	// 0x2e424d
- (id)historyForClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x2e417d
// converted property getter: - (id)managedObjectContext;	// 0x2e5a31
// converted property getter: - (id)managedObjectModel;	// 0x2e5ab5
// converted property getter: - (id)persistentStoreCoordinator;	// 0x2e5b69
- (void)registerClient:(id)client withTextEntryBehaviors:(id)textEntryBehaviors maxItemsPerBehavior:(id)behavior;	// 0x2e4105
- (void)setHistoryItem:(id)item forClients:(id)clients textEntryBehaviors:(id)behaviors;	// 0x2e41e1
@end

