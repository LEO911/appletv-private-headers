/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSObject.h"


@interface NSArray : NSObject <NSCopying, NSMutableCopying, NSCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x34228951
+ (id)array;	// 0x3422891d
+ (id)arrayWithArray:(id)array;	// 0x34232a49
+ (id)arrayWithArray:(id)array copyItems:(BOOL)items;	// 0x342b854d
+ (id)arrayWithArray:(id)array range:(NSRange)range;	// 0x342b554d
+ (id)arrayWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x342b559d
+ (id)arrayWithObject:(id)object;	// 0x3422a0f9
+ (id)arrayWithObjects:(id)objects;	// 0x34254115
+ (id)arrayWithObjects:(const id *)objects count:(unsigned)count;	// 0x34239f21
+ (id)arrayWithOrderedSet:(id)orderedSet;	// 0x342b86b5
+ (id)arrayWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x342b864d
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x342b546d
+ (id)arrayWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x342b54bd
+ (id)arrayWithSet:(id)set;	// 0x342b53e5
+ (id)arrayWithSet:(id)set copyItems:(BOOL)items;	// 0x342b541d
- (id)initWithArray:(id)array;	// 0x3425515d
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x3422ff99
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x342b55f9
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x3422ffe9
- (id)initWithCoder:(id)coder;	// 0x342b52b1
- (id)initWithObject:(id)object;	// 0x342b562d
- (id)initWithObjects:(id)objects;	// 0x3424e2c9
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x342b69bd
- (id)initWithOrderedSet:(id)orderedSet;	// 0x342b8605
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x342b85b5
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x342b5519
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x342bb1d9
- (id)initWithSet:(id)set;	// 0x342b5455
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x342bae65
- (unsigned long)_cfTypeID;	// 0x34261819
- (id)allObjects;	// 0x342b9289
- (id)arrayByAddingObject:(id)object;	// 0x342658d9
- (id)arrayByAddingObjects:(const id *)objects count:(unsigned)count;	// 0x342baacd
- (id)arrayByAddingObjectsFromArray:(id)array;	// 0x342ba799
- (id)arrayByAddingObjectsFromOrderedSet:(id)orderedSet;	// 0x342ba465
- (id)arrayByAddingObjectsFromSet:(id)set;	// 0x342ba151
- (id)arrayByApplyingSelector:(SEL)selector;	// 0x34262ed9
- (id)arrayByExcludingObjectsInArray:(id)array;	// 0x342b9d01
- (id)arrayByExcludingToObjectsInArray:(id)array;	// 0x342b98b1
- (id)componentsJoinedByString:(id)string;	// 0x34263a61
- (BOOL)containsObject:(id)object;	// 0x3423c665
- (BOOL)containsObject:(id)object inRange:(NSRange)range;	// 0x342b5ab9
- (BOOL)containsObjectIdenticalTo:(id)to;	// 0x342b6831
- (id)copyWithZone:(NSZone *)zone;	// 0x342b6f75
- (unsigned)count;	// 0x342b69fd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34267bf5
- (unsigned)countForObject:(id)object;	// 0x342b677d
- (id)description;	// 0x342b564d
- (id)descriptionWithLocale:(id)locale;	// 0x342b5665
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x342bb6c1
- (void)encodeWithCoder:(id)coder;	// 0x342b52b5
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x342b837d
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x3425ef59
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x3425ef71
- (id)firstObject;	// 0x342b56e9
- (id)firstObjectCommonWithArray:(id)array;	// 0x342b66b9
- (BOOL)getObject:(id *)object atIndex:(unsigned)index;	// 0x342b8529
- (void)getObjects:(id *)objects;	// 0x3423c625
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x34267c79
- (unsigned)hash;	// 0x34267b25
- (unsigned)indexOf:(id)of :(unsigned)arg2 :(BOOL)arg3;	// 0x342b8461
- (unsigned)indexOfAttributeBySelector:(SEL)attributeBySelector equalToObject:(id)object;	// 0x342b65dd
- (unsigned)indexOfObject:(id)object;	// 0x34232aad
- (unsigned)indexOfObject:(id)object inRange:(NSRange)range;	// 0x342b5949
- (unsigned)indexOfObject:(id)object inSortedRange:(NSRange)sortedRange options:(unsigned)options usingComparator:(id)comparator;	// 0x342b6a1d
- (unsigned)indexOfObject:(id)object range:(NSRange)range identical:(BOOL)identical;	// 0x342b567d
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x342b7ef5
- (unsigned)indexOfObjectIdenticalTo:(id)to;	// 0x3425efc9
- (unsigned)indexOfObjectIdenticalTo:(id)to inRange:(NSRange)range;	// 0x342b57f9
- (unsigned)indexOfObjectPassingTest:(id)objectPassingTest;	// 0x34265bb9
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x34265bd1
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x342b7a45
- (id)indexesOfObjectsPassingTest:(id)objectsPassingTest;	// 0x34269d49
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x34269d61
- (BOOL)isEqual:(id)equal;	// 0x342304d1
- (BOOL)isEqualToArray:(id)array;	// 0x3422dc29
- (BOOL)isNSArray__;	// 0x34230515
- (id)lastObject;	// 0x3422bbd5
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x34258819
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x3426b169
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3422ff65
- (id)objectAtIndex:(unsigned)index;	// 0x342b69dd
- (id)objectEnumerator;	// 0x3425d425
- (id)objectsAtIndexes:(id)indexes;	// 0x342b8d09
- (id)reverseObjectEnumerator;	// 0x34253fed
- (id)reversedArray;	// 0x342b53a5
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x342b56d1
- (id)sortedArrayUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x34260dcd
- (id)sortedArrayUsingSelector:(SEL)selector;	// 0x34264055
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x34260e75
- (id)subarrayWithRange:(NSRange)range;	// 0x3426081d
@end

