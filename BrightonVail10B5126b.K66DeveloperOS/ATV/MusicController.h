/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"


__attribute__((visibility("hidden")))
@interface MusicController : BRDataQueryController {
}
+ (id)addDetailedPropertiesIfNeededToAlbum:(id)album usingClient:(id)client withCompletionHandler:(id)completionHandler;	// 0x1ccd11
+ (void)addGenre:(id)genre toQuery:(id)query;	// 0x1cc185
+ (void)addPropertiesForAlbumQuery:(id)albumQuery withDetailedData:(BOOL)detailedData;	// 0x1cc80d
+ (void)addPropertiesForSongsQuery:(id)songsQuery;	// 0x1cc6e9
+ (void)addiTunesLPFilterToQuery:(id)query;	// 0x1cc11d
+ (id)albumMenuItemForAlbum:(id)album;	// 0x1cd445
+ (id)albumMenuItemForAlbum:(id)album displaysArtistName:(BOOL)name;	// 0x1cd459
+ (id)artistMenuItemForArtist:(id)artist;	// 0x1cd3d1
+ (id)newAudiobooksQueryWithProperties:(BOOL)properties;	// 0x1cc8c9
+ (id)newItemsQueryForAlbum:(id)album;	// 0x1ccbd1
+ (id)newItemsQueryForPlaylist:(id)playlist;	// 0x1ccc75
+ (id)newMusicVideosQueryWithProperties:(BOOL)properties;	// 0x1cc97d
+ (id)newMusicVideosQueryWithPropertiesForArtistID:(id)artistID;	// 0x1cca31
+ (id)newPlaylistsQueryWithProperties:(BOOL)properties;	// 0x1ccaa5
+ (id)newSongsQuery;	// 0x1cc1e5
+ (id)newSongsQueryForAlbumID:(id)albumID;	// 0x1cc3d9
+ (id)newSongsQueryForArtist:(id)artist;	// 0x1cc241
+ (id)newSongsQueryForComposer:(id)composer;	// 0x1cc49d
+ (id)newSongsQueryWithProperties;	// 0x1cc205
+ (id)newSongsQueryWithPropertiesForAlbumID:(id)albumID;	// 0x1cc6ad
+ (id)newSongsQueryWithPropertiesForArtist:(id)artist;	// 0x1cc39d
+ (id)newSongsQueryWithPropertiesForComposer:(id)composer;	// 0x1cc55d
+ (id)playlistMenuItemForPlaylist:(id)playlist;	// 0x1cd619
+ (id)previewForAlbum:(id)album preview:(id)preview;	// 0x1cdb09
+ (id)previewForMediaItem:(id)mediaItem preview:(id)preview;	// 0x1cd841
+ (id)songMenuItemForSong:(id)song;	// 0x1cd079
+ (id)songMenuItemForSong:(id)song displaySpeakerIfPlaying:(BOOL)playing;	// 0x1cd04d
+ (id)songMenuItemForSong:(id)song displaysArtist:(BOOL)artist;	// 0x1cd0a5
+ (id)songMenuItemForSong:(id)song displaysArtist:(BOOL)artist displaySpeakerIfPlaying:(BOOL)playing;	// 0x1cd0c9
+ (id)songsAndMusicVideosFilterWithAudiobook:(BOOL)audiobook;	// 0x1cc599
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1cc0b9
- (void)_handleContextMenuSelection:(id)selection;	// 0x1ce0c1
- (id)cancelProviderForContextMenu;	// 0x1cdf71
- (id)providersForContextMenu;	// 0x1cde2d
- (id)searchControllerForClient:(id)client clientType:(unsigned long)type textEntryClient:(id)client3;	// 0x1cdf75
- (BOOL)shouldShowSearch;	// 0x1ce0bd
@end
