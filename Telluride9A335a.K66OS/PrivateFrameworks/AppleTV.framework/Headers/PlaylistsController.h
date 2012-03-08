/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRDataQueryController.h"

@class NSMutableArray, NSArray;

@interface PlaylistsController : BRDataQueryController {
@private
	ATVMediaTypeRef _mediaTypeForQuery;	// 148 = 0x94
	ATVMediaCollectionRef _folder;	// 152 = 0x98
	NSArray *_filteredPlaylists;	// 156 = 0x9c
	BOOL _countIntegratedQuery;	// 160 = 0xa0
	NSMutableArray *_tempFilteredPlaylists;	// 164 = 0xa4
	NSMutableArray *_pendingPlaylistQueries;	// 168 = 0xa8
	Class _mediaTypeControllerClass;	// 172 = 0xac
}
+ (id)playlistsControllerWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type mediaType:(ATVMediaTypeRef)type3 mediaTypeControllerClass:(Class)aClass;	// 0x3430817d
- (id)initWithMediaType:(ATVMediaTypeRef)mediaType folder:(ATVMediaCollectionRef)folder dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type mediaTypeControllerClass:(Class)aClass;	// 0x343081d9
- (BOOL)_cloudFolderHasPlaylist:(id)playlist inTree:(id)tree;	// 0x3430a559
- (void)_cloudPreparePlaylistHierarcy:(id)hierarcy;	// 0x34309e65
- (ATVMediaFilterRef)_createFilterForCurrentMediaType;	// 0x343093f1
- (void)_fetchPlaylistsItemCount:(id)count;	// 0x343094b1
- (int)_firstLevelChildernOfPlaylistAtIndex:(int)index inArray:(id)array totalChildern:(int *)childern;	// 0x34309c61
- (void)_playlistItemsQueryComplete:(ATVMediaQueryRef)complete;	// 0x3430970d
- (void)_preparePlaylistHierarcy:(id)hierarcy;	// 0x34309a99
- (ATVMediaQueryRef)createDataQuery;	// 0x3430853d
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x34308f35
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x34308c2d
- (BOOL)dataClientUpdated:(id)updated;	// 0x34308465
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x343087f5
- (void)dealloc;	// 0x34308351
- (id)errorForNoContent;	// 0x34308c0d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x3430922d
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x34309201
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x34308e89
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x34308de5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x34308ced
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x3430920d
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x34309131
@end
