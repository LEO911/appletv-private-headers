/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedCyclerController.h"

@class BRCyclerControl, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImageCyclerController : ATVFeedCyclerController {
	NSArray *_controls;	// 4 = 0x4
	BRCyclerControl *_cycler;	// 8 = 0x8
}
- (void)_firstItemReady:(id)ready;	// 0x17b2a9
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x17b1a1
- (long)cycler:(id)cycler willCycleToItemAtIndex:(long)index;	// 0x17b1c1
- (void)dealloc;	// 0x17aed1
- (void)setItems:(id)items;	// 0x17af4d
@end

