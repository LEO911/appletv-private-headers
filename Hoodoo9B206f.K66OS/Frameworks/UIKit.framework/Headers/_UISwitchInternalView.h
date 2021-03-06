/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UISwitchInternalView : UIView {
@private
	UIImage *_colorMask;	// 48 = 0x30
	UIImage *_shapeMask;	// 52 = 0x34
	UIImage *_shapeShadow;	// 56 = 0x38
	UIImage *_thumb;	// 60 = 0x3c
	UIImage *_thumbPressed;	// 64 = 0x40
	float _position;	// 68 = 0x44
	BOOL _pressed;	// 72 = 0x48
	UIImageView *_colorView;	// 76 = 0x4c
	UIImageView *_thumbView;	// 80 = 0x50
	UIImageView *_labelView;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
	UIColor *_nonAlternateColor;	// 92 = 0x5c
	BOOL _on;	// 96 = 0x60
	BOOL _sendAction;	// 97 = 0x61
	BOOL _useAleternateColor;	// 98 = 0x62
	BOOL _animating;	// 99 = 0x63
	UIImageView *_idleImageView;	// 100 = 0x64
	UIView *_interactiveView;	// 104 = 0x68
}
@property(assign, nonatomic) BOOL on;	// G=0x353dbca1; S=0x3549cb21; @synthesize=_on
@property(assign) BOOL sendAction;	// G=0x35572179; S=0x3549cb31; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x353db045; S=0x355720b9; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAleternateColor;	// G=0x3557219d; S=0x353db6c9; @synthesize=_useAleternateColor
- (id)initWithFrame:(CGRect)frame;	// 0x353d95c9
- (void)_buildControl;	// 0x353d9975
- (void)_cleanUpAfterAnimating;	// 0x353db2d9
- (id)_colorImage;	// 0x353dae71
- (id)_createLabelImage;	// 0x353da215
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x3549ceb5
- (void)_prepareForInteraction;	// 0x3549c91d
- (void)_sendActions;	// 0x3549cfe5
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x3557210d
- (void)_setPressed:(BOOL)pressed;	// 0x3549c961
- (void)_setProgress:(float)progress;	// 0x353db0c9
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x3549cb41
- (void)_setTintColor:(id)color;	// 0x353db841
- (id)_snapshotImage;	// 0x353db4e1
- (void)dealloc;	// 0x3548e3bd
// declared property getter: - (BOOL)on;	// 0x353dbca1
// converted property getter: - (BOOL)sendAction;	// 0x35572179
// declared property setter: - (void)setOn:(BOOL)on;	// 0x3549cb21
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x3549cb31
// declared property setter: - (void)setTintColor:(id)color;	// 0x355720b9
// declared property setter: - (void)setUseAleternateColor:(BOOL)color;	// 0x353db6c9
// declared property getter: - (id)tintColor;	// 0x353db045
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3549c8ed
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35572189
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3549cea1
// declared property getter: - (BOOL)useAleternateColor;	// 0x3557219d
@end

