/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class ATVFavorite, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesMenuItem : BRMenuItem {
	ATVMerchant *_merchant;	// 176 = 0xb0
	ATVFavorite *_favorite;	// 180 = 0xb4
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0x122dfd; S=0x122e0d; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x122ddd; S=0x122ded; @synthesize=_merchant
- (void)_toggle;	// 0x122e79
- (void)_update;	// 0x122e1d
- (BOOL)brEventAction:(id)action;	// 0x122d7d
- (void)controlWasActivated;	// 0x122d3d
- (void)dealloc;	// 0x122cd9
// declared property getter: - (id)favorite;	// 0x122dfd
// declared property getter: - (id)merchant;	// 0x122ddd
// declared property setter: - (void)setFavorite:(id)favorite;	// 0x122e0d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x122ded
@end
