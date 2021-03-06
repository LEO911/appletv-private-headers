/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library
#import "GMM-Structs.h"

@class GMMMapPoint, GMMPixelPoint, GMMPolygon, GMMPolyLine, GMMEfficientMapPoint;

__attribute__((visibility("hidden")))
@interface GMMGeometry : PBCodable {
	int _type;	// 4 = 0x4
	GMMMapPoint *_mapPoint;	// 8 = 0x8
	GMMPolyLine *_polyLine;	// 12 = 0xc
	GMMPolygon *_polygon;	// 16 = 0x10
	GMMPixelPoint *_pixelPoint;	// 20 = 0x14
	GMMEfficientMapPoint *_efficientMapPoint;	// 24 = 0x18
}
@property(retain, nonatomic) GMMEfficientMapPoint *efficientMapPoint;	// G=0x31581d39; S=0x31581d49; @synthesize=_efficientMapPoint
@property(readonly, assign, nonatomic) BOOL hasEfficientMapPoint;	// G=0x31581491; 
@property(readonly, assign, nonatomic) BOOL hasMapPoint;	// G=0x31581431; 
@property(readonly, assign, nonatomic) BOOL hasPixelPoint;	// G=0x31581479; 
@property(readonly, assign, nonatomic) BOOL hasPolyLine;	// G=0x31581449; 
@property(readonly, assign, nonatomic) BOOL hasPolygon;	// G=0x31581461; 
@property(retain, nonatomic) GMMMapPoint *mapPoint;	// G=0x31581c69; S=0x31581c79; @synthesize=_mapPoint
@property(retain, nonatomic) GMMPixelPoint *pixelPoint;	// G=0x31581d05; S=0x31581d15; @synthesize=_pixelPoint
@property(retain, nonatomic) GMMPolyLine *polyLine;	// G=0x31581c9d; S=0x31581cad; @synthesize=_polyLine
@property(retain, nonatomic) GMMPolygon *polygon;	// G=0x31581cd1; S=0x31581ce1; @synthesize=_polygon
@property(assign, nonatomic) int type;	// G=0x31581c49; S=0x31581c59; @synthesize=_type
- (id)initWithCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x315aba01
- (void)dealloc;	// 0x3158139d
- (id)description;	// 0x315814a9
- (id)description;	// 0x315791a5
- (id)dictionaryRepresentation;	// 0x31581519
// declared property getter: - (id)efficientMapPoint;	// 0x31581d39
// declared property getter: - (BOOL)hasEfficientMapPoint;	// 0x31581491
// declared property getter: - (BOOL)hasMapPoint;	// 0x31581431
// declared property getter: - (BOOL)hasPixelPoint;	// 0x31581479
// declared property getter: - (BOOL)hasPolyLine;	// 0x31581449
// declared property getter: - (BOOL)hasPolygon;	// 0x31581461
// declared property getter: - (id)mapPoint;	// 0x31581c69
// declared property getter: - (id)pixelPoint;	// 0x31581d05
- (id)pixelPointGeometry;	// 0x31579335
// declared property getter: - (id)polyLine;	// 0x31581c9d
// declared property getter: - (id)polygon;	// 0x31581cd1
- (BOOL)readFrom:(id)from;	// 0x31581635
// declared property setter: - (void)setEfficientMapPoint:(id)point;	// 0x31581d49
// declared property setter: - (void)setMapPoint:(id)point;	// 0x31581c79
// declared property setter: - (void)setPixelPoint:(id)point;	// 0x31581d15
// declared property setter: - (void)setPolyLine:(id)line;	// 0x31581cad
// declared property setter: - (void)setPolygon:(id)polygon;	// 0x31581ce1
// declared property setter: - (void)setType:(int)type;	// 0x31581c59
// declared property getter: - (int)type;	// 0x31581c49
- (void)writeTo:(id)to;	// 0x315819c1
@end

