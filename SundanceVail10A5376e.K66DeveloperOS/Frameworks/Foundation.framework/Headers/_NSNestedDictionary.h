/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSMutableDictionary.h> // Unknown library


__attribute__((visibility("hidden")))
@interface _NSNestedDictionary : NSMutableDictionary {
	id _locals;	// 4 = 0x4
	id _bindings;	// 8 = 0x8
}
- (id)_recursiveAllKeys;	// 0x34e0959d
- (id)_recursiveAllValues;	// 0x34e09759
- (unsigned)count;	// 0x34e09945
- (id)keyEnumerator;	// 0x34e09a05
- (id)objectEnumerator;	// 0x34e09a2d
- (id)objectForKey:(id)key;	// 0x34e099bd
- (void)removeObjectForKey:(id)key;	// 0x34e09ac5
- (void)setObject:(id)object forKey:(id)key;	// 0x34e09a55
@end
