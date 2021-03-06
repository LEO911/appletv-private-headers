/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRTableView.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffLineScore : BRTableView {
@private
	BRImageControl *_leftFadeImageControl;	// 72 = 0x48
	BRImageControl *_rightFadeImageControl;	// 76 = 0x4c
	BOOL _leftFadeOn;	// 80 = 0x50
	BOOL _rightFadeOn;	// 81 = 0x51
}
@property(assign, nonatomic) BOOL leftFadeOn;	// G=0x3295b02d; S=0x3295ae8d; @synthesize=_leftFadeOn
@property(assign, nonatomic) BOOL rightFadeOn;	// G=0x3295b03d; S=0x3295aec9; @synthesize=_rightFadeOn
- (id)init;	// 0x3295acc9
- (void)dealloc;	// 0x3295ae2d
- (void)layoutSubcontrols;	// 0x3295af05
// declared property getter: - (BOOL)leftFadeOn;	// 0x3295b02d
// declared property getter: - (BOOL)rightFadeOn;	// 0x3295b03d
// declared property setter: - (void)setLeftFadeOn:(BOOL)on;	// 0x3295ae8d
// declared property setter: - (void)setRightFadeOn:(BOOL)on;	// 0x3295aec9
@end

