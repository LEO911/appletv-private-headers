/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, GMMClientCapabilities;

@interface GMMOutgoingTile : PBCodable {
@private
	int _tileSize;	// 4 = 0x4
	NSMutableArray *_indexs;	// 8 = 0x8
	int _zoom;	// 12 = 0xc
	GMMClientCapabilities *_clientCapabilities;	// 16 = 0x10
}
@property(retain, nonatomic) GMMClientCapabilities *clientCapabilities;	// G=0x344506c1; S=0x34450ed5; @synthesize=_clientCapabilities
@property(retain, nonatomic) NSMutableArray *indexs;	// G=0x344506f1; S=0x34450ead; @synthesize=_indexs
@property(readonly, assign, nonatomic) int indexsCount;	// G=0x34450e2d; 
@property(assign, nonatomic) int tileSize;	// G=0x34450701; S=0x34450711; @synthesize=_tileSize
@property(assign, nonatomic) int zoom;	// G=0x344506d1; S=0x344506e1; @synthesize=_zoom
- (id)init;	// 0x34450721
- (void)addIndex:(id)index;	// 0x34450d31
// declared property getter: - (id)clientCapabilities;	// 0x344506c1
- (void)dealloc;	// 0x34450e51
- (id)description;	// 0x34450831
- (id)dictionaryRepresentation;	// 0x3445074d
- (id)indexAtIndex:(unsigned)index;	// 0x34450d61
// declared property getter: - (id)indexs;	// 0x344506f1
// declared property getter: - (int)indexsCount;	// 0x34450e2d
- (BOOL)readFrom:(id)from;	// 0x34450b19
// declared property setter: - (void)setClientCapabilities:(id)capabilities;	// 0x34450ed5
- (void)setIndex:(id)index atIndex:(unsigned)index2;	// 0x34450dc5
// declared property setter: - (void)setIndexs:(id)indexs;	// 0x34450ead
// declared property setter: - (void)setTileSize:(int)size;	// 0x34450711
// declared property setter: - (void)setZoom:(int)zoom;	// 0x344506e1
// declared property getter: - (int)tileSize;	// 0x34450701
- (void)writeTo:(id)to;	// 0x34450979
// declared property getter: - (int)zoom;	// 0x344506d1
@end

