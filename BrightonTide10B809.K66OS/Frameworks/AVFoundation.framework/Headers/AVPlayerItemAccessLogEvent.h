/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class NSDate, AVPlayerItemAccessLogEventInternal, NSString;

@interface AVPlayerItemAccessLogEvent : NSObject <NSCopying> {
	AVPlayerItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x302c6b41; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x302c6dbd; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x302c6f3d; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x302c6e7d; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x302c6f9d; 
@property(readonly, assign, nonatomic) int numberOfMediaRequests;	// G=0x302c6a5d; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x302c6abd; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x302c6c29; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x302c6e1d; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x302c6edd; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x302c6c89; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x302c6acd; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x302c6cfd; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x302c6d5d; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x302c6bb5; 
- (id)init;	// 0x302c68b1
- (id)initWithDictionary:(id)dictionary;	// 0x302c6949
// declared property getter: - (id)URI;	// 0x302c6b41
- (id)copyWithZone:(NSZone *)zone;	// 0x302c699d
- (void)dealloc;	// 0x302c69f1
// declared property getter: - (double)durationWatched;	// 0x302c6dbd
- (void)finalize;	// 0x302c69ad
// declared property getter: - (double)indicatedBitrate;	// 0x302c6f3d
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x302c6e7d
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x302c6f9d
// declared property getter: - (int)numberOfMediaRequests;	// 0x302c6a5d
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x302c6abd
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x302c6c29
// declared property getter: - (int)numberOfStalls;	// 0x302c6e1d
// declared property getter: - (double)observedBitrate;	// 0x302c6edd
// declared property getter: - (id)playbackSessionID;	// 0x302c6c89
// declared property getter: - (id)playbackStartDate;	// 0x302c6acd
// declared property getter: - (double)playbackStartOffset;	// 0x302c6cfd
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x302c6d5d
// declared property getter: - (id)serverAddress;	// 0x302c6bb5
@end
