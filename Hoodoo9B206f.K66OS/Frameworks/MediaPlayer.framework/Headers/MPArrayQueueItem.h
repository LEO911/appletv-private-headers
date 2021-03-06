/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, SSDownload, MPAVItem;

@interface MPArrayQueueItem : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	SSDownload *_download;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _stopTime;	// 24 = 0x18
	NSString *_videoID;	// 32 = 0x20
}
@property(retain, nonatomic) SSDownload *download;	// G=0x3034644d; S=0x3034645d; @synthesize=_download
@property(readonly, assign, nonatomic) MPAVItem *item;	// G=0x30346481; @synthesize=_item
@property(copy, nonatomic) NSString *path;	// G=0x30346491; S=0x303464a1; @synthesize=_path
@property(assign, nonatomic) double startTime;	// G=0x303464c5; S=0x303464dd; @synthesize=_startTime
@property(assign, nonatomic) double stopTime;	// G=0x303464f1; S=0x30346509; @synthesize=_stopTime
@property(copy, nonatomic) NSString *videoID;	// G=0x3034651d; S=0x3034652d; @synthesize=_videoID
- (id)init;	// 0x30346309
- (id)initWithMPAVItem:(id)mpavitem;	// 0x3034631d
- (void)dealloc;	// 0x303463a1
// declared property getter: - (id)download;	// 0x3034644d
// declared property getter: - (id)item;	// 0x30346481
// declared property getter: - (id)path;	// 0x30346491
// declared property setter: - (void)setDownload:(id)download;	// 0x3034645d
// declared property setter: - (void)setPath:(id)path;	// 0x303464a1
// declared property setter: - (void)setStartTime:(double)time;	// 0x303464dd
// declared property setter: - (void)setStopTime:(double)time;	// 0x30346509
// declared property setter: - (void)setVideoID:(id)anId;	// 0x3034652d
// declared property getter: - (double)startTime;	// 0x303464c5
// declared property getter: - (double)stopTime;	// 0x303464f1
// declared property getter: - (id)videoID;	// 0x3034651d
@end

