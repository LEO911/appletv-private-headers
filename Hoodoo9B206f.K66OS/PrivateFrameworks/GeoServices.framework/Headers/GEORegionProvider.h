/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSString, NSMutableArray;

@interface GEORegionProvider : PBCodable {
	NSMutableArray *_regions;	// 4 = 0x4
	NSString *_provider;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasProvider;	// G=0x3288b61d; 
@property(retain, nonatomic) NSString *provider;	// G=0x3288bb51; S=0x3288bb61; @synthesize=_provider
@property(retain, nonatomic) NSMutableArray *regions;	// G=0x3288bb1d; S=0x3288bb2d; @synthesize=_regions
- (void)addRegion:(id)region;	// 0x3288b579
- (void)dealloc;	// 0x3288b521
- (id)description;	// 0x3288b635
- (id)dictionaryRepresentation;	// 0x3288b6a5
// declared property getter: - (BOOL)hasProvider;	// 0x3288b61d
// declared property getter: - (id)provider;	// 0x3288bb51
- (BOOL)readFrom:(id)from;	// 0x3288b841
- (id)regionAtIndex:(unsigned)index;	// 0x3288b5fd
// declared property getter: - (id)regions;	// 0x3288bb1d
- (unsigned)regionsCount;	// 0x3288b5dd
// declared property setter: - (void)setProvider:(id)provider;	// 0x3288bb61
// declared property setter: - (void)setRegions:(id)regions;	// 0x3288bb2d
- (void)writeTo:(id)to;	// 0x3288b9e5
@end

