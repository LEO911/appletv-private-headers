/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PlaydataController : NSObject {
}
+ (void)cleanUp;	// 0x308f516c
+ (id)instance;	// 0x308f51a8
- (id)init;	// 0x308f5330
- (void)changeState:(int)state;	// 0x308f505c
- (void)dealloc;	// 0x308f50f8
- (void)downloadableDidChange:(unsigned)downloadable playbackPosition:(double)position;	// 0x308f50a0
- (void)playbackDidEnd:(double)playback;	// 0x308f5bb8
- (void)playbackDidPause:(double)playback;	// 0x308f5610
- (void)playbackDidResume:(double)playback;	// 0x308f5754
- (void)playbackDidStart:(unsigned)playback position:(double)position;	// 0x308f5898
- (void)playbackNewSession;	// 0x308f51fc
- (void)playbackRetrySend;	// 0x308f53e0
- (void)playbackUpdateProgress:(double)progress;	// 0x308f54e4
- (BOOL)sessionOpened;	// 0x308f506c
- (id)stringWithState:(int)state;	// 0x308f4fc8
- (void)updatePersistor:(double)persistor;	// 0x308f5d7c
@end

