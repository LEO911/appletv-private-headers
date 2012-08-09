/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MPCloudAssetDownloadController : NSObject {
	NSMutableDictionary *_downloadSessionsForMediaItemIDs;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_downloadSessionsQueue;	// 8 = 0x8
}
+ (id)sharedAssetDownloadController;	// 0x36d659bd
- (id)init;	// 0x36d65a29
- (id)_cachedAssetDestinationDirectory;	// 0x36d66e2d
- (BOOL)_canPlayCachedAssetAtPath:(id)path;	// 0x36d67109
- (void)_cancelDownloadSession:(id)session;	// 0x36d66f55
- (void)_downloadFailedNotification:(id)notification;	// 0x36d65b11
- (void)_downloadFileSizeAvailableNotification:(id)notification;	// 0x36d65b9d
- (id)_downloadKeyCookieWithValue:(id)value URL:(id)url;	// 0x36d6719d
- (void)_downloadSucceededNotification:(id)notification;	// 0x36d65d59
- (id)_newAVAssetForMediaItem:(id)mediaItem;	// 0x36d6743d
- (id)_newAVAssetForPurchaseResponseDictionary:(id)purchaseResponseDictionary mediaItem:(id)item preferredAssetFlavor:(id)flavor;	// 0x36d67541
- (id)_newAssetForExistingDownloadSession:(id)existingDownloadSession;	// 0x36d672d9
- (void)_removeNotificationObserversForDownloadSession:(id)downloadSession;	// 0x36d6827d
- (id)_urlConnectionRequestForMediaItem:(id)mediaItem;	// 0x36d6830d
- (id)assetForMediaItem:(id)mediaItem;	// 0x36d66331
- (void)dealloc;	// 0x36d65aad
- (BOOL)mediaItemHasDownloadSession:(id)session;	// 0x36d66c45
- (void)prioritizeDownloadSessionForMediaItem:(id)mediaItem;	// 0x36d66cb9
@end
