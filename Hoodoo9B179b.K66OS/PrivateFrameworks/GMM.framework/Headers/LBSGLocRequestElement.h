/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGCellularProfile, LBSGGeocodeRequest, LBSGLocation;

@interface LBSGLocRequestElement : PBCodable {
	LBSGCellularProfile *_cellularProfile;	// 4 = 0x4
	LBSGLocation *_location;	// 8 = 0x8
	LBSGGeocodeRequest *_geocode;	// 12 = 0xc
}
@property(retain, nonatomic) LBSGCellularProfile *cellularProfile;	// G=0x31d082fd; S=0x31d0830d; @synthesize=_cellularProfile
@property(retain, nonatomic) LBSGGeocodeRequest *geocode;	// G=0x31d08365; S=0x31d08375; @synthesize=_geocode
@property(readonly, assign, nonatomic) BOOL hasCellularProfile;	// G=0x31d07d41; 
@property(readonly, assign, nonatomic) BOOL hasGeocode;	// G=0x31d07d71; 
@property(readonly, assign, nonatomic) BOOL hasLocation;	// G=0x31d07d59; 
@property(retain, nonatomic) LBSGLocation *location;	// G=0x31d08331; S=0x31d08341; @synthesize=_location
// declared property getter: - (id)cellularProfile;	// 0x31d082fd
- (void)dealloc;	// 0x31d07cd5
- (id)description;	// 0x31d07d89
- (id)dictionaryRepresentation;	// 0x31d07df9
// declared property getter: - (id)geocode;	// 0x31d08365
// declared property getter: - (BOOL)hasCellularProfile;	// 0x31d07d41
// declared property getter: - (BOOL)hasGeocode;	// 0x31d07d71
// declared property getter: - (BOOL)hasLocation;	// 0x31d07d59
// declared property getter: - (id)location;	// 0x31d08331
- (BOOL)readFrom:(id)from;	// 0x31d07ea5
// declared property setter: - (void)setCellularProfile:(id)profile;	// 0x31d0830d
// declared property setter: - (void)setGeocode:(id)geocode;	// 0x31d08375
// declared property setter: - (void)setLocation:(id)location;	// 0x31d08341
- (void)writeTo:(id)to;	// 0x31d08141
@end

