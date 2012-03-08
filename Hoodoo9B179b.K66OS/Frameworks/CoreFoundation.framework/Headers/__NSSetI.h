/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSSet.h"


__attribute__((visibility("hidden")))
@interface __NSSetI : NSSet {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x30d9ac05
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d9ac65
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30d9ac61
- (id)copyWithZone:(NSZone *)zone;	// 0x30d9abf5
- (unsigned)count;	// 0x30d9ab01
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30d9ab19
- (void)dealloc;	// 0x30d9ac09
- (void)finalize;	// 0x30d9ac35
- (id)member:(id)member;	// 0x30d9ab11
- (id)objectEnumerator;	// 0x30d9ab15
@end
