/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSHashTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSConcreteHashTable : NSHashTable {
@private
	NSSlice slice;	// 4 = 0x4
	unsigned count;	// 68 = 0x44
	unsigned capacity;	// 72 = 0x48
	unsigned options;	// 76 = 0x4c
	unsigned mutations;	// 80 = 0x50
}
@property(readonly, assign) unsigned count;	// G=0x3204ddd1; converted property
- (id)init;	// 0x3207586d
- (id)initWithCoder:(id)coder;	// 0x3207589d
- (id)initWithOptions:(unsigned)options capacity:(unsigned)capacity;	// 0x3200981d
- (id)initWithPointerFunctions:(id)pointerFunctions capacity:(unsigned)capacity;	// 0x3203de15
- (void)_initBlock;	// 0x3200994d
- (void)addObject:(id)object;	// 0x32009c71
- (id)allObjects;	// 0x32075ddd
- (void)assign:(unsigned)assign key:(const void *)key;	// 0x32009e3d
- (Class)classForCoder;	// 0x32075881
- (id)copy;	// 0x3204242d
// converted property getter: - (unsigned)count;	// 0x3204ddd1
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3201fdc1
- (void)dealloc;	// 0x3200a8a5
- (id)description;	// 0x32075f59
- (void)encodeWithCoder:(id)coder;	// 0x32075931
- (void)finalize;	// 0x32075f05
- (void *)getItem:(const void *)item;	// 0x3200a099
- (void)getKeys:(void **)keys count:(unsigned *)count;	// 0x32075e95
- (unsigned)hash;	// 0x32075af1
- (void)hashGrow;	// 0x32009e99
- (void)insertItem:(const void *)item;	// 0x320425a5
- (void)insertKnownAbsentItem:(const void *)item;	// 0x32075cd9
- (BOOL)isEqual:(id)equal;	// 0x32075b15
- (id)objectEnumerator;	// 0x32076035
- (id)pointerFunctions;	// 0x32075a8d
- (void)raiseCountUnderflowException;	// 0x32075c25
- (void)rehash;	// 0x32075c69
- (unsigned)rehashAround:(unsigned)around;	// 0x3200a705
- (void)removeAllItems;	// 0x32075d91
- (void)removeItem:(const void *)item;	// 0x32009fcd
@end

