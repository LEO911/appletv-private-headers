/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOPlaceSearchRequest.h"


@interface GEOSearchRequest : GEOPlaceSearchRequest {
	int _type;	// 140 = 0x8c
	int _zoomLevel;	// 144 = 0x90
	unsigned short _provider;	// 148 = 0x94
}
@property(assign, nonatomic) unsigned short provider;	// G=0x31cf727d; S=0x31cf728d; @synthesize=_provider
@property(assign, nonatomic) int type;	// G=0x31cf723d; S=0x31cf724d; @synthesize=_type
@property(assign, nonatomic) int zoomLevel;	// G=0x31cf725d; S=0x31cf726d; @synthesize=_zoomLevel
- (id)init;	// 0x31cf71d9
// declared property getter: - (unsigned short)provider;	// 0x31cf727d
- (Class)responseClass;	// 0x31cf7221
// declared property setter: - (void)setProvider:(unsigned short)provider;	// 0x31cf728d
// declared property setter: - (void)setType:(int)type;	// 0x31cf724d
// declared property setter: - (void)setZoomLevel:(int)level;	// 0x31cf726d
// declared property getter: - (int)type;	// 0x31cf723d
// declared property getter: - (int)zoomLevel;	// 0x31cf725d
@end

