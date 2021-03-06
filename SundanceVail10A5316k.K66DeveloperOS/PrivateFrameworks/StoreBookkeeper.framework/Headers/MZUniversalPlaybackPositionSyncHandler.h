/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "MZKeyValueStoreControllerDelegate.h"
#import <NSObject.h> // Unknown library
#import "MZKeyValueStoreTransactionProcessing.h"

@class NSMutableDictionary, MZUPPBagContext, NSString, MZKeyValueStoreController, NSError, MZKeyValueStoreTransaction;
@protocol MZUniversalPlaybackPositionDataSource, OS_dispatch_queue, MZUniversalPlaybackPositionTransactionContext;

__attribute__((visibility("hidden")))
@interface MZUniversalPlaybackPositionSyncHandler : NSObject <MZKeyValueStoreControllerDelegate, MZKeyValueStoreTransactionProcessing> {
@private
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_syncOperationQueue;	// 8 = 0x8
	MZUPPBagContext *_bagContext;	// 12 = 0xc
	id<MZUniversalPlaybackPositionDataSource> _dataSource;	// 16 = 0x10
	NSMutableDictionary *_metadataItemsToCommitToDataSource;	// 20 = 0x14
	NSMutableDictionary *_metadataItemsToCommitToKVSStorage;	// 24 = 0x18
	NSMutableDictionary *_reportedItemVersionForIdentifier;	// 28 = 0x1c
	MZKeyValueStoreTransaction *_currentKVSTransaction;	// 32 = 0x20
	NSString *_responseDomainVersion;	// 36 = 0x24
	BOOL _syncInProgress;	// 40 = 0x28
	BOOL _canceled;	// 41 = 0x29
	NSMutableDictionary *_metadataItemsFromDataSource;	// 44 = 0x2c
	NSMutableDictionary *_metadataItemsFromKVSStorage;	// 48 = 0x30
	NSError *_fatalSyncError;	// 52 = 0x34
	MZKeyValueStoreController *_kvsController;	// 56 = 0x38
	id<MZUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;	// 60 = 0x3c
}
@property(retain) MZUPPBagContext *bagContext;	// G=0x3085d101; S=0x3085d115; @synthesize=_bagContext
@property(assign) BOOL canceled;	// G=0x3085d22d; S=0x3085d245; @synthesize=_canceled
@property(retain) MZKeyValueStoreTransaction *currentKVSTransaction;	// G=0x3085d1b5; S=0x3085d1c9; @synthesize=_currentKVSTransaction
@property(retain) id<MZUniversalPlaybackPositionDataSource> dataSource;	// G=0x3085d125; S=0x3085d139; @synthesize=_dataSource
@property(retain) id<MZUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext;	// G=0x3085d2ed; S=0x3085d301; @synthesize=_dataSourceTransactionContext
@property(retain) NSError *fatalSyncError;	// G=0x3085d2a5; S=0x3085d2b9; @synthesize=_fatalSyncError
@property(retain) MZKeyValueStoreController *kvsController;	// G=0x3085d2c9; S=0x3085d2dd; @synthesize=_kvsController
@property(retain) NSMutableDictionary *metadataItemsFromDataSource;	// G=0x3085d25d; S=0x3085d271; @synthesize=_metadataItemsFromDataSource
@property(retain) NSMutableDictionary *metadataItemsFromKVSStorage;	// G=0x3085d281; S=0x3085d295; @synthesize=_metadataItemsFromKVSStorage
@property(retain) NSMutableDictionary *metadataItemsToCommitToDataSource;	// G=0x3085d149; S=0x3085d15d; @synthesize=_metadataItemsToCommitToDataSource
@property(retain) NSMutableDictionary *metadataItemsToCommitToKVSStorage;	// G=0x3085d16d; S=0x3085d181; @synthesize=_metadataItemsToCommitToKVSStorage
@property(retain) NSMutableDictionary *reportedItemVersionForIdentifier;	// G=0x3085d191; S=0x3085d1a5; @synthesize=_reportedItemVersionForIdentifier
@property(retain) NSString *responseDomainVersion;	// G=0x3085d1d9; S=0x3085d1ed; @synthesize=_responseDomainVersion
@property(assign) BOOL syncInProgress;	// G=0x3085d1fd; S=0x3085d215; @synthesize=_syncInProgress
- (id)initWithDataSource:(id)dataSource bagContext:(id)context;	// 0x3085afb5
- (void)_dataSourceCancelTransaction;	// 0x3085b3f9
- (int)_mergeMetadataItemFromSetResponse:(id)setResponse;	// 0x3085c43d
- (void)_mergeMetadataItemsFromGetResponse;	// 0x3085c569
- (void)_resetState;	// 0x3085b32d
- (BOOL)_shouldStop;	// 0x3085c061
- (void)_signalKVSTransactionCompletion:(id)completion;	// 0x3085cad1
- (void)_signalKVSTransactionCompletion:(id)completion withError:(id)error;	// 0x3085cb21
- (BOOL)_synchronize:(id *)synchronize;	// 0x3085b46d
- (id)_synchronouslyRunKVSTransaction:(id)transaction;	// 0x3085ca49
// declared property getter: - (id)bagContext;	// 0x3085d101
- (void)cancel;	// 0x3085c15d
// declared property getter: - (BOOL)canceled;	// 0x3085d22d
// declared property getter: - (id)currentKVSTransaction;	// 0x3085d1b5
- (id)dataForSetTransaction:(id)setTransaction key:(id)key version:(id *)version;	// 0x3085cd91
// declared property getter: - (id)dataSource;	// 0x3085d125
// declared property getter: - (id)dataSourceTransactionContext;	// 0x3085d2ed
- (void)dealloc;	// 0x3085b1e5
// declared property getter: - (id)fatalSyncError;	// 0x3085d2a5
- (BOOL)keyValueStoreController:(id)controller shouldScheduleTransaction:(id)transaction;	// 0x3085cb9d
- (void)keyValueStoreController:(id)controller transaction:(id)transaction didCancelWithError:(id)error;	// 0x3085cce1
- (BOOL)keyValueStoreController:(id)controller transaction:(id)transaction didFailWithError:(id)error;	// 0x3085cc1d
- (void)keyValueStoreController:(id)controller transactionDidFinish:(id)transaction;	// 0x3085ccf9
- (id)keysForTransaction:(id)transaction;	// 0x3085d0b1
// declared property getter: - (id)kvsController;	// 0x3085d2c9
// declared property getter: - (id)metadataItemsFromDataSource;	// 0x3085d25d
// declared property getter: - (id)metadataItemsFromKVSStorage;	// 0x3085d281
// declared property getter: - (id)metadataItemsToCommitToDataSource;	// 0x3085d149
// declared property getter: - (id)metadataItemsToCommitToKVSStorage;	// 0x3085d16d
- (id)newKVSGetAllTransactionSinceDomainVersion:(id)version;	// 0x3085ca01
- (id)newKVSPutAllTransactionWithMetadataItems:(id)metadataItems;	// 0x3085c9c1
- (id)newKVSTransactionWithType:(int)type keys:(id)keys;	// 0x3085c8c1
// declared property getter: - (id)reportedItemVersionForIdentifier;	// 0x3085d191
// declared property getter: - (id)responseDomainVersion;	// 0x3085d1d9
// declared property setter: - (void)setBagContext:(id)context;	// 0x3085d115
// declared property setter: - (void)setCanceled:(BOOL)canceled;	// 0x3085d245
// declared property setter: - (void)setCurrentKVSTransaction:(id)transaction;	// 0x3085d1c9
// declared property setter: - (void)setDataSource:(id)source;	// 0x3085d139
// declared property setter: - (void)setDataSourceTransactionContext:(id)context;	// 0x3085d301
// declared property setter: - (void)setFatalSyncError:(id)error;	// 0x3085d2b9
// declared property setter: - (void)setKvsController:(id)controller;	// 0x3085d2dd
// declared property setter: - (void)setMetadataItemsFromDataSource:(id)dataSource;	// 0x3085d271
// declared property setter: - (void)setMetadataItemsFromKVSStorage:(id)kvsstorage;	// 0x3085d295
// declared property setter: - (void)setMetadataItemsToCommitToDataSource:(id)dataSource;	// 0x3085d15d
// declared property setter: - (void)setMetadataItemsToCommitToKVSStorage:(id)kvsstorage;	// 0x3085d181
// declared property setter: - (void)setReportedItemVersionForIdentifier:(id)identifier;	// 0x3085d1a5
// declared property setter: - (void)setResponseDomainVersion:(id)version;	// 0x3085d1ed
// declared property setter: - (void)setSyncInProgress:(BOOL)progress;	// 0x3085d215
- (id)sinceDomainVersionForTransaction:(id)transaction;	// 0x3085d0d9
// declared property getter: - (BOOL)syncInProgress;	// 0x3085d1fd
- (void)synchronizeWithCompletionHandler:(id)completionHandler;	// 0x3085c19d
- (void)transaction:(id)transaction didProcessResponseWithDomainVersion:(id)domainVersion;	// 0x3085cead
- (void)transaction:(id)transaction mergeData:(id)data forKey:(id)key domainVersion:(id)version version:(id)version5 mismatch:(BOOL)mismatch finishedBlock:(id)block;	// 0x3085ceb1
- (void)transaction:(id)transaction willProcessResponseWithDomainVersion:(id)domainVersion;	// 0x3085cdf1
- (id)versionForGetTransaction:(id)getTransaction key:(id)key;	// 0x3085cd8d
@end

