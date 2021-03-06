/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTrafficTile : PBCodable {
	NSData *_vertices;	// 4 = 0x4
	NSMutableArray *_trafficSegments;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL hasVertices;	// G=0x32cff711; 
@property(retain, nonatomic) NSMutableArray *trafficSegments;	// G=0x32cffc49; S=0x32cffc59; @synthesize=_trafficSegments
@property(retain, nonatomic) NSData *vertices;	// G=0x32cffc15; S=0x32cffc25; @synthesize=_vertices
- (void)addTrafficSegment:(id)segment;	// 0x32cff729
- (XXStruct_K5nmsA *)createUnpackedVerticesWithGutterSize:(int)gutterSize;	// 0x32cffe51
- (void)dealloc;	// 0x32cff6b9
- (id)description;	// 0x32cff7cd
- (id)dictionaryRepresentation;	// 0x32cff83d
// declared property getter: - (BOOL)hasVertices;	// 0x32cff711
- (BOOL)readFrom:(id)from;	// 0x32cff9d5
// declared property setter: - (void)setTrafficSegments:(id)segments;	// 0x32cffc59
// declared property setter: - (void)setVertices:(id)vertices;	// 0x32cffc25
- (id)trafficSegmentAtIndex:(unsigned)index;	// 0x32cff7ad
// declared property getter: - (id)trafficSegments;	// 0x32cffc49
- (unsigned)trafficSegmentsCount;	// 0x32cff78d
// declared property getter: - (id)vertices;	// 0x32cffc15
- (void)writeTo:(id)to;	// 0x32cffb1d
@end

