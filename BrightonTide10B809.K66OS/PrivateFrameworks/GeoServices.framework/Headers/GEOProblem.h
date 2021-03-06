/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOPlace, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSMutableArray, GEOMapRegion, GEOLatLng, NSData, NSString;

@interface GEOProblem : PBCodable {
	XXStruct_3azwpD *_featureHandles;	// 4 = 0x4
	unsigned _featureHandlesCount;	// 8 = 0x8
	unsigned _featureHandlesSpace;	// 12 = 0xc
	XXStruct_t9EeIA _sessionID;	// 16 = 0x10
	XXStruct_WmZAAA _curlProblemTypes;	// 32 = 0x20
	XXStruct_WmZAAA _pinProblemTypes;	// 44 = 0x2c
	XXStruct_WmZAAA _problemTypes;	// 56 = 0x38
	NSString *_comments;	// 68 = 0x44
	NSMutableArray *_correctedFields;	// 72 = 0x48
	NSString *_correctedLabelTitle;	// 76 = 0x4c
	GEOPlace *_correctedPlace;	// 80 = 0x50
	GEOLatLng *_correctedPosition;	// 84 = 0x54
	NSMutableArray *_directionsProblems;	// 88 = 0x58
	NSData *_directionsResponseID;	// 92 = 0x5c
	GEOMapRegion *_featureRegion;	// 96 = 0x60
	NSString *_httpInfo;	// 100 = 0x64
	NSString *_incorrectLabelTitle;	// 104 = 0x68
	float _mapZoomLevel;	// 108 = 0x6c
	GEOPlace *_originalPlace;	// 112 = 0x70
	GEOLatLng *_pinDrop;	// 116 = 0x74
	int _pinType;	// 120 = 0x78
	GEOPlaceSearchRequest *_placeSearchRequest;	// 124 = 0x7c
	GEOPlaceSearchResponse *_placeSearchResponse;	// 128 = 0x80
	NSString *_preferredSearchDisplayLocation;	// 132 = 0x84
	unsigned _preferredSearchResultIndex;	// 136 = 0x88
	unsigned _problematicSearchResultIndex;	// 140 = 0x8c
	GEOMapRegion *_region;	// 144 = 0x90
	NSString *_syslog;	// 148 = 0x94
	NSString *_tileStateLog;	// 152 = 0x98
	NSMutableArray *_viewportImages;	// 156 = 0x9c
	NSData *_viewportInfo;	// 160 = 0xa0
	NSMutableArray *_visibleTileSets;	// 164 = 0xa4
	struct {
		unsigned sessionID : 1;
		unsigned mapZoomLevel : 1;
		unsigned pinType : 1;
		unsigned preferredSearchResultIndex : 1;
		unsigned problematicSearchResultIndex : 1;
	} _has;	// 168 = 0xa8
}
@property(retain, nonatomic) NSString *comments;	// G=0x33ffb60d; S=0x33ffb61d; @synthesize=_comments
@property(retain, nonatomic) NSMutableArray *correctedFields;	// G=0x33ffb6fd; S=0x33ffb70d; @synthesize=_correctedFields
@property(retain, nonatomic) NSString *correctedLabelTitle;	// G=0x33ffb80d; S=0x33ffb81d; @synthesize=_correctedLabelTitle
@property(retain, nonatomic) GEOPlace *correctedPlace;	// G=0x33ffb5ed; S=0x33ffb5fd; @synthesize=_correctedPlace
@property(retain, nonatomic) GEOLatLng *correctedPosition;	// G=0x33ffb71d; S=0x33ffb72d; @synthesize=_correctedPosition
@property(readonly, assign, nonatomic) int *curlProblemTypes;	// G=0x33ff75c5; 
@property(readonly, assign, nonatomic) unsigned curlProblemTypesCount;	// G=0x33ff75b1; 
@property(retain, nonatomic) NSMutableArray *directionsProblems;	// G=0x33ffb84d; S=0x33ffb85d; @synthesize=_directionsProblems
@property(retain, nonatomic) NSData *directionsResponseID;	// G=0x33ffb77d; S=0x33ffb78d; @synthesize=_directionsResponseID
@property(readonly, assign, nonatomic) XXStruct_3azwpD *featureHandles;	// G=0x33ff78c9; 
@property(readonly, assign, nonatomic) unsigned featureHandlesCount;	// G=0x33ff78b9; 
@property(retain, nonatomic) GEOMapRegion *featureRegion;	// G=0x33ffb82d; S=0x33ffb83d; @synthesize=_featureRegion
@property(readonly, assign, nonatomic) BOOL hasComments;	// G=0x33ff723d; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedLabelTitle;	// G=0x33ff7889; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPlace;	// G=0x33ff7225; 
@property(readonly, assign, nonatomic) BOOL hasCorrectedPosition;	// G=0x33ff7785; 
@property(readonly, assign, nonatomic) BOOL hasDirectionsResponseID;	// G=0x33ff77cd; 
@property(readonly, assign, nonatomic) BOOL hasFeatureRegion;	// G=0x33ff78a1; 
@property(readonly, assign, nonatomic) BOOL hasHttpInfo;	// G=0x33ff7255; 
@property(readonly, assign, nonatomic) BOOL hasIncorrectLabelTitle;	// G=0x33ff7871; 
@property(assign, nonatomic) BOOL hasMapZoomLevel;	// G=0x33ff72cd; S=0x33ff72ad; 
@property(readonly, assign, nonatomic) BOOL hasOriginalPlace;	// G=0x33ff7095; 
@property(readonly, assign, nonatomic) BOOL hasPinDrop;	// G=0x33ff7491; 
@property(assign, nonatomic) BOOL hasPinType;	// G=0x33ff782d; S=0x33ff780d; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;	// G=0x33ff779d; 
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchResponse;	// G=0x33ff77b5; 
@property(readonly, assign, nonatomic) BOOL hasPreferredSearchDisplayLocation;	// G=0x33ff7cb5; 
@property(assign, nonatomic) BOOL hasPreferredSearchResultIndex;	// G=0x33ff7ca1; S=0x33ff7c81; 
@property(assign, nonatomic) BOOL hasProblematicSearchResultIndex;	// G=0x33ff7c45; S=0x33ff7c25; 
@property(readonly, assign, nonatomic) BOOL hasRegion;	// G=0x33ff726d; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x33ff7109; S=0x33ff70ed; 
@property(readonly, assign, nonatomic) BOOL hasSyslog;	// G=0x33ff7841; 
@property(readonly, assign, nonatomic) BOOL hasTileStateLog;	// G=0x33ff7859; 
@property(readonly, assign, nonatomic) BOOL hasViewportInfo;	// G=0x33ff7479; 
@property(retain, nonatomic) NSString *httpInfo;	// G=0x33ffb62d; S=0x33ffb63d; @synthesize=_httpInfo
@property(retain, nonatomic) NSString *incorrectLabelTitle;	// G=0x33ffb7ed; S=0x33ffb7fd; @synthesize=_incorrectLabelTitle
@property(assign, nonatomic) float mapZoomLevel;	// G=0x33ffb66d; S=0x33ff7285; @synthesize=_mapZoomLevel
@property(retain, nonatomic) GEOPlace *originalPlace;	// G=0x33ffb5a9; S=0x33ffb5b9; @synthesize=_originalPlace
@property(retain, nonatomic) GEOLatLng *pinDrop;	// G=0x33ffb6dd; S=0x33ffb6ed; @synthesize=_pinDrop
@property(readonly, assign, nonatomic) int *pinProblemTypes;	// G=0x33ff74bd; 
@property(readonly, assign, nonatomic) unsigned pinProblemTypesCount;	// G=0x33ff74a9; 
@property(assign, nonatomic) int pinType;	// G=0x33ffb79d; S=0x33ff77e5; @synthesize=_pinType
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;	// G=0x33ffb73d; S=0x33ffb74d; @synthesize=_placeSearchRequest
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;	// G=0x33ffb75d; S=0x33ffb76d; @synthesize=_placeSearchResponse
@property(retain, nonatomic) NSString *preferredSearchDisplayLocation;	// G=0x33ffb88d; S=0x33ffb89d; @synthesize=_preferredSearchDisplayLocation
@property(assign, nonatomic) unsigned preferredSearchResultIndex;	// G=0x33ffb87d; S=0x33ff7c59; @synthesize=_preferredSearchResultIndex
@property(readonly, assign, nonatomic) int *problemTypes;	// G=0x33ff7131; 
@property(readonly, assign, nonatomic) unsigned problemTypesCount;	// G=0x33ff711d; 
@property(assign, nonatomic) unsigned problematicSearchResultIndex;	// G=0x33ffb86d; S=0x33ff7bfd; @synthesize=_problematicSearchResultIndex
@property(retain, nonatomic) GEOMapRegion *region;	// G=0x33ffb64d; S=0x33ffb65d; @synthesize=_region
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x33ffb5c9; S=0x33ff70ad; @synthesize=_sessionID
@property(retain, nonatomic) NSString *syslog;	// G=0x33ffb7ad; S=0x33ffb7bd; @synthesize=_syslog
@property(retain, nonatomic) NSString *tileStateLog;	// G=0x33ffb7cd; S=0x33ffb7dd; @synthesize=_tileStateLog
@property(retain, nonatomic) NSMutableArray *viewportImages;	// G=0x33ffb69d; S=0x33ffb6ad; @synthesize=_viewportImages
@property(retain, nonatomic) NSData *viewportInfo;	// G=0x33ffb6bd; S=0x33ffb6cd; @synthesize=_viewportInfo
@property(retain, nonatomic) NSMutableArray *visibleTileSets;	// G=0x33ffb67d; S=0x33ffb68d; @synthesize=_visibleTileSets
- (void)addCorrectedField:(id)field;	// 0x33ff76d9
- (void)addCurlProblemType:(int)type;	// 0x33ff75e9
- (void)addDirectionsProblems:(id)problems;	// 0x33ff7b51
- (void)addFeatureHandle:(XXStruct_3azwpD)handle;	// 0x33ff7915
- (void)addPinProblemType:(int)type;	// 0x33ff74e1
- (void)addProblemType:(int)type;	// 0x33ff7155
- (void)addViewportImages:(id)images;	// 0x33ff73cd
- (void)addVisibleTileSet:(id)set;	// 0x33ff7301
- (void)clearCorrectedFields;	// 0x33ff76b9
- (void)clearCurlProblemTypes;	// 0x33ff75d5
- (void)clearDirectionsProblems;	// 0x33ff7b31
- (void)clearFeatureHandles;	// 0x33ff78d9
- (void)clearPinProblemTypes;	// 0x33ff74cd
- (void)clearProblemTypes;	// 0x33ff7141
- (void)clearViewportImages;	// 0x33ff73ad
- (void)clearVisibleTileSets;	// 0x33ff72e1
// declared property getter: - (id)comments;	// 0x33ffb60d
- (void)copyTo:(id)to;	// 0x33ffa221
- (id)correctedFieldAtIndex:(unsigned)index;	// 0x33ff7765
// declared property getter: - (id)correctedFields;	// 0x33ffb6fd
- (unsigned)correctedFieldsCount;	// 0x33ff7745
// declared property getter: - (id)correctedLabelTitle;	// 0x33ffb80d
// declared property getter: - (id)correctedPlace;	// 0x33ffb5ed
// declared property getter: - (id)correctedPosition;	// 0x33ffb71d
- (int)curlProblemTypeAtIndex:(unsigned)index;	// 0x33ff75fd
// declared property getter: - (int *)curlProblemTypes;	// 0x33ff75c5
// declared property getter: - (unsigned)curlProblemTypesCount;	// 0x33ff75b1
- (void)dealloc;	// 0x33ff6e79
- (id)description;	// 0x33ff7ccd
- (id)dictionaryRepresentation;	// 0x33ff7d3d
// declared property getter: - (id)directionsProblems;	// 0x33ffb84d
- (id)directionsProblemsAtIndex:(unsigned)index;	// 0x33ff7bdd
- (unsigned)directionsProblemsCount;	// 0x33ff7bbd
// declared property getter: - (id)directionsResponseID;	// 0x33ffb77d
- (XXStruct_3azwpD)featureHandleAtIndex:(unsigned)index;	// 0x33ff7a19
// declared property getter: - (XXStruct_3azwpD *)featureHandles;	// 0x33ff78c9
// declared property getter: - (unsigned)featureHandlesCount;	// 0x33ff78b9
// declared property getter: - (id)featureRegion;	// 0x33ffb82d
// declared property getter: - (BOOL)hasComments;	// 0x33ff723d
// declared property getter: - (BOOL)hasCorrectedLabelTitle;	// 0x33ff7889
// declared property getter: - (BOOL)hasCorrectedPlace;	// 0x33ff7225
// declared property getter: - (BOOL)hasCorrectedPosition;	// 0x33ff7785
// declared property getter: - (BOOL)hasDirectionsResponseID;	// 0x33ff77cd
// declared property getter: - (BOOL)hasFeatureRegion;	// 0x33ff78a1
// declared property getter: - (BOOL)hasHttpInfo;	// 0x33ff7255
// declared property getter: - (BOOL)hasIncorrectLabelTitle;	// 0x33ff7871
// declared property getter: - (BOOL)hasMapZoomLevel;	// 0x33ff72cd
// declared property getter: - (BOOL)hasOriginalPlace;	// 0x33ff7095
// declared property getter: - (BOOL)hasPinDrop;	// 0x33ff7491
// declared property getter: - (BOOL)hasPinType;	// 0x33ff782d
// declared property getter: - (BOOL)hasPlaceSearchRequest;	// 0x33ff779d
// declared property getter: - (BOOL)hasPlaceSearchResponse;	// 0x33ff77b5
// declared property getter: - (BOOL)hasPreferredSearchDisplayLocation;	// 0x33ff7cb5
// declared property getter: - (BOOL)hasPreferredSearchResultIndex;	// 0x33ff7ca1
// declared property getter: - (BOOL)hasProblematicSearchResultIndex;	// 0x33ff7c45
// declared property getter: - (BOOL)hasRegion;	// 0x33ff726d
// declared property getter: - (BOOL)hasSessionID;	// 0x33ff7109
// declared property getter: - (BOOL)hasSyslog;	// 0x33ff7841
// declared property getter: - (BOOL)hasTileStateLog;	// 0x33ff7859
// declared property getter: - (BOOL)hasViewportInfo;	// 0x33ff7479
- (unsigned)hash;	// 0x33ffb191
// declared property getter: - (id)httpInfo;	// 0x33ffb62d
// declared property getter: - (id)incorrectLabelTitle;	// 0x33ffb7ed
- (BOOL)isEqual:(id)equal;	// 0x33ffab61
// declared property getter: - (float)mapZoomLevel;	// 0x33ffb66d
// declared property getter: - (id)originalPlace;	// 0x33ffb5a9
// declared property getter: - (id)pinDrop;	// 0x33ffb6dd
- (int)pinProblemTypeAtIndex:(unsigned)index;	// 0x33ff74f5
// declared property getter: - (int *)pinProblemTypes;	// 0x33ff74bd
// declared property getter: - (unsigned)pinProblemTypesCount;	// 0x33ff74a9
// declared property getter: - (int)pinType;	// 0x33ffb79d
// declared property getter: - (id)placeSearchRequest;	// 0x33ffb73d
// declared property getter: - (id)placeSearchResponse;	// 0x33ffb75d
// declared property getter: - (id)preferredSearchDisplayLocation;	// 0x33ffb88d
// declared property getter: - (unsigned)preferredSearchResultIndex;	// 0x33ffb87d
- (int)problemTypeAtIndex:(unsigned)index;	// 0x33ff7169
// declared property getter: - (int *)problemTypes;	// 0x33ff7131
// declared property getter: - (unsigned)problemTypesCount;	// 0x33ff711d
// declared property getter: - (unsigned)problematicSearchResultIndex;	// 0x33ffb86d
- (BOOL)readFrom:(id)from;	// 0x33ff9589
// declared property getter: - (id)region;	// 0x33ffb64d
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x33ffb5c9
// declared property setter: - (void)setComments:(id)comments;	// 0x33ffb61d
// declared property setter: - (void)setCorrectedFields:(id)fields;	// 0x33ffb70d
// declared property setter: - (void)setCorrectedLabelTitle:(id)title;	// 0x33ffb81d
// declared property setter: - (void)setCorrectedPlace:(id)place;	// 0x33ffb5fd
// declared property setter: - (void)setCorrectedPosition:(id)position;	// 0x33ffb72d
- (void)setCurlProblemTypes:(int *)types count:(unsigned)count;	// 0x33ff76a1
// declared property setter: - (void)setDirectionsProblems:(id)problems;	// 0x33ffb85d
// declared property setter: - (void)setDirectionsResponseID:(id)anId;	// 0x33ffb78d
- (void)setFeatureHandles:(XXStruct_3azwpD *)handles count:(unsigned)count;	// 0x33ff7ae1
// declared property setter: - (void)setFeatureRegion:(id)region;	// 0x33ffb83d
// declared property setter: - (void)setHasMapZoomLevel:(BOOL)level;	// 0x33ff72ad
// declared property setter: - (void)setHasPinType:(BOOL)type;	// 0x33ff780d
// declared property setter: - (void)setHasPreferredSearchResultIndex:(BOOL)index;	// 0x33ff7c81
// declared property setter: - (void)setHasProblematicSearchResultIndex:(BOOL)index;	// 0x33ff7c25
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x33ff70ed
// declared property setter: - (void)setHttpInfo:(id)info;	// 0x33ffb63d
// declared property setter: - (void)setIncorrectLabelTitle:(id)title;	// 0x33ffb7fd
// declared property setter: - (void)setMapZoomLevel:(float)level;	// 0x33ff7285
// declared property setter: - (void)setOriginalPlace:(id)place;	// 0x33ffb5b9
// declared property setter: - (void)setPinDrop:(id)drop;	// 0x33ffb6ed
- (void)setPinProblemTypes:(int *)types count:(unsigned)count;	// 0x33ff7599
// declared property setter: - (void)setPinType:(int)type;	// 0x33ff77e5
// declared property setter: - (void)setPlaceSearchRequest:(id)request;	// 0x33ffb74d
// declared property setter: - (void)setPlaceSearchResponse:(id)response;	// 0x33ffb76d
// declared property setter: - (void)setPreferredSearchDisplayLocation:(id)location;	// 0x33ffb89d
// declared property setter: - (void)setPreferredSearchResultIndex:(unsigned)index;	// 0x33ff7c59
- (void)setProblemTypes:(int *)types count:(unsigned)count;	// 0x33ff720d
// declared property setter: - (void)setProblematicSearchResultIndex:(unsigned)index;	// 0x33ff7bfd
// declared property setter: - (void)setRegion:(id)region;	// 0x33ffb65d
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x33ff70ad
// declared property setter: - (void)setSyslog:(id)syslog;	// 0x33ffb7bd
// declared property setter: - (void)setTileStateLog:(id)log;	// 0x33ffb7dd
// declared property setter: - (void)setViewportImages:(id)images;	// 0x33ffb6ad
// declared property setter: - (void)setViewportInfo:(id)info;	// 0x33ffb6cd
// declared property setter: - (void)setVisibleTileSets:(id)sets;	// 0x33ffb68d
// declared property getter: - (id)syslog;	// 0x33ffb7ad
// declared property getter: - (id)tileStateLog;	// 0x33ffb7cd
// declared property getter: - (id)viewportImages;	// 0x33ffb69d
- (id)viewportImagesAtIndex:(unsigned)index;	// 0x33ff7459
- (unsigned)viewportImagesCount;	// 0x33ff7439
// declared property getter: - (id)viewportInfo;	// 0x33ffb6bd
- (id)visibleTileSetAtIndex:(unsigned)index;	// 0x33ff738d
// declared property getter: - (id)visibleTileSets;	// 0x33ffb67d
- (unsigned)visibleTileSetsCount;	// 0x33ff736d
- (void)writeTo:(id)to;	// 0x33ff9595
@end

