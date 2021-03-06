/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableOrderedSet.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderOrderedSet : NSMutableOrderedSet {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3352517d
+ (id)immutablePlaceholder;	// 0x3349b91d
+ (void)initialize;	// 0x3349b819
+ (id)mutablePlaceholder;	// 0x3349c341
- (id)init;	// 0x3349b92d
- (id)initWithCapacity:(unsigned)capacity;	// 0x3349cd59
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x3349b981
- (unsigned)count;	// 0x335251a5
- (void)dealloc;	// 0x335251a1
- (unsigned)indexOfObject:(id)object;	// 0x33525269
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x335253f1
- (id)objectAtIndex:(unsigned)index;	// 0x3352532d
- (oneway void)release;	// 0x33525195
- (void)removeObjectAtIndex:(unsigned)index;	// 0x335254b5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33525579
- (id)retain;	// 0x33525191
- (unsigned)retainCount;	// 0x33525199
@end

