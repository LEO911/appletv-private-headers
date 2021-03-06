/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1eeb85
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1eebc1
- (id)_flattenMoreInfoSection:(id)section;	// 0x1eee71
- (void)_loadMoreInfoData;	// 0x1eeda1
- (void)_loadMoreInfoFromURL:(id)url;	// 0x1eef81
- (void)_supplementalResponseReceived:(id)received;	// 0x1ef0c9
- (id)controlFactory;	// 0x1eed41
- (id)dataAtIndex:(long)index;	// 0x1eed7d
- (long)dataCount;	// 0x1eed5d
- (void)dealloc;	// 0x1eecb1
- (id)hashForDataAtIndex:(long)index;	// 0x1eed9d
@end

