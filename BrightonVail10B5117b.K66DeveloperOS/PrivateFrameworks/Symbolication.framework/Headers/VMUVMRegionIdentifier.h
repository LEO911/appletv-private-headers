/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {
	NSMutableArray *_regions;	// 4 = 0x4
	NSMapTable *_mallocZoneStatisticsMap;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *regions;	// G=0x3578b555; converted property
- (id)initWithTask:(unsigned)task;	// 0x3578b4dd
- (id)initWithTask:(unsigned)task options:(unsigned)options;	// 0x3578a329
- (void)dealloc;	// 0x3578b4f1
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned)options;	// 0x3578b785
- (id)descriptionForRange:(VMURange)range;	// 0x3578b565
- (id)descriptionForRange:(VMURange)range options:(unsigned)options;	// 0x3578b591
- (id)descriptionForRegionTotalsWithOptions:(unsigned)options;	// 0x3578c059
// converted property getter: - (id)regions;	// 0x3578b555
@end

