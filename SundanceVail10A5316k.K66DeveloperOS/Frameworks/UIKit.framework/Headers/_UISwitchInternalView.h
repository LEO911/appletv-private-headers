/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class CALayer, UIColor, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _UISwitchInternalView : UIView {
@private
	UIImage *_colorMask;	// 84 = 0x54
	UIImage *_shapeMask;	// 88 = 0x58
	UIImage *_shapeShadow;	// 92 = 0x5c
	UIImage *_thumb;	// 96 = 0x60
	UIImage *_thumbPressed;	// 100 = 0x64
	float _position;	// 104 = 0x68
	BOOL _pressed;	// 108 = 0x6c
	UIImageView *_colorView;	// 112 = 0x70
	UIImageView *_thumbView;	// 116 = 0x74
	UIImageView *_labelView;	// 120 = 0x78
	UIColor *_onTintColor;	// 124 = 0x7c
	UIColor *_tintColor;	// 128 = 0x80
	UIColor *_thumbTintColor;	// 132 = 0x84
	UIColor *_nonAlternateColor;	// 136 = 0x88
	UIImage *_onImage;	// 140 = 0x8c
	UIImage *_offImage;	// 144 = 0x90
	BOOL _on;	// 148 = 0x94
	BOOL _sendAction;	// 149 = 0x95
	BOOL _useAlternateColor;	// 150 = 0x96
	BOOL _animating;	// 151 = 0x97
	UIImageView *_idleImageView;	// 152 = 0x98
	UIView *_interactiveView;	// 156 = 0x9c
	CALayer *_backgroundLayer;	// 160 = 0xa0
}
@property(retain, nonatomic) UIImage *offImage;	// G=0x302d5341; S=0x302d52a5; 
@property(assign, nonatomic) BOOL on;	// G=0x30152a49; S=0x30205c91; @synthesize=_on
@property(retain, nonatomic) UIImage *onImage;	// G=0x302d5331; S=0x302d5219; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x302d5351; S=0x302d3b4d; @synthesize=_onTintColor
@property(assign) BOOL sendAction;	// G=0x302d3e75; S=0x30205ca5; converted property
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x302d5371; S=0x302d3ca1; @synthesize=_thumbTintColor
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30152279; S=0x302d3ba9; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAlternateColor;	// G=0x302d5361; S=0x302d3cf9; @synthesize=_useAlternateColor
+ (id)_defaultOnTintColor;	// 0x302d39c1
- (id)initWithFrame:(CGRect)frame;	// 0x301515b5
- (void)_buildControl;	// 0x301517a5
- (void)_cleanUpAfterAnimating;	// 0x301524a1
- (id)_colorImage;	// 0x301521ed
- (id)_labelImage;	// 0x302d3fb9
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x3020602d
- (void)_prepareForInteraction;	// 0x30205a75
- (void)_sendActions;	// 0x302060cd
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x302d3e09
- (void)_setOnTintColor:(id)color;	// 0x302d3a49
- (void)_setPressed:(BOOL)pressed;	// 0x30205abd
- (void)_setProgress:(float)progress;	// 0x301522a1
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x30205cb5
- (void)_setupBackgroundLayer;	// 0x302d4d95
- (void)_setupThumbImages;	// 0x302d5051
- (id)_snapshotImage;	// 0x30152691
- (void)dealloc;	// 0x301fd6b1
// declared property getter: - (id)offImage;	// 0x302d5341
// declared property getter: - (BOOL)on;	// 0x30152a49
// declared property getter: - (id)onImage;	// 0x302d5331
// declared property getter: - (id)onTintColor;	// 0x302d5351
// converted property getter: - (BOOL)sendAction;	// 0x302d3e75
// declared property setter: - (void)setOffImage:(id)image;	// 0x302d52a5
// declared property setter: - (void)setOn:(BOOL)on;	// 0x30205c91
// declared property setter: - (void)setOnImage:(id)image;	// 0x302d5219
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x302d3b4d
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x30205ca5
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x302d3ca1
// declared property setter: - (void)setTintColor:(id)color;	// 0x302d3ba9
// declared property setter: - (void)setUseAlternateColor:(BOOL)color;	// 0x302d3cf9
// declared property getter: - (id)thumbTintColor;	// 0x302d5371
// declared property getter: - (id)tintColor;	// 0x30152279
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30205a41
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302d5201
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30206015
// declared property getter: - (BOOL)useAlternateColor;	// 0x302d5361
@end

