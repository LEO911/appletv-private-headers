/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMediaShelfView;

__attribute__((visibility("hidden")))
@interface ATVItemDetailWithImageHeaderBottomPart : BRControl {
	BRControl *_dividerView;	// 84 = 0x54
	BRMediaShelfView *_shelfView;	// 88 = 0x58
}
@property(retain, nonatomic) BRControl *dividerView;	// G=0x3f85d9; S=0x3f82ad; @synthesize=_dividerView
@property(retain, nonatomic) BRMediaShelfView *shelfView;	// G=0x3f85e9; S=0x3f8309; @synthesize=_shelfView
- (id)init;	// 0x3f8265
- (void).cxx_destruct;	// 0x3f85f9
// declared property getter: - (id)dividerView;	// 0x3f85d9
- (void)layoutSubcontrols;	// 0x3f8411
// declared property setter: - (void)setDividerView:(id)view;	// 0x3f82ad
// declared property setter: - (void)setShelfView:(id)view;	// 0x3f8309
// declared property getter: - (id)shelfView;	// 0x3f85e9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3f8391
@end

