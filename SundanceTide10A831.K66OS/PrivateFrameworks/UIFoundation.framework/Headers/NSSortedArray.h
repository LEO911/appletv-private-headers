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
@property(assign) SEL compareSelector;	// G=0x32ca65d5; S=0x32ca65e5; converted property
+ (void)initialize;	// 0x32ca649d
- (id)init;	// 0x32ca65c1
- (id)initWithArray:(id)array;	// 0x32ca6895
- (id)initWithArray:(id)array copyItems:(BOOL)items;	// 0x32ca6781
- (id)initWithCapacity:(unsigned)capacity;	// 0x32ca6659
- (id)initWithCapacity:(unsigned)capacity compareSelector:(SEL)selector;	// 0x32ca64dd
- (id)initWithCoder:(id)coder;	// 0x32ca6945
- (id)initWithCompareSelector:(SEL)compareSelector;	// 0x32ca65ad
- (id)initWithObjects:(id)objects;	// 0x32ca66bd
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x32ca666d
- (void)_insertObjectInSortOrder:(id)sortOrder;	// 0x32ca6a45
- (void)addObject:(id)object;	// 0x32ca6c29
// converted property getter: - (SEL)compareSelector;	// 0x32ca65d5
- (BOOL)conformsToProtocol:(id)protocol;	// 0x32ca69a9
- (unsigned)count;	// 0x32ca6bc9
- (void)dealloc;	// 0x32ca69f9
- (void)encodeWithCoder:(id)coder;	// 0x32ca68e1
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x32ca6cf5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32ca68a9
- (id)objectAtIndex:(unsigned)index;	// 0x32ca6bd9
- (void)removeLastObject;	// 0x32ca6ca1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32ca6d05
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x32ca6c39
- (void)setArray:(id)array;	// 0x32ca6d59
// converted property setter: - (void)setCompareSelector:(SEL)selector;	// 0x32ca65e5
- (void)sortUsingFunction:(/*function-pointer*/ void *)function context:(void *)context;	// 0x32ca6df5
- (void)sortUsingSelector:(SEL)selector;	// 0x32ca6e59
@end
