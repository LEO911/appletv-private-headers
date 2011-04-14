/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSData;

@interface GMMTile : PBCodable {
@private
	int _tileXIndex;	// 4 = 0x4
	NSData *_tileData;	// 8 = 0x8
	int _tileYIndex;	// 12 = 0xc
	int _face;	// 16 = 0x10
	BOOL _hasFace;	// 20 = 0x14
}
@property(assign, nonatomic) int face;	// G=0x30a65985; S=0x30a65959; @synthesize=_face
@property(readonly, assign, nonatomic) BOOL hasFace;	// G=0x30a65975; @synthesize=_hasFace
@property(retain, nonatomic) NSData *tileData;	// G=0x30a659b5; S=0x30a65e91; @synthesize=_tileData
@property(assign, nonatomic) int tileXIndex;	// G=0x30a659c5; S=0x30a659d5; @synthesize=_tileXIndex
@property(assign, nonatomic) int tileYIndex;	// G=0x30a65995; S=0x30a659a5; @synthesize=_tileYIndex
+ (void *)createImageRefFromTileData:(id)tileData isCompact:(BOOL)compact;	// 0x30a5f2a1
+ (void *)createImageRefFromTileData:(const char *)tileData length:(unsigned long)length;	// 0x30a5f28d
- (id)init;	// 0x30a659e5
- (void)dealloc;	// 0x30a65e49
- (id)description;	// 0x30a65afd
- (id)dictionaryRepresentation;	// 0x30a65a11
// declared property getter: - (int)face;	// 0x30a65985
// declared property getter: - (BOOL)hasFace;	// 0x30a65975
- (BOOL)readFrom:(id)from;	// 0x30a65cf5
// declared property setter: - (void)setFace:(int)face;	// 0x30a65959
// declared property setter: - (void)setTileData:(id)data;	// 0x30a65e91
// declared property setter: - (void)setTileXIndex:(int)index;	// 0x30a659d5
// declared property setter: - (void)setTileYIndex:(int)index;	// 0x30a659a5
// declared property getter: - (id)tileData;	// 0x30a659b5
// declared property getter: - (int)tileXIndex;	// 0x30a659c5
// declared property getter: - (int)tileYIndex;	// 0x30a65995
- (void)writeTo:(id)to;	// 0x30a65c45
@end
