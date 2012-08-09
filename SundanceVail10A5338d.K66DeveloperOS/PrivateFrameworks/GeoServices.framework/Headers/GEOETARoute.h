/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, NSData;

@interface GEOETARoute : PBCodable {
	XXStruct_stqouA _trafficColorOffsets;	// 4 = 0x4
	XXStruct_stqouA _trafficColors;	// 16 = 0x10
	NSMutableArray *_invalidSectionZilchPoints;	// 28 = 0x1c
	NSMutableArray *_reroutedRoutes;	// 32 = 0x20
	NSData *_routeID;	// 36 = 0x24
	NSMutableArray *_steps;	// 40 = 0x28
	NSData *_zilchPoints;	// 44 = 0x2c
	BOOL _routeNoLongerValid;	// 48 = 0x30
	XXStruct_ec15KC _has;	// 49 = 0x31
}
@property(readonly, assign, nonatomic) BOOL hasRouteID;	// G=0x324fab79; 
@property(assign, nonatomic) BOOL hasRouteNoLongerValid;	// G=0x324facb9; S=0x324fac9d; 
@property(readonly, assign, nonatomic) BOOL hasZilchPoints;	// G=0x324fac5d; 
@property(retain, nonatomic) NSMutableArray *invalidSectionZilchPoints;	// G=0x324fc685; S=0x324fc695; @synthesize=_invalidSectionZilchPoints
@property(retain, nonatomic) NSMutableArray *reroutedRoutes;	// G=0x324fc665; S=0x324fc675; @synthesize=_reroutedRoutes
@property(retain, nonatomic) NSData *routeID;	// G=0x324fc5f5; S=0x324fc605; @synthesize=_routeID
@property(assign, nonatomic) BOOL routeNoLongerValid;	// G=0x324fc655; S=0x324fac75; @synthesize=_routeNoLongerValid
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x324fc615; S=0x324fc625; @synthesize=_steps
@property(readonly, assign, nonatomic) unsigned *trafficColorOffsets;	// G=0x324faf81; 
@property(readonly, assign, nonatomic) unsigned trafficColorOffsetsCount;	// G=0x324faf6d; 
@property(readonly, assign, nonatomic) unsigned *trafficColors;	// G=0x324fae79; 
@property(readonly, assign, nonatomic) unsigned trafficColorsCount;	// G=0x324fae65; 
@property(retain, nonatomic) NSData *zilchPoints;	// G=0x324fc635; S=0x324fc645; @synthesize=_zilchPoints
- (void)addInvalidSectionZilchPoints:(id)points;	// 0x324fadb9
- (void)addReroutedRoute:(id)route;	// 0x324faced
- (void)addStep:(id)step;	// 0x324fabb1
- (void)addTrafficColor:(unsigned)color;	// 0x324fae9d
- (void)addTrafficColorOffset:(unsigned)offset;	// 0x324fafa5
- (void)clearInvalidSectionZilchPoints;	// 0x324fad99
- (void)clearReroutedRoutes;	// 0x324faccd
- (void)clearSteps;	// 0x324fab91
- (void)clearTrafficColorOffsets;	// 0x324faf91
- (void)clearTrafficColors;	// 0x324fae89
- (void)copyTo:(id)to;	// 0x324fc055
- (void)dealloc;	// 0x324faac1
- (id)description;	// 0x324fb075
- (id)dictionaryRepresentation;	// 0x324fb0e5
// declared property getter: - (BOOL)hasRouteID;	// 0x324fab79
// declared property getter: - (BOOL)hasRouteNoLongerValid;	// 0x324facb9
// declared property getter: - (BOOL)hasZilchPoints;	// 0x324fac5d
- (unsigned)hash;	// 0x324fc4e9
// declared property getter: - (id)invalidSectionZilchPoints;	// 0x324fc685
- (id)invalidSectionZilchPointsAtIndex:(unsigned)index;	// 0x324fae45
- (unsigned)invalidSectionZilchPointsCount;	// 0x324fae25
- (BOOL)isEqual:(id)equal;	// 0x324fc33d
- (BOOL)readFrom:(id)from;	// 0x324fbaf9
- (id)reroutedRouteAtIndex:(unsigned)index;	// 0x324fad79
// declared property getter: - (id)reroutedRoutes;	// 0x324fc665
- (unsigned)reroutedRoutesCount;	// 0x324fad59
// declared property getter: - (id)routeID;	// 0x324fc5f5
// declared property getter: - (BOOL)routeNoLongerValid;	// 0x324fc655
// declared property setter: - (void)setHasRouteNoLongerValid:(BOOL)valid;	// 0x324fac9d
// declared property setter: - (void)setInvalidSectionZilchPoints:(id)points;	// 0x324fc695
// declared property setter: - (void)setReroutedRoutes:(id)routes;	// 0x324fc675
// declared property setter: - (void)setRouteID:(id)anId;	// 0x324fc605
// declared property setter: - (void)setRouteNoLongerValid:(BOOL)valid;	// 0x324fac75
// declared property setter: - (void)setSteps:(id)steps;	// 0x324fc625
- (void)setTrafficColorOffsets:(unsigned *)offsets count:(unsigned)count;	// 0x324fb05d
- (void)setTrafficColors:(unsigned *)colors count:(unsigned)count;	// 0x324faf55
// declared property setter: - (void)setZilchPoints:(id)points;	// 0x324fc645
- (id)stepAtIndex:(unsigned)index;	// 0x324fac3d
// declared property getter: - (id)steps;	// 0x324fc615
- (unsigned)stepsCount;	// 0x324fac1d
- (unsigned)trafficColorAtIndex:(unsigned)index;	// 0x324faeb1
- (unsigned)trafficColorOffsetAtIndex:(unsigned)index;	// 0x324fafb9
// declared property getter: - (unsigned *)trafficColorOffsets;	// 0x324faf81
// declared property getter: - (unsigned)trafficColorOffsetsCount;	// 0x324faf6d
// declared property getter: - (unsigned *)trafficColors;	// 0x324fae79
// declared property getter: - (unsigned)trafficColorsCount;	// 0x324fae65
- (void)writeTo:(id)to;	// 0x324fbb05
// declared property getter: - (id)zilchPoints;	// 0x324fc635
@end
