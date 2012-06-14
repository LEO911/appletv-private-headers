/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRApplianceCategory, NSTimer, NSArray, BRPanelControl, BRImageControl;
@protocol ATVApplianceTopPanelControlDelegate;

__attribute__((visibility("hidden")))
@interface ATVApplianceTopPanelControl : BRControl {
@private
	BRPanelControl *_panel;	// 48 = 0x30
	BRControl *_bottomDivider;	// 52 = 0x34
	BRImageControl *_glow;	// 56 = 0x38
	BRControl *_leftFade;	// 60 = 0x3c
	BRControl *_rightFade;	// 64 = 0x40
	BOOL _rebuildPanel;	// 68 = 0x44
	int _selectedIndex;	// 72 = 0x48
	NSArray *_categories;	// 76 = 0x4c
	id<ATVApplianceTopPanelControlDelegate> _delegate;	// 80 = 0x50
	int _focusedIndex;	// 84 = 0x54
	NSTimer *_updateSelectedIndexTimer;	// 88 = 0x58
	BOOL _centerFocusLayout;	// 92 = 0x5c
	double _timeSinceFocusMoved;	// 96 = 0x60
}
@property(assign, nonatomic) BOOL _centerFocusLayout;	// G=0x367e6f3d; S=0x367e6f4d; @synthesize
@property(assign, nonatomic) int _focusedIndex;	// G=0x367e6efd; S=0x367e6f0d; @synthesize
@property(assign, nonatomic) double _timeSinceFocusMoved;	// G=0x367e6f5d; S=0x367e6f75; @synthesize
@property(assign, nonatomic, setter=_setUpdateSelectedIndexTimer:) NSTimer *_updateSelectedIndexTimer;	// G=0x367e6f1d; S=0x367e6f2d; @synthesize
@property(retain, nonatomic) NSArray *categories;	// G=0x367e6eb9; S=0x367e6ec9; @synthesize=_categories
@property(assign, nonatomic) id<ATVApplianceTopPanelControlDelegate> delegate;	// G=0x367e6eed; S=0x367e65e5; @synthesize=_delegate
@property(retain, nonatomic) BRApplianceCategory *selectedCategory;	// G=0x367e643d; S=0x367e63b9; @dynamic
- (id)init;	// 0x367e5d15
- (void)_accessibilityUpdateSelection;	// 0x367e6f89
// declared property getter: - (BOOL)_centerFocusLayout;	// 0x367e6f3d
// declared property getter: - (int)_focusedIndex;	// 0x367e6efd
- (int)_indexForCategoryWithIdentifier:(id)identifier;	// 0x367e7705
- (void)_selectedCategoryDidChange;	// 0x367e7159
- (void)_setSelectedIndex:(int)index;	// 0x367e70b5
// declared property setter: - (void)_setUpdateSelectedIndexTimer:(id)timer;	// 0x367e6f2d
- (void)_setUpdateSelectedIndexTimer:(id)timer;	// 0x367e6ffd
// declared property getter: - (double)_timeSinceFocusMoved;	// 0x367e6f5d
- (void)_updateRepositioning;	// 0x367e7199
- (void)_updateSelectedIndex;	// 0x367e7059
// declared property getter: - (id)_updateSelectedIndexTimer;	// 0x367e6f1d
- (BOOL)brEventAction:(id)action;	// 0x367e6bad
// declared property getter: - (id)categories;	// 0x367e6eb9
- (void)controlWasFocused;	// 0x367e6aa9
- (void)controlWasUnfocused;	// 0x367e6b5d
- (void)dealloc;	// 0x367e6309
// declared property getter: - (id)delegate;	// 0x367e6eed
- (void)layoutSubcontrols;	// 0x367e665d
// declared property getter: - (id)selectedCategory;	// 0x367e643d
// declared property setter: - (void)setCategories:(id)categories;	// 0x367e6ec9
- (void)setCategories:(id)categories defaultCategory:(id)category;	// 0x367e6485
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x367e65e5
// declared property setter: - (void)setSelectedCategory:(id)category;	// 0x367e63b9
// declared property setter: - (void)set_centerFocusLayout:(BOOL)layout;	// 0x367e6f4d
// declared property setter: - (void)set_focusedIndex:(int)index;	// 0x367e6f0d
// declared property setter: - (void)set_timeSinceFocusMoved:(double)moved;	// 0x367e6f75
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x367e65f5
@end
