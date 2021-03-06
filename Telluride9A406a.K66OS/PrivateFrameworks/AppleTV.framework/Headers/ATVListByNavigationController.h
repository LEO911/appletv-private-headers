/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTumblerDelegate.h"
#import "BRTumblerDataSource.h"
#import "ATVGenericCollectionController.h"
#import "BRTabControlDelegate.h"

@class ATVURLDocument, ATVTabWithTitleListHeaderControl, ATVTumblerWithTextListHeaderControl;

__attribute__((visibility("hidden")))
@interface ATVListByNavigationController : ATVGenericCollectionController <BRTumblerDelegate, BRTumblerDataSource, BRTabControlDelegate> {
@private
	ATVTumblerWithTextListHeaderControl *_tumblerListHeader;	// 144 = 0x90
	ATVTabWithTitleListHeaderControl *_tabListHeader;	// 148 = 0x94
	ATVURLDocument *_documentForTumblerChange;	// 152 = 0x98
}
- (id)initWithDictionary:(id)dictionary;	// 0x32fc80e9
- (id)initWithFeedElement:(id)feedElement;	// 0x32fc8075
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x32fc9a49
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x32fc9999
- (void)_cancelAllDocumentRequests;	// 0x32fc97ad
- (void)_didNavigateToIndex:(unsigned)index;	// 0x32fc983d
- (void)_documentReadyNotification:(id)notification;	// 0x32fc8985
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x32fc9a95
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x32fc9a09
- (void)_initWithStartingIndex:(unsigned)startingIndex;	// 0x32fc8669
- (void)_loadListForURL:(id)url;	// 0x32fc8805
- (id)_tumblerCustomTextAttributes;	// 0x32fc87e1
- (id)_tumblerTextAttributes;	// 0x32fc87bd
- (void)_updateListHeader;	// 0x32fc8e3d
- (void)_willNavigate;	// 0x32fc97fd
- (id)accessibilityLabel;	// 0x32fc9ad5
- (void)dealloc;	// 0x32fc81c9
- (unsigned)itemCountForTumbler:(id)tumbler;	// 0x32fc83cd
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x32fc8625
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x32fc8655
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x32fc8665
- (void)tumblerControl:(id)control didTumbleToItemAtIndex:(unsigned)index;	// 0x32fc85e9
- (id)tumblerControl:(id)control itemAtIndex:(unsigned)index;	// 0x32fc8461
- (void)tumblerControlWillTumble:(id)tumblerControl;	// 0x32fc85d9
- (void)wasPushed;	// 0x32fc8269
@end

