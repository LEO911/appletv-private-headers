/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegueTemplate.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardReplaceSegueTemplate : UIStoryboardSegueTemplate {
@private
	int _destinationContainmentContext;	// 20 = 0x14
	int _splitViewControllerIndex;	// 24 = 0x18
}
@property(assign, nonatomic) int destinationContainmentContext;	// G=0x354642f9; S=0x35464309; @synthesize=_destinationContainmentContext
@property(assign, nonatomic) int splitViewControllerIndex;	// G=0x35464319; S=0x35464329; @synthesize=_splitViewControllerIndex
- (id)initWithCoder:(id)coder;	// 0x354640d1
- (id)defaultSegueClassName;	// 0x354641d9
// declared property getter: - (int)destinationContainmentContext;	// 0x354642f9
- (void)encodeWithCoder:(id)coder;	// 0x35464151
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x354641e5
// declared property setter: - (void)setDestinationContainmentContext:(int)context;	// 0x35464309
// declared property setter: - (void)setSplitViewControllerIndex:(int)index;	// 0x35464329
// declared property getter: - (int)splitViewControllerIndex;	// 0x35464319
@end

