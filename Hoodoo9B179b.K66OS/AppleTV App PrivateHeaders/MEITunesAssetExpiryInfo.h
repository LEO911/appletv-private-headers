/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesAssetExpiryInfo.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTVAPPBinary-Structs.h"


__attribute__((visibility("hidden")))
@interface MEITunesAssetExpiryInfo : XXUnknownSuperclass {
}
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x57bf9
- (id)expiryDate;	// 0x57d95
- (BOOL)hasBeenPlayed;	// 0x57efd
- (BOOL)isExpired;	// 0x57d1d
- (unsigned)rentalPlaybackDuration;	// 0x57eb1
@end

@interface MEITunesAssetExpiryInfo (Private)
- (ATVMediaItemRef)_mediaItemRef;	// 0x57fe9
@end
