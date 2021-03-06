/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOSimpleTileRequester.h"
#import "GeoServices-Structs.h"


@interface GEOVoltaireSimple3DTileRequester : GEOSimpleTileRequester {
}
+ (unsigned char)tileProviderIdentifier;	// 0x33fdcae1
- (id)_baseURLStringForTileKey:(GEOTileKey *)tileKey;	// 0x33fdcb19
- (GEOTileKey)_patchTileKey:(GEOTileKey *)key;	// 0x33fdcae5
- (unsigned)tileEditionForKey:(GEOTileKey *)key;	// 0x33fdcb99
- (unsigned)tileSetForKey:(const GEOTileKey *)key;	// 0x33fdcb75
- (id)urlForTileKey:(GEOTileKey *)tileKey;	// 0x33fdcc31
@end

