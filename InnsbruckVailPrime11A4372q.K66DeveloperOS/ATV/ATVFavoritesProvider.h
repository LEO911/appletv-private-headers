/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class ATVFavoritesControlFactory, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFavoritesProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_favorites;	// 4 = 0x4
	ATVFavoritesControlFactory *_factory;	// 8 = 0x8
}
+ (id)provider;	// 0x1092e9
+ (id)providerWithFavorites:(id)favorites;	// 0x1093c5
+ (id)providerWithItemType:(int)itemType;	// 0x109355
- (id)initWithFavorites:(id)favorites;	// 0x109401
- (void)_favoritesChanged:(id)changed;	// 0x1095c5
- (id)controlFactory;	// 0x1095b1
- (id)dataAtIndex:(long)index;	// 0x109571
- (long)dataCount;	// 0x109591
- (void)dealloc;	// 0x1094e1
- (id)hashForDataAtIndex:(long)index;	// 0x1095c1
@end
