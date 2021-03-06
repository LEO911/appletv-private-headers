/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIToolbarButtonBadge : UIView {
	UIView *_value;	// 96 = 0x60
	UIView *_background;	// 100 = 0x64
	UIView *_alternate;	// 104 = 0x68
}
- (id)initWithValue:(id)value blinks:(BOOL)blinks;	// 0x2f61cab1
- (void)dealloc;	// 0x2f61cb11
- (void)layoutSubviews;	// 0x2f61d031
- (void)setBlinks:(BOOL)blinks;	// 0x2f61d1a1
- (void)setValue:(id)value;	// 0x2f61cd89
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f61cb89
@end

