/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRMediaUtilities : XXUnknownSuperclass {
}
+ (void)_logDownloadKeyCookies;	// 0x36cab1
+ (id)defaultImageForATVDataAsset:(id)atvdataAsset imageSize:(int)size;	// 0x36be35
+ (void)deleteAllPlaybackCookies;	// 0x36c995
+ (void)deleteCookiesForAsset:(id)asset;	// 0x36c835
+ (BOOL)iTunesServerID:(id)anId isEqualToITunesServerID:(id)itunesServerID;	// 0x36c575
+ (BOOL)isAirPlayAsset:(id)asset;	// 0x36c271
+ (BOOL)isHomeShareRental:(id)rental;	// 0x36c2cd
+ (BOOL)isSagaMediaAsset:(id)asset;	// 0x36c4b1
+ (BOOL)isSagaMediaItem:(id)item;	// 0x36c475
+ (BOOL)isTiltMediaAsset:(id)asset;	// 0x36c50d
+ (BOOL)isTrilogyMediaAsset:(id)asset;	// 0x36c419
+ (BOOL)isTrilogyMediaItem:(id)item;	// 0x36c3e1
+ (BOOL)isiTunesAsset:(id)asset;	// 0x36c1d9
+ (BOOL)isiTunesMediaItem:(id)item;	// 0x36c235
+ (id)mediaAssetsFromMediaItems:(id)mediaItems;	// 0x36c121
+ (id)mediaTypeForATVDataAsset:(id)atvdataAsset;	// 0x36be71
+ (id)mediaTypeForATVDataType:(id)atvdataType;	// 0x36beb1
+ (double)playedThresholdForMediaItem:(id)mediaItem;	// 0x36bbf1
+ (double)playedThresholdForMediaType:(id)mediaType duration:(double)duration;	// 0x36bc89
+ (void)setCookiesForAsset:(id)asset;	// 0x36c685
+ (float)soundCheckValueForMediaAsset:(id)mediaAsset;	// 0x36bd29
+ (float)soundCheckValueForMediaItem:(id)mediaItem;	// 0x36bd99
+ (int)watchedStateForMediaItem:(id)mediaItem;	// 0x36ba61
+ (int)watchedStateForMediaType:(id)mediaType duration:(double)duration bookmarkInMS:(long)ms hasBeenPlayed:(BOOL)played playCount:(long)count;	// 0x36bb69
@end
