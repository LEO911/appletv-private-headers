/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOPlaceSearchRequest.h"


@interface GEOSearchRequest : GEOPlaceSearchRequest {
	unsigned short _provider;	// 278 = 0x116
}
@property(assign, nonatomic) unsigned short provider;	// G=0x30ea6a45; S=0x30ea62e9; @synthesize=_provider
- (id)init;	// 0x30ea6269
// declared property getter: - (unsigned short)provider;	// 0x30ea6a45
- (Class)responseClass;	// 0x30ea95d5
- (void)setDeviceGEOCoordinate:(XXStruct_gLbvpC)coordinate;	// 0x30ec64a1
// declared property setter: - (void)setProvider:(unsigned short)provider;	// 0x30ea62e9
@end
