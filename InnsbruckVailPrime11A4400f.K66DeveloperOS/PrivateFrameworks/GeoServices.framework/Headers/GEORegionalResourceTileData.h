/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface GEORegionalResourceTileData : PBCodable {
	NSMutableArray *_attributions;	// 4 = 0x4
	NSMutableArray *_icons;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *attributions;	// G=0x30f9c085; S=0x30f9c095; @synthesize=_attributions
@property(retain, nonatomic) NSMutableArray *icons;	// G=0x30f9c065; S=0x30f9c075; @synthesize=_icons
- (void)addAttribution:(id)attribution;	// 0x30f9b7d5
- (void)addIcon:(id)icon;	// 0x30f9b709
- (id)attributionAtIndex:(unsigned)index;	// 0x30f9b861
// declared property getter: - (id)attributions;	// 0x30f9c085
- (unsigned)attributionsCount;	// 0x30f9b841
- (void)clearAttributions;	// 0x30f9b7b5
- (void)clearIcons;	// 0x30f9b6e9
- (void)copyTo:(id)to;	// 0x30f9be99
- (void)dealloc;	// 0x30f9b691
- (id)description;	// 0x30f9b881
- (id)dictionaryRepresentation;	// 0x30f9b8f1
- (unsigned)hash;	// 0x30f9c025
- (id)iconAtIndex:(unsigned)index;	// 0x30f9b795
// declared property getter: - (id)icons;	// 0x30f9c065
- (unsigned)iconsCount;	// 0x30f9b775
- (BOOL)isEqual:(id)equal;	// 0x30f9bf85
- (BOOL)readFrom:(id)from;	// 0x30f9bca5
// declared property setter: - (void)setAttributions:(id)attributions;	// 0x30f9c095
// declared property setter: - (void)setIcons:(id)icons;	// 0x30f9c075
- (void)writeTo:(id)to;	// 0x30f9bcb1
@end
