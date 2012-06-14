/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMDateTime, NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMNewRoute : PBCodable {
	BOOL _hasDistanceMeters;	// 4 = 0x4
	int _distanceMeters;	// 8 = 0x8
	BOOL _hasDurationSeconds;	// 12 = 0xc
	int _durationSeconds;	// 16 = 0x10
	BOOL _hasTrafficDelaySeconds;	// 20 = 0x14
	int _trafficDelaySeconds;	// 24 = 0x18
	GMMDateTime *_departureDateTime;	// 28 = 0x1c
	GMMDateTime *_arrivalDateTime;	// 32 = 0x20
	NSString *_cost;	// 36 = 0x24
	NSMutableArray *_offsetPolylines;	// 40 = 0x28
	NSMutableArray *_steps;	// 44 = 0x2c
	BOOL _hasMode;	// 48 = 0x30
	int _mode;	// 52 = 0x34
	NSMutableArray *_viaWaypoints;	// 56 = 0x38
	NSString *_deprecatedDistance;	// 60 = 0x3c
	NSString *_deprecatedDuration;	// 64 = 0x40
}
@property(retain, nonatomic) GMMDateTime *arrivalDateTime;	// G=0x31fac2b9; S=0x31fac2c9; @synthesize=_arrivalDateTime
@property(retain, nonatomic) NSString *cost;	// G=0x31fac2ed; S=0x31fac2fd; @synthesize=_cost
@property(retain, nonatomic) GMMDateTime *departureDateTime;	// G=0x31fac285; S=0x31fac295; @synthesize=_departureDateTime
@property(retain, nonatomic) NSString *deprecatedDistance;	// G=0x31fac3ed; S=0x31fac3fd; @synthesize=_deprecatedDistance
@property(retain, nonatomic) NSString *deprecatedDuration;	// G=0x31fac421; S=0x31fac431; @synthesize=_deprecatedDuration
@property(assign, nonatomic) int distanceMeters;	// G=0x31fac215; S=0x31fab1e9; @synthesize=_distanceMeters
@property(assign, nonatomic) int durationSeconds;	// G=0x31fac245; S=0x31fab20d; @synthesize=_durationSeconds
@property(readonly, assign, nonatomic) BOOL hasArrivalDateTime;	// G=0x31fab26d; 
@property(readonly, assign, nonatomic) BOOL hasCost;	// G=0x31fab285; 
@property(readonly, assign, nonatomic) BOOL hasDepartureDateTime;	// G=0x31fab255; 
@property(readonly, assign, nonatomic) BOOL hasDeprecatedDistance;	// G=0x31fab4ad; 
@property(readonly, assign, nonatomic) BOOL hasDeprecatedDuration;	// G=0x31fab4c5; 
@property(assign, nonatomic) BOOL hasDistanceMeters;	// G=0x31fac1f5; S=0x31fac205; @synthesize=_hasDistanceMeters
@property(assign, nonatomic) BOOL hasDurationSeconds;	// G=0x31fac225; S=0x31fac235; @synthesize=_hasDurationSeconds
@property(assign, nonatomic) BOOL hasMode;	// G=0x31fac389; S=0x31fac399; @synthesize=_hasMode
@property(assign, nonatomic) BOOL hasTrafficDelaySeconds;	// G=0x31fac255; S=0x31fac265; @synthesize=_hasTrafficDelaySeconds
@property(assign, nonatomic) int mode;	// G=0x31fac3a9; S=0x31fab3e5; @synthesize=_mode
@property(retain, nonatomic) NSMutableArray *offsetPolylines;	// G=0x31fac321; S=0x31fac331; @synthesize=_offsetPolylines
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x31fac355; S=0x31fac365; @synthesize=_steps
@property(assign, nonatomic) int trafficDelaySeconds;	// G=0x31fac275; S=0x31fab231; @synthesize=_trafficDelaySeconds
@property(retain, nonatomic) NSMutableArray *viaWaypoints;	// G=0x31fac3b9; S=0x31fac3c9; @synthesize=_viaWaypoints
- (void)addOffsetPolyline:(id)polyline;	// 0x31fab29d
- (void)addStep:(id)step;	// 0x31fab341
- (void)addViaWaypoint:(id)waypoint;	// 0x31fab409
- (id)altDescription;	// 0x31fc77d5
// declared property getter: - (id)arrivalDateTime;	// 0x31fac2b9
// declared property getter: - (id)cost;	// 0x31fac2ed
- (void)dealloc;	// 0x31fab119
// declared property getter: - (id)departureDateTime;	// 0x31fac285
// declared property getter: - (id)deprecatedDistance;	// 0x31fac3ed
// declared property getter: - (id)deprecatedDuration;	// 0x31fac421
- (id)description;	// 0x31fab4dd
- (id)description;	// 0x31f938c1
- (id)dictionaryRepresentation;	// 0x31fab54d
// declared property getter: - (int)distanceMeters;	// 0x31fac215
// declared property getter: - (int)durationSeconds;	// 0x31fac245
// declared property getter: - (BOOL)hasArrivalDateTime;	// 0x31fab26d
// declared property getter: - (BOOL)hasCost;	// 0x31fab285
// declared property getter: - (BOOL)hasDepartureDateTime;	// 0x31fab255
// declared property getter: - (BOOL)hasDeprecatedDistance;	// 0x31fab4ad
// declared property getter: - (BOOL)hasDeprecatedDuration;	// 0x31fab4c5
// declared property getter: - (BOOL)hasDistanceMeters;	// 0x31fac1f5
// declared property getter: - (BOOL)hasDurationSeconds;	// 0x31fac225
// declared property getter: - (BOOL)hasMode;	// 0x31fac389
// declared property getter: - (BOOL)hasTrafficDelaySeconds;	// 0x31fac255
// declared property getter: - (int)mode;	// 0x31fac3a9
- (id)offsetPolylineAtIndex:(unsigned)index;	// 0x31fab321
// declared property getter: - (id)offsetPolylines;	// 0x31fac321
- (unsigned)offsetPolylinesCount;	// 0x31fab301
- (BOOL)readFrom:(id)from;	// 0x31fab835
// declared property setter: - (void)setArrivalDateTime:(id)time;	// 0x31fac2c9
// declared property setter: - (void)setCost:(id)cost;	// 0x31fac2fd
// declared property setter: - (void)setDepartureDateTime:(id)time;	// 0x31fac295
// declared property setter: - (void)setDeprecatedDistance:(id)distance;	// 0x31fac3fd
// declared property setter: - (void)setDeprecatedDuration:(id)duration;	// 0x31fac431
// declared property setter: - (void)setDistanceMeters:(int)meters;	// 0x31fab1e9
// declared property setter: - (void)setDurationSeconds:(int)seconds;	// 0x31fab20d
// declared property setter: - (void)setHasDistanceMeters:(BOOL)meters;	// 0x31fac205
// declared property setter: - (void)setHasDurationSeconds:(BOOL)seconds;	// 0x31fac235
// declared property setter: - (void)setHasMode:(BOOL)mode;	// 0x31fac399
// declared property setter: - (void)setHasTrafficDelaySeconds:(BOOL)seconds;	// 0x31fac265
// declared property setter: - (void)setMode:(int)mode;	// 0x31fab3e5
// declared property setter: - (void)setOffsetPolylines:(id)polylines;	// 0x31fac331
// declared property setter: - (void)setSteps:(id)steps;	// 0x31fac365
// declared property setter: - (void)setTrafficDelaySeconds:(int)seconds;	// 0x31fab231
// declared property setter: - (void)setViaWaypoints:(id)waypoints;	// 0x31fac3c9
- (id)stepAtIndex:(unsigned)index;	// 0x31fab3c5
// declared property getter: - (id)steps;	// 0x31fac355
- (unsigned)stepsCount;	// 0x31fab3a5
// declared property getter: - (int)trafficDelaySeconds;	// 0x31fac275
- (id)viaWaypointAtIndex:(unsigned)index;	// 0x31fab48d
// declared property getter: - (id)viaWaypoints;	// 0x31fac3b9
- (unsigned)viaWaypointsCount;	// 0x31fab46d
- (void)writeTo:(id)to;	// 0x31fabcd1
@end
