/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPlaybackProgressMonitor.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVPlaybackAirPlayCRABSProgressMonitor : ATVPlaybackProgressMonitor {
	BOOL _playabilityMetricsAreViable;	// 189 = 0xbd
	NSDictionary *_latestPlayabilityMetricsForSampling;	// 192 = 0xc0
}
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x3c91e5
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x3c9235
- (void)dealloc;	// 0x3c8ee5
- (void)finishPeriodicSample;	// 0x3c9195
- (id)metrics;	// 0x3c8f35
- (void)playerDeactivated;	// 0x3c9071
- (void)playerItemMonitoringStarted;	// 0x3c90b1
- (void)startPeriodicSample;	// 0x3c90c5
@end
