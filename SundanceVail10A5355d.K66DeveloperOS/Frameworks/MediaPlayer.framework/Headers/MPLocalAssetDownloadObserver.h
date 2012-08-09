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
+ (void)beginDownloadForMediaItem:(id)mediaItem;	// 0x3377bfe1
- (id)initWithItemPersistentID:(long long)itemPersistentID;	// 0x3377c441
- (void)_updateProgress:(id)progress;	// 0x3377c669
- (BOOL)canCancel;	// 0x3377c5a5
- (void)dealloc;	// 0x3377c559
- (double)downloadProgress;	// 0x3377c5a9
@end
