/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSDictionary, ATVMusicStoreOtherSeasonsControlFactory;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOtherSeasonsProvider : XXUnknownSuperclass <BRProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	ATVMusicStoreOtherSeasonsControlFactory *_factory;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1d51b5
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1d51f1
- (id)controlFactory;	// 0x1d536d
- (id)dataAtIndex:(long)index;	// 0x1d52dd
- (long)dataCount;	// 0x1d52ed
- (void)dealloc;	// 0x1d5279
- (id)hashForDataAtIndex:(long)index;	// 0x1d537d
@end
