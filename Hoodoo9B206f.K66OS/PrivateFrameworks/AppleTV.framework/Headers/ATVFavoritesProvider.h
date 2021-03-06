/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray, ATVFavoritesControlFactory;

__attribute__((visibility("hidden")))
@interface ATVFavoritesProvider : NSObject <BRProvider> {
@private
	NSArray *_favorites;	// 4 = 0x4
	ATVFavoritesControlFactory *_factory;	// 8 = 0x8
}
+ (id)provider;	// 0x365590a1
+ (id)providerWithFavorites:(id)favorites;	// 0x3655917d
+ (id)providerWithItemType:(int)itemType;	// 0x3655910d
- (id)initWithFavorites:(id)favorites;	// 0x365591b9
- (void)_favoritesChanged:(id)changed;	// 0x36559381
- (id)controlFactory;	// 0x3655936d
- (id)dataAtIndex:(long)index;	// 0x3655932d
- (long)dataCount;	// 0x3655934d
- (void)dealloc;	// 0x3655929d
- (id)hashForDataAtIndex:(long)index;	// 0x3655937d
@end

