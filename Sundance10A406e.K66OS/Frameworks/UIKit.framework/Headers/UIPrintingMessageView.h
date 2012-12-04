/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrintingMessageView : UIView {
	UILabel *_title;	// 84 = 0x54
	UILabel *_message;	// 88 = 0x58
	UIImageView *_icon;	// 92 = 0x5c
}
- (id)initInView:(id)view title:(id)title;	// 0x30c2ab79
- (void)dealloc;	// 0x30c2af21
- (void)layoutSubviews;	// 0x30c2af99
- (void)setMessage:(id)message;	// 0x30c2b24d
@end
