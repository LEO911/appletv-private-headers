/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <PBRequest.h> // Unknown library


@interface GEOLocationShiftRequest : PBRequest {
	XXStruct_jtcFHA _pixel;	// 4 = 0x4
}
@property(assign, nonatomic) XXStruct_jtcFHA pixel;	// G=0x3027abc1; S=0x3027abf5; @synthesize=_pixel
- (void)copyTo:(id)to;	// 0x3027aaed
- (void)dealloc;	// 0x3027a7e5
- (id)description;	// 0x3027a811
- (id)dictionaryRepresentation;	// 0x3027a881
- (unsigned)hash;	// 0x3027abad
- (BOOL)isEqual:(id)equal;	// 0x3027ab55
// declared property getter: - (XXStruct_jtcFHA)pixel;	// 0x3027abc1
- (BOOL)readFrom:(id)from;	// 0x3027aa39
- (unsigned)requestTypeCode;	// 0x3027aacd
- (Class)responseClass;	// 0x3027aad1
// declared property setter: - (void)setPixel:(XXStruct_jtcFHA)pixel;	// 0x3027abf5
- (void)writeTo:(id)to;	// 0x3027aa45
@end
