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
@property(retain, nonatomic) NSAttributedString *attributedTitle;	// G=0x320320fd; S=0x32032101; 
@property(readonly, assign, nonatomic) float maximumSnappingHeight;	// G=0x3203210d; 
@property(readonly, assign, nonatomic) float minimumSnappingHeight;	// G=0x32032109; 
@property(assign, nonatomic) UIRefreshControl *refreshControl;	// G=0x3203211d; S=0x31c9324d; @synthesize=_refreshControl
@property(readonly, assign, nonatomic) int style;	// G=0x32032105; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x31c9363d; S=0x31c93595; @synthesize=_tintColor
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;	// 0x32032119
// declared property getter: - (id)attributedTitle;	// 0x320320fd
- (void)dealloc;	// 0x320320b1
- (void)didTransitionFromState:(int)state toState:(int)state2;	// 0x31d3aa8d
// declared property getter: - (float)maximumSnappingHeight;	// 0x3203210d
// declared property getter: - (float)minimumSnappingHeight;	// 0x32032109
// declared property getter: - (id)refreshControl;	// 0x3203211d
- (void)refreshControlInvalidatedSnappingHeight;	// 0x32032111
// declared property setter: - (void)setAttributedTitle:(id)title;	// 0x32032101
// declared property setter: - (void)setRefreshControl:(id)control;	// 0x31c9324d
// declared property setter: - (void)setTintColor:(id)color;	// 0x31c93595
// declared property getter: - (int)style;	// 0x32032105
// declared property getter: - (id)tintColor;	// 0x31c9363d
- (void)willTransitionFromState:(int)state toState:(int)state2;	// 0x31d39e45
@end

