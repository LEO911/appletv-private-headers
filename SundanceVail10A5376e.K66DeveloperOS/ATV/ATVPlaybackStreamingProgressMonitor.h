/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPlaybackProgressMonitor.h"

@class AVPlayerItemAccessLogEvent;

__attribute__((visibility("hidden")))
@interface ATVPlaybackStreamingProgressMonitor : ATVPlaybackProgressMonitor {
	AVPlayerItemAccessLogEvent *_latestEventForSampling;	// 176 = 0xb0
}
- (void)_stallDuringPlayback:(id)playback;	// 0x20fc51
- (void)_streamSwitched:(id)switched;	// 0x20fbad
- (void)dealloc;	// 0x20f939
- (void)finishPeriodicSample;	// 0x20fb29
- (void)playerActivated:(id)activated;	// 0x20f985
- (void)startPeriodicSample;	// 0x20fa3d
- (id)streamingType;	// 0x20fba1
@end

