/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDictionary.h"


@interface NSMutableDictionary : NSDictionary {
}
+ (id)dictionaryWithCapacity:(unsigned)capacity;	// 0x355e67fd
+ (id)dictionaryWithSharedKeySet:(id)sharedKeySet;	// 0x3565ec61
- (id)initWithCapacity:(unsigned)capacity;	// 0x3565e8c1
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x3565e8e5
- (void)__addObject:(id)object forKey:(id)key;	// 0x355f3f81
- (void)__setObject:(id)object forKey:(id)key;	// 0x3565e7d1
- (void)_mutate;	// 0x355e7f9d
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x355dc94d
- (void)addObject:(id)object forKey:(id)key;	// 0x3565d425
- (void)addObjects:(id)objects forKeys:(id)keys;	// 0x3565d6c5
- (void)addObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x3565d4fd
- (void)invert;	// 0x3565d889
- (void)removeAllObjects;	// 0x3565d9c1
- (void)removeEntriesInDictionary:(id)dictionary;	// 0x3565db7d
- (void)removeKeysForObject:(id)object;	// 0x3565dd01
- (void)removeObjectForKey:(id)key;	// 0x3565d401
- (void)removeObjectsForKeys:(id)keys;	// 0x355e7e31
- (void)replaceObject:(id)object forKey:(id)key;	// 0x3565de95
- (void)replaceObjects:(id)objects forKeys:(id)keys;	// 0x3565e115
- (void)replaceObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x3565df6d
- (void)setDictionary:(id)dictionary;	// 0x355f8019
- (void)setEntriesFromDictionary:(id)dictionary;	// 0x3565e2d9
- (void)setObject:(id)object forKey:(id)key;	// 0x3565d3dd
- (void)setObject:(id)object forKeyedSubscript:(id)keyedSubscript;	// 0x3560332d
- (void)setObjects:(id)objects forKeys:(id)keys;	// 0x3565e60d
- (void)setObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x3565e465
@end

