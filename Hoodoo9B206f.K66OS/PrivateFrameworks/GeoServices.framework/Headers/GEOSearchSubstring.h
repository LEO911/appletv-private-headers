/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOSearchSubstring : PBCodable {
	int _stringType;	// 4 = 0x4
	int _beginIndex;	// 8 = 0x8
	int _endIndex;	// 12 = 0xc
}
@property(assign, nonatomic) int beginIndex;	// G=0x3288530d; S=0x3288531d; @synthesize=_beginIndex
@property(assign, nonatomic) int endIndex;	// G=0x3288532d; S=0x3288533d; @synthesize=_endIndex
@property(assign, nonatomic) int stringType;	// G=0x328852ed; S=0x328852fd; @synthesize=_stringType
// declared property getter: - (int)beginIndex;	// 0x3288530d
- (void)dealloc;	// 0x32885009
- (id)description;	// 0x32885035
- (id)dictionaryRepresentation;	// 0x328850a5
// declared property getter: - (int)endIndex;	// 0x3288532d
- (BOOL)readFrom:(id)from;	// 0x3288517d
// declared property setter: - (void)setBeginIndex:(int)index;	// 0x3288531d
// declared property setter: - (void)setEndIndex:(int)index;	// 0x3288533d
// declared property setter: - (void)setStringType:(int)type;	// 0x328852fd
// declared property getter: - (int)stringType;	// 0x328852ed
- (void)writeTo:(id)to;	// 0x3288528d
@end
