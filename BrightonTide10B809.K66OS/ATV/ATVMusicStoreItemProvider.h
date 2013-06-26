/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreItemProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	BOOL _reverseOrder;	// 12 = 0xc
	BOOL _isAnyItemBlueDotted;	// 13 = 0xd
	NSMutableDictionary *_watchedStatesForItems;	// 16 = 0x10
}
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x1ff665; S=0x1ff605; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1ff3b5
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1ff3f1
- (id)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x1ffea9
- (void)_checkForBlueDottedItems;	// 0x2000ad
- (void)_resetBlueDottedItems;	// 0x20036d
- (id)accessibilityLabel;	// 0x1ff601
- (id)controlFactory;	// 0x1ff675
- (id)dataAtIndex:(long)index;	// 0x1ff6b1
- (long)dataCount;	// 0x1ff691
- (void)dealloc;	// 0x1ff55d
- (id)hashForDataAtIndex:(long)index;	// 0x1ff7e9
// converted property getter: - (BOOL)isOrderReversed;	// 0x1ff665
- (void)loadSupplementalItemsFromURL:(id)url;	// 0x1ffa11
- (void)moreItemSelected:(id)selected;	// 0x1ff951
- (void)registerMoreItem;	// 0x1ff85d
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x1ff605
- (void)supplementalItemsLoaded:(id)loaded;	// 0x1ffc5d
@end
