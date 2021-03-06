/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVSedonaItemProvider : NSObject <BRProvider> {
@private
	NSMutableDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
	BOOL _reverseOrder;	// 12 = 0xc
}
@property(assign, getter=isOrderReversed) BOOL orderReversed;	// G=0x341218bd; S=0x34121861; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x34121755
- (id)initWithCatalogItem:(id)catalogItem;	// 0x34121791
- (void)_augmentCollectionItem:(id)item atIndex:(long)index;	// 0x34121a31
- (id)controlFactory;	// 0x341218cd
- (id)dataAtIndex:(long)index;	// 0x34121909
- (long)dataCount;	// 0x341218e9
- (void)dealloc;	// 0x34121815
- (id)hashForDataAtIndex:(long)index;	// 0x341219ad
// converted property getter: - (BOOL)isOrderReversed;	// 0x341218bd
// converted property setter: - (void)setOrderReversed:(BOOL)reversed;	// 0x34121861
@end

