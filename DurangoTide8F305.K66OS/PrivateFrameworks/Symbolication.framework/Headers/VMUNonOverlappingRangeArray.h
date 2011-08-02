/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMURangeArray.h"
#import "Symbolication-Structs.h"


@interface VMUNonOverlappingRangeArray : VMURangeArray {
}
- (void)_mergeAllBitsOfRange:(VMURange)range excludingRanges:(id)ranges mergeRanges:(BOOL)ranges3;	// 0x311a8c75
- (VMURange)largestUnusedWithInUse:(id)use;	// 0x311a7c69
- (void)mergeRange:(VMURange)range;	// 0x311a8de5
- (void)mergeRange:(VMURange)range excludingRanges:(id)ranges;	// 0x311a7d45
- (void)mergeRanges:(id)ranges;	// 0x311a78f5
- (void)mergeRanges:(id)ranges excludingRanges:(id)ranges2;	// 0x311a788d
- (id)subtract:(id)subtract mergeRanges:(BOOL)ranges;	// 0x311a77dd
- (unsigned long long)sumLengths;	// 0x311a7545
@end
