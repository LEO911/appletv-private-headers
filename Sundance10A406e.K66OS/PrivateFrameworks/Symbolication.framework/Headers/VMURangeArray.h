/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Symbolication-Structs.h"


@interface VMURangeArray : NSObject <NSCopying> {
	unsigned _count;	// 4 = 0x4
	VMURange *_ranges;	// 8 = 0x8
	unsigned _max;	// 12 = 0xc
	BOOL _sorted;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x36de9d71; converted property
@property(readonly, assign) VMURange *ranges;	// G=0x36de9d61; converted property
- (id)init;	// 0x36de8e95
- (id)initWithRanges:(const VMURange *)ranges count:(unsigned)count;	// 0x36de8f0d
- (void)addRange:(VMURange)range;	// 0x36de9119
- (void)addRanges:(id)ranges;	// 0x36de920d
- (id)copyWithZone:(NSZone *)zone;	// 0x36de8fdd
// converted property getter: - (unsigned)count;	// 0x36de9d71
- (void)dealloc;	// 0x36de8f99
- (id)description;	// 0x36de9d81
- (unsigned)indexForLocation:(unsigned long long)location;	// 0x36de92b5
- (void)insertRange:(VMURange)range atIndex:(unsigned)index;	// 0x36de9405
- (BOOL)intersectsLocation:(unsigned long long)location;	// 0x36de9541
- (BOOL)intersectsRange:(VMURange)range;	// 0x36de9649
- (VMURange)largestRange;	// 0x36de9c71
- (VMURange)largestSubrangeNotExcludedBySelfForRange:(VMURange)range andLargerThan:(unsigned long long)than startIndex:(unsigned *)index;	// 0x36de984d
- (VMURange)range;	// 0x36de9b5d
- (VMURange)rangeAtIndex:(unsigned)index;	// 0x36de926d
- (VMURange)rangeForLocation:(unsigned long long)location;	// 0x36de93bd
// converted property getter: - (VMURange *)ranges;	// 0x36de9d61
- (void)removeAllRanges;	// 0x36de952d
- (void)removeRangeAtIndex:(unsigned)index;	// 0x36de94d9
- (void)setCapacity:(unsigned)capacity;	// 0x36de9045
- (void)sort;	// 0x36de907d
- (VMURange)subrangeNotExcludedBySelfForRange:(VMURange)range;	// 0x36de974d
- (unsigned long long)sumLengths;	// 0x36de9d15
@end

