/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVQueueFeeder : NSObject {
}
- (id)init;	// 0x335c60f1
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x335d64f9
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x335d6429
- (void)contentsDidChangeByInsertingRange:(NSRange)contents;	// 0x335d6291
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x335d635d
- (unsigned)itemCount;	// 0x335cd571
- (unsigned)numberOfPaths;	// 0x335d6285
- (id)pathAtIndex:(unsigned)index;	// 0x335d6289
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x335c658d
@end
