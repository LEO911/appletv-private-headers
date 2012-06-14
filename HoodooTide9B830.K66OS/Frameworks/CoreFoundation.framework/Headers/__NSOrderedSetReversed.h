/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSOrderedSet.h"


__attribute__((visibility("hidden")))
@interface __NSOrderedSetReversed : NSOrderedSet {
@private
	id _orderedSet;	// 4 = 0x4
	unsigned _cnt;	// 8 = 0x8
}
- (id)initWithOrderedSet:(id)orderedSet;	// 0x327b2a45
- (unsigned)count;	// 0x327b2add
- (void)dealloc;	// 0x327b2a91
- (unsigned)indexOfObject:(id)object;	// 0x327b2aed
- (id)objectAtIndex:(unsigned)index;	// 0x327b2b31
@end
