/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRButtonControl.h"

@class ATVMerchant, ATVFavorite;

__attribute__((visibility("hidden")))
@interface ATVAddToFavoritesButtonControl : BRButtonControl {
	ATVMerchant *_merchant;	// 132 = 0x84
	ATVFavorite *_favorite;	// 136 = 0x88
}
@property(retain, nonatomic) ATVFavorite *favorite;	// G=0xdb51d; S=0xdb52d; @synthesize=_favorite
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0xdb4fd; S=0xdb50d; @synthesize=_merchant
- (id)init;	// 0xdb349
- (void)_toggle;	// 0xdb60d
- (void)_update;	// 0xdb53d
- (BOOL)brEventAction:(id)action;	// 0xdb49d
- (void)controlWasActivated;	// 0xdb45d
- (void)dealloc;	// 0xdb3f9
// declared property getter: - (id)favorite;	// 0xdb51d
// declared property getter: - (id)merchant;	// 0xdb4fd
// declared property setter: - (void)setFavorite:(id)favorite;	// 0xdb52d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0xdb50d
@end

