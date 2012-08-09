/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSHashTable.h"


__attribute__((visibility("hidden")))
@interface NSClassicHashTable : NSHashTable {
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _callBacks;	// 4 = 0x4
	CFBasicHashRef _ht;	// 24 = 0x18
}
- (id)init;	// 0x34da5431
- (void)addObject:(id)object;	// 0x34da5609
- (id)allObjects;	// 0x34da5915
- (id)copy;	// 0x34da54dd
- (unsigned)count;	// 0x34da5759
- (void)dealloc;	// 0x34da5435
- (id)description;	// 0x34da576d
- (void *)getItem:(const void *)item;	// 0x34da5589
- (void)getKeys:(const void **)keys count:(unsigned *)count;	// 0x34da5bc5
- (unsigned)hash;	// 0x34da5489
- (void)insertItem:(const void *)item;	// 0x34da55b1
- (void)insertKnownAbsentItem:(const void *)item;	// 0x34da5661
- (BOOL)isEqual:(id)equal;	// 0x34da5499
- (void)removeAllItems;	// 0x34da5475
- (void)removeItem:(const void *)item;	// 0x34da5701
@end
