/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"
#import "MPPurchasableMediaDownloadObserver.h"

@class MPPurchasableMediaDownload;

@interface MPMatchMediaDownloadObserver : MPMediaDownloadObserver <MPPurchasableMediaDownloadObserver> {
	MPPurchasableMediaDownload *_purchasableMediaDownload;	// 28 = 0x1c
}
- (id)initWithStoreID:(long long)storeID mediaItemPersistentID:(unsigned long long)anId;	// 0x31e14661
- (void)_onQueue_invalidate;	// 0x31e1479d
- (BOOL)canCancel;	// 0x31e14861
- (void)cancelDownload;	// 0x31e14891
- (void)dealloc;	// 0x31e14739
- (double)downloadProgress;	// 0x31e14801
- (BOOL)isCurrentlyPlayable;	// 0x31e14821
- (BOOL)isRestoreDownload;	// 0x31e148b1
- (void)purchasableMediaDownload:(id)download downloadDidProgressWithPercentComplete:(double)download2;	// 0x31e148d5
@end
