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
- (id)initWithValue:(id)value blinks:(BOOL)blinks;	// 0x3586c35d
- (void)dealloc;	// 0x3586c3bd
- (void)layoutSubviews;	// 0x3586c8e5
- (void)setBlinks:(BOOL)blinks;	// 0x3586ca4d
- (void)setValue:(id)value;	// 0x3586c649
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3586c431
@end
