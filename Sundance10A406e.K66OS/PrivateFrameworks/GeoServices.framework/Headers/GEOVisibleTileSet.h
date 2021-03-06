/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library


@interface GEOVisibleTileSet : PBCodable {
	XXStruct_VrsxJB *_tileKeys;	// 4 = 0x4
	unsigned _tileKeysCount;	// 8 = 0x8
	unsigned _tileKeysSpace;	// 12 = 0xc
	unsigned _identifier;	// 16 = 0x10
	int _style;	// 20 = 0x14
}
@property(assign, nonatomic) unsigned identifier;	// G=0x379e0de1; S=0x379e0df1; @synthesize=_identifier
@property(assign, nonatomic) int style;	// G=0x379e0dc1; S=0x379e0dd1; @synthesize=_style
@property(readonly, assign, nonatomic) XXStruct_VrsxJB *tileKeys;	// G=0x379e03a9; 
@property(readonly, assign, nonatomic) unsigned tileKeysCount;	// G=0x379e0399; 
- (void)addTileKey:(XXStruct_VrsxJB)key;	// 0x379e03f5
- (void)clearTileKeys;	// 0x379e03b9
- (void)copyTo:(id)to;	// 0x379e0bb9
- (void)dealloc;	// 0x379e0359
- (id)description;	// 0x379e0601
- (id)dictionaryRepresentation;	// 0x379e0671
- (unsigned)hash;	// 0x379e0d49
// declared property getter: - (unsigned)identifier;	// 0x379e0de1
- (BOOL)isEqual:(id)equal;	// 0x379e0cad
- (BOOL)readFrom:(id)from;	// 0x379e0a91
// declared property setter: - (void)setIdentifier:(unsigned)identifier;	// 0x379e0df1
// declared property setter: - (void)setStyle:(int)style;	// 0x379e0dd1
- (void)setTileKeys:(XXStruct_VrsxJB *)keys count:(unsigned)count;	// 0x379e05b1
// declared property getter: - (int)style;	// 0x379e0dc1
- (XXStruct_VrsxJB)tileKeyAtIndex:(unsigned)index;	// 0x379e04f1
// declared property getter: - (XXStruct_VrsxJB *)tileKeys;	// 0x379e03a9
// declared property getter: - (unsigned)tileKeysCount;	// 0x379e0399
- (void)writeTo:(id)to;	// 0x379e0a9d
@end

