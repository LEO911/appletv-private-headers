/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOTileDecoder.h"
#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOVoltaireRasterTileDecoder : NSObject <GEOTileDecoder> {
}
- (BOOL)canDecodeTile:(const GEOTileKey *)tile quickly:(BOOL *)quickly;	// 0x3797ecd5
- (id)decodeTile:(id)tile forKey:(const GEOTileKey *)key;	// 0x3797ed0d
@end

