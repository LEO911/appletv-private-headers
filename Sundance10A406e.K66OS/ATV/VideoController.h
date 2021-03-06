/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class ATVDataCollection;

__attribute__((visibility("hidden")))
@interface VideoController : BRDataQueryController {
	ATVDataCollection *_mediaItemsCollection;	// 164 = 0xa4
	BOOL _displayPlaylistsMenuItem;	// 168 = 0xa8
}
@property(assign) BOOL displayPlaylistsMenuItem;	// G=0x884f1; S=0x884e1; converted property
@property(retain) ATVDataCollection *mediaItemsCollection;	// G=0x884cd; S=0x884a5; converted property
+ (int)getWatchedState:(id)state;	// 0x88405
- (void).cxx_destruct;	// 0x88e39
- (void)_handleContextMenuMarkUnwatchedSelection:(id)selection;	// 0x88f25
- (void)_handleContextMenuMarkWatchedSelection:(id)selection;	// 0x88e4d
- (id)_listIdentifier;	// 0x88ffd
- (id)cancelProviderForContextMenu;	// 0x889a9
- (id)controllerIdentifier;	// 0x88aa5
- (id)currentItems;	// 0x889ad
// converted property getter: - (BOOL)displayPlaylistsMenuItem;	// 0x884f1
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x88cc5
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x88b3d
// converted property getter: - (id)mediaItemsCollection;	// 0x884cd
- (id)providersForContextMenu;	// 0x88501
// converted property setter: - (void)setDisplayPlaylistsMenuItem:(BOOL)item;	// 0x884e1
// converted property setter: - (void)setMediaItemsCollection:(id)collection;	// 0x884a5
- (id)unwatchedItems;	// 0x889b1
@end

