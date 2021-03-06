/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class GEOLatLng, NSMutableArray, GEOAddress, GEOMapRegion, NSString;

@interface GEOPlace : PBCodable {
	BOOL _hasUID;	// 4 = 0x4
	long long _uID;	// 8 = 0x8
	BOOL _hasVersion;	// 16 = 0x10
	int _version;	// 20 = 0x14
	BOOL _hasType;	// 24 = 0x18
	int _type;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	GEOMapRegion *_mapRegion;	// 36 = 0x24
	GEOAddress *_address;	// 40 = 0x28
	NSString *_phoneticName;	// 44 = 0x2c
	GEOAddress *_phoneticAddress;	// 48 = 0x30
	GEOLatLng *_center;	// 52 = 0x34
	NSMutableArray *_business;	// 56 = 0x38
	BOOL _hasAddressGeocodeAccuracy;	// 60 = 0x3c
	int _addressGeocodeAccuracy;	// 64 = 0x40
	BOOL _hasGeoId;	// 68 = 0x44
	long long _geoId;	// 72 = 0x48
}
@property(retain, nonatomic) GEOAddress *address;	// G=0x34bf51c5; S=0x34bf51d5; @synthesize=_address
@property(assign, nonatomic) int addressGeocodeAccuracy;	// G=0x34bf52e9; S=0x34bf4221; @synthesize=_addressGeocodeAccuracy
@property(retain, nonatomic) NSMutableArray *business;	// G=0x34bf5295; S=0x34bf52a5; @synthesize=_business
@property(retain, nonatomic) GEOLatLng *center;	// G=0x34bf5261; S=0x34bf5271; @synthesize=_center
@property(assign, nonatomic) long long geoId;	// G=0x34bf5319; S=0x34bf4245; @synthesize=_geoId
@property(readonly, assign, nonatomic) BOOL hasAddress;	// G=0x34bf411d; 
@property(assign, nonatomic) BOOL hasAddressGeocodeAccuracy;	// G=0x34bf52c9; S=0x34bf52d9; @synthesize=_hasAddressGeocodeAccuracy
@property(readonly, assign, nonatomic) BOOL hasCenter;	// G=0x34bf4165; 
@property(assign, nonatomic) BOOL hasGeoId;	// G=0x34bf52f9; S=0x34bf5309; @synthesize=_hasGeoId
@property(readonly, assign, nonatomic) BOOL hasMapRegion;	// G=0x34bf4105; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x34bf40ed; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticAddress;	// G=0x34bf414d; 
@property(readonly, assign, nonatomic) BOOL hasPhoneticName;	// G=0x34bf4135; 
@property(assign, nonatomic) BOOL hasType;	// G=0x34bf512d; S=0x34bf513d; @synthesize=_hasType
@property(assign, nonatomic) BOOL hasUID;	// G=0x34bf50c5; S=0x34bf50d5; @synthesize=_hasUID
@property(assign, nonatomic) BOOL hasVersion;	// G=0x34bf50fd; S=0x34bf510d; @synthesize=_hasVersion
@property(retain, nonatomic) GEOMapRegion *mapRegion;	// G=0x34bf5191; S=0x34bf51a1; @synthesize=_mapRegion
@property(retain, nonatomic) NSString *name;	// G=0x34bf515d; S=0x34bf516d; @synthesize=_name
@property(retain, nonatomic) GEOAddress *phoneticAddress;	// G=0x34bf522d; S=0x34bf523d; @synthesize=_phoneticAddress
@property(retain, nonatomic) NSString *phoneticName;	// G=0x34bf51f9; S=0x34bf5209; @synthesize=_phoneticName
@property(assign, nonatomic) int type;	// G=0x34bf514d; S=0x34bf40c9; @synthesize=_type
@property(assign, nonatomic) long long uID;	// G=0x34bf50e5; S=0x34bf4079; @synthesize=_uID
@property(assign, nonatomic) int version;	// G=0x34bf511d; S=0x34bf40a5; @synthesize=_version
- (void)addBusiness:(id)business;	// 0x34bf417d
// declared property getter: - (id)address;	// 0x34bf51c5
- (id)addressDictionary;	// 0x34be4501
// declared property getter: - (int)addressGeocodeAccuracy;	// 0x34bf52e9
// declared property getter: - (id)business;	// 0x34bf5295
- (id)businessAtIndex:(unsigned)index;	// 0x34bf4201
- (unsigned)businessCount;	// 0x34bf41e1
// declared property getter: - (id)center;	// 0x34bf5261
- (void)dealloc;	// 0x34bf3fbd
- (id)description;	// 0x34bf4271
- (id)dictionaryRepresentation;	// 0x34bf42e1
// declared property getter: - (long long)geoId;	// 0x34bf5319
// declared property getter: - (BOOL)hasAddress;	// 0x34bf411d
// declared property getter: - (BOOL)hasAddressGeocodeAccuracy;	// 0x34bf52c9
// declared property getter: - (BOOL)hasCenter;	// 0x34bf4165
// declared property getter: - (BOOL)hasGeoId;	// 0x34bf52f9
// declared property getter: - (BOOL)hasMapRegion;	// 0x34bf4105
// declared property getter: - (BOOL)hasName;	// 0x34bf40ed
// declared property getter: - (BOOL)hasPhoneticAddress;	// 0x34bf414d
// declared property getter: - (BOOL)hasPhoneticName;	// 0x34bf4135
// declared property getter: - (BOOL)hasType;	// 0x34bf512d
// declared property getter: - (BOOL)hasUID;	// 0x34bf50c5
// declared property getter: - (BOOL)hasVersion;	// 0x34bf50fd
// declared property getter: - (id)mapRegion;	// 0x34bf5191
// declared property getter: - (id)name;	// 0x34bf515d
// declared property getter: - (id)phoneticAddress;	// 0x34bf522d
// declared property getter: - (id)phoneticName;	// 0x34bf51f9
- (BOOL)readFrom:(id)from;	// 0x34bf4761
// declared property setter: - (void)setAddress:(id)address;	// 0x34bf51d5
// declared property setter: - (void)setAddressGeocodeAccuracy:(int)accuracy;	// 0x34bf4221
// declared property setter: - (void)setBusiness:(id)business;	// 0x34bf52a5
// declared property setter: - (void)setCenter:(id)center;	// 0x34bf5271
// declared property setter: - (void)setGeoId:(long long)anId;	// 0x34bf4245
// declared property setter: - (void)setHasAddressGeocodeAccuracy:(BOOL)accuracy;	// 0x34bf52d9
// declared property setter: - (void)setHasGeoId:(BOOL)anId;	// 0x34bf5309
// declared property setter: - (void)setHasType:(BOOL)type;	// 0x34bf513d
// declared property setter: - (void)setHasUID:(BOOL)uid;	// 0x34bf50d5
// declared property setter: - (void)setHasVersion:(BOOL)version;	// 0x34bf510d
// declared property setter: - (void)setMapRegion:(id)region;	// 0x34bf51a1
// declared property setter: - (void)setName:(id)name;	// 0x34bf516d
// declared property setter: - (void)setPhoneticAddress:(id)address;	// 0x34bf523d
// declared property setter: - (void)setPhoneticName:(id)name;	// 0x34bf5209
// declared property setter: - (void)setType:(int)type;	// 0x34bf40c9
// declared property setter: - (void)setUID:(long long)uid;	// 0x34bf4079
// declared property setter: - (void)setVersion:(int)version;	// 0x34bf40a5
// declared property getter: - (int)type;	// 0x34bf514d
// declared property getter: - (long long)uID;	// 0x34bf50e5
// declared property getter: - (int)version;	// 0x34bf511d
- (void)writeTo:(id)to;	// 0x34bf4c29
@end

