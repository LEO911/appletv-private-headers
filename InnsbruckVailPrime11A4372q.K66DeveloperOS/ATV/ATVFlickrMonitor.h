/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVInternetPhotosMonitor.h"
#import "ATVSettingsSaver.h"

@class ATVBackgroundTask, ATVFlickrURLFactory;

__attribute__((visibility("hidden")))
@interface ATVFlickrMonitor : ATVInternetPhotosMonitor <ATVSettingsSaver> {
	ATVBackgroundTask *_backgroundTask;	// 32 = 0x20
	ATVFlickrURLFactory *_urlFactory;	// 36 = 0x24
}
@property(readonly, retain) ATVBackgroundTask *backgroundTask;	// G=0x184b61; converted property
+ (void)initialize;	// 0x183da9
+ (void)setSingleton:(id)singleton;	// 0x183d99
+ (id)singleton;	// 0x183d89
- (id)init;	// 0x183e19
- (id)_loadFlickrURL:(id)url;	// 0x186209
- (void)_performAccountIconImageLoad:(id)load;	// 0x185f01
- (void)_performAccountLoad:(id)load;	// 0x184b81
- (void)_performAccountMediaLoad:(id)load;	// 0x184ce1
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x185749
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x185ec1
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x185ee1
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x18600d
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x185dc1
- (void)_performCollectionAssetsLoad:(id)load;	// 0x185879
- (void)_performSearch:(id)search;	// 0x185de1
- (id)_savedSearchesFilePath;	// 0x186225
- (void)addAccount:(id)account;	// 0x1840e9
- (void)addPathsToSaveTo:(id)to;	// 0x184041
// converted property getter: - (id)backgroundTask;	// 0x184b61
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x1848f5
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x184951
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x184a81
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x184af1
- (void)cancelLoadMediaForAccount:(id)account;	// 0x1847d9
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x184899
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x184a11
- (void)dealloc;	// 0x183f9d
- (void)loadAccountIconForAccount:(id)account;	// 0x1842ad
- (void)loadAccountWithName:(id)name;	// 0x184175
- (void)loadAssetsForCollection:(id)collection;	// 0x184315
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x1843f9
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x184475
- (void)loadMediaForAccount:(id)account;	// 0x1841dd
- (void)loadSubAccountsForAccount:(id)account;	// 0x184245
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x18437d
- (void)removeAccountWithName:(id)name;	// 0x184071
- (void)removeSavedSearchTerm:(id)term;	// 0x184635
- (void)saveSearchTerm:(id)term;	// 0x184519
- (id)savedSearchTerms;	// 0x1847a1
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x1844f1
- (id)taskContext;	// 0x184b71
@end
