/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIButton.h"

@class UIActivity;

__attribute__((visibility("hidden")))
@interface UIActivityButton : UIButton {
	UIActivity *_activity;	// 180 = 0xb4
}
@property(retain, nonatomic) UIActivity *activity;	// G=0x3498d7d1; S=0x346d2e59; @synthesize=_activity
+ (id)activityButtonForActivity:(id)activity activityTitle:(id)title;	// 0x346d2be1
// declared property getter: - (id)activity;	// 0x3498d7d1
- (CGRect)contentRectForBounds:(CGRect)bounds;	// 0x346d3399
- (void)dealloc;	// 0x346e3955
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x346d360d
- (void)reloadActivityImage;	// 0x3498d78d
- (void)sendAction:(SEL)action to:(id)to forEvent:(id)event;	// 0x346d72a1
// declared property setter: - (void)setActivity:(id)activity;	// 0x346d2e59
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x346d33c1
@end

