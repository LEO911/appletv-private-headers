/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEORouteAttributes, NSMutableArray, GEOLocation;

@interface GEOETATrafficUpdateRequest : PBRequest {
	GEOLocation *_currentUserLocation;	// 4 = 0x4
	NSMutableArray *_destinationWaypoints;	// 8 = 0x8
	GEORouteAttributes *_routeAttributes;	// 12 = 0xc
	NSMutableArray *_routes;	// 16 = 0x10
	NSMutableArray *_serviceTags;	// 20 = 0x14
	BOOL _includeBetterRouteSuggestion;	// 24 = 0x18
	XXStruct_ec15KC _has;	// 25 = 0x19
}
@property(retain, nonatomic) GEOLocation *currentUserLocation;	// G=0x302dc495; S=0x302dc4a5; @synthesize=_currentUserLocation
@property(retain, nonatomic) NSMutableArray *destinationWaypoints;	// G=0x302dc4d5; S=0x302dc4e5; @synthesize=_destinationWaypoints
@property(readonly, assign, nonatomic) BOOL hasCurrentUserLocation;	// G=0x302daf21; 
@property(assign, nonatomic) BOOL hasIncludeBetterRouteSuggestion;	// G=0x302dafbd; S=0x302dafa1; 
@property(readonly, assign, nonatomic) BOOL hasRouteAttributes;	// G=0x302daf39; 
@property(assign, nonatomic) BOOL includeBetterRouteSuggestion;	// G=0x302daf51; S=0x302daf79; @synthesize=_includeBetterRouteSuggestion
@property(retain, nonatomic) GEORouteAttributes *routeAttributes;	// G=0x302dc4b5; S=0x302dc4c5; @synthesize=_routeAttributes
@property(retain, nonatomic) NSMutableArray *routes;	// G=0x302dc4f5; S=0x302dc505; @synthesize=_routes
@property(retain, nonatomic) NSMutableArray *serviceTags;	// G=0x302dc515; S=0x302dc525; @synthesize=_serviceTags
- (void)addDestinationWaypoint:(id)waypoint;	// 0x302daff1
- (void)addRoute:(id)route;	// 0x302db0bd
- (void)addServiceTag:(id)tag;	// 0x302db189
- (void)clearDestinationWaypoints;	// 0x302dafd1
- (void)clearRoutes;	// 0x302db09d
- (void)clearServiceTags;	// 0x302db169
- (void)copyTo:(id)to;	// 0x302dc039
// declared property getter: - (id)currentUserLocation;	// 0x302dc495
- (void)dealloc;	// 0x302dae8d
- (id)description;	// 0x302db235
- (id)destinationWaypointAtIndex:(unsigned)index;	// 0x302db07d
// declared property getter: - (id)destinationWaypoints;	// 0x302dc4d5
- (unsigned)destinationWaypointsCount;	// 0x302db05d
- (id)dictionaryRepresentation;	// 0x302db2a5
// declared property getter: - (BOOL)hasCurrentUserLocation;	// 0x302daf21
// declared property getter: - (BOOL)hasIncludeBetterRouteSuggestion;	// 0x302dafbd
// declared property getter: - (BOOL)hasRouteAttributes;	// 0x302daf39
- (unsigned)hash;	// 0x302dc3bd
// declared property getter: - (BOOL)includeBetterRouteSuggestion;	// 0x302daf51
- (BOOL)isEqual:(id)equal;	// 0x302dc249
- (BOOL)readFrom:(id)from;	// 0x302dbb59
- (unsigned)requestTypeCode;	// 0x302dc019
- (Class)responseClass;	// 0x302dc01d
- (id)routeAtIndex:(unsigned)index;	// 0x302db149
// declared property getter: - (id)routeAttributes;	// 0x302dc4b5
// declared property getter: - (id)routes;	// 0x302dc4f5
- (unsigned)routesCount;	// 0x302db129
- (id)serviceTagAtIndex:(unsigned)index;	// 0x302db215
// declared property getter: - (id)serviceTags;	// 0x302dc515
- (unsigned)serviceTagsCount;	// 0x302db1f5
// declared property setter: - (void)setCurrentUserLocation:(id)location;	// 0x302dc4a5
// declared property setter: - (void)setDestinationWaypoints:(id)waypoints;	// 0x302dc4e5
// declared property setter: - (void)setHasIncludeBetterRouteSuggestion:(BOOL)suggestion;	// 0x302dafa1
// declared property setter: - (void)setIncludeBetterRouteSuggestion:(BOOL)suggestion;	// 0x302daf79
// declared property setter: - (void)setRouteAttributes:(id)attributes;	// 0x302dc4c5
// declared property setter: - (void)setRoutes:(id)routes;	// 0x302dc505
// declared property setter: - (void)setServiceTags:(id)tags;	// 0x302dc525
- (void)writeTo:(id)to;	// 0x302dbb65
@end
