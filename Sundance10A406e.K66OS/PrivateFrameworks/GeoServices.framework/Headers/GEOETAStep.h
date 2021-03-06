/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOETAStep : PBCodable {
	unsigned _expectedTime;	// 4 = 0x4
	unsigned _stepID;	// 8 = 0x8
	int _zilchPointIndex;	// 12 = 0xc
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 16 = 0x10
}
@property(assign, nonatomic) unsigned expectedTime;	// G=0x379a8c7d; S=0x379a83e1; @synthesize=_expectedTime
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x379a8425; S=0x379a8409; 
@property(assign, nonatomic) BOOL hasStepID;	// G=0x379a83cd; S=0x379a83ad; 
@property(assign, nonatomic) BOOL hasZilchPointIndex;	// G=0x379a84ad; S=0x379a848d; 
@property(assign, nonatomic) unsigned stepID;	// G=0x379a8c6d; S=0x379a8385; @synthesize=_stepID
@property(assign, nonatomic) int zilchPointIndex;	// G=0x379a8439; S=0x379a8465; @synthesize=_zilchPointIndex
- (void)copyTo:(id)to;	// 0x379a8a39
- (void)dealloc;	// 0x379a8359
- (id)description;	// 0x379a84c1
- (id)dictionaryRepresentation;	// 0x379a8531
// declared property getter: - (unsigned)expectedTime;	// 0x379a8c7d
// declared property getter: - (BOOL)hasExpectedTime;	// 0x379a8425
// declared property getter: - (BOOL)hasStepID;	// 0x379a83cd
// declared property getter: - (BOOL)hasZilchPointIndex;	// 0x379a84ad
- (unsigned)hash;	// 0x379a8bd5
- (BOOL)isEqual:(id)equal;	// 0x379a8b01
- (BOOL)readFrom:(id)from;	// 0x379a8991
// declared property setter: - (void)setExpectedTime:(unsigned)time;	// 0x379a83e1
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x379a8409
// declared property setter: - (void)setHasStepID:(BOOL)anId;	// 0x379a83ad
// declared property setter: - (void)setHasZilchPointIndex:(BOOL)index;	// 0x379a848d
// declared property setter: - (void)setStepID:(unsigned)anId;	// 0x379a8385
// declared property setter: - (void)setZilchPointIndex:(int)index;	// 0x379a8465
// declared property getter: - (unsigned)stepID;	// 0x379a8c6d
- (void)writeTo:(id)to;	// 0x379a899d
// declared property getter: - (int)zilchPointIndex;	// 0x379a8439
@end

