/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library


@interface GEOTimeRange : PBCodable {
	unsigned _from;	// 4 = 0x4
	unsigned _to;	// 8 = 0x8
	BOOL _allDay;	// 12 = 0xc
	struct {
		unsigned departureTime : 1;
		unsigned maxRouteCount : 1;
		unsigned timeSinceLastRerouteRequest : 1;
	} _has;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL allDay;	// G=0x345a0261; S=0x3459fa99; @synthesize=_allDay
@property(assign, nonatomic) unsigned from;	// G=0x345a0241; S=0x3459f9e5; @synthesize=_from
@property(assign, nonatomic) BOOL hasAllDay;	// G=0x3459fae1; S=0x3459fac1; 
@property(assign, nonatomic) BOOL hasFrom;	// G=0x3459fa29; S=0x3459fa0d; 
@property(assign, nonatomic) BOOL hasTo;	// G=0x3459fa85; S=0x3459fa65; 
@property(assign, nonatomic) unsigned to;	// G=0x345a0251; S=0x3459fa3d; @synthesize=_to
// declared property getter: - (BOOL)allDay;	// 0x345a0261
- (void)copyTo:(id)to;	// 0x345a0005
- (void)dealloc;	// 0x3459f9b9
- (id)description;	// 0x3459faf5
- (id)dictionaryRepresentation;	// 0x3459fb65
// declared property getter: - (unsigned)from;	// 0x345a0241
// declared property getter: - (BOOL)hasAllDay;	// 0x3459fae1
// declared property getter: - (BOOL)hasFrom;	// 0x3459fa29
// declared property getter: - (BOOL)hasTo;	// 0x3459fa85
- (unsigned)hash;	// 0x345a01a5
- (BOOL)isEqual:(id)equal;	// 0x345a00cd
- (BOOL)readFrom:(id)from;	// 0x3459ff5d
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x3459fa99
// declared property setter: - (void)setFrom:(unsigned)from;	// 0x3459f9e5
// declared property setter: - (void)setHasAllDay:(BOOL)day;	// 0x3459fac1
// declared property setter: - (void)setHasFrom:(BOOL)from;	// 0x3459fa0d
// declared property setter: - (void)setHasTo:(BOOL)to;	// 0x3459fa65
// declared property setter: - (void)setTo:(unsigned)to;	// 0x3459fa3d
// declared property getter: - (unsigned)to;	// 0x345a0251
- (void)writeTo:(id)to;	// 0x3459ff69
@end

