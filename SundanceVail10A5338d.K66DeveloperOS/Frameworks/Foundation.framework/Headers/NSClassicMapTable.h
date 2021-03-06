/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMapTable.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable {
	struct {
		/*function-pointer*/ void *hash;
		/*function-pointer*/ void *isEqual;
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
		void *notAKeyMarker;
	} _keyCallBacks;	// 4 = 0x4
	struct {
		/*function-pointer*/ void *retain;
		/*function-pointer*/ void *release;
		/*function-pointer*/ void *describe;
	} _valueCallBacks;	// 28 = 0x1c
	CFBasicHashRef _ht;	// 40 = 0x28
}
- (id)init;	// 0x373969d1
- (id)allKeys;	// 0x37396ebd
- (id)allValues;	// 0x3739716d
- (id)copy;	// 0x37396a5d
- (unsigned)count;	// 0x37335da5
- (void)dealloc;	// 0x373969d5
- (id)description;	// 0x37396cc1
- (void *)existingItemForSetItem:(const void *)setItem forAbsentKey:(const void *)absentKey;	// 0x37396c35
- (unsigned)getKeys:(const void **)keys values:(const void **)values;	// 0x37397421
- (BOOL)isEqual:(id)equal;	// 0x37396a29
- (BOOL)mapMember:(const void *)member originalKey:(const void **)key value:(const void **)value;	// 0x37396b3d
- (id)objectForKey:(id)key;	// 0x37335041
- (void)removeAllItems;	// 0x37396a15
- (void)removeObjectForKey:(id)key;	// 0x37335759
- (void)setItem:(const void *)item forKnownAbsentKey:(const void *)knownAbsentKey;	// 0x37396b79
- (void)setObject:(id)object forKey:(id)key;	// 0x37335069
@end

