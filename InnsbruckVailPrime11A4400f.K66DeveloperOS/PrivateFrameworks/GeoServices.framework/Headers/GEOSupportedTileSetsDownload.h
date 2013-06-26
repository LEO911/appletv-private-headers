/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOSupportedTileSets, GEODownloadMetadata;

@interface GEOSupportedTileSetsDownload : PBCodable {
	GEODownloadMetadata *_metadata;	// 4 = 0x4
	GEOSupportedTileSets *_tileSets;	// 8 = 0x8
}
@property(retain, nonatomic) GEODownloadMetadata *metadata;	// G=0x30f02771; S=0x30f02781; @synthesize=_metadata
@property(retain, nonatomic) GEOSupportedTileSets *tileSets;	// G=0x30f02751; S=0x30f02761; @synthesize=_tileSets
- (void)copyTo:(id)to;	// 0x30f02619
- (void)dealloc;	// 0x30f02155
- (id)description;	// 0x30f021ad
- (id)dictionaryRepresentation;	// 0x30f0221d
- (unsigned)hash;	// 0x30f02711
- (BOOL)isEqual:(id)equal;	// 0x30f02671
// declared property getter: - (id)metadata;	// 0x30f02771
- (BOOL)readFrom:(id)from;	// 0x30f02509
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x30f02781
// declared property setter: - (void)setTileSets:(id)sets;	// 0x30f02761
// declared property getter: - (id)tileSets;	// 0x30f02751
- (void)writeTo:(id)to;	// 0x30f02515
@end
