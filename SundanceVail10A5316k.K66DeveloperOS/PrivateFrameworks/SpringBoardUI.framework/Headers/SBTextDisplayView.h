/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class NSString, UIFont, UIColor;

@interface SBTextDisplayView : UIView {
	NSString *_text;	// 84 = 0x54
	UIFont *_font;	// 88 = 0x58
	UIColor *_fontColor;	// 92 = 0x5c
}
- (id)initWithWidth:(float)width font:(id)font fontColor:(id)color;	// 0x349b5bc9
- (id)_scriptingInfo;	// 0x349b5f61
- (void)_updateText;	// 0x349b5cd9
- (void)dealloc;	// 0x349b5c61
- (void)drawRect:(CGRect)rect;	// 0x349b5eb1
- (void)setFont:(id)font;	// 0x349b5e01
- (void)setFontColor:(id)color;	// 0x349b5e59
- (void)setText:(id)text;	// 0x349b5da9
@end
