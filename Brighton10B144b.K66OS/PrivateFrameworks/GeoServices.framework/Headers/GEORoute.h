/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBCodable.h> // Unknown library

@class NSString, NSData, NSMutableArray;

@interface GEORoute : PBCodable {
	XXStruct_stqouA _trafficColorOffsets;	// 4 = 0x4
	XXStruct_stqouA _trafficColors;	// 16 = 0x10
	NSMutableArray *_advisoryNotices;	// 28 = 0x1c
	NSData *_arrivalRouteID;	// 32 = 0x20
	unsigned _arrivalStepID;	// 36 = 0x24
	NSData *_basicPoints;	// 40 = 0x28
	NSData *_departureRouteID;	// 44 = 0x2c
	unsigned _departureStepID;	// 48 = 0x30
	unsigned _distance;	// 52 = 0x34
	int _drivingSide;	// 56 = 0x38
	unsigned _expectedTime;	// 60 = 0x3c
	NSString *_name;	// 64 = 0x40
	NSString *_phoneticName;	// 68 = 0x44
	NSData *_routeID;	// 72 = 0x48
	int _routeType;	// 76 = 0x4c
	NSMutableArray *_steps;	// 80 = 0x50
	int _transportType;	// 84 = 0x54
	NSData *_unpackedLatLngVertices;	// 88 = 0x58
	NSData *_zilchPoints;	// 92 = 0x5c
	struct {
		unsigned geoId : 1;
		unsigned uID : 1;
		unsigned addressGeocodeAccuracy : 1;
		unsigned localSearchProviderID : 1;
		unsigned type : 1;
		unsigned version : 1;
		unsigned isDisputed : 1;
	} _has;	// 96 = 0x60
}
@property(retain, nonatomic) NSMutableArray *advisoryNotices;	// G=0x33f93ba9; S=0x33f93bb9; @synthesize=_advisoryNotices
@property(retain, nonatomic) NSData *arrivalRouteID;	// G=0x33f93b59; S=0x33f93b69; @synthesize=_arrivalRouteID
@property(assign, nonatomic) unsigned arrivalStepID;	// G=0x33f93b79; S=0x33f91371; @synthesize=_arrivalStepID
@property(retain, nonatomic) NSData *basicPoints;	// G=0x33f93b89; S=0x33f93b99; @synthesize=_basicPoints
@property(readonly, assign, getter=isComplete) BOOL complete;	// G=0x33fe3171; 
@property(retain, nonatomic) NSData *departureRouteID;	// G=0x33f93b29; S=0x33f93b39; @synthesize=_departureRouteID
@property(assign, nonatomic) unsigned departureStepID;	// G=0x33f93b49; S=0x33f912fd; @synthesize=_departureStepID
@property(assign, nonatomic) unsigned distance;	// G=0x33f93ac9; S=0x33f910f5; @synthesize=_distance
@property(assign, nonatomic) int drivingSide;	// G=0x33f91261; S=0x33f91289; @synthesize=_drivingSide
@property(assign, nonatomic) unsigned expectedTime;	// G=0x33f93ad9; S=0x33f91151; @synthesize=_expectedTime
@property(readonly, assign, nonatomic) BOOL hasArrivalRouteID;	// G=0x33f91359; 
@property(assign, nonatomic) BOOL hasArrivalStepID;	// G=0x33f913b5; S=0x33f91399; 
@property(readonly, assign, nonatomic) BOOL hasBasicPoints;	// G=0x33f913c9; 
@property(readonly, assign, nonatomic) BOOL hasDepartureRouteID;	// G=0x33f912e5; 
@property(assign, nonatomic) BOOL hasDepartureStepID;	// G=0x33f91345; S=0x33f91325; 
@property(assign, nonatomic) BOOL hasDistance;	// G=0x33f9113d; S=0x33f9111d; 
@property(assign, nonatomic) BOOL hasDrivingSide;	// G=0x33f912d1; S=0x33f912b1; 
@property(assign, nonatomic) BOOL hasExpectedTime;	// G=0x33f91199; S=0x33f91179; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x33f910c5; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x33f910dd; 
@property(readonly, assign, nonatomic) BOOL hasRouteID;	// G=0x33f911ad; 
@property(assign, nonatomic) BOOL hasRouteType;	// G=0x33f91235; S=0x33f91215; 
@property(assign, nonatomic) BOOL hasTransportType;	// G=0x33f90fe5; S=0x33f90fc5; 
@property(readonly, assign, nonatomic) BOOL hasUnpackedLatLngVertices;	// G=0x33f916bd; 
@property(readonly, assign, nonatomic) BOOL hasZilchPoints;	// G=0x33f91249; 
@property(retain, nonatomic) NSString *name;	// G=0x33f93a89; S=0x33f93a99; @synthesize=_name
@property(retain, nonatomic) NSString *phoneticName;	// G=0x33f93aa9; S=0x33f93ab9; @synthesize=_phoneticName
@property(readonly, assign) unsigned pointCount;	// G=0x33fe311d; 
@property(retain, nonatomic) NSData *routeID;	// G=0x33f93ae9; S=0x33f93af9; @synthesize=_routeID
@property(assign, nonatomic) int routeType;	// G=0x33f911c5; S=0x33f911ed; @synthesize=_routeType
@property(retain, nonatomic) NSMutableArray *steps;	// G=0x33f93a69; S=0x33f93a79; @synthesize=_steps
@property(readonly, assign, nonatomic) unsigned *trafficColorOffsets;	// G=0x33f915c9; 
@property(readonly, assign, nonatomic) unsigned trafficColorOffsetsCount;	// G=0x33f915b5; 
@property(readonly, assign, nonatomic) unsigned *trafficColors;	// G=0x33f914c1; 
@property(readonly, assign, nonatomic) unsigned trafficColorsCount;	// G=0x33f914ad; 
@property(assign, nonatomic) int transportType;	// G=0x33f93a59; S=0x33f90f9d; @synthesize=_transportType
@property(retain, nonatomic) NSData *unpackedLatLngVertices;	// G=0x33f93bc9; S=0x33f93bd9; @synthesize=_unpackedLatLngVertices
@property(retain, nonatomic) NSData *zilchPoints;	// G=0x33f93b09; S=0x33f93b19; @synthesize=_zilchPoints
- (void)addAdvisoryNotice:(id)notice;	// 0x33f91401
- (void)addStep:(id)step;	// 0x33f91019
- (void)addTrafficColor:(unsigned)color;	// 0x33f914e5
- (void)addTrafficColorOffset:(unsigned)offset;	// 0x33f915ed
- (id)advisoryNoticeAtIndex:(unsigned)index;	// 0x33f9148d
// declared property getter: - (id)advisoryNotices;	// 0x33f93ba9
- (unsigned)advisoryNoticesCount;	// 0x33f9146d
// declared property getter: - (id)arrivalRouteID;	// 0x33f93b59
// declared property getter: - (unsigned)arrivalStepID;	// 0x33f93b79
// declared property getter: - (id)basicPoints;	// 0x33f93b89
- (void)clearAdvisoryNotices;	// 0x33f913e1
- (void)clearSteps;	// 0x33f90ff9
- (void)clearTrafficColorOffsets;	// 0x33f915d9
- (void)clearTrafficColors;	// 0x33f914d1
- (ControlPoint *)controlPoints;	// 0x33fe2f31
- (id)convertToFullRoute:(id)fullRoute includeDepartureRoutes:(BOOL)routes uniquePointRange:(NSRange *)range;	// 0x33fe3b21
- (void)copyTo:(id)to;	// 0x33f92e15
- (void)dealloc;	// 0x33f90e81
- (id)debugDescription;	// 0x33fe38cd
// declared property getter: - (id)departureRouteID;	// 0x33f93b29
// declared property getter: - (unsigned)departureStepID;	// 0x33f93b49
- (id)description;	// 0x33f916d5
- (id)dictionaryRepresentation;	// 0x33f91745
// declared property getter: - (unsigned)distance;	// 0x33f93ac9
- (unsigned)distanceFromStepIndex:(unsigned)stepIndex toStepIndex:(unsigned)stepIndex2;	// 0x33fe3785
// declared property getter: - (int)drivingSide;	// 0x33f91261
// declared property getter: - (unsigned)expectedTime;	// 0x33f93ad9
- (int)formOfWayAt:(unsigned)at;	// 0x33fe30c9
- (void)getFormOfWay:(int *)way roadClass:(int *)aClass at:(unsigned)at;	// 0x33fe3041
// declared property getter: - (BOOL)hasArrivalRouteID;	// 0x33f91359
// declared property getter: - (BOOL)hasArrivalStepID;	// 0x33f913b5
// declared property getter: - (BOOL)hasBasicPoints;	// 0x33f913c9
// declared property getter: - (BOOL)hasDepartureRouteID;	// 0x33f912e5
// declared property getter: - (BOOL)hasDepartureStepID;	// 0x33f91345
// declared property getter: - (BOOL)hasDistance;	// 0x33f9113d
// declared property getter: - (BOOL)hasDrivingSide;	// 0x33f912d1
// declared property getter: - (BOOL)hasExpectedTime;	// 0x33f91199
// declared property getter: - (BOOL)hasName;	// 0x33f910c5
// declared property getter: - (BOOL)hasPhoneticName;	// 0x33f910dd
// declared property getter: - (BOOL)hasRouteID;	// 0x33f911ad
// declared property getter: - (BOOL)hasRouteType;	// 0x33f91235
// declared property getter: - (BOOL)hasTransportType;	// 0x33f90fe5
// declared property getter: - (BOOL)hasUnpackedLatLngVertices;	// 0x33f916bd
// declared property getter: - (BOOL)hasZilchPoints;	// 0x33f91249
- (unsigned)hash;	// 0x33f937a5
- (unsigned)indexForStepID:(unsigned)stepID;	// 0x33fe3a41
// declared property getter: - (BOOL)isComplete;	// 0x33fe3171
- (BOOL)isContingentRouteFor:(id)aFor afterPoint:(unsigned)point mainRoutes:(id)routes;	// 0x33fe51b1
- (BOOL)isEqual:(id)equal;	// 0x33f93381
// declared property getter: - (id)name;	// 0x33f93a89
- (id)newETARoute;	// 0x33fe4ab1
- (id)newETARouteFromStepIndex:(unsigned)stepIndex stepPercentRemaining:(double)remaining;	// 0x33fe4ae1
// declared property getter: - (id)phoneticName;	// 0x33f93aa9
- (XXStruct_zYrK5D)pointAt:(unsigned)at;	// 0x33fe2f89
// declared property getter: - (unsigned)pointCount;	// 0x33fe311d
- (BOOL)readFrom:(id)from;	// 0x33f927d5
// declared property getter: - (id)routeID;	// 0x33f93ae9
// declared property getter: - (int)routeType;	// 0x33f911c5
// declared property setter: - (void)setAdvisoryNotices:(id)notices;	// 0x33f93bb9
// declared property setter: - (void)setArrivalRouteID:(id)anId;	// 0x33f93b69
// declared property setter: - (void)setArrivalStepID:(unsigned)anId;	// 0x33f91371
// declared property setter: - (void)setBasicPoints:(id)points;	// 0x33f93b99
// declared property setter: - (void)setDepartureRouteID:(id)anId;	// 0x33f93b39
// declared property setter: - (void)setDepartureStepID:(unsigned)anId;	// 0x33f912fd
// declared property setter: - (void)setDistance:(unsigned)distance;	// 0x33f910f5
// declared property setter: - (void)setDrivingSide:(int)side;	// 0x33f91289
// declared property setter: - (void)setExpectedTime:(unsigned)time;	// 0x33f91151
// declared property setter: - (void)setHasArrivalStepID:(BOOL)anId;	// 0x33f91399
// declared property setter: - (void)setHasDepartureStepID:(BOOL)anId;	// 0x33f91325
// declared property setter: - (void)setHasDistance:(BOOL)distance;	// 0x33f9111d
// declared property setter: - (void)setHasDrivingSide:(BOOL)side;	// 0x33f912b1
// declared property setter: - (void)setHasExpectedTime:(BOOL)time;	// 0x33f91179
// declared property setter: - (void)setHasRouteType:(BOOL)type;	// 0x33f91215
// declared property setter: - (void)setHasTransportType:(BOOL)type;	// 0x33f90fc5
// declared property setter: - (void)setName:(id)name;	// 0x33f93a99
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x33f93ab9
// declared property setter: - (void)setRouteID:(id)anId;	// 0x33f93af9
// declared property setter: - (void)setRouteType:(int)type;	// 0x33f911ed
// declared property setter: - (void)setSteps:(id)steps;	// 0x33f93a79
- (void)setTrafficColorOffsets:(unsigned *)offsets count:(unsigned)count;	// 0x33f916a5
- (void)setTrafficColors:(unsigned *)colors count:(unsigned)count;	// 0x33f9159d
// declared property setter: - (void)setTransportType:(int)type;	// 0x33f90f9d
// declared property setter: - (void)setUnpackedLatLngVertices:(id)vertices;	// 0x33f93bd9
// declared property setter: - (void)setZilchPoints:(id)points;	// 0x33f93b19
- (id)simplifiedDescription;	// 0x33fe3941
- (id)stepAtIndex:(unsigned)index;	// 0x33f910a5
- (unsigned)stepIndexForPointIndex:(unsigned)pointIndex;	// 0x33fe37d5
// declared property getter: - (id)steps;	// 0x33f93a69
- (unsigned)stepsCount;	// 0x33f91085
- (unsigned)trafficColorAtIndex:(unsigned)index;	// 0x33f914f9
- (unsigned)trafficColorOffsetAtIndex:(unsigned)index;	// 0x33f91601
// declared property getter: - (unsigned *)trafficColorOffsets;	// 0x33f915c9
// declared property getter: - (unsigned)trafficColorOffsetsCount;	// 0x33f915b5
// declared property getter: - (unsigned *)trafficColors;	// 0x33f914c1
// declared property getter: - (unsigned)trafficColorsCount;	// 0x33f914ad
// declared property getter: - (int)transportType;	// 0x33f93a59
- (BOOL)unpackBasicPoints;	// 0x33fe31a1
- (BOOL)unpackLatLngVertices;	// 0x33fe374d
- (BOOL)unpackZilchPoints;	// 0x33fe3589
// declared property getter: - (id)unpackedLatLngVertices;	// 0x33f93bc9
- (void)writeTo:(id)to;	// 0x33f927e1
- (id)zilchDataFromStepIndex:(unsigned)stepIndex;	// 0x33fe4f59
// declared property getter: - (id)zilchPoints;	// 0x33f93b09
@end

