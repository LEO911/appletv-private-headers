/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UITextFieldBorderView : UIView {
	UIImage *_image;	// 84 = 0x54
}
- (id)initWithFrame:(CGRect)frame;	// 0x33a578a9
- (void)_updateViewPropertiesForBackgroundImage;	// 0x33a579b1
- (void)dealloc;	// 0x33b42a21
- (void)layoutSubviews;	// 0x33a57e01
- (void)setImage:(id)image;	// 0x33a578f9
- (BOOL)useBlockyMagnificationInClassic;	// 0x33bbf14d
@end

