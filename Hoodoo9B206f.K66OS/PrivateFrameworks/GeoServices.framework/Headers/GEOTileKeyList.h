/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"


@interface GEOTileKeyList : NSObject <NSFastEnumeration, NSCopying> {
	void *_head;	// 4 = 0x4
	void *_tail;	// 8 = 0x8
	void *_hash;	// 12 = 0xc
	unsigned _count;	// 16 = 0x10
	unsigned _maxCount;	// 20 = 0x14
}
@property(readonly, assign) unsigned count;	// G=0x3286111d; converted property
+ (id)listFromXPCData:(void *)xpcdata;	// 0x3288e83d
- (id)init;	// 0x328609c5
- (id)initWithMaxCapacity:(unsigned)maxCapacity;	// 0x328609d9
- (void)_addKeyToBack:(const GEOTileKey *)back;	// 0x32861039
- (void)addKey:(const GEOTileKey *)key;	// 0x32861025
- (BOOL)addKey:(const GEOTileKey *)key lostKey:(GEOTileKey *)key2;	// 0x32860e71
- (unsigned)capacity;	// 0x3286110d
- (BOOL)containsKey:(const GEOTileKey *)key;	// 0x328610e5
- (id)copyWithZone:(NSZone *)zone;	// 0x32860acd
// converted property getter: - (unsigned)count;	// 0x3286111d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3286112d
- (void)dealloc;	// 0x32860ba5
- (id)description;	// 0x32860cb5
- (GEOTileKey *)firstKey;	// 0x32860e59
- (id)listWithout:(id)without;	// 0x328611a9
- (void *)newXPCData;	// 0x3288e8c5
- (BOOL)removeKey:(const GEOTileKey *)key;	// 0x32861481
- (void)removeKeysMatchingPredicate:(id)predicate;	// 0x328613c5
- (void)sort:(id)sort;	// 0x328612a5
@end

