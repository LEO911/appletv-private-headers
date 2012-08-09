/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIView.h> // Unknown library

@class NSString;

@interface SBDeviceLockTitle : UIView {
	int _style;	// 84 = 0x54
	int _interfaceOrientation;	// 88 = 0x58
}
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x36399549; S=0x3639954d; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x36399565; S=0x36399575; @synthesize=_interfaceOrientation
@property(retain, nonatomic) NSString *subtitle;	// G=0x36399559; S=0x3639955d; 
@property(retain, nonatomic) NSString *title;	// G=0x36399551; S=0x36399555; 
+ (id)newWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x36399445
- (id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;	// 0x363994e1
- (void)blinkSubtitle;	// 0x36399561
// declared property getter: - (int)interfaceOrientation;	// 0x36399565
// declared property getter: - (BOOL)isHighlighted;	// 0x36399549
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x3639954d
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x36399575
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x3639955d
// declared property setter: - (void)setTitle:(id)title;	// 0x36399555
// declared property getter: - (id)subtitle;	// 0x36399559
// declared property getter: - (id)title;	// 0x36399551
@end
