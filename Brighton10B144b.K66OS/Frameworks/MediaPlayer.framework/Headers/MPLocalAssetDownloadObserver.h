/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaDownloadObserver.h"

@class NSTimer;

@interface MPLocalAssetDownloadObserver : MPMediaDownloadObserver {
	NSTimer *_progressTimer;	// 28 = 0x1c
}
+ (void)beginDownloadForMediaItem:(id)mediaItem;	// 0x31d75fc9
- (id)initWithItemPersistentID:(long long)itemPersistentID;	// 0x31d76429
- (void)_updateProgress:(id)progress;	// 0x31d76651
- (BOOL)canCancel;	// 0x31d7658d
- (void)dealloc;	// 0x31d76541
- (double)downloadProgress;	// 0x31d76591
@end

