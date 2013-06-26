/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIButton.h> // Unknown library

@class UIImageView, NSString;

@interface TPButton : UIButton {
	UIImageView *_plusSeparator;	// 180 = 0xb4
	int _color;	// 184 = 0xb8
	NSString *_plusSeparatedTitle;	// 188 = 0xbc
	BOOL _forceReLayout;	// 192 = 0xc0
	BOOL _currentlyLayingOut;	// 193 = 0xc1
	BOOL _useStandardSizing;	// 194 = 0xc2
}
@property(assign) int buttonColor;	// G=0x355e40fd; S=0x355e40dd; converted property
@property(assign) BOOL useStandardSizing;	// G=0x355e4b49; S=0x355e4b61; @synthesize=_useStandardSizing
+ (id)acceptVideoButtonImage;	// 0x355e3aa5
+ (id)answerButtonImage;	// 0x355e39fd
+ (id)declineButtonImage;	// 0x355e3a35
+ (id)declineVideoButtonImage;	// 0x355e3a6d
+ (float)defaultHeight;	// 0x355e385d
+ (float)defaultHeightForColor:(int)color;	// 0x355e3889
- (id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;	// 0x355e3df5
- (void)_adjustIconColor;	// 0x355e3fdd
- (void)_setButtonColor:(int)color;	// 0x355e3add
- (void)_setDisabledButtonColor:(int)color;	// 0x355e3dc9
// converted property getter: - (int)buttonColor;	// 0x355e40fd
- (void)dealloc;	// 0x355e42d9
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x355e41d5
- (void)layoutSubviews;	// 0x355e46d5
// converted property setter: - (void)setButtonColor:(int)color;	// 0x355e40dd
- (void)setDisabledButtonColor:(int)color;	// 0x355e40ed
- (void)setEnabled:(BOOL)enabled;	// 0x355e409d
- (void)setHighlighted:(BOOL)highlighted;	// 0x355e405d
- (void)setIconVerticalOffset:(float)offset;	// 0x355e4481
- (void)setMinimumTitleFontSize:(float)size;	// 0x355e44e9
- (void)setMinimumTitleFontSize:(float)size maximumTitleFontSize:(float)size2;	// 0x355e461d
- (void)setPlusSeparatedTitle:(id)title;	// 0x355e434d
- (void)setTitleImagePadding:(float)padding;	// 0x355e410d
- (void)setTitleVerticalOffset:(float)offset;	// 0x355e4421
// declared property setter: - (void)setUseStandardSizing:(BOOL)sizing;	// 0x355e4b61
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x355e4251
// declared property getter: - (BOOL)useStandardSizing;	// 0x355e4b49
@end
