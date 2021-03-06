/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, MPAVItem;

@interface MPArrayQueueItem : NSObject {
@private
	MPAVItem *_item;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _stopTime;	// 20 = 0x14
	NSString *_videoID;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) MPAVItem *item;	// G=0x34824681; @synthesize=_item
@property(copy, nonatomic) NSString *path;	// G=0x34824691; S=0x348246a5; @synthesize=_path
@property(assign, nonatomic) double startTime;	// G=0x348246b5; S=0x348246cd; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x348246e1; S=0x348246f9; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x3482470d; S=0x34824721; @synthesize=_videoID
- (id)init;	// 0x34824559
- (id)initWithMPAVItem:(id)mpavitem;	// 0x3482456d
- (void)dealloc;	// 0x348245f1
// declared property getter: - (id)item;	// 0x34824681
// declared property getter: - (id)path;	// 0x34824691
// declared property setter: - (void)setPath:(id)path;	// 0x348246a5
// declared property setter: - (void)setStartTime:(double)time;	// 0x348246cd
// declared property setter: - (void)setStopTime:(double)time;	// 0x348246f9
// declared property setter: - (void)setVideoID:(id)anId;	// 0x34824721
// declared property getter: - (double)startTime;	// 0x348246b5
// declared property getter: - (double)stopTime;	// 0x348246e1
// declared property getter: - (id)videoID;	// 0x3482470d
@end

