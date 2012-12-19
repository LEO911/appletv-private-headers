/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVJunction : PBCodable {
	NSMutableArray *_connectingRoads;	// 4 = 0x4
	NSMutableArray *_laneConnections;	// 8 = 0x8
}
@property(retain, nonatomic) NSMutableArray *connectingRoads;	// G=0x33feb785; S=0x33feb795; @synthesize=_connectingRoads
@property(retain, nonatomic) NSMutableArray *laneConnections;	// G=0x33feb7a5; S=0x33feb7b5; @synthesize=_laneConnections
- (void)addConnectingRoad:(id)road;	// 0x33feac81
- (void)addLaneConnections:(id)connections;	// 0x33fead4d
- (void)clearConnectingRoads;	// 0x33feac61
- (void)clearLaneConnections;	// 0x33fead2d
- (id)connectingRoadAtIndex:(unsigned)index;	// 0x33fead0d
// declared property getter: - (id)connectingRoads;	// 0x33feb785
- (unsigned)connectingRoadsCount;	// 0x33feaced
- (void)copyTo:(id)to;	// 0x33feb5b9
- (void)dealloc;	// 0x33feac09
- (id)description;	// 0x33feadf9
- (id)dictionaryRepresentation;	// 0x33feae69
- (unsigned)hash;	// 0x33feb745
- (BOOL)isEqual:(id)equal;	// 0x33feb6a5
// declared property getter: - (id)laneConnections;	// 0x33feb7a5
- (id)laneConnectionsAtIndex:(unsigned)index;	// 0x33feadd9
- (unsigned)laneConnectionsCount;	// 0x33feadb9
- (BOOL)readFrom:(id)from;	// 0x33feb349
// declared property setter: - (void)setConnectingRoads:(id)roads;	// 0x33feb795
// declared property setter: - (void)setLaneConnections:(id)connections;	// 0x33feb7b5
- (void)writeTo:(id)to;	// 0x33feb355
@end
