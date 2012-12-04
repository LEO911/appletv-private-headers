/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIRefreshControl, NSAttributedString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlContentView : UIView {
	UIRefreshControl *_refreshControl;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
}
@property(retain, nonatomic) NSAttributedString *attributedTitle;	// G=0x3499cf1d; S=0x3499cf21; 
@property(readonly, assign, nonatomic) float maximumSnappingHeight;	// G=0x3499cf2d; 
@property(readonly, assign, nonatomic) float minimumSnappingHeight;	// G=0x3499cf29; 
@property(assign, nonatomic) UIRefreshControl *refreshControl;	// G=0x3499cf3d; S=0x345fd5b5; @synthesize=_refreshControl
@property(readonly, assign, nonatomic) int style;	// G=0x3499cf25; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x345fd9a5; S=0x345fd8fd; @synthesize=_tintColor
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// 0x3499cf39
// declared property getter: - (id)attributedTitle;	// 0x3499cf1d
- (void)dealloc;	// 0x3499ced1
- (void)didTransitionFromState:(int)state toState:(int)state2;	// 0x346a4ebd
// declared property getter: - (float)maximumSnappingHeight;	// 0x3499cf2d
// declared property getter: - (float)minimumSnappingHeight;	// 0x3499cf29
// declared property getter: - (id)refreshControl;	// 0x3499cf3d
- (void)refreshControlInvalidatedSnappingHeight;	// 0x3499cf31
// declared property setter: - (void)setAttributedTitle:(id)title;	// 0x3499cf21
// declared property setter: - (void)setRefreshControl:(id)control;	// 0x345fd5b5
// declared property setter: - (void)setTintColor:(id)color;	// 0x345fd8fd
// declared property getter: - (int)style;	// 0x3499cf25
// declared property getter: - (id)tintColor;	// 0x345fd9a5
- (void)willTransitionFromState:(int)state toState:(int)state2;	// 0x346a4275
@end
