/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"

@class NSDate, NSString, AVItemAccessLogEventInternal;

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
@private
	AVItemAccessLogEventInternal *_playerItemAccessLogEvent;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *URI;	// G=0x339a0edd; 
@property(readonly, assign, nonatomic) double durationWatched;	// G=0x339a06b5; 
@property(readonly, assign, nonatomic) double indicatedBitrate;	// G=0x339a0835; 
@property(readonly, assign, nonatomic) long long numberOfBytesTransferred;	// G=0x339a0775; 
@property(readonly, assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x339a0899; 
@property(readonly, assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x339a0535; 
@property(readonly, assign, nonatomic) int numberOfServerAddressChanges;	// G=0x339a0591; 
@property(readonly, assign, nonatomic) int numberOfStalls;	// G=0x339a0719; 
@property(readonly, assign, nonatomic) double observedBitrate;	// G=0x339a07d1; 
@property(readonly, assign, nonatomic) NSString *playbackSessionID;	// G=0x339a0dfd; 
@property(readonly, assign, nonatomic) NSDate *playbackStartDate;	// G=0x339a0f4d; 
@property(readonly, assign, nonatomic) double playbackStartOffset;	// G=0x339a05ed; 
@property(readonly, assign, nonatomic) double segmentsDownloadedDuration;	// G=0x339a0651; 
@property(readonly, assign, nonatomic) NSString *serverAddress;	// G=0x339a0e6d; 
- (id)init;	// 0x339a0d59
- (id)initWithDictionary:(id)dictionary;	// 0x339a04c5
// declared property getter: - (id)URI;	// 0x339a0edd
- (id)copyWithZone:(NSZone *)zone;	// 0x339a0525
- (void)dealloc;	// 0x339a0fbd
// declared property getter: - (double)durationWatched;	// 0x339a06b5
- (void)finalize;	// 0x339a102d
// declared property getter: - (double)indicatedBitrate;	// 0x339a0835
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x339a0775
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x339a0899
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x339a0535
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x339a0591
// declared property getter: - (int)numberOfStalls;	// 0x339a0719
// declared property getter: - (double)observedBitrate;	// 0x339a07d1
// declared property getter: - (id)playbackSessionID;	// 0x339a0dfd
// declared property getter: - (id)playbackStartDate;	// 0x339a0f4d
// declared property getter: - (double)playbackStartOffset;	// 0x339a05ed
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x339a0651
// declared property getter: - (id)serverAddress;	// 0x339a0e6d
@end
