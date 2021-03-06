/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable {
	XXStruct_1aFH4A *_tileRanges;	// 4 = 0x4
	unsigned _tileRangesCount;	// 8 = 0x8
	unsigned _tileRangesSpace;	// 12 = 0xc
	XXStruct_stqouA _validSubManifestVersions;	// 16 = 0x10
	NSMutableArray *_attributions;	// 28 = 0x1c
	NSMutableArray *_icons;	// 32 = 0x20
	unsigned _x;	// 36 = 0x24
	unsigned _y;	// 40 = 0x28
	unsigned _z;	// 44 = 0x2c
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 48 = 0x30
}
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x33fd9195; S=0x33fd91a5; @synthesize=_attributions
@property(assign, nonatomic) BOOL hasX;	// G=0x33fd7831; S=0x33fd7815; 
@property(assign, nonatomic) BOOL hasY;	// G=0x33fd788d; S=0x33fd786d; 
@property(assign, nonatomic) BOOL hasZ;	// G=0x33fd78e9; S=0x33fd78c9; 
@property(retain, nonatomic) NSMutableArray *icons;	// G=0x33fd9175; S=0x33fd9185; @synthesize=_icons
@property(readonly, assign, nonatomic) XXStruct_1aFH4A *tileRanges;	// G=0x33fd7aa5; 
@property(readonly, assign, nonatomic) unsigned tileRangesCount;	// G=0x33fd7a95; 
@property(readonly, assign, nonatomic) unsigned *validSubManifestVersions;	// G=0x33fd7d29; 
@property(readonly, assign, nonatomic) unsigned validSubManifestVersionsCount;	// G=0x33fd7d15; 
@property(assign, nonatomic) unsigned x;	// G=0x33fd9145; S=0x33fd77ed; @synthesize=_x
@property(assign, nonatomic) unsigned y;	// G=0x33fd9155; S=0x33fd7845; @synthesize=_y
@property(assign, nonatomic) unsigned z;	// G=0x33fd9165; S=0x33fd78a1; @synthesize=_z
- (void)addAttribution:(id)attribution;	// 0x33fd79e9
- (void)addIcon:(id)icon;	// 0x33fd791d
- (void)addTileRange:(XXStruct_1aFH4A)range;	// 0x33fd7af1
- (void)addValidSubManifestVersion:(unsigned)version;	// 0x33fd7d4d
- (id)attributionAtIndex:(unsigned)index;	// 0x33fd7a75
// declared property getter: - (id)attributions;	// 0x33fd9195
- (unsigned)attributionsCount;	// 0x33fd7a55
- (void)clearAttributions;	// 0x33fd79c9
- (void)clearIcons;	// 0x33fd78fd
- (void)clearTileRanges;	// 0x33fd7ab5
- (void)clearValidSubManifestVersions;	// 0x33fd7d39
- (void)copyTo:(id)to;	// 0x33fd8bb5
- (void)dealloc;	// 0x33fd7771
- (id)description;	// 0x33fd7e1d
- (id)dictionaryRepresentation;	// 0x33fd7e8d
// declared property getter: - (BOOL)hasX;	// 0x33fd7831
// declared property getter: - (BOOL)hasY;	// 0x33fd788d
// declared property getter: - (BOOL)hasZ;	// 0x33fd78e9
- (unsigned)hash;	// 0x33fd9021
- (id)iconAtIndex:(unsigned)index;	// 0x33fd79a9
// declared property getter: - (id)icons;	// 0x33fd9175
- (unsigned)iconsCount;	// 0x33fd7989
- (BOOL)isEqual:(id)equal;	// 0x33fd8e89
- (BOOL)readFrom:(id)from;	// 0x33fd882d
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x33fd91a5
// declared property setter: - (void)setHasX:(BOOL)x;	// 0x33fd7815
// declared property setter: - (void)setHasY:(BOOL)y;	// 0x33fd786d
// declared property setter: - (void)setHasZ:(BOOL)z;	// 0x33fd78c9
// declared property setter: - (void)setIcons:(id)icons;	// 0x33fd9185
- (void)setTileRanges:(XXStruct_1aFH4A *)ranges count:(unsigned)count;	// 0x33fd7cc5
- (void)setValidSubManifestVersions:(unsigned *)versions count:(unsigned)count;	// 0x33fd7e05
// declared property setter: - (void)setX:(unsigned)x;	// 0x33fd77ed
// declared property setter: - (void)setY:(unsigned)y;	// 0x33fd7845
// declared property setter: - (void)setZ:(unsigned)z;	// 0x33fd78a1
- (XXStruct_1aFH4A)tileRangeAtIndex:(unsigned)index;	// 0x33fd7bfd
// declared property getter: - (XXStruct_1aFH4A *)tileRanges;	// 0x33fd7aa5
// declared property getter: - (unsigned)tileRangesCount;	// 0x33fd7a95
- (unsigned)validSubManifestVersionAtIndex:(unsigned)index;	// 0x33fd7d61
// declared property getter: - (unsigned *)validSubManifestVersions;	// 0x33fd7d29
// declared property getter: - (unsigned)validSubManifestVersionsCount;	// 0x33fd7d15
- (void)writeTo:(id)to;	// 0x33fd8839
// declared property getter: - (unsigned)x;	// 0x33fd9145
// declared property getter: - (unsigned)y;	// 0x33fd9155
// declared property getter: - (unsigned)z;	// 0x33fd9165
@end

