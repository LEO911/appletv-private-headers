/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPAVController;
@protocol OS_dispatch_queue;

@interface MPSystemNowPlayingController : NSObject {
	BOOL _hasSeenAnyItem;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_serialQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_statusBarQueue;	// 16 = 0x10
}
@property(assign, nonatomic) MPAVController *player;	// G=0x31cb1a11; S=0x31cb1a21; @synthesize=_player
- (id)init;	// 0x31cb0add
- (int)_MRRepeatModeForMPRepeatType:(unsigned)mprepeatType;	// 0x31cb16a5
- (int)_MRShuffleModeForMPShuffleType:(unsigned)mpshuffleType;	// 0x31cb16b1
- (unsigned)_chapterIndexForItem:(id)item atTime:(double)time;	// 0x31cb1651
- (id)_progressInfoForItem:(id)item;	// 0x31cb16c5
- (void)dealloc;	// 0x31cb0b4d
// declared property getter: - (id)player;	// 0x31cb1a11
- (void)postNowPlayingInfoForItem:(id)item;	// 0x31cb0ba1
- (void)postProgressUpdateForItem:(id)item;	// 0x31cb15c9
// declared property setter: - (void)setPlayer:(id)player;	// 0x31cb1a21
@end

