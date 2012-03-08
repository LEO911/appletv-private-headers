/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPLCDBar.h"

@class UIView, TPLCDSubImageView, TPLCDTextView;

@interface TPLCDView : TPLCDBar {
	UIView *_contentView;	// 56 = 0x38
	TPLCDTextView *_textView;	// 60 = 0x3c
	TPLCDTextView *_secondLineTextView;	// 64 = 0x40
	TPLCDTextView *_labelView;	// 68 = 0x44
	TPLCDSubImageView *_imageView;	// 72 = 0x48
	unsigned _layoutAsLabelled : 1;	// 76 = 0x4c
}
@property(retain) id label;	// G=0x32a3ec39; S=0x32a3ec25; converted property
@property(retain) id secondLineText;	// G=0x32a3ea35; S=0x32a3f7ad; converted property
@property(retain) id subImage;	// G=0x32a3ef51; S=0x32a3ee35; converted property
@property(retain) id text;	// G=0x32a3e681; S=0x32a3f9fd; converted property
+ (float)labelFontSize;	// 0x32a3e519
+ (float)textFontSize;	// 0x32a3e511
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x32a3f425
- (CGRect)_imageViewFrame;	// 0x32a3f911
- (CGRect)_labelFrame;	// 0x32a3ea55
- (float)_labelVInset;	// 0x32a3fbbd
- (void)_resetContentViewFrame;	// 0x32a3e569
- (CGRect)_text1Frame;	// 0x32a3e6e5
- (CGRect)_text2Frame;	// 0x32a3e8d5
- (float)_textVInset;	// 0x32a3fb69
- (void)blinkLabel;	// 0x32a3ec59
- (void)dealloc;	// 0x32a3fc0d
- (void)didFinishAnimatingLCDLabelFadeOut:(id)anOut finished:(id)finished context:(id)context;	// 0x32a3ebf5
- (CGRect)fullSizedContentViewFrame;	// 0x32a3f071
// converted property getter: - (id)label;	// 0x32a3ec39
- (void)layoutSubviews;	// 0x32a3f151
// converted property getter: - (id)secondLineText;	// 0x32a3ea35
- (void)setContentsAlpha:(float)alpha;	// 0x32a3e629
// converted property setter: - (void)setLabel:(id)label;	// 0x32a3ec25
- (void)setLabel:(id)label animate:(BOOL)animate;	// 0x32a3f4fd
- (void)setLayoutAsLabelled:(BOOL)labelled;	// 0x32a3efc9
// converted property setter: - (void)setSecondLineText:(id)text;	// 0x32a3f7ad
- (void)setShadowColor:(id)color;	// 0x32a3ef71
// converted property setter: - (void)setSubImage:(id)image;	// 0x32a3ee35
// converted property setter: - (void)setText:(id)text;	// 0x32a3f9fd
- (BOOL)shouldCenterContentView;	// 0x32a3e5d5
- (BOOL)shouldCenterText;	// 0x32a3e521
- (BOOL)showImageViewOnLeftSide;	// 0x32a3e54d
// converted property getter: - (id)subImage;	// 0x32a3ef51
// converted property getter: - (id)text;	// 0x32a3e681
- (CGRect)textFrame;	// 0x32a3e551
@end
