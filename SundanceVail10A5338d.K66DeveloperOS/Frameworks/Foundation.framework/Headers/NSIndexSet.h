/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "Foundation-Structs.h"


@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	struct {
		unsigned _inverted : 1;
		unsigned _builtin : 1;
		unsigned _isCF : 1;
		unsigned _reserved : 29;
	} _indexSetFlags;	// 4 = 0x4
	union {
		struct {
			NSRange _range;
		} _singleRange;
		struct {
			void *_data;
			void *_reserved;
		} _multipleRanges;
	} _internal;	// 8 = 0x8
}
+ (id)indexSet;	// 0x3734363d
+ (id)indexSetWithIndex:(unsigned)index;	// 0x37344f8d
+ (id)indexSetWithIndexes:(const unsigned *)indexes count:(unsigned)count;	// 0x37381005
+ (id)indexSetWithIndexesInRange:(NSRange)range;	// 0x37343741
- (id)init;	// 0x373079b9
- (id)initWithCoder:(id)coder;	// 0x3738146d
- (id)initWithIndex:(unsigned)index;	// 0x37344fc9
- (id)initWithIndexSet:(id)indexSet;	// 0x37327681
- (id)initWithIndexes:(const unsigned *)indexes count:(unsigned)count;	// 0x37381045
- (id)initWithIndexesInRange:(NSRange)range;	// 0x373079cd
- (unsigned)__getContainmentVector:(out BOOL *)vector inRange:(NSRange)range;	// 0x37381d6d
- (unsigned)_indexAtIndex:(unsigned)index;	// 0x3735e1c5
- (unsigned)_indexClosestToIndex:(unsigned)index equalAllowed:(BOOL)allowed following:(BOOL)following;	// 0x37344a6d
- (unsigned)_indexOfRangeAfterOrContainingIndex:(unsigned)rangeAfterOrContainingIndex;	// 0x373437e9
- (unsigned)_indexOfRangeBeforeOrContainingIndex:(unsigned)rangeBeforeOrContainingIndex;	// 0x37327a45
- (unsigned)_indexOfRangeContainingIndex:(unsigned)rangeContainingIndex;	// 0x3734496d
- (id)_init;	// 0x37307a81
- (id)_numberEnumerator;	// 0x3738213d
- (void)_setContentToContentFromIndexSet:(id)indexSet;	// 0x373276b5
- (Class)classForCoder;	// 0x37381859
- (BOOL)containsIndex:(unsigned)index;	// 0x373448b5
- (BOOL)containsIndexes:(id)indexes;	// 0x37381f79
- (BOOL)containsIndexesInRange:(NSRange)range;	// 0x37381f0d
- (id)copyWithZone:(NSZone *)zone;	// 0x37327619
- (unsigned)count;	// 0x37327375
- (unsigned)countOfIndexesInRange:(NSRange)range;	// 0x37381e39
- (void)dealloc;	// 0x37308049
- (id)description;	// 0x37382185
- (void)encodeWithCoder:(id)coder;	// 0x37381255
- (void)enumerateIndexesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x3738280d
- (void)enumerateIndexesUsingBlock:(id)block;	// 0x3735352d
- (void)enumerateIndexesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x37353541
- (void)enumerateRangesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x37382c29
- (void)enumerateRangesUsingBlock:(id)block;	// 0x37343781
- (void)enumerateRangesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x37343795
- (unsigned)firstIndex;	// 0x37344a09
- (unsigned)getIndexes:(unsigned *)indexes maxCount:(unsigned)count inIndexRange:(NSRange *)indexRange;	// 0x37381b49
- (unsigned)hash;	// 0x37381869
- (unsigned)indexGreaterThanIndex:(unsigned)index;	// 0x37344a4d
- (unsigned)indexGreaterThanOrEqualToIndex:(unsigned)index;	// 0x37353591
- (unsigned)indexInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x373828c5
- (unsigned)indexLessThanIndex:(unsigned)index;	// 0x373535b1
- (unsigned)indexLessThanOrEqualToIndex:(unsigned)index;	// 0x37381b29
- (unsigned)indexPassingTest:(id)test;	// 0x3738285d
- (unsigned)indexWithOptions:(unsigned)options passingTest:(id)test;	// 0x37382871
- (id)indexesInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x37382aad
- (id)indexesPassingTest:(id)test;	// 0x37382915
- (id)indexesWithOptions:(unsigned)options passingTest:(id)test;	// 0x37382929
- (BOOL)intersectsIndexesInRange:(NSRange)range;	// 0x3738207d
- (BOOL)isEqual:(id)equal;	// 0x37381ad1
- (BOOL)isEqualToIndexSet:(id)indexSet;	// 0x373818d9
- (unsigned)lastIndex;	// 0x37307acd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3734f7b5
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x37327d65
- (unsigned)rangeCount;	// 0x37307b25
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x37459909
@end
