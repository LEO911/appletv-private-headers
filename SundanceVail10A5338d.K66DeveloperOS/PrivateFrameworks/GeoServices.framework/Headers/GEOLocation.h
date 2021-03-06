/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOLatLng;

@interface GEOLocation : PBCodable {
	double _course;	// 4 = 0x4
	double _heading;	// 12 = 0xc
	double _horizontalAccuracy;	// 20 = 0x14
	double _speed;	// 28 = 0x1c
	double _timestamp;	// 36 = 0x24
	double _verticalAccuracy;	// 44 = 0x2c
	int _altitude;	// 52 = 0x34
	GEOLatLng *_latLng;	// 56 = 0x38
	int _type;	// 60 = 0x3c
	struct {
		unsigned course : 1;
		unsigned heading : 1;
		unsigned horizontalAccuracy : 1;
		unsigned speed : 1;
		unsigned timestamp : 1;
		unsigned verticalAccuracy : 1;
		unsigned altitude : 1;
		unsigned type : 1;
	} _has;	// 64 = 0x40
}
@property(assign, nonatomic) int altitude;	// G=0x32459cb1; S=0x3245865d; @synthesize=_altitude
@property(assign, nonatomic) double course;	// G=0x32459d21; S=0x32458859; @synthesize=_course
@property(assign, nonatomic) BOOL hasAltitude;	// G=0x324586a5; S=0x32458685; 
@property(assign, nonatomic) BOOL hasCourse;	// G=0x324588a9; S=0x3245888d; 
@property(assign, nonatomic) BOOL hasHeading;	// G=0x32458845; S=0x32458825; 
@property(assign, nonatomic) BOOL hasHorizontalAccuracy;	// G=0x3245870d; S=0x324586ed; 
@property(assign, nonatomic) BOOL hasSpeed;	// G=0x324587dd; S=0x324587bd; 
@property(assign, nonatomic) BOOL hasTimestamp;	// G=0x32458649; S=0x32458629; 
@property(assign, nonatomic) BOOL hasType;	// G=0x324585e1; S=0x324585c5; 
@property(assign, nonatomic) BOOL hasVerticalAccuracy;	// G=0x32458775; S=0x32458755; 
@property(assign, nonatomic) double heading;	// G=0x32459d09; S=0x324587f1; @synthesize=_heading
@property(assign, nonatomic) double horizontalAccuracy;	// G=0x32459cc1; S=0x324586b9; @synthesize=_horizontalAccuracy
@property(retain, nonatomic) GEOLatLng *latLng;	// G=0x32459c69; S=0x32459c79; @synthesize=_latLng
@property(assign, nonatomic) double speed;	// G=0x32459cf1; S=0x32458789; @synthesize=_speed
@property(assign, nonatomic) double timestamp;	// G=0x32459c99; S=0x324585f5; @synthesize=_timestamp
@property(assign, nonatomic) int type;	// G=0x32459c89; S=0x3245859d; @synthesize=_type
@property(assign, nonatomic) double verticalAccuracy;	// G=0x32459cd9; S=0x32458721; @synthesize=_verticalAccuracy
- (id)initWithGEOCoordinate:(XXStruct_zYrK5D)geocoordinate;	// 0x3244add1
// declared property getter: - (int)altitude;	// 0x32459cb1
- (void)copyTo:(id)to;	// 0x3245941d
// declared property getter: - (double)course;	// 0x32459d21
- (void)dealloc;	// 0x32458559
- (id)description;	// 0x324588bd
- (id)dictionaryRepresentation;	// 0x3245892d
// declared property getter: - (BOOL)hasAltitude;	// 0x324586a5
// declared property getter: - (BOOL)hasCourse;	// 0x324588a9
// declared property getter: - (BOOL)hasHeading;	// 0x32458845
// declared property getter: - (BOOL)hasHorizontalAccuracy;	// 0x3245870d
// declared property getter: - (BOOL)hasSpeed;	// 0x324587dd
// declared property getter: - (BOOL)hasTimestamp;	// 0x32458649
// declared property getter: - (BOOL)hasType;	// 0x324585e1
// declared property getter: - (BOOL)hasVerticalAccuracy;	// 0x32458775
- (unsigned)hash;	// 0x324598b1
// declared property getter: - (double)heading;	// 0x32459d09
// declared property getter: - (double)horizontalAccuracy;	// 0x32459cc1
- (BOOL)isEqual:(id)equal;	// 0x3245964d
// declared property getter: - (id)latLng;	// 0x32459c69
- (BOOL)readFrom:(id)from;	// 0x324591d5
// declared property setter: - (void)setAltitude:(int)altitude;	// 0x3245865d
// declared property setter: - (void)setCourse:(double)course;	// 0x32458859
// declared property setter: - (void)setHasAltitude:(BOOL)altitude;	// 0x32458685
// declared property setter: - (void)setHasCourse:(BOOL)course;	// 0x3245888d
// declared property setter: - (void)setHasHeading:(BOOL)heading;	// 0x32458825
// declared property setter: - (void)setHasHorizontalAccuracy:(BOOL)accuracy;	// 0x324586ed
// declared property setter: - (void)setHasSpeed:(BOOL)speed;	// 0x324587bd
// declared property setter: - (void)setHasTimestamp:(BOOL)timestamp;	// 0x32458629
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x324585c5
// declared property setter: - (void)setHasVerticalAccuracy:(BOOL)accuracy;	// 0x32458755
// declared property setter: - (void)setHeading:(double)heading;	// 0x324587f1
// declared property setter: - (void)setHorizontalAccuracy:(double)accuracy;	// 0x324586b9
// declared property setter: - (void)setLatLng:(id)lng;	// 0x32459c79
// declared property setter: - (void)setSpeed:(double)speed;	// 0x32458789
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x324585f5
// declared property setter: - (void)setType:(int)type;	// 0x3245859d
// declared property setter: - (void)setVerticalAccuracy:(double)accuracy;	// 0x32458721
// declared property getter: - (double)speed;	// 0x32459cf1
// declared property getter: - (double)timestamp;	// 0x32459c99
// declared property getter: - (int)type;	// 0x32459c89
// declared property getter: - (double)verticalAccuracy;	// 0x32459cd9
- (void)writeTo:(id)to;	// 0x324591e1
@end

