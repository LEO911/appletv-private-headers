/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>


@interface VMURangeArray : NSObject <NSCopying> {
	unsigned _count;	// 4 = 0x4
	VMURange *_ranges;	// 8 = 0x8
	unsigned _max;	// 12 = 0xc
	BOOL _sorted;	// 16 = 0x10
}
@property(readonly, assign) unsigned count;	// G=0x32918865; converted property
@property(readonly, assign) VMURange *ranges;	// G=0x32918855; converted property
- (id)init;	// 0x32917a51
- (id)initWithRanges:(const VMURange *)ranges count:(unsigned)count;	// 0x32917ac9
- (void)addRange:(VMURange)range;	// 0x32917cd1
- (void)addRanges:(id)ranges;	// 0x32917dc1
- (id)copyWithZone:(NSZone *)zone;	// 0x32917b99
// converted property getter: - (unsigned)count;	// 0x32918865
- (void)dealloc;	// 0x32917b55
- (id)description;	// 0x32918875
- (unsigned)indexForLocation:(unsigned long long)location;	// 0x32917e59
- (void)insertRange:(VMURange)range atIndex:(unsigned)index;	// 0x32917fa9
- (BOOL)intersectsLocation:(unsigned long long)location;	// 0x329180ed
- (BOOL)intersectsRange:(VMURange)range;	// 0x32918111
- (VMURange)largestRange;	// 0x32918771
- (VMURange)largestSubrangeNotExcludedBySelfForRange:(VMURange)range andLargerThan:(unsigned long long)than startIndex:(unsigned *)index;	// 0x32918329
- (VMURange)range;	// 0x32918659
- (VMURange)rangeAtIndex:(unsigned)index;	// 0x32917e21
- (VMURange)rangeForLocation:(unsigned long long)location;	// 0x32917f61
// converted property getter: - (VMURange *)ranges;	// 0x32918855
- (void)removeAllRanges;	// 0x329180d9
- (void)removeRangeAtIndex:(unsigned)index;	// 0x32918081
- (void)setCapacity:(unsigned)capacity;	// 0x32917c01
- (void)sort;	// 0x32917c35
- (VMURange)subrangeNotExcludedBySelfForRange:(VMURange)range;	// 0x32918211
- (unsigned long long)sumLengths;	// 0x32918809
@end

