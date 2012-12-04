/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsSaver.h"
#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

__attribute__((visibility("hidden")))
@interface ATVFlickrMonitor : ATVInternetPhotosMonitor <ATVSettingsSaver> {
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x1ae68d; converted property
+ (void)initialize;	// 0x1ad979
+ (void)setSingleton:(id)singleton;	// 0x1ad969
+ (id)singleton;	// 0x1ad959
- (id)init;	// 0x1ad9e9
- (id)_loadFlickrURL:(id)url;	// 0x1b0085
- (void)_performAccountIconImageLoad:(id)load;	// 0x1afd41
- (void)_performAccountLoad:(id)load;	// 0x1ae6ad
- (void)_performAccountMediaLoad:(id)load;	// 0x1ae869
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x1af409
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x1afd01
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x1afd21
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x1afe4d
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x1afb99
- (void)_performCollectionAssetsLoad:(id)load;	// 0x1af579
- (void)_performSearch:(id)search;	// 0x1afbb9
- (id)_savedSearchesFilePath;	// 0x1b01f1
- (void)addAccount:(id)account;	// 0x1adc19
- (void)addPathsToSaveTo:(id)to;	// 0x1adb71
// converted property getter: - (id)backgroundTask;	// 0x1ae68d
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x1ae421
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x1ae47d
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x1ae5ad
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x1ae61d
- (void)cancelLoadMediaForAccount:(id)account;	// 0x1ae305
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x1ae3c5
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x1ae53d
- (void)dealloc;	// 0x1adae1
- (void)loadAccountIconForAccount:(id)account;	// 0x1adddd
- (void)loadAccountWithName:(id)name;	// 0x1adca5
- (void)loadAssetsForCollection:(id)collection;	// 0x1ade45
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x1adf29
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x1adfa5
- (void)loadMediaForAccount:(id)account;	// 0x1add0d
- (void)loadSubAccountsForAccount:(id)account;	// 0x1add75
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x1adead
- (void)removeAccountWithName:(id)name;	// 0x1adba1
- (void)removeSavedSearchTerm:(id)term;	// 0x1ae165
- (void)saveSearchTerm:(id)term;	// 0x1ae049
- (id)savedSearchTerms;	// 0x1ae2cd
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x1ae021
- (id)taskContext;	// 0x1ae69d
@end
