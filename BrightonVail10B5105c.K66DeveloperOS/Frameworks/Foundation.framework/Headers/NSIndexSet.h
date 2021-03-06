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
+ (id)indexSet;	// 0x360ad7b9
+ (id)indexSetWithIndex:(unsigned)index;	// 0x360bd675
+ (id)indexSetWithIndexes:(const unsigned *)indexes count:(unsigned)count;	// 0x360ec6d9
+ (id)indexSetWithIndexesInRange:(NSRange)range;	// 0x360ad8bd
- (id)init;	// 0x3606ebe1
- (id)initWithCoder:(id)coder;	// 0x360ecb41
- (id)initWithIndex:(unsigned)index;	// 0x360bd6b1
- (id)initWithIndexSet:(id)indexSet;	// 0x36090055
- (id)initWithIndexes:(const unsigned *)indexes count:(unsigned)count;	// 0x360ec719
- (id)initWithIndexesInRange:(NSRange)range;	// 0x3606ebf5
- (unsigned)__getContainmentVector:(out BOOL *)vector inRange:(NSRange)range;	// 0x360ed479
- (unsigned)_indexAtIndex:(unsigned)index;	// 0x360c6c85
- (unsigned)_indexClosestToIndex:(unsigned)index equalAllowed:(BOOL)allowed following:(BOOL)following;	// 0x360aea71
- (unsigned)_indexOfRangeAfterOrContainingIndex:(unsigned)rangeAfterOrContainingIndex;	// 0x360ad965
- (unsigned)_indexOfRangeBeforeOrContainingIndex:(unsigned)rangeBeforeOrContainingIndex;	// 0x3608fccd
- (unsigned)_indexOfRangeContainingIndex:(unsigned)rangeContainingIndex;	// 0x360ae971
- (id)_init;	// 0x3606eca9
- (id)_numberEnumerator;	// 0x360ed775
- (void)_setContentToContentFromIndexSet:(id)indexSet;	// 0x36090089
- (Class)classForCoder;	// 0x360ecf2d
- (BOOL)containsIndex:(unsigned)index;	// 0x360ae8b9
- (BOOL)containsIndexes:(id)indexes;	// 0x360ed5b1
- (BOOL)containsIndexesInRange:(NSRange)range;	// 0x360ed545
- (id)copyWithZone:(NSZone *)zone;	// 0x3608ffed
- (unsigned)count;	// 0x3609023d
- (unsigned)countOfIndexesInRange:(NSRange)range;	// 0x360adfe1
- (void)dealloc;	// 0x3606f7a9
- (id)description;	// 0x360ed7bd
- (void)encodeWithCoder:(id)coder;	// 0x360ec929
- (void)enumerateIndexesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x360ede45
- (void)enumerateIndexesUsingBlock:(id)block;	// 0x360bf6dd
- (void)enumerateIndexesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x360bf6f1
- (void)enumerateRangesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x360ee261
- (void)enumerateRangesUsingBlock:(id)block;	// 0x360ad8fd
- (void)enumerateRangesWithOptions:(unsigned)options usingBlock:(id)block;	// 0x360ad911
- (unsigned)firstIndex;	// 0x360aea0d
- (unsigned)getIndexes:(unsigned *)indexes maxCount:(unsigned)count inIndexRange:(NSRange *)indexRange;	// 0x360ed255
- (unsigned)hash;	// 0x360ecf3d
- (unsigned)indexGreaterThanIndex:(unsigned)index;	// 0x360aea51
- (unsigned)indexGreaterThanOrEqualToIndex:(unsigned)index;	// 0x360bf741
- (unsigned)indexInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x360edefd
- (unsigned)indexLessThanIndex:(unsigned)index;	// 0x360bf761
- (unsigned)indexLessThanOrEqualToIndex:(unsigned)index;	// 0x360ed235
- (unsigned)indexPassingTest:(id)test;	// 0x360ede95
- (unsigned)indexWithOptions:(unsigned)options passingTest:(id)test;	// 0x360edea9
- (id)indexesInRange:(NSRange)range options:(unsigned)options passingTest:(id)test;	// 0x360ee0e5
- (id)indexesPassingTest:(id)test;	// 0x360edf4d
- (id)indexesWithOptions:(unsigned)options passingTest:(id)test;	// 0x360edf61
- (BOOL)intersectsIndexesInRange:(NSRange)range;	// 0x360ed6b5
- (BOOL)isEqual:(id)equal;	// 0x360ed1a5
- (BOOL)isEqualToIndexSet:(id)indexSet;	// 0x360ecfad
- (unsigned)lastIndex;	// 0x3606ecf5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x360ed1fd
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x36090275
- (unsigned)rangeCount;	// 0x3606ed4d
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x361c7589
@end

