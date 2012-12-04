/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSMutableArray.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSSortedArray : NSMutableArray {
	NSMutableArray *_array;	// 4 = 0x4
	SEL _compareSelector;	// 8 = 0x8
	unsigned _cachedCount;	// 12 = 0xc
	id _cachedFirstObject;	// 16 = 0x10
}
@property(assign) SEL compareSelector;	// G=0x375725d5; S=0x375725e5; converted property
+ (void)initialize;	// 0x3757249d
- (id)init;	// 0x375725c1
- (id)initWithArray:(id)array;	// 0x37572895
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x37572781
- (id)initWithCapacity:(unsigned)capacity;	// 0x37572659
- (id)initWithCapacity:(unsigned)capacity compareSelector:(SEL)selector;	// 0x375724dd
- (id)initWithCoder:(id)coder;	// 0x37572945
- (id)initWithCompareSelector:(SEL)compareSelector;	// 0x375725ad
- (id)initWithObjects:(id)objects;	// 0x375726bd
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x3757266d
- (void)_insertObjectInSortOrder:(id)sortOrder;	// 0x37572a45
- (void)addObject:(id)object;	// 0x37572c29
// converted property getter: - (SEL)compareSelector;	// 0x375725d5
- (BOOL)conformsToProtocol:(id)protocol;	// 0x375729a9
- (unsigned)count;	// 0x37572bc9
- (void)dealloc;	// 0x375729f9
- (void)encodeWithCoder:(id)coder;	// 0x375728e1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x37572cf5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x375728a9
- (id)objectAtIndex:(unsigned)index;	// 0x37572bd9
- (void)removeLastObject;	// 0x37572ca1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x37572d05
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x37572c39
- (void)setArray:(id)array;	// 0x37572d59
// converted property setter: - (void)setCompareSelector:(SEL)selector;	// 0x375725e5
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x37572df5
- (void)sortUsingSelector:(SEL)selector;	// 0x37572e59
@end
