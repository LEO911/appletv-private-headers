/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOSearchSubstring : PBCodable {
	int _beginIndex;	// 4 = 0x4
	int _endIndex;	// 8 = 0x8
	int _stringType;	// 12 = 0xc
}
@property(assign, nonatomic) int beginIndex;	// G=0x33fada8d; S=0x33fada9d; @synthesize=_beginIndex
@property(assign, nonatomic) int endIndex;	// G=0x33fadaad; S=0x33fadabd; @synthesize=_endIndex
@property(assign, nonatomic) int stringType;	// G=0x33fada6d; S=0x33fada7d; @synthesize=_stringType
// declared property getter: - (int)beginIndex;	// 0x33fada8d
- (void)copyTo:(id)to;	// 0x33fad90d
- (void)dealloc;	// 0x33fad439
- (id)description;	// 0x33fad465
- (id)dictionaryRepresentation;	// 0x33fad4d5
// declared property getter: - (int)endIndex;	// 0x33fadaad
- (unsigned)hash;	// 0x33fada0d
- (BOOL)isEqual:(id)equal;	// 0x33fad98d
- (BOOL)readFrom:(id)from;	// 0x33fad8a1
// declared property setter: - (void)setBeginIndex:(int)index;	// 0x33fada9d
// declared property setter: - (void)setEndIndex:(int)index;	// 0x33fadabd
// declared property setter: - (void)setStringType:(int)type;	// 0x33fada7d
// declared property getter: - (int)stringType;	// 0x33fada6d
- (void)writeTo:(id)to;	// 0x33fad8ad
@end

