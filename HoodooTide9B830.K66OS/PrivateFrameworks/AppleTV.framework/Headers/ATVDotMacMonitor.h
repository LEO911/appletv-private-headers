/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

@interface ATVDotMacMonitor : ATVInternetPhotosMonitor {
@private
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x328a6865; converted property
+ (void)initialize;	// 0x328a5d69
+ (void)setSingleton:(id)singleton;	// 0x328a5d59
+ (id)singleton;	// 0x328a5d49
- (id)init;	// 0x328a5dd9
- (void)_addCollectionForTemporaryDataMonitoring:(id)temporaryDataMonitoring;	// 0x328a9ae9
- (id)_authenticationsForAccountWithName:(id)name;	// 0x328a97a5
- (void)_collectionLoadFailure:(id)failure newCollectionInfo:(id)info status:(int)status;	// 0x328a875d
- (id)_dataForRelativePath:(id)relativePath forAccountWithName:(id)name secondaryAccount:(id)account;	// 0x328a8cbd
- (BOOL)_isAccountRegisteredForDataMonitoring:(id)dataMonitoring;	// 0x328a9a31
- (void)_performAccountIconImageLoad:(id)load;	// 0x328a88b5
- (void)_performAccountLoad:(id)load;	// 0x328a6b41
- (void)_performAccountMediaLoad:(id)load;	// 0x328a6cd5
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x328a8875
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x328a8895
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x328a8989
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x328a8855
- (void)_performAuthenticateCollection:(id)collection;	// 0x328a6875
- (void)_performCollectionAssetsLoad:(id)load;	// 0x328a7605
- (void)_performCollectionAssetsLoadForPhotoCollection:(id)photoCollection;	// 0x328a76b9
- (void)_performCollectionAssetsLoadForVideoCollection:(id)videoCollection;	// 0x328a7fc1
- (id)_queryParamsForPath:(id)path;	// 0x328a9819
- (void)_saveAuthenticationForAccountWithName:(id)name secondaryAccount:(id)account;	// 0x328a993d
- (id)_transactionForAccountWithName:(id)name path:(id)path depth:(int)depth secondaryAccount:(id)account;	// 0x328a9491
- (int)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate;	// 0x328a9431
- (id)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate secondaryAccount:(id)account requiresAuthentication:(BOOL)authentication;	// 0x328a8fe5
- (void)authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x328a5f6d
// converted property getter: - (id)backgroundTask;	// 0x328a6865
- (void)cancelAuthenticateForCollection:(id)collection;	// 0x328a63a5
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x328a67e5
- (void)cancelLoadAccountWithName:(id)name;	// 0x328a6415
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x328a6581
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x328a6705
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x328a6775
- (void)cancelLoadMediaForAccount:(id)account;	// 0x328a6471
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x328a6695
- (void)dealloc;	// 0x328a5e69
- (void)loadAccountIconForAccount:(id)account;	// 0x328a6329
- (void)loadAccountWithName:(id)name;	// 0x328a6049
- (void)loadAssetsForCollection:(id)collection;	// 0x328a612d
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x328a6231
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x328a62ad
- (void)loadMediaForAccount:(id)account;	// 0x328a60b1
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x328a61b5
- (void)removeAccountWithName:(id)name;	// 0x328a5ef5
- (id)taskContext;	// 0x328a6855
@end

