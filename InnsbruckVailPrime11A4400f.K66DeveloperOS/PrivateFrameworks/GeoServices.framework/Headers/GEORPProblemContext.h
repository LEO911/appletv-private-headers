/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <ProtocolBuffer/PBCodable.h>

@class NSString, GEORPDirectionsProblem, NSMutableArray, GEOPlace, GEORPMapLocation;

@interface GEORPProblemContext : PBCodable {
	XXStruct_t9EeIA _sessionID;	// 4 = 0x4
	GEORPDirectionsProblem *_directionsProblem;	// 20 = 0x14
	GEORPMapLocation *_mapLocation;	// 24 = 0x18
	GEOPlace *_originalPlace;	// 28 = 0x1c
	int _pinType;	// 32 = 0x20
	NSString *_tileStateLog;	// 36 = 0x24
	NSMutableArray *_visibleTileSets;	// 40 = 0x28
	XXStruct_zn8ILA _has;	// 44 = 0x2c
}
@property(retain, nonatomic) GEORPDirectionsProblem *directionsProblem;	// G=0x30f15505; S=0x30f15515; @synthesize=_directionsProblem
@property(readonly, assign, nonatomic) BOOL hasDirectionsProblem;	// G=0x30f14311; 
@property(readonly, assign, nonatomic) BOOL hasMapLocation;	// G=0x30f142f9; 
@property(readonly, assign, nonatomic) BOOL hasOriginalPlace;	// G=0x30f142e1; 
@property(assign, nonatomic) BOOL hasPinType;	// G=0x30f142c9; S=0x30f142a9; 
@property(assign, nonatomic) BOOL hasSessionID;	// G=0x30f1426d; S=0x30f14251; 
@property(readonly, assign, nonatomic) BOOL hasTileStateLog;	// G=0x30f143f5; 
@property(retain, nonatomic) GEORPMapLocation *mapLocation;	// G=0x30f154e5; S=0x30f154f5; @synthesize=_mapLocation
@property(retain, nonatomic) GEOPlace *originalPlace;	// G=0x30f154c5; S=0x30f154d5; @synthesize=_originalPlace
@property(assign, nonatomic) int pinType;	// G=0x30f154b5; S=0x30f14281; @synthesize=_pinType
@property(assign, nonatomic) XXStruct_t9EeIA sessionID;	// G=0x30f1549d; S=0x30f1420d; @synthesize=_sessionID
@property(retain, nonatomic) NSString *tileStateLog;	// G=0x30f15545; S=0x30f15555; @synthesize=_tileStateLog
@property(retain, nonatomic) NSMutableArray *visibleTileSets;	// G=0x30f15525; S=0x30f15535; @synthesize=_visibleTileSets
- (void)addVisibleTileSets:(id)sets;	// 0x30f14349
- (void)clearVisibleTileSets;	// 0x30f14329
- (void)copyTo:(id)to;	// 0x30f14fc5
- (void)dealloc;	// 0x30f14179
- (id)description;	// 0x30f1440d
- (id)dictionaryRepresentation;	// 0x30f1447d
// declared property getter: - (id)directionsProblem;	// 0x30f15505
// declared property getter: - (BOOL)hasDirectionsProblem;	// 0x30f14311
// declared property getter: - (BOOL)hasMapLocation;	// 0x30f142f9
// declared property getter: - (BOOL)hasOriginalPlace;	// 0x30f142e1
// declared property getter: - (BOOL)hasPinType;	// 0x30f142c9
// declared property getter: - (BOOL)hasSessionID;	// 0x30f1426d
// declared property getter: - (BOOL)hasTileStateLog;	// 0x30f143f5
- (unsigned)hash;	// 0x30f1539d
- (BOOL)isEqual:(id)equal;	// 0x30f151e1
// declared property getter: - (id)mapLocation;	// 0x30f154e5
// declared property getter: - (id)originalPlace;	// 0x30f154c5
// declared property getter: - (int)pinType;	// 0x30f154b5
- (BOOL)readFrom:(id)from;	// 0x30f14bed
// declared property getter: - (XXStruct_t9EeIA)sessionID;	// 0x30f1549d
// declared property setter: - (void)setDirectionsProblem:(id)problem;	// 0x30f15515
// declared property setter: - (void)setHasPinType:(BOOL)type;	// 0x30f142a9
// declared property setter: - (void)setHasSessionID:(BOOL)anId;	// 0x30f14251
// declared property setter: - (void)setMapLocation:(id)location;	// 0x30f154f5
// declared property setter: - (void)setOriginalPlace:(id)place;	// 0x30f154d5
// declared property setter: - (void)setPinType:(int)type;	// 0x30f14281
// declared property setter: - (void)setSessionID:(XXStruct_t9EeIA)anId;	// 0x30f1420d
// declared property setter: - (void)setTileStateLog:(id)log;	// 0x30f15555
// declared property setter: - (void)setVisibleTileSets:(id)sets;	// 0x30f15535
// declared property getter: - (id)tileStateLog;	// 0x30f15545
// declared property getter: - (id)visibleTileSets;	// 0x30f15525
- (id)visibleTileSetsAtIndex:(unsigned)index;	// 0x30f143d5
- (unsigned)visibleTileSetsCount;	// 0x30f143b5
- (void)writeTo:(id)to;	// 0x30f14bf9
@end

