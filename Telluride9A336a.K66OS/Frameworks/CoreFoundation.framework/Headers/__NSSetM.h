/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableSet.h"


__attribute__((visibility("hidden")))
@interface __NSSetM : NSMutableSet {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x30790dad
+ (id)allocWithZone:(NSZone *)zone;	// 0x30790e0d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30790e09
- (void)addObject:(id)object;	// 0x30790da5
- (unsigned)count;	// 0x30790cb1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30790cc9
- (void)dealloc;	// 0x30790db1
- (void)finalize;	// 0x30790ddd
- (id)member:(id)member;	// 0x30790cc1
- (id)objectEnumerator;	// 0x30790cc5
- (void)removeObject:(id)object;	// 0x30790da9
@end

