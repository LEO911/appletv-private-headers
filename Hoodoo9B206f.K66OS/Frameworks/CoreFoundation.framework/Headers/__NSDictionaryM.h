/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSDictionaryM : NSMutableDictionary {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(const id *)arg2 :(unsigned)arg3;	// 0x31a58d75
+ (id)allocWithZone:(NSZone *)zone;	// 0x31a58dd5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31a58dd1
- (unsigned)count;	// 0x31a58c79
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31a58c91
- (void)dealloc;	// 0x31a58d79
- (void)finalize;	// 0x31a58da5
- (id)keyEnumerator;	// 0x31a58c8d
- (id)objectForKey:(id)key;	// 0x31a58c89
- (void)removeObjectForKey:(id)key;	// 0x31a58d71
- (void)setObject:(id)object forKey:(id)key;	// 0x31a58d6d
@end
