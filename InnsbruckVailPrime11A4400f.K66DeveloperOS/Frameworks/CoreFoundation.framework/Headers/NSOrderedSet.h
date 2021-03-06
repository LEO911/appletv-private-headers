/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"
#import "NSFastEnumeration.h"


@interface NSOrderedSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d283345
+ (id)newOrderedSetWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d320d11
+ (id)orderedSet;	// 0x2d291575
+ (id)orderedSetWithArray:(id)array;	// 0x2d3217fd
+ (id)orderedSetWithArray:(id)array copyItems:(BOOL)items;	// 0x2d321795
+ (id)orderedSetWithArray:(id)array range:(NSRange)range;	// 0x2d321749
+ (id)orderedSetWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x2d3216fd
+ (id)orderedSetWithObject:(id)object;	// 0x2d320cd1
+ (id)orderedSetWithObjects:(id)objects;	// 0x2d3210f5
+ (id)orderedSetWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d320c91
+ (id)orderedSetWithOrderedSet:(id)orderedSet;	// 0x2d3219b9
+ (id)orderedSetWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x2d321951
+ (id)orderedSetWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x2d321905
+ (id)orderedSetWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x2d290b35
+ (id)orderedSetWithSet:(id)set;	// 0x2d321cf5
+ (id)orderedSetWithSet:(id)set copyItems:(BOOL)items;	// 0x2d321cb5
+ (BOOL)supportsSecureCoding;	// 0x2d321d8d
- (id)initWithArray:(id)array;	// 0x2d3216c1
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x2d321679
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x2d321655
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x2d321311
- (id)initWithCoder:(id)coder;	// 0x2d321f15
- (id)initWithObject:(id)object;	// 0x2d320c71
- (id)initWithObjects:(id)objects;	// 0x2d320ed1
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d320c4d
- (id)initWithOrderedSet:(id)orderedSet;	// 0x2d3218c9
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x2d321881
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x2d32185d
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x2d290b81
- (id)initWithSet:(id)set;	// 0x2d321ca1
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x2d321a19
- (id)allObjects;	// 0x2d31daf9
- (id)array;	// 0x2d284381
- (Class)classForCoder;	// 0x2d322241
- (BOOL)containsObject:(id)object;	// 0x2d284a25
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x2d31dc95
- (id)copyWithZone:(NSZone *)zone;	// 0x2d321d35
- (unsigned)count;	// 0x2d31da8d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d28478d
- (unsigned)countForObject:(id)object;	// 0x2d295729
- (unsigned)countForObject:(id)object inRange:(NSRange)range;	// 0x2d31dd8d
- (id)description;	// 0x2d320c39
- (id)descriptionWithLocale:(id)locale;	// 0x2d320c25
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x2d3208c9
- (void)encodeWithCoder:(id)coder;	// 0x2d321d91
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x2d31de85
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x2d284f2d
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x2d284fb9
- (id)firstObject;	// 0x2d2950b1
- (void)getObjects:(id *)objects;	// 0x2d2950e9
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x2d31e431
- (unsigned)hash;	// 0x2d31e5bd
- (unsigned)indexOfObject:(id)object;	// 0x2d31dab1
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x2d31e5cd
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x2d31e6c9
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d31e9e9
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x2d31ef09
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d31ee55
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d31ef95
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x2d31f54d
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d31f499
- (BOOL)intersectsOrderedSet:(id)set;	// 0x2d31f5d9
- (BOOL)intersectsSet:(id)set;	// 0x2d31f775
- (BOOL)isEqual:(id)equal;	// 0x2d31fad1
- (BOOL)isEqualToOrderedSet:(id)orderedSet;	// 0x2d31f911
- (BOOL)isNSOrderedSet__;	// 0x2d291571
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x2d31fb19
- (BOOL)isSubsetOfSet:(id)set;	// 0x2d31fc89
- (id)lastObject;	// 0x2d31fdf9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2d29574d
- (id)objectAtIndex:(unsigned)index;	// 0x2d31dad5
- (id)objectAtIndexedSubscript:(unsigned)indexedSubscript;	// 0x2d31fe31
- (id)objectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d31fe41
- (id)objectEnumerator;	// 0x2d28f6d1
- (id)objectPassingTest:(id)test;	// 0x2d32001d
- (id)objectWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d31ff71
- (id)objectsAtIndexes:(id)indexes;	// 0x2d2910dd
- (id)objectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x2d3200a9
- (id)objectsPassingTest:(id)test;	// 0x2d3202a5
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d3201e5
- (id)reverseObjectEnumerator;	// 0x2d320331
- (id)reversedOrderedSet;	// 0x2d320379
- (id)set;	// 0x2d3203c1
- (id)sortedArrayFromRange:(NSRange)range options:(unsigned)options usingComparator:(id)comparator;	// 0x2d320409
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x2d320821
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x2d320771
@end

