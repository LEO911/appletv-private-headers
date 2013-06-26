/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x2d2f2aa9
- (BOOL)_isDeallocating;	// 0x2d2f2a59
- (BOOL)_tryRetain;	// 0x2d2f2a49
- (void)addObject:(id)object;	// 0x2d263675
- (Class)classForCoder;	// 0x2d2f2aad
- (id)copyWithZone:(NSZone *)zone;	// 0x2d2639a9
- (unsigned)count;	// 0x2d24d561
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x2d24d335
- (void)finalize;	// 0x2d2f2a69
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x2d251a21
- (unsigned)hash;	// 0x2d2f2a41
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x2d2636a9
- (BOOL)isEqual:(id)equal;	// 0x2d27a565
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x2d263851
- (id)objectAtIndex:(unsigned)index;	// 0x2d2639e5
- (oneway void)release;	// 0x2d256d75
- (void)removeLastObject;	// 0x2d2f2af1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x2d26c59d
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x2d263871
- (id)retain;	// 0x2d257925
- (unsigned)retainCount;	// 0x2d2f2a65
@end
