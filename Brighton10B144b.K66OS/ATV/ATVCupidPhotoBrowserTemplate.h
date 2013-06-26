/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"

@class NSDictionary, ATVFullScreenPhotoBrowserController, ATVDataClient, NSTimer, NSArray, ATVDataQuery, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBrowserTemplate : BRViewController {
	BOOL _viewReloadPending;	// 104 = 0x68
	NSTimer *_spinnerTimer;	// 108 = 0x6c
	ATVDataCollection *_collection;	// 112 = 0x70
	BOOL _dataRequiresUpdate;	// 116 = 0x74
	NSArray *_resultData;	// 120 = 0x78
	ATVDataClient *_dataClient;	// 124 = 0x7c
	ATVDataQuery *_pendingCollectionMetaDataQuery;	// 128 = 0x80
	ATVFullScreenPhotoBrowserController *_fullScreenController;	// 132 = 0x84
	NSDictionary *_likeTextAttributes;	// 136 = 0x88
}
@property(retain, nonatomic) ATVDataCollection *collection;	// G=0x3d9349; S=0x3d9359; @synthesize=_collection
@property(retain, nonatomic) ATVDataClient *dataClient;	// G=0x3d93d9; S=0x3d93e9; @synthesize=_dataClient
@property(assign, nonatomic) BOOL dataRequiresUpdate;	// G=0x3d9381; S=0x3d9391; @synthesize=_dataRequiresUpdate
@property(retain, nonatomic) ATVFullScreenPhotoBrowserController *fullScreenController;	// G=0x3d9449; S=0x3d9459; @synthesize=_fullScreenController
@property(retain, nonatomic) NSDictionary *likeTextAttributes;	// G=0x3d9481; S=0x3d9491; @synthesize=_likeTextAttributes
@property(retain, nonatomic) ATVDataQuery *pendingCollectionMetaDataQuery;	// G=0x3d9411; S=0x3d9421; @synthesize=_pendingCollectionMetaDataQuery
@property(retain, nonatomic) NSArray *resultData;	// G=0x3d93a1; S=0x3d93b1; @synthesize=_resultData
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x3d9329; S=0x3d6245; @synthesize=_spinnerTimer
@property(assign, nonatomic) BOOL viewReloadPending;	// G=0x3d9309; S=0x3d9319; @synthesize=_viewReloadPending
+ (id)_commentDataWithComment:(id)comment filterLikeAndCaption:(BOOL)caption;	// 0x3d7e99
+ (id)controllerForCollection:(id)collection dataClient:(id)client;	// 0x3d5ffd
- (id)initForCollection:(id)collection dataClient:(id)client;	// 0x3d606d
- (void).cxx_destruct;	// 0x3d94b9
- (void)_dataClientDataUpdated:(id)updated;	// 0x3d9169
- (void)_dataClientStatusChanged:(id)changed;	// 0x3d9271
- (void)_dataQueryComplete;	// 0x3d86c1
- (void)_executeDataQuery;	// 0x3d82b9
- (BOOL)_handleContextMenuSelection:(id)selection;	// 0x3d8ef1
- (void)_handleSlideshowSelection:(id)selection;	// 0x3d8bcd
- (void)_initiateSlideshowPlaybackAtIndex:(long)index inPhotos:(id)photos withOptions:(id)options;	// 0x3d79e9
- (void)_playerLastPlayedAsset:(id)asset;	// 0x3d90a5
- (void)_playerStateChanged:(id)changed;	// 0x3d8fb9
- (void)_pushFullScreenControllerWithType:(int)type resultSubset:(id)subset initialIndex:(unsigned)index;	// 0x3d66ed
- (void)_showSpinner:(id)spinner;	// 0x3d8a99
- (id)_standardProvidersForPhotoContextMenuPhotoAtIndex:(int)index;	// 0x3d7c0d
- (void)_updateFullScreenPhotoMetadataWithProperties:(id)properties;	// 0x3d7855
// declared property getter: - (id)collection;	// 0x3d9349
// declared property getter: - (id)dataClient;	// 0x3d93d9
// declared property getter: - (BOOL)dataRequiresUpdate;	// 0x3d9381
- (void)dealloc;	// 0x3d61d9
// declared property getter: - (id)fullScreenController;	// 0x3d9449
// declared property getter: - (id)likeTextAttributes;	// 0x3d9481
// declared property getter: - (id)pendingCollectionMetaDataQuery;	// 0x3d9411
// declared property getter: - (id)resultData;	// 0x3d93a1
// declared property setter: - (void)setCollection:(id)collection;	// 0x3d9359
// declared property setter: - (void)setDataClient:(id)client;	// 0x3d93e9
// declared property setter: - (void)setDataRequiresUpdate:(BOOL)update;	// 0x3d9391
// declared property setter: - (void)setFullScreenController:(id)controller;	// 0x3d9459
// declared property setter: - (void)setLikeTextAttributes:(id)attributes;	// 0x3d9491
// declared property setter: - (void)setPendingCollectionMetaDataQuery:(id)query;	// 0x3d9421
// declared property setter: - (void)setResultData:(id)data;	// 0x3d93b1
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x3d6245
// declared property setter: - (void)setViewReloadPending:(BOOL)pending;	// 0x3d9319
// declared property getter: - (id)spinnerTimer;	// 0x3d9329
// declared property getter: - (BOOL)viewReloadPending;	// 0x3d9309
- (void)wasExhumed;	// 0x3d6581
- (void)wasPopped;	// 0x3d6349
- (void)wasPushed;	// 0x3d62a9
@end
