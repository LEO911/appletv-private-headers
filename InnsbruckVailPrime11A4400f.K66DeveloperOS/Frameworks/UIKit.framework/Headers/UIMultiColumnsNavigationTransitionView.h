/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "NSCoding.h"

@class UIColor, NSArray;

@interface UIMultiColumnsNavigationTransitionView : UIView <NSCoding> {
	id _delegate;	// 96 = 0x60
	int _transition;	// 100 = 0x64
	UIView *_firstResponderViewToRestore;	// 104 = 0x68
	unsigned _isTransitioning : 1;	// 108 = 0x6c
	float _columnWidth;	// 112 = 0x70
	int _columnCount;	// 116 = 0x74
	NSArray *_fromViews;	// 120 = 0x78
	NSArray *_toViews;	// 124 = 0x7c
	NSArray *_viewsToRemove;	// 128 = 0x80
	NSArray *_viewsToAdd;	// 132 = 0x84
	NSArray *_displayedViews;	// 136 = 0x88
	CFDictionaryRef _dividerViews;	// 140 = 0x8c
	CFDictionaryRef _containerViews;	// 144 = 0x90
	UIColor *_dividersColor;	// 148 = 0x94
	float _dividersWidth;	// 152 = 0x98
}
@property(assign, nonatomic) int columnCount;	// G=0x2f7527e9; S=0x2f7527f9; @synthesize=_columnCount
@property(assign, nonatomic) float columnWidth;	// G=0x2f7527c9; S=0x2f7527d9; @synthesize=_columnWidth
@property(assign, nonatomic) id delegate;	// G=0x2f7527a9; S=0x2f7527b9; @synthesize=_delegate
+ (double)defaultDurationForTransition:(int)transition;	// 0x2f7515c9
- (id)initWithCoder:(id)coder;	// 0x2f751339
- (id)initWithFrame:(CGRect)frame;	// 0x2f751259
- (id)_containerViewForView:(id)view;	// 0x2f75260d
- (id)_dividerViewForView:(id)view;	// 0x2f752459
- (BOOL)_isTransitioningFromView:(id)view;	// 0x2f7521dd
- (void)_navigationTransitionDidStop;	// 0x2f752259
- (void)_removeContainerViewForView:(id)view;	// 0x2f752765
- (void)_removeDividerViewForView:(id)view;	// 0x2f7525c9
// declared property getter: - (int)columnCount;	// 0x2f7527e9
// declared property getter: - (float)columnWidth;	// 0x2f7527c9
- (void)dealloc;	// 0x2f751539
// declared property getter: - (id)delegate;	// 0x2f7527a9
- (void)encodeWithCoder:(id)coder;	// 0x2f751459
- (BOOL)isTransitioning;	// 0x2f7521c9
// declared property setter: - (void)setColumnCount:(int)count;	// 0x2f7527f9
// declared property setter: - (void)setColumnWidth:(float)width;	// 0x2f7527d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f7527b9
- (BOOL)transition:(int)transition fromViews:(id)views toViews:(id)views3;	// 0x2f751619
- (BOOL)transition:(int)transition toViews:(id)views;	// 0x2f7515f9
@end

