/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class GMMKmlInfo, NSMutableArray, GMMStructuredAddress, GMMAdInfo, NSString, GMMRating, GMMGeometry;

@interface GMMSearchResult : PBCodable {
	int _type;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	GMMGeometry *_geometry;	// 12 = 0xc
	NSMutableArray *_addressLines;	// 16 = 0x10
	NSString *_phone;	// 20 = 0x14
	NSMutableArray *_references;	// 24 = 0x18
	BOOL _hasShowIcon;	// 28 = 0x1c
	BOOL _showIcon;	// 29 = 0x1d
	NSString *_attributionText;	// 32 = 0x20
	NSString *_attributionUrl;	// 36 = 0x24
	GMMKmlInfo *_kmlInfo;	// 40 = 0x28
	NSMutableArray *_images;	// 44 = 0x2c
	GMMStructuredAddress *_structuredAddress;	// 48 = 0x30
	NSString *_mapsUrl;	// 52 = 0x34
	GMMAdInfo *_adInfo;	// 56 = 0x38
	NSString *_queryRefinementString;	// 60 = 0x3c
	GMMRating *_rating;	// 64 = 0x40
	BOOL _hasCid;	// 68 = 0x44
	unsigned long long _cid;	// 72 = 0x48
	BOOL _hasLocationSource;	// 80 = 0x50
	int _locationSource;	// 84 = 0x54
	BOOL _hasInexactPosition;	// 88 = 0x58
	BOOL _inexactPosition;	// 89 = 0x59
	NSString *_streetViewPanoId;	// 92 = 0x5c
	BOOL _hasUnverifiedListing;	// 96 = 0x60
	BOOL _unverifiedListing;	// 97 = 0x61
	BOOL _hasSesameEditable;	// 98 = 0x62
	BOOL _sesameEditable;	// 99 = 0x63
	BOOL _hasSesameDetailsEditable;	// 100 = 0x64
	BOOL _sesameDetailsEditable;	// 101 = 0x65
	NSString *_sesameFeatureId;	// 104 = 0x68
	NSString *_directionsPlacemarkToken;	// 108 = 0x6c
	BOOL _hasClosedListing;	// 112 = 0x70
	BOOL _closedListing;	// 113 = 0x71
}
@property(retain, nonatomic) GMMAdInfo *adInfo;	// G=0x31cf4555; S=0x31cf4565; @synthesize=_adInfo
@property(retain, nonatomic) NSMutableArray *addressLines;	// G=0x31cf4361; S=0x31cf4371; @synthesize=_addressLines
@property(retain, nonatomic) NSString *attributionText;	// G=0x31cf441d; S=0x31cf442d; @synthesize=_attributionText
@property(retain, nonatomic) NSString *attributionUrl;	// G=0x31cf4451; S=0x31cf4461; @synthesize=_attributionUrl
@property(assign, nonatomic) unsigned long long cid;	// G=0x31cf4611; S=0x31cf2c89; @synthesize=_cid
@property(assign, nonatomic) BOOL closedListing;	// G=0x31cf2e41; S=0x31cf2e65; @synthesize=_closedListing
@property(retain, nonatomic) NSString *directionsPlacemarkToken;	// G=0x31cf4741; S=0x31cf4751; @synthesize=_directionsPlacemarkToken
@property(retain, nonatomic) GMMGeometry *geometry;	// G=0x31cf432d; S=0x31cf433d; @synthesize=_geometry
@property(readonly, assign, nonatomic) BOOL hasAdInfo;	// G=0x31cf2c41; 
@property(readonly, assign, nonatomic) BOOL hasAttributionText;	// G=0x31cf2b25; 
@property(readonly, assign, nonatomic) BOOL hasAttributionUrl;	// G=0x31cf2b3d; 
@property(assign, nonatomic) BOOL hasCid;	// G=0x31cf45f1; S=0x31cf4601; @synthesize=_hasCid
@property(assign, nonatomic) BOOL hasClosedListing;	// G=0x31cf4775; S=0x31cf4785; @synthesize=_hasClosedListing
@property(readonly, assign, nonatomic) BOOL hasDirectionsPlacemarkToken;	// G=0x31cf2e29; 
@property(readonly, assign, nonatomic) BOOL hasGeometry;	// G=0x31cf2965; 
@property(assign, nonatomic) BOOL hasInexactPosition;	// G=0x31cf4659; S=0x31cf4669; @synthesize=_hasInexactPosition
@property(readonly, assign, nonatomic) BOOL hasKmlInfo;	// G=0x31cf2b55; 
@property(assign, nonatomic) BOOL hasLocationSource;	// G=0x31cf4629; S=0x31cf4639; @synthesize=_hasLocationSource
@property(readonly, assign, nonatomic) BOOL hasMapsUrl;	// G=0x31cf2c29; 
@property(readonly, assign, nonatomic) BOOL hasName;	// G=0x31cf294d; 
@property(readonly, assign, nonatomic) BOOL hasPhone;	// G=0x31cf2a21; 
@property(readonly, assign, nonatomic) BOOL hasQueryRefinementString;	// G=0x31cf2c59; 
@property(readonly, assign, nonatomic) BOOL hasRating;	// G=0x31cf2c71; 
@property(assign, nonatomic) BOOL hasSesameDetailsEditable;	// G=0x31cf46ed; S=0x31cf46fd; @synthesize=_hasSesameDetailsEditable
@property(assign, nonatomic) BOOL hasSesameEditable;	// G=0x31cf46cd; S=0x31cf46dd; @synthesize=_hasSesameEditable
@property(readonly, assign, nonatomic) BOOL hasSesameFeatureId;	// G=0x31cf2e11; 
@property(assign, nonatomic) BOOL hasShowIcon;	// G=0x31cf43fd; S=0x31cf440d; @synthesize=_hasShowIcon
@property(readonly, assign, nonatomic) BOOL hasStreetViewPanoId;	// G=0x31cf2d21; 
@property(readonly, assign, nonatomic) BOOL hasStructuredAddress;	// G=0x31cf2c11; 
@property(assign, nonatomic) BOOL hasUnverifiedListing;	// G=0x31cf46ad; S=0x31cf46bd; @synthesize=_hasUnverifiedListing
@property(retain, nonatomic) NSMutableArray *images;	// G=0x31cf44b9; S=0x31cf44c9; @synthesize=_images
@property(assign, nonatomic) BOOL inexactPosition;	// G=0x31cf2cd9; S=0x31cf2cfd; @synthesize=_inexactPosition
@property(retain, nonatomic) GMMKmlInfo *kmlInfo;	// G=0x31cf4485; S=0x31cf4495; @synthesize=_kmlInfo
@property(assign, nonatomic) int locationSource;	// G=0x31cf4649; S=0x31cf2cb5; @synthesize=_locationSource
@property(retain, nonatomic) NSString *mapsUrl;	// G=0x31cf4521; S=0x31cf4531; @synthesize=_mapsUrl
@property(retain, nonatomic) NSString *name;	// G=0x31cf42f9; S=0x31cf4309; @synthesize=_name
@property(retain, nonatomic) NSString *phone;	// G=0x31cf4395; S=0x31cf43a5; @synthesize=_phone
@property(retain, nonatomic) NSString *queryRefinementString;	// G=0x31cf4589; S=0x31cf4599; @synthesize=_queryRefinementString
@property(retain, nonatomic) GMMRating *rating;	// G=0x31cf45bd; S=0x31cf45cd; @synthesize=_rating
@property(retain, nonatomic) NSMutableArray *references;	// G=0x31cf43c9; S=0x31cf43d9; @synthesize=_references
@property(assign, nonatomic) BOOL sesameDetailsEditable;	// G=0x31cf2dc9; S=0x31cf2ded; @synthesize=_sesameDetailsEditable
@property(assign, nonatomic) BOOL sesameEditable;	// G=0x31cf2d81; S=0x31cf2da5; @synthesize=_sesameEditable
@property(retain, nonatomic) NSString *sesameFeatureId;	// G=0x31cf470d; S=0x31cf471d; @synthesize=_sesameFeatureId
@property(assign, nonatomic) BOOL showIcon;	// G=0x31cf2add; S=0x31cf2b01; @synthesize=_showIcon
@property(retain, nonatomic) NSString *streetViewPanoId;	// G=0x31cf4679; S=0x31cf4689; @synthesize=_streetViewPanoId
@property(retain, nonatomic) GMMStructuredAddress *structuredAddress;	// G=0x31cf44ed; S=0x31cf44fd; @synthesize=_structuredAddress
@property(assign, nonatomic) int type;	// G=0x31cf42d9; S=0x31cf42e9; @synthesize=_type
@property(assign, nonatomic) BOOL unverifiedListing;	// G=0x31cf2d39; S=0x31cf2d5d; @synthesize=_unverifiedListing
// declared property getter: - (id)adInfo;	// 0x31cf4555
- (void)addAddressLine:(id)line;	// 0x31cf297d
- (void)addImage:(id)image;	// 0x31cf2b6d
- (void)addReference:(id)reference;	// 0x31cf2a39
- (id)addressLineAtIndex:(unsigned)index;	// 0x31cf2a01
// declared property getter: - (id)addressLines;	// 0x31cf4361
- (unsigned)addressLinesCount;	// 0x31cf29e1
// declared property getter: - (id)attributionText;	// 0x31cf441d
// declared property getter: - (id)attributionUrl;	// 0x31cf4451
// declared property getter: - (unsigned long long)cid;	// 0x31cf4611
// declared property getter: - (BOOL)closedListing;	// 0x31cf2e41
- (void)dealloc;	// 0x31cf27c9
- (id)description;	// 0x31cf2e89
- (id)dictionaryRepresentation;	// 0x31cf2ef9
// declared property getter: - (id)directionsPlacemarkToken;	// 0x31cf4741
// declared property getter: - (id)geometry;	// 0x31cf432d
// declared property getter: - (BOOL)hasAdInfo;	// 0x31cf2c41
// declared property getter: - (BOOL)hasAttributionText;	// 0x31cf2b25
// declared property getter: - (BOOL)hasAttributionUrl;	// 0x31cf2b3d
// declared property getter: - (BOOL)hasCid;	// 0x31cf45f1
// declared property getter: - (BOOL)hasClosedListing;	// 0x31cf4775
// declared property getter: - (BOOL)hasDirectionsPlacemarkToken;	// 0x31cf2e29
// declared property getter: - (BOOL)hasGeometry;	// 0x31cf2965
// declared property getter: - (BOOL)hasInexactPosition;	// 0x31cf4659
// declared property getter: - (BOOL)hasKmlInfo;	// 0x31cf2b55
// declared property getter: - (BOOL)hasLocationSource;	// 0x31cf4629
// declared property getter: - (BOOL)hasMapsUrl;	// 0x31cf2c29
// declared property getter: - (BOOL)hasName;	// 0x31cf294d
// declared property getter: - (BOOL)hasPhone;	// 0x31cf2a21
// declared property getter: - (BOOL)hasQueryRefinementString;	// 0x31cf2c59
// declared property getter: - (BOOL)hasRating;	// 0x31cf2c71
// declared property getter: - (BOOL)hasSesameDetailsEditable;	// 0x31cf46ed
// declared property getter: - (BOOL)hasSesameEditable;	// 0x31cf46cd
// declared property getter: - (BOOL)hasSesameFeatureId;	// 0x31cf2e11
// declared property getter: - (BOOL)hasShowIcon;	// 0x31cf43fd
// declared property getter: - (BOOL)hasStreetViewPanoId;	// 0x31cf2d21
// declared property getter: - (BOOL)hasStructuredAddress;	// 0x31cf2c11
// declared property getter: - (BOOL)hasUnverifiedListing;	// 0x31cf46ad
- (id)imageAtIndex:(unsigned)index;	// 0x31cf2bf1
// declared property getter: - (id)images;	// 0x31cf44b9
- (unsigned)imagesCount;	// 0x31cf2bd1
// declared property getter: - (BOOL)inexactPosition;	// 0x31cf2cd9
// declared property getter: - (id)kmlInfo;	// 0x31cf4485
// declared property getter: - (int)locationSource;	// 0x31cf4649
// declared property getter: - (id)mapsUrl;	// 0x31cf4521
// declared property getter: - (id)name;	// 0x31cf42f9
// declared property getter: - (id)phone;	// 0x31cf4395
// declared property getter: - (id)queryRefinementString;	// 0x31cf4589
// declared property getter: - (id)rating;	// 0x31cf45bd
- (BOOL)readFrom:(id)from;	// 0x31cf33e5
- (id)referenceAtIndex:(unsigned)index;	// 0x31cf2abd
// declared property getter: - (id)references;	// 0x31cf43c9
- (unsigned)referencesCount;	// 0x31cf2a9d
// declared property getter: - (BOOL)sesameDetailsEditable;	// 0x31cf2dc9
// declared property getter: - (BOOL)sesameEditable;	// 0x31cf2d81
// declared property getter: - (id)sesameFeatureId;	// 0x31cf470d
// declared property setter: - (void)setAdInfo:(id)info;	// 0x31cf4565
// declared property setter: - (void)setAddressLines:(id)lines;	// 0x31cf4371
// declared property setter: - (void)setAttributionText:(id)text;	// 0x31cf442d
// declared property setter: - (void)setAttributionUrl:(id)url;	// 0x31cf4461
// declared property setter: - (void)setCid:(unsigned long long)cid;	// 0x31cf2c89
// declared property setter: - (void)setClosedListing:(BOOL)listing;	// 0x31cf2e65
// declared property setter: - (void)setDirectionsPlacemarkToken:(id)token;	// 0x31cf4751
// declared property setter: - (void)setGeometry:(id)geometry;	// 0x31cf433d
// declared property setter: - (void)setHasCid:(BOOL)cid;	// 0x31cf4601
// declared property setter: - (void)setHasClosedListing:(BOOL)listing;	// 0x31cf4785
// declared property setter: - (void)setHasInexactPosition:(BOOL)position;	// 0x31cf4669
// declared property setter: - (void)setHasLocationSource:(BOOL)source;	// 0x31cf4639
// declared property setter: - (void)setHasSesameDetailsEditable:(BOOL)editable;	// 0x31cf46fd
// declared property setter: - (void)setHasSesameEditable:(BOOL)editable;	// 0x31cf46dd
// declared property setter: - (void)setHasShowIcon:(BOOL)icon;	// 0x31cf440d
// declared property setter: - (void)setHasUnverifiedListing:(BOOL)listing;	// 0x31cf46bd
// declared property setter: - (void)setImages:(id)images;	// 0x31cf44c9
// declared property setter: - (void)setInexactPosition:(BOOL)position;	// 0x31cf2cfd
// declared property setter: - (void)setKmlInfo:(id)info;	// 0x31cf4495
// declared property setter: - (void)setLocationSource:(int)source;	// 0x31cf2cb5
// declared property setter: - (void)setMapsUrl:(id)url;	// 0x31cf4531
// declared property setter: - (void)setName:(id)name;	// 0x31cf4309
// declared property setter: - (void)setPhone:(id)phone;	// 0x31cf43a5
// declared property setter: - (void)setQueryRefinementString:(id)string;	// 0x31cf4599
// declared property setter: - (void)setRating:(id)rating;	// 0x31cf45cd
// declared property setter: - (void)setReferences:(id)references;	// 0x31cf43d9
// declared property setter: - (void)setSesameDetailsEditable:(BOOL)editable;	// 0x31cf2ded
// declared property setter: - (void)setSesameEditable:(BOOL)editable;	// 0x31cf2da5
// declared property setter: - (void)setSesameFeatureId:(id)anId;	// 0x31cf471d
// declared property setter: - (void)setShowIcon:(BOOL)icon;	// 0x31cf2b01
// declared property setter: - (void)setStreetViewPanoId:(id)anId;	// 0x31cf4689
// declared property setter: - (void)setStructuredAddress:(id)address;	// 0x31cf44fd
// declared property setter: - (void)setType:(int)type;	// 0x31cf42e9
// declared property setter: - (void)setUnverifiedListing:(BOOL)listing;	// 0x31cf2d5d
// declared property getter: - (BOOL)showIcon;	// 0x31cf2add
// declared property getter: - (id)streetViewPanoId;	// 0x31cf4679
// declared property getter: - (id)structuredAddress;	// 0x31cf44ed
// declared property getter: - (int)type;	// 0x31cf42d9
// declared property getter: - (BOOL)unverifiedListing;	// 0x31cf2d39
- (void)writeTo:(id)to;	// 0x31cf3b25
@end
