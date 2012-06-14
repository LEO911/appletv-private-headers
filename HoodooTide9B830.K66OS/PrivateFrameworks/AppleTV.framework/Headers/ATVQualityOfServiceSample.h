/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ATVQualityOfServiceSample : NSObject {
@private
	int _numberOfSegmentsDownloaded;	// 4 = 0x4
	NSString *_serverAddress;	// 8 = 0x8
	int _numberOfServerAddressChanges;	// 12 = 0xc
	NSString *_URI;	// 16 = 0x10
	double _segmentsDownloadedDuration;	// 20 = 0x14
	double _durationWatched;	// 28 = 0x1c
	int _numberOfStalls;	// 36 = 0x24
	long long _numberOfBytesTransferred;	// 40 = 0x28
	double _observedBitrate;	// 48 = 0x30
	double _indicatedBitrate;	// 56 = 0x38
	int _numberOfDroppedVideoFrames;	// 64 = 0x40
}
@property(retain, nonatomic) NSString *URI;	// G=0x32b1e471; S=0x32b1e481; @synthesize=_URI
@property(assign, nonatomic) double durationWatched;	// G=0x32b1e4d1; S=0x32b1e4e9; @synthesize=_durationWatched
@property(assign, nonatomic) double indicatedBitrate;	// G=0x32b1e575; S=0x32b1e58d; @synthesize=_indicatedBitrate
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x32b1e51d; S=0x32b1e535; @synthesize=_numberOfBytesTransferred
@property(assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x32b1e5a1; S=0x32b1e5b1; @synthesize=_numberOfDroppedVideoFrames
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x32b1e3fd; S=0x32b1e40d; @synthesize=_numberOfSegmentsDownloaded
@property(assign, nonatomic) int numberOfServerAddressChanges;	// G=0x32b1e451; S=0x32b1e461; @synthesize=_numberOfServerAddressChanges
@property(assign, nonatomic) int numberOfStalls;	// G=0x32b1e4fd; S=0x32b1e50d; @synthesize=_numberOfStalls
@property(assign, nonatomic) double observedBitrate;	// G=0x32b1e549; S=0x32b1e561; @synthesize=_observedBitrate
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x32b1e4a5; S=0x32b1e4bd; @synthesize=_segmentsDownloadedDuration
@property(retain, nonatomic) NSString *serverAddress;	// G=0x32b1e41d; S=0x32b1e42d; @synthesize=_serverAddress
// declared property getter: - (id)URI;	// 0x32b1e471
- (void)dealloc;	// 0x32b1e3a5
// declared property getter: - (double)durationWatched;	// 0x32b1e4d1
// declared property getter: - (double)indicatedBitrate;	// 0x32b1e575
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x32b1e51d
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x32b1e5a1
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x32b1e3fd
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x32b1e451
// declared property getter: - (int)numberOfStalls;	// 0x32b1e4fd
// declared property getter: - (double)observedBitrate;	// 0x32b1e549
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x32b1e4a5
// declared property getter: - (id)serverAddress;	// 0x32b1e41d
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x32b1e4e9
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x32b1e58d
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x32b1e535
// declared property setter: - (void)setNumberOfDroppedVideoFrames:(int)droppedVideoFrames;	// 0x32b1e5b1
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x32b1e40d
// declared property setter: - (void)setNumberOfServerAddressChanges:(int)serverAddressChanges;	// 0x32b1e461
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x32b1e50d
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x32b1e561
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x32b1e4bd
// declared property setter: - (void)setServerAddress:(id)address;	// 0x32b1e42d
// declared property setter: - (void)setURI:(id)uri;	// 0x32b1e481
@end
