/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TPLCDBar.h"
#import "TelephonyUI-Structs.h"

@class UIView, TPLCDSubImageView, TPLCDTextView;

@interface TPLCDView : TPLCDBar {
	UIView *_contentView;	// 104 = 0x68
	TPLCDTextView *_textView;	// 108 = 0x6c
	TPLCDTextView *_labelView;	// 112 = 0x70
	TPLCDSubImageView *_imageView;	// 116 = 0x74
	unsigned _layoutAsLabelled : 1;	// 120 = 0x78
	BOOL _verticallyCenterTextViewIfLabelless;	// 121 = 0x79
	BOOL _hasBackgroundGradient;	// 122 = 0x7a
	UIView *_backgroundGradientView;	// 124 = 0x7c
}
@property(retain, nonatomic) UIView *backgroundGradientView;	// G=0x3299e001; S=0x3299e011; @synthesize=_backgroundGradientView
@property(assign, nonatomic) BOOL hasBackgroundGradient;	// G=0x3299e035; S=0x3299d741; @synthesize=_hasBackgroundGradient
@property(retain) id label;	// G=0x3299dbfd; S=0x3299d951; converted property
@property(retain) id secondLineText;	// G=0x3299dfcd; S=0x3299dfc9; converted property
@property(retain) id subImage;	// G=0x3299ded9; S=0x3299ddc9; converted property
@property(retain) id text;	// G=0x3299cda1; S=0x3299cca9; converted property
@property(assign) BOOL verticallyCenterTextViewIfLabelless;	// G=0x3299dfd1; S=0x3299dfe9; @synthesize=_verticallyCenterTextViewIfLabelless
+ (float)labelFontSize;	// 0x3299ca1d
+ (float)textFontSize;	// 0x3299ca15
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x3299c951
- (CGRect)_imageViewFrame;	// 0x3299d295
- (CGRect)_labelFrame;	// 0x3299d0d9
- (float)_labelVInset;	// 0x3299cba9
- (void)_resetContentViewFrame;	// 0x3299c8dd
- (CGRect)_text1Frame;	// 0x3299cdc1
- (float)_textVInset;	// 0x3299cc4d
// declared property getter: - (id)backgroundGradientView;	// 0x3299e001
- (void)blinkLabel;	// 0x3299dc21
- (void)dealloc;	// 0x3299ca25
- (void)didFinishAnimatingLCDLabelFadeOut:(id)anOut finished:(id)finished context:(id)context;	// 0x3299d711
- (CGRect)fullSizedContentViewFrame;	// 0x3299c7c1
// declared property getter: - (BOOL)hasBackgroundGradient;	// 0x3299e035
// converted property getter: - (id)label;	// 0x3299dbfd
- (void)layoutSubviews;	// 0x3299d3c9
// converted property getter: - (id)secondLineText;	// 0x3299dfcd
// declared property setter: - (void)setBackgroundGradientView:(id)view;	// 0x3299e011
- (void)setContentsAlpha:(float)alpha;	// 0x3299cb51
// declared property setter: - (void)setHasBackgroundGradient:(BOOL)gradient;	// 0x3299d741
// converted property setter: - (void)setLabel:(id)label;	// 0x3299d951
- (void)setLabel:(id)label animate:(BOOL)animate;	// 0x3299d965
- (void)setLayoutAsLabelled:(BOOL)labelled;	// 0x3299df3d
// converted property setter: - (void)setSecondLineText:(id)text;	// 0x3299dfc9
- (void)setShadowColor:(id)color;	// 0x3299def9
// converted property setter: - (void)setSubImage:(id)image;	// 0x3299ddc9
// converted property setter: - (void)setText:(id)text;	// 0x3299cca9
// declared property setter: - (void)setVerticallyCenterTextViewIfLabelless:(BOOL)labelless;	// 0x3299dfe9
- (BOOL)shouldCenterContentView;	// 0x3299caf9
- (BOOL)shouldCenterText;	// 0x3299cae1
- (BOOL)showImageViewOnLeftSide;	// 0x3299cb4d
// converted property getter: - (id)subImage;	// 0x3299ded9
// converted property getter: - (id)text;	// 0x3299cda1
- (CGRect)textFrame;	// 0x3299d0b5
// declared property getter: - (BOOL)verticallyCenterTextViewIfLabelless;	// 0x3299dfd1
@end

