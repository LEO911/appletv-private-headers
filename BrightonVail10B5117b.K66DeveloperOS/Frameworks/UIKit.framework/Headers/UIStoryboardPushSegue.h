/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStoryboardSegue.h"


__attribute__((visibility("hidden")))
@interface UIStoryboardPushSegue : UIStoryboardSegue {
	int _destinationContainmentContext;	// 20 = 0x14
	int _splitViewControllerIndex;	// 24 = 0x18
}
@property(assign, nonatomic) int destinationContainmentContext;	// G=0x3301e669; S=0x3301e679; @synthesize=_destinationContainmentContext
@property(assign, nonatomic) int splitViewControllerIndex;	// G=0x3301e689; S=0x3301e699; @synthesize=_splitViewControllerIndex
// declared property getter: - (int)destinationContainmentContext;	// 0x3301e669
- (void)perform;	// 0x3301e209
// declared property setter: - (void)setDestinationContainmentContext:(int)context;	// 0x3301e679
// declared property setter: - (void)setSplitViewControllerIndex:(int)index;	// 0x3301e699
// declared property getter: - (int)splitViewControllerIndex;	// 0x3301e689
@end
