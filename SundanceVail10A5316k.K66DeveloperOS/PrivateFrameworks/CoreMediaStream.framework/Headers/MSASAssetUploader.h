/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASAssetTransferer.h"

@class NSMutableDictionary, NSMutableArray;
@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader : MSASAssetTransferer {
@private
	int _state;	// 40 = 0x28
	NSMutableArray *_itemsInFlight;	// 44 = 0x2c
	NSMutableDictionary *_assetCollectionsToItemInFlightMap;	// 48 = 0x30
	NSMutableDictionary *_assetToAssetCollectionMap;	// 52 = 0x34
	NSMutableArray *_finishedAssetCollections;	// 56 = 0x38
	BOOL _didEncounterNetworkConditionError;	// 60 = 0x3c
}
@property(retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap;	// G=0x339e2e19; S=0x339e2e29; @synthesize=_assetCollectionsToItemInFlightMap
@property(retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap;	// G=0x339e2e51; S=0x339e2e61; @synthesize=_assetToAssetCollectionMap
@property(assign, nonatomic) __weak id<MSASAssetUploaderDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL didEncounterNetworkConditionError;	// G=0x339e2ec1; S=0x339e2ed1; @synthesize=_didEncounterNetworkConditionError
@property(retain, nonatomic) NSMutableArray *finishedAssetCollections;	// G=0x339e2e89; S=0x339e2e99; @synthesize=_finishedAssetCollections
@property(retain, nonatomic) NSMutableArray *itemsInFlight;	// G=0x339e2de1; S=0x339e2df1; @synthesize=_itemsInFlight
@property(assign, nonatomic) int state;	// G=0x339e2dc1; S=0x339e2dd1; @synthesize=_state
- (void).cxx_destruct;	// 0x339e2ee1
- (void)MMCSEngine:(id)engine didFinishGettingAllAssetsContext:(id)context;	// 0x339e2cfd
- (void)MMCSEngine:(id)engine didFinishGettingAsset:(id)asset path:(id)path context:(id)context error:(id)error;	// 0x339e2b75
- (void)MMCSEngine:(id)engine didFinishPuttingAllAssetsContext:(id)context;	// 0x339e27c5
- (void)MMCSEngine:(id)engine didFinishPuttingAsset:(id)asset context:(id)context error:(id)error;	// 0x339e18fd
- (void)MMCSEngine:(id)engine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x339e2c39
- (void)MMCSEngine:(id)engine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x339e256d
- (void)_didFinishWithItem:(id)item error:(id)error;	// 0x339e17e1
- (void)_goIdle;	// 0x339e017d
- (id)_orphanedAssetCollectionError;	// 0x339e0621
- (id)_pathForPersonID:(id)personID;	// 0x339dffe9
- (void)_stop;	// 0x339e0221
- (void)_stopTrackingItem:(id)item;	// 0x339e1685
- (void)_uploadNextBatch;	// 0x339e06ed
// declared property getter: - (id)assetCollectionsToItemInFlightMap;	// 0x339e2e19
// declared property getter: - (id)assetToAssetCollectionMap;	// 0x339e2e51
- (void)cancel;	// 0x339e036d
// declared property getter: - (BOOL)didEncounterNetworkConditionError;	// 0x339e2ec1
// declared property getter: - (id)finishedAssetCollections;	// 0x339e2e89
// declared property getter: - (id)itemsInFlight;	// 0x339e2de1
- (BOOL)registerAssetCollection:(id)collection outError:(id *)error;	// 0x339e141d
- (void)retryOutstandingActivities;	// 0x339dfff1
// declared property setter: - (void)setAssetCollectionsToItemInFlightMap:(id)flightMap;	// 0x339e2e29
// declared property setter: - (void)setAssetToAssetCollectionMap:(id)assetCollectionMap;	// 0x339e2e61
// declared property setter: - (void)setDidEncounterNetworkConditionError:(BOOL)encounterNetworkConditionError;	// 0x339e2ed1
// declared property setter: - (void)setFinishedAssetCollections:(id)collections;	// 0x339e2e99
// declared property setter: - (void)setItemsInFlight:(id)flight;	// 0x339e2df1
// declared property setter: - (void)setState:(int)state;	// 0x339e2dd1
// declared property getter: - (int)state;	// 0x339e2dc1
- (void)stop;	// 0x339e0285
- (void)unregisterAssetCollection:(id)collection;	// 0x339e1591
@end

