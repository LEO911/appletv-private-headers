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


@interface NSSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x2d2379ed
+ (id)newSetWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d2fe1ad
+ (id)set;	// 0x2d246371
+ (id)setWithArray:(id)array;	// 0x2d251215
+ (id)setWithArray:(id)array copyItems:(BOOL)items;	// 0x2d2fe425
+ (id)setWithArray:(id)array range:(NSRange)range;	// 0x2d2fe3d9
+ (id)setWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x2d2458f9
+ (id)setWithObject:(id)object;	// 0x2d27f8c5
+ (id)setWithObjects:(id)objects;	// 0x2d270fdd
+ (id)setWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d286d49
+ (id)setWithOrderedSet:(id)orderedSet;	// 0x2d2fe979
+ (id)setWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x2d2fe911
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x2d2fe8c5
+ (id)setWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x2d2fe879
+ (id)setWithSet:(id)set;	// 0x2d287225
+ (id)setWithSet:(id)set copyItems:(BOOL)items;	// 0x2d2fe9d9
+ (BOOL)supportsSecureCoding;	// 0x2d2fea5d
- (id)initWithArray:(id)array;	// 0x2d2690bd
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x2d2fe391
- (id)initWithArray:(id)array range:(NSRange)range;	// 0x2d2fe36d
- (id)initWithArray:(id)array range:(NSRange)range copyItems:(BOOL)items;	// 0x2d245955
- (id)initWithCoder:(id)coder;	// 0x2d2fea61
- (id)initWithObject:(id)object;	// 0x2d2fe18d
- (id)initWithObjects:(id)objects;	// 0x2d24dba5
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x2d2fe169
- (id)initWithOrderedSet:(id)orderedSet;	// 0x2d2fe83d
- (id)initWithOrderedSet:(id)orderedSet copyItems:(BOOL)items;	// 0x2d2fe7f5
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range;	// 0x2d2fe7d1
- (id)initWithOrderedSet:(id)orderedSet range:(NSRange)range copyItems:(BOOL)items;	// 0x2d2fe48d
- (id)initWithSet:(id)set;	// 0x2d281651
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x2d246a21
- (void)__applyValues:(/*function-pointer*/ void *)values context:(void *)context;	// 0x2d28f405
- (BOOL)__getValue:(id *)value forObj:(id)obj;	// 0x2d2fdd61
- (unsigned long)_cfTypeID;	// 0x2d2fcbcd
- (id)allObjects;	// 0x2d246409
- (id)anyObject;	// 0x2d2463ad
- (BOOL)containsObject:(id)object;	// 0x2d245fb1
- (id)copyWithZone:(NSZone *)zone;	// 0x2d2fea19
- (unsigned)count;	// 0x2d2fcb61
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d2fcbd1
- (unsigned)countForObject:(id)object;	// 0x2d251789
- (id)description;	// 0x2d2fe155
- (id)descriptionWithLocale:(id)locale;	// 0x2d2fe141
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x2d2fdde9
- (void)encodeWithCoder:(id)coder;	// 0x2d2fea65
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x2d28b1bd
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x2d28b249
- (void)getObjects:(id *)objects;	// 0x2d2822f5
- (void)getObjects:(id *)objects count:(unsigned)count;	// 0x2d28ac3d
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x2d2fdd89
- (unsigned)hash;	// 0x2d2823d9
- (BOOL)intersectsOrderedSet:(id)set;	// 0x2d2fcf69
- (BOOL)intersectsSet:(id)set;	// 0x2d28cc69
- (BOOL)isEqual:(id)equal;	// 0x2d280c79
- (BOOL)isEqualToSet:(id)set;	// 0x2d2711f9
- (BOOL)isNSSet__;	// 0x2d2382e1
- (BOOL)isSubsetOfOrderedSet:(id)orderedSet;	// 0x2d2fd105
- (BOOL)isSubsetOfSet:(id)set;	// 0x2d2fd281
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x2d28b0ed
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x2d28f0c5
- (id)member:(id)member;	// 0x2d2fcb85
- (id)members:(id)members notFoundMarker:(id)marker;	// 0x2d2fd541
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2d2469e5
- (id)objectEnumerator;	// 0x2d2fcba9
- (id)objectPassingTest:(id)test;	// 0x2d2fd8f1
- (id)objectWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d2fd7d9
- (id)objectsPassingTest:(id)test;	// 0x2d28aaa5
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x2d28ab31
- (id)setByAddingObject:(id)object;	// 0x2d286b59
- (id)setByAddingObjectsFromArray:(id)array;	// 0x2d2fea69
- (id)setByAddingObjectsFromSet:(id)set;	// 0x2d286d89
- (id)sortedArrayUsingComparator:(id)comparator;	// 0x2d2fdcd5
- (id)sortedArrayWithOptions:(unsigned)options usingComparator:(id)comparator;	// 0x2d2fd9f9
@end

