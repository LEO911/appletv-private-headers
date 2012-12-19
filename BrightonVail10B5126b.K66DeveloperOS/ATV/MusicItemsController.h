/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicController.h"

@class NSNumber, NSString, ATVDataCollection;

__attribute__((visibility("hidden")))
@interface MusicItemsController : MusicController {
	ATVDataCollection *_album;	// 164 = 0xa4
	ATVDataCollection *_artist;	// 168 = 0xa8
	ATVDataCollection *_musicVideoArtist;	// 172 = 0xac
	ATVDataCollection *_composer;	// 176 = 0xb0
	ATVDataCollection *_playlist;	// 180 = 0xb4
	NSString *_genre;	// 184 = 0xb8
	NSNumber *_albumID;	// 188 = 0xbc
	BOOL _displaysMusicVideosOnly;	// 192 = 0xc0
	BOOL _displayAudiobooksOnly;	// 193 = 0xc1
	BOOL _displayCompilationTracksOnly;	// 194 = 0xc2
	BOOL _sortItemsByName;	// 195 = 0xc3
	BOOL _refreshList;	// 196 = 0xc4
}
+ (id)allMusicVideosControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1d191d
+ (id)allSongsControllerByGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1875
+ (id)allSongsControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1d1845
+ (id)audiobooksControllerForAlbum:(id)album dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1ba9
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x1d17f9
+ (id)musicVideosControllerForArtist:(id)artist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1b61
+ (id)songsControllerForAlbum:(id)album byGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d19a9
+ (id)songsControllerForAlbumWithID:(id)anId dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1a69
+ (id)songsControllerForArtist:(id)artist byGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1a0d
+ (id)songsControllerForComposer:(id)composer dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1ab1
+ (id)songsControllerForPlaylist:(id)playlist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1b09
- (id)initWithAlbum:(id)album byGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1c91
- (id)initWithAlbumID:(id)albumID dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1ed9
- (id)initWithArtist:(id)artist byGenre:(id)genre dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1dd1
- (id)initWithAudiobookAlbum:(id)audiobookAlbum dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d224d
- (id)initWithComposer:(id)composer dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1f6d
- (id)initWithGenre:(id)genre displayCompilationsOnly:(BOOL)only dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d1bf1
- (id)initWithMusiVideoArtist:(id)musiVideoArtist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d2155
- (id)initWithPlaylist:(id)playlist dataClient:(id)client dataClientType:(unsigned long)type;	// 0x1d2055
- (void)_playerUpdated:(id)updated;	// 0x1d37cd
- (void)_registerForPlayerNotifications;	// 0x1d3715
- (void)_setDisplaysAudiobooksOnly:(BOOL)only;	// 0x1d3705
- (void)_setDisplaysMusicVideosOnly:(BOOL)only;	// 0x1d36f5
- (void)_setPreviewForMedia:(id)media;	// 0x1d35d9
- (BOOL)_shuffleEnabled;	// 0x1d3599
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1d2991
- (void)dealloc;	// 0x1d22a9
- (id)errorForNoContent;	// 0x1d2901
- (id)indexPathForDataItem:(void *)dataItem;	// 0x1d2921
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1d2c85
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1d32c9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1d2e49
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1d2c05
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1d33b1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1d32d9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1d2a65
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1d2a0d
- (id)newDataQuery;	// 0x1d25b9
- (id)newPreDataQuery;	// 0x1d23e5
- (long)numberOfSectionsInList:(id)list;	// 0x1d2a61
- (BOOL)preDataQueryComplete:(id)complete;	// 0x1d249d
- (void)setSortItemsByName:(BOOL)name;	// 0x1d3519
- (BOOL)shouldShowSearch;	// 0x1d352d
- (int)typeaheadSelectionOffset;	// 0x1d3529
- (void)wasExhumed;	// 0x1d2371
@end
