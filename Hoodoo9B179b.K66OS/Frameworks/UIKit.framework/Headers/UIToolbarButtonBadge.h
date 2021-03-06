/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIToolbarButtonBadge : UIView {
@private
	UIView *_value;	// 48 = 0x30
	UIView *_background;	// 52 = 0x34
	UIView *_alternate;	// 56 = 0x38
}
- (id)initWithValue:(id)value blinks:(BOOL)blinks;	// 0x330b5685
- (void)dealloc;	// 0x330b56e5
- (void)layoutSubviews;	// 0x330b5c0d
- (void)setBlinks:(BOOL)blinks;	// 0x330b5d75
- (void)setValue:(id)value;	// 0x330b5971
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x330b5759
@end

