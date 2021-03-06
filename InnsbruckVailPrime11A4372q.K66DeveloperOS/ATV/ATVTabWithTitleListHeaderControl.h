/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRTabControl;

__attribute__((visibility("hidden")))
@interface ATVTabWithTitleListHeaderControl : BRControl {
	BRTabControl *_tab;	// 84 = 0x54
	BRTextControl *_title;	// 88 = 0x58
	BRTextControl *_subtitle;	// 92 = 0x5c
}
@property(readonly, assign) BRTextControl *subtitle;	// G=0xb98d5; @synthesize=_subtitle
@property(readonly, assign) BRTabControl *tab;	// G=0xb98ad; @synthesize=_tab
@property(readonly, assign) BRTextControl *title;	// G=0xb98c1; @synthesize=_title
- (id)init;	// 0xb9401
- (id)accessibilityLabel;	// 0xb9845
- (BOOL)brEventAction:(id)action;	// 0xb956d
- (void)dealloc;	// 0xb94f5
- (void)layoutSubcontrols;	// 0xb96c9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xb9599
// declared property getter: - (id)subtitle;	// 0xb98d5
// declared property getter: - (id)tab;	// 0xb98ad
// declared property getter: - (id)title;	// 0xb98c1
@end

