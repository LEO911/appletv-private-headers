/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIView, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollViewInfo : NSObject {
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
	UIView *_oldSuperview;	// 8 = 0x8
}
@property(retain, nonatomic) UIView *oldSuperview;	// G=0x31e2d4f1; S=0x31e2d501; @synthesize=_oldSuperview
@property(retain, nonatomic) UIWebOverflowScrollView *scrollView;	// G=0x31e2d4d1; S=0x31e2d4e1; @synthesize=_scrollView
- (id)initWithScrollView:(id)scrollView;	// 0x31e2d3c1
- (void)dealloc;	// 0x31e2d455
// declared property getter: - (id)oldSuperview;	// 0x31e2d4f1
// declared property getter: - (id)scrollView;	// 0x31e2d4d1
// declared property setter: - (void)setOldSuperview:(id)superview;	// 0x31e2d501
// declared property setter: - (void)setScrollView:(id)view;	// 0x31e2d4e1
@end

