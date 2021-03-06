/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVInternetPhotosMonitor : BRSingleton {
	NSMutableDictionary *_tasks;	// 4 = 0x4
	NSMutableArray *_dataMonitoredObjects;	// 8 = 0x8
	NSMutableArray *_temporaryDataMonitoredObjects;	// 12 = 0xc
	NSMutableArray *_temporaryUpdateDelegateCandidates;	// 16 = 0x10
	id _updateDelegate;	// 20 = 0x14
	NSMutableArray *_accountListeners;	// 24 = 0x18
	NSMutableArray *_collectionListeners;	// 28 = 0x1c
}
@property(readonly, retain) NSMutableArray *dataMonitoredObjects;	// G=0x1808a9; converted property
- (void)_cancelDataMonitoringForObject:(id)object;	// 0x181ffd
- (void)_registerObjectForDataMonitoring:(id)dataMonitoring;	// 0x181e51
- (void)_taskComplete:(id)complete;	// 0x18217d
- (void)addOneTimeDataMonitoredObject:(id)object;	// 0x180985
- (id)backgroundTask;	// 0x181d11
- (void)cancelDataMonitoringForAccount:(id)account;	// 0x180879
- (void)cancelDataMonitoringForCollection:(id)collection;	// 0x180899
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x180855
- (void)cancelLoadAccountWithName:(id)name;	// 0x18082d
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x180859
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x180861
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x180865
- (void)cancelLoadMediaForAccount:(id)account;	// 0x18084d
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x180851
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x18085d
- (void)cancelTaskWithIdentifier:(id)identifier;	// 0x18180d
- (id)currentUpdateDelegate;	// 0x181d4d
// converted property getter: - (id)dataMonitoredObjects;	// 0x1808a9
- (void)dealloc;	// 0x180745
- (void)invokeUpdateDelegateForObject:(id)object updateData:(id)data;	// 0x181ca9
- (void)loadAccountIconForAccount:(id)account;	// 0x180839
- (void)loadAccountWithName:(id)name;	// 0x180829
- (void)loadAssetsForCollection:(id)collection;	// 0x18083d
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x180845
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x180849
- (void)loadMediaForAccount:(id)account;	// 0x180831
- (void)loadSubAccountsForAccount:(id)account;	// 0x180835
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x180841
- (void)notifyAccountListenersOfChangeToObject:(id)object;	// 0x180f65
- (void)notifyCollectionListenersOfChangeToObject:(id)object;	// 0x1813bd
- (void)performDataMonitoring;	// 0x18195d
- (void)postUpdateNotification:(id)notification;	// 0x181d15
- (void)queueTaskWithIdentifier:(id)identifier selector:(SEL)selector object:(id)object;	// 0x1815fd
- (void)registerAccountForDataMonitoring:(id)dataMonitoring;	// 0x180869
- (void)registerAccountListenerWithID:(id)anId;	// 0x180d49
- (void)registerCollectionForDataMonitoring:(id)dataMonitoring;	// 0x180889
- (void)registerCollectionListenerWithID:(id)anId;	// 0x1811a1
- (void)registerTemporaryUpdateDelegate:(id)delegate;	// 0x180b41
- (void)registerUpdateDelegate:(id)delegate;	// 0x180ae9
- (void)removeAccountWithName:(id)name;	// 0x180825
- (id)taskContext;	// 0x1815f9
- (void)unregisterAccountListenerWithID:(id)anId;	// 0x180e5d
- (void)unregisterCollectionListenerWithID:(id)anId;	// 0x1812b5
- (void)unregisterTemporaryUpdateDelegate:(id)delegate;	// 0x180c55
- (void)unregisterUpdateDelegate:(id)delegate;	// 0x180b15
@end

