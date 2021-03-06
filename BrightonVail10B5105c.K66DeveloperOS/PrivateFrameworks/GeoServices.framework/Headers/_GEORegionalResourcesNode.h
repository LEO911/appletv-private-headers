/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSSet, NSMutableSet, NSArray;

__attribute__((visibility("hidden")))
@interface _GEORegionalResourcesNode : NSObject {
	unsigned _x;	// 4 = 0x4
	unsigned _y;	// 8 = 0x8
	unsigned _z;	// 12 = 0xc
	NSMutableSet *_resourceIdentifiers;	// 16 = 0x10
	NSMutableArray *_attributions;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSArray *attributions;	// G=0x33988375; @synthesize=_attributions
@property(readonly, assign, nonatomic) NSSet *resourceIdentifiers;	// G=0x33988365; @synthesize=_resourceIdentifiers
- (id)initWithX:(unsigned)x y:(unsigned)y z:(unsigned)z;	// 0x33988031
- (void)addAttribution:(id)attribution;	// 0x3398826d
- (void)addResourceName:(id)name type:(int)type;	// 0x33988191
// declared property getter: - (id)attributions;	// 0x33988375
- (BOOL)containsTileKey:(GEOTileKey *)key;	// 0x339880f9
- (void)dealloc;	// 0x33988095
// declared property getter: - (id)resourceIdentifiers;	// 0x33988365
@end

