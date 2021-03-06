/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class ATVDataQuery, NSString, NSArray, ATVDataClient;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface MEInternetRadioController : BRDataQueryController {
	id<BRMediaAsset> _nowPlayingStation;	// 164 = 0xa4
	NSArray *_favorites;	// 168 = 0xa8
	NSArray *_categories;	// 172 = 0xac
	ATVDataClient *_tunerDataClient;	// 176 = 0xb0
	long _fetchingStationsForIndex;	// 180 = 0xb4
	NSString *_selectedFavoriteStationName;	// 184 = 0xb8
	ATVDataQuery *_categoryQuery;	// 188 = 0xbc
	ATVDataQuery *_stationQuery;	// 192 = 0xc0
	ATVDataQuery *_favoriteCategoryQuery;	// 196 = 0xc4
	ATVDataQuery *_favoriteStationQuery;	// 200 = 0xc8
}
+ (void)initialize;	// 0x21e309
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x21e365
- (void).cxx_destruct;	// 0x21ec3d
- (void)_categoryQueryCompleted:(id)completed;	// 0x21f915
- (void)_favoriteAdded:(id)added;	// 0x220745
- (void)_favoriteCategoryQueryComplete:(id)complete;	// 0x22022d
- (void)_favoriteRemoved:(id)removed;	// 0x220841
- (void)_favoriteStationQueryComplete:(id)complete;	// 0x220365
- (void)_getFavoriteCategoryFromString:(id)string;	// 0x220a65
- (void)_getStationInCategory:(id)category;	// 0x220c11
- (void)_handleContextMenuSelection:(id)selection;	// 0x2204c1
- (void)_handleDidSelectRadioFavorite:(id)_handle;	// 0x22093d
- (void)_nowPlayingStateChanged:(id)changed;	// 0x2205c1
- (void)_performStationsQueryForList:(id)list withIndexPath:(id)indexPath withFollowUpAction:(int)followUpAction;	// 0x21fa95
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay;	// 0x21ec39
- (void)_stationsQueryComplete:(id)complete;	// 0x21fe9d
- (void)_updateNowPlaying;	// 0x2205ed
- (BOOL)brEventAction:(id)action;	// 0x21e851
- (id)controlForContextMenuPositioning;	// 0x21f911
- (id)controlForContextMenuStart;	// 0x21f90d
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x21eb85
- (void)dealloc;	// 0x21e711
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x21f40d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x21f749
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x21f6b5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x21f1a1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x21f091
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x21ecfd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x21ef6d
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x21efd1
- (long)numberOfSectionsInList:(id)list;	// 0x21ef41
- (id)providersForContextMenu;	// 0x21f7dd
- (void)wasExhumed;	// 0x21eb45
- (void)wasPushed;	// 0x21e9d9
@end

