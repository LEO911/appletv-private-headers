/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASAssetTransferer.h"

@class NSMutableArray, NSMutableDictionary;
@protocol MSASAssetUploaderDelegate;

@interface MSASAssetUploader : MSASAssetTransferer {
	int _state;	// 64 = 0x40
	NSMutableArray *_itemsInFlight;	// 68 = 0x44
	NSMutableDictionary *_assetCollectionsToItemInFlightMap;	// 72 = 0x48
	NSMutableDictionary *_assetToAssetCollectionMap;	// 76 = 0x4c
	NSMutableArray *_finishedAssetCollections;	// 80 = 0x50
	BOOL _didEncounterNetworkConditionError;	// 84 = 0x54
}
@property(retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap;	// G=0x307ae6ad; S=0x307ae6bd; @synthesize=_assetCollectionsToItemInFlightMap
@property(retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap;	// G=0x307ae6e5; S=0x307ae6f5; @synthesize=_assetToAssetCollectionMap
@property(assign, nonatomic) __weak id<MSASAssetUploaderDelegate> delegate;	// @dynamic
@property(assign, nonatomic) BOOL didEncounterNetworkConditionError;	// G=0x307ae755; S=0x307ae765; @synthesize=_didEncounterNetworkConditionError
@property(retain, nonatomic) NSMutableArray *finishedAssetCollections;	// G=0x307ae71d; S=0x307ae72d; @synthesize=_finishedAssetCollections
@property(retain, nonatomic) NSMutableArray *itemsInFlight;	// G=0x307ae675; S=0x307ae685; @synthesize=_itemsInFlight
@property(assign, nonatomic) int state;	// G=0x307ae655; S=0x307ae665; @synthesize=_state
- (void).cxx_destruct;	// 0x307ae775
- (void)MMCSEngine:(id)engine didFinishGettingAllAssetsContext:(id)context;	// 0x307ae591
- (void)MMCSEngine:(id)engine didFinishGettingAsset:(id)asset path:(id)path context:(id)context error:(id)error;	// 0x307ae409
- (void)MMCSEngine:(id)engine didFinishPuttingAllAssetsContext:(id)context;	// 0x307adfb1
- (void)MMCSEngine:(id)engine didFinishPuttingAsset:(id)asset context:(id)context putReceipt:(id)receipt error:(id)error;	// 0x307acc89
- (void)MMCSEngine:(id)engine didMakeGetProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x307ae4cd
- (void)MMCSEngine:(id)engine didMakePutProgress:(float)progress state:(int)state onAsset:(id)asset context:(id)context;	// 0x307adc7d
- (id)_orphanedAssetCollectionError;	// 0x307aac45
- (id)_pathForPersonID:(id)personID;	// 0x307aa3dd
- (void)_workQueueStop;	// 0x307aa71d
// declared property getter: - (id)assetCollectionsToItemInFlightMap;	// 0x307ae6ad
// declared property getter: - (id)assetToAssetCollectionMap;	// 0x307ae6e5
// declared property getter: - (BOOL)didEncounterNetworkConditionError;	// 0x307ae755
// declared property getter: - (id)finishedAssetCollections;	// 0x307ae71d
// declared property getter: - (id)itemsInFlight;	// 0x307ae675
- (void)registerAssetCollections:(id)collections completionBlock:(id)block;	// 0x307ac37d
// declared property setter: - (void)setAssetCollectionsToItemInFlightMap:(id)flightMap;	// 0x307ae6bd
// declared property setter: - (void)setAssetToAssetCollectionMap:(id)assetCollectionMap;	// 0x307ae6f5
// declared property setter: - (void)setDidEncounterNetworkConditionError:(BOOL)encounterNetworkConditionError;	// 0x307ae765
// declared property setter: - (void)setFinishedAssetCollections:(id)collections;	// 0x307ae72d
// declared property setter: - (void)setItemsInFlight:(id)flight;	// 0x307ae685
// declared property setter: - (void)setState:(int)state;	// 0x307ae665
// declared property getter: - (int)state;	// 0x307ae655
- (void)unregisterAssetCollections:(id)collections;	// 0x307ac64d
- (void)unregisterAssetCollections:(id)collections completionBlock:(id)block;	// 0x307ac661
- (void)workQueueCancel;	// 0x307aa8bd
- (void)workQueueDidFinishWithItem:(id)workQueue error:(id)error;	// 0x307aca59
- (void)workQueueGoIdle;	// 0x307aa5e1
- (void)workQueueRegisterAssetCollections:(id)collections index:(unsigned)index results:(id)results completionBlock:(id)block;	// 0x307ac015
- (void)workQueueRegisterAssets:(id)assets index:(unsigned)index completionBlock:(id)block;	// 0x307abd6d
- (void)workQueueRetryOutstandingActivities;	// 0x307aa3e5
- (void)workQueueShutDownCompletionBlock:(id)block;	// 0x307aa869
- (void)workQueueStop;	// 0x307aa781
- (void)workQueueStopTrackingItem:(id)item;	// 0x307ac8fd
- (void)workQueueUploadNextBatch;	// 0x307aad11
@end
