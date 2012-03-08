/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"


__attribute__((visibility("hidden")))
@interface UITexturedButton : UIButton {
}
- (id)initWithFrame:(CGRect)frame;	// 0x357eedbd
- (id)backgroundImageForState:(unsigned)state;	// 0x358dfae1
- (int)buttonType;	// 0x358dfa21
- (void)drawRect:(CGRect)rect;	// 0x357ef4d5
- (void)setBackgroundImage:(id)image forStates:(unsigned)states;	// 0x358dfadd
- (void)setHighlighted:(BOOL)highlighted;	// 0x358dfa25
- (void)setTitleColor:(id)color forStates:(unsigned)states;	// 0x358dfacd
- (void)setTitleShadowColor:(id)color forStates:(unsigned)states;	// 0x358dfad5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x358dfa65
- (id)titleColorForState:(unsigned)state;	// 0x358dfad1
- (id)titleShadowColorForState:(unsigned)state;	// 0x358dfad9
@end
