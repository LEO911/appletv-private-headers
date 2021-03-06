/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, CALayer, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UISwitchInternalView : UIView {
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
@property(retain, nonatomic) UIImage *offImage;	// G=0x304936e1; S=0x30493645; 
@property(assign, nonatomic) BOOL on;	// G=0x302f0571; S=0x303dce49; @synthesize=_on
@property(retain, nonatomic) UIImage *onImage;	// G=0x304936d1; S=0x304935b9; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x304936f1; S=0x302f065d; @synthesize=_onTintColor
@property(assign) BOOL sendAction;	// G=0x30492705; S=0x303dce5d; converted property
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x30493721; S=0x30492369; @synthesize=_thumbTintColor
@property(retain, nonatomic) UIColor *tintColor;	// G=0x30493701; S=0x30492271; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAlternateColor;	// G=0x30493711; S=0x304923c1; @synthesize=_useAlternateColor
+ (id)_defaultOnTintColor;	// 0x302eefb9
- (id)initWithFrame:(CGRect)frame;	// 0x302eee1d
- (void)_buildControl;	// 0x302eefe5
- (void)_cleanUpAfterAnimating;	// 0x302f0161
- (id)_colorImage;	// 0x302efd0d
- (id)_labelImage;	// 0x302ef919
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x304925ad
- (void)_prepareForInteraction;	// 0x303dcd55
- (void)_sendActions;	// 0x30492565
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x304924f9
- (void)_setOnTintColor:(id)color;	// 0x302f06b9
- (void)_setPressed:(BOOL)pressed;	// 0x3049264d
- (void)_setProgress:(float)progress;	// 0x302eff61
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x303dce6d
- (void)_setupBackgroundLayer;	// 0x302ef65d
- (void)_setupThumbImages;	// 0x302efd99
- (id)_snapshotImage;	// 0x302f0361
- (void)dealloc;	// 0x303bc809
// declared property getter: - (id)offImage;	// 0x304936e1
// declared property getter: - (BOOL)on;	// 0x302f0571
// declared property getter: - (id)onImage;	// 0x304936d1
// declared property getter: - (id)onTintColor;	// 0x304936f1
// converted property getter: - (BOOL)sendAction;	// 0x30492705
// declared property setter: - (void)setOffImage:(id)image;	// 0x30493645
// declared property setter: - (void)setOn:(BOOL)on;	// 0x303dce49
// declared property setter: - (void)setOnImage:(id)image;	// 0x304935b9
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x302f065d
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x303dce5d
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x30492369
// declared property setter: - (void)setTintColor:(id)color;	// 0x30492271
// declared property setter: - (void)setUseAlternateColor:(BOOL)color;	// 0x304923c1
// declared property getter: - (id)thumbTintColor;	// 0x30493721
// declared property getter: - (id)tintColor;	// 0x30493701
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30493561
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30493591
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x304935a5
// declared property getter: - (BOOL)useAlternateColor;	// 0x30493711
@end

