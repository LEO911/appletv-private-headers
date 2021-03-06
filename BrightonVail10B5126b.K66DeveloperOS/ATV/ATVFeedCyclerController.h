/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRCyclerDelegate.h"
#import "BRCyclerDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRMerchant, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedCyclerController : XXUnknownSuperclass <BRCyclerDelegate, BRCyclerDataSource> {
	NSArray *_items;	// 4 = 0x4
	BRMerchant *_merchant;	// 8 = 0x8
}
@property(retain) NSArray *items;	// G=0x1534ad; S=0x1534c1; @synthesize=_items
@property(retain) BRMerchant *merchant;	// G=0x1534d1; S=0x1534e5; @synthesize=_merchant
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x153451
- (long)cycler:(id)cycler willCycleToItemAtIndex:(long)index;	// 0x1534a9
- (void)dealloc;	// 0x1533cd
// declared property getter: - (id)items;	// 0x1534ad
// declared property getter: - (id)merchant;	// 0x1534d1
- (long)numberOfItemsInCycler:(id)cycler;	// 0x153431
// declared property setter: - (void)setItems:(id)items;	// 0x1534c1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1534e5
@end

