/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NetflixMovieAccessLogEvent : NSObject {
@private
	double indicatedBitrate_;	// 4 = 0x4
	double observedBitrate_;	// 12 = 0xc
	int numberOfStalls_;	// 20 = 0x14
	long long numberOfBytesTransferred_;	// 24 = 0x18
	double durationWatched_;	// 32 = 0x20
	int numberOfSegmentsDownloaded_;	// 40 = 0x28
	double segmentsDownloadedDuration_;	// 44 = 0x2c
}
@property(assign, nonatomic) double durationWatched;	// G=0x36107e20; S=0x36107e3c; @synthesize=durationWatched_
@property(assign, nonatomic) double indicatedBitrate;	// G=0x36107ee0; S=0x36107efc; @synthesize=indicatedBitrate_
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x36107e54; S=0x36107e6c; @synthesize=numberOfBytesTransferred_
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x36107df8; S=0x36107e0c; @synthesize=numberOfSegmentsDownloaded_
@property(assign, nonatomic) int numberOfStalls;	// G=0x36107e84; S=0x36107e98; @synthesize=numberOfStalls_
@property(assign, nonatomic) double observedBitrate;	// G=0x36107eac; S=0x36107ec8; @synthesize=observedBitrate_
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x36107dc4; S=0x36107de0; @synthesize=segmentsDownloadedDuration_
// declared property getter: - (double)durationWatched;	// 0x36107e20
// declared property getter: - (double)indicatedBitrate;	// 0x36107ee0
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x36107e54
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x36107df8
// declared property getter: - (int)numberOfStalls;	// 0x36107e84
// declared property getter: - (double)observedBitrate;	// 0x36107eac
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x36107dc4
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x36107e3c
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x36107efc
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x36107e6c
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x36107e0c
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x36107e98
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x36107ec8
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x36107de0
@end
