/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOrderedSet.h"


__attribute__((visibility("hidden")))
@interface __NSOrderedSetI : NSOrderedSet {
@private
	unsigned _used : 26;	// 4 = 0x4
	unsigned _szidx : 6;	// 7 = 0x7
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x370bfa91
+ (id)allocWithZone:(NSZone *)zone;	// 0x37155261
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3715525d
- (id)copyWithZone:(NSZone *)zone;	// 0x371551e1
- (unsigned)count;	// 0x370c0be1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x370c0ec1
- (void)dealloc;	// 0x370cfca5
- (void)finalize;	// 0x371551f1
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x370cfa85
- (unsigned)indexOfObject:(id)object;	// 0x370cfd35
- (id)objectAtIndex:(unsigned)index;	// 0x370cfbf1
@end

