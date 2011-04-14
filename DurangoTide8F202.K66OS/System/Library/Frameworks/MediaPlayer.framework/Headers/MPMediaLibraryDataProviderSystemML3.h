/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaLibraryDataProviderML3.h"
#import "MediaPlayer-Structs.h"


@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
}
+ (id)_localizedGeniusErrorForError:(id)error;	// 0x31df7af9
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)seedItemIdentifiers count:(unsigned)count error:(id *)error;	// 0x31df7db5
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)geniusClusterPlaylist count:(unsigned *)count error:(id *)error;	// 0x31df7fb5
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x31df79a5
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x31df78e9
- (BOOL)isGeniusEnabled;	// 0x31df7f95
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31df78c9
- (void)loadBestArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31df8261
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x31df78d9
- (void)loadBestTimedArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x31df80e1
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x31df83e1
- (void)mediaLibraryDidChangeITunesIsSyncingToValue:(BOOL)mediaLibrary;	// 0x31df8051
- (void)releaseGeniusClusterPlaylist:(void *)playlist;	// 0x31df7d9d
- (void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x31df7ea5
@end
