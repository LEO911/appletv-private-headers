/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}
+ (id)alloc;	// 0x34d31c1d
+ (id)allocWithZone:(NSZone *)zone;	// 0x34dbe22d
+ (id)mapTableWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options;	// 0x34dbe259
+ (id)mapTableWithStrongToStrongObjects;	// 0x34d76c21
+ (id)mapTableWithStrongToWeakObjects;	// 0x34dbe2ad
+ (id)mapTableWithWeakToStrongObjects;	// 0x34d5085d
+ (id)mapTableWithWeakToWeakObjects;	// 0x34dbe2fd
+ (id)strongToStrongObjectsMapTable;	// 0x34dbe34d
+ (id)strongToWeakObjectsMapTable;	// 0x34dbe3ed
+ (id)weakToStrongObjectsMapTable;	// 0x34dbe39d
+ (id)weakToWeakObjectsMapTable;	// 0x34dbe43d
- (id)init;	// 0x34dbe58d
- (id)initWithCoder:(id)coder;	// 0x34dbe48d
- (id)initWithKeyOptions:(unsigned)keyOptions valueOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x34dbe4e9
- (id)initWithKeyPointerFunctions:(id)keyPointerFunctions valuePointerFunctions:(id)functions capacity:(unsigned)capacity;	// 0x34dbe581
- (id)allKeys;	// 0x34dbe665
- (id)allValues;	// 0x34dbe671
- (id)copy;	// 0x34dbe5d5
- (id)copyWithZone:(NSZone *)zone;	// 0x34dbe8a5
- (unsigned)count;	// 0x34dbe5b1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x34dbe5e1
- (id)description;	// 0x34dbe599
- (id)dictionaryRepresentation;	// 0x34dbe7b1
- (void)encodeWithCoder:(id)coder;	// 0x34dbe5a5
- (id)enumerator;	// 0x34dbe689
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x34dbe64d
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x34dbe6a1
- (id)keyEnumerator;	// 0x34dbe5bd
- (id)keyPointerFunctions;	// 0x34dbe5ed
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x34dbe695
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34dbe8b5
- (id)mutableDictionary;	// 0x34dbe6bd
- (id)objectEnumerator;	// 0x34dbe5c9
- (id)objectForKey:(id)key;	// 0x34dbe605
- (void)removeAllItems;	// 0x34dbe67d
- (void)removeAllObjects;	// 0x34dbe6ad
- (void)removeObjectForKey:(id)key;	// 0x34dbe61d
- (void)replaceItem:(const void *)item forExistingKey:(const void *)existingKey;	// 0x34dbe659
- (void)setItem:(const void *)item forAbsentKey:(const void *)absentKey;	// 0x34dbe635
- (void)setItem:(const void *)item forKey:(const void *)key;	// 0x34dbe629
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x34dbe641
- (void)setObject:(id)object forKey:(id)key;	// 0x34dbe611
- (id)valuePointerFunctions;	// 0x34dbe5f9
@end
