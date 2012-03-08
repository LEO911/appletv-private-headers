/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDCollection.h"

@class TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDKeyedCollection : EDCollection {
@private
	TSUPointerKeyDictionary *mMap;	// 8 = 0x8
}
- (unsigned)addObject:(id)object;	// 0x34c56815
- (id)copyWithZone:(NSZone *)zone;	// 0x34d76fdd
- (void)dealloc;	// 0x34c8f4f5
- (void)insertIntoMap:(id)map;	// 0x34c568e5
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x34c62ef1
- (bool)isObjectInMap:(id)map;	// 0x34dce0c5
- (bool)isOverwritingKeyOK;	// 0x34dce0c1
- (id)objectWithKey:(int)key;	// 0x34c7b955
- (void)removeAllObjects;	// 0x34dce145
- (void)removeFromMap:(id)map;	// 0x34dce101
- (void)removeObjectAtIndex:(unsigned)index;	// 0x34dce199
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x34dce209
@end
