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
@property(readonly, assign, nonatomic) BOOL hasProvider;	// G=0x36727755; 
@property(retain, nonatomic) NSString *provider;	// G=0x36727c89; S=0x36727c99; @synthesize=_provider
@property(retain, nonatomic) NSMutableArray *regions;	// G=0x36727c55; S=0x36727c65; @synthesize=_regions
- (void)addRegion:(id)region;	// 0x367276b1
- (void)dealloc;	// 0x36727659
- (id)description;	// 0x3672776d
- (id)dictionaryRepresentation;	// 0x367277dd
// declared property getter: - (BOOL)hasProvider;	// 0x36727755
// declared property getter: - (id)provider;	// 0x36727c89
- (BOOL)readFrom:(id)from;	// 0x36727979
- (id)regionAtIndex:(unsigned)index;	// 0x36727735
// declared property getter: - (id)regions;	// 0x36727c55
- (unsigned)regionsCount;	// 0x36727715
// declared property setter: - (void)setProvider:(id)provider;	// 0x36727c99
// declared property setter: - (void)setRegions:(id)regions;	// 0x36727c65
- (void)writeTo:(id)to;	// 0x36727b1d
@end

