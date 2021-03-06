/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"


__attribute__((visibility("hidden")))
@interface GEOTrafficSegment : PBCodable {
	int _speed;	// 4 = 0x4
	int _vertexCount;	// 8 = 0x8
	int _vertexOffset;	// 12 = 0xc
	int _width;	// 16 = 0x10
	XXStruct_UvnNeB _has;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x37a3415d; S=0x37a34141; 
@property(assign, nonatomic) BOOL hasWidth;	// G=0x37a341b9; S=0x37a34199; 
@property(assign, nonatomic) int speed;	// G=0x37a340f1; S=0x37a34119; @synthesize=_speed
@property(assign, nonatomic) int vertexCount;	// G=0x37a34a55; S=0x37a34a65; @synthesize=_vertexCount
@property(assign, nonatomic) int vertexOffset;	// G=0x37a34a35; S=0x37a34a45; @synthesize=_vertexOffset
@property(assign, nonatomic) int width;	// G=0x37a34a75; S=0x37a34171; @synthesize=_width
- (void)copyTo:(id)to;	// 0x37a347e9
- (void)dealloc;	// 0x37a340c5
- (id)description;	// 0x37a341cd
- (id)dictionaryRepresentation;	// 0x37a3423d
// declared property getter: - (BOOL)hasSpeed;	// 0x37a3415d
// declared property getter: - (BOOL)hasWidth;	// 0x37a341b9
- (unsigned)hash;	// 0x37a34991
- (BOOL)isEqual:(id)equal;	// 0x37a348c1
- (BOOL)readFrom:(id)from;	// 0x37a34735
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x37a34141
// declared property setter: - (void)setHasWidth:(BOOL)width;	// 0x37a34199
// declared property setter: - (void)setSpeed:(int)speed;	// 0x37a34119
// declared property setter: - (void)setVertexCount:(int)count;	// 0x37a34a65
// declared property setter: - (void)setVertexOffset:(int)offset;	// 0x37a34a45
// declared property setter: - (void)setWidth:(int)width;	// 0x37a34171
// declared property getter: - (int)speed;	// 0x37a340f1
// declared property getter: - (int)vertexCount;	// 0x37a34a55
// declared property getter: - (int)vertexOffset;	// 0x37a34a35
// declared property getter: - (int)width;	// 0x37a34a75
- (void)writeTo:(id)to;	// 0x37a34741
@end

