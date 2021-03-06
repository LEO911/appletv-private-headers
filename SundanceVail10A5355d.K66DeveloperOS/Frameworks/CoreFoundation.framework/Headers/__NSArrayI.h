/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayI : NSArray {
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(unsigned)arg2 :(BOOL)arg3;	// 0x35d50f3d
+ (id)allocWithZone:(NSZone *)zone;	// 0x35d50ffd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x35d50ff9
- (id)copyWithZone:(NSZone *)zone;	// 0x35cac66d
- (unsigned)count;	// 0x35caa0e1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35caa0f5
- (void)dealloc;	// 0x35cadd45
- (void)finalize;	// 0x35d50f99
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x35cb0b41
- (id)objectAtIndex:(unsigned)index;	// 0x35caf349
@end

