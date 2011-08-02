/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPQueueFeeder.h"

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {
	NSArray *_queueItems;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x335d3ac5; 
- (id)initWithItems:(id)items;	// 0x335d3bcd
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x335d3b9d
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x335d3d71
- (void)dealloc;	// 0x335d3e99
// declared property getter: - (id)items;	// 0x335d3ac5
- (unsigned)numberOfPaths;	// 0x335d3b7d
- (id)pathAtIndex:(unsigned)index;	// 0x335d3b4d
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x335d3c91
@end
