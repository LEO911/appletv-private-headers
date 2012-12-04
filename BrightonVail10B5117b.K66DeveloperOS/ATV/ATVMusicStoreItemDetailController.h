/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreCatalogItemController.h"

@class BRDetailedMediaControl, NSTimer, ATVDataQuery, BRScrollControl, ATVDataItem;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemDetailController : ATVMusicStoreCatalogItemController {
	BRScrollControl *_scrollControl;	// 112 = 0x70
	BRDetailedMediaControl *_detailedControl;	// 116 = 0x74
	ATVDataQuery *_rentalQuery;	// 120 = 0x78
	ATVDataItem *_rentalItem;	// 124 = 0x7c
	NSTimer *_expiryInfoTimer;	// 128 = 0x80
	BOOL _isPurchased;	// 132 = 0x84
}
@property(readonly, retain) BRDetailedMediaControl *detailedControl;	// G=0x1f7845; converted property
@property(retain) id itemDictionary;	// G=0x1f7739; S=0x1f7855; converted property
- (id)init;	// 0x1f74e9
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x1f752d
- (void)_cacheManagerStateChanged:(id)changed;	// 0x1f87b9
- (void)_checkIfAlreadyRented;	// 0x1f87c9
- (BOOL)_checkIfPurchased;	// 0x1f84f5
- (id)_displayableItemAdjacentTo:(id)to forward:(BOOL)forward;	// 0x1f8331
- (id)_displayableItemAfter:(id)after;	// 0x1f8309
- (id)_displayableItemBefore:(id)before;	// 0x1f831d
- (void)_expiryInfoTimerFired:(id)fired;	// 0x1f8e69
- (id)_filterPreferredItemsFromDictionary:(id)dictionary;	// 0x1f7e51
- (void)_layoutControls;	// 0x1f8031
- (void)_nextItemSelected;	// 0x1f7915
- (void)_nextItemSelected:(id)selected;	// 0x1f82e9
- (void)_previousItemSelected;	// 0x1f7961
- (void)_previousItemSelected:(id)selected;	// 0x1f82f9
- (void)_relatedContentControlCreated:(id)created;	// 0x1f7c11
- (void)_rentalQueryComplete;	// 0x1f89f1
- (void)_setCopyrightText;	// 0x1f7b31
- (void)_setupDetailedControl;	// 0x1f79ad
- (void)_startExpiryInfoTimer;	// 0x1f8d8d
- (void)_stopExpiryInfoTimer;	// 0x1f8e3d
- (void)_updateExpiryInfo;	// 0x1f8b4d
- (void)_updateFocus;	// 0x1f8225
- (void)_updatePurchasedLoadingText;	// 0x1f856d
- (void)controlWasActivated;	// 0x1f777d
- (void)controlWasDeactivated;	// 0x1f7805
- (void)dealloc;	// 0x1f766d
// converted property getter: - (id)detailedControl;	// 0x1f7845
// converted property getter: - (id)itemDictionary;	// 0x1f7739
- (void)relatedContentLoaded:(id)loaded;	// 0x1f7b8d
// converted property setter: - (void)setItemDictionary:(id)dictionary;	// 0x1f7855
@end
