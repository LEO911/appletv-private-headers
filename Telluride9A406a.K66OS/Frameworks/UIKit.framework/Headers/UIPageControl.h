/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class NSMutableArray;

@interface UIPageControl : UIControl {
@private
	NSMutableArray *_indicators;	// 72 = 0x48
	int _currentPage;	// 76 = 0x4c
	int _displayedPage;	// 80 = 0x50
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pageControlFlags;	// 84 = 0x54
}
@property(assign, nonatomic) int currentPage;	// G=0x358d04e9; S=0x358d04b9; @dynamic
@property(assign, nonatomic) BOOL defersCurrentPageDisplay;	// G=0x358d05a1; S=0x358d0575; @dynamic
@property(assign, nonatomic) BOOL hidesForSinglePage;	// G=0x358d0561; S=0x358d04f9; @dynamic
@property(assign, nonatomic) int numberOfPages;	// G=0x358d0499; S=0x358d01b5; @dynamic
- (id)initWithCoder:(id)coder;	// 0x358cfe11
- (id)initWithFrame:(CGRect)frame;	// 0x358cfdb1
- (void)_commonPageControlInit;	// 0x358cfd81
- (int)_displayedPage;	// 0x358d0f4d
- (id)_pageIndicatorCurrentImageForPage:(int)page;	// 0x358d01a5
- (id)_pageIndicatorImageForPage:(int)page;	// 0x358d0195
- (void)_populateArchivedSubviews:(id)subviews;	// 0x358cff95
- (void)_setCurrentPage:(int)page;	// 0x358d0f5d
- (void)_setDisplayedPage:(int)page;	// 0x358d0e5d
- (void)_updateCurrentPageDisplay;	// 0x358d0fa1
// declared property getter: - (int)currentPage;	// 0x358d04e9
- (void)dealloc;	// 0x358d0149
// declared property getter: - (BOOL)defersCurrentPageDisplay;	// 0x358d05a1
- (void)encodeWithCoder:(id)coder;	// 0x358d0061
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x358d0969
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x358d0b25
// declared property getter: - (BOOL)hidesForSinglePage;	// 0x358d0561
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x358ff605
- (void)layoutSubviews;	// 0x358d0709
// declared property getter: - (int)numberOfPages;	// 0x358d0499
// declared property setter: - (void)setCurrentPage:(int)page;	// 0x358d04b9
// declared property setter: - (void)setDefersCurrentPageDisplay:(BOOL)display;	// 0x358d0575
// declared property setter: - (void)setHidesForSinglePage:(BOOL)singlePage;	// 0x358d04f9
// declared property setter: - (void)setNumberOfPages:(int)pages;	// 0x358d01b5
- (CGSize)sizeForNumberOfPages:(int)pages;	// 0x358d0d4d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x358d05b5
- (void)updateCurrentPageDisplay;	// 0x358d0d21
@end

