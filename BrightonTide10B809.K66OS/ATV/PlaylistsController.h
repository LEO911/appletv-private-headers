/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicCollectionController.h"

@class NSArray, ATVDataCollection, ATVDataType;

__attribute__((visibility("hidden")))
@interface PlaylistsController : MusicCollectionController {
	ATVDataType *_mediaTypeForQuery;	// 164 = 0xa4
	ATVDataCollection *_folder;	// 168 = 0xa8
	NSArray *_filteredPlaylists;	// 172 = 0xac
	Class _mediaTypeControllerClass;	// 176 = 0xb0
}
+ (id)playlistsControllerWithDataClient:(id)dataClient dataClientType:(unsigned long)type mediaType:(id)type3 mediaTypeControllerClass:(Class)aClass;	// 0x1dc459
- (id)initWithMediaType:(id)mediaType folder:(id)folder dataClient:(id)client dataClientType:(unsigned long)type mediaTypeControllerClass:(Class)aClass;	// 0x1dc4b5
- (BOOL)_cloudFolderHasPlaylist:(id)playlist inTree:(id)tree;	// 0x1de649
- (void)_cloudPreparePlaylistHierarcy:(id)hierarcy;	// 0x1ddf95
- (int)_firstLevelChildernOfPlaylistAtIndex:(int)index inArray:(id)array totalChildern:(int *)childern;	// 0x1dddf5
- (void)_preparePlaylistHierarcy:(id)hierarcy;	// 0x1ddc1d
- (id)currentItems;	// 0x1dda4d
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1dd9b9
- (BOOL)dataQueryComplete:(id)complete;	// 0x1dc869
- (void)dealloc;	// 0x1dc61d
- (id)errorForNoContent;	// 0x1dcd11
- (id)filterForCurrentMediaType;	// 0x1ddb71
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1dcdf1
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1dd609
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1dd66d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1dd561
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1dd115
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1dd059
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1dcecd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1dd571
- (id)newDataQuery;	// 0x1dc695
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1dd205
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1dcd31
- (long)numberOfSectionsInList:(id)list;	// 0x1dd56d
- (void)playQueryComplete:(id)complete;	// 0x1dd481
- (id)providersForContextMenu;	// 0x1dd42d
- (BOOL)typeaheadPhraseAccumulator:(id)accumulator phraseChanged:(id)changed;	// 0x1dda5d
- (int)typeaheadSelectionOffset;	// 0x1dda11
@end
