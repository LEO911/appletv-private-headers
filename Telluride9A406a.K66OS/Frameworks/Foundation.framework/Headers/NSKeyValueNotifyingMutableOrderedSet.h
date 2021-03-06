/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSKeyValueMutableOrderedSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableOrderedSet : NSKeyValueMutableOrderedSet {
@private
	NSMutableOrderedSet *_mutableOrderedSet;	// 12 = 0xc
}
+ (XXStruct_1UKQIB *)_proxyNonGCPoolPointer;	// 0x35ed9749
+ (id)_proxyShare;	// 0x35ed9759
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;	// 0x35ed9789
- (void)_proxyNonGCFinalize;	// 0x35ed9805
- (unsigned)count;	// 0x35ed9859
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35ed9879
- (unsigned)indexOfObject:(id)object;	// 0x35ed98ad
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x35ed990d
- (void)insertObjects:(id)objects atIndexes:(id)indexes;	// 0x35ed99e5
- (id)objectAtIndex:(unsigned)index;	// 0x35ed98cd
- (id)objectsAtIndexes:(id)indexes;	// 0x35ed98ed
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35ed9a79
- (void)removeObjectsAtIndexes:(id)indexes;	// 0x35ed9b4d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x35ed9bd9
- (void)replaceObjectsAtIndexes:(id)indexes withObjects:(id)objects;	// 0x35ed9cb1
@end

