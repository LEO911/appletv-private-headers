/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GEOTrafficSegment : PBCodable {
	int _vertexOffset;	// 4 = 0x4
	int _vertexCount;	// 8 = 0x8
	BOOL _hasSpeed;	// 12 = 0xc
	int _speed;	// 16 = 0x10
	BOOL _hasWidth;	// 20 = 0x14
	int _width;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x31d017a1; S=0x31d017b1; @synthesize=_hasSpeed
@property(assign, nonatomic) BOOL hasWidth;	// G=0x31d017c1; S=0x31d017d1; @synthesize=_hasWidth
@property(assign, nonatomic) int speed;	// G=0x31d0139d; S=0x31d013c1; @synthesize=_speed
@property(assign, nonatomic) int vertexCount;	// G=0x31d01781; S=0x31d01791; @synthesize=_vertexCount
@property(assign, nonatomic) int vertexOffset;	// G=0x31d01761; S=0x31d01771; @synthesize=_vertexOffset
@property(assign, nonatomic) int width;	// G=0x31d017e1; S=0x31d013e5; @synthesize=_width
- (void)dealloc;	// 0x31d01371
- (id)description;	// 0x31d01409
- (id)dictionaryRepresentation;	// 0x31d01479
// declared property getter: - (BOOL)hasSpeed;	// 0x31d017a1
// declared property getter: - (BOOL)hasWidth;	// 0x31d017c1
- (BOOL)readFrom:(id)from;	// 0x31d015a1
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x31d017b1
// declared property setter: - (void)setHasWidth:(BOOL)width;	// 0x31d017d1
// declared property setter: - (void)setSpeed:(int)speed;	// 0x31d013c1
// declared property setter: - (void)setVertexCount:(int)count;	// 0x31d01791
// declared property setter: - (void)setVertexOffset:(int)offset;	// 0x31d01771
// declared property setter: - (void)setWidth:(int)width;	// 0x31d013e5
// declared property getter: - (int)speed;	// 0x31d0139d
// declared property getter: - (int)vertexCount;	// 0x31d01781
// declared property getter: - (int)vertexOffset;	// 0x31d01761
// declared property getter: - (int)width;	// 0x31d017e1
- (void)writeTo:(id)to;	// 0x31d016c9
@end
