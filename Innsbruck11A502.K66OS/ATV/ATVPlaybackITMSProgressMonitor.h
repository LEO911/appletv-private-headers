/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPlaybackProgressMonitor.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVPlaybackITMSProgressMonitor : ATVPlaybackProgressMonitor {
	BOOL _playabilityMetricsAreViable;	// 189 = 0xbd
	double _mostRecentReadyToPlay;	// 192 = 0xc0
	BOOL _readyToPlayTransitionHappened;	// 200 = 0xc8
	NSDictionary *_latestPlayabilityMetricsForSampling;	// 204 = 0xcc
}
@property(assign) double mostRecentReadyToPlay;	// G=0x227505; S=0x227539; @synthesize=_mostRecentReadyToPlay
@property(assign) BOOL readyToPlayTransitionHappened;	// G=0x22756d; S=0x227585; @synthesize=_readyToPlayTransitionHappened
- (id)_gatherAdditionalMetrics;	// 0x227a05
- (id)_gatherMetricsForStall;	// 0x227959
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x22759d
- (void)_playbackStalled:(id)stalled;	// 0x227aad
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x227769
- (void)dealloc;	// 0x2272a9
- (void)finishPeriodicSample;	// 0x2276ed
- (id)mediaTypeString;	// 0x227419
// declared property getter: - (double)mostRecentReadyToPlay;	// 0x227505
- (void)playerActivated:(id)activated;	// 0x2272f5
- (void)playerDeactivated;	// 0x227375
- (void)playerItemMonitoringStarted;	// 0x2273b5
// declared property getter: - (BOOL)readyToPlayTransitionHappened;	// 0x22756d
// declared property setter: - (void)setMostRecentReadyToPlay:(double)play;	// 0x227539
// declared property setter: - (void)setReadyToPlayTransitionHappened:(BOOL)playTransitionHappened;	// 0x227585
- (void)startPeriodicSample;	// 0x2275ed
- (void)startSamplingIfNecessary;	// 0x2273c9
- (id)streamingType;	// 0x2274f9
@end

