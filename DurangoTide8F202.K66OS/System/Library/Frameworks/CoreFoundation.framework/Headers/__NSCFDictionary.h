/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSMutableDictionary.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFDictionary : NSMutableDictionary {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31d14291
- (Class)classForCoder;	// 0x31cc3729
- (id)copyWithZone:(NSZone *)zone;	// 0x31c9b871
- (unsigned)count;	// 0x31c8aebd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31c9b811
- (void)finalize;	// 0x31d15b8d
- (unsigned)hash;	// 0x31d15b75
- (BOOL)isEqual:(id)equal;	// 0x31cc19d9
- (id)keyEnumerator;	// 0x31cc0875
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31c95d8d
- (id)objectForKey:(id)key;	// 0x31c85601
- (oneway void)release;	// 0x31c820c5
- (void)removeAllObjects;	// 0x31c88f05
- (void)removeObjectForKey:(id)key;	// 0x31cb0f7d
- (id)retain;	// 0x31c81e61
- (unsigned)retainCount;	// 0x31d15b81
- (void)setObject:(id)object forKey:(id)key;	// 0x31c8a919
- (void)setObservationInfo:(void *)info;	// 0x31d15bc9
@end

