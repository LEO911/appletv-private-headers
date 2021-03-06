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
@property(assign) BOOL displayPlaylistsMenuItem;	// G=0x28be71; S=0x28be61; converted property
@property(retain) ATVDataCollection *mediaItemsCollection;	// G=0x28be4d; S=0x28be25; converted property
+ (int)getWatchedState:(id)state;	// 0x28bd7d
- (void).cxx_destruct;	// 0x28cabd
- (void)_handleContextMenuMarkUnwatchedSelection:(id)selection;	// 0x28cba9
- (void)_handleContextMenuMarkWatchedSelection:(id)selection;	// 0x28cad1
- (id)_listIdentifier;	// 0x28cc81
- (void)addTabControlToListHeader;	// 0x28c489
- (id)cancelProviderForContextMenu;	// 0x28c2f5
- (id)controllerIdentifier;	// 0x28c3f1
- (id)currentItems;	// 0x28c2f9
// converted property getter: - (BOOL)displayPlaylistsMenuItem;	// 0x28be71
- (unsigned)identifierForTabControlItem:(id)tabControlItem;	// 0x28c799
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x28c959
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x28c7d5
// converted property getter: - (id)mediaItemsCollection;	// 0x28be4d
- (id)providersForContextMenu;	// 0x28be81
// converted property setter: - (void)setDisplayPlaylistsMenuItem:(BOOL)item;	// 0x28be61
// converted property setter: - (void)setMediaItemsCollection:(id)collection;	// 0x28be25
- (id)tabControl;	// 0x28c54d
- (id)tabControlItem:(id)item withIdentifier:(unsigned)identifier;	// 0x28c5d9
- (id)tabControlItemForIdentifier:(unsigned)identifier;	// 0x28c67d
- (id)unwatchedItems;	// 0x28c2fd
@end

