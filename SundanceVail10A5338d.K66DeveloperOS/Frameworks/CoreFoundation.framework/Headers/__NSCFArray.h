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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x36a2dec1
- (BOOL)_isDeallocating;	// 0x36a2de71
- (BOOL)_tryRetain;	// 0x36a2de61
- (void)addObject:(id)object;	// 0x369ab145
- (Class)classForCoder;	// 0x36a2dec5
- (id)copyWithZone:(NSZone *)zone;	// 0x369a6975
- (unsigned)count;	// 0x36983735
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x369998cd
- (void)finalize;	// 0x36a2de81
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x369ae1a5
- (unsigned)hash;	// 0x36a2de59
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x369ab179
- (BOOL)isEqual:(id)equal;	// 0x369b48fd
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x369a6815
- (id)objectAtIndex:(unsigned)index;	// 0x36983739
- (oneway void)release;	// 0x369a86a5
- (void)removeLastObject;	// 0x36a2df01
- (void)removeObjectAtIndex:(unsigned)index;	// 0x369abd31
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x369a6839
- (id)retain;	// 0x369ab075
- (unsigned)retainCount;	// 0x36a2de7d
@end

