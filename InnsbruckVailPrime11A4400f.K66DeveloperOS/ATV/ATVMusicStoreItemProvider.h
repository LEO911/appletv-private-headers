/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	BOOL _reverseOrder;	// 12 = 0xc
	BOOL _isAnyItemBlueDotted;	// 13 = 0xd
	NSMutableDictionary *_watchedStatesForItems;	// 16 = 0x10
}
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x1ce375; S=0x1ce305; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1ce0a9
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1ce0f1
- (void).cxx_destruct;	// 0x1ce5b5
- (id)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x1cedc5
- (void)_checkForBlueDottedItems;	// 0x1cf049
- (void)_resetBlueDottedItems;	// 0x1cf379
- (id)accessibilityLabel;	// 0x1ce301
- (id)controlFactory;	// 0x1ce385
- (id)dataAtIndex:(long)index;	// 0x1ce3c1
- (long)dataCount;	// 0x1ce3a1
- (void)dealloc;	// 0x1ce295
- (id)hashForDataAtIndex:(long)index;	// 0x1ce529
// converted property getter: - (BOOL)isOrderReversed;	// 0x1ce375
- (void)loadSupplementalItemsFromURL:(id)url;	// 0x1ce835
- (void)moreItemSelected:(id)selected;	// 0x1ce729
- (void)registerMoreItem;	// 0x1ce5fd
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x1ce305
- (void)supplementalItemsLoaded:(id)loaded;	// 0x1ceb25
@end
