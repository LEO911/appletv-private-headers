/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class UIColor;

@interface UISwitch : UIControl <NSCoding> {
@private
	id _control;	// 72 = 0x48
	float _enabledAlpha;	// 76 = 0x4c
}
@property(assign, nonatomic) float enabledAlpha;	// G=0x33126c25; S=0x32f8f841; @synthesize=_enabledAlpha
@property(assign, nonatomic, getter=isOn) BOOL on;	// G=0x330511ad; S=0x32f8fdb1; @dynamic
@property(retain, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor *onColor;	// G=0x33126b61; S=0x33126b51; 
@property(retain, nonatomic) UIColor *onTintColor;	// G=0x33126bb1; S=0x33126b91; 
- (id)init;	// 0x3304663d
- (id)initWithCoder:(id)coder;	// 0x33126589
- (id)initWithFrame:(CGRect)frame;	// 0x32f8d409
- (void)_animateToOn:(BOOL)on withDuration:(float)duration sendAction:(BOOL)action;	// 0x33050bfd
- (void)_commonInitNewLook;	// 0x32f8d55d
- (void)_encodeFrameWithCoder:(id)coder;	// 0x33126735
- (void)_handlePanNL:(id)nl;	// 0x33126345
- (void)_handleTapNL:(id)nl;	// 0x33050b99
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x33126ab9
// declared property getter: - (id)_onColor;	// 0x33126b61
- (id)_onTintColor;	// 0x33126b81
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33126bd1
- (id)_scriptingInfo;	// 0x33126c35
// declared property setter: - (void)_setOnColor:(id)color;	// 0x33126b51
- (void)_setOnTintColor:(id)color;	// 0x33126b71
- (BOOL)_useOldSize;	// 0x32f8d485
- (void)dealloc;	// 0x330424f5
- (unsigned long long)defaultAccessibilityTraits;	// 0x33149639
// declared property getter: - (float)enabledAlpha;	// 0x33126c25
- (void)encodeWithCoder:(id)coder;	// 0x331269d1
- (BOOL)isAccessibilityElementByDefault;	// 0x33149635
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3314964d
// declared property getter: - (BOOL)isOn;	// 0x330511ad
// declared property getter: - (id)onTintColor;	// 0x33126bb1
- (void)setAlpha:(float)alpha;	// 0x32f90a09
- (void)setAlternateColors:(BOOL)colors;	// 0x32f8f851
- (void)setEnabled:(BOOL)enabled;	// 0x33064c51
// declared property setter: - (void)setEnabledAlpha:(float)alpha;	// 0x32f8f841
- (void)setFrame:(CGRect)frame;	// 0x32f8d4b9
// declared property setter: - (void)setOn:(BOOL)on;	// 0x32f8fdb1
- (void)setOn:(BOOL)on animated:(BOOL)animated;	// 0x32f8fdc5
// declared property setter: - (void)setOnTintColor:(id)color;	// 0x33126b91
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f8d525
@end

