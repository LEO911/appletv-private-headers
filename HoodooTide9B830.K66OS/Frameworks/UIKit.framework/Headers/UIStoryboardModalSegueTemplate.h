/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardModalSegueTemplate : UIStoryboardSegueTemplate {
@private
	BOOL _useDefaultModalPresentationStyle;	// 20 = 0x14
	BOOL _useDefaultModalTransitionStyle;	// 21 = 0x15
	int _modalPresentationStyle;	// 24 = 0x18
	int _modalTransitionStyle;	// 28 = 0x1c
}
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x30399ddd; S=0x30399ded; @synthesize=_modalPresentationStyle
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x30399dfd; S=0x30399e0d; @synthesize=_modalTransitionStyle
@property(assign, nonatomic) BOOL useDefaultModalPresentationStyle;	// G=0x30399d9d; S=0x30399dad; @synthesize=_useDefaultModalPresentationStyle
@property(assign, nonatomic) BOOL useDefaultModalTransitionStyle;	// G=0x30399dbd; S=0x30399dcd; @synthesize=_useDefaultModalTransitionStyle
- (id)initWithCoder:(id)coder;	// 0x30399b49
- (id)defaultSegueClassName;	// 0x30399cdd
- (void)encodeWithCoder:(id)coder;	// 0x30399c35
// declared property getter: - (int)modalPresentationStyle;	// 0x30399ddd
// declared property getter: - (int)modalTransitionStyle;	// 0x30399dfd
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x30399ce9
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x30399ded
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x30399e0d
// declared property setter: - (void)setUseDefaultModalPresentationStyle:(BOOL)style;	// 0x30399dad
// declared property setter: - (void)setUseDefaultModalTransitionStyle:(BOOL)style;	// 0x30399dcd
// declared property getter: - (BOOL)useDefaultModalPresentationStyle;	// 0x30399d9d
// declared property getter: - (BOOL)useDefaultModalTransitionStyle;	// 0x30399dbd
@end
