/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoView.h"


@interface UIMovieView : MPVideoView {
}
@property(assign) double currentTime;	// G=0x31cf5fa1; S=0x31cf60d1; converted property
- (id)avPlayer;	// 0x31cf5f49
- (int)bufferingStatusMask;	// 0x31cf5f81
// converted property getter: - (double)currentTime;	// 0x31cf5fa1
- (double)duration;	// 0x31cf5fc1
- (id)mpavController;	// 0x31cf5f35
- (void)pause;	// 0x31cf6091
- (void)play;	// 0x31cf60b1
- (int)playableContentType;	// 0x31cf5ff9
- (int)playbackState;	// 0x31cf6045
// converted property setter: - (void)setCurrentTime:(double)time;	// 0x31cf60d1
- (void)setCurrentTime:(double)time timeSnapOption:(int)option;	// 0x31cf60f5
- (void)setRepeatMode:(int)mode;	// 0x31cf6139
- (void)stop;	// 0x31cf6159
@end

