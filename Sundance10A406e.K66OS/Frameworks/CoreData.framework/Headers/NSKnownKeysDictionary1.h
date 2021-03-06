/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSKnownKeysDictionary.h"

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
	int _cd_rc;	// 4 = 0x4
	int _count;	// 8 = 0x8
	NSKnownKeysMappingStrategy *_keySearch;	// 12 = 0xc
	id _values[0];	// 16 = 0x10
}
+ (id)init;	// 0x33d15f61
+ (id)initForKeys:(id)keys;	// 0x33cc277d
+ (id)initWithCapacity:(unsigned)capacity;	// 0x33d15fbd
+ (id)initWithCoder:(id)coder;	// 0x33d16021
+ (id)initWithDictionary:(id)dictionary;	// 0x33d16469
+ (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x33d161c9
+ (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x33cc55e5
+ (id)initWithSearchStrategy:(id)searchStrategy;	// 0x33cc332d
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33d1647d
+ (id)alloc;	// 0x33d16019
+ (id)allocWithZone:(NSZone *)zone;	// 0x33d1601d
- (unsigned)_countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count forKeys:(BOOL)keys;	// 0x33d16995
- (BOOL)_isDeallocating;	// 0x33d16521
- (void)_recount;	// 0x33cbd361
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x33cbd3d9
- (BOOL)_tryRetain;	// 0x33d164d1
- (unsigned)_valueCountByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33d16a71
- (void)addEntriesFromDictionary:(id)dictionary;	// 0x33d16dbd
- (id)allKeys;	// 0x33d16b25
- (id)allValues;	// 0x33cc3ca1
- (Class)classForArchiver;	// 0x33d16569
- (Class)classForCoder;	// 0x33d1654d
- (id)copyWithZone:(NSZone *)zone;	// 0x33d16741
- (unsigned)count;	// 0x33cbd32d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33d16a4d
- (void)dealloc;	// 0x33cc5db9
- (void)encodeWithCoder:(id)coder;	// 0x33d16585
- (void)getKeys:(id *)keys;	// 0x33d16c85
- (void)getObjects:(id *)objects;	// 0x33cc568d
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x33d16bcd
- (BOOL)isEqualToDictionary:(id)dictionary;	// 0x33d16cf9
- (id)keyEnumerator;	// 0x33d168f1
- (const id *)knownKeyValuesPointer;	// 0x33d16805
- (id)mapping;	// 0x33cbd3b9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33d167f5
- (id)objectEnumerator;	// 0x33d16d35
- (id)objectForKey:(id)key;	// 0x33cc62ed
- (oneway void)release;	// 0x33cc5d45
- (void)removeAllObjects;	// 0x33d1704d
- (void)removeObjectForKey:(id)key;	// 0x33d16a95
- (id)retain;	// 0x33d16481
- (unsigned)retainCount;	// 0x33d164bd
- (void)setObject:(id)object forKey:(id)key;	// 0x33cc3829
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x33d16829
- (void)setValues:(id *)values;	// 0x33cbd911
- (id)valueAtIndex:(unsigned)index;	// 0x33d16815
- (const id *)values;	// 0x33cbd901
@end

